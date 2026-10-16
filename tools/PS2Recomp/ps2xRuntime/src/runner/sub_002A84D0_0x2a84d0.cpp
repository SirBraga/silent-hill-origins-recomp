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

// Function: sub_002A84D0
// Address: 0x2a84d0 - 0x2a8ad0
void sub_002A84D0_0x2a84d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A84D0_0x2a84d0");
#endif

    switch (ctx->pc) {
        case 0x2a8534u: goto label_2a8534;
        case 0x2a8620u: goto label_2a8620;
        case 0x2a8658u: goto label_2a8658;
        case 0x2a87e8u: goto label_2a87e8;
        case 0x2a88a0u: goto label_2a88a0;
        default: break;
    }

    ctx->pc = 0x2a84d0u;

    // 0x2a84d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2a84d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2a84d4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2a84d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2a84d8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2a84d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2a84dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a84dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a84e0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2a84e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2a84e4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2a84e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a84e8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2a84e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2a84ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a84ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a84f0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2a84f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2a84f4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2a84f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a84f8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2a84f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x2a84fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2a84fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8508: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2a8508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a850c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a8510: 0xe7ba0120  swc1        $f26, 0x120($sp)
    ctx->pc = 0x2a8510u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2a8514: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x2a8514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a8518: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x2a8518u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2a851c: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x2a851cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2a8520: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x2a8520u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2a8524: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x2a8524u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2a8528: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2a8528u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2a852c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2A852Cu;
    SET_GPR_U32(ctx, 31, 0x2A8534u);
    ctx->pc = 0x2A8530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A852Cu;
    // 0x2a8530: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2A852Cu, 0x2A8534u)) {
        return;
    }
    ctx->pc = 0x2A8534u;
label_2a8534:
    // 0x2a8534: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a8534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a8538: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2a8538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2a853c: 0x2446e410  addiu       $a2, $v0, -0x1BF0
    ctx->pc = 0x2a853cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960144));
    // 0x2a8540: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2a8540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a8544: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2a8544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a8548: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2a8548u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6AE418u));
    // 0x2a854c: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x2a854cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8550: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x2a8550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8554: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2a8554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2a8558: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2a8558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a855c: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x2a855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8560: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x2a8560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8564: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a8564u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a8568: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x2a8568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a856c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x2a856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8570: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x2a8570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8574: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2a8574u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2a8578: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a8578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a857c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a857cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a8580: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2a8580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a8584: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2a8584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a8588: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x2a8588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2a858c: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x2a858cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a8590: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x2a8590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a8594: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2a8594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a8598: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2a8598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a859c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2a859cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a85a0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2a85a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2a85a4: 0xc6160040  lwc1        $f22, 0x40($s0)
    ctx->pc = 0x2a85a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a85a8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2a85a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a85ac: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x2a85acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2a85b0: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2a85b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a85b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a85b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a85b8: 0x0  nop
    ctx->pc = 0x2a85b8u;
    // NOP
    // 0x2a85bc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2A85BCu;
    {
        const bool branch_taken_0x2a85bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A85C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85BCu;
        // 0x2a85c0: 0xc617004c  lwc1        $f23, 0x4C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85bc) {
            ctx->pc = 0x2A85E8u;
            goto label_2a85e8;
        }
    }
    ctx->pc = 0x2A85C4u;
    // 0x2a85c4: 0x4602c834  c.lt.s      $f25, $f2
    ctx->pc = 0x2a85c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a85c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a85c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a85cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a85ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a85d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A85D0u;
    {
        const bool branch_taken_0x2a85d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a85d0) {
            ctx->pc = 0x2A85ECu;
            goto label_2a85ec;
        }
    }
    ctx->pc = 0x2A85D8u;
    // 0x2a85d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a85d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a85dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a85dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a85e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A85E0u;
    {
        const bool branch_taken_0x2a85e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a85e0) {
            ctx->pc = 0x2A85ECu;
            goto label_2a85ec;
        }
    }
    ctx->pc = 0x2A85E8u;
label_2a85e8:
    // 0x2a85e8: 0x4600cd46  mov.s       $f21, $f25
    ctx->pc = 0x2a85e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[25]);
