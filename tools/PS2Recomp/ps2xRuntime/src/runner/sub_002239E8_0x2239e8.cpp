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

// Function: sub_002239E8
// Address: 0x2239e8 - 0x2242d0
void sub_002239E8_0x2239e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002239E8_0x2239e8");
#endif

    switch (ctx->pc) {
        case 0x223bc8u: goto label_223bc8;
        default: break;
    }

    ctx->pc = 0x2239e8u;

    // 0x2239e8: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x2239e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2239ec: 0x24860124  addiu       $a2, $a0, 0x124
    ctx->pc = 0x2239ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    // 0x2239f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2239f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2239f4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2239f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2239f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2239f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2239fc: 0x24850094  addiu       $a1, $a0, 0x94
    ctx->pc = 0x2239fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x223a00: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x223a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x223a04: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x223a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223a08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x223a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x223a0c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x223a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x223a10: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x223a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223a14: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x223a14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x223a18: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x223a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x223a1c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x223a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223a20: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x223a20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x223a24: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x223a24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x223a28: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x223a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223a2c: 0xc484007c  lwc1        $f4, 0x7C($a0)
    ctx->pc = 0x223a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223a30: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x223a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x223a34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x223a34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x223a38: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x223a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x223a3c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x223a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223a40: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x223a40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x223a44: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x223a44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x223a48: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x223a48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x223a4c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x223a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223a50: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x223a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x223a54: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x223a54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x223a58: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x223a58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x223a5c: 0xc4490050  lwc1        $f9, 0x50($v0)
    ctx->pc = 0x223a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x223a60: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x223a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223a64: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x223a64u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x223a68: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x223a68u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x223a6c: 0xc4680004  lwc1        $f8, 0x4($v1)
    ctx->pc = 0x223a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x223a70: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x223a70u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x223a74: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x223a74u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x223a78: 0xc4670008  lwc1        $f7, 0x8($v1)
    ctx->pc = 0x223a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x223a7c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x223a7cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x223a80: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x223a80u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x223a84: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x223a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223a88: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x223a88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x223a8c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x223a8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x223a90: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x223a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223a94: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x223a94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x223a98: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x223a98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x223a9c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x223a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223aa0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x223aa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x223aa4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x223aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x223aa8: 0xc4660010  lwc1        $f6, 0x10($v1)
    ctx->pc = 0x223aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x223aac: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x223aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223ab0: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x223ab0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x223ab4: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x223ab4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x223ab8: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x223ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223abc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x223abcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x223ac0: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x223ac0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x223ac4: 0xc4650018  lwc1        $f5, 0x18($v1)
    ctx->pc = 0x223ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x223ac8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x223ac8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x223acc: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x223accu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x223ad0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x223ad0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x223ad4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x223ad4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x223ad8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x223ad8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x223adc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x223adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x223ae0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x223ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x223ae4: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x223ae4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x223ae8: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x223ae8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x223aec: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x223aecu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x223af0: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x223af0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x223af4: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x223af4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x223af8: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x223af8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x223afc: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x223afcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x223b00: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x223b00u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x223b04: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x223b04u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x223b08: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x223b08u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x223b0c: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x223b0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x223b10: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x223b10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x223b14: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x223b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x223b18: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x223b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x223b1c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x223b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223b20: 0xb082012b  sdl         $v0, 0x12B($a0)
    ctx->pc = 0x223b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223b24: 0xb4820124  sdr         $v0, 0x124($a0)
    ctx->pc = 0x223b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223b28: 0xac87012c  sw          $a3, 0x12C($a0)
    ctx->pc = 0x223b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 7));
    // 0x223b2c: 0x460918c1  sub.s       $f3, $f3, $f9
    ctx->pc = 0x223b2cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x223b30: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x223b30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x223b34: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x223b34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x223b38: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x223b38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x223b3c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x223b3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x223b40: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x223b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x223b44: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x223b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x223b48: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x223b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x223b4c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x223b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223b50: 0xb0c20013  sdl         $v0, 0x13($a2)
    ctx->pc = 0x223b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223b54: 0xb4c2000c  sdr         $v0, 0xC($a2)
    ctx->pc = 0x223b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223b58: 0xacc70014  sw          $a3, 0x14($a2)
    ctx->pc = 0x223b58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 7));
    // 0x223b5c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x223b5cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x223b60: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x223b60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x223b64: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x223b64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x223b68: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x223b68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x223b6c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x223b6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x223b70: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x223b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x223b74: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x223b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x223b78: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x223b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x223b7c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x223b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223b80: 0xb0c2001f  sdl         $v0, 0x1F($a2)
    ctx->pc = 0x223b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223b84: 0xb4c20018  sdr         $v0, 0x18($a2)
    ctx->pc = 0x223b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223b88: 0xacc70020  sw          $a3, 0x20($a2)
    ctx->pc = 0x223b88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 7));
    // 0x223b8c: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x223b8cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x223b90: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x223b90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x223b94: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x223b94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x223b98: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x223b98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x223b9c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x223b9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x223ba0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x223ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x223ba4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x223ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x223ba8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x223ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x223bac: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x223bacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223bb0: 0xb0c2002b  sdl         $v0, 0x2B($a2)
    ctx->pc = 0x223bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223bb4: 0xb4c20024  sdr         $v0, 0x24($a2)
    ctx->pc = 0x223bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223bb8: 0xacc7002c  sw          $a3, 0x2C($a2)
    ctx->pc = 0x223bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 7));
    // 0x223bbc: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x223bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x223bc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223bc4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x223bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_223bc8:
    // 0x223bc8: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x223bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x223bcc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x223bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223bd0: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x223bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223bd4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x223bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223bd8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x223bd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x223bdc: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x223bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223be0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x223be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x223be4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x223be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223be8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x223be8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x223bec: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x223becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x223bf0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x223bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223bf4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x223bf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x223bf8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x223bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x223bfc: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x223bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c00: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x223c00u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x223c04: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x223c04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x223c08: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x223c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c0c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x223c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223c10: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x223c10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x223c14: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x223c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x223c18: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x223c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223c1c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x223c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c20: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x223c20u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x223c24: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x223c24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x223c28: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x223c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c2c: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x223c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223c30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x223c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x223c34: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x223c34u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x223c38: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x223c38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x223c3c: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x223c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223c40: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x223c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x223c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x223c48: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x223c48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x223c4c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x223c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x223c50: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x223c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c54: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x223c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223c58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x223c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x223c5c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x223c5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x223c60: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x223c60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x223c64: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x223c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x223c68: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x223c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223c6c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x223c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c70: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x223c70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x223c74: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x223c74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x223c78: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x223c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c7c: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x223c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223c80: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x223c80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x223c84: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x223c84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x223c88: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x223c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223c8c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x223c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c90: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x223c90u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x223c94: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x223c94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x223c98: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x223c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c9c: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x223c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223ca0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x223ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x223ca4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x223ca4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x223ca8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x223ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x223cac: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x223cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223cb0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x223cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223cb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x223cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x223cb8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x223cb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x223cbc: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x223cbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x223cc0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x223cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223cc4: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x223cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223cc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x223cc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x223ccc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x223cccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x223cd0: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x223cd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x223cd4: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x223cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x223cd8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x223cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x223cdc: 0x4e1ffba  bgez        $a3, . + 4 + (-0x46 << 2)
    ctx->pc = 0x223CDCu;
    {
        const bool branch_taken_0x223cdc = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x223CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CDCu;
        // 0x223ce0: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cdc) {
            ctx->pc = 0x223BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223bc8;
        }
    }
    ctx->pc = 0x223CE4u;
    // 0x223ce4: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x223ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x223ce8: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x223ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x223cec: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x223cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x223cf0: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x223cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223cf4: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x223cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x223cf8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x223cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x223cfc: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x223cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223d00: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x223d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223d04: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x223d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223d08: 0xc4c10034  lwc1        $f1, 0x34($a2)
    ctx->pc = 0x223d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223d0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x223d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x223d10: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x223d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223d14: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x223d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x223d18: 0xc4c20038  lwc1        $f2, 0x38($a2)
    ctx->pc = 0x223d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223d1c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x223d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x223d20: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x223d20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x223d24: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x223d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x223d28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x223d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x223d2c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x223d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x223d30: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x223d30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x223d34: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x223d34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x223d38: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x223d38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x223d3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x223d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x223d40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x223d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x223d44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223d48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x223d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x223d4c: 0xa0a40010  sb          $a0, 0x10($a1)
    ctx->pc = 0x223d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x223d50: 0xa0a20011  sb          $v0, 0x11($a1)
    ctx->pc = 0x223d50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x223d54: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x223d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x223d58: 0xa0a30012  sb          $v1, 0x12($a1)
    ctx->pc = 0x223d58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x223d5c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x223d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223d60: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x223d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223d64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x223d64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x223d68: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x223d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223d6c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x223d6cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x223d70: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x223d70u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x223d74: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x223d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x223d78: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x223d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x223d7c: 0xe4a2001c  swc1        $f2, 0x1C($a1)
    ctx->pc = 0x223d7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x223d80: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x223d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223d84: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x223d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223d88: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x223d88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x223d8c: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x223d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x223d90: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x223d90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x223d94: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x223d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x223d98: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x223d98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x223d9c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x223d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x223da0: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x223da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x223da4: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x223da4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x223da8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x223da8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x223dac: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x223dacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x223db0: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x223db0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x223db4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x223db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x223db8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223dbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x223dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x223dc0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x223dc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x223dc4: 0xa0a40024  sb          $a0, 0x24($a1)
    ctx->pc = 0x223dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 4));
    // 0x223dc8: 0xa0a20025  sb          $v0, 0x25($a1)
    ctx->pc = 0x223dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x223dcc: 0xa0a30026  sb          $v1, 0x26($a1)
    ctx->pc = 0x223dccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x223dd0: 0xe4a30020  swc1        $f3, 0x20($a1)
    ctx->pc = 0x223dd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x223dd4: 0xc4c7000c  lwc1        $f7, 0xC($a2)
    ctx->pc = 0x223dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x223dd8: 0xc4c2003c  lwc1        $f2, 0x3C($a2)
    ctx->pc = 0x223dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223ddc: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x223ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x223de0: 0xc4c80040  lwc1        $f8, 0x40($a2)
    ctx->pc = 0x223de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x223de4: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x223de4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x223de8: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x223de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x223dec: 0xc4c10044  lwc1        $f1, 0x44($a2)
    ctx->pc = 0x223decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223df0: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x223df0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x223df4: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x223df4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x223df8: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x223df8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x223dfc: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x223dfcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x223e00: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x223e00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x223e04: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x223e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223e08: 0xc4c4004c  lwc1        $f4, 0x4C($a2)
    ctx->pc = 0x223e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223e0c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x223e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x223e10: 0xc4c30050  lwc1        $f3, 0x50($a2)
    ctx->pc = 0x223e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223e14: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x223e14u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x223e18: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x223e18u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x223e1c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x223e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x223e20: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x223e20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x223e24: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x223e24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x223e28: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x223e28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x223e2c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x223e2cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x223e30: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x223e30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x223e34: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x223e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x223e38: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x223e38u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x223e3c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x223e3cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x223e40: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x223e40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x223e44: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x223e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x223e48: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x223e48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x223e4c: 0xe4a20030  swc1        $f2, 0x30($a1)
    ctx->pc = 0x223e4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x223e50: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x223e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x223e54: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x223e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x223e58: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x223e58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x223e5c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x223e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x223e60: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x223e60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x223e64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x223e64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x223e68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x223e68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x223e6c: 0x46010044  c1          0x10044
    ctx->pc = 0x223e6cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x223e70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x223e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223e74: 0x0  nop
    ctx->pc = 0x223e74u;
    // NOP
    // 0x223e78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x223e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223e7c: 0x0  nop
    ctx->pc = 0x223e7cu;
    // NOP
    // 0x223e80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x223E80u;
    {
        const bool branch_taken_0x223e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E80u;
        // 0x223e84: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e80) {
            ctx->pc = 0x223EA0u;
            goto label_223ea0;
        }
    }
    ctx->pc = 0x223E88u;
    // 0x223e88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223e8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223e90: 0x0  nop
    ctx->pc = 0x223e90u;
    // NOP
    // 0x223e94: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x223e94u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x223e98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x223E98u;
    {
        const bool branch_taken_0x223e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E98u;
        // 0x223e9c: 0xc4a00028  lwc1        $f0, 0x28($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e98) {
            ctx->pc = 0x223EA8u;
            goto label_223ea8;
        }
    }
    ctx->pc = 0x223EA0u;
