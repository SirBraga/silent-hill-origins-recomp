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

// Function: sub_001ED700
// Address: 0x1ed700 - 0x1ed828
void sub_001ED700_0x1ed700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED700_0x1ed700");
#endif

    switch (ctx->pc) {
        case 0x1ed7a8u: goto label_1ed7a8;
        case 0x1ed7ccu: goto label_1ed7cc;
        case 0x1ed7e0u: goto label_1ed7e0;
        case 0x1ed7f4u: goto label_1ed7f4;
        default: break;
    }

    ctx->pc = 0x1ed700u;

    // 0x1ed700: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed704: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ed704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ed708: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ed708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ed70c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1ed70cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed710: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ed710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ed714: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ed714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ed718: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ed718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed71c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ed71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ed720: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED720u;
    {
        const bool branch_taken_0x1ed720 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED720u;
        // 0x1ed724: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed720) {
            ctx->pc = 0x1ED744u;
            goto label_1ed744;
        }
    }
    ctx->pc = 0x1ED728u;
    // 0x1ed728: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1ed728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1ed72c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed730: 0x0  nop
    ctx->pc = 0x1ed730u;
    // NOP
    // 0x1ed734: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1ed734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed738: 0x0  nop
    ctx->pc = 0x1ed738u;
    // NOP
    // 0x1ed73c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED73Cu;
    {
        const bool branch_taken_0x1ed73c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed73c) {
            ctx->pc = 0x1ED750u;
            goto label_1ed750;
        }
    }
    ctx->pc = 0x1ED744u;
label_1ed744:
    // 0x1ed744: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1ed744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1ed748: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ed748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ed74c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ed74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ed750:
    // 0x1ed750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed754: 0x0  nop
    ctx->pc = 0x1ed754u;
    // NOP
    // 0x1ed758: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1ed758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed75c: 0x0  nop
    ctx->pc = 0x1ed75cu;
    // NOP
    // 0x1ed760: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED760u;
    {
        const bool branch_taken_0x1ed760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed760) {
            ctx->pc = 0x1ED784u;
            goto label_1ed784;
        }
    }
    ctx->pc = 0x1ED768u;
    // 0x1ed768: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1ed768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1ed76c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed76cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed770: 0x0  nop
    ctx->pc = 0x1ed770u;
    // NOP
    // 0x1ed774: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x1ed774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed778: 0x0  nop
    ctx->pc = 0x1ed778u;
    // NOP
    // 0x1ed77c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED77Cu;
    {
        const bool branch_taken_0x1ed77c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed77c) {
            ctx->pc = 0x1ED780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED77Cu;
            // 0x1ed780: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED794u;
            goto label_1ed794;
        }
    }
    ctx->pc = 0x1ED784u;
label_1ed784:
    // 0x1ed784: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1ed784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1ed788: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ed788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ed78c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ed78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ed790: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1ed790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1ed794:
    // 0x1ed794: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ed794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed798: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x1ed798u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ed79c: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x1ed79cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ed7a0: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1ED7A0u;
    {
        const bool branch_taken_0x1ed7a0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1ED7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7A0u;
        // 0x1ed7a4: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7a0) {
            ctx->pc = 0x1ED808u;
            goto label_1ed808;
        }
    }
    ctx->pc = 0x1ED7A8u;
label_1ed7a8:
    // 0x1ed7a8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1ed7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ed7ac: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1ed7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed7b0: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x1ed7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed7b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ed7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed7b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ed7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ed7bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED7BCu;
    {
        const bool branch_taken_0x1ed7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7BCu;
        // 0x1ed7c0: 0xe600012c  swc1        $f0, 0x12C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7bc) {
            ctx->pc = 0x1ED7CCu;
            goto label_1ed7cc;
        }
    }
    ctx->pc = 0x1ED7C4u;
    // 0x1ed7c4: 0xc07b1be  jal         func_1EC6F8
    ctx->pc = 0x1ED7C4u;
    SET_GPR_U32(ctx, 31, 0x1ED7CCu);
    ctx->pc = 0x1ED7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7C4u;
    // 0x1ed7c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC6F8u, 0x1ED7C4u, 0x1ED7CCu)) {
        return;
    }
    ctx->pc = 0x1ED7CCu;
label_1ed7cc:
    // 0x1ed7cc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ed7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ed7d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED7D0u;
    {
        const bool branch_taken_0x1ed7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed7d0) {
            ctx->pc = 0x1ED7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED7D0u;
            // 0x1ed7d4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED7E4u;
            goto label_1ed7e4;
        }
    }
    ctx->pc = 0x1ED7D8u;
    // 0x1ed7d8: 0xc07b51e  jal         func_1ED478
    ctx->pc = 0x1ED7D8u;
    SET_GPR_U32(ctx, 31, 0x1ED7E0u);
    ctx->pc = 0x1ED7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7D8u;
    // 0x1ed7dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED478u, 0x1ED7D8u, 0x1ED7E0u)) {
        return;
    }
    ctx->pc = 0x1ED7E0u;
label_1ed7e0:
    // 0x1ed7e0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ed7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ed7e4:
    // 0x1ed7e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED7E4u;
    {
        const bool branch_taken_0x1ed7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed7e4) {
            ctx->pc = 0x1ED7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED7E4u;
            // 0x1ed7e8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED7F8u;
            goto label_1ed7f8;
        }
    }
    ctx->pc = 0x1ED7ECu;
    // 0x1ed7ec: 0xc07b51e  jal         func_1ED478
    ctx->pc = 0x1ED7ECu;
    SET_GPR_U32(ctx, 31, 0x1ED7F4u);
    ctx->pc = 0x1ED7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7ECu;
    // 0x1ed7f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED478u, 0x1ED7ECu, 0x1ED7F4u)) {
        return;
    }
    ctx->pc = 0x1ED7F4u;
label_1ed7f4:
    // 0x1ed7f4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1ed7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1ed7f8:
    // 0x1ed7f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed7f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ed7fc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1ed7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ed800: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1ED800u;
    {
        const bool branch_taken_0x1ed800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED800u;
        // 0x1ed804: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed800) {
            ctx->pc = 0x1ED7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed7a8;
        }
    }
    ctx->pc = 0x1ED808u;
label_1ed808:
    // 0x1ed808: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ed808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed80c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ed80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed810: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ed810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed814: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ed814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed81c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED81Cu;
        // 0x1ed820: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED824u;
    // 0x1ed824: 0x0  nop
    ctx->pc = 0x1ed824u;
    // NOP
    ctx->pc = 0x1ed828u;
}
