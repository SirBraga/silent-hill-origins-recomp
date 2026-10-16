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

// Function: sub_0010E810
// Address: 0x10e810 - 0x10e880
void sub_0010E810_0x10e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E810_0x10e810");
#endif

    switch (ctx->pc) {
        case 0x10e828u: goto label_10e828;
        default: break;
    }

    ctx->pc = 0x10e810u;

    // 0x10e810: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10e810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10e814: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x10e814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10e818: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x10e818u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10e81c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10e81cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e820: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x10e820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e824: 0x0  nop
    ctx->pc = 0x10e824u;
    // NOP
label_10e828:
    // 0x10e828: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10e828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10e82c: 0x14480006  bne         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10E82Cu;
    {
        const bool branch_taken_0x10e82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x10E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E82Cu;
        // 0x10e830: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e82c) {
            ctx->pc = 0x10E848u;
            goto label_10e848;
        }
    }
    ctx->pc = 0x10E834u;
    // 0x10e834: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10e838: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x10e838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e83c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x10e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10e840: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x10e840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x10e844: 0x3300b  movn        $a2, $zero, $v1
    ctx->pc = 0x10e844u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
label_10e848:
    // 0x10e848: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E848u;
    {
        const bool branch_taken_0x10e848 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E848u;
        // 0x10e84c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e848) {
            ctx->pc = 0x10E86Cu;
            goto label_10e86c;
        }
    }
    ctx->pc = 0x10E850u;
    // 0x10e850: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x10e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10e854: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x10e854u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e858: 0x0  nop
    ctx->pc = 0x10e858u;
    // NOP
    // 0x10e85c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x10E85Cu;
    {
        const bool branch_taken_0x10e85c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E85Cu;
        // 0x10e860: 0x2ce20040  sltiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e85c) {
            ctx->pc = 0x10E870u;
            goto label_10e870;
        }
    }
    ctx->pc = 0x10E864u;
    // 0x10e864: 0x3e00008  jr          $ra
    ctx->pc = 0x10E864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E864u;
        // 0x10e868: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E86Cu;
label_10e86c:
    // 0x10e86c: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x10e86cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_10e870:
    // 0x10e870: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x10E870u;
    {
        const bool branch_taken_0x10e870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E870u;
        // 0x10e874: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e870) {
            ctx->pc = 0x10E828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e828;
        }
    }
    ctx->pc = 0x10E878u;
    // 0x10e878: 0x3e00008  jr          $ra
    ctx->pc = 0x10E878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E878u;
        // 0x10e87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E880u;
}
