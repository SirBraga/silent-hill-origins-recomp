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

// Function: sub_001B3EE0
// Address: 0x1b3ee0 - 0x1b3fe0
void sub_001B3EE0_0x1b3ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3EE0_0x1b3ee0");
#endif

    switch (ctx->pc) {
        case 0x1b3f58u: goto label_1b3f58;
        case 0x1b3f64u: goto label_1b3f64;
        default: break;
    }

    ctx->pc = 0x1b3ee0u;

    // 0x1b3ee0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b3ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b3ee4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b3ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b3ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3eec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3ef0: 0xe7bb0068  swc1        $f27, 0x68($sp)
    ctx->pc = 0x1b3ef0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b3ef4: 0xe7ba0060  swc1        $f26, 0x60($sp)
    ctx->pc = 0x1b3ef4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b3ef8: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x1b3ef8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b3efc: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x1b3efcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b3f00: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x1b3f00u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b3f04: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1b3f04u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b3f08: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1b3f08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b3f0c: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B3F0Cu;
    {
        const bool branch_taken_0x1b3f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F0Cu;
        // 0x1b3f10: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f0c) {
            ctx->pc = 0x1B3FACu;
            goto label_1b3fac;
        }
    }
    ctx->pc = 0x1B3F14u;
    // 0x1b3f14: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1b3f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1b3f18: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1b3f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1b3f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f20: 0x3c014463  lui         $at, 0x4463
    ctx->pc = 0x1b3f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17507 << 16));
    // 0x1b3f24: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1b3f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x1b3f28: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1b3f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1b3f2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b3f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f30: 0x3c0142e4  lui         $at, 0x42E4
    ctx->pc = 0x1b3f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17124 << 16));
    // 0x1b3f34: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1b3f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1b3f38: 0x3c01442a  lui         $at, 0x442A
    ctx->pc = 0x1b3f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17450 << 16));
    // 0x1b3f3c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1b3f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x1b3f40: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1b3f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1b3f44: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1b3f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x1b3f48: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1b3f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1b3f4c: 0x3c013b00  lui         $at, 0x3B00
    ctx->pc = 0x1b3f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15104 << 16));
    // 0x1b3f50: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1b3f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1b3f54: 0x0  nop
    ctx->pc = 0x1b3f54u;
    // NOP
label_1b3f58:
    // 0x1b3f58: 0xc6140000  lwc1        $f20, 0x0($s0)
    ctx->pc = 0x1b3f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3f5c: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1B3F64u);
    ctx->pc = 0x1B3F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F5Cu;
    // 0x1b3f60: 0xc6150004  lwc1        $f21, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B3F5Cu, 0x1B3F64u)) {
        return;
    }
    ctx->pc = 0x1B3F64u;
label_1b3f64:
    // 0x1b3f64: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3F64u;
    {
        const bool branch_taken_0x1b3f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f64) {
            ctx->pc = 0x1B3F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3F64u;
            // 0x1b3f68: 0x461aa001  sub.s       $f0, $f20, $f26 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[26]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3F80u;
            goto label_1b3f80;
        }
    }
    ctx->pc = 0x1B3F6Cu;
    // 0x1b3f6c: 0x4616a002  mul.s       $f0, $f20, $f22
    ctx->pc = 0x1b3f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1b3f70: 0x0  nop
    ctx->pc = 0x1b3f70u;
    // NOP
    // 0x1b3f74: 0x461b0503  div.s       $f20, $f0, $f27
    ctx->pc = 0x1b3f74u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[27]);
    // 0x1b3f78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3F78u;
    {
        const bool branch_taken_0x1b3f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F78u;
        // 0x1b3f7c: 0x4618a802  mul.s       $f0, $f21, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f78) {
            ctx->pc = 0x1B3F90u;
            goto label_1b3f90;
        }
    }
    ctx->pc = 0x1B3F80u;
label_1b3f80:
    // 0x1b3f80: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1b3f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1b3f84: 0x0  nop
    ctx->pc = 0x1b3f84u;
    // NOP
    // 0x1b3f88: 0x46190503  div.s       $f20, $f0, $f25
    ctx->pc = 0x1b3f88u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[25]);
    // 0x1b3f8c: 0x4618a802  mul.s       $f0, $f21, $f24
    ctx->pc = 0x1b3f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
label_1b3f90:
    // 0x1b3f90: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x1b3f90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b3f94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b3f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b3f98: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1b3f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b3f9c: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x1b3f9cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1b3fa0: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x1b3fa0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b3fa4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B3FA4u;
    {
        const bool branch_taken_0x1b3fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FA4u;
        // 0x1b3fa8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fa4) {
            ctx->pc = 0x1B3F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3f58;
        }
    }
    ctx->pc = 0x1B3FACu;
label_1b3fac:
    // 0x1b3fac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b3facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3fb8: 0xc7bb0068  lwc1        $f27, 0x68($sp)
    ctx->pc = 0x1b3fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1b3fbc: 0xc7ba0060  lwc1        $f26, 0x60($sp)
    ctx->pc = 0x1b3fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1b3fc0: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x1b3fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1b3fc4: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x1b3fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1b3fc8: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x1b3fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b3fcc: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1b3fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b3fd0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1b3fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b3fd4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b3fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FD8u;
        // 0x1b3fdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3FE0u;
}