label_2a85ec:
    // 0x2a85ec: 0x6a660007  ldl         $a2, 0x7($s3)
    ctx->pc = 0x2a85ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a85f0: 0x6e660000  ldr         $a2, 0x0($s3)
    ctx->pc = 0x2a85f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a85f4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2a85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a85f8: 0xb246000b  sdl         $a2, 0xB($s2)
    ctx->pc = 0x2a85f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a85fc: 0xb6460004  sdr         $a2, 0x4($s2)
    ctx->pc = 0x2a85fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8600: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2a8600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2a8604: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x2a8604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2a8608: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x2a8608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x2a860c: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x2a860cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2a8610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8614: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2a8614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2a8618: 0xc658001c  lwc1        $f24, 0x1C($s2)
    ctx->pc = 0x2a8618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a861c: 0x0  nop
    ctx->pc = 0x2a861cu;
    // NOP
label_2a8620:
    // 0x2a8620: 0x4618a832  c.eq.s      $f21, $f24
    ctx->pc = 0x2a8620u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8624: 0x0  nop
    ctx->pc = 0x2a8624u;
    // NOP
    // 0x2a8628: 0x45010066  bc1t        . + 4 + (0x66 << 2)
    ctx->pc = 0x2A8628u;
    {
        const bool branch_taken_0x2a8628 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8628u;
        // 0x2a862c: 0xc7b40008  lwc1        $f20, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8628) {
            ctx->pc = 0x2A87C4u;
            goto label_2a87c4;
        }
    }
    ctx->pc = 0x2A8630u;
    // 0x2a8630: 0x4616a802  mul.s       $f0, $f21, $f22
    ctx->pc = 0x2a8630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x2a8634: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2a8634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2a8638: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2a8638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2a863c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8640: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a8640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8644: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a8644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8648: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a8648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a864c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2a864cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a8650: 0xc0aaa6e  jal         func_2AA9B8
    ctx->pc = 0x2A8650u;
    SET_GPR_U32(ctx, 31, 0x2A8658u);
    ctx->pc = 0x2A8654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8650u;
    // 0x2a8654: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA9B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA9B8u, 0x2A8650u, 0x2A8658u)) {
        return;
    }
    ctx->pc = 0x2A8658u;
label_2a8658:
    // 0x2a8658: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A8658u;
    {
        const bool branch_taken_0x2a8658 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8658u;
        // 0x2a865c: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8658) {
            ctx->pc = 0x2A86B0u;
            goto label_2a86b0;
        }
    }
    ctx->pc = 0x2A8660u;
    // 0x2a8660: 0x46180032  c.eq.s      $f0, $f24
    ctx->pc = 0x2a8660u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8664: 0x0  nop
    ctx->pc = 0x2a8664u;
    // NOP
    // 0x2a8668: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2A8668u;
    {
        const bool branch_taken_0x2a8668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8668u;
        // 0x2a866c: 0xc7a30060  lwc1        $f3, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8668) {
            ctx->pc = 0x2A86B0u;
            goto label_2a86b0;
        }
    }
    ctx->pc = 0x2A8670u;
    // 0x2a8670: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2a8670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8674: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x2a8674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8678: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a8678u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a867c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2a867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8680: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x2a8680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8684: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2a8684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8688: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2a8688u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2a868c: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x2a868cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2a8690: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a8690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a8694: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x2a8694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2a8698: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x2a8698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2a869c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86a0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2a86a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2a86a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a86a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a86a8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2A86A8u;
    {
        const bool branch_taken_0x2a86a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86A8u;
        // 0x2a86ac: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86a8) {
            ctx->pc = 0x2A8898u;
            goto label_2a8898;
        }
    }
    ctx->pc = 0x2A86B0u;
label_2a86b0:
    // 0x2a86b0: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x2a86b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x2a86b4: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x2a86b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a86b8: 0x0  nop
    ctx->pc = 0x2a86b8u;
    // NOP
    // 0x2a86bc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2A86BCu;
    {
        const bool branch_taken_0x2a86bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A86C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86BCu;
        // 0x2a86c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86bc) {
            ctx->pc = 0x2A86F4u;
            goto label_2a86f4;
        }
    }
    ctx->pc = 0x2A86C4u;
    // 0x2a86c4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2a86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a86c8: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x2a86c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x2a86cc: 0x4600b087  neg.s       $f2, $f22
    ctx->pc = 0x2a86ccu;
    ctx->f[2] = FPU_NEG_S(ctx->f[22]);
    // 0x2a86d0: 0x4600c801  sub.s       $f0, $f25, $f0
    ctx->pc = 0x2a86d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
    // 0x2a86d4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a86d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a86d8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2a86d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2a86dc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2a86dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a86e0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a86e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a86e4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2a86e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a86e8: 0x0  nop
    ctx->pc = 0x2a86e8u;
    // NOP
    // 0x2a86ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A86ECu;
    {
        const bool branch_taken_0x2a86ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A86F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86ECu;
        // 0x2a86f0: 0xe7a20040  swc1        $f2, 0x40($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86ec) {
            ctx->pc = 0x2A86F8u;
            goto label_2a86f8;
        }
    }
    ctx->pc = 0x2A86F4u;
