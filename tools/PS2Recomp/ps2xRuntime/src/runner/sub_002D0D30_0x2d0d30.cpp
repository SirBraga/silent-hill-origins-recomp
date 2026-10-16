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

// Function: sub_002D0D30
// Address: 0x2d0d30 - 0x2d1230
void sub_002D0D30_0x2d0d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0D30_0x2d0d30");
#endif

    switch (ctx->pc) {
        case 0x2d0db0u: goto label_2d0db0;
        case 0x2d0db8u: goto label_2d0db8;
        case 0x2d0dc0u: goto label_2d0dc0;
        case 0x2d0e28u: goto label_2d0e28;
        case 0x2d0edcu: goto label_2d0edc;
        case 0x2d0f68u: goto label_2d0f68;
        case 0x2d0fd8u: goto label_2d0fd8;
        case 0x2d101cu: goto label_2d101c;
        default: break;
    }

    ctx->pc = 0x2d0d30u;

    // 0x2d0d30: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2d0d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2d0d34: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2d0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x2d0d38: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2d0d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2d0d3c: 0x24846300  addiu       $a0, $a0, 0x6300
    ctx->pc = 0x2d0d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25344));
    // 0x2d0d40: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2d0d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2d0d44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2d0d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d48: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2d0d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2d0d4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d0d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d50: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2d0d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2d0d54: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d0d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d58: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x2d0d58u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2d0d5c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d0d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d60: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x2d0d60u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2d0d64: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x2d0d64u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x2d0d68: 0xe7bb0138  swc1        $f27, 0x138($sp)
    ctx->pc = 0x2d0d68u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2d0d6c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x2d0d6cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x2d0d70: 0xe7ba0130  swc1        $f26, 0x130($sp)
    ctx->pc = 0x2d0d70u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2d0d74: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2d0d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2d0d78: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2d0d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2d0d7c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2d0d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2d0d80: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2d0d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2d0d84: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2d0d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x2d0d88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d0d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d0d8c: 0xe7bf0158  swc1        $f31, 0x158($sp)
    ctx->pc = 0x2d0d8cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2d0d90: 0xe7be0150  swc1        $f30, 0x150($sp)
    ctx->pc = 0x2d0d90u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2d0d94: 0xe7bd0148  swc1        $f29, 0x148($sp)
    ctx->pc = 0x2d0d94u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2d0d98: 0xe7bc0140  swc1        $f28, 0x140($sp)
    ctx->pc = 0x2d0d98u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2d0d9c: 0xe7b90128  swc1        $f25, 0x128($sp)
    ctx->pc = 0x2d0d9cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2d0da0: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x2d0da0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2d0da4: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2d0da4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2d0da8: 0xc0b55bc  jal         func_2D56F0
    ctx->pc = 0x2D0DA8u;
    SET_GPR_U32(ctx, 31, 0x2D0DB0u);
    ctx->pc = 0x2D0DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0DA8u;
    // 0x2d0dac: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D56F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D56F0u, 0x2D0DA8u, 0x2D0DB0u)) {
        return;
    }
    ctx->pc = 0x2D0DB0u;
label_2d0db0:
    // 0x2d0db0: 0xc0b53b6  jal         func_2D4ED8
    ctx->pc = 0x2D0DB0u;
    SET_GPR_U32(ctx, 31, 0x2D0DB8u);
    ctx->pc = 0x2D4ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4ED8u, 0x2D0DB0u, 0x2D0DB8u)) {
        return;
    }
    ctx->pc = 0x2D0DB8u;
label_2d0db8:
    // 0x2d0db8: 0xc0b52fa  jal         func_2D4BE8
    ctx->pc = 0x2D0DB8u;
    SET_GPR_U32(ctx, 31, 0x2D0DC0u);
    ctx->pc = 0x2D0DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0DB8u;
    // 0x2d0dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4BE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4BE8u, 0x2D0DB8u, 0x2D0DC0u)) {
        return;
    }
    ctx->pc = 0x2D0DC0u;
