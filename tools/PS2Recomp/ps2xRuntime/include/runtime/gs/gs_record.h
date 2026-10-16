#pragma once
#include "runtime/gs/gs_types.h"
#include <cstdio>
#include <cstdlib>
#include <cfenv>
// Opt-in bounded native GS trace, starting at the first level-texture upload.
// It contains game asset bytes and must remain in the ignored diagnostics folder.
class GSRecord {
 FILE* file=nullptr;const void* owner=nullptr;unsigned draws=0;bool done=false;
public:
 ~GSRecord(){if(file)std::fclose(file);}
 static GSRecord& instance(){static GSRecord recorder;return recorder;}
 void start(const void* backend,const GSTransferCommand& transfer,const uint8_t* ram,uint32_t size) {
  const char* path=std::getenv("PS2X_GS_RECORD");
  if(done||file||!path||transfer.direction!=0||transfer.bitbltbuf.dbp<11616||transfer.bitbltbuf.dbp>=16000)return;
  file=std::fopen(path,"wb");if(!file){done=true;return;}owner=backend;
  uint32_t header[4]={0x42534752,1,size,uint32_t(sizeof(GSPrimitiveBatch))};std::fwrite(header,1,sizeof(header),file);std::fwrite(ram,1,size,file);
  std::fprintf(stderr,"[gs-record] capturing level uploads/draws to %s\n",path);
 }
 void event(const void* backend,uint32_t kind,const void* data,uint32_t size) {
  if(!file||backend!=owner)return;
  uint32_t header[3]={kind,size,uint32_t(std::fegetround())};std::fwrite(header,1,sizeof(header),file);if(size)std::fwrite(data,1,size,file);
  if(kind==1&&++draws>=12000){std::fflush(file);std::fclose(file);file=nullptr;done=true;std::fprintf(stderr,"[gs-record] finished 12000 draws\n");}
 }
};