label_2a86f4:
    // 0x2a86f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a86f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a86f8:
    // 0x2a86f8: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2A86F8u;
    {
        const bool branch_taken_0x2a86f8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86F8u;
        // 0x2a86fc: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86f8) {
            ctx->pc = 0x2A87B0u;
            goto label_2a87b0;
        }
    }
    ctx->pc = 0x2A8700u;
    // 0x2a8700: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8700u;
    {
        const bool branch_taken_0x2a8700 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2A8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8700u;
        // 0x2a8704: 0xc7a20054  lwc1        $f2, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8700) {
            ctx->pc = 0x2A8724u;
            goto label_2a8724;
        }
    }
    ctx->pc = 0x2A8708u;
    // 0x2a8708: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2a8708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a870c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2a870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8710: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2a8710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a8714: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a8714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8718: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a871c: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x2A871Cu;
    {
        const bool branch_taken_0x2a871c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a871c) {
            ctx->pc = 0x2A87B0u;
            goto label_2a87b0;
        }
    }
    ctx->pc = 0x2A8724u;
label_2a8724:
    // 0x2a8724: 0x46021983  div.s       $f6, $f3, $f2
    ctx->pc = 0x2a8724u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[2]);
    // 0x2a8728: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x2a8728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a872c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2a872cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2a8730: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x2a8730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2a8734: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2a8734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8738: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x2a8738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a873c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2a873cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2a8740: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2a8740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8744: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2a8744u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2a8748: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x2a8748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a874c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a874cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2a8750: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2a8750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8754: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x2a8754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8758: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2a8758u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2a875c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2a875cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2a8760: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a8760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8764: 0xe6440004  swc1        $f4, 0x4($s2)
    ctx->pc = 0x2a8764u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2a8768: 0xe6430008  swc1        $f3, 0x8($s2)
    ctx->pc = 0x2a8768u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2a876c: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x2a876cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2a8770: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2a8770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8774: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x2a8774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a8778: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2a8778u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2a877c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2a877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8780: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x2a8780u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x2a8784: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2a8784u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a8788: 0x4617d003  div.s       $f0, $f26, $f23
    ctx->pc = 0x2a8788u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[26], ctx->f[23]);
    // 0x2a878c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a878cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8790: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a8790u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a8794: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a8794u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a8798: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x2a8798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2a879c: 0xe6440010  swc1        $f4, 0x10($s2)
    ctx->pc = 0x2a879cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2a87a0: 0xe6430014  swc1        $f3, 0x14($s2)
    ctx->pc = 0x2a87a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2a87a4: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x2A87A4u;
    {
        const bool branch_taken_0x2a87a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87A4u;
        // 0x2a87a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87a4) {
            ctx->pc = 0x2A8A8Cu;
            goto label_2a8a8c;
        }
    }
    ctx->pc = 0x2A87ACu;
    // 0x2a87ac: 0x0  nop
    ctx->pc = 0x2a87acu;
    // NOP
label_2a87b0:
    // 0x2a87b0: 0x186000b5  blez        $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2A87B0u;
    {
        const bool branch_taken_0x2a87b0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2A87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87B0u;
        // 0x2a87b4: 0xc7a20040  lwc1        $f2, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87b0) {
            ctx->pc = 0x2A8A88u;
            goto label_2a8a88;
        }
    }
    ctx->pc = 0x2A87B8u;
    // 0x2a87b8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2a87b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a87bc: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2A87BCu;
    {
        const bool branch_taken_0x2a87bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87BCu;
        // 0x2a87c0: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87bc) {
            ctx->pc = 0x2A8A0Cu;
            goto label_2a8a0c;
        }
    }
    ctx->pc = 0x2A87C4u;
