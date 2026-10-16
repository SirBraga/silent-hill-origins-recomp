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

// Function: sub_0013ECD8
// Address: 0x13ecd8 - 0x13eea8
void sub_0013ECD8_0x13ecd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013ECD8_0x13ecd8");
#endif

    switch (ctx->pc) {
        case 0x13ecfcu: goto label_13ecfc;
        case 0x13edb0u: goto label_13edb0;
        case 0x13ee8cu: goto label_13ee8c;
        default: break;
    }

    ctx->pc = 0x13ecd8u;

    // 0x13ecd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13ecd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13ecdc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13ecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13ece0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13ece0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ece4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13ece8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ece8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecec: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x13ececu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13ecf0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x13ecf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13ecf4: 0xc07794c  jal         func_1DE530
    ctx->pc = 0x13ECF4u;
    SET_GPR_U32(ctx, 31, 0x13ECFCu);
    ctx->pc = 0x13ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ECF4u;
    // 0x13ecf8: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE530u, 0x13ECF4u, 0x13ECFCu)) {
        return;
    }
    ctx->pc = 0x13ECFCu;
label_13ecfc:
    // 0x13ecfc: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x13ecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ed00: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x13ed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ed04: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x13ed04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ed08: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x13ed08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x13ed0c: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x13ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ed10: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x13ed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ed14: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x13ed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ed18: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x13ed18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x13ed1c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13ed1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13ed20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13ed20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13ed24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13ed24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13ed28: 0x0  nop
    ctx->pc = 0x13ed28u;
    // NOP
    // 0x13ed2c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x13ed2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x13ed30: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x13ed30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x13ed34: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x13ed34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x13ed38: 0xe6030384  swc1        $f3, 0x384($s0)
    ctx->pc = 0x13ed38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 900), bits); }
    // 0x13ed3c: 0xe6020388  swc1        $f2, 0x388($s0)
    ctx->pc = 0x13ed3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x13ed40: 0xe601038c  swc1        $f1, 0x38C($s0)
    ctx->pc = 0x13ed40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
    // 0x13ed44: 0x6a02038b  ldl         $v0, 0x38B($s0)
    ctx->pc = 0x13ed44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 907); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13ed48: 0x6e020384  ldr         $v0, 0x384($s0)
    ctx->pc = 0x13ed48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13ed4c: 0x8e03038c  lw          $v1, 0x38C($s0)
    ctx->pc = 0x13ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x13ed50: 0xb2020397  sdl         $v0, 0x397($s0)
    ctx->pc = 0x13ed50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ed54: 0xb6020390  sdr         $v0, 0x390($s0)
    ctx->pc = 0x13ed54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ed58: 0xae030398  sw          $v1, 0x398($s0)
    ctx->pc = 0x13ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 3));
    // 0x13ed5c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x13ed5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x13ed60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13ed60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13ed64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ed64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ed68: 0xc6010394  lwc1        $f1, 0x394($s0)
    ctx->pc = 0x13ed68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ed6c: 0xc6030388  lwc1        $f3, 0x388($s0)
    ctx->pc = 0x13ed6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ed70: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x13ed70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13ed74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13ed74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ed78: 0xe6010394  swc1        $f1, 0x394($s0)
    ctx->pc = 0x13ed78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 916), bits); }
    // 0x13ed7c: 0xc6020390  lwc1        $f2, 0x390($s0)
    ctx->pc = 0x13ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ed80: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13ed80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x13ed84: 0xc6040384  lwc1        $f4, 0x384($s0)
    ctx->pc = 0x13ed84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ed88: 0xc6000398  lwc1        $f0, 0x398($s0)
    ctx->pc = 0x13ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ed8c: 0xc603038c  lwc1        $f3, 0x38C($s0)
    ctx->pc = 0x13ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ed90: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x13ed90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x13ed94: 0xe60103a0  swc1        $f1, 0x3A0($s0)
    ctx->pc = 0x13ed94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
    // 0x13ed98: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x13ed98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x13ed9c: 0xe602039c  swc1        $f2, 0x39C($s0)
    ctx->pc = 0x13ed9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 924), bits); }
    // 0x13eda0: 0xe60003a4  swc1        $f0, 0x3A4($s0)
    ctx->pc = 0x13eda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 932), bits); }
    // 0x13eda4: 0x2604039c  addiu       $a0, $s0, 0x39C
    ctx->pc = 0x13eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 924));
    // 0x13eda8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x13EDA8u;
    SET_GPR_U32(ctx, 31, 0x13EDB0u);
    ctx->pc = 0x13EDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDA8u;
    // 0x13edac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x13EDA8u, 0x13EDB0u)) {
        return;
    }
    ctx->pc = 0x13EDB0u;
