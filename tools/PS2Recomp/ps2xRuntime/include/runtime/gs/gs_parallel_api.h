#pragma once
#include <cstdint>
// Versioned process-local ABI; GPU dependency is loaded only when explicitly selected.
struct GSParallelScanout {
 uint64_t pmode,smode1,smode2,dispfb1,display1,dispfb2,display2,bgcolor,vsyncTick;
 uint8_t* rgba;
 uint32_t stride;
 uint32_t maxHeight;
 uint32_t width;
 uint32_t height;
 // Called around the wait for the GPU copy of the scanout image (no renderer state is touched meanwhile),
 // so that the caller can let the GS feed go on. Either may be null.
 void (*unlock)(void*);
 void (*relock)(void*);
 void* lockContext;
};
struct GSParallelAPI {
 uint32_t version;
 void* (*create)(const char*,const uint8_t*);
 void (*destroy)(void*);
 void (*reset)(void*);
 void (*gif)(void*,uint32_t,const uint8_t*,uint32_t);
 void (*reg)(void*,uint8_t,uint64_t);
 void (*image)(void*,const uint8_t*,uint32_t);
 void (*flush)(void*);
 void (*wait)(void*);
 void (*read)(void*,uint32_t,uint8_t*,uint32_t);
 void (*write)(void*,uint32_t,const uint8_t*,uint32_t);
 void (*fifo)(void*,uint8_t*,uint32_t);
 void (*clear)(void*,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t);
 int (*scanout)(void*,GSParallelScanout*);
 int (*attach_window)(void*,void*);
};
