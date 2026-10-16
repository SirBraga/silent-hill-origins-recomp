#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_00322228_0x322228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_00322228_0x322228");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_syscalls::StartThread(rdram, ctx, runtime); 
}
