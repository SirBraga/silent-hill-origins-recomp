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

// Function: sub_001C0EB8
// Address: 0x1c0eb8 - 0x1c0fe8
void sub_001C0EB8_0x1c0eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0EB8_0x1c0eb8");
#endif

    switch (ctx->pc) {
        case 0x1c0ee0u: goto label_1c0ee0;
        case 0x1c0ef4u: goto label_1c0ef4;
        default: break;
    }

    ctx->pc = 0x1c0eb8u;

    // 0x1c0eb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c0eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c0ebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0ec4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c0ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c0ec8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1c0ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0ed0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0ED0u;
    {
        const bool branch_taken_0x1c0ed0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0ED0u;
        // 0x1c0ed4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ed0) {
            ctx->pc = 0x1C0EE8u;
            goto label_1c0ee8;
        }
    }
    ctx->pc = 0x1C0ED8u;
    // 0x1c0ed8: 0xc0701ce  jal         func_1C0738
    ctx->pc = 0x1C0ED8u;
    SET_GPR_U32(ctx, 31, 0x1C0EE0u);
    ctx->pc = 0x1C0EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0ED8u;
    // 0x1c0edc: 0x8c850454  lw          $a1, 0x454($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0738u, 0x1C0ED8u, 0x1C0EE0u)) {
        return;
    }
    ctx->pc = 0x1C0EE0u;
label_1c0ee0:
    // 0x1c0ee0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C0EE0u;
    {
        const bool branch_taken_0x1c0ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EE0u;
        // 0x1c0ee4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ee0) {
            ctx->pc = 0x1C0FD0u;
            goto label_1c0fd0;
        }
    }
    ctx->pc = 0x1C0EE8u;
label_1c0ee8:
    // 0x1c0ee8: 0x8e050454  lw          $a1, 0x454($s0)
    ctx->pc = 0x1c0ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1c0eec: 0xc0701ce  jal         func_1C0738
    ctx->pc = 0x1C0EECu;
    SET_GPR_U32(ctx, 31, 0x1C0EF4u);
    ctx->pc = 0x1C0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EECu;
    // 0x1c0ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0738u, 0x1C0EECu, 0x1C0EF4u)) {
        return;
    }
    ctx->pc = 0x1C0EF4u;
label_1c0ef4:
    // 0x1c0ef4: 0x8e040454  lw          $a0, 0x454($s0)
    ctx->pc = 0x1c0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1c0ef8: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1c0ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1c0efc: 0x24a596b8  addiu       $a1, $a1, -0x6948
    ctx->pc = 0x1c0efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940344));
    // 0x1c0f00: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c0f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c0f04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c0f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c0f08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c0f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0f0c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1c0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1c0f10: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x1c0f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1c0f14: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1c0f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0f18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c0f1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c0f20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c0f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0f24: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c0f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c0f28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c0f28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c0f2c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1c0f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c0f30: 0x8e030454  lw          $v1, 0x454($s0)
    ctx->pc = 0x1c0f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1c0f34: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1c0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1c0f38: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1c0f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0f3c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c0f40: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1c0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c0f44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c0f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0f48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c0f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c0f4c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c0f4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c0f50: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1c0f50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1c0f54: 0x8e020454  lw          $v0, 0x454($s0)
    ctx->pc = 0x1c0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1c0f58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c0f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0f5c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1c0f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1c0f60: 0x8e030454  lw          $v1, 0x454($s0)
    ctx->pc = 0x1c0f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1c0f64: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1c0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1c0f68: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1c0f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0f6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c0f70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1c0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c0f74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c0f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0f78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c0f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c0f7c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c0f7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c0f80: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x1c0f80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1c0f84: 0x8e040454  lw          $a0, 0x454($s0)
    ctx->pc = 0x1c0f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1c0f88: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1c0f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1c0f8c: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x1c0f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0f90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c0f94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c0f98: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c0f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0f9c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c0f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c0fa0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c0fa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c0fa4: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x1c0fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1c0fa8: 0x8e020454  lw          $v0, 0x454($s0)
    ctx->pc = 0x1c0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1c0fac: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1c0facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0fb0: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1c0fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x1c0fb4: 0x8e030454  lw          $v1, 0x454($s0)
    ctx->pc = 0x1c0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1c0fb8: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1c0fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0fbc: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x1c0fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1c0fc0: 0x8e020454  lw          $v0, 0x454($s0)
    ctx->pc = 0x1c0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1c0fc4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1c0fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0fc8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c0fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1c0fcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c0fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0fd0:
    // 0x1c0fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FD4u;
        // 0x1c0fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0FDCu;
    // 0x1c0fdc: 0x0  nop
    ctx->pc = 0x1c0fdcu;
    // NOP
    // 0x1c0fe0: 0x0  nop
    ctx->pc = 0x1c0fe0u;
    // NOP
    // 0x1c0fe4: 0x0  nop
    ctx->pc = 0x1c0fe4u;
    // NOP
    ctx->pc = 0x1c0fe8u;
}