label_223ea0:
    // 0x223ea0: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x223ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223ea4: 0x0  nop
    ctx->pc = 0x223ea4u;
    // NOP
label_223ea8:
    // 0x223ea8: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x223ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223eac: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x223eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223eb0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x223eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x223eb4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x223eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x223eb8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x223eb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x223ebc: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x223ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x223ec0: 0xe4a1002c  swc1        $f1, 0x2C($a1)
    ctx->pc = 0x223ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x223ec4: 0xe4a20030  swc1        $f2, 0x30($a1)
    ctx->pc = 0x223ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x223ec8: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x223ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223ecc: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x223eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223ed0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x223ed0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x223ed4: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x223ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x223ed8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x223ed8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x223edc: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x223edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x223ee0: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x223ee0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x223ee4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x223ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x223ee8: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x223ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x223eec: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x223eecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x223ef0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x223ef0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x223ef4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x223ef4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x223ef8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x223ef8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x223efc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x223efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x223f00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223f04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x223f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x223f08: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x223f08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x223f0c: 0xa0a40038  sb          $a0, 0x38($a1)
    ctx->pc = 0x223f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x223f10: 0xa0a20039  sb          $v0, 0x39($a1)
    ctx->pc = 0x223f10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x223f14: 0xa0a3003a  sb          $v1, 0x3A($a1)
    ctx->pc = 0x223f14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x223f18: 0xe4a30034  swc1        $f3, 0x34($a1)
    ctx->pc = 0x223f18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x223f1c: 0xc4c20030  lwc1        $f2, 0x30($a2)
    ctx->pc = 0x223f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223f20: 0xc4c0003c  lwc1        $f0, 0x3C($a2)
    ctx->pc = 0x223f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223f24: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x223f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223f28: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x223f28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x223f2c: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x223f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223f30: 0xc4c30038  lwc1        $f3, 0x38($a2)
    ctx->pc = 0x223f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223f34: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x223f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223f38: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x223f38u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x223f3c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x223f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x223f40: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x223f40u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x223f44: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x223f44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x223f48: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x223f48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x223f4c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x223f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223f50: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x223f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223f54: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x223f54u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x223f58: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x223f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x223f5c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x223f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x223f60: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x223f60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x223f64: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x223f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x223f68: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x223f68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x223f6c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x223f6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x223f70: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x223f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x223f74: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x223f74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x223f78: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x223f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x223f7c: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x223f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x223f80: 0xe4a20044  swc1        $f2, 0x44($a1)
    ctx->pc = 0x223f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x223f84: 0xe4a1003c  swc1        $f1, 0x3C($a1)
    ctx->pc = 0x223f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x223f88: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x223f88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x223f8c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x223f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x223f90: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x223f90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x223f94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x223f94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x223f98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x223f98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x223f9c: 0x46010044  c1          0x10044
    ctx->pc = 0x223f9cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x223fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x223fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223fa4: 0x0  nop
    ctx->pc = 0x223fa4u;
    // NOP
    // 0x223fa8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x223fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223fac: 0x0  nop
    ctx->pc = 0x223facu;
    // NOP
    // 0x223fb0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x223FB0u;
    {
        const bool branch_taken_0x223fb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FB0u;
        // 0x223fb4: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fb0) {
            ctx->pc = 0x223FD0u;
            goto label_223fd0;
        }
    }
    ctx->pc = 0x223FB8u;
    // 0x223fb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223fbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223fc0: 0x0  nop
    ctx->pc = 0x223fc0u;
    // NOP
    // 0x223fc4: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x223fc4u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x223fc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x223FC8u;
    {
        const bool branch_taken_0x223fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FC8u;
        // 0x223fcc: 0xc4a0003c  lwc1        $f0, 0x3C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fc8) {
            ctx->pc = 0x223FD8u;
            goto label_223fd8;
        }
    }
    ctx->pc = 0x223FD0u;