label_2a87c4:
    // 0x2a87c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a87c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a87c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a87cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a87ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a87d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a87d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a87d4: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2a87d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a87d8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2a87d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2a87dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a87dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a87e0: 0xc0aa8d4  jal         func_2AA350
    ctx->pc = 0x2A87E0u;
    SET_GPR_U32(ctx, 31, 0x2A87E8u);
    ctx->pc = 0x2A87E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A87E0u;
    // 0x2a87e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA350u, 0x2A87E0u, 0x2A87E8u)) {
        return;
    }
    ctx->pc = 0x2A87E8u;
label_2a87e8:
    // 0x2a87e8: 0x184000a7  blez        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2A87E8u;
    {
        const bool branch_taken_0x2a87e8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87E8u;
        // 0x2a87ec: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87e8) {
            ctx->pc = 0x2A8A88u;
            goto label_2a8a88;
        }
    }
    ctx->pc = 0x2A87F0u;
    // 0x2a87f0: 0xc7a40070  lwc1        $f4, 0x70($sp)
    ctx->pc = 0x2a87f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a87f4: 0x46182032  c.eq.s      $f4, $f24
    ctx->pc = 0x2a87f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a87f8: 0x0  nop
    ctx->pc = 0x2a87f8u;
    // NOP
    // 0x2a87fc: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2A87FCu;
    {
        const bool branch_taken_0x2a87fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87FCu;
        // 0x2a8800: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87fc) {
            ctx->pc = 0x2A88A8u;
            goto label_2a88a8;
        }
    }
    ctx->pc = 0x2A8804u;
    // 0x2a8804: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2a8804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8808: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x2a8808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a880c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2a880cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2a8810: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2a8810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8814: 0xc646000c  lwc1        $f6, 0xC($s2)
    ctx->pc = 0x2a8814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a8818: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a8818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a881c: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2a881cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2a8820: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2a8820u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2a8824: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2a8824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8828: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x2a8828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a882c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x2a882cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2a8830: 0xc7a80038  lwc1        $f8, 0x38($sp)
    ctx->pc = 0x2a8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a8834: 0x46042842  mul.s       $f1, $f5, $f4
    ctx->pc = 0x2a8834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2a8838: 0x460831c2  mul.s       $f7, $f6, $f8
    ctx->pc = 0x2a8838u;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x2a883c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a883cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8840: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2a8840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2a8844: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a8844u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8848: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a8848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a884c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a884cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a8850: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2a8850u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2a8854: 0xe6430010  swc1        $f3, 0x10($s2)
    ctx->pc = 0x2a8854u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2a8858: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2a8858u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2a885c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x2a885cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x2a8860: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a8860u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2a8864: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2a8864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2a8868: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2a8868u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2a886c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2a886cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2a8870: 0xe6450014  swc1        $f5, 0x14($s2)
    ctx->pc = 0x2a8870u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2a8874: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2a8874u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2a8878: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2a8878u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x2a887c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2a887cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2a8880: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x2a8880u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2a8884: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x2a8884u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x2a8888: 0xe6460018  swc1        $f6, 0x18($s2)
    ctx->pc = 0x2a8888u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2a888c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a888cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8890: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a8890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8894: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a8894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a8898:
    // 0x2a8898: 0xc0aa9d8  jal         func_2AA760
    ctx->pc = 0x2A8898u;
    SET_GPR_U32(ctx, 31, 0x2A88A0u);
    ctx->pc = 0x2AA760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA760u, 0x2A8898u, 0x2A88A0u)) {
        return;
    }
    ctx->pc = 0x2A88A0u;
label_2a88a0:
    // 0x2a88a0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2A88A0u;
    {
        const bool branch_taken_0x2a88a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88A0u;
        // 0x2a88a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a88a0) {
            ctx->pc = 0x2A8A8Cu;
            goto label_2a8a8c;
        }
    }
    ctx->pc = 0x2A88A8u;
