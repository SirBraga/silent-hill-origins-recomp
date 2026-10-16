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

// Function: sub_00113EB0
// Address: 0x113eb0 - 0x113f90
void sub_00113EB0_0x113eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113EB0_0x113eb0");
#endif

    switch (ctx->pc) {
        case 0x113f20u: goto label_113f20;
        case 0x113f60u: goto label_113f60;
        default: break;
    }

    ctx->pc = 0x113eb0u;

    // 0x113eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x113eb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x113eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x113eb8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x113eb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x113ebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x113ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113ec8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x113ec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x113ecc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x113eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x113ed0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x113ED0u;
    {
        const bool branch_taken_0x113ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113ED0u;
        // 0x113ed4: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ed0) {
            ctx->pc = 0x113F64u;
            goto label_113f64;
        }
    }
    ctx->pc = 0x113ED8u;
    // 0x113ed8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x113ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113edc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113ee0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x113ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x113ee4: 0x0  nop
    ctx->pc = 0x113ee4u;
    // NOP
    // 0x113ee8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x113ee8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113eec: 0x0  nop
    ctx->pc = 0x113eecu;
    // NOP
    // 0x113ef0: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
    ctx->pc = 0x113EF0u;
    {
        const bool branch_taken_0x113ef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x113ef0) {
            ctx->pc = 0x113EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113EF0u;
            // 0x113ef4: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113F64u;
            goto label_113f64;
        }
    }
    ctx->pc = 0x113EF8u;
    // 0x113ef8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x113ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x113efc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x113efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x113f00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x113f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x113f04: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x113f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x113f08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x113F08u;
    {
        const bool branch_taken_0x113f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F08u;
        // 0x113f0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f08) {
            ctx->pc = 0x113F18u;
            goto label_113f18;
        }
    }
    ctx->pc = 0x113F10u;
    // 0x113f10: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x113F10u;
    {
        const bool branch_taken_0x113f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F10u;
        // 0x113f14: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f10) {
            ctx->pc = 0x113F64u;
            goto label_113f64;
        }
    }
    ctx->pc = 0x113F18u;
label_113f18:
    // 0x113f18: 0xc044dc6  jal         func_113718
    ctx->pc = 0x113F18u;
    SET_GPR_U32(ctx, 31, 0x113F20u);
    ctx->pc = 0x113F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F18u;
    // 0x113f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113718u, 0x113F18u, 0x113F20u)) {
        return;
    }
    ctx->pc = 0x113F20u;
label_113f20:
    // 0x113f20: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x113f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x113f24: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x113f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113f28: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x113f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113f2c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113f30: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x113f30u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x113f34: 0x460ca036  c.le.s      $f20, $f12
    ctx->pc = 0x113f34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113f38: 0x0  nop
    ctx->pc = 0x113f38u;
    // NOP
    // 0x113f3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x113F3Cu;
    {
        const bool branch_taken_0x113f3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F3Cu;
        // 0x113f40: 0xe62c0004  swc1        $f12, 0x4($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f3c) {
            ctx->pc = 0x113F50u;
            goto label_113f50;
        }
    }
    ctx->pc = 0x113F44u;
    // 0x113f44: 0xe6340008  swc1        $f20, 0x8($s1)
    ctx->pc = 0x113f44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x113f48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113F48u;
    {
        const bool branch_taken_0x113f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F48u;
        // 0x113f4c: 0xe6340004  swc1        $f20, 0x4($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f48) {
            ctx->pc = 0x113F64u;
            goto label_113f64;
        }
    }
    ctx->pc = 0x113F50u;
label_113f50:
    // 0x113f50: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x113f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x113f54: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x113f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x113f58: 0xc0593ca  jal         func_164F28
    ctx->pc = 0x113F58u;
    SET_GPR_U32(ctx, 31, 0x113F60u);
    ctx->pc = 0x113F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F58u;
    // 0x113f5c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164F28u, 0x113F58u, 0x113F60u)) {
        return;
    }
    ctx->pc = 0x113F60u;
label_113f60:
    // 0x113f60: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x113f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_113f64:
    // 0x113f64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x113f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113f68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113f70: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x113f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x113f74: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x113f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x113f78: 0x3e00008  jr          $ra
    ctx->pc = 0x113F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F78u;
        // 0x113f7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113F80u;
    // 0x113f80: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x113f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x113f84: 0x0  nop
    ctx->pc = 0x113f84u;
    // NOP
    // 0x113f88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x113f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x113f8c: 0x0  nop
    ctx->pc = 0x113f8cu;
    // NOP
    ctx->pc = 0x113f90u;
}
