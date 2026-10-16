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

// Function: sub_00183F20
// Address: 0x183f20 - 0x183ff8
void sub_00183F20_0x183f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183F20_0x183f20");
#endif

    switch (ctx->pc) {
        case 0x183f74u: goto label_183f74;
        case 0x183fdcu: goto label_183fdc;
        default: break;
    }

    ctx->pc = 0x183f20u;

    // 0x183f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183f24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x183f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x183f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f30: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x183f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x183f34: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x183f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x183f38: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x183F38u;
    {
        const bool branch_taken_0x183f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183f38) {
            ctx->pc = 0x183F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183F38u;
            // 0x183f3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183FE4u;
            goto label_183fe4;
        }
    }
    ctx->pc = 0x183F40u;
    // 0x183f40: 0xc4540038  lwc1        $f20, 0x38($v0)
    ctx->pc = 0x183f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x183f44: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x183f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183f48: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x183f48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183f4c: 0x0  nop
    ctx->pc = 0x183f4cu;
    // NOP
    // 0x183f50: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
    ctx->pc = 0x183F50u;
    {
        const bool branch_taken_0x183f50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183f50) {
            ctx->pc = 0x183F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183F50u;
            // 0x183f54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183FE4u;
            goto label_183fe4;
        }
    }
    ctx->pc = 0x183F58u;
    // 0x183f58: 0x3c01418f  lui         $at, 0x418F
    ctx->pc = 0x183f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16783 << 16));
    // 0x183f5c: 0x3421f79b  ori         $at, $at, 0xF79B
    ctx->pc = 0x183f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63387);
    // 0x183f60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183f64: 0x0  nop
    ctx->pc = 0x183f64u;
    // NOP
    // 0x183f68: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x183f68u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[20]);
    // 0x183f6c: 0xc09b008  jal         func_26C020
    ctx->pc = 0x183F6Cu;
    SET_GPR_U32(ctx, 31, 0x183F74u);
    ctx->pc = 0x26C020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C020u, 0x183F6Cu, 0x183F74u)) {
        return;
    }
    ctx->pc = 0x183F74u;
label_183f74:
    // 0x183f74: 0x46000300  add.s       $f12, $f0, $f0
    ctx->pc = 0x183f74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x183f78: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x183f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
    // 0x183f7c: 0x3421aaa8  ori         $at, $at, 0xAAA8
    ctx->pc = 0x183f7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43688);
    // 0x183f80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183f84: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x183f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x183f88: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x183f88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x183f8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183f90: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x183f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x183f94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x183f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183f98: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x183f98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x183f9c: 0x0  nop
    ctx->pc = 0x183f9cu;
    // NOP
    // 0x183fa0: 0x0  nop
    ctx->pc = 0x183fa0u;
    // NOP
    // 0x183fa4: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x183fa4u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[1]);
    // 0x183fa8: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x183fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183fac: 0x0  nop
    ctx->pc = 0x183facu;
    // NOP
    // 0x183fb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x183FB0u;
    {
        const bool branch_taken_0x183fb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183fb0) {
            ctx->pc = 0x183FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183FB0u;
            // 0x183fb4: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x183FB8u;
            goto label_183fb8;
        }
    }
    ctx->pc = 0x183FB8u;
label_183fb8:
    // 0x183fb8: 0x3c014302  lui         $at, 0x4302
    ctx->pc = 0x183fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17154 << 16));
    // 0x183fbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183fc0: 0x0  nop
    ctx->pc = 0x183fc0u;
    // NOP
    // 0x183fc4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x183fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183fc8: 0x0  nop
    ctx->pc = 0x183fc8u;
    // NOP
    // 0x183fcc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x183FCCu;
    {
        const bool branch_taken_0x183fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183fcc) {
            ctx->pc = 0x183FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183FCCu;
            // 0x183fd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x183FD4u;
            goto label_183fd4;
        }
    }
    ctx->pc = 0x183FD4u;
label_183fd4:
    // 0x183fd4: 0xc0446c6  jal         func_111B18
    ctx->pc = 0x183FD4u;
    SET_GPR_U32(ctx, 31, 0x183FDCu);
    ctx->pc = 0x183FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183FD4u;
    // 0x183fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111B18u, 0x183FD4u, 0x183FDCu)) {
        return;
    }
    ctx->pc = 0x183FDCu;
label_183fdc:
    // 0x183fdc: 0xe61400b4  swc1        $f20, 0xB4($s0)
    ctx->pc = 0x183fdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x183fe0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x183fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_183fe4:
    // 0x183fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183fe8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x183fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x183fec: 0x3e00008  jr          $ra
    ctx->pc = 0x183FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FECu;
        // 0x183ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183FF4u;
    // 0x183ff4: 0x0  nop
    ctx->pc = 0x183ff4u;
    // NOP
    ctx->pc = 0x183ff8u;
}
