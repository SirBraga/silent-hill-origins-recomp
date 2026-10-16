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

// Function: sub_001E2D20
// Address: 0x1e2d20 - 0x1e2f38
void sub_001E2D20_0x1e2d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2D20_0x1e2d20");
#endif

    switch (ctx->pc) {
        case 0x1e2df4u: goto label_1e2df4;
        case 0x1e2e00u: goto label_1e2e00;
        case 0x1e2e0cu: goto label_1e2e0c;
        case 0x1e2e18u: goto label_1e2e18;
        default: break;
    }

    ctx->pc = 0x1e2d20u;

    // 0x1e2d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e2d24: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1e2d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e2d28: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e2d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e2d2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e2d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e2d30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e2d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2d34: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e2d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e2d38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e2d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2d3c: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1e2d3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e2d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2d44: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1e2d44u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1e2d48: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x1e2d48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e2d4c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1e2d4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e2d50: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1e2d50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e2d54: 0xc6070008  lwc1        $f7, 0x8($s0)
    ctx->pc = 0x1e2d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e2d58: 0xc605000c  lwc1        $f5, 0xC($s0)
    ctx->pc = 0x1e2d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e2d5c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e2d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2d60: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x1e2d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2d64: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1e2d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1e2d68: 0xc6060010  lwc1        $f6, 0x10($s0)
    ctx->pc = 0x1e2d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e2d6c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1e2d6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1e2d70: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1e2d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2d74: 0xc6080014  lwc1        $f8, 0x14($s0)
    ctx->pc = 0x1e2d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1e2d78: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x1e2d78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x1e2d7c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1e2d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2d80: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e2d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e2d84: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x1e2d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x1e2d88: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e2d88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e2d8c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1e2d8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e2d90: 0x46046034  c.lt.s      $f12, $f4
    ctx->pc = 0x1e2d90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2d94: 0x0  nop
    ctx->pc = 0x1e2d94u;
    // NOP
    // 0x1e2d98: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1E2D98u;
    {
        const bool branch_taken_0x1e2d98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D98u;
        // 0x1e2d9c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d98) {
            ctx->pc = 0x1E2DC8u;
            goto label_1e2dc8;
        }
    }
    ctx->pc = 0x1E2DA0u;
    // 0x1e2da0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1e2da0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1e2da4: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x1e2da4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x1e2da8: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x1e2da8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x1e2dac: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1e2dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1e2db0: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1e2db0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x1e2db4: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x1e2db4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1e2db8: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x1e2db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1e2dbc: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x1e2dbcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x1e2dc0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1e2dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1e2dc4: 0x0  nop
    ctx->pc = 0x1e2dc4u;
    // NOP
label_1e2dc8:
    // 0x1e2dc8: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x1e2dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x1e2dcc: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x1e2dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x1e2dd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e2dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2dd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2dd8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1e2dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1e2ddc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1e2ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2de0: 0x0  nop
    ctx->pc = 0x1e2de0u;
    // NOP
    // 0x1e2de4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1E2DE4u;
    {
        const bool branch_taken_0x1e2de4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DE4u;
        // 0x1e2de8: 0x4616adc1  sub.s       $f23, $f21, $f22 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2de4) {
            ctx->pc = 0x1E2E1Cu;
            goto label_1e2e1c;
        }
    }
    ctx->pc = 0x1E2DECu;
    // 0x1e2dec: 0xc09b320  jal         func_26CC80
    ctx->pc = 0x1E2DECu;
    SET_GPR_U32(ctx, 31, 0x1E2DF4u);
    ctx->pc = 0x26CC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CC80u, 0x1E2DECu, 0x1E2DF4u)) {
        return;
    }
    ctx->pc = 0x1E2DF4u;
label_1e2df4:
    // 0x1e2df4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e2df4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e2df8: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1E2DF8u;
    SET_GPR_U32(ctx, 31, 0x1E2E00u);
    ctx->pc = 0x1E2DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2DF8u;
    // 0x1e2dfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1E2DF8u, 0x1E2E00u)) {
        return;
    }
    ctx->pc = 0x1E2E00u;