label_2a88a8:
    // 0x2a88a8: 0x4618a034  c.lt.s      $f20, $f24
    ctx->pc = 0x2a88a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a88ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a88acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a88b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a88b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a88b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A88B4u;
    {
        const bool branch_taken_0x2a88b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88B4u;
        // 0x2a88b8: 0xc64c0004  lwc1        $f12, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a88b4) {
            ctx->pc = 0x2A88C4u;
            goto label_2a88c4;
        }
    }
    ctx->pc = 0x2A88BCu;
    // 0x2a88bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a88bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a88c0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a88c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2a88c4:
    // 0x2a88c4: 0x4614a8c2  mul.s       $f3, $f21, $f20
    ctx->pc = 0x2a88c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x2a88c8: 0xc64b0008  lwc1        $f11, 0x8($s2)
    ctx->pc = 0x2a88c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2a88cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a88d0: 0xc7a70030  lwc1        $f7, 0x30($sp)
    ctx->pc = 0x2a88d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a88d4: 0xc7a80034  lwc1        $f8, 0x34($sp)
    ctx->pc = 0x2a88d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a88d8: 0x46076002  mul.s       $f0, $f12, $f7
    ctx->pc = 0x2a88d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x2a88dc: 0xc64a000c  lwc1        $f10, 0xC($s2)
    ctx->pc = 0x2a88dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a88e0: 0x46085882  mul.s       $f2, $f11, $f8
    ctx->pc = 0x2a88e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
    // 0x2a88e4: 0xc7a90038  lwc1        $f9, 0x38($sp)
    ctx->pc = 0x2a88e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a88e8: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2a88e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a88ec: 0x46095042  mul.s       $f1, $f10, $f9
    ctx->pc = 0x2a88ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x2a88f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a88f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a88f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a88f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a88f8: 0x4600c801  sub.s       $f0, $f25, $f0
    ctx->pc = 0x2a88f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
    // 0x2a88fc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2a88fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2a8900: 0x4600b040  add.s       $f1, $f22, $f0
    ctx->pc = 0x2a8900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x2a8904: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x2a8904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8908: 0x0  nop
    ctx->pc = 0x2a8908u;
    // NOP
    // 0x2a890c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A890Cu;
    {
        const bool branch_taken_0x2a890c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A890Cu;
        // 0x2a8910: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a890c) {
            ctx->pc = 0x2A8918u;
            goto label_2a8918;
        }
    }
    ctx->pc = 0x2A8914u;
    // 0x2a8914: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8918:
    // 0x2a8918: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8918u;
    {
        const bool branch_taken_0x2a8918 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8918u;
        // 0x2a891c: 0xc7a20074  lwc1        $f2, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8918) {
            ctx->pc = 0x2A8938u;
            goto label_2a8938;
        }
    }
    ctx->pc = 0x2A8920u;
    // 0x2a8920: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a8920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a8924: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x2a8924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2a8928: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a8928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a892c: 0x0  nop
    ctx->pc = 0x2a892cu;
    // NOP
    // 0x2a8930: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
    ctx->pc = 0x2A8930u;
    {
        const bool branch_taken_0x2a8930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8930) {
            ctx->pc = 0x2A8934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8930u;
            // 0x2a8934: 0xc7a20040  lwc1        $f2, 0x40($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8A08u;
            goto label_2a8a08;
        }
    }
    ctx->pc = 0x2A8938u;
