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

// Function: sub_002F7B00
// Address: 0x2f7b00 - 0x2f7b20
void sub_002F7B00_0x2f7b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7B00_0x2f7b00");
#endif

    ctx->pc = 0x2f7b00u;

    // 0x2f7b00: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2f7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7b04: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f7b08: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2f7b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f7b0c: 0x244214c8  addiu       $v0, $v0, 0x14C8
    ctx->pc = 0x2f7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5320));
    // 0x2f7b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f7b14: 0x80bde5a  j           func_2F7968
    ctx->pc = 0x2F7B14u;
    ctx->pc = 0x2F7B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B14u;
    // 0x2f7b18: 0x8c480014  lw          $t0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7968u;
    sub_002F7968_0x2f7968(rdram, ctx, runtime); return;
    ctx->pc = 0x2F7B1Cu;
    // 0x2f7b1c: 0x0  nop
    ctx->pc = 0x2f7b1cu;
    // NOP
    ctx->pc = 0x2f7b20u;
}
