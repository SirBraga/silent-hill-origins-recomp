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

// Function: sub_002D9000
// Address: 0x2d9000 - 0x2d9088
void sub_002D9000_0x2d9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9000_0x2d9000");
#endif

    ctx->pc = 0x2d9000u;

    // 0x2d9000: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x2d9000u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d9004: 0x240d000b  addiu       $t5, $zero, 0xB
    ctx->pc = 0x2d9004u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d9008: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x2d9008u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d900c: 0x240e0019  addiu       $t6, $zero, 0x19
    ctx->pc = 0x2d900cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2d9010: 0xcc6018  mult        $t4, $a2, $t4
    ctx->pc = 0x2d9010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2d9014: 0xcd6818  mult        $t5, $a2, $t5
    ctx->pc = 0x2d9014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2d9018: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x2d9018u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x2d901c: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x2d901cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d9020: 0xce7018  mult        $t6, $a2, $t6
    ctx->pc = 0x2d9020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2d9024: 0x8c8a0010  lw          $t2, 0x10($a0)
    ctx->pc = 0x2d9024u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d9028: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x2d9028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d902c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d902cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d9030: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x2d9030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d9034: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x2d9034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2d9038: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2d9038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d903c: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x2d903cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x2d9040: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2d9040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d9044: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x2d9044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x2d9048: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x2d9048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2d904c: 0x3c0f0068  lui         $t7, 0x68
    ctx->pc = 0x2d904cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)104 << 16));
    // 0x2d9050: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x2d9050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2d9054: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x2d9054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x2d9058: 0xac8b0008  sw          $t3, 0x8($a0)
    ctx->pc = 0x2d9058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 11));
    // 0x2d905c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d905cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9060: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x2d9060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x2d9064: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x2d9064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x2d9068: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x2d9068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x2d906c: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x2d906cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x2d9070: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2d9070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2d9074: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9074u;
        // 0x2d9078: 0xade64090  sw          $a2, 0x4090($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 16528), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D907Cu;
    // 0x2d907c: 0x0  nop
    ctx->pc = 0x2d907cu;
    // NOP
    // 0x2d9080: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d9080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d9084: 0x0  nop
    ctx->pc = 0x2d9084u;
    // NOP
    ctx->pc = 0x2d9088u;
}