label_223fd0:
    // 0x223fd0: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x223fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223fd4: 0x0  nop
    ctx->pc = 0x223fd4u;
    // NOP
label_223fd8:
    // 0x223fd8: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x223fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223fdc: 0xc4a20044  lwc1        $f2, 0x44($a1)
    ctx->pc = 0x223fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223fe0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x223fe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x223fe4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x223fe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x223fe8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x223fe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x223fec: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x223fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x223ff0: 0xe4a10040  swc1        $f1, 0x40($a1)
    ctx->pc = 0x223ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x223ff4: 0xe4a20044  swc1        $f2, 0x44($a1)
    ctx->pc = 0x223ff4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x223ff8: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x223ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x223ffc: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x223ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224000: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x224000u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x224004: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x224004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224008: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x224008u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x22400c: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x22400cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x224010: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x224010u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x224014: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x224014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x224018: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x224018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x22401c: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x22401cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x224020: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x224020u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x224024: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x224024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x224028: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x224028u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x22402c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22402cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x224030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224034: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x224034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x224038: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x224038u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x22403c: 0xa0a4004c  sb          $a0, 0x4C($a1)
    ctx->pc = 0x22403cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x224040: 0xa0a2004d  sb          $v0, 0x4D($a1)
    ctx->pc = 0x224040u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x224044: 0xa0a3004e  sb          $v1, 0x4E($a1)
    ctx->pc = 0x224044u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x224048: 0xe4a30048  swc1        $f3, 0x48($a1)
    ctx->pc = 0x224048u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x22404c: 0xc4c70024  lwc1        $f7, 0x24($a2)
    ctx->pc = 0x22404cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x224050: 0xc4c20054  lwc1        $f2, 0x54($a2)
    ctx->pc = 0x224050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224054: 0xc4c60028  lwc1        $f6, 0x28($a2)
    ctx->pc = 0x224054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x224058: 0xc4c80058  lwc1        $f8, 0x58($a2)
    ctx->pc = 0x224058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x22405c: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x22405cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x224060: 0xc4c5002c  lwc1        $f5, 0x2C($a2)
    ctx->pc = 0x224060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224064: 0xc4c1005c  lwc1        $f1, 0x5C($a2)
    ctx->pc = 0x224064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224068: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x224068u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x22406c: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x22406cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x224070: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x224070u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x224074: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x224074u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x224078: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x224078u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22407c: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x22407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224080: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x224080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224084: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x224084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x224088: 0xc4c30038  lwc1        $f3, 0x38($a2)
    ctx->pc = 0x224088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22408c: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x22408cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x224090: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x224090u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x224094: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x224094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x224098: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x224098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x22409c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x22409cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2240a0: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x2240a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2240a4: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2240a4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2240a8: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x2240a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2240ac: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2240acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2240b0: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x2240b0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x2240b4: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2240b4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2240b8: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x2240b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x2240bc: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x2240bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x2240c0: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2240c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2240c4: 0xe4a20058  swc1        $f2, 0x58($a1)
    ctx->pc = 0x2240c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x2240c8: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x2240c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x2240cc: 0xe4a10050  swc1        $f1, 0x50($a1)
    ctx->pc = 0x2240ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x2240d0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2240d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2240d4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2240d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2240d8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2240d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2240dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2240dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2240e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2240e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2240e4: 0x46010044  c1          0x10044
    ctx->pc = 0x2240e4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x2240e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2240e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2240ec: 0x0  nop
    ctx->pc = 0x2240ecu;
    // NOP
    // 0x2240f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2240f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2240f4: 0x0  nop
    ctx->pc = 0x2240f4u;
    // NOP
    // 0x2240f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2240F8u;
    {
        const bool branch_taken_0x2240f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2240FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240F8u;
        // 0x2240fc: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240f8) {
            ctx->pc = 0x224118u;
            goto label_224118;
        }
    }
    ctx->pc = 0x224100u;
    // 0x224100: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x224104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224108: 0x0  nop
    ctx->pc = 0x224108u;
    // NOP
    // 0x22410c: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x22410cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x224110: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x224110u;
    {
        const bool branch_taken_0x224110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224110u;
        // 0x224114: 0xc4a00050  lwc1        $f0, 0x50($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224110) {
            ctx->pc = 0x224120u;
            goto label_224120;
        }
    }
    ctx->pc = 0x224118u;
