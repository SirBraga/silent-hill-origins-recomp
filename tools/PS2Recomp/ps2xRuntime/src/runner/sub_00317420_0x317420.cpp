#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_00317420_0x317420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_00317420_0x317420");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::strrchr(rdram, ctx, runtime); 
}
