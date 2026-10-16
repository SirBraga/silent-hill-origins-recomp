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

// Function: sub_001E5E00
// Address: 0x1e5e00 - 0x1e5f98
void sub_001E5E00_0x1e5e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5E00_0x1e5e00");
#endif

    switch (ctx->pc) {
        case 0x1e5e50u: goto label_1e5e50;
        case 0x1e5e68u: goto label_1e5e68;
        case 0x1e5e98u: goto label_1e5e98;
        case 0x1e5eb8u: goto label_1e5eb8;
        case 0x1e5ef0u: goto label_1e5ef0;
        case 0x1e5f48u: goto label_1e5f48;
        case 0x1e5f50u: goto label_1e5f50;
        default: break;
    }

    ctx->pc = 0x1e5e00u;

    // 0x1e5e00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e5e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e5e04: 0x24070504  addiu       $a3, $zero, 0x504
    ctx->pc = 0x1e5e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x1e5e08: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1e5e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1e5e0c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e5e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e10: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e5e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e5e14: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e5e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1e5e18: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e5e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e5e1c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e5e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e5e20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e5e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e5e24: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1e5e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1e5e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5e2c: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x1e5e2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1e5e30: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1e5e30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e5e34: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1e5e34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1e5e38: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1e5e38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e5e3c: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x1e5e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x1e5e40: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x1e5e40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
    // 0x1e5e44: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1e5e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e5e48: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1E5E48u;
    SET_GPR_U32(ctx, 31, 0x1E5E50u);
    ctx->pc = 0x1E5E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E48u;
    // 0x1e5e4c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1E5E48u, 0x1E5E50u)) {
        return;
    }
    ctx->pc = 0x1E5E50u;
label_1e5e50:
    // 0x1e5e50: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1E5E50u;
    {
        const bool branch_taken_0x1e5e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E50u;
        // 0x1e5e54: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e50) {
            ctx->pc = 0x1E5F50u;
            goto label_1e5f50;
        }
    }
    ctx->pc = 0x1E5E58u;
    // 0x1e5e58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e60: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1E5E60u;
    SET_GPR_U32(ctx, 31, 0x1E5E68u);
    ctx->pc = 0x1E5E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E60u;
    // 0x1e5e64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x1E5E60u, 0x1E5E68u)) {
        return;
    }
    ctx->pc = 0x1E5E68u;
label_1e5e68:
    // 0x1e5e68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e6c: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E5E6Cu;
    {
        const bool branch_taken_0x1e5e6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E6Cu;
        // 0x1e5e70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e6c) {
            ctx->pc = 0x1E5F48u;
            goto label_1e5f48;
        }
    }
    ctx->pc = 0x1E5E74u;
    // 0x1e5e74: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1e5e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1e5e78: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1e5e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1e5e7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e5e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5e80: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1e5e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1e5e84: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x1e5e84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e5e88: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1e5e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x1e5e8c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1e5e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1e5e90: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1e5e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5e94: 0x0  nop
    ctx->pc = 0x1e5e94u;
    // NOP
label_1e5e98:
    // 0x1e5e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e5e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5e9c: 0x0  nop
    ctx->pc = 0x1e5e9cu;
    // NOP
    // 0x1e5ea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e5ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e5ea4: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x1e5ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5ea8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e5ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5eac: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1e5eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1e5eb0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1e5eb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1e5eb4: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x1e5eb4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1e5eb8:
    // 0x1e5eb8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e5eb8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5ebc: 0x0  nop
    ctx->pc = 0x1e5ebcu;
    // NOP
    // 0x1e5ec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e5ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e5ec4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1e5ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1e5ec8: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1e5ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1e5ecc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e5eccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e5ed0: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1e5ed0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1e5ed4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1e5ed4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x1e5ed8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1e5ed8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5edc: 0x0  nop
    ctx->pc = 0x1e5edcu;
    // NOP
    // 0x1e5ee0: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5EE0u;
    {
        const bool branch_taken_0x1e5ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5ee0) {
            ctx->pc = 0x1E5EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5EE0u;
            // 0x1e5ee4: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5EF4u;
            goto label_1e5ef4;
        }
    }
    ctx->pc = 0x1E5EE8u;
    // 0x1e5ee8: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1E5EE8u;
    SET_GPR_U32(ctx, 31, 0x1E5EF0u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1E5EE8u, 0x1E5EF0u)) {
        return;
    }
    ctx->pc = 0x1E5EF0u;
label_1e5ef0:
    // 0x1e5ef0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1e5ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_1e5ef4:
    // 0x1e5ef4: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x1e5ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x1e5ef8: 0xa2120001  sb          $s2, 0x1($s0)
    ctx->pc = 0x1e5ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x1e5efc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e5efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e5f00: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x1e5f00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x1e5f04: 0x2a250010  slti        $a1, $s1, 0x10
    ctx->pc = 0x1e5f04u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e5f08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5f08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e5f0c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1e5f0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e5f10: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1e5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1e5f14: 0x28430100  slti        $v1, $v0, 0x100
    ctx->pc = 0x1e5f14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1e5f18: 0x2a3100a  movz        $v0, $s5, $v1
    ctx->pc = 0x1e5f18u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21));
    // 0x1e5f1c: 0x242202a  slt         $a0, $s2, $v0
    ctx->pc = 0x1e5f1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e5f20: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x1e5f20u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x1e5f24: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x1e5f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e5f28: 0x14a0ffe3  bnez        $a1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1E5F28u;
    {
        const bool branch_taken_0x1e5f28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F28u;
        // 0x1e5f2c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f28) {
            ctx->pc = 0x1E5EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5eb8;
        }
    }
    ctx->pc = 0x1E5F30u;
    // 0x1e5f30: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1e5f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f34: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1e5f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e5f38: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1E5F38u;
    {
        const bool branch_taken_0x1e5f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f38) {
            ctx->pc = 0x1E5E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5e98;
        }
    }
    ctx->pc = 0x1E5F40u;
    // 0x1e5f40: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x1E5F40u;
    SET_GPR_U32(ctx, 31, 0x1E5F48u);
    ctx->pc = 0x1E5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F40u;
    // 0x1e5f44: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x1E5F40u, 0x1E5F48u)) {
        return;
    }
    ctx->pc = 0x1E5F48u;
label_1e5f48:
    // 0x1e5f48: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x1E5F48u;
    SET_GPR_U32(ctx, 31, 0x1E5F50u);
    ctx->pc = 0x1E5F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F48u;
    // 0x1e5f4c: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x1E5F48u, 0x1E5F50u)) {
        return;
    }
    ctx->pc = 0x1E5F50u;
label_1e5f50:
    // 0x1e5f50: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e5f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f54: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e5f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5f58: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e5f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5f5c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e5f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5f60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5f60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5f64: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1e5f64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5f68: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1e5f68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5f70: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x1e5f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e5f74: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1e5f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e5f78: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1e5f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e5f7c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1e5f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e5f80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F80u;
        // 0x1e5f84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5F88u;
    // 0x1e5f88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e5f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e5f8c: 0x0  nop
    ctx->pc = 0x1e5f8cu;
    // NOP
    // 0x1e5f90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e5f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e5f94: 0x0  nop
    ctx->pc = 0x1e5f94u;
    // NOP
    ctx->pc = 0x1e5f98u;
}