label_2d0dc0:
    // 0x2d0dc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0dc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d0dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0dc8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d0dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d0dcc: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2d0dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d0dd0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2d0dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d0dd4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x2d0dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2d0dd8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2d0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2d0ddc: 0xc49b004c  lwc1        $f27, 0x4C($a0)
    ctx->pc = 0x2d0ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2d0de0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2d0de0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0de4: 0x1468002c  bne         $v1, $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D0DE4u;
    {
        const bool branch_taken_0x2d0de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x2D0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DE4u;
        // 0x2d0de8: 0xc4da004c  lwc1        $f26, 0x4C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0de4) {
            ctx->pc = 0x2D0E98u;
            goto label_2d0e98;
        }
    }
    ctx->pc = 0x2D0DECu;
    // 0x2d0dec: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2d0decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d0df0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2d0df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0df4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0df4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0df8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2d0df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d0dfc: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2d0dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0e00: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d0e00u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d0e04: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2d0e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d0e08: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2d0e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0e0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0e0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0e10: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2d0e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d0e14: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d0e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e18: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2d0e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2d0e1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d0e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e20: 0xc0aa624  jal         func_2A9890
    ctx->pc = 0x2D0E20u;
    SET_GPR_U32(ctx, 31, 0x2D0E28u);
    ctx->pc = 0x2D0E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0E20u;
    // 0x2d0e24: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9890u, 0x2D0E20u, 0x2D0E28u)) {
        return;
    }
    ctx->pc = 0x2D0E28u;
label_2d0e28:
    // 0x2d0e28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d0e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d0e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0e30: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2d0e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0e34: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d0e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d0e38: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2d0e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0e3c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2d0e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0e40: 0xc4640034  lwc1        $f4, 0x34($v1)
    ctx->pc = 0x2d0e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d0e44: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2d0e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0e48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d0e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d0e4c: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x2d0e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d0e50: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2d0e50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2d0e54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d0e54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d0e58: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x2d0e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d0e5c: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x2d0e5cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2d0e60: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x2d0e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0e64: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2d0e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0e68: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2d0e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2d0e6c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2d0e6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2d0e70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d0e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d0e74: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d0e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d0e78: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2d0e78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2d0e7c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2d0e7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2d0e80: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d0e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d0e84: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d0e84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d0e88: 0x461b0081  sub.s       $f2, $f0, $f27
    ctx->pc = 0x2d0e88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
    // 0x2d0e8c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2D0E8Cu;
    {
        const bool branch_taken_0x2d0e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E8Cu;
        // 0x2d0e90: 0x461a0840  add.s       $f1, $f1, $f26 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[26]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e8c) {
            ctx->pc = 0x2D0F44u;
            goto label_2d0f44;
        }
    }
    ctx->pc = 0x2D0E94u;
    // 0x2d0e94: 0x0  nop
    ctx->pc = 0x2d0e94u;
    // NOP
label_2d0e98:
    // 0x2d0e98: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x2d0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x2d0e9c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2d0e9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0ea0: 0x1468002f  bne         $v1, $t0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D0EA0u;
    {
        const bool branch_taken_0x2d0ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x2D0EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0EA0u;
        // 0x2d0ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ea0) {
            ctx->pc = 0x2D0F60u;
            goto label_2d0f60;
        }
    }
    ctx->pc = 0x2D0EA8u;
    // 0x2d0ea8: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x2d0ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2d0eac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d0eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0eb0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d0eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0eb4: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x2d0eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d0eb8: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x2d0eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d0ebc: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x2d0ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2d0ec0: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x2d0ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0ec4: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x2d0ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0ec8: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2d0ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2d0ecc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d0ed0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d0ed4: 0xc0aa624  jal         func_2A9890
    ctx->pc = 0x2D0ED4u;
    SET_GPR_U32(ctx, 31, 0x2D0EDCu);
    ctx->pc = 0x2D0ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0ED4u;
    // 0x2d0ed8: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9890u, 0x2D0ED4u, 0x2D0EDCu)) {
        return;
    }
    ctx->pc = 0x2D0EDCu;
label_2d0edc:
    // 0x2d0edc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d0ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0ee4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2d0ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0ee8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d0eec: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2d0eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0ef0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2d0ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0ef4: 0xc4640034  lwc1        $f4, 0x34($v1)
    ctx->pc = 0x2d0ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d0ef8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2d0ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0efc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d0efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d0f00: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x2d0f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d0f04: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2d0f04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2d0f08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d0f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d0f0c: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x2d0f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d0f10: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x2d0f10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2d0f14: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x2d0f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0f18: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2d0f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0f1c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2d0f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2d0f20: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2d0f20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2d0f24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d0f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d0f28: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d0f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d0f2c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2d0f2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2d0f30: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2d0f30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2d0f34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d0f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d0f38: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d0f38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d0f3c: 0x461a0081  sub.s       $f2, $f0, $f26
    ctx->pc = 0x2d0f3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x2d0f40: 0x461b0840  add.s       $f1, $f1, $f27
    ctx->pc = 0x2d0f40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[27]);