label_13edb0:
    // 0x13edb0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x13edb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13edb4: 0x26030314  addiu       $v1, $s0, 0x314
    ctx->pc = 0x13edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
    // 0x13edb8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x13edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13edbc: 0x26020340  addiu       $v0, $s0, 0x340
    ctx->pc = 0x13edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x13edc0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x13edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13edc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13edc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13edc8: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x13edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13edcc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x13edccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13edd0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x13edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13edd4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x13edd4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x13edd8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x13edd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x13eddc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x13eddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x13ede0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13ede0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13ede4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x13ede4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x13ede8: 0xae030310  sw          $v1, 0x310($s0)
    ctx->pc = 0x13ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 3));
    // 0x13edec: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x13edecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x13edf0: 0xae020330  sw          $v0, 0x330($s0)
    ctx->pc = 0x13edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
    // 0x13edf4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x13edf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x13edf8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x13edf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x13edfc: 0xe6020314  swc1        $f2, 0x314($s0)
    ctx->pc = 0x13edfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 788), bits); }
    // 0x13ee00: 0xe6010318  swc1        $f1, 0x318($s0)
    ctx->pc = 0x13ee00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 792), bits); }
    // 0x13ee04: 0xe600031c  swc1        $f0, 0x31C($s0)
    ctx->pc = 0x13ee04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 796), bits); }
    // 0x13ee08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13ee08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13ee0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13ee0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ee10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13ee10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ee14: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x13ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x13ee18: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x13ee18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x13ee1c: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x13ee1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x13ee20: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x13ee20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x13ee24: 0xe6010340  swc1        $f1, 0x340($s0)
    ctx->pc = 0x13ee24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 832), bits); }
    // 0x13ee28: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x13ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x13ee2c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x13ee2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13ee30: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x13ee30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x13ee34: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x13ee34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x13ee38: 0x8e030330  lw          $v1, 0x330($s0)
    ctx->pc = 0x13ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x13ee3c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x13ee3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x13ee40: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13ee40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x13ee44: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13ee44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13ee48: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x13ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x13ee4c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x13ee4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x13ee50: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x13ee50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x13ee54: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x13ee54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x13ee58: 0x8e030330  lw          $v1, 0x330($s0)
    ctx->pc = 0x13ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x13ee5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x13ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13ee60: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13ee64: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x13ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x13ee68: 0x8e040330  lw          $a0, 0x330($s0)
    ctx->pc = 0x13ee68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x13ee6c: 0x6a06038b  ldl         $a2, 0x38B($s0)
    ctx->pc = 0x13ee6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 907); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13ee70: 0x6e060384  ldr         $a2, 0x384($s0)
    ctx->pc = 0x13ee70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13ee74: 0x8e02038c  lw          $v0, 0x38C($s0)
    ctx->pc = 0x13ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x13ee78: 0xb0860037  sdl         $a2, 0x37($a0)
    ctx->pc = 0x13ee78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ee7c: 0xb4860030  sdr         $a2, 0x30($a0)
    ctx->pc = 0x13ee7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ee80: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x13ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x13ee84: 0xc092d94  jal         func_24B650
    ctx->pc = 0x13EE84u;
    SET_GPR_U32(ctx, 31, 0x13EE8Cu);
    ctx->pc = 0x13EE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE84u;
    // 0x13ee88: 0x8e040330  lw          $a0, 0x330($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x13EE84u, 0x13EE8Cu)) {
        return;
    }
    ctx->pc = 0x13EE8Cu;
label_13ee8c:
    // 0x13ee8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13ee90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13ee90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ee94: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x13ee94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x13ee98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13ee98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ee9c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13eea0: 0x3e00008  jr          $ra
    ctx->pc = 0x13EEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEA0u;
        // 0x13eea4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EEA8u;
}
