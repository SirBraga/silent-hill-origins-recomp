#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F63A8
// Address: 0x1f63a8 - 0x1f63b0
void sub_001F63A8_0x1f63a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F63A8_0x1f63a8");
#endif

    ctx->pc = 0x1f63a8u;

    // 0x1f63a8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1f63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1f63ac: 0xc  syscall     0
    ctx->pc = 0x1f63acu;
    ctx->pc = 0x1F63B0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1f63b0u;
}