label_2d0f44:
    // 0x2d0f44: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2d0f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d0f48: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2d0f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d0f4c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2d0f4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d0f50: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2d0f50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2d0f54: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2d0f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2d0f58: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2D0F58u;
    {
        const bool branch_taken_0x2d0f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F58u;
        // 0x2d0f5c: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f58) {
            ctx->pc = 0x2D11D0u;
            goto label_2d11d0;
        }
    }
    ctx->pc = 0x2D0F60u;
label_2d0f60:
    // 0x2d0f60: 0xc0b40c8  jal         func_2D0320
    ctx->pc = 0x2D0F60u;
    SET_GPR_U32(ctx, 31, 0x2D0F68u);
    ctx->pc = 0x2D0F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0F60u;
    // 0x2d0f64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D0320u, 0x2D0F60u, 0x2D0F68u)) {
        return;
    }
    ctx->pc = 0x2D0F68u;
label_2d0f68:
    // 0x2d0f68: 0xc7818274  lwc1        $f1, -0x7D8C($gp)
    ctx->pc = 0x2d0f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0f6c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2d0f6cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2d0f70: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2d0f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d0f74: 0x4601b802  mul.s       $f0, $f23, $f1
    ctx->pc = 0x2d0f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x2d0f78: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d0f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0f7c: 0x0  nop
    ctx->pc = 0x2d0f7cu;
    // NOP
    // 0x2d0f80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D0F80u;
    {
        const bool branch_taken_0x2d0f80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0f80) {
            ctx->pc = 0x2D0F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0F80u;
            // 0x2d0f84: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0F88u;
            goto label_2d0f88;
        }
    }
    ctx->pc = 0x2D0F88u;
label_2d0f88:
    // 0x2d0f88: 0x461adf40  add.s       $f29, $f27, $f26
    ctx->pc = 0x2d0f88u;
    ctx->f[29] = FPU_ADD_S(ctx->f[27], ctx->f[26]);
    // 0x2d0f8c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2d0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0f90: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2d0f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2d0f94: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2d0f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0f98: 0xc7998278  lwc1        $f25, -0x7D88($gp)
    ctx->pc = 0x2d0f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2d0f9c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2d0f9cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d0fa0: 0x4618ef00  add.s       $f28, $f29, $f24
    ctx->pc = 0x2d0fa0u;
    ctx->f[28] = FPU_ADD_S(ctx->f[29], ctx->f[24]);
    // 0x2d0fa4: 0xc79f827c  lwc1        $f31, -0x7D84($gp)
    ctx->pc = 0x2d0fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2d0fa8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d0fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d0fac: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x2d0facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x2d0fb0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d0fb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0fb4: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2d0fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2d0fb8: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x2d0fb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x2d0fbc: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x2d0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x2d0fc0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d0fc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0fc4: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x2d0fc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0fc8: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x2d0fc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d0fcc: 0x27b60054  addiu       $s6, $sp, 0x54
    ctx->pc = 0x2d0fccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2d0fd0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2d0fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0fd4: 0x0  nop
    ctx->pc = 0x2d0fd4u;
    // NOP
label_2d0fd8:
    // 0x2d0fd8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2d0fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0fdc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2d0fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0fe0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2d0fe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2d0fe4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2d0fe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2d0fe8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2d0fe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2d0fec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d0fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d0ff0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2d0ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d0ff4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2d0ff4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d0ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ffc: 0x4614e300  add.s       $f12, $f28, $f20
    ctx->pc = 0x2d0ffcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[28], ctx->f[20]);
    // 0x2d1000: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d1000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d1004: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2d1004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2d1008: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2d1008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d100c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2d100cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1010: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2d1010u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1014: 0xc0b3fd0  jal         func_2CFF40
    ctx->pc = 0x2D1014u;
    SET_GPR_U32(ctx, 31, 0x2D101Cu);
    ctx->pc = 0x2D1018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1014u;
    // 0x2d1018: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CFF40u, 0x2D1014u, 0x2D101Cu)) {
        return;
    }
    ctx->pc = 0x2D101Cu;
