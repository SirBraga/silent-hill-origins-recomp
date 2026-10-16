#pragma once
// Compute rasterization writes the PS2's swizzled local memory directly. Each
// dispatch covers one primitive; ordered dispatches preserve blend/depth state.
static constexpr const char *kGsMetalShader = R"MSL(
#include <metal_stdlib>
using namespace metal;
struct Params { uint p[64]; float v[3][13]; };
uint bitAddress(uint psm,uint bp,uint bw,uint x,uint y,device const uint* lut) {
 uint width=64,height=32,base=0,bits=32,offset=0;
 switch(psm) {
 case 48: case 49: base=2048;break;
 case 50: width=64;height=64;base=36864;bits=16;break;
 case 58: width=64;height=64;base=40960;bits=16;break;
 case 19: width=128;height=64;base=4096;bits=8;break;
 case 20: width=128;height=128;base=12288;bits=4;break;
 case 2: width=64;height=64;base=28672;bits=16;break;
 case 10: width=64;height=64;base=32768;bits=16;break;
 case 27: offset=24;break;
 case 36: offset=24;break;
 case 44: offset=28;break;
 }
 return ((bp*2048+((y/height)*((bw*64)/width)+x/width)*65536+lut[base+(y%height)*width+x%width]+offset)&33554431u);
}
uint readPixel(device const uint* ram,uint psm,uint bp,uint bw,uint x,uint y,device const uint* lut) {
 uint bit=bitAddress(psm,bp,bw,x,y,lut),value=ram[bit>>5];
 switch(psm) {
 case 1:case 49:return value&0xffffffu;
 case 2:case 10:case 50:case 58:return (value>>(bit&31))&65535u;
 case 19:case 27:return (value>>(bit&31))&255u;
 case 20:case 36:case 44:return (value>>(bit&31))&15u;
 default:return value;
 }
}
void writeDepth16(device uint* ram,uint bit,uint value) {
 uint word=bit>>5,shift=bit&31u,mask=0xffffu<<shift;
 device atomic_uint* target=reinterpret_cast<device atomic_uint*>(ram+word);
 uint old=atomic_load_explicit(target,memory_order_relaxed);
 for(;;){uint desired=(old&~mask)|((value&0xffffu)<<shift);
  if(atomic_compare_exchange_weak_explicit(target,&old,desired,memory_order_relaxed,memory_order_relaxed))break;}
}
int wrap(int x,int size,uint mode,uint lo,uint hi) {
 switch(mode){case 0:return uint(x)&uint(size-1);case 1:return clamp(x,0,size-1);case 2:return min(max(x,int(lo)),int(hi));default:return (uint(x)&lo)|hi;}
}
int4 unpack(uint c){return int4(c&255u,(c>>8)&255u,(c>>16)&255u,c>>24);}
uint pack(int4 c){return uint(c.x)|(uint(c.y)<<8)|(uint(c.z)<<16)|(uint(c.w)<<24);}
int4 texel(int x,int y,uint tbp,uint tbw,uint width,uint height,uint level,constant Params& b,device const uint* ram,device const uint* lut,device const ushort* clut) {
 constant uint* p=b.p;
 x=wrap(x,width,p[22],p[24]>>level,p[25]>>level);y=wrap(y,height,p[23],p[26]>>level,p[27]>>level);
 uint raw=readPixel(ram,p[17],tbp,tbw,uint(x),uint(y),lut);
 uint fmt=p[17];
 if(fmt==19||fmt==20||fmt==27||fmt==36||fmt==44) {
  bool four=fmt==20||fmt==36||fmt==44,sixteen=p[33]==2||p[33]==10;
  uint base=(p[35]&(sixteen?31u:15u))<<4,index=(base+(four?(raw&15u):raw))&(sixteen?511u:255u);
  if(!sixteen&&p[34]==0&&!four)index=min((raw&240u)+base,240u)+(raw&15u);
  uint clutIndex=p[46]+index;raw=uint(clut[clutIndex]);if(!sixteen)raw|=uint(clut[clutIndex+256])<<16;fmt=p[33];
 }
 int4 c=unpack(raw);bool zero=(raw==0);
 if(fmt==2||fmt==10||fmt==50||fmt==58) {c=int4((raw&31u)<<3,((raw>>5)&31u)<<3,((raw>>10)&31u)<<3,((raw>>15)&1u)?((p[32]>>8)&255u):(p[32]&255u));}
 if(fmt==1||fmt==49)c.w=p[32]&255u;
 if((fmt==1||fmt==49||fmt==2||fmt==10||fmt==50||fmt==58)&&((p[32]>>16)&1u)&&zero)c.w=0;
 return c;
}
int4 sample(float2 uv,float q,constant Params& b,device const uint* ram,device const uint* lut,device const ushort* clut) {
 constant uint* p=b.p;ulong tex1=ulong(p[39])|(ulong(p[40])<<32u);
 uint tbp=p[15],tbw=p[16],width=p[18],height=p[19],level=0u;bool linear=p[45]!=0u;
 bool hasMipRegs=(p[41]|p[42]|p[43]|p[44])!=0u;
 if(tex1==0ul&&!hasMipRegs){if(!linear)return texel(int(uv.x),int(uv.y),tbp,tbw,width,height,0u,b,ram,lut,clut);float2 pos=uv-0.5f,fl=floor(pos),f=pos-fl;int2 lo=int2(fl);int4 a=texel(lo.x,lo.y,tbp,tbw,width,height,0u,b,ram,lut,clut);if(f.x<1.f/32&&f.y<1.f/32)return a;float4 top=float4(a)+(float4(texel(lo.x+1,lo.y,tbp,tbw,width,height,0u,b,ram,lut,clut))-float4(a))*f.x;int4 c=texel(lo.x,lo.y+1,tbp,tbw,width,height,0u,b,ram,lut,clut);float4 bottom=float4(c)+(float4(texel(lo.x+1,lo.y+1,tbp,tbw,width,height,0u,b,ram,lut,clut))-float4(c))*f.x;return int4(floor(top+(bottom-top)*f.y+0.5f));}
 uint mmin=uint((tex1>>6u)&7u),mxl=min(uint((tex1>>2u)&7u),6u),lodShift=uint((tex1>>19u)&3u);
 int kRaw=int((tex1>>32u)&0xfffu);if(kRaw&2048)kRaw-=4096;float k=float(kRaw)/16.f;
 float lod=k;if((tex1&1u)==0u){float aq=max(abs(q),1.e-8f);lod=-fast::log2(aq)*float(1u<<lodShift)+k;}
 linear=((tex1>>5u)&1u)!=0u;
 if(lod>0.f){if(mmin>=2u){level=uint(clamp(int(floor(lod+0.5f)),0,int(mxl)));linear=(mmin&4u)!=0u;}else linear=mmin==1u;}
 if(level>0u){ulong reg=level<=3u?(ulong(p[41])|(ulong(p[42])<<32u)):(ulong(p[43])|(ulong(p[44])<<32u));uint slot=(level-1u)%3u,shift=slot*20u;uint bp=uint((reg>>shift)&0x3fffu),bw=uint((reg>>(shift+14u))&0x3fu);if(bp!=0u||bw!=0u){tbp=bp;tbw=max(bw,1u);width=max(1u,width>>level);height=max(1u,height>>level);}else level=0u;}
 if(level>0u)uv*=float2(float(width)/float(p[18]),float(height)/float(p[19]));
 if(!linear)return texel(int(uv.x),int(uv.y),tbp,tbw,width,height,level,b,ram,lut,clut);
 float2 pos=uv-0.5f,fl=floor(pos),f=pos-fl;int2 lo=int2(fl);
 int4 a=texel(lo.x,lo.y,tbp,tbw,width,height,level,b,ram,lut,clut);if(f.x<1.f/32&&f.y<1.f/32)return a;
 float4 top=float4(a)+(float4(texel(lo.x+1,lo.y,tbp,tbw,width,height,level,b,ram,lut,clut))-float4(a))*f.x;
 int4 c=texel(lo.x,lo.y+1,tbp,tbw,width,height,level,b,ram,lut,clut);float4 bottom=float4(c)+(float4(texel(lo.x+1,lo.y+1,tbp,tbw,width,height,level,b,ram,lut,clut))-float4(c))*f.x;
 return int4(floor(top+(bottom-top)*f.y+0.5f));
}
bool alphaTest(uint test,int a) {if(!(test&1u))return true;int r=(test>>4)&255u;switch((test>>1)&7u){case 0:return false;case 1:return true;case 2:return a<r;case 3:return a<=r;case 4:return a==r;case 5:return a>=r;case 6:return a>r;default:return a!=r;}}
int3 pick(uint selector,int3 src,int3 dst){return selector==0?src:selector==1?dst:int3(0);}
kernel void clutLoad(device const uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device ushort* clut [[buffer(3)]],uint tid [[thread_position_in_grid]]) {
 constant uint* p=b.p;uint entry=tid+p[20];if(entry>=p[18])return;
 uint x,y,bw=1;
 if(p[21]==0){uint swizzled=(entry&~24u)|((entry&8u)<<1)|((entry&16u)>>1);x=swizzled&15u;y=swizzled>>4;}
 else{x=p[22]+entry;y=p[23];bw=p[16];}
 uint raw=readPixel(ram,p[17],p[15],bw,x,y,lut);bool sixteen=p[17]==2||p[17]==10;
 uint destination=(p[24]?entry:p[19]+entry)&(sixteen?511u:255u);
 destination+=p[25];clut[destination]=ushort(raw);if(!sixteen)clut[destination+256]=ushort(raw>>16);
}
struct ImageUploadOp { uint srcByteOffset; uint dbp; uint dbw; uint dpsm; uint dsax; uint dsay; uint rrw; uint startPixel; uint pixelCount; uint bitsPerPixel; };
kernel void imageUpload(device const uint* src [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device const ImageUploadOp* ops [[buffer(3)]],device uint* ram [[buffer(4)]],uint3 tid [[thread_position_in_grid]]) {
 if(tid.y>=b.p[0])return;ImageUploadOp op=ops[tid.y];uint pixelIndex=tid.x;if(pixelIndex>=op.pixelCount)return;uint pixel=op.startPixel+pixelIndex;
 uint x=op.dsax+pixel%op.rrw,y=op.dsay+pixel/op.rrw;
 uint bits=op.bitsPerPixel,sourceBit=op.srcByteOffset*8u+pixelIndex*bits,sourceWord=sourceBit>>5u,sourceShift=sourceBit&31u;
 uint value=src[sourceWord]>>sourceShift;
 if(sourceShift+bits>32u)value|=src[sourceWord+1u]<<(32u-sourceShift);
 uint destinationBit=bitAddress(op.dpsm,op.dbp,op.dbw,x,y,lut),destinationWord=destinationBit>>5u;
 if(bits==32u){ram[destinationWord]=value;return;}
 uint mask=((1u<<bits)-1u)<<(destinationBit&31u);
 device atomic_uint* target=reinterpret_cast<device atomic_uint*>(ram+destinationWord);
 uint old=atomic_load_explicit(target,memory_order_relaxed);
 for(;;){uint desired=(old&~mask)|((value<<(destinationBit&31u))&mask);
  if(atomic_compare_exchange_weak_explicit(target,&old,desired,memory_order_relaxed,memory_order_relaxed))break;}
}
kernel void imageUploadUniform(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant uint* u [[buffer(2)]],uint3 tid [[thread_position_in_grid]]) {
 // u (uniform data): [opCount, payloadWord, pad, pad] + ImageUploadOp[opCount] + payload words.
 if(tid.y>=u[0])return;constant uint* o=u+4u+tid.y*10u;constant uint* src=u+u[1];
 uint pixelIndex=tid.x;if(pixelIndex>=o[8])return;uint pixel=o[7]+pixelIndex;
 uint x=o[4]+pixel%o[6],y=o[5]+pixel/o[6];
 uint bits=o[9],sourceBit=o[0]*8u+pixelIndex*bits,sourceWord=sourceBit>>5u,sourceShift=sourceBit&31u;
 uint value=src[sourceWord]>>sourceShift;
 if(sourceShift+bits>32u)value|=src[sourceWord+1u]<<(32u-sourceShift);
 uint destinationBit=bitAddress(o[3],o[1],o[2],x,y,lut),destinationWord=destinationBit>>5u;
 if(bits==32u){ram[destinationWord]=value;return;}
 uint mask=((1u<<bits)-1u)<<(destinationBit&31u);
 device atomic_uint* target=reinterpret_cast<device atomic_uint*>(ram+destinationWord);
 uint old=atomic_load_explicit(target,memory_order_relaxed);
 for(;;){uint desired=(old&~mask)|((value<<(destinationBit&31u))&mask);
  if(atomic_compare_exchange_weak_explicit(target,&old,desired,memory_order_relaxed,memory_order_relaxed))break;}
}
void writeGsPixel(device uint* ram,uint psm,uint bit,uint value) {
 uint word=bit>>5,shift=bit&31u,old=ram[word];
 if(psm==1u||psm==49u){ram[word]=(old&0xff000000u)|(value&0x00ffffffu);return;}
 if(psm==2u||psm==10u||psm==50u||psm==58u){writeDepth16(ram,bit,value);return;}
 uint mask=0xffffffffu;
 if(psm==19u||psm==27u)mask=0xffu;
 if(psm==20u||psm==36u||psm==44u)mask=0xfu;
 if(mask==0xffffffffu)ram[word]=value;
 else ram[word]=(old&~(mask<<shift))|((value&mask)<<shift);
}
uint frameFormat(uint psm) {return psm==48u?0u:psm==49u?1u:psm==50u?2u:psm==58u?10u:psm;}
uint expandFrame(uint psm,uint raw) {
 psm=frameFormat(psm);
 if(psm==2u||psm==10u)return ((raw&31u)<<3u)|(((raw>>5u)&31u)<<11u)|(((raw>>10u)&31u)<<19u)|(((raw>>15u)&1u)<<31u);
 return raw;
}
uint compressFrame(uint psm,uint rgba) {
 psm=frameFormat(psm);
 if(psm==2u||psm==10u)return ((rgba&255u)>>3u)|((((rgba>>8u)&255u)>>3u)<<5u)|((((rgba>>16u)&255u)>>3u)<<10u)|((((rgba>>24u)&255u)>>7u)<<15u);
 return rgba;
}
int ditherValue(constant Params& b,uint x,uint y) {
 uint index=(y&3u)*4u+(x&3u),bits=index<8u?b.p[36]:b.p[37],shift=(index&7u)*4u;
 int value=int((bits>>shift)&7u);return (value&4)?value-8:value;
}
kernel void localTransfer(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],uint tid [[thread_position_in_grid]]) {
 constant uint* p=b.p;uint total=p[13];
 if(p[14]!=0u){if(tid!=0u)return;for(uint i=0;i<total;++i){uint x=i%p[10],y=i/p[10];if(p[12]&2u)x=p[10]-x-1u;if(p[12]&1u)y=p[11]-y-1u;uint sx=x+p[6],sy=y+p[7],dx=x+p[8],dy=y+p[9];uint value=readPixel(ram,p[0],p[1],p[2],sx,sy,lut);uint destinationBit=bitAddress(p[3],p[4],p[5],dx,dy,lut);writeGsPixel(ram,p[3],destinationBit,value);}}
 else {uint i=tid;if(i>=total)return;uint x=i%p[10],y=i/p[10];if(p[12]&2u)x=p[10]-x-1u;if(p[12]&1u)y=p[11]-y-1u;uint sx=x+p[6],sy=y+p[7],dx=x+p[8],dy=y+p[9];uint value=readPixel(ram,p[0],p[1],p[2],sx,sy,lut);uint destinationBit=bitAddress(p[3],p[4],p[5],dx,dy,lut);writeGsPixel(ram,p[3],destinationBit,value);}
}
kernel void localReadback(device const uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device uint* output [[buffer(3)]],uint tid [[thread_position_in_grid]]) {
 constant uint* p=b.p;uint wordCount=(p[9]+3u)/4u;if(tid>=wordCount)return;uint packed=0u;
 for(uint lane=0u;lane<4u;++lane){uint byteIndex=tid*4u+lane;if(byteIndex>=p[9])break;uint value=0u;
  if(p[8]==4u){uint firstPixel=byteIndex*2u,secondPixel=firstPixel+1u;uint x0=p[3]+firstPixel%p[5],y0=p[4]+firstPixel/p[5];value=readPixel(ram,p[0],p[1],p[2],x0,y0,lut)&15u;if(secondPixel<p[7]){uint x1=p[3]+secondPixel%p[5],y1=p[4]+secondPixel/p[5];value|=(readPixel(ram,p[0],p[1],p[2],x1,y1,lut)&15u)<<4u;}}
  else {uint bytesPerPixel=p[8]/8u,pixel=byteIndex/bytesPerPixel,component=byteIndex%bytesPerPixel,x=p[3]+pixel%p[5],y=p[4]+pixel/p[5];value=(readPixel(ram,p[0],p[1],p[2],x,y,lut)>>(component*8u))&255u;}
  packed|=value<<(lane*8u);
 }
 output[tid]=packed;
}
kernel void scanout(device const uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device uint* output [[buffer(3)]],uint2 tid [[thread_position_in_grid]]) {
 constant uint* p=b.p;uint x=tid.x,y=tid.y;if(x>=p[8]||y>=p[4])return;uint color=0u;
 if(x<p[3]){uint raw=readPixel(ram,p[0],p[1],p[2],x+p[5],y+p[6],lut);uint fmt=p[0];
  if(fmt==2u||fmt==10u){uint r=(raw&31u),g=(raw>>5u)&31u,bl=(raw>>10u)&31u;uint a=p[7]!=0u?((raw&0x8000u)?0x80u:0u):255u;color=(r<<3u)|(r>>2u)|((g<<3u|g>>2u)<<8u)|((bl<<3u|bl>>2u)<<16u)|(a<<24u);}
  else {uint a=fmt==1u?255u:(p[7]!=0u?(raw>>24u):255u);color=(raw&0x00ffffffu)|(a<<24u);}
 }
 output[y*p[8]+x]=color;
}
kernel void rasterLine(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device const ushort* clut [[buffer(3)]],uint tid [[thread_position_in_grid]]) {
 constant uint* p=b.p;uint ffmt=frameFormat(p[4]);int x0=int(b.v[0][0]),y0=int(b.v[0][1]),x1=int(b.v[1][0]),y1=int(b.v[1][1]);
 int dx=abs(x1-x0),dy=abs(y1-y0),sx=x0<x1?1:-1,sy=y0<y1?1:-1;uint steps=uint(max(dx,dy));
 if(tid>steps)return;
 int x=x0,y=y0;
 if(steps!=0u){uint minorX=(uint(tid)*uint(dx)+steps/2u)/steps;uint minorY=(uint(tid)*uint(dy)+steps/2u)/steps;
  if(dx>=dy){x+=sx*int(tid);y+=sy*int(minorY);}else{y+=sy*int(tid);x+=sx*int(minorX);}}
 if(x<int(p[28])||x>int(p[30])||y<int(p[29])||y>int(p[31]))return;
 float t=steps?float(tid)/float(steps):0.f;int4 color;
 if(p[0]==2u)color=int4(b.v[0][3],b.v[0][4],b.v[0][5],b.v[0][6]);
 else if(p[1]&1u)color=clamp(int4(float4(b.v[0][3],b.v[0][4],b.v[0][5],b.v[0][6])+float4(b.v[1][3]-b.v[0][3],b.v[1][4]-b.v[0][4],b.v[1][5]-b.v[0][5],b.v[1][6]-b.v[0][6])*t),int4(0),int4(255));
 else color=int4(b.v[1][3],b.v[1][4],b.v[1][5],b.v[1][6]);
 uint z=p[0]==2u?uint(b.v[0][2]):uint(b.v[0][2]+(b.v[1][2]-b.v[0][2])*t);int fog=p[0]==2u?int(b.v[0][12]):int(b.v[0][12]+(b.v[1][12]-b.v[0][12])*t);
 if(p[1]&8u)color.xyz=((color.xyz*fog)>>8)+(((255-fog)*unpack(p[14]).xyz)>>8);
 bool writeRgb=true,writeAlpha=true,writeDepth=true;
 if(!alphaTest(p[9],color.w)){switch((p[9]>>12)&3u){case 0:return;case 1:writeDepth=false;break;case 2:writeRgb=false;writeAlpha=false;break;case 3:writeDepth=false;writeAlpha=ffmt!=0;break;}}
 uint fbit=bitAddress(p[4],p[2],p[3],uint(x),uint(y),lut),fa=fbit>>5,zbit=bitAddress(p[7],p[6],p[3],uint(x),uint(y),lut),za=zbit>>5;
 uint rawDest=ram[fa];if(ffmt==2u||ffmt==10u)rawDest=(rawDest>>(fbit&31u))&0xffffu;
 uint dest=expandFrame(p[4],rawDest),oldZ=ram[za];if(p[7]==49)oldZ&=0xffffffu;else if(p[7]==50u||p[7]==58u)oldZ=(oldZ>>(zbit&31u))&0xffffu;
 if(((p[9]>>14)&1u)&&((ffmt==0u&&((rawDest>>31)!=((p[9]>>15)&1u)))||((ffmt==2u||ffmt==10u)&&(((rawDest>>15)&1u)!=((p[9]>>15)&1u)))))return;
 switch((p[9]>>17)&3u){case 0:return;case 1:break;case 2:if(z<oldZ)return;break;case 3:if(z<=oldZ)return;break;}
 if(writeRgb||writeAlpha){
  if((p[1]&16u)&&!((p[1]&32u)&&!(color.w&128))){int4 dst=unpack(dest);if(ffmt==1)dst.w=128;uint csel=(p[10]>>4)&3;int alpha=csel==0?color.w:csel==1?dst.w:p[11];
   int3 rgb=(((pick(p[10]&3,color.xyz,dst.xyz)-pick((p[10]>>2)&3,color.xyz,dst.xyz))*alpha)>>7)+pick((p[10]>>6)&3,color.xyz,dst.xyz);
   color.xyz=(p[13]&1)?clamp(rgb,int3(0),int3(255)):(rgb&255);}
  if(writeAlpha&&(p[12]&1u)&&ffmt!=1)color.w|=128;
  if(p[38]!=0u&&(ffmt==2u||ffmt==10u)){int d=ditherValue(b,uint(x),uint(y));color.xyz+=d;color.xyz=(p[13]&1u)?clamp(color.xyz,int3(0),int3(255)):(color.xyz&255);}
  uint result=pack(color);result=(result&~p[5])|(dest&p[5]);
  if(!writeAlpha&&(ffmt==0u||ffmt==2u||ffmt==10u))result=(result&0x00ffffffu)|(dest&0xff000000u);
  writeGsPixel(ram,p[4],fbit,compressFrame(p[4],result));}
 if(writeDepth&&!p[8]){if(p[7]==49)ram[za]=(ram[za]&0xff000000u)|(z&0xffffffu);else if(p[7]==50u||p[7]==58u)writeDepth16(ram,zbit,z);else ram[za]=z;}
}
void rasterPixel(device uint* ram,device const uint* texRam,device const uint* lut,constant Params& b,device const ushort* clut,uint2 tid) {
 constant uint* p=b.p;uint ffmt=frameFormat(p[4]);uint x=tid.x+p[28],y=tid.y+p[29];if(x>p[30]||y>p[31])return;
 float weights[3];float z;int fog;int4 color;float2 uv;float qlod=1.f;
 if(p[0]==6) {
  float spanX=max(1.f,b.v[1][0]-b.v[0][0]),spanY=max(1.f,b.v[1][1]-b.v[0][1]);
  float tx=(float(x)+0.5f-b.v[0][0])/spanX,ty=(float(y)+0.5f-b.v[0][1])/spanY;
  uv=float2(b.v[0][10]+(b.v[1][10]-b.v[0][10])*tx,b.v[0][11]+(b.v[1][11]-b.v[0][11])*ty);
  if(p[1]&4u)uv=float2(ushort(clamp(int(uv.x*16.f+0.5f),0,65535)),ushort(clamp(int(uv.y*16.f+0.5f),0,65535)))/16.f;
  color=int4(b.v[1][3],b.v[1][4],b.v[1][5],b.v[1][6]);z=b.v[1][2];fog=int(b.v[1][12]);qlod=(p[1]&4u)?1.f:b.v[1][9];
 } else {
  float ax=b.v[0][0],ay=b.v[0][1],bx=b.v[1][0],by=b.v[1][1],cx=b.v[2][0],cy=b.v[2][1];
  float denom=(by-cy)*(ax-cx)+(cx-bx)*(ay-cy);if(abs(denom)<0.001f)return;
  float direction=denom<0?-1.f:1.f,inv=1.f/abs(denom),px=float(x)+0.5f,py=float(y)+0.5f;
  weights[0]=(((by-cy)*(px-cx)+(cx-bx)*(py-cy))*direction)*inv;
  weights[1]=(((cy-ay)*(px-cx)+(ax-cx)*(py-cy))*direction)*inv;weights[2]=1.f-weights[0]-weights[1];
  if(weights[0]<-0.0001f||weights[1]<-0.0001f||weights[2]<-0.0001f)return;
  z=0;fog=0;float fogf=0;float4 cf(0);float s=0,t=0,q=0,u=0,v=0;
  for(uint i=0;i<3;++i){float w=weights[i];z+=b.v[i][2]*w;fogf+=b.v[i][12]*w;cf+=float4(b.v[i][3],b.v[i][4],b.v[i][5],b.v[i][6])*w;s+=b.v[i][7]*w;t+=b.v[i][8]*w;q+=b.v[i][9]*w;u+=b.v[i][10]*w;v+=b.v[i][11]*w;}
  color=(p[1]&1u)?clamp(int4(cf),int4(0),int4(255)):int4(b.v[2][3],b.v[2][4],b.v[2][5],b.v[2][6]);fog=clamp(int(fogf),0,255);qlod=q;
  uv=(p[1]&4u)?float2(ushort(u),ushort(v))/16.f:float2(s,t)*(1.f/(abs(q)>1e-8f?q:1.f))*float2(p[18],p[19]);
 }
 // Early depth test: when the alpha test cannot fail, a pixel that loses the
 // depth test is discarded before any texture work (same result, less shading).
 if(!(p[9]&1u)||((p[9]>>1)&7u)==1u){uint zt=(p[9]>>17)&3u;if(zt==0u)return;
  if(zt>=2u){uint ezb=bitAddress(p[7],p[6],p[3],x,y,lut);uint eo=ram[ezb>>5];if(p[7]==49)eo&=0xffffffu;else if(p[7]==50u||p[7]==58u)eo=(eo>>(ezb&31u))&0xffffu;
   uint en=p[0]==6?uint(z):uint(z+0.5f);if(zt==2u?en<eo:en<=eo)return;}}
 if(p[1]&2u) {
  int4 tc=sample(uv,qlod,b,texRam,lut,clut);int alpha=color.w;
  switch(p[21]) {
  case 0:color.xyz=clamp((tc.xyz*color.xyz)>>7,int3(0),int3(255));color.w=p[20]?min(255,(tc.w*alpha)>>7):alpha;break;
  case 1:color.xyz=tc.xyz;color.w=p[20]?tc.w:alpha;break;
  case 2:case 3:color.xyz=clamp(((tc.xyz*color.xyz)>>7)+alpha,int3(0),int3(255));color.w=p[20]?(p[21]==2?min(255,tc.w+alpha):tc.w):alpha;break;
  }
 }
 if(p[1]&8u){color.xyz=((color.xyz*fog)>>8)+(((255-fog)*unpack(p[14]).xyz)>>8);}
 bool writeRgb=true,writeAlpha=true,writeDepth=true;
 if(!alphaTest(p[9],color.w)){switch((p[9]>>12)&3u){case 0:return;case 1:writeDepth=false;break;case 2:writeRgb=false;writeAlpha=false;break;case 3:writeDepth=false;writeAlpha=ffmt!=0;break;}}
 uint fbit=bitAddress(p[4],p[2],p[3],x,y,lut),fa=fbit>>5,zbit=bitAddress(p[7],p[6],p[3],x,y,lut),za=zbit>>5;
 uint rawDest=ram[fa];if(ffmt==2u||ffmt==10u)rawDest=(rawDest>>(fbit&31u))&0xffffu;
 uint dest=expandFrame(p[4],rawDest),oldZ=ram[za];if(p[7]==49)oldZ&=0xffffffu;else if(p[7]==50u||p[7]==58u)oldZ=(oldZ>>(zbit&31u))&0xffffu;
 if(((p[9]>>14)&1u)&&((ffmt==0u&&((rawDest>>31)!=((p[9]>>15)&1u)))||((ffmt==2u||ffmt==10u)&&(((rawDest>>15)&1u)!=((p[9]>>15)&1u)))))return;
 uint newZ=p[0]==6?uint(z):uint(z+0.5f);switch((p[9]>>17)&3u){case 0:return;case 1:break;case 2:if(newZ<oldZ)return;break;case 3:if(newZ<=oldZ)return;break;}
 if(writeRgb||writeAlpha){
  if((p[1]&16u)&&!((p[1]&32u)&&!(color.w&128))){int4 dst=unpack(dest);if(ffmt==1)dst.w=128;uint csel=(p[10]>>4)&3;int alpha=csel==0?color.w:csel==1?dst.w:p[11];
   int3 rgb=(((pick(p[10]&3,color.xyz,dst.xyz)-pick((p[10]>>2)&3,color.xyz,dst.xyz))*alpha)>>7)+pick((p[10]>>6)&3,color.xyz,dst.xyz);
   color.xyz=(p[13]&1)?clamp(rgb,int3(0),int3(255)):(rgb&255);
  }
  if(writeAlpha&&(p[12]&1u)&&ffmt!=1)color.w|=128;
  if(p[38]!=0u&&(ffmt==2u||ffmt==10u)){int d=ditherValue(b,x,y);color.xyz+=d;color.xyz=(p[13]&1u)?clamp(color.xyz,int3(0),int3(255)):(color.xyz&255);}
  uint result=pack(color);result=(result&~p[5])|(dest&p[5]);
  if(!writeAlpha&&(ffmt==0u||ffmt==2u||ffmt==10u))result=(result&0x00ffffffu)|(dest&0xff000000u);
  writeGsPixel(ram,p[4],fbit,compressFrame(p[4],result));
 }
 if(writeDepth&&!p[8]){if(p[7]==49)ram[za]=(ram[za]&0xff000000u)|(newZ&0xffffffu);else if(p[7]==50u||p[7]==58u)writeDepth16(ram,zbit,newZ);else ram[za]=newZ;}
}
int4 batchTexel(int x,int y,uint tbp,uint tbw,uint width,uint height,uint level,device const Params& b,device const uint* ram,device const uint* lut,device const ushort* clut) {
 device const uint* p=b.p;
 x=wrap(x,width,p[22],p[24]>>level,p[25]>>level);y=wrap(y,height,p[23],p[26]>>level,p[27]>>level);
 uint raw=readPixel(ram,p[17],tbp,tbw,uint(x),uint(y),lut);
 uint fmt=p[17];
 if(fmt==19||fmt==20||fmt==27||fmt==36||fmt==44) {
  bool four=fmt==20||fmt==36||fmt==44,sixteen=p[33]==2||p[33]==10;
  uint base=(p[35]&(sixteen?31u:15u))<<4,index=(base+(four?(raw&15u):raw))&(sixteen?511u:255u);
  if(!sixteen&&p[34]==0&&!four)index=min((raw&240u)+base,240u)+(raw&15u);
  uint clutIndex=p[46]+index;raw=uint(clut[clutIndex]);if(!sixteen)raw|=uint(clut[clutIndex+256])<<16;fmt=p[33];
 }
 int4 c=unpack(raw);bool zero=(raw==0);
 if(fmt==2||fmt==10||fmt==50||fmt==58) {c=int4((raw&31u)<<3,((raw>>5)&31u)<<3,((raw>>10)&31u)<<3,((raw>>15)&1u)?((p[32]>>8)&255u):(p[32]&255u));}
 if(fmt==1||fmt==49)c.w=p[32]&255u;
 if((fmt==1||fmt==49||fmt==2||fmt==10||fmt==50||fmt==58)&&((p[32]>>16)&1u)&&zero)c.w=0;
 return c;
}
int4 batchSample(float2 uv,float q,device const Params& b,device const uint* ram,device const uint* lut,device const ushort* clut) {
 device const uint* p=b.p;ulong tex1=ulong(p[39])|(ulong(p[40])<<32u);
 uint tbp=p[15],tbw=p[16],width=p[18],height=p[19],level=0u;bool linear=p[45]!=0u;
 bool hasMipRegs=(p[41]|p[42]|p[43]|p[44])!=0u;
 if(tex1==0ul&&!hasMipRegs){if(!linear)return batchTexel(int(uv.x),int(uv.y),tbp,tbw,width,height,0u,b,ram,lut,clut);float2 pos=uv-0.5f,fl=floor(pos),f=pos-fl;int2 lo=int2(fl);int4 a=batchTexel(lo.x,lo.y,tbp,tbw,width,height,0u,b,ram,lut,clut);if(f.x<1.f/32&&f.y<1.f/32)return a;float4 top=float4(a)+(float4(batchTexel(lo.x+1,lo.y,tbp,tbw,width,height,0u,b,ram,lut,clut))-float4(a))*f.x;int4 c=batchTexel(lo.x,lo.y+1,tbp,tbw,width,height,0u,b,ram,lut,clut);float4 bottom=float4(c)+(float4(batchTexel(lo.x+1,lo.y+1,tbp,tbw,width,height,0u,b,ram,lut,clut))-float4(c))*f.x;return int4(floor(top+(bottom-top)*f.y+0.5f));}
 uint mmin=uint((tex1>>6u)&7u),mxl=min(uint((tex1>>2u)&7u),6u),lodShift=uint((tex1>>19u)&3u);
 int kRaw=int((tex1>>32u)&0xfffu);if(kRaw&2048)kRaw-=4096;float k=float(kRaw)/16.f;
 float lod=k;if((tex1&1u)==0u){float aq=max(abs(q),1.e-8f);lod=-fast::log2(aq)*float(1u<<lodShift)+k;}
 linear=((tex1>>5u)&1u)!=0u;
 if(lod>0.f){if(mmin>=2u){level=uint(clamp(int(floor(lod+0.5f)),0,int(mxl)));linear=(mmin&4u)!=0u;}else linear=mmin==1u;}
 if(level>0u){ulong reg=level<=3u?(ulong(p[41])|(ulong(p[42])<<32u)):(ulong(p[43])|(ulong(p[44])<<32u));uint slot=(level-1u)%3u,shift=slot*20u;uint bp=uint((reg>>shift)&0x3fffu),bw=uint((reg>>(shift+14u))&0x3fu);if(bp!=0u||bw!=0u){tbp=bp;tbw=max(bw,1u);width=max(1u,width>>level);height=max(1u,height>>level);}else level=0u;}
 if(level>0u)uv*=float2(float(width)/float(p[18]),float(height)/float(p[19]));
 if(!linear)return batchTexel(int(uv.x),int(uv.y),tbp,tbw,width,height,level,b,ram,lut,clut);
 float2 pos=uv-0.5f,fl=floor(pos),f=pos-fl;int2 lo=int2(fl);
 int4 a=batchTexel(lo.x,lo.y,tbp,tbw,width,height,level,b,ram,lut,clut);if(f.x<1.f/32&&f.y<1.f/32)return a;
 float4 top=float4(a)+(float4(batchTexel(lo.x+1,lo.y,tbp,tbw,width,height,level,b,ram,lut,clut))-float4(a))*f.x;
 int4 c=batchTexel(lo.x,lo.y+1,tbp,tbw,width,height,level,b,ram,lut,clut);float4 bottom=float4(c)+(float4(batchTexel(lo.x+1,lo.y+1,tbp,tbw,width,height,level,b,ram,lut,clut))-float4(c))*f.x;
 return int4(floor(top+(bottom-top)*f.y+0.5f));
}
int batchDitherValue(device const Params& b,uint x,uint y) {
 uint index=(y&3u)*4u+(x&3u),bits=index<8u?b.p[36]:b.p[37],shift=(index&7u)*4u;
 int value=int((bits>>shift)&7u);return (value&4)?value-8:value;
}
void batchRasterPixel(device uint* ram,device const uint* texRam,device const uint* lut,device const Params& b,device const ushort* clut,uint2 tid) {
 device const uint* p=b.p;uint ffmt=frameFormat(p[4]);uint x=tid.x+p[28],y=tid.y+p[29];if(x>p[30]||y>p[31])return;
 float weights[3];float z;int fog;int4 color;float2 uv;float qlod=1.f;
 if(p[0]==6) {
  float spanX=max(1.f,b.v[1][0]-b.v[0][0]),spanY=max(1.f,b.v[1][1]-b.v[0][1]);
  float tx=(float(x)+0.5f-b.v[0][0])/spanX,ty=(float(y)+0.5f-b.v[0][1])/spanY;
  uv=float2(b.v[0][10]+(b.v[1][10]-b.v[0][10])*tx,b.v[0][11]+(b.v[1][11]-b.v[0][11])*ty);
  if(p[1]&4u)uv=float2(ushort(clamp(int(uv.x*16.f+0.5f),0,65535)),ushort(clamp(int(uv.y*16.f+0.5f),0,65535)))/16.f;
  color=int4(b.v[1][3],b.v[1][4],b.v[1][5],b.v[1][6]);z=b.v[1][2];fog=int(b.v[1][12]);qlod=(p[1]&4u)?1.f:b.v[1][9];
 } else {
  float ax=b.v[0][0],ay=b.v[0][1],bx=b.v[1][0],by=b.v[1][1],cx=b.v[2][0],cy=b.v[2][1];
  float denom=(by-cy)*(ax-cx)+(cx-bx)*(ay-cy);if(abs(denom)<0.001f)return;
  float direction=denom<0?-1.f:1.f,inv=1.f/abs(denom),px=float(x)+0.5f,py=float(y)+0.5f;
  weights[0]=(((by-cy)*(px-cx)+(cx-bx)*(py-cy))*direction)*inv;
  weights[1]=(((cy-ay)*(px-cx)+(ax-cx)*(py-cy))*direction)*inv;weights[2]=1.f-weights[0]-weights[1];
  if(weights[0]<-0.0001f||weights[1]<-0.0001f||weights[2]<-0.0001f)return;
  z=0;fog=0;float fogf=0;float4 cf(0);float s=0,t=0,q=0,u=0,v=0;
  for(uint i=0;i<3;++i){float w=weights[i];z+=b.v[i][2]*w;fogf+=b.v[i][12]*w;cf+=float4(b.v[i][3],b.v[i][4],b.v[i][5],b.v[i][6])*w;s+=b.v[i][7]*w;t+=b.v[i][8]*w;q+=b.v[i][9]*w;u+=b.v[i][10]*w;v+=b.v[i][11]*w;}
  color=(p[1]&1u)?clamp(int4(cf),int4(0),int4(255)):int4(b.v[2][3],b.v[2][4],b.v[2][5],b.v[2][6]);fog=clamp(int(fogf),0,255);qlod=q;
  uv=(p[1]&4u)?float2(ushort(u),ushort(v))/16.f:float2(s,t)*(1.f/(abs(q)>1e-8f?q:1.f))*float2(p[18],p[19]);
 }
 // Early depth test: when the alpha test cannot fail, a pixel that loses the
 // depth test is discarded before any texture work (same result, less shading).
 if(!(p[9]&1u)||((p[9]>>1)&7u)==1u){uint zt=(p[9]>>17)&3u;if(zt==0u)return;
  if(zt>=2u){uint ezb=bitAddress(p[7],p[6],p[3],x,y,lut);uint eo=ram[ezb>>5];if(p[7]==49)eo&=0xffffffu;else if(p[7]==50u||p[7]==58u)eo=(eo>>(ezb&31u))&0xffffu;
   uint en=p[0]==6?uint(z):uint(z+0.5f);if(zt==2u?en<eo:en<=eo)return;}}
 if(p[1]&2u) {
  int4 tc=batchSample(uv,qlod,b,texRam,lut,clut);int alpha=color.w;
  switch(p[21]) {
  case 0:color.xyz=clamp((tc.xyz*color.xyz)>>7,int3(0),int3(255));color.w=p[20]?min(255,(tc.w*alpha)>>7):alpha;break;
  case 1:color.xyz=tc.xyz;color.w=p[20]?tc.w:alpha;break;
  case 2:case 3:color.xyz=clamp(((tc.xyz*color.xyz)>>7)+alpha,int3(0),int3(255));color.w=p[20]?(p[21]==2?min(255,tc.w+alpha):tc.w):alpha;break;
  }
 }
 if(p[1]&8u){color.xyz=((color.xyz*fog)>>8)+(((255-fog)*unpack(p[14]).xyz)>>8);}
 bool writeRgb=true,writeAlpha=true,writeDepth=true;
 if(!alphaTest(p[9],color.w)){switch((p[9]>>12)&3u){case 0:return;case 1:writeDepth=false;break;case 2:writeRgb=false;writeAlpha=false;break;case 3:writeDepth=false;writeAlpha=ffmt!=0;break;}}
 uint fbit=bitAddress(p[4],p[2],p[3],x,y,lut),fa=fbit>>5,zbit=bitAddress(p[7],p[6],p[3],x,y,lut),za=zbit>>5;
 uint rawDest=ram[fa];if(ffmt==2u||ffmt==10u)rawDest=(rawDest>>(fbit&31u))&0xffffu;
 uint dest=expandFrame(p[4],rawDest),oldZ=ram[za];if(p[7]==49)oldZ&=0xffffffu;else if(p[7]==50u||p[7]==58u)oldZ=(oldZ>>(zbit&31u))&0xffffu;
 if(((p[9]>>14)&1u)&&((ffmt==0u&&((rawDest>>31)!=((p[9]>>15)&1u)))||((ffmt==2u||ffmt==10u)&&(((rawDest>>15)&1u)!=((p[9]>>15)&1u)))))return;
 uint newZ=p[0]==6?uint(z):uint(z+0.5f);switch((p[9]>>17)&3u){case 0:return;case 1:break;case 2:if(newZ<oldZ)return;break;case 3:if(newZ<=oldZ)return;break;}
 if(writeRgb||writeAlpha){
  if((p[1]&16u)&&!((p[1]&32u)&&!(color.w&128))){int4 dst=unpack(dest);if(ffmt==1)dst.w=128;uint csel=(p[10]>>4)&3;int alpha=csel==0?color.w:csel==1?dst.w:p[11];
   int3 rgb=(((pick(p[10]&3,color.xyz,dst.xyz)-pick((p[10]>>2)&3,color.xyz,dst.xyz))*alpha)>>7)+pick((p[10]>>6)&3,color.xyz,dst.xyz);
   color.xyz=(p[13]&1)?clamp(rgb,int3(0),int3(255)):(rgb&255);
  }
  if(writeAlpha&&(p[12]&1u)&&ffmt!=1)color.w|=128;
  if(p[38]!=0u&&(ffmt==2u||ffmt==10u)){int d=batchDitherValue(b,x,y);color.xyz+=d;color.xyz=(p[13]&1u)?clamp(color.xyz,int3(0),int3(255)):(color.xyz&255);}
  uint result=pack(color);result=(result&~p[5])|(dest&p[5]);
  if(!writeAlpha&&(ffmt==0u||ffmt==2u||ffmt==10u))result=(result&0x00ffffffu)|(dest&0xff000000u);
  writeGsPixel(ram,p[4],fbit,compressFrame(p[4],result));
 }
 if(writeDepth&&!p[8]){if(p[7]==49)ram[za]=(ram[za]&0xff000000u)|(newZ&0xffffffu);else if(p[7]==50u||p[7]==58u)writeDepth16(ram,zbit,newZ);else ram[za]=newZ;}
}
kernel void rasterBatch(device const Params* draws [[buffer(0)]],device const uint* lut [[buffer(1)]],device const ushort* clut [[buffer(2)]],device uint* ram [[buffer(3)]],uint3 tid [[thread_position_in_grid]]) {
 device const Params& b=draws[tid.z];batchRasterPixel(ram,ram,lut,b,clut,tid.xy);
}
kernel void rasterOrderedBatch(device const uint* batch [[buffer(0)]],device const uint* lut [[buffer(1)]],device const ushort* clut [[buffer(2)]],device uint* ram [[buffer(3)]],uint2 tid [[thread_position_in_grid]]) {
 // batch: [count, originX, originY, pad] + 128 packed bounds (x0|y0<<16, x1|y1<<16) + Params[count].
 uint count=batch[0],x=tid.x+batch[1],y=tid.y+batch[2];
 device const Params* draws=reinterpret_cast<device const Params*>(batch+260);
 for(uint i=0u;i<count;++i){uint lo=batch[4u+2u*i],hi=batch[5u+2u*i];uint x0=lo&0xffffu,y0=lo>>16u;
  if(x>=x0&&x<=(hi&0xffffu)&&y>=y0&&y<=(hi>>16u))batchRasterPixel(ram,ram,lut,draws[i],clut,uint2(x-x0,y-y0));}
}
kernel void rasterOrderedUniform(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant uint* batch [[buffer(2)]],device const ushort* clut [[buffer(3)]],uint2 tid [[thread_position_in_grid]]) {
 // batch (uniform data): [count, originX, originY, pad] + 64 packed bounds (x0|y0<<16, x1|y1<<16) + Params[count].
 uint count=batch[0],x=tid.x+batch[1],y=tid.y+batch[2];
 constant Params* draws=reinterpret_cast<constant Params*>(batch+132);
 for(uint i=0u;i<count;++i){uint lo=batch[4u+2u*i],hi=batch[5u+2u*i];uint x0=lo&0xffffu,y0=lo>>16u;
  if(x>=x0&&x<=(hi&0xffffu)&&y>=y0&&y<=(hi>>16u))rasterPixel(ram,ram,lut,draws[i],clut,uint2(x-x0,y-y0));}
}
kernel void raster(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device const ushort* clut [[buffer(3)]],uint2 tid [[thread_position_in_grid]]) {
 rasterPixel(ram,ram,lut,b,clut,tid);
}
kernel void rasterSnapshot(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device const ushort* clut [[buffer(3)]],device const uint* texRam [[buffer(4)]],uint2 tid [[thread_position_in_grid]]) {
 rasterPixel(ram,texRam,lut,b,clut,tid);
}
kernel void rasterSerial(device uint* ram [[buffer(0)]],device const uint* lut [[buffer(1)]],constant Params& b [[buffer(2)]],device const ushort* clut [[buffer(3)]],uint tid [[thread_position_in_grid]]) {
 if(tid!=0u)return;
 for(uint y=b.p[29];y<=b.p[31];++y)
  for(uint x=b.p[28];x<=b.p[30];++x)
   rasterPixel(ram,ram,lut,b,clut,uint2(x-b.p[28],y-b.p[29]));
}
)MSL";
