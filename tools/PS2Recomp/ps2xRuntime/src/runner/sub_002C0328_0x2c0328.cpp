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

// Function: sub_002C0328
// Address: 0x2c0328 - 0x2c0368
void sub_002C0328_0x2c0328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0328_0x2c0328");
#endif

    ctx->pc = 0x2c0328u;

    // 0x2c0328: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c0328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c032c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2c032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c0330: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2c0330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c0334: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2c0334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2c0338: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c0338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c033c: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x2c033cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x2c0340: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2c0340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c0344: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c0344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c0348: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2c0348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2c034c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2c034cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2c0350: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2c0350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c0354: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2c0354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2c0358: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2c0358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2c035c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C035Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C035Cu;
        // 0x2c0360: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C035Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0364u;
    // 0x2c0364: 0x0  nop
    ctx->pc = 0x2c0364u;
    // NOP
    ctx->pc = 0x2c0368u;
}
