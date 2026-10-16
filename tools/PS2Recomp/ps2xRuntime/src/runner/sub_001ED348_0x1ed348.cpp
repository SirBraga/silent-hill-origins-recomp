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

// Function: sub_001ED348
// Address: 0x1ed348 - 0x1ed3e0
void sub_001ED348_0x1ed348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED348_0x1ed348");
#endif

    switch (ctx->pc) {
        case 0x1ed3a0u: goto label_1ed3a0;
        case 0x1ed3b4u: goto label_1ed3b4;
        case 0x1ed3c8u: goto label_1ed3c8;
        default: break;
    }

    ctx->pc = 0x1ed348u;

label_1ed348:
    // 0x1ed348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ed348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed34c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ed34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ed350: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1ed350u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ed354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed35c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1ed35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed360: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED360u;
    {
        const bool branch_taken_0x1ed360 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED360u;
        // 0x1ed364: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed360) {
            ctx->pc = 0x1ED3A0u;
            goto label_1ed3a0;
        }
    }
    ctx->pc = 0x1ED368u;
    // 0x1ed368: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ed368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ed36c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ed36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ed370: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ed370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ed374: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ed374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ed378: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ed378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ed37c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ed380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed384: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ed384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ed388: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed38c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ed38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed390: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x1ed390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1ed394: 0xe614012c  swc1        $f20, 0x12C($s0)
    ctx->pc = 0x1ed394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x1ed398: 0xc07a026  jal         func_1E8098
    ctx->pc = 0x1ED398u;
    SET_GPR_U32(ctx, 31, 0x1ED3A0u);
    ctx->pc = 0x1ED39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED398u;
    // 0x1ed39c: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E8098u, 0x1ED398u, 0x1ED3A0u)) {
        return;
    }
    ctx->pc = 0x1ED3A0u;
label_1ed3a0:
    // 0x1ed3a0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ed3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ed3a4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED3A4u;
    {
        const bool branch_taken_0x1ed3a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed3a4) {
            ctx->pc = 0x1ED3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED3A4u;
            // 0x1ed3a8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED3B8u;
            goto label_1ed3b8;
        }
    }
    ctx->pc = 0x1ED3ACu;
    // 0x1ed3ac: 0xc07b4d2  jal         func_1ED348
    ctx->pc = 0x1ED3ACu;
    SET_GPR_U32(ctx, 31, 0x1ED3B4u);
    ctx->pc = 0x1ED3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED3ACu;
    // 0x1ed3b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED348u;
    goto label_1ed348;
    ctx->pc = 0x1ED3B4u;
label_1ed3b4:
    // 0x1ed3b4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ed3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ed3b8:
    // 0x1ed3b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED3B8u;
    {
        const bool branch_taken_0x1ed3b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3B8u;
        // 0x1ed3bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3b8) {
            ctx->pc = 0x1ED3CCu;
            goto label_1ed3cc;
        }
    }
    ctx->pc = 0x1ED3C0u;
    // 0x1ed3c0: 0xc07b4d2  jal         func_1ED348
    ctx->pc = 0x1ED3C0u;
    SET_GPR_U32(ctx, 31, 0x1ED3C8u);
    ctx->pc = 0x1ED3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED3C0u;
    // 0x1ed3c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED348u;
    goto label_1ed348;
    ctx->pc = 0x1ED3C8u;
label_1ed3c8:
    // 0x1ed3c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ed3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed3cc:
    // 0x1ed3cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed3d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ed3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ed3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3D4u;
        // 0x1ed3d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED3DCu;
    // 0x1ed3dc: 0x0  nop
    ctx->pc = 0x1ed3dcu;
    // NOP
    ctx->pc = 0x1ed3e0u;
}
