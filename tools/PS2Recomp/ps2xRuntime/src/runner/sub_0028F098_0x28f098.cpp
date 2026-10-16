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

// Function: sub_0028F098
// Address: 0x28f098 - 0x28f1f0
void sub_0028F098_0x28f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F098_0x28f098");
#endif

    ctx->pc = 0x28f098u;

    // 0x28f098: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28f098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f09c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x28f09cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28f0a0: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x28f0a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x28f0a4: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x28f0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x28f0a8: 0xe4470000  swc1        $f7, 0x0($v0)
    ctx->pc = 0x28f0a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28f0ac: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x28f0acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x28f0b0: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x28f0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28f0b4: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x28f0b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28f0b8: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x28f0b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28f0bc: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x28f0bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x28f0c0: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x28f0c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28f0c4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x28f0c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x28f0c8: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x28f0c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28f0cc: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x28f0ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x28f0d0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x28f0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28f0d4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x28f0d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x28f0d8: 0xe444000c  swc1        $f4, 0xC($v0)
    ctx->pc = 0x28f0d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28f0dc: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x28f0dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28f0e0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28f0e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f0e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28f0e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28f0e8: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x28f0e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x28f0ec: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x28f0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x28f0f0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x28f0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28f0f4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x28f0f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28f0f8: 0xe443001c  swc1        $f3, 0x1C($v0)
    ctx->pc = 0x28f0f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x28f0fc: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x28f0fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x28f100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f108: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x28f108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x28f10c: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x28f10cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x28f110: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28f110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f114: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28f118: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x28f118u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x28f11c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x28f11cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x28f120: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x28f120u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x28f124: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x28f124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x28f128: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x28f128u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x28f12c: 0xe443001c  swc1        $f3, 0x1C($v0)
    ctx->pc = 0x28f12cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x28f130: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x28f130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x28f134: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x28f134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x28f138: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x28f138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28f13c: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x28f13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x28f140: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x28f140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x28f144: 0xe4470030  swc1        $f7, 0x30($v0)
    ctx->pc = 0x28f144u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x28f148: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x28f148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x28f14c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x28f14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28f150: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x28f150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x28f154: 0xe4460034  swc1        $f6, 0x34($v0)
    ctx->pc = 0x28f154u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x28f158: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x28f158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x28f15c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x28f15cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28f160: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x28f160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x28f164: 0xe4450038  swc1        $f5, 0x38($v0)
    ctx->pc = 0x28f164u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x28f168: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x28f168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x28f16c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x28f16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28f170: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x28f170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x28f174: 0xe444003c  swc1        $f4, 0x3C($v0)
    ctx->pc = 0x28f174u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x28f178: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x28f178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28f17c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28f17cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f180: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28f180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28f184: 0xe4420048  swc1        $f2, 0x48($v0)
    ctx->pc = 0x28f184u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x28f188: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x28f188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x28f18c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x28f18cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28f190: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x28f190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28f194: 0xe443004c  swc1        $f3, 0x4C($v0)
    ctx->pc = 0x28f194u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x28f198: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x28f198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x28f19c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f19cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f1a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f1a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f1a4: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x28f1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x28f1a8: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x28f1a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x28f1ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28f1acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f1b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28f1b4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x28f1b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x28f1b8: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x28f1b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x28f1bc: 0xe4420048  swc1        $f2, 0x48($v0)
    ctx->pc = 0x28f1bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x28f1c0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x28f1c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x28f1c4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x28f1c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x28f1c8: 0xe443004c  swc1        $f3, 0x4C($v0)
    ctx->pc = 0x28f1c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x28f1cc: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x28f1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x28f1d0: 0xe4410054  swc1        $f1, 0x54($v0)
    ctx->pc = 0x28f1d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x28f1d4: 0x89030003  lwl         $v1, 0x3($t0)
    ctx->pc = 0x28f1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x28f1d8: 0x99030000  lwr         $v1, 0x0($t0)
    ctx->pc = 0x28f1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x28f1dc: 0xa8430063  swl         $v1, 0x63($v0)
    ctx->pc = 0x28f1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28f1e0: 0xb8430060  swr         $v1, 0x60($v0)
    ctx->pc = 0x28f1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x28f1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F1ECu;
    // 0x28f1ec: 0x0  nop
    ctx->pc = 0x28f1ecu;
    // NOP
    ctx->pc = 0x28f1f0u;
}
