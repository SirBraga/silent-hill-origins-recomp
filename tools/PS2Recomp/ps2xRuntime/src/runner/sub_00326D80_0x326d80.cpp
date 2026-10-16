#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_00326D80_0x326d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_00326D80_0x326d80");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceSifRebootIop(rdram, ctx, runtime); 
}
