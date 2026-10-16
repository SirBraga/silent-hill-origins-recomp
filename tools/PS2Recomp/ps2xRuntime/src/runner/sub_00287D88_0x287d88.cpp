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

// Function: sub_00287D88
// Address: 0x287d88 - 0x288120
void sub_00287D88_0x287d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287D88_0x287d88");
#endif

    switch (ctx->pc) {
        case 0x287dbcu: goto label_287dbc;
        case 0x287dd0u: goto label_287dd0;
        case 0x287fb0u: goto label_287fb0;
        case 0x287fc4u: goto label_287fc4;
        case 0x2880e0u: goto label_2880e0;
        case 0x2880f0u: goto label_2880f0;
        case 0x288100u: goto label_288100;
        default: break;
    }

    ctx->pc = 0x287d88u;

label_287d88:
    // 0x287d88: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x287d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x287d8c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x287d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x287d90: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x287d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x287d94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x287d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d98: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x287d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x287d9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x287d9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287da0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x287da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x287da4: 0x24d4ffff  addiu       $s4, $a2, -0x1
    ctx->pc = 0x287da4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x287da8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x287da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x287dac: 0x6810044  bgez        $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x287DACu;
    {
        const bool branch_taken_0x287dac = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x287DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DACu;
        // 0x287db0: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287dac) {
            ctx->pc = 0x287EC0u;
            goto label_287ec0;
        }
    }
    ctx->pc = 0x287DB4u;
    // 0x287db4: 0xc09294c  jal         func_24A530
    ctx->pc = 0x287DB4u;
    SET_GPR_U32(ctx, 31, 0x287DBCu);
    ctx->pc = 0x287DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DB4u;
    // 0x287db8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x287DB4u, 0x287DBCu)) {
        return;
    }
    ctx->pc = 0x287DBCu;
label_287dbc:
    // 0x287dbc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x287dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x287dc0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x287dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x287dc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dc8: 0xc09289c  jal         func_24A270
    ctx->pc = 0x287DC8u;
    SET_GPR_U32(ctx, 31, 0x287DD0u);
    ctx->pc = 0x287DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DC8u;
    // 0x287dcc: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x287DC8u, 0x287DD0u)) {
        return;
    }
    ctx->pc = 0x287DD0u;
label_287dd0:
    // 0x287dd0: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x287dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287dd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x287dd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dd8: 0xc463fff0  lwc1        $f3, -0x10($v1)
    ctx->pc = 0x287dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287de0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x287de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x287de4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x287de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x287de8: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x287de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287dec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x287decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x287df0: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x287df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287df4: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x287df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287df8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x287df8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x287dfc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x287dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x287e00: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x287e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287e04: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x287e04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x287e08: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x287e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x287e0c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x287e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x287e10: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x287e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287e14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x287e14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x287e18: 0x46010104  c1          0x10104
    ctx->pc = 0x287e18u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[1]);
    // 0x287e1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287e20: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x287e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287e24: 0x0  nop
    ctx->pc = 0x287e24u;
    // NOP
    // 0x287e28: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x287E28u;
    {
        const bool branch_taken_0x287e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E28u;
        // 0x287e2c: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e28) {
            ctx->pc = 0x287E40u;
            goto label_287e40;
        }
    }
    ctx->pc = 0x287E30u;
    // 0x287e30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287e34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287e38: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x287e38u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x287e3c: 0x0  nop
    ctx->pc = 0x287e3cu;
    // NOP
label_287e40:
    // 0x287e40: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x287e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287e44: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x287e44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287e48: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x287e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x287e4c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x287e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287e50: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x287e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287e54: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x287e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x287e58: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x287e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287e5c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x287e5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x287e60: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x287e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x287e64: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x287E64u;
    {
        const bool branch_taken_0x287e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E64u;
        // 0x287e68: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e64) {
            ctx->pc = 0x2880B4u;
            goto label_2880b4;
        }
    }
    ctx->pc = 0x287E6Cu;
    // 0x287e6c: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x287e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x287e70: 0xc4417ff4  lwc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x287e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287e74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x287e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x287e78: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x287e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x287e7c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x287e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287e80: 0xc4427ff8  lwc1        $f2, 0x7FF8($v0)
    ctx->pc = 0x287e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287e84: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x287e84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x287e88: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x287e88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x287e8c: 0xc4437ff4  lwc1        $f3, 0x7FF4($v0)
    ctx->pc = 0x287e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287e90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x287e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x287e94: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x287e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x287e98: 0xc4407ff8  lwc1        $f0, 0x7FF8($v0)
    ctx->pc = 0x287e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287e9c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x287e9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x287ea0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x287ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x287ea4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x287ea4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x287ea8: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x287ea8u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[3]);
    // 0x287eac: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x287eacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x287eb0: 0xe4417ff4  swc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x287eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32756), bits); }
    // 0x287eb4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x287EB4u;
    {
        const bool branch_taken_0x287eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EB4u;
        // 0x287eb8: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287eb4) {
            ctx->pc = 0x2880A8u;
            goto label_2880a8;
        }
    }
    ctx->pc = 0x287EBCu;
    // 0x287ebc: 0x0  nop
    ctx->pc = 0x287ebcu;
    // NOP