label_2a8938:
    // 0x2a8938: 0x46022183  div.s       $f6, $f4, $f2
    ctx->pc = 0x2a8938u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[2]);
    // 0x2a893c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x2a893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8940: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2a8940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2a8944: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x2a8944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2a8948: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2a8948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a894c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x2a894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a8950: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2a8950u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2a8954: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2a8954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8958: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2a8958u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2a895c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2a895cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2a8960: 0x46046100  add.s       $f4, $f12, $f4
    ctx->pc = 0x2a8960u;
    ctx->f[4] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x2a8964: 0x46055940  add.s       $f5, $f11, $f5
    ctx->pc = 0x2a8964u;
    ctx->f[5] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x2a8968: 0x460350c0  add.s       $f3, $f10, $f3
    ctx->pc = 0x2a8968u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
    // 0x2a896c: 0xe6440004  swc1        $f4, 0x4($s2)
    ctx->pc = 0x2a896cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2a8970: 0xe6450008  swc1        $f5, 0x8($s2)
    ctx->pc = 0x2a8970u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2a8974: 0xe643000c  swc1        $f3, 0xC($s2)
    ctx->pc = 0x2a8974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2a8978: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a8978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a897c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2a897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8980: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2a8980u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2a8984: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2a8984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8988: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x2a8988u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x2a898c: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2a898cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2a8990: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x2a8990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2a8994: 0x46082882  mul.s       $f2, $f5, $f8
    ctx->pc = 0x2a8994u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x2a8998: 0x46091982  mul.s       $f6, $f3, $f9
    ctx->pc = 0x2a8998u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x2a899c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a899cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a89a0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2a89a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2a89a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a89a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2a89a8: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2a89a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2a89ac: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a89acu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a89b0: 0x46072042  mul.s       $f1, $f4, $f7
    ctx->pc = 0x2a89b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2a89b4: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x2a89b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a89b8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2a89b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2a89bc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2a89bcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2a89c0: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2a89c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2a89c4: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2a89c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2a89c8: 0x46082802  mul.s       $f0, $f5, $f8
    ctx->pc = 0x2a89c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x2a89cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a89ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a89d0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2a89d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2a89d4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a89d4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2a89d8: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x2a89d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2a89dc: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2a89dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a89e0: 0x4617d003  div.s       $f0, $f26, $f23
    ctx->pc = 0x2a89e0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[26], ctx->f[23]);
    // 0x2a89e4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a89e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a89e8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a89e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a89ec: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2a89ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a89f0: 0xe6430018  swc1        $f3, 0x18($s2)
    ctx->pc = 0x2a89f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2a89f4: 0xe6440010  swc1        $f4, 0x10($s2)
    ctx->pc = 0x2a89f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2a89f8: 0xe6450014  swc1        $f5, 0x14($s2)
    ctx->pc = 0x2a89f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2a89fc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2A89FCu;
    {
        const bool branch_taken_0x2a89fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89FCu;
        // 0x2a8a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a89fc) {
            ctx->pc = 0x2A8A8Cu;
            goto label_2a8a8c;
        }
    }
    ctx->pc = 0x2A8A04u;
    // 0x2a8a04: 0x0  nop
    ctx->pc = 0x2a8a04u;
    // NOP
label_2a8a08:
    // 0x2a8a08: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2a8a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a8a0c:
    // 0x2a8a0c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x2a8a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a10: 0x46011183  div.s       $f6, $f2, $f1
    ctx->pc = 0x2a8a10u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x2a8a14: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2a8a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2a8a18: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x2a8a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2a8a1c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2a8a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a20: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2a8a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8a24: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2a8a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2a8a28: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2a8a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a2c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2a8a2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2a8a30: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2a8a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8a34: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a8a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2a8a38: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x2a8a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8a3c: 0xc645000c  lwc1        $f5, 0xC($s2)
    ctx->pc = 0x2a8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a8a40: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2a8a40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a8a44: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2a8a44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2a8a48: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2a8a48u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2a8a4c: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x2a8a4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2a8a50: 0xe6440008  swc1        $f4, 0x8($s2)
    ctx->pc = 0x2a8a50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2a8a54: 0xe645000c  swc1        $f5, 0xC($s2)
    ctx->pc = 0x2a8a54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2a8a58: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2a8a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a5c: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x2a8a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8a60: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a8a60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a8a64: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x2a8a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a68: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2a8a68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2a8a6c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2a8a6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2a8a70: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a8a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a8a74: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2a8a74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a8a78: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2a8a78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2a8a7c: 0x16a0fee8  bnez        $s5, . + 4 + (-0x118 << 2)
    ctx->pc = 0x2A8A7Cu;
    {
        const bool branch_taken_0x2a8a7c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A7Cu;
        // 0x2a8a80: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a7c) {
            ctx->pc = 0x2A8620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8620;
        }
    }
    ctx->pc = 0x2A8A84u;
    // 0x2a8a84: 0x0  nop
    ctx->pc = 0x2a8a84u;
    // NOP
label_2a8a88:
    // 0x2a8a88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8a8c:
    // 0x2a8a8c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2a8a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a8a90: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2a8a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a8a94: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2a8a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a8a98: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2a8a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a8a9c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2a8a9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a8aa0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2a8aa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a8aa4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a8aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8aa8: 0xc7ba0120  lwc1        $f26, 0x120($sp)
    ctx->pc = 0x2a8aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2a8aac: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x2a8aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a8ab0: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x2a8ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a8ab4: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x2a8ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a8ab8: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x2a8ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a8abc: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2a8abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a8ac0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2a8ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a8ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AC4u;
        // 0x2a8ac8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8ACCu;
    // 0x2a8acc: 0x0  nop
    ctx->pc = 0x2a8accu;
    // NOP
    ctx->pc = 0x2a8ad0u;
}
