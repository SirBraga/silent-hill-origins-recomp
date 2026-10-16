#pragma once
#include "runtime/gs/gs_metal_shader.h"
#include "runtime/gs/ps2_gs_memory.h"
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <stdexcept>
#include <vector>
#if defined(__APPLE__) && defined(__aarch64__)
#include <dlfcn.h>
#include <unistd.h>
class GSMetalAutoreleasePool {
 void* token=nullptr;void (*pop)(void*)=nullptr;
public:
 GSMetalAutoreleasePool(){auto push=reinterpret_cast<void*(*)()>(dlsym(RTLD_DEFAULT,"objc_autoreleasePoolPush"));pop=reinterpret_cast<void(*)(void*)>(dlsym(RTLD_DEFAULT,"objc_autoreleasePoolPop"));if(push&&pop)token=push();}
 ~GSMetalAutoreleasePool(){if(token&&pop)pop(token);}
};
class GSMetalRaster {
 using Id=void*; using Sel=void*;
 struct Size { uintptr_t width,height,depth; };
 struct Params { uint32_t p[64]{}; float v[3][13]{}; };
 Id m_device=nullptr,m_queue=nullptr,m_pipeline=nullptr,m_clutPipeline=nullptr,m_clut=nullptr,m_ram=nullptr,m_lut=nullptr,m_command=nullptr,m_encoder=nullptr;
 void* m_send=nullptr; Sel (*m_sel)(const char*)=nullptr;
 unsigned m_draws=0;uint64_t m_total=0;
 template<class R=Id,class... A> R call(Id object,const char* name,A... args) const {return reinterpret_cast<R(*)(Id,Sel,A...)>(m_send)(object,m_sel(name),args...);}
 void release(Id& object){if(object){call<void>(object,"release");object=nullptr;}}
 Id string(const char* value) const {auto getClass=reinterpret_cast<Id(*)(const char*)>(dlsym(RTLD_DEFAULT,"objc_getClass"));return call(getClass("NSString"),"stringWithUTF8String:",value);}
 void error(const char* stage,Id detail) const {const char* message=detail?call<const char*>(call(detail,"localizedDescription"),"UTF8String"):"unknown error";throw std::runtime_error(std::string("Metal ")+stage+": "+(message?message:"unknown"));}
 void begin() {
  if(!m_command){m_command=call(call(m_queue,"commandBuffer"),"retain");m_encoder=call(call(m_command,"computeCommandEncoder"),"retain");
   call<void>(m_encoder,"setBuffer:offset:atIndex:",m_ram,uintptr_t(0),uintptr_t(0));call<void>(m_encoder,"setBuffer:offset:atIndex:",m_lut,uintptr_t(0),uintptr_t(1));call<void>(m_encoder,"setBuffer:offset:atIndex:",m_clut,uintptr_t(0),uintptr_t(3));}
 }
 void finishDispatch(){call<void>(m_encoder,"memoryBarrierWithScope:",uintptr_t(1));if(++m_draws>=4096)sync();}
public:
 explicit GSMetalRaster(uint8_t* ram,const uint16_t* initialClut) {
  m_send=dlsym(RTLD_DEFAULT,"objc_msgSend");m_sel=reinterpret_cast<Sel(*)(const char*)>(dlsym(RTLD_DEFAULT,"sel_registerName"));
  if(!m_send||!m_sel){dlopen("/usr/lib/libobjc.A.dylib",RTLD_NOW|RTLD_GLOBAL);m_send=dlsym(RTLD_DEFAULT,"objc_msgSend");m_sel=reinterpret_cast<Sel(*)(const char*)>(dlsym(RTLD_DEFAULT,"sel_registerName"));}
  void* metal=dlopen("/System/Library/Frameworks/Metal.framework/Metal",RTLD_NOW|RTLD_GLOBAL);
  auto create=metal?reinterpret_cast<Id(*)()>(dlsym(metal,"MTLCreateSystemDefaultDevice")):nullptr;
  if(!create||!m_send||!m_sel)throw std::runtime_error("Metal runtime unavailable");
  GSMetalAutoreleasePool pool;
  m_device=create();if(!m_device)throw std::runtime_error("Metal device unavailable");
  m_queue=call(m_device,"newCommandQueue");
  Id compileError=nullptr;auto getClass=reinterpret_cast<Id(*)(const char*)>(dlsym(RTLD_DEFAULT,"objc_getClass"));
  Id options=call(call(getClass("MTLCompileOptions"),"alloc"),"init");call<void>(options,"setFastMathEnabled:",false);
  Id library=call(m_device,"newLibraryWithSource:options:error:",string(kGsMetalShader),options,&compileError);release(options);
  if(!library)error("shader compilation",compileError);
  Id function=call(library,"newFunctionWithName:",string("raster"));
  m_pipeline=call(m_device,"newComputePipelineStateWithFunction:error:",function,&compileError);release(function);
  function=call(library,"newFunctionWithName:",string("clutLoad"));
  m_clutPipeline=call(m_device,"newComputePipelineStateWithFunction:error:",function,&compileError);release(function);release(library);
  if(!m_pipeline||!m_clutPipeline)error("pipeline",compileError);
  m_clut=call(m_device,"newBufferWithBytes:length:options:",initialClut,uintptr_t(1024),uintptr_t(0));
  m_ram=call(m_device,"newBufferWithBytesNoCopy:length:options:deallocator:",ram,uintptr_t(4*1024*1024),uintptr_t(0),Id(nullptr));
  if(!m_ram)throw std::runtime_error("Metal shared VRAM allocation failed");
  std::vector<uint32_t> lut;
  for(auto format:{0u,48u,19u,20u,2u,10u}) {unsigned w=(format==19||format==20)?128:64,h=format==20?128:(format==19||format==2||format==10)?64:32;
   for(unsigned y=0;y<h;++y)for(unsigned x=0;x<w;++x)lut.push_back(GSMem::PixelBitAddress(format,0,2,x,y));}
  m_lut=call(m_device,"newBufferWithBytes:length:options:",lut.data(),uintptr_t(lut.size()*4),uintptr_t(0));
  if(!m_lut||!m_queue)throw std::runtime_error("Metal command resources unavailable");
  std::fprintf(stderr,"[gs-metal] compute raster ready: %s, shared PS2 VRAM\n",call<const char*>(call(m_device,"name"),"UTF8String"));
 }
 ~GSMetalRaster(){try{sync();}catch(...){}release(m_lut);release(m_ram);release(m_clut);release(m_clutPipeline);release(m_pipeline);release(m_queue);release(m_device);}
 static bool requested(){const char* e=std::getenv("PS2X_GS_METAL");return e&&std::strcmp(e,"0")!=0&&*e;}
 static bool aligned(uint8_t* ram){return ram&&(uintptr_t(ram)%uintptr_t(sysconf(_SC_PAGESIZE)))==0;}
 void sync() {
  GSMetalAutoreleasePool pool;
  if(!m_command)return;
  call<void>(m_encoder,"endEncoding");release(m_encoder);call<void>(m_command,"commit");call<void>(m_command,"waitUntilCompleted");
  uintptr_t status=call<uintptr_t>(m_command,"status");if(status!=4)error("command execution",call(m_command,"error"));
  release(m_command);m_draws=0;
 }
 uint64_t draws()const{return m_total;}
 void copyClut(uint16_t* out) const {std::memcpy(out,call<void*>(m_clut,"contents"),1024);}
 void setClut(const uint16_t* data){sync();std::memcpy(call<void*>(m_clut,"contents"),data,1024);}
 void loadClut(const GSTex0Reg& tex,const GSTexClutReg& tc) {
  GSMetalAutoreleasePool pool;Params a{};auto& p=a.p;bool four=tex.psm==20||tex.psm==36||tex.psm==44,sixteen=tex.cpsm==2||tex.cpsm==10;
  p[15]=tex.cbp;p[16]=tc.cbw?tc.cbw:1;p[17]=tex.cpsm;p[18]=four?16:256;p[19]=(tex.csa&(sixteen?31u:15u))<<4;
  p[24]=tex.csm==0&&!sixteen&&!four;p[20]=p[24]?p[19]:0;p[21]=tex.csm;p[22]=uint32_t(tc.cou)<<4;p[23]=tc.cov;
  begin();call<void>(m_encoder,"setComputePipelineState:",m_clutPipeline);call<void>(m_encoder,"setBytes:length:atIndex:",static_cast<const void*>(&a),uintptr_t(sizeof(a)),uintptr_t(2));
  call<void>(m_encoder,"dispatchThreads:threadsPerThreadgroup:",Size{uintptr_t(p[18]-p[20]),1,1},Size{64,1,1});finishDispatch();
 }
 void submit(const GSPrimitiveBatch& b,int minX,int minY,int maxX,int maxY,const uint32_t* clut) {
  GSMetalAutoreleasePool pool;
  if(maxX<minX||maxY<minY)return;
  Params a{};auto& p=a.p;const auto& s=b.state;const auto& c=s.context;
  p[0]=b.state.prim.type==GS_PRIM_SPRITE?6:3;
  p[1]=(s.prim.iip?1:0)|(s.prim.tme?2:0)|(s.prim.fst?4:0)|(s.prim.fge?8:0)|(s.prim.abe?16:0)|(s.pabe?32:0)|(s.linearFilter?64:0);
  p[2]=c.frame.fbp*32;p[3]=std::max(c.frame.fbw,1u);p[4]=c.frame.psm;p[5]=c.frame.fbmsk;p[6]=c.zbuf.zbp*32;p[7]=c.zbuf.psm;p[8]=c.zbuf.zmask;p[9]=c.test;p[10]=c.alpha&255u;p[11]=(c.alpha>>32)&255;p[12]=c.fba;p[13]=s.colclamp;
  p[14]=uint32_t(s.fogR)|(uint32_t(s.fogG)<<8)|(uint32_t(s.fogB)<<16);p[15]=c.tex0.tbp0;p[16]=std::max(unsigned(c.tex0.tbw),1u);p[17]=c.tex0.psm;p[18]=s.textureWidth;p[19]=s.textureHeight;p[20]=c.tex0.tcc;p[21]=c.tex0.tfx;
  p[22]=c.clamp&3;p[23]=(c.clamp>>2)&3;p[24]=(c.clamp>>4)&1023;p[25]=(c.clamp>>14)&1023;p[26]=(c.clamp>>24)&1023;p[27]=(c.clamp>>34)&1023;
  p[28]=minX;p[29]=minY;p[30]=maxX;p[31]=maxY;p[32]=s.texa.ta0|(uint32_t(s.texa.ta1)<<8)|(uint32_t(s.texa.aem)<<16);
  p[33]=c.tex0.cpsm;p[34]=c.tex0.csm;p[35]=c.tex0.csa;
  for(unsigned j=0;j<3;++j){const auto& v=b.vertices[j];float* o=a.v[j];o[0]=v.x-float(c.xyoffset.ofx>>4);o[1]=v.y-float(c.xyoffset.ofy>>4);o[2]=v.z;o[3]=v.r;o[4]=v.g;o[5]=v.b;o[6]=v.a;o[7]=v.s;o[8]=v.t;o[9]=v.q;o[10]=v.u;o[11]=v.v;o[12]=v.fog;}
  if(p[0]==6){
   const bool rx=a.v[0][0]>a.v[1][0],ry=a.v[0][1]>a.v[1][1];
   for(unsigned j=0;j<2;++j){float* o=a.v[j];o[0]=float(int(o[0]));o[1]=float(int(o[1]));
    if(s.prim.fst){o[10]=float(b.vertices[j].u>>4);o[11]=float(b.vertices[j].v>>4);}else{float q=std::fabs(b.vertices[1].q)>1e-8f?b.vertices[1].q:1.f;o[10]=(o[7]/q)*p[18];o[11]=(o[8]/q)*p[19];}}
   if(rx){std::swap(a.v[0][0],a.v[1][0]);std::swap(a.v[0][10],a.v[1][10]);}if(ry){std::swap(a.v[0][1],a.v[1][1]);std::swap(a.v[0][11],a.v[1][11]);}
  }
  begin();call<void>(m_encoder,"setComputePipelineState:",m_pipeline);
  call<void>(m_encoder,"setBytes:length:atIndex:",static_cast<const void*>(&a),uintptr_t(sizeof(a)),uintptr_t(2));
  call<void>(m_encoder,"dispatchThreads:threadsPerThreadgroup:",Size{uintptr_t(maxX-minX+1),uintptr_t(maxY-minY+1),1},Size{8,8,1});
  ++m_total;finishDispatch();
 }
};
#else
class GSMetalRaster {public:static bool requested(){return false;}static bool aligned(uint8_t*){return false;}explicit GSMetalRaster(uint8_t*,const uint16_t*){}void copyClut(uint16_t*)const{}void setClut(const uint16_t*){}void loadClut(const GSTex0Reg&,const GSTexClutReg&){}void sync(){}uint64_t draws()const{return 0;}void submit(const GSPrimitiveBatch&,int,int,int,int,const uint32_t*){}};
#endif
