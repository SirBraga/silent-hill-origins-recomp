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

// Function: sub_00140D98
// Address: 0x140d98 - 0x140f40
void sub_00140D98_0x140d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140D98_0x140d98");
#endif

    switch (ctx->pc) {
        case 0x140de8u: goto label_140de8;
        case 0x140e04u: goto label_140e04;
        case 0x140e28u: goto label_140e28;
        case 0x140e50u: goto label_140e50;
        case 0x140e8cu: goto label_140e8c;
        case 0x140eb4u: goto label_140eb4;
        case 0x140efcu: goto label_140efc;
        case 0x140f04u: goto label_140f04;
        default: break;
    }

    ctx->pc = 0x140d98u;

    // 0x140d98: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x140d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x140d9c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x140d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x140da0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x140da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x140da4: 0x8c62842c  lw          $v0, -0x7BD4($v1)
    ctx->pc = 0x140da4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33842Cu));
    // 0x140da8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x140da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140dac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x140dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x140db0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x140db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x140db4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140dbc: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x140dbcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x140dc0: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x140dc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x140dc4: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x140dc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x140dc8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x140dc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x140dcc: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x140DCCu;
    {
        const bool branch_taken_0x140dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DCCu;
        // 0x140dd0: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140dcc) {
            ctx->pc = 0x140F0Cu;
            goto label_140f0c;
        }
    }
    ctx->pc = 0x140DD4u;
    // 0x140dd4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x140dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x140dd8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x140dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x140ddc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x140ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x140de0: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x140DE0u;
    SET_GPR_U32(ctx, 31, 0x140DE8u);
    ctx->pc = 0x140DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140DE0u;
    // 0x140de4: 0x24070504  addiu       $a3, $zero, 0x504 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x140DE0u, 0x140DE8u)) {
        return;
    }
    ctx->pc = 0x140DE8u;
label_140de8:
    // 0x140de8: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x140de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x140dec: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x140decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x140df0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140df4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140df8: 0xae62842c  sw          $v0, -0x7BD4($s3)
    ctx->pc = 0x140df8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294935596), GPR_U32(ctx, 2));
    // 0x140dfc: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x140DFCu;
    SET_GPR_U32(ctx, 31, 0x140E04u);
    ctx->pc = 0x140E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140DFCu;
    // 0x140e00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x140DFCu, 0x140E04u)) {
        return;
    }
    ctx->pc = 0x140E04u;
label_140e04:
    // 0x140e04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x140e08: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x140e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x140e0c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x140e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x140e10: 0x34210fd0  ori         $at, $at, 0xFD0
    ctx->pc = 0x140e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4048);
    // 0x140e14: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x140e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x140e18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x140e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e1c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x140e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x140e20: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x140e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x140e24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x140e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140e28:
    // 0x140e28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x140e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140e2c: 0x0  nop
    ctx->pc = 0x140e2cu;
    // NOP
    // 0x140e30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x140e30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x140e34: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x140e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140e38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x140e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e3c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x140e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x140e40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x140e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x140e44: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x140e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x140e48: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x140e48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x140e4c: 0x0  nop
    ctx->pc = 0x140e4cu;
    // NOP
label_140e50:
    // 0x140e50: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x140e50u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140e54: 0x0  nop
    ctx->pc = 0x140e54u;
    // NOP
    // 0x140e58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x140e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x140e5c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x140e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x140e60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x140e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x140e64: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x140e64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x140e68: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x140e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x140e6c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x140e6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x140e70: 0x460c0004  c1          0xC0004
    ctx->pc = 0x140e70u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x140e74: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x140e74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140e78: 0x0  nop
    ctx->pc = 0x140e78u;
    // NOP
    // 0x140e7c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x140E7Cu;
    {
        const bool branch_taken_0x140e7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x140e7c) {
            ctx->pc = 0x140E8Cu;
            goto label_140e8c;
        }
    }
    ctx->pc = 0x140E84u;
    // 0x140e84: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x140E84u;
    SET_GPR_U32(ctx, 31, 0x140E8Cu);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x140E84u, 0x140E8Cu)) {
        return;
    }
    ctx->pc = 0x140E8Cu;
label_140e8c:
    // 0x140e8c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x140e8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140e90: 0x0  nop
    ctx->pc = 0x140e90u;
    // NOP
    // 0x140e94: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x140E94u;
    {
        const bool branch_taken_0x140e94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140e94) {
            ctx->pc = 0x140E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140E94u;
            // 0x140e98: 0x46180302  mul.s       $f12, $f0, $f24 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x140EACu;
            goto label_140eac;
        }
    }
    ctx->pc = 0x140E9Cu;
    // 0x140e9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x140ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x140ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140ea4: 0x0  nop
    ctx->pc = 0x140ea4u;
    // NOP
    // 0x140ea8: 0x46180302  mul.s       $f12, $f0, $f24
    ctx->pc = 0x140ea8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_140eac:
    // 0x140eac: 0xc09b164  jal         func_26C590
    ctx->pc = 0x140EACu;
    SET_GPR_U32(ctx, 31, 0x140EB4u);
    ctx->pc = 0x140EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140EACu;
    // 0x140eb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x140EACu, 0x140EB4u)) {
        return;
    }
    ctx->pc = 0x140EB4u;
label_140eb4:
    // 0x140eb4: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x140eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x140eb8: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x140eb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x140ebc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x140ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x140ec0: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x140ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x140ec4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x140ec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x140ec8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x140ec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x140ecc: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x140eccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x140ed0: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x140ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x140ed4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x140ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x140ed8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x140ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x140edc: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x140EDCu;
    {
        const bool branch_taken_0x140edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x140EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EDCu;
        // 0x140ee0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140edc) {
            ctx->pc = 0x140E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140e50;
        }
    }
    ctx->pc = 0x140EE4u;
    // 0x140ee4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x140ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ee8: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x140ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x140eec: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x140EECu;
    {
        const bool branch_taken_0x140eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140eec) {
            ctx->pc = 0x140E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140e28;
        }
    }
    ctx->pc = 0x140EF4u;
    // 0x140ef4: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x140EF4u;
    SET_GPR_U32(ctx, 31, 0x140EFCu);
    ctx->pc = 0x140EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140EF4u;
    // 0x140ef8: 0x8e64842c  lw          $a0, -0x7BD4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935596)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x140EF4u, 0x140EFCu)) {
        return;
    }
    ctx->pc = 0x140EFCu;
label_140efc:
    // 0x140efc: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x140EFCu;
    SET_GPR_U32(ctx, 31, 0x140F04u);
    ctx->pc = 0x140F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140EFCu;
    // 0x140f00: 0x8e64842c  lw          $a0, -0x7BD4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935596)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x140EFCu, 0x140F04u)) {
        return;
    }
    ctx->pc = 0x140F04u;
label_140f04:
    // 0x140f04: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x140f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x140f08: 0xac628430  sw          $v0, -0x7BD0($v1)
    ctx->pc = 0x140f08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x338430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338430u, _value); } while (0);
label_140f0c:
    // 0x140f0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x140f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140f10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x140f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140f14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140f18: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x140f18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140f20: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x140f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x140f24: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x140f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x140f28: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x140f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x140f2c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x140f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x140f30: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x140f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x140f34: 0x3e00008  jr          $ra
    ctx->pc = 0x140F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F34u;
        // 0x140f38: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140F3Cu;
    // 0x140f3c: 0x0  nop
    ctx->pc = 0x140f3cu;
    // NOP
    ctx->pc = 0x140f40u;
}
