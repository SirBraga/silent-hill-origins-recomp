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

// Function: sub_003039E8
// Address: 0x3039e8 - 0x303a88
void sub_003039E8_0x3039e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003039E8_0x3039e8");
#endif

    switch (ctx->pc) {
        case 0x303a30u: goto label_303a30;
        default: break;
    }

    ctx->pc = 0x3039e8u;

    // 0x3039e8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3039e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3039ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3039ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3039f0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x3039f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3039f4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3039f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3039f8: 0x1442018  mult        $a0, $t2, $a0
    ctx->pc = 0x3039f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3039fc: 0xa38c0  sll         $a3, $t2, 3
    ctx->pc = 0x3039fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x303a00: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x303a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x303a04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x303a04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a08: 0x1454018  mult        $t0, $t2, $a1
    ctx->pc = 0x303a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x303a0c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x303a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x303a10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x303a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x303a14: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x303a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x303a18: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x303a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x303a1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x303a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x303a20: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x303A20u;
    {
        const bool branch_taken_0x303a20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A20u;
        // 0x303a24: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a20) {
            ctx->pc = 0x303A5Cu;
            goto label_303a5c;
        }
    }
    ctx->pc = 0x303A28u;
    // 0x303a28: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x303a28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x303a2c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x303a2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_303a30:
    // 0x303a30: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x303a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x303a34: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x303a34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x303a38: 0x25080028  addiu       $t0, $t0, 0x28
    ctx->pc = 0x303a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
    // 0x303a3c: 0x12b302b  sltu        $a2, $t1, $t3
    ctx->pc = 0x303a3cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x303a40: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x303a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x303a44: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x303a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x303a48: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x303a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x303a4c: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x303a4cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2));
    // 0x303a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x303a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x303a54: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x303A54u;
    {
        const bool branch_taken_0x303a54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x303A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A54u;
        // 0x303a58: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a54) {
            ctx->pc = 0x303A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303a30;
        }
    }
    ctx->pc = 0x303A5Cu;
label_303a5c:
    // 0x303a5c: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x303a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x303a60: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x303a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x303a64: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x303a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x303a68: 0x24e40030  addiu       $a0, $a3, 0x30
    ctx->pc = 0x303a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x303a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x303A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A6Cu;
        // 0x303a70: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303A74u;
    // 0x303a74: 0x0  nop
    ctx->pc = 0x303a74u;
    // NOP
    // 0x303a78: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x303a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x303a7c: 0x0  nop
    ctx->pc = 0x303a7cu;
    // NOP
    // 0x303a80: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x303a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a84: 0x0  nop
    ctx->pc = 0x303a84u;
    // NOP
    ctx->pc = 0x303a88u;
}