label_287ec0:
    // 0x287ec0: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x287ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287ec4: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x287ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x287ec8: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x287ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287ecc: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x287eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x287ed0: 0x46070101  sub.s       $f4, $f0, $f7
    ctx->pc = 0x287ed0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x287ed4: 0x46050981  sub.s       $f6, $f1, $f5
    ctx->pc = 0x287ed4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x287ed8: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x287ed8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x287edc: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x287edcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x287ee0: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x287ee0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x287ee4: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x287ee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x287ee8: 0x46011240  add.s       $f9, $f2, $f1
    ctx->pc = 0x287ee8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x287eec: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x287eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287ef0: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x287ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287ef4: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x287ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x287ef8: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x287ef8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x287efc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x287efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x287f00: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x287f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x287f04: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x287f04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287f08: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x287f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x287f0c: 0xc4486ab0  lwc1        $f8, 0x6AB0($v0)
    ctx->pc = 0x287f0cu;
    { uint32_t bits = FAST_READ32(0x706AB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x287f10: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x287f10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x287f14: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x287f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287f18: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x287f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x287f1c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x287f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287f20: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x287f20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x287f24: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x287f24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x287f28: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x287f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x287f2c: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x287f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x287f30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x287f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287f34: 0x0  nop
    ctx->pc = 0x287f34u;
    // NOP
    // 0x287f38: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x287F38u;
    {
        const bool branch_taken_0x287f38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F38u;
        // 0x287f3c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f38) {
            ctx->pc = 0x287F48u;
            goto label_287f48;
        }
    }
    ctx->pc = 0x287F40u;
    // 0x287f40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x287f40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f44: 0x0  nop
    ctx->pc = 0x287f44u;
    // NOP
label_287f48:
    // 0x287f48: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x287F48u;
    {
        const bool branch_taken_0x287f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F48u;
        // 0x287f4c: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f48) {
            ctx->pc = 0x2880CCu;
            goto label_2880cc;
        }
    }
    ctx->pc = 0x287F50u;
    // 0x287f50: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x287f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287f54: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x287f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287f58: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x287f58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x287f5c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x287f5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x287f60: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x287f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x287f64: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x287f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x287f68: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x287f68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287f6c: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x287f6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x287f70: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x287f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287f74: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x287f74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x287f78: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x287f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x287f7c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x287f7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x287f80: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x287f80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x287f84: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x287f84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x287f88: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x287f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x287f8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x287f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287f90: 0x0  nop
    ctx->pc = 0x287f90u;
    // NOP
    // 0x287f94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x287F94u;
    {
        const bool branch_taken_0x287f94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F94u;
        // 0x287f98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f94) {
            ctx->pc = 0x287FA0u;
            goto label_287fa0;
        }
    }
    ctx->pc = 0x287F9Cu;
    // 0x287f9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x287f9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287fa0:
    // 0x287fa0: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x287FA0u;
    {
        const bool branch_taken_0x287fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FA0u;
        // 0x287fa4: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287fa0) {
            ctx->pc = 0x2880CCu;
            goto label_2880cc;
        }
    }
    ctx->pc = 0x287FA8u;
    // 0x287fa8: 0xc09294c  jal         func_24A530
    ctx->pc = 0x287FA8u;
    SET_GPR_U32(ctx, 31, 0x287FB0u);
    ctx->pc = 0x287FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287FA8u;
    // 0x287fac: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x287FA8u, 0x287FB0u)) {
        return;
    }
    ctx->pc = 0x287FB0u;
label_287fb0:
    // 0x287fb0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x287fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x287fb4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x287fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x287fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fbc: 0xc09289c  jal         func_24A270
    ctx->pc = 0x287FBCu;
    SET_GPR_U32(ctx, 31, 0x287FC4u);
    ctx->pc = 0x287FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287FBCu;
    // 0x287fc0: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x287FBCu, 0x287FC4u)) {
        return;
    }
    ctx->pc = 0x287FC4u;