label_1e2e00:
    // 0x1e2e00: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x1e2e00u;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x1e2e04: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1E2E04u;
    SET_GPR_U32(ctx, 31, 0x1E2E0Cu);
    ctx->pc = 0x1E2E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E04u;
    // 0x1e2e08: 0x4614bb02  mul.s       $f12, $f23, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1E2E04u, 0x1E2E0Cu)) {
        return;
    }
    ctx->pc = 0x1E2E0Cu;
label_1e2e0c:
    // 0x1e2e0c: 0x4614b302  mul.s       $f12, $f22, $f20
    ctx->pc = 0x1e2e0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x1e2e10: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1E2E10u;
    SET_GPR_U32(ctx, 31, 0x1E2E18u);
    ctx->pc = 0x1E2E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E10u;
    // 0x1e2e14: 0x4600adc2  mul.s       $f23, $f21, $f0 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1E2E10u, 0x1E2E18u)) {
        return;
    }
    ctx->pc = 0x1E2E18u;
label_1e2e18:
    // 0x1e2e18: 0x4600ad82  mul.s       $f22, $f21, $f0
    ctx->pc = 0x1e2e18u;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1e2e1c:
    // 0x1e2e1c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1e2e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2e20: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1e2e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2e24: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x1e2e24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x1e2e28: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1e2e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1e2e2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e2e2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e2e30: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1e2e30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1e2e34: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x1e2e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2e38: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1e2e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2e3c: 0x4602b882  mul.s       $f2, $f23, $f2
    ctx->pc = 0x1e2e3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x1e2e40: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1e2e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1e2e44: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e2e44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e2e48: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x1e2e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1e2e4c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1e2e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2e50: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1e2e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2e54: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x1e2e54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x1e2e58: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1e2e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1e2e5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e2e5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e2e60: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x1e2e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1e2e64: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x1e2e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2e68: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1e2e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2e6c: 0x4602b882  mul.s       $f2, $f23, $f2
    ctx->pc = 0x1e2e6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x1e2e70: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1e2e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1e2e74: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e2e74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e2e78: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x1e2e78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1e2e7c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1e2e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2e80: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1e2e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2e84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e2e88: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1e2e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1e2e8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e2e8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e2e90: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x1e2e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1e2e94: 0xc622001c  lwc1        $f2, 0x1C($s1)
    ctx->pc = 0x1e2e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2e98: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1e2e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2e9c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e2e9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e2ea0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1e2ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1e2ea4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e2ea4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e2ea8: 0xe642001c  swc1        $f2, 0x1C($s2)
    ctx->pc = 0x1e2ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1e2eac: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x1e2eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2eb0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e2eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2eb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2eb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e2eb8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1e2eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1e2ebc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e2ebcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e2ec0: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x1e2ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1e2ec4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1e2ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2ec8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1e2ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2ed0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e2ed4: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x1e2ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e2ed8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1e2ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e2edc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1e2edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e2ee0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1e2ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1e2ee4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e2ee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e2ee8: 0xe6410024  swc1        $f1, 0x24($s2)
    ctx->pc = 0x1e2ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1e2eec: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x1e2eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2ef0: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1e2ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2ef4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e2ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e2ef8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1e2ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1e2efc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e2efcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e2f00: 0xe6420028  swc1        $f2, 0x28($s2)
    ctx->pc = 0x1e2f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x1e2f04: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x1e2f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2f08: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1e2f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2f0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e2f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2f10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e2f14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e2f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2f18: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1e2f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1e2f1c: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1e2f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e2f20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e2f20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e2f24: 0xe641002c  swc1        $f1, 0x2C($s2)
    ctx->pc = 0x1e2f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x1e2f28: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e2f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F2Cu;
        // 0x1e2f30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2F34u;
    // 0x1e2f34: 0x0  nop
    ctx->pc = 0x1e2f34u;
    // NOP
    ctx->pc = 0x1e2f38u;
}