label_2d101c:
    // 0x2d101c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D101Cu;
    {
        const bool branch_taken_0x2d101c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D101Cu;
        // 0x2d1020: 0xc7a50054  lwc1        $f5, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d101c) {
            ctx->pc = 0x2D10F8u;
            goto label_2d10f8;
        }
    }
    ctx->pc = 0x2D1024u;
    // 0x2d1024: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d1024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d1028: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x2d1028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d102c: 0x0  nop
    ctx->pc = 0x2d102cu;
    // NOP
    // 0x2d1030: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x2D1030u;
    {
        const bool branch_taken_0x2d1030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1030u;
        // 0x2d1034: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1030) {
            ctx->pc = 0x2D10F8u;
            goto label_2d10f8;
        }
    }
    ctx->pc = 0x2D1038u;
    // 0x2d1038: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2d1038u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x2d103c: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x2d103cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d1040: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x2d1040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d1044: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1048: 0xb2040007  sdl         $a0, 0x7($s0)
    ctx->pc = 0x2d1048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d104c: 0xb6040000  sdr         $a0, 0x0($s0)
    ctx->pc = 0x2d104cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1050: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x2d1050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x2d1054: 0x4601a832  c.eq.s      $f21, $f1
    ctx->pc = 0x2d1054u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1058: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2d1058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2d105c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d105cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1060: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x2D1060u;
    {
        const bool branch_taken_0x2d1060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1060u;
        // 0x2d1064: 0xe6650000  swc1        $f5, 0x0($s3) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1060) {
            ctx->pc = 0x2D1130u;
            goto label_2d1130;
        }
    }
    ctx->pc = 0x2D1068u;
    // 0x2d1068: 0x46182834  c.lt.s      $f5, $f24
    ctx->pc = 0x2d1068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d106c: 0x0  nop
    ctx->pc = 0x2d106cu;
    // NOP
    // 0x2d1070: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x2D1070u;
    {
        const bool branch_taken_0x2d1070 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1070u;
        // 0x2d1074: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1070) {
            ctx->pc = 0x2D1130u;
            goto label_2d1130;
        }
    }
    ctx->pc = 0x2D1078u;
    // 0x2d1078: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2d1078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d107c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2d107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d1080: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2d1080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d1084: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2d1084u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d1088: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2d1088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d108c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2d108cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2d1090: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2d1090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1094: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d1094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d1098: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2d1098u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2d109c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x2d109cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d10a0: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2d10a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x2d10a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d10a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d10a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d10a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d10ac: 0x0  nop
    ctx->pc = 0x2d10acu;
    // NOP
    // 0x2d10b0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2D10B0u;
    {
        const bool branch_taken_0x2d10b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10B0u;
        // 0x2d10b4: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10b0) {
            ctx->pc = 0x2D1120u;
            goto label_2d1120;
        }
    }
    ctx->pc = 0x2D10B8u;
    // 0x2d10b8: 0x46002883  div.s       $f2, $f5, $f0
    ctx->pc = 0x2d10b8u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[0]);
    // 0x2d10bc: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x2d10bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d10c0: 0x0  nop
    ctx->pc = 0x2d10c0u;
    // NOP
    // 0x2d10c4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2D10C4u;
    {
        const bool branch_taken_0x2d10c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d10c4) {
            ctx->pc = 0x2D10C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D10C4u;
            // 0x2d10c8: 0x4619b042  mul.s       $f1, $f22, $f25 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D10D8u;
            goto label_2d10d8;
        }
    }
    ctx->pc = 0x2D10CCu;
    // 0x2d10cc: 0x46191002  mul.s       $f0, $f2, $f25
    ctx->pc = 0x2d10ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[25]);
    // 0x2d10d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D10D0u;
    {
        const bool branch_taken_0x2d10d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10D0u;
        // 0x2d10d4: 0x4600ad01  sub.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10d0) {
            ctx->pc = 0x2D10E0u;
            goto label_2d10e0;
        }
    }
    ctx->pc = 0x2D10D8u;
label_2d10d8:
    // 0x2d10d8: 0x461fa802  mul.s       $f0, $f21, $f31
    ctx->pc = 0x2d10d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[31]);
    // 0x2d10dc: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2d10dcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2d10e0:
    // 0x2d10e0: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x2d10e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d10e4: 0x0  nop
    ctx->pc = 0x2d10e4u;
    // NOP
    // 0x2d10e8: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x2D10E8u;
    {
        const bool branch_taken_0x2d10e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d10e8) {
            ctx->pc = 0x2D10ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D10E8u;
            // 0x2d10ec: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1120u;
            goto label_2d1120;
        }
    }
    ctx->pc = 0x2D10F0u;
    // 0x2d10f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D10F0u;
    {
        const bool branch_taken_0x2d10f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10F0u;
        // 0x2d10f4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10f0) {
            ctx->pc = 0x2D1124u;
            goto label_2d1124;
        }
    }
    ctx->pc = 0x2D10F8u;
