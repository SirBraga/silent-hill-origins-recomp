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

// Function: sub_002C5130
// Address: 0x2c5130 - 0x2c5180
void sub_002C5130_0x2c5130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5130_0x2c5130");
#endif

    ctx->pc = 0x2c5130u;

    // 0x2c5130: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x2c5130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2c5134: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x2c5134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2c5138: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2c5138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2c513c: 0x24070120  addiu       $a3, $zero, 0x120
    ctx->pc = 0x2c513cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2c5140: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x2c5140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2c5144: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2c5144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2c5148: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2c5148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c514c: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x2c514cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2c5150: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x2c5150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2c5154: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x2c5154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c5158: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2c5158u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2c515c: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x2c515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2c5160: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2c5160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2c5164: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2c5164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2c5168: 0x1012  mflo        $v0
    ctx->pc = 0x2c5168u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2c516c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2c516cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2c5170: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c5170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c5174: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c5174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c5178: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5178u;
        // 0x2c517c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5180u;
}