label_224118:
    // 0x224118: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x224118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22411c: 0x0  nop
    ctx->pc = 0x22411cu;
    // NOP
label_224120:
    // 0x224120: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x224120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224124: 0xc4a20058  lwc1        $f2, 0x58($a1)
    ctx->pc = 0x224124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224128: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x224128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x22412c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x22412cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x224130: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x224130u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x224134: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x224134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x224138: 0xe4a10054  swc1        $f1, 0x54($a1)
    ctx->pc = 0x224138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x22413c: 0xe4a20058  swc1        $f2, 0x58($a1)
    ctx->pc = 0x22413cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x224140: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x224140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224144: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x224144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224148: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x224148u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x22414c: 0xc4c5002c  lwc1        $f5, 0x2C($a2)
    ctx->pc = 0x22414cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224150: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x224150u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x224154: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x224154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x224158: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x224158u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x22415c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x22415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x224160: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x224160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x224164: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x224164u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x224168: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x224168u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x22416c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x22416cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x224170: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x224170u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x224174: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x224174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x224178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22417c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22417cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x224180: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x224180u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x224184: 0xa0a40060  sb          $a0, 0x60($a1)
    ctx->pc = 0x224184u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 96), (uint8_t)GPR_U32(ctx, 4));
    // 0x224188: 0xa0a20061  sb          $v0, 0x61($a1)
    ctx->pc = 0x224188u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x22418c: 0xa0a30062  sb          $v1, 0x62($a1)
    ctx->pc = 0x22418cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x224190: 0xe4a3005c  swc1        $f3, 0x5C($a1)
    ctx->pc = 0x224190u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x224194: 0xc4c20048  lwc1        $f2, 0x48($a2)
    ctx->pc = 0x224194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224198: 0xc4c00054  lwc1        $f0, 0x54($a2)
    ctx->pc = 0x224198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22419c: 0xc4c4004c  lwc1        $f4, 0x4C($a2)
    ctx->pc = 0x22419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2241a0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2241a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2241a4: 0xc4c10058  lwc1        $f1, 0x58($a2)
    ctx->pc = 0x2241a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2241a8: 0xc4c30050  lwc1        $f3, 0x50($a2)
    ctx->pc = 0x2241a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2241ac: 0xc4c0005c  lwc1        $f0, 0x5C($a2)
    ctx->pc = 0x2241acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2241b0: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2241b0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2241b4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2241b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2241b8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2241b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2241bc: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x2241bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2241c0: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2241c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2241c4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2241c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2241c8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2241c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2241cc: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x2241ccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2241d0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2241d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2241d4: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x2241d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2241d8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2241d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2241dc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2241dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2241e0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2241e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2241e4: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2241e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2241e8: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2241e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2241ec: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2241ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2241f0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2241f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2241f4: 0xe4a00068  swc1        $f0, 0x68($a1)
    ctx->pc = 0x2241f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x2241f8: 0xe4a2006c  swc1        $f2, 0x6C($a1)
    ctx->pc = 0x2241f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x2241fc: 0xe4a10064  swc1        $f1, 0x64($a1)
    ctx->pc = 0x2241fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x224200: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x224200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x224204: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x224204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x224208: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x224208u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x22420c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22420cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224210: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x224210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x224214: 0x46010044  c1          0x10044
    ctx->pc = 0x224214u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x224218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22421c: 0x0  nop
    ctx->pc = 0x22421cu;
    // NOP
    // 0x224220: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224224: 0x0  nop
    ctx->pc = 0x224224u;
    // NOP
    // 0x224228: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x224228u;
    {
        const bool branch_taken_0x224228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224228u;
        // 0x22422c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224228) {
            ctx->pc = 0x224248u;
            goto label_224248;
        }
    }
    ctx->pc = 0x224230u;
    // 0x224230: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x224234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224238: 0x0  nop
    ctx->pc = 0x224238u;
    // NOP
    // 0x22423c: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x22423cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x224240: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x224240u;
    {
        const bool branch_taken_0x224240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224240u;
        // 0x224244: 0xc4a00064  lwc1        $f0, 0x64($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224240) {
            ctx->pc = 0x224250u;
            goto label_224250;
        }
    }
    ctx->pc = 0x224248u;
