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

// Function: sub_00247860
// Address: 0x247860 - 0x247930
void sub_00247860_0x247860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247860_0x247860");
#endif

    switch (ctx->pc) {
        case 0x2478fcu: goto label_2478fc;
        default: break;
    }

    ctx->pc = 0x247860u;

    // 0x247860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247864: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x247864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x247868: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x247868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24786c: 0x24461180  addiu       $a2, $v0, 0x1180
    ctx->pc = 0x24786cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
    // 0x247870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x247870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x247874: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x247874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24787c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x247880: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x247880u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5C1198u));
    // 0x247884: 0x10e20019  beq         $a3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x247884u;
    {
        const bool branch_taken_0x247884 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x247888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247884u;
        // 0x247888: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247884) {
            ctx->pc = 0x2478ECu;
            goto label_2478ec;
        }
    }
    ctx->pc = 0x24788Cu;
    // 0x24788c: 0x8d021180  lw          $v0, 0x1180($t0)
    ctx->pc = 0x24788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4480)));
    // 0x247890: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x247890u;
    {
        const bool branch_taken_0x247890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247890u;
        // 0x247894: 0x260407ff  addiu       $a0, $s0, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247890) {
            ctx->pc = 0x2478ECu;
            goto label_2478ec;
        }
    }
    ctx->pc = 0x247898u;
    // 0x247898: 0x2403f800  addiu       $v1, $zero, -0x800
    ctx->pc = 0x247898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x24789c: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x24789cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2478a0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2478a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2478a4: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2478A4u;
    {
        const bool branch_taken_0x2478a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2478A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478A4u;
        // 0x2478a8: 0x838024  and         $s0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478a4) {
            ctx->pc = 0x2478C4u;
            goto label_2478c4;
        }
    }
    ctx->pc = 0x2478ACu;
    // 0x2478ac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2478acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2478b0: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2478b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2478b4: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2478b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2478b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2478b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2478bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2478BCu;
    {
        const bool branch_taken_0x2478bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2478C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478BCu;
        // 0x2478c0: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478bc) {
            ctx->pc = 0x2478CCu;
            goto label_2478cc;
        }
    }
    ctx->pc = 0x2478C4u;
label_2478c4:
    // 0x2478c4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2478c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2478c8: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x2478c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2478cc:
    // 0x2478cc: 0x25111180  addiu       $s1, $t0, 0x1180
    ctx->pc = 0x2478ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 4480));
    // 0x2478d0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2478d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2478d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2478d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2478d8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2478D8u;
    {
        const bool branch_taken_0x2478d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2478DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478D8u;
        // 0x2478dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478d8) {
            ctx->pc = 0x247918u;
            goto label_247918;
        }
    }
    ctx->pc = 0x2478E0u;
    // 0x2478e0: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2478e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2478e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2478E4u;
    {
        const bool branch_taken_0x2478e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2478e4) {
            ctx->pc = 0x2478F4u;
            goto label_2478f4;
        }
    }
    ctx->pc = 0x2478ECu;
label_2478ec:
    // 0x2478ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2478ECu;
    {
        const bool branch_taken_0x2478ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2478F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478ECu;
        // 0x2478f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478ec) {
            ctx->pc = 0x247918u;
            goto label_247918;
        }
    }
    ctx->pc = 0x2478F4u;
label_2478f4:
    // 0x2478f4: 0xc091d10  jal         func_247440
    ctx->pc = 0x2478F4u;
    SET_GPR_U32(ctx, 31, 0x2478FCu);
    ctx->pc = 0x247440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247440u, 0x2478F4u, 0x2478FCu)) {
        return;
    }
    ctx->pc = 0x2478FCu;
label_2478fc:
    // 0x2478fc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2478fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x247900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247904: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x247904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x247908: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x247908u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24790c: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x24790cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x247910: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x247910u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x247914: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x247914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_247918:
    // 0x247918: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x247918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24791c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24791cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247924: 0x3e00008  jr          $ra
    ctx->pc = 0x247924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247924u;
        // 0x247928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24792Cu;
    // 0x24792c: 0x0  nop
    ctx->pc = 0x24792cu;
    // NOP
    ctx->pc = 0x247930u;
}
