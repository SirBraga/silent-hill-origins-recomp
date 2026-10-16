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

// Function: sub_001F37D0
// Address: 0x1f37d0 - 0x1f38d8
void sub_001F37D0_0x1f37d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F37D0_0x1f37d0");
#endif

    switch (ctx->pc) {
        case 0x1f380cu: goto label_1f380c;
        case 0x1f3824u: goto label_1f3824;
        case 0x1f383cu: goto label_1f383c;
        case 0x1f3850u: goto label_1f3850;
        case 0x1f3870u: goto label_1f3870;
        case 0x1f38a8u: goto label_1f38a8;
        case 0x1f38bcu: goto label_1f38bc;
        default: break;
    }

    ctx->pc = 0x1f37d0u;

    // 0x1f37d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f37d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f37d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f37d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f37d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f37dc: 0x244227c8  addiu       $v0, $v0, 0x27C8
    ctx->pc = 0x1f37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10184));
    // 0x1f37e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f37e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f37e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f37e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f37e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f37ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f37ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f37f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f37f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f37f4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f37f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1f37f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f37f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f37fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F37FCu;
    {
        const bool branch_taken_0x1f37fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F37FCu;
        // 0x1f3800: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f37fc) {
            ctx->pc = 0x1F3810u;
            goto label_1f3810;
        }
    }
    ctx->pc = 0x1F3804u;
    // 0x1f3804: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1F3804u;
    SET_GPR_U32(ctx, 31, 0x1F380Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1F3804u, 0x1F380Cu)) {
        return;
    }
    ctx->pc = 0x1F380Cu;
label_1f380c:
    // 0x1f380c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f380cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1f3810:
    // 0x1f3810: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1f3810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f3814: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3814u;
    {
        const bool branch_taken_0x1f3814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3814) {
            ctx->pc = 0x1F3818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3814u;
            // 0x1f3818: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F382Cu;
            goto label_1f382c;
        }
    }
    ctx->pc = 0x1F381Cu;
    // 0x1f381c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1F381Cu;
    SET_GPR_U32(ctx, 31, 0x1F3824u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1F381Cu, 0x1F3824u)) {
        return;
    }
    ctx->pc = 0x1F3824u;
label_1f3824:
    // 0x1f3824: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f3824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1f3828: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1f3828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f382c:
    // 0x1f382c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F382Cu;
    {
        const bool branch_taken_0x1f382c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F382Cu;
        // 0x1f3830: 0x32330001  andi        $s3, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f382c) {
            ctx->pc = 0x1F3840u;
            goto label_1f3840;
        }
    }
    ctx->pc = 0x1F3834u;
    // 0x1f3834: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1F3834u;
    SET_GPR_U32(ctx, 31, 0x1F383Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1F3834u, 0x1F383Cu)) {
        return;
    }
    ctx->pc = 0x1F383Cu;
label_1f383c:
    // 0x1f383c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f383cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f3840:
    // 0x1f3840: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1f3840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f3844: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F3844u;
    {
        const bool branch_taken_0x1f3844 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F3848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3844u;
        // 0x1f3848: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3844) {
            ctx->pc = 0x1F3894u;
            goto label_1f3894;
        }
    }
    ctx->pc = 0x1F384Cu;
    // 0x1f384c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f3850:
    // 0x1f3850: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1f3850u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f3854: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f3854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f3858: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f3858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f385c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f385cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f3860: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3860u;
    {
        const bool branch_taken_0x1f3860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3860) {
            ctx->pc = 0x1F3864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3860u;
            // 0x1f3864: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3884u;
            goto label_1f3884;
        }
    }
    ctx->pc = 0x1F3868u;
    // 0x1f3868: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1F3868u;
    SET_GPR_U32(ctx, 31, 0x1F3870u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1F3868u, 0x1F3870u)) {
        return;
    }
    ctx->pc = 0x1F3870u;
label_1f3870:
    // 0x1f3870: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f3870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f3874: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f3874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f3878: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f3878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f387c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f387cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f3880: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1f3880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1f3884:
    // 0x1f3884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f3884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f3888: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1f3888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f388c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1F388Cu;
    {
        const bool branch_taken_0x1f388c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f388c) {
            ctx->pc = 0x1F3890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F388Cu;
            // 0x1f3890: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3850;
        }
    }
    ctx->pc = 0x1F3894u;
label_1f3894:
    // 0x1f3894: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1f3894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f3898: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3898u;
    {
        const bool branch_taken_0x1f3898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3898) {
            ctx->pc = 0x1F38ACu;
            goto label_1f38ac;
        }
    }
    ctx->pc = 0x1F38A0u;
    // 0x1f38a0: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1F38A0u;
    SET_GPR_U32(ctx, 31, 0x1F38A8u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1F38A0u, 0x1F38A8u)) {
        return;
    }
    ctx->pc = 0x1F38A8u;
label_1f38a8:
    // 0x1f38a8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1f38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1f38ac:
    // 0x1f38ac: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F38ACu;
    {
        const bool branch_taken_0x1f38ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f38ac) {
            ctx->pc = 0x1F38B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F38ACu;
            // 0x1f38b0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F38C0u;
            goto label_1f38c0;
        }
    }
    ctx->pc = 0x1F38B4u;
    // 0x1f38b4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F38B4u;
    SET_GPR_U32(ctx, 31, 0x1F38BCu);
    ctx->pc = 0x1F38B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F38B4u;
    // 0x1f38b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F38B4u, 0x1F38BCu)) {
        return;
    }
    ctx->pc = 0x1F38BCu;
label_1f38bc:
    // 0x1f38bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f38bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f38c0:
    // 0x1f38c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f38c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f38c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f38c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f38c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f38c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f38cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f38ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f38d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F38D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38D0u;
        // 0x1f38d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F38D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F38D8u;
}
