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

// Function: sub_001E2BB8
// Address: 0x1e2bb8 - 0x1e2d20
void sub_001E2BB8_0x1e2bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2BB8_0x1e2bb8");
#endif

    switch (ctx->pc) {
        case 0x1e2cccu: goto label_1e2ccc;
        case 0x1e2cdcu: goto label_1e2cdc;
        default: break;
    }

    ctx->pc = 0x1e2bb8u;

    // 0x1e2bb8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e2bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1e2bbc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1e2bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1e2bc0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1e2bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1e2bc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e2bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2bc8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e2bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1e2bcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2bd0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1e2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2bd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2bd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e2bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e2bdc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2be0: 0xc605000c  lwc1        $f5, 0xC($s0)
    ctx->pc = 0x1e2be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e2be4: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x1e2be4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1e2be8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1e2be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2bec: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x1e2becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2bf0: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x1e2bf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1e2bf4: 0x460001c2  mul.s       $f7, $f0, $f0
    ctx->pc = 0x1e2bf4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e2bf8: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x1e2bf8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e2bfc: 0x46001ac2  mul.s       $f11, $f3, $f0
    ctx->pc = 0x1e2bfcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e2c00: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1e2c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1e2c04: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x1e2c04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1e2c08: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x1e2c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1e2c0c: 0x46011a82  mul.s       $f10, $f3, $f1
    ctx->pc = 0x1e2c0cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e2c10: 0xe7a70088  swc1        $f7, 0x88($sp)
    ctx->pc = 0x1e2c10u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1e2c14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e2c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e2c18: 0xe7ab00a8  swc1        $f11, 0xA8($sp)
    ctx->pc = 0x1e2c18u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e2c1c: 0x46023200  add.s       $f8, $f6, $f2
    ctx->pc = 0x1e2c1cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x1e2c20: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1e2c20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e2c24: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1e2c24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1e2c28: 0xe7aa00a0  swc1        $f10, 0xA0($sp)
    ctx->pc = 0x1e2c28u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e2c2c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1e2c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1e2c30: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1e2c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1e2c34: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x1e2c34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x1e2c38: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1e2c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1e2c3c: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x1e2c3cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x1e2c40: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x1e2c40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1e2c44: 0x46030240  add.s       $f9, $f0, $f3
    ctx->pc = 0x1e2c44u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e2c48: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x1e2c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1e2c4c: 0x460b0941  sub.s       $f5, $f1, $f11
    ctx->pc = 0x1e2c4cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x1e2c50: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1e2c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1e2c54: 0x460a21c1  sub.s       $f7, $f4, $f10
    ctx->pc = 0x1e2c54u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x1e2c58: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1e2c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1e2c5c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1e2c5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x1e2c60: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x1e2c60u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x1e2c64: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x1e2c64u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x1e2c68: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x1e2c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x1e2c6c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e2c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e2c70: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x1e2c70u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x1e2c74: 0x46086201  sub.s       $f8, $f12, $f8
    ctx->pc = 0x1e2c74u;
    ctx->f[8] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x1e2c78: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x1e2c78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x1e2c7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e2c7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1e2c80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e2c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1e2c84: 0xe7a80068  swc1        $f8, 0x68($sp)
    ctx->pc = 0x1e2c84u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e2c88: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x1e2c88u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x1e2c8c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1e2c8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e2c90: 0x46066301  sub.s       $f12, $f12, $f6
    ctx->pc = 0x1e2c90u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x1e2c94: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1e2c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e2c98: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1e2c98u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x1e2c9c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1e2c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e2ca0: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x1e2ca0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x1e2ca4: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x1e2ca4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e2ca8: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x1e2ca8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x1e2cac: 0xe7ac0054  swc1        $f12, 0x54($sp)
    ctx->pc = 0x1e2cacu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e2cb0: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x1e2cb0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e2cb4: 0xe7a90060  swc1        $f9, 0x60($sp)
    ctx->pc = 0x1e2cb4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e2cb8: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x1e2cb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e2cbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e2cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2cc0: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x1e2cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1e2cc4: 0xc092ea4  jal         func_24BA90
    ctx->pc = 0x1E2CC4u;
    SET_GPR_U32(ctx, 31, 0x1E2CCCu);
    ctx->pc = 0x1E2CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2CC4u;
    // 0x1e2cc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BA90u, 0x1E2CC4u, 0x1E2CCCu)) {
        return;
    }
    ctx->pc = 0x1E2CCCu;
label_1e2ccc:
    // 0x1e2ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2cd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e2cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2cd4: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x1E2CD4u;
    SET_GPR_U32(ctx, 31, 0x1E2CDCu);
    ctx->pc = 0x1E2CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2CD4u;
    // 0x1e2cd8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x1E2CD4u, 0x1E2CDCu)) {
        return;
    }
    ctx->pc = 0x1E2CDCu;
label_1e2cdc:
    // 0x1e2cdc: 0x6a02001f  ldl         $v0, 0x1F($s0)
    ctx->pc = 0x1e2cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1e2ce0: 0x6e020018  ldr         $v0, 0x18($s0)
    ctx->pc = 0x1e2ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1e2ce4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e2ce8: 0xb2220037  sdl         $v0, 0x37($s1)
    ctx->pc = 0x1e2ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e2cec: 0xb6220030  sdr         $v0, 0x30($s1)
    ctx->pc = 0x1e2cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e2cf0: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x1e2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x1e2cf4: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x1e2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x1e2cf8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1e2cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e2cfc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e2d00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1e2d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1e2d04: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1e2d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e2d08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e2d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e2d0c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1e2d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1e2d10: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1e2d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e2d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D14u;
        // 0x1e2d18: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2D1Cu;
    // 0x1e2d1c: 0x0  nop
    ctx->pc = 0x1e2d1cu;
    // NOP
    ctx->pc = 0x1e2d20u;
}