label_224248:
    // 0x224248: 0xc4a00064  lwc1        $f0, 0x64($a1)
    ctx->pc = 0x224248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22424c: 0x0  nop
    ctx->pc = 0x22424cu;
    // NOP
label_224250:
    // 0x224250: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x224250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224254: 0xc4a2006c  lwc1        $f2, 0x6C($a1)
    ctx->pc = 0x224254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224258: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x224258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x22425c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x22425cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x224260: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x224260u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x224264: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x224264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x224268: 0xe4a10068  swc1        $f1, 0x68($a1)
    ctx->pc = 0x224268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x22426c: 0xe4a2006c  swc1        $f2, 0x6C($a1)
    ctx->pc = 0x22426cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x224270: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x224270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224274: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x224274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224278: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x224278u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x22427c: 0xc4c5002c  lwc1        $f5, 0x2C($a2)
    ctx->pc = 0x22427cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224280: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x224280u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x224284: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x224284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x224288: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x224288u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x22428c: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x22428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x224290: 0x8ca2006c  lw          $v0, 0x6C($a1)
    ctx->pc = 0x224290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x224294: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x224294u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x224298: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x224298u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x22429c: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x22429cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x2242a0: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x2242a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x2242a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2242a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2242a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2242a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2242ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2242acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2242b0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2242b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2242b4: 0xa0a20076  sb          $v0, 0x76($a1)
    ctx->pc = 0x2242b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x2242b8: 0xa0a40074  sb          $a0, 0x74($a1)
    ctx->pc = 0x2242b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 116), (uint8_t)GPR_U32(ctx, 4));
    // 0x2242bc: 0xa0a30075  sb          $v1, 0x75($a1)
    ctx->pc = 0x2242bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x2242c0: 0xe4a30070  swc1        $f3, 0x70($a1)
    ctx->pc = 0x2242c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x2242c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2242C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2242C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242C4u;
        // 0x2242c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2242C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2242CCu;
    // 0x2242cc: 0x0  nop
    ctx->pc = 0x2242ccu;
    // NOP
    ctx->pc = 0x2242d0u;
}