label_2d10f8:
    // 0x2d10f8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D10F8u;
    {
        const bool branch_taken_0x2d10f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10F8u;
        // 0x2d10fc: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10f8) {
            ctx->pc = 0x2D110Cu;
            goto label_2d110c;
        }
    }
    ctx->pc = 0x2D1100u;
    // 0x2d1100: 0x4615a000  add.s       $f0, $f20, $f21
    ctx->pc = 0x2d1100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2d1104: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1104u;
    {
        const bool branch_taken_0x2d1104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1104u;
        // 0x2d1108: 0x461e0502  mul.s       $f20, $f0, $f30 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[30]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1104) {
            ctx->pc = 0x2D1120u;
            goto label_2d1120;
        }
    }
    ctx->pc = 0x2D110Cu;
label_2d110c:
    // 0x2d110c: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x2d110cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1110: 0x0  nop
    ctx->pc = 0x2d1110u;
    // NOP
    // 0x2d1114: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D1114u;
    {
        const bool branch_taken_0x2d1114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1114) {
            ctx->pc = 0x2D1118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1114u;
            // 0x2d1118: 0x4617ad40  add.s       $f21, $f21, $f23 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D111Cu;
            goto label_2d111c;
        }
    }
    ctx->pc = 0x2D111Cu;
label_2d111c:
    // 0x2d111c: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x2d111cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_2d1120:
    // 0x2d1120: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d1120u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2d1124:
    // 0x2d1124: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x2d1124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d1128: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2D1128u;
    {
        const bool branch_taken_0x2d1128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1128u;
        // 0x2d112c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1128) {
            ctx->pc = 0x2D0FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0fd8;
        }
    }
    ctx->pc = 0x2D1130u;
label_2d1130:
    // 0x2d1130: 0x12a00027  beqz        $s5, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D1130u;
    {
        const bool branch_taken_0x2d1130 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1130u;
        // 0x2d1134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1130) {
            ctx->pc = 0x2D11D0u;
            goto label_2d11d0;
        }
    }
    ctx->pc = 0x2D1138u;
    // 0x2d1138: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d1138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d113c: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x2d113cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1140: 0x0  nop
    ctx->pc = 0x2d1140u;
    // NOP
    // 0x2d1144: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1144u;
    {
        const bool branch_taken_0x2d1144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1144) {
            ctx->pc = 0x2D1148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1144u;
            // 0x2d1148: 0x461ad801  sub.s       $f0, $f27, $f26 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[26]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D11A8u;
            goto label_2d11a8;
        }
    }
    ctx->pc = 0x2D114Cu;
    // 0x2d114c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2d114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1150: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x2d1150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d1154: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2d1154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1158: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2d1158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d115c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d115cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d1160: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2d1160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1164: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2d1164u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2d1168: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2d1168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d116c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d116cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d1170: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d1170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d1174: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2d1174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2d1178: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2d1178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d117c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2d117cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2d1180: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d1180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d1184: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x2d1184u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2d1188: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2d1188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d118c: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x2d118cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2d1190: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2d1190u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2d1194: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2d1194u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2d1198: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2d1198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d119c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2d119cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2d11a0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2d11a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2d11a4: 0x461ad801  sub.s       $f0, $f27, $f26
    ctx->pc = 0x2d11a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[26]);
label_2d11a8:
    // 0x2d11a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d11a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d11ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d11acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d11b0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2d11b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d11b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d11b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d11b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d11bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d11bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d11c0: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x2d11c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2d11c4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2d11c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d11c8: 0x461d0001  sub.s       $f0, $f0, $f29
    ctx->pc = 0x2d11c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[29]);
    // 0x2d11cc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2d11ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2d11d0:
    // 0x2d11d0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2d11d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d11d4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2d11d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d11d8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2d11d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d11dc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2d11dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d11e0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2d11e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d11e4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2d11e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d11e8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2d11e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d11ec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2d11ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d11f0: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2d11f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d11f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d11f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d11f8: 0xc7bf0158  lwc1        $f31, 0x158($sp)
    ctx->pc = 0x2d11f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2d11fc: 0xc7be0150  lwc1        $f30, 0x150($sp)
    ctx->pc = 0x2d11fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2d1200: 0xc7bd0148  lwc1        $f29, 0x148($sp)
    ctx->pc = 0x2d1200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2d1204: 0xc7bc0140  lwc1        $f28, 0x140($sp)
    ctx->pc = 0x2d1204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2d1208: 0xc7bb0138  lwc1        $f27, 0x138($sp)
    ctx->pc = 0x2d1208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2d120c: 0xc7ba0130  lwc1        $f26, 0x130($sp)
    ctx->pc = 0x2d120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2d1210: 0xc7b90128  lwc1        $f25, 0x128($sp)
    ctx->pc = 0x2d1210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2d1214: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x2d1214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d1218: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x2d1218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d121c: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x2d121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d1220: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2d1220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d1224: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2d1224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d1228: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1228u;
        // 0x2d122c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1230u;
}
