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

// Function: sub_002FDBF8
// Address: 0x2fdbf8 - 0x2fdc08
void sub_002FDBF8_0x2fdbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDBF8_0x2fdbf8");
#endif

    ctx->pc = 0x2fdbf8u;

    // 0x2fdbf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fdbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdbfc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2fdbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2fdc00: 0x80c8ebc  j           func_323AF0
    ctx->pc = 0x2FDC00u;
    ctx->pc = 0x2FDC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC00u;
    // 0x2fdc04: 0x248407a0  addiu       $a0, $a0, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    sub_00323AF0_0x323af0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FDC08u;
}
