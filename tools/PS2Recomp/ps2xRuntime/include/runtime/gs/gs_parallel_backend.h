#pragma once
#include "ps2_thread_cpu.h"
#include <cstdio>
#include <string>
#include "runtime/gs/gs_cpu_backend.h"
#include "runtime/gs/gs_parallel_api.h"
#include "runtime/gs/ps2_gs_common.h"
#include "runtime/platform_dl.h"
#include "ThreadNaming.h"
#include <pthread.h>
#include "runtime/ps2_wait_stats.h"
#include <cstdlib>
#include <stdexcept>
#include <cstring>
#include <algorithm>
#include <condition_variable>
#include <deque>
#include <mutex>
#include <thread>
#include <vector>
// CPU helper only converts readback for the existing host presentation interface.
// Submit/CLUT/upload never invoke CPU rasterization.
class GSParallelBackend final : public GSRasterBackend {
 void* library=nullptr;void* gpu=nullptr;const GSParallelAPI* api=nullptr;
 uint8_t* mirror=nullptr;uint32_t size=0;
 mutable bool mirrorDirty=true;
 mutable std::recursive_mutex mutex;
 bool nativePresentation=false;
 mutable GSCpuBackend decoder;
 GSTransferSnapshot transfer{};
 std::vector<uint8_t> fifoBytes;size_t fifoOffset=0;
 // Feed thread: GIF packets, register writes, uploads, clears and flushes are appended to a byte stream on
 // the caller and replayed in order on a worker, so the game thread no longer waits for the GPU inside
 // paraLLEl-GS flushes or behind the presenter. Anything that reads GPU state drains the stream first.
 // PS2X_GS_PARALLEL_THREAD=0 keeps the old synchronous feed.
 enum:uint32_t{kFeedGif=1,kFeedReg,kFeedImage,kFeedClear,kFeedFlush};
 static constexpr size_t kFeedSegmentBytes=256u*1024u;
 static constexpr size_t kFeedMaxQueuedBytes=48u*1024u*1024u;
 bool threaded=false;
 mutable std::mutex feedMutex;
 mutable std::condition_variable feedWork,feedDone;
 mutable std::vector<uint8_t> feedCurrent;
 mutable std::deque<std::pair<std::vector<uint8_t>,uint64_t>> feedQueue; // segment, sequence of its last record
 mutable std::vector<std::vector<uint8_t>> feedSpare;
 mutable size_t feedQueuedBytes=0;
 mutable uint64_t feedSubmitted=0,feedCompleted=0,feedCurrentLast=0;
 bool feedStop=false;
 std::thread feedThread;
 void feedSealLocked()const{
  if(feedCurrent.empty())return;
  feedQueuedBytes+=feedCurrent.size();
  feedQueue.emplace_back(std::move(feedCurrent),feedCurrentLast);
  if(!feedSpare.empty()){feedCurrent=std::move(feedSpare.back());feedSpare.pop_back();}else feedCurrent={};
  feedCurrent.clear();
  feedWork.notify_one();
 }
 void feedAppend(uint32_t kind,uint32_t a,const uint8_t* data,uint32_t bytes)const{
  std::unique_lock<std::mutex> lock(feedMutex);
  if(feedQueuedBytes>kFeedMaxQueuedBytes){Ps2xWaitTimer waited(kPs2xWaitVu1ForGsRoom);feedDone.wait(lock,[&]{return feedQueuedBytes<=kFeedMaxQueuedBytes/2u;});}
  const uint32_t header[3]={kind,a,bytes};
  // Appended, not resized and then filled: resizing would zero the bytes first.
  const uint8_t* const head=reinterpret_cast<const uint8_t*>(header);
  if(feedCurrent.capacity()<feedCurrent.size()+sizeof(header)+bytes)feedCurrent.reserve(std::max(kFeedSegmentBytes+sizeof(header)+bytes,feedCurrent.capacity()*2u));
  feedCurrent.insert(feedCurrent.end(),head,head+sizeof(header));
  if(bytes)feedCurrent.insert(feedCurrent.end(),data,data+bytes);
  feedCurrentLast=++feedSubmitted;
  if(feedCurrent.size()>=kFeedSegmentBytes||kind==kFeedFlush)feedSealLocked();
 }
 // Waits until everything appended before this call has reached paraLLEl-GS.
 void feedDrain()const{
  if(!threaded)return;
  std::unique_lock<std::mutex> lock(feedMutex);
  feedSealLocked();
  const uint64_t target=feedSubmitted;
  feedDone.wait(lock,[&]{return feedCompleted>=target;});
 }
 void feedReplay(const std::vector<uint8_t>& segment){
  std::lock_guard<std::recursive_mutex> lock(mutex);
  size_t at=0;
  while(at+12u<=segment.size()){
   uint32_t header[3];std::memcpy(header,segment.data()+at,sizeof(header));at+=sizeof(header);
   const uint8_t* data=segment.data()+at;at+=header[2];
   switch(header[0]){
   case kFeedGif:api->gif(gpu,header[1],data,header[2]);break;
   case kFeedReg:{uint64_t value;std::memcpy(&value,data,8);api->reg(gpu,uint8_t(header[1]),value);break;}
   case kFeedImage:api->image(gpu,data,header[2]);break;
   case kFeedClear:{uint32_t v[10];std::memcpy(v,data,sizeof(v));api->clear(gpu,v[0],v[1],v[2],v[3],v[4],v[5],v[6],v[7],v[8]);break;}
   case kFeedFlush:api->flush(gpu);break;
   default:break;
   }
  }
  mirrorDirty=true;
 }
 void feedLoop(){
  std::unique_lock<std::mutex> lock(feedMutex);
  for(;;){
   feedWork.wait(lock,[&]{return feedStop||!feedQueue.empty();});
   if(feedQueue.empty())return; // stop requested and nothing left
   auto item=std::move(feedQueue.front());feedQueue.pop_front();
   lock.unlock();
   feedReplay(item.first);
   lock.lock();
   feedQueuedBytes-=item.first.size();
   feedCompleted=item.second;
   if(feedSpare.size()<8u)feedSpare.push_back(std::move(item.first));
   feedDone.notify_all();
  }
 }
 void readback()const{if(mirrorDirty){api->read(gpu,0,mirror,size);mirrorDirty=false;}}
 void readDisplay(const GSPresentationRequest& request)const{
  uint32_t spanStart=0u,spanEnd=0u;
  bool any=false;
  auto consider=[&](uint64_t dispfb,uint64_t display){
   const uint32_t fbp=static_cast<uint32_t>(dispfb&0x1FFu);
   uint32_t fbw=static_cast<uint32_t>((dispfb>>9)&0x3Fu);
   const uint8_t psm=static_cast<uint8_t>((dispfb>>15)&0x1Fu);
   uint32_t height=static_cast<uint32_t>(((display>>44)&0x07FFu)+1u);
   if(fbw==0u)fbw=10u;
   if(height<64u)height=448u;
   if(height>512u)height=512u;
   const unsigned pageH=(psm==2u||psm==10u||psm==50u||psm==58u)?64u:32u;
   const uint32_t bytes=fbw*((height+pageH-1u)/pageH)*8192u;
   const uint32_t offset=fbp*8192u;
   if(offset>=size)return;
   if(offset+bytes>size){any=true;spanStart=0u;spanEnd=size;return;}
   if(!any){spanStart=offset;spanEnd=offset+bytes;any=true;return;}
   spanStart=std::min(spanStart,offset);
   spanEnd=std::max(spanEnd,offset+bytes);
  };
  if(request.pmode&1ull)consider(request.dispfb1,request.display1);
  if(request.pmode&2ull)consider(request.dispfb2,request.display2);
  if(!any){api->read(gpu,0,mirror,size);return;}
  api->read(gpu,spanStart,mirror+spanStart,spanEnd-spanStart);
 }
public:
 ~GSParallelBackend()override{
  if(feedThread.joinable()){
   {std::lock_guard<std::mutex> lock(feedMutex);feedSealLocked();feedStop=true;}
   feedWork.notify_all();feedThread.join();
  }
  if(gpu)api->destroy(gpu);if(library)ps2x::dlClose(library);
 }
 void Initialize(uint8_t* ram,uint32_t bytes)override{
  std::lock_guard<std::recursive_mutex> lock(mutex);
  if(bytes!=4*1024*1024)throw std::runtime_error("paraLLEl-GS requires 4 MiB VRAM");
  const char* module=std::getenv("PS2X_GS_PARALLEL_MODULE");const char* molten=std::getenv("PS2X_GS_MOLTENVK");
  // PS2X_GS_MOLTENVK: the Vulkan library the module loads (MoltenVK on macOS); empty = the system's Vulkan loader.
  if(!molten)molten="";
  if(!module)throw std::runtime_error("Set PS2X_GS_PARALLEL_MODULE");
  mirror=ram;size=bytes;decoder.Initialize(ram,bytes);
  // PS2X_GS_PARALLEL_FALLBACK: a second module (paraLLEl-GS) used when the first (the native renderer) cannot start,
  // e.g. a GPU without what it needs; the game then runs instead of closing.
  const char* fallback=std::getenv("PS2X_GS_PARALLEL_FALLBACK");
  for(const char* candidate:{module,fallback}){
   if(!candidate||!candidate[0])continue;
   if(candidate==fallback)std::fprintf(stderr,"[gs] renderer %s did not start; trying %s\n",module,fallback);
   library=ps2x::dlOpen(candidate);if(!library){std::fprintf(stderr,"[gs] %s: %s\n",candidate,std::string(ps2x::dlError()).c_str());continue;}
   auto get=reinterpret_cast<const GSParallelAPI*(*)()>(ps2x::dlSym(library,"black_parallel_gs_api"));
   api=get?get():nullptr;if(!api||api->version!=6||!api->scanout||!api->attach_window){std::fprintf(stderr,"[gs] %s: module ABI mismatch\n",candidate);api=nullptr;continue;}
   gpu=api->create(molten,ram);
   if(gpu)break;
   api=nullptr;
  }
  if(!gpu)throw std::runtime_error("paraLLEl-GS initialization failed");
  const char* thread=std::getenv("PS2X_GS_PARALLEL_THREAD");
  threaded=!(thread&&thread[0]=='0');
  if(threaded&&!feedThread.joinable())feedThread=std::thread([this]{ThreadNaming::SetCurrentThreadName("GS");ps2x_thread_cpu::registerCurrent("GS");feedLoop();});
 }
 bool HandlesGIF()const override{return true;}
 bool AttachNativeWindow(void* window)override{
  std::lock_guard<std::recursive_mutex> lock(mutex);
  if(!gpu||!window||!std::getenv("PS2X_GS_NATIVE_PRESENT"))return false;
  nativePresentation=api->attach_window(gpu,window)!=0;
  return nativePresentation;
 }
 bool UsesNativePresentation()const override{return nativePresentation;}
 // Optional entry points of the native renderer (looked up by name; other modules lack them).
 void SetNativeOverlay(bool open)override{
  using Fn=void(*)(void*,int);
  if(auto fn=reinterpret_cast<Fn>(library?ps2x::dlSym(library,"black_native_gs_set_overlay"):nullptr))fn(gpu,open?1:0);
 }
 void SetNativeOption(const char* key,float value)override{
  using Fn=void(*)(void*,const char*,float);
  if(auto fn=reinterpret_cast<Fn>(library?ps2x::dlSym(library,"black_native_gs_set_option"):nullptr))fn(gpu,key,value);
 }
 void FeedGIF(uint32_t path,const uint8_t* data,uint32_t bytes)override{
  if((bytes&15)||path>3)throw std::runtime_error("Invalid GIF transport for paraLLEl-GS");
  if(threaded){feedAppend(kFeedGif,path,data,bytes);return;}
  std::lock_guard<std::recursive_mutex> lock(mutex);
  api->gif(gpu,path,data,bytes);mirrorDirty=true;
 }
 void DirectRegister(uint8_t reg,uint64_t value)override{
  if(threaded){feedAppend(kFeedReg,reg,reinterpret_cast<const uint8_t*>(&value),8);return;}
  std::lock_guard<std::recursive_mutex> lock(mutex);api->reg(gpu,reg,value);mirrorDirty=true;
 }
 void NativeImage(const uint8_t* data,uint32_t bytes)override{
  if(threaded){feedAppend(kFeedImage,0,data,bytes);return;}
  std::lock_guard<std::recursive_mutex> lock(mutex);api->image(gpu,data,bytes);mirrorDirty=true;
 }
 void Reset()override{feedDrain();std::lock_guard<std::recursive_mutex> lock(mutex);if(gpu)api->reset(gpu);mirrorDirty=true;transfer={};fifoBytes.clear();fifoOffset=0;}
 void Submit(const GSPrimitiveBatch&)override{}
 void LoadClut(const GSTex0Reg&,const GSTexClutReg&)override{}
 void BeginTransfer(const GSTransferCommand& command)override{
  std::lock_guard<std::recursive_mutex> lock(mutex);transfer={};transfer.direction=command.direction;
  transfer.totalPixels=uint32_t(command.trxreg.rrw)*command.trxreg.rrh;
  fifoBytes.clear();fifoOffset=0;
  if(command.direction==1){auto psm=command.bitbltbuf.spsm;uint32_t bits=psm==1||psm==0x31?24:psm==2||psm==10||psm==0x32||psm==0x3a?16:psm==0x13||psm==0x1b?8:psm==0x14||psm==0x24||psm==0x2c?4:32;
   transfer.localToHostPendingBytes=(uint64_t(transfer.totalPixels)*bits+7)/8;
  }
 }
 void UploadImage(const uint8_t*,uint32_t)override{} // Raw GIF/native image already owns the upload.
 void Flush()override{
  if(threaded){if(gpu)feedAppend(kFeedFlush,0,nullptr,0);return;}
  std::lock_guard<std::recursive_mutex> lock(mutex);if(gpu)api->flush(gpu);
 }
 void TextureFlush()override{}
 void Sync(GSSyncReason reason)override{
  if(reason==GSSyncReason::Finish||reason==GSSyncReason::Reset)feedDrain();
  std::lock_guard<std::recursive_mutex> lock(mutex);if(gpu&&(reason==GSSyncReason::Finish||reason==GSSyncReason::Reset))api->wait(gpu);}
 PresentationFrame Present(const GSPresentationRequest& request)override{
  feedDrain(); // the flip that selected this frame is ordered after its draws
  std::lock_guard<std::recursive_mutex> lock(mutex);
  thread_local std::vector<uint8_t> scan;
  // PS2X_GS_UPSCALE=2: room for the super-sampled scanout, which paraLLEl-GS delivers at 4x the native
  // size on each axis (2560x1792 for a 640x448 frame).
  static const uint32_t kScale=[]{const char*v=std::getenv("PS2X_GS_UPSCALE");return uint32_t(v&&std::atoi(v)>=2?4:1);}();
  const uint32_t kStride=640u*4u*kScale;
  const uint32_t kMaxH=512u*kScale;
  if(!nativePresentation)scan.assign(kStride*kMaxH,0u);
  GSParallelScanout req{};
  req.pmode=request.pmode;req.smode1=request.smode1;req.smode2=request.smode2;
  req.dispfb1=request.dispfb1;req.display1=request.display1;
  req.dispfb2=request.dispfb2;req.display2=request.display2;
  req.bgcolor=request.bgcolor;req.vsyncTick=request.vsyncTick;
  req.rgba=nativePresentation?nullptr:scan.data();req.stride=nativePresentation?0:kStride;req.maxHeight=nativePresentation?0:kMaxH;
  // The feed thread may go on while this thread waits for the GPU to hand over the frame's pixels.
  req.lockContext=&mutex;
  req.unlock=[](void* m){static_cast<std::recursive_mutex*>(m)->unlock();};
  req.relock=[](void* m){static_cast<std::recursive_mutex*>(m)->lock();};
  if(api->scanout(gpu,&req)&&req.width&&req.height){
   if(nativePresentation)return {};
   PresentationFrame frame{};
   frame.pixels=std::move(scan);
   frame.width=req.width;frame.height=req.height;
   frame.displayFbp=uint32_t(request.dispfb1&0x1FFu);
   frame.sourceFbp=frame.displayFbp;
   return frame;
  }
  readDisplay(request);
  auto native=request;native.hasPreferredSource=false;
  return decoder.PresentFromLocalMemory(native);
 }
 bool ClearFramebuffer(const GSContext& context,uint32_t rgba)override{
  if(threaded){
   auto& s=context.scissor;
   const uint32_t v[10]={context.frame.fbp|(uint32_t(context.frame.psm)<<24),uint32_t(context.frame.fbw),uint32_t(s.x0),uint32_t(s.y0),uint32_t(s.x1),uint32_t(s.y1),rgba,uint32_t(context.frame.fbmsk),uint32_t(context.fba),0u};
   feedAppend(kFeedClear,0,reinterpret_cast<const uint8_t*>(v),sizeof(v));return true;
  }
  std::lock_guard<std::recursive_mutex> lock(mutex);auto& s=context.scissor;api->clear(gpu,context.frame.fbp|(uint32_t(context.frame.psm)<<24),context.frame.fbw,s.x0,s.y0,s.x1,s.y1,rgba,context.frame.fbmsk,uint32_t(context.fba));mirrorDirty=true;return true;}
 uint32_t ConsumeLocalToHostBytes(uint8_t* dst,uint32_t maxBytes)override{
  if(!dst||!maxBytes)return 0;
  if(fifoBytes.empty()&&transfer.localToHostPendingBytes)feedDrain();
  std::lock_guard<std::recursive_mutex> lock(mutex);
  if(fifoBytes.empty()&&transfer.localToHostPendingBytes){fifoBytes.resize((transfer.localToHostPendingBytes+15)&~size_t(15));api->fifo(gpu,fifoBytes.data(),uint32_t(fifoBytes.size()));}
  uint32_t n=uint32_t(std::min<size_t>(maxBytes,transfer.localToHostPendingBytes));if(n){std::memcpy(dst,fifoBytes.data()+fifoOffset,n);fifoOffset+=n;transfer.localToHostPendingBytes-=n;}return n;
 }
 uint32_t ReadVram(uint32_t p,uint32_t b,uint32_t w,uint32_t x,uint32_t y)const override{feedDrain();std::lock_guard<std::recursive_mutex> lock(mutex);readback();return decoder.ReadVram(p,b,w,x,y);}
 void WriteVram(uint32_t p,uint32_t b,uint32_t w,uint32_t x,uint32_t y,uint32_t v)override{feedDrain();std::lock_guard<std::recursive_mutex> lock(mutex);readback();decoder.WriteVram(p,b,w,x,y,v);api->write(gpu,0,mirror,size);}
 void SnapshotVram(std::vector<uint8_t>& out)const override{feedDrain();std::lock_guard<std::recursive_mutex> lock(mutex);out.resize(size);api->read(gpu,0,out.data(),size);}
 GSTransferSnapshot GetTransferSnapshot()const override{std::lock_guard<std::recursive_mutex> lock(mutex);return transfer;}
};