label_287fc4:
    // 0x287fc4: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x287fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287fc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x287fc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fcc: 0xc463fff0  lwc1        $f3, -0x10($v1)
    ctx->pc = 0x287fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287fd4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x287fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x287fd8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x287fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x287fdc: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x287fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287fe0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x287fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x287fe4: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x287fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287fe8: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x287fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287fec: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x287fecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x287ff0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x287ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x287ff4: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x287ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287ff8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x287ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x287ffc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x287ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x288000: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x288000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x288004: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x288004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x288008: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x288008u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28800c: 0x46010104  c1          0x10104
    ctx->pc = 0x28800cu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[1]);
    // 0x288010: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x288010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288014: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x288014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288018: 0x0  nop
    ctx->pc = 0x288018u;
    // NOP
    // 0x28801c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28801Cu;
    {
        const bool branch_taken_0x28801c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x288020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28801Cu;
        // 0x288020: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28801c) {
            ctx->pc = 0x288030u;
            goto label_288030;
        }
    }
    ctx->pc = 0x288024u;
    // 0x288024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28802c: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x28802cu;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
label_288030:
    // 0x288030: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x288030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288034: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x288034u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x288038: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x288038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28803c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x28803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288040: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x288040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x288044: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x288044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x288048: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x288048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28804c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x28804cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x288050: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x288050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x288054: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x288054u;
    {
        const bool branch_taken_0x288054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288054u;
        // 0x288058: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288054) {
            ctx->pc = 0x2880B4u;
            goto label_2880b4;
        }
    }
    ctx->pc = 0x28805Cu;
    // 0x28805c: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x28805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x288060: 0xc4417ff4  lwc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x288060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288064: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x288064u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x288068: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x288068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28806c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x28806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288070: 0xc4427ff8  lwc1        $f2, 0x7FF8($v0)
    ctx->pc = 0x288070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x288074: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x288074u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x288078: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x288078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28807c: 0xc4437ff4  lwc1        $f3, 0x7FF4($v0)
    ctx->pc = 0x28807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x288080: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288084: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x288084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x288088: 0xc4407ff8  lwc1        $f0, 0x7FF8($v0)
    ctx->pc = 0x288088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28808c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x28808cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x288090: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x288090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x288094: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x288094u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x288098: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x288098u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[3]);
    // 0x28809c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x28809cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2880a0: 0xe4417ff4  swc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x2880a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32756), bits); }
    // 0x2880a4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2880a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2880a8:
    // 0x2880a8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2880a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2880ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2880ACu;
    {
        const bool branch_taken_0x2880ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880ACu;
        // 0x2880b0: 0xe4407ff8  swc1        $f0, 0x7FF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880ac) {
            ctx->pc = 0x288100u;
            goto label_288100;
        }
    }
    ctx->pc = 0x2880B4u;
label_2880b4:
    // 0x2880b4: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x2880b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2880b8: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x2880b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2880bc: 0xb062fffb  sdl         $v0, -0x5($v1)
    ctx->pc = 0x2880bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2880c0: 0xb462fff4  sdr         $v0, -0xC($v1)
    ctx->pc = 0x2880c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2880c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2880C4u;
    {
        const bool branch_taken_0x2880c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880C4u;
        // 0x2880c8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880c4) {
            ctx->pc = 0x288104u;
            goto label_288104;
        }
    }
    ctx->pc = 0x2880CCu;
label_2880cc:
    // 0x2880cc: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2880ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2880d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2880d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2880d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880d8: 0xc0a1f1a  jal         func_287C68
    ctx->pc = 0x2880D8u;
    SET_GPR_U32(ctx, 31, 0x2880E0u);
    ctx->pc = 0x2880DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2880D8u;
    // 0x2880dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287C68u, 0x2880D8u, 0x2880E0u)) {
        return;
    }
    ctx->pc = 0x2880E0u;
label_2880e0:
    // 0x2880e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2880e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2880e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880e8: 0xc0a1f62  jal         func_287D88
    ctx->pc = 0x2880E8u;
    SET_GPR_U32(ctx, 31, 0x2880F0u);
    ctx->pc = 0x2880ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2880E8u;
    // 0x2880ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287D88u;
    goto label_287d88;
    ctx->pc = 0x2880F0u;
label_2880f0:
    // 0x2880f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2880f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2880f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880f8: 0xc0a1f62  jal         func_287D88
    ctx->pc = 0x2880F8u;
    SET_GPR_U32(ctx, 31, 0x288100u);
    ctx->pc = 0x2880FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2880F8u;
    // 0x2880fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287D88u;
    goto label_287d88;
    ctx->pc = 0x288100u;
label_288100:
    // 0x288100: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x288100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_288104:
    // 0x288104: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x288104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x288108: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x288108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28810c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x28810cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288110: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x288110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x288114: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x288114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x288118: 0x3e00008  jr          $ra
    ctx->pc = 0x288118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288118u;
        // 0x28811c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288120u;
}
