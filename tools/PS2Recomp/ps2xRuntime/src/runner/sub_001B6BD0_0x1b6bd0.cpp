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

// Function: sub_001B6BD0
// Address: 0x1b6bd0 - 0x1b6ce0
void sub_001B6BD0_0x1b6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6BD0_0x1b6bd0");
#endif

    switch (ctx->pc) {
        case 0x1b6c30u: goto label_1b6c30;
        case 0x1b6c50u: goto label_1b6c50;
        default: break;
    }

    ctx->pc = 0x1b6bd0u;

    // 0x1b6bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6bd4: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1b6bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x1b6bd8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b6bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b6bdc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b6bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b6be0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b6be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b6be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6bec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bf0: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1b6bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1b6bf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b6bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6bf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b6bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bfc: 0xc6020264  lwc1        $f2, 0x264($s0)
    ctx->pc = 0x1b6bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6c00: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x1b6c00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1b6c04: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x1b6c04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1b6c08: 0xc6000264  lwc1        $f0, 0x264($s0)
    ctx->pc = 0x1b6c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6c0c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b6c0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b6c10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b6c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1b6c14: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1b6c14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b6c18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b6c18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b6c1c: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x1b6c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1b6c20: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b6c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b6c24: 0xc6000288  lwc1        $f0, 0x288($s0)
    ctx->pc = 0x1b6c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6c28: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x1B6C28u;
    SET_GPR_U32(ctx, 31, 0x1B6C30u);
    ctx->pc = 0x1B6C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C28u;
    // 0x1b6c2c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1B6C28u, 0x1B6C30u)) {
        return;
    }
    ctx->pc = 0x1B6C30u;
label_1b6c30:
    // 0x1b6c30: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1b6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b6c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c38: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1b6c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6c3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b6c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b6c44: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1b6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1b6c48: 0xc085d44  jal         func_217510
    ctx->pc = 0x1B6C48u;
    SET_GPR_U32(ctx, 31, 0x1B6C50u);
    ctx->pc = 0x1B6C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C48u;
    // 0x1b6c4c: 0xc46c026c  lwc1        $f12, 0x26C($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x217510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217510u, 0x1B6C48u, 0x1B6C50u)) {
        return;
    }
    ctx->pc = 0x1B6C50u;
label_1b6c50:
    // 0x1b6c50: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b6c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b6c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6c58: 0x0  nop
    ctx->pc = 0x1b6c58u;
    // NOP
    // 0x1b6c5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b6c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b6c60: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1b6c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b6c64: 0xc6020288  lwc1        $f2, 0x288($s0)
    ctx->pc = 0x1b6c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6c68: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1b6c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6c6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b6c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b6c70: 0xe6230024  swc1        $f3, 0x24($s1)
    ctx->pc = 0x1b6c70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x1b6c74: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x1b6c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1b6c78: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x1b6c78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1b6c7c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1b6c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1b6c80: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1b6c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1b6c84: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b6c84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1b6c88: 0xc6000284  lwc1        $f0, 0x284($s0)
    ctx->pc = 0x1b6c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6c8c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b6c8cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x1b6c90: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1b6c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6c94: 0x0  nop
    ctx->pc = 0x1b6c94u;
    // NOP
    // 0x1b6c98: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6C98u;
    {
        const bool branch_taken_0x1b6c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C98u;
        // 0x1b6c9c: 0xe621002c  swc1        $f1, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c98) {
            ctx->pc = 0x1B6CB8u;
            goto label_1b6cb8;
        }
    }
    ctx->pc = 0x1B6CA0u;
    // 0x1b6ca0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b6ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6ca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6ca8: 0x0  nop
    ctx->pc = 0x1b6ca8u;
    // NOP
    // 0x1b6cac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b6cacu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1b6cb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6CB0u;
    {
        const bool branch_taken_0x1b6cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CB0u;
        // 0x1b6cb4: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cb0) {
            ctx->pc = 0x1B6CCCu;
            goto label_1b6ccc;
        }
    }
    ctx->pc = 0x1B6CB8u;
label_1b6cb8:
    // 0x1b6cb8: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1b6cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x1b6cbc: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1b6cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1b6cc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6cc4: 0x0  nop
    ctx->pc = 0x1b6cc4u;
    // NOP
    // 0x1b6cc8: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x1b6cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_1b6ccc:
    // 0x1b6ccc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b6cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6cd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b6cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6cd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CD8u;
        // 0x1b6cdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6CE0u;
}
