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

// Function: sub_002EF720
// Address: 0x2ef720 - 0x2ef800
void sub_002EF720_0x2ef720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF720_0x2ef720");
#endif

    switch (ctx->pc) {
        case 0x2ef758u: goto label_2ef758;
        case 0x2ef76cu: goto label_2ef76c;
        case 0x2ef780u: goto label_2ef780;
        case 0x2ef794u: goto label_2ef794;
        case 0x2ef7a8u: goto label_2ef7a8;
        case 0x2ef7bcu: goto label_2ef7bc;
        case 0x2ef7d0u: goto label_2ef7d0;
        case 0x2ef7e4u: goto label_2ef7e4;
        default: break;
    }

    ctx->pc = 0x2ef720u;

    // 0x2ef720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ef720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ef724: 0x8f8290a8  lw          $v0, -0x6F58($gp)
    ctx->pc = 0x2ef724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
    // 0x2ef728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef72c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ef72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef730: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ef730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ef734: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2ef734u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ef738: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ef738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ef73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ef740: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2ef740u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2ef744: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ef744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ef748: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF748u;
    {
        const bool branch_taken_0x2ef748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF748u;
        // 0x2ef74c: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef748) {
            ctx->pc = 0x2EF758u;
            goto label_2ef758;
        }
    }
    ctx->pc = 0x2EF750u;
    // 0x2ef750: 0xc09d64c  jal         func_275930
    ctx->pc = 0x2EF750u;
    SET_GPR_U32(ctx, 31, 0x2EF758u);
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x2EF750u, 0x2EF758u)) {
        return;
    }
    ctx->pc = 0x2EF758u;
label_2ef758:
    // 0x2ef758: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ef758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ef75c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF75Cu;
    {
        const bool branch_taken_0x2ef75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef75c) {
            ctx->pc = 0x2EF760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF75Cu;
            // 0x2ef760: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF764u;
    // 0x2ef764: 0xc09d64c  jal         func_275930
    ctx->pc = 0x2EF764u;
    SET_GPR_U32(ctx, 31, 0x2EF76Cu);
    ctx->pc = 0x2EF768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF764u;
    // 0x2ef768: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x2EF764u, 0x2EF76Cu)) {
        return;
    }
    ctx->pc = 0x2EF76Cu;
label_2ef76c:
    // 0x2ef76c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ef76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef770:
    // 0x2ef770: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF770u;
    {
        const bool branch_taken_0x2ef770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef770) {
            ctx->pc = 0x2EF774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF770u;
            // 0x2ef774: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF784u;
            goto label_2ef784;
        }
    }
    ctx->pc = 0x2EF778u;
    // 0x2ef778: 0xc09d64c  jal         func_275930
    ctx->pc = 0x2EF778u;
    SET_GPR_U32(ctx, 31, 0x2EF780u);
    ctx->pc = 0x2EF77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF778u;
    // 0x2ef77c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x2EF778u, 0x2EF780u)) {
        return;
    }
    ctx->pc = 0x2EF780u;
label_2ef780:
    // 0x2ef780: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ef780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ef784:
    // 0x2ef784: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF784u;
    {
        const bool branch_taken_0x2ef784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef784) {
            ctx->pc = 0x2EF788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF784u;
            // 0x2ef788: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF798u;
            goto label_2ef798;
        }
    }
    ctx->pc = 0x2EF78Cu;
    // 0x2ef78c: 0xc09d64c  jal         func_275930
    ctx->pc = 0x2EF78Cu;
    SET_GPR_U32(ctx, 31, 0x2EF794u);
    ctx->pc = 0x2EF790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF78Cu;
    // 0x2ef790: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x2EF78Cu, 0x2EF794u)) {
        return;
    }
    ctx->pc = 0x2EF794u;
label_2ef794:
    // 0x2ef794: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ef794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ef798:
    // 0x2ef798: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF798u;
    {
        const bool branch_taken_0x2ef798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef798) {
            ctx->pc = 0x2EF79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF798u;
            // 0x2ef79c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF7ACu;
            goto label_2ef7ac;
        }
    }
    ctx->pc = 0x2EF7A0u;
    // 0x2ef7a0: 0xc09d64c  jal         func_275930
    ctx->pc = 0x2EF7A0u;
    SET_GPR_U32(ctx, 31, 0x2EF7A8u);
    ctx->pc = 0x2EF7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF7A0u;
    // 0x2ef7a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x2EF7A0u, 0x2EF7A8u)) {
        return;
    }
    ctx->pc = 0x2EF7A8u;
label_2ef7a8:
    // 0x2ef7a8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2ef7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2ef7ac:
    // 0x2ef7ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF7ACu;
    {
        const bool branch_taken_0x2ef7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef7ac) {
            ctx->pc = 0x2EF7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF7ACu;
            // 0x2ef7b0: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF7C0u;
            goto label_2ef7c0;
        }
    }
    ctx->pc = 0x2EF7B4u;
    // 0x2ef7b4: 0xc09d64c  jal         func_275930
    ctx->pc = 0x2EF7B4u;
    SET_GPR_U32(ctx, 31, 0x2EF7BCu);
    ctx->pc = 0x2EF7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF7B4u;
    // 0x2ef7b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x2EF7B4u, 0x2EF7BCu)) {
        return;
    }
    ctx->pc = 0x2EF7BCu;
label_2ef7bc:
    // 0x2ef7bc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2ef7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2ef7c0:
    // 0x2ef7c0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF7C0u;
    {
        const bool branch_taken_0x2ef7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef7c0) {
            ctx->pc = 0x2EF7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF7C0u;
            // 0x2ef7c4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF7D4u;
            goto label_2ef7d4;
        }
    }
    ctx->pc = 0x2EF7C8u;
    // 0x2ef7c8: 0xc09d64c  jal         func_275930
    ctx->pc = 0x2EF7C8u;
    SET_GPR_U32(ctx, 31, 0x2EF7D0u);
    ctx->pc = 0x2EF7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF7C8u;
    // 0x2ef7cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x2EF7C8u, 0x2EF7D0u)) {
        return;
    }
    ctx->pc = 0x2EF7D0u;
label_2ef7d0:
    // 0x2ef7d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2ef7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2ef7d4:
    // 0x2ef7d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF7D4u;
    {
        const bool branch_taken_0x2ef7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7D4u;
        // 0x2ef7d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7d4) {
            ctx->pc = 0x2EF7E8u;
            goto label_2ef7e8;
        }
    }
    ctx->pc = 0x2EF7DCu;
    // 0x2ef7dc: 0xc09d64c  jal         func_275930
    ctx->pc = 0x2EF7DCu;
    SET_GPR_U32(ctx, 31, 0x2EF7E4u);
    ctx->pc = 0x2EF7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF7DCu;
    // 0x2ef7e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x2EF7DCu, 0x2EF7E4u)) {
        return;
    }
    ctx->pc = 0x2EF7E4u;
label_2ef7e4:
    // 0x2ef7e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ef7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef7e8:
    // 0x2ef7e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ef7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef7ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef7f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef7f4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2ef7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ef7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7F8u;
        // 0x2ef7fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF800u;
}
