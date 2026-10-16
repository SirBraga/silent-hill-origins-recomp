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

// Function: sub_001163D8
// Address: 0x1163d8 - 0x116a10
void sub_001163D8_0x1163d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001163D8_0x1163d8");
#endif

    switch (ctx->pc) {
        case 0x116438u: goto label_116438;
        case 0x116570u: goto label_116570;
        case 0x1165c8u: goto label_1165c8;
        case 0x116660u: goto label_116660;
        case 0x1167d0u: goto label_1167d0;
        case 0x1169c4u: goto label_1169c4;
        case 0x1169e8u: goto label_1169e8;
        default: break;
    }

    ctx->pc = 0x1163d8u;

    // 0x1163d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1163d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1163dc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1163dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1163e0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1163e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1163e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1163e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163e8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1163e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1163ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1163ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163f0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1163f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1163f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1163f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1163f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1163fc: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1163fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x116400: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x116400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116404: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x116404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116408: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x116408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11640c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11640cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x116410: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x116410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116414: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x116414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116418: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x116418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11641c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x11641cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x116420: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x116420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x116424: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x116424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x116428: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x116428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11642c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x11642cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x116430: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x116430u;
    SET_GPR_U32(ctx, 31, 0x116438u);
    ctx->pc = 0x116434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116430u;
    // 0x116434: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x116430u, 0x116438u)) {
        return;
    }
    ctx->pc = 0x116438u;
label_116438:
    // 0x116438: 0xc6220090  lwc1        $f2, 0x90($s1)
    ctx->pc = 0x116438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11643c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11643cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116440: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116444: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x116444u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x116448: 0x3c0142c6  lui         $at, 0x42C6
    ctx->pc = 0x116448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17094 << 16));
    // 0x11644c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11644cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x116450: 0xc6220254  lwc1        $f2, 0x254($s1)
    ctx->pc = 0x116450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116454: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x116454u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x116458: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x116458u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11645c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x11645cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116460: 0x0  nop
    ctx->pc = 0x116460u;
    // NOP
    // 0x116464: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x116464u;
    {
        const bool branch_taken_0x116464 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116464u;
        // 0x116468: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116464) {
            ctx->pc = 0x116488u;
            goto label_116488;
        }
    }
    ctx->pc = 0x11646Cu;
    // 0x11646c: 0xc62101e0  lwc1        $f1, 0x1E0($s1)
    ctx->pc = 0x11646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x116470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116474: 0x0  nop
    ctx->pc = 0x116474u;
    // NOP
    // 0x116478: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x116478u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11647c: 0x0  nop
    ctx->pc = 0x11647cu;
    // NOP
    // 0x116480: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x116480u;
    {
        const bool branch_taken_0x116480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116480) {
            ctx->pc = 0x116484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116480u;
            // 0x116484: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116488u;
            goto label_116488;
        }
    }
    ctx->pc = 0x116488u;
label_116488:
    // 0x116488: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x116488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11648c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x11648cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116490: 0x0  nop
    ctx->pc = 0x116490u;
    // NOP
    // 0x116494: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x116494u;
    {
        const bool branch_taken_0x116494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116494) {
            ctx->pc = 0x116498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116494u;
            // 0x116498: 0xc6210250  lwc1        $f1, 0x250($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1164BCu;
            goto label_1164bc;
        }
    }
    ctx->pc = 0x11649Cu;
    // 0x11649c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x11649cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1164a0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1164a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1164a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1164a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1164a8: 0x0  nop
    ctx->pc = 0x1164a8u;
    // NOP
    // 0x1164ac: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1164acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1164b0: 0xe6200254  swc1        $f0, 0x254($s1)
    ctx->pc = 0x1164b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 596), bits); }
    // 0x1164b4: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x1164b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1164b8: 0xc6210250  lwc1        $f1, 0x250($s1)
    ctx->pc = 0x1164b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1164bc:
    // 0x1164bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1164bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1164c0: 0x0  nop
    ctx->pc = 0x1164c0u;
    // NOP
    // 0x1164c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1164C4u;
    {
        const bool branch_taken_0x1164c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1164c4) {
            ctx->pc = 0x1164C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1164C4u;
            // 0x1164c8: 0xe6210254  swc1        $f1, 0x254($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 596), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1164CCu;
            goto label_1164cc;
        }
    }
    ctx->pc = 0x1164CCu;
label_1164cc:
    // 0x1164cc: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x1164ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1164d0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1164d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1164d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1164d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1164d8: 0xc6210220  lwc1        $f1, 0x220($s1)
    ctx->pc = 0x1164d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1164dc: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x1164dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1164e0: 0x46011d00  add.s       $f20, $f3, $f1
    ctx->pc = 0x1164e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1164e4: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x1164e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1164e8: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x1164e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1164ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1164ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1164f0: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1164f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1164f4: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1164f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1164f8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1164f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1164fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1164fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x116500: 0x6a460007  ldl         $a2, 0x7($s2)
    ctx->pc = 0x116500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x116504: 0x6e460000  ldr         $a2, 0x0($s2)
    ctx->pc = 0x116504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x116508: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x116508u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11650c: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x11650cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116510: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x116510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116514: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x116514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x116518: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x116518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11651c: 0x0  nop
    ctx->pc = 0x11651cu;
    // NOP
    // 0x116520: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x116520u;
    {
        const bool branch_taken_0x116520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116520) {
            ctx->pc = 0x116524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116520u;
            // 0x116524: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116528u;
            goto label_116528;
        }
    }
    ctx->pc = 0x116528u;
label_116528:
    // 0x116528: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x116528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11652c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x116530: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x116530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x116534: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x116534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x116538: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x116538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11653c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x11653cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116540: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x116540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116544: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x116544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116548: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x116548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x11654c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x11654cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x116550: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x116550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x116554: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x116554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116558: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x116558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11655c: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x11655cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116560: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x116560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x116564: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x116564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116568: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x116568u;
    SET_GPR_U32(ctx, 31, 0x116570u);
    ctx->pc = 0x11656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116568u;
    // 0x11656c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x116568u, 0x116570u)) {
        return;
    }
    ctx->pc = 0x116570u;
label_116570:
    // 0x116570: 0xc6200214  lwc1        $f0, 0x214($s1)
    ctx->pc = 0x116570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116574: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x116574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116578: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x116578u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x11657c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x11657cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x116580: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x116580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x116584: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x116584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x116588: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x116588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x11658c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x11658cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x116590: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x116590u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x116594: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x116594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116598: 0x0  nop
    ctx->pc = 0x116598u;
    // NOP
    // 0x11659c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11659Cu;
    {
        const bool branch_taken_0x11659c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11659c) {
            ctx->pc = 0x1165A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11659Cu;
            // 0x1165a0: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1165A4u;
            goto label_1165a4;
        }
    }
    ctx->pc = 0x1165A4u;
label_1165a4:
    // 0x1165a4: 0x0  nop
    ctx->pc = 0x1165a4u;
    // NOP
    // 0x1165a8: 0x0  nop
    ctx->pc = 0x1165a8u;
    // NOP
    // 0x1165ac: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1165acu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x1165b0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1165b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1165b4: 0x0  nop
    ctx->pc = 0x1165b4u;
    // NOP
    // 0x1165b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1165B8u;
    {
        const bool branch_taken_0x1165b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1165BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165B8u;
        // 0x1165bc: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165b8) {
            ctx->pc = 0x1165D0u;
            goto label_1165d0;
        }
    }
    ctx->pc = 0x1165C0u;
    // 0x1165c0: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1165C0u;
    SET_GPR_U32(ctx, 31, 0x1165C8u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1165C0u, 0x1165C8u)) {
        return;
    }
    ctx->pc = 0x1165C8u;
label_1165c8:
    // 0x1165c8: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1165c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1165cc: 0x0  nop
    ctx->pc = 0x1165ccu;
    // NOP
label_1165d0:
    // 0x1165d0: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x1165d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1165d4: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x1165d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1165d8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1165d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1165dc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1165dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1165e0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1165e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1165e4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x1165e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1165e8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1165e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1165ec: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1165ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1165f0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1165f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1165f4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1165f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1165f8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1165f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1165fc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1165fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x116600: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x116600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x116604: 0x126000f2  beqz        $s3, . + 4 + (0xF2 << 2)
    ctx->pc = 0x116604u;
    {
        const bool branch_taken_0x116604 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x116608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116604u;
        // 0x116608: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116604) {
            ctx->pc = 0x1169D0u;
            goto label_1169d0;
        }
    }
    ctx->pc = 0x11660Cu;
    // 0x11660c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11660cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116610: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x116618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11661c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x11661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x116620: 0xe62101e0  swc1        $f1, 0x1E0($s1)
    ctx->pc = 0x116620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
    // 0x116624: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x116624u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
    // 0x116628: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x116628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11662c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x11662cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x116630: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x116630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x116634: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x116634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x116638: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x116638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x11663c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x11663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x116640: 0x3c01ccbe  lui         $at, 0xCCBE
    ctx->pc = 0x116640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52414 << 16));
    // 0x116644: 0x3421bc20  ori         $at, $at, 0xBC20
    ctx->pc = 0x116644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48160);
    // 0x116648: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x116648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11664c: 0x18400048  blez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x11664Cu;
    {
        const bool branch_taken_0x11664c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x116650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11664Cu;
        // 0x116650: 0x8e230208  lw          $v1, 0x208($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11664c) {
            ctx->pc = 0x116770u;
            goto label_116770;
        }
    }
    ctx->pc = 0x116654u;
    // 0x116654: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x116654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x116658: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x116658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x11665c: 0x0  nop
    ctx->pc = 0x11665cu;
    // NOP
label_116660:
    // 0x116660: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x116660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116664: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x116664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116668: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x116668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11666c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11666cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x116670: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x116670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116674: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x116674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x116678: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x116678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11667c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11667cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x116680: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x116680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x116684: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x116684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116688: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x116688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x11668c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x11668cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x116690: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x116690u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x116694: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x116694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x116698: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x116698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x11669c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11669cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1166a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1166A0u;
    {
        const bool branch_taken_0x1166a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1166A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166A0u;
        // 0x1166a4: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166a0) {
            ctx->pc = 0x1166B8u;
            goto label_1166b8;
        }
    }
    ctx->pc = 0x1166A8u;
    // 0x1166a8: 0x46091034  c.lt.s      $f2, $f9
    ctx->pc = 0x1166a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1166ac: 0x0  nop
    ctx->pc = 0x1166acu;
    // NOP
    // 0x1166b0: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
    ctx->pc = 0x1166B0u;
    {
        const bool branch_taken_0x1166b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1166b0) {
            ctx->pc = 0x1166B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1166B0u;
            // 0x1166b4: 0x8e220204  lw          $v0, 0x204($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116760u;
            goto label_116760;
        }
    }
    ctx->pc = 0x1166B8u;
label_1166b8:
    // 0x1166b8: 0x6865002b  ldl         $a1, 0x2B($v1)
    ctx->pc = 0x1166b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1166bc: 0x6c650024  ldr         $a1, 0x24($v1)
    ctx->pc = 0x1166bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1166c0: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x1166c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1166c4: 0xb3a50067  sdl         $a1, 0x67($sp)
    ctx->pc = 0x1166c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1166c8: 0xb7a50060  sdr         $a1, 0x60($sp)
    ctx->pc = 0x1166c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1166cc: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x1166ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x1166d0: 0x46001246  mov.s       $f9, $f2
    ctx->pc = 0x1166d0u;
    ctx->f[9] = FPU_MOV_S(ctx->f[2]);
    // 0x1166d4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1166d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1166d8: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1166d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1166dc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1166dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1166e0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1166e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1166e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1166e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1166e8: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x1166e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1166ec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1166ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1166f0: 0xc4670010  lwc1        $f7, 0x10($v1)
    ctx->pc = 0x1166f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1166f4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1166f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1166f8: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x1166f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1166fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1166fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x116700: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x116700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116704: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x116704u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x116708: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x116708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11670c: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x11670cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x116710: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x116710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116714: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x116714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x116718: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x116718u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x11671c: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x11671cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116720: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x116720u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x116724: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x116724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x116728: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x116728u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x11672c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11672cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x116730: 0x46030a00  add.s       $f8, $f1, $f3
    ctx->pc = 0x116730u;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x116734: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x116734u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x116738: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x116738u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x11673c: 0xe7a70050  swc1        $f7, 0x50($sp)
    ctx->pc = 0x11673cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x116740: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x116740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116744: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x116744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x116748: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x116748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x11674c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x11674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116750: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x116750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x116754: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x116754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x116758: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x116758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x11675c: 0x0  nop
    ctx->pc = 0x11675cu;
    // NOP
label_116760:
    // 0x116760: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116764: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x116764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x116768: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x116768u;
    {
        const bool branch_taken_0x116768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116768u;
        // 0x11676c: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116768) {
            ctx->pc = 0x116660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116660;
        }
    }
    ctx->pc = 0x116770u;
label_116770:
    // 0x116770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116778: 0x0  nop
    ctx->pc = 0x116778u;
    // NOP
    // 0x11677c: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x11677cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116780: 0x0  nop
    ctx->pc = 0x116780u;
    // NOP
    // 0x116784: 0x45000092  bc1f        . + 4 + (0x92 << 2)
    ctx->pc = 0x116784u;
    {
        const bool branch_taken_0x116784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116784u;
        // 0x116788: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116784) {
            ctx->pc = 0x1169D0u;
            goto label_1169d0;
        }
    }
    ctx->pc = 0x11678Cu;
    // 0x11678c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x11678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x116790: 0x1840007b  blez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x116790u;
    {
        const bool branch_taken_0x116790 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x116794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116790u;
        // 0x116794: 0x8e230208  lw          $v1, 0x208($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116790) {
            ctx->pc = 0x116980u;
            goto label_116980;
        }
    }
    ctx->pc = 0x116798u;
    // 0x116798: 0xc7a70060  lwc1        $f7, 0x60($sp)
    ctx->pc = 0x116798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11679c: 0xc7a60064  lwc1        $f6, 0x64($sp)
    ctx->pc = 0x11679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1167a0: 0xc7a50068  lwc1        $f5, 0x68($sp)
    ctx->pc = 0x1167a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1167a4: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1167a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1167a8: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1167a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1167ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1167acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1167b0: 0xc7ab0000  lwc1        $f11, 0x0($sp)
    ctx->pc = 0x1167b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1167b4: 0xc7aa0004  lwc1        $f10, 0x4($sp)
    ctx->pc = 0x1167b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1167b8: 0xc7a90008  lwc1        $f9, 0x8($sp)
    ctx->pc = 0x1167b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1167bc: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x1167bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x1167c0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1167c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1167c4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1167c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1167c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1167c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1167cc: 0x0  nop
    ctx->pc = 0x1167ccu;
    // NOP
label_1167d0:
    // 0x1167d0: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x1167d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1167d4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x1167d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x1167d8: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1167d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1167dc: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1167dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1167e0: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x1167e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x1167e4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1167e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1167e8: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1167e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1167ec: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x1167ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1167f0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1167f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1167f4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1167f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1167f8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1167f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1167fc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1167fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x116800: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x116800u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x116804: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x116804u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x116808: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x116808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11680c: 0x0  nop
    ctx->pc = 0x11680cu;
    // NOP
    // 0x116810: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
    ctx->pc = 0x116810u;
    {
        const bool branch_taken_0x116810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116810) {
            ctx->pc = 0x116814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116810u;
            // 0x116814: 0xc4620024  lwc1        $f2, 0x24($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1168A8u;
            goto label_1168a8;
        }
    }
    ctx->pc = 0x116818u;
    // 0x116818: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x116818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11681c: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x11681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116820: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x116820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116824: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x116824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116828: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x116828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11682c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x11682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116830: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x116830u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x116834: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x116834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116838: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x116838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11683c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11683cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x116840: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x116840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x116844: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x116844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x116848: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x116848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11684c: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x11684cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116850: 0x0  nop
    ctx->pc = 0x116850u;
    // NOP
    // 0x116854: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x116854u;
    {
        const bool branch_taken_0x116854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116854) {
            ctx->pc = 0x116858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116854u;
            // 0x116858: 0xc4620024  lwc1        $f2, 0x24($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1168A8u;
            goto label_1168a8;
        }
    }
    ctx->pc = 0x11685Cu;
    // 0x11685c: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x11685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116860: 0x46000206  mov.s       $f8, $f0
    ctx->pc = 0x116860u;
    ctx->f[8] = FPU_MOV_S(ctx->f[0]);
    // 0x116864: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x116864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116868: 0x460b1882  mul.s       $f2, $f3, $f11
    ctx->pc = 0x116868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x11686c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x11686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116870: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x116870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x116874: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x116874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x116878: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x116878u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11687c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11687cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x116880: 0x460e1082  mul.s       $f2, $f2, $f14
    ctx->pc = 0x116880u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x116884: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x116884u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x116888: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x116888u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11688c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x11688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116890: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x116890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x116894: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x116894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x116898: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x116898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11689c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11689cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1168a0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1168a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1168a4: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x1168a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1168a8:
    // 0x1168a8: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x1168a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x1168ac: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1168acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1168b0: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1168b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1168b4: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x1168b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x1168b8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1168b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1168bc: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x1168bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1168c0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x1168c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1168c4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1168c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1168c8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1168c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1168cc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1168ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1168d0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1168d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1168d4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1168d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1168d8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1168d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1168dc: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x1168dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1168e0: 0x0  nop
    ctx->pc = 0x1168e0u;
    // NOP
    // 0x1168e4: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x1168E4u;
    {
        const bool branch_taken_0x1168e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1168E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168E4u;
        // 0x1168e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168e4) {
            ctx->pc = 0x116978u;
            goto label_116978;
        }
    }
    ctx->pc = 0x1168ECu;
    // 0x1168ec: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1168ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1168f0: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x1168f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1168f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1168f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1168f8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1168f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1168fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1168fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x116900: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x116900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116904: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x116904u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x116908: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x116908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11690c: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x11690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116910: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x116910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x116914: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x116914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x116918: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x116918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11691c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11691cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x116920: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x116920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116924: 0x0  nop
    ctx->pc = 0x116924u;
    // NOP
    // 0x116928: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x116928u;
    {
        const bool branch_taken_0x116928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116928) {
            ctx->pc = 0x116978u;
            goto label_116978;
        }
    }
    ctx->pc = 0x116930u;
    // 0x116930: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x116930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116934: 0x46000206  mov.s       $f8, $f0
    ctx->pc = 0x116934u;
    ctx->f[8] = FPU_MOV_S(ctx->f[0]);
    // 0x116938: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x116938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11693c: 0x460b1882  mul.s       $f2, $f3, $f11
    ctx->pc = 0x11693cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x116940: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x116940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116944: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x116944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x116948: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x116948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x11694c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11694cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x116950: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x116950u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x116954: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x116954u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x116958: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x116958u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x11695c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x11695cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x116960: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x116960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116964: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x116964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x116968: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x116968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x11696c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x11696cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116970: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x116970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x116974: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x116974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_116978:
    // 0x116978: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x116978u;
    {
        const bool branch_taken_0x116978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116978u;
        // 0x11697c: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116978) {
            ctx->pc = 0x1167D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1167d0;
        }
    }
    ctx->pc = 0x116980u;
label_116980:
    // 0x116980: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x116980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116984: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x116984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116988: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x116988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11698c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11698cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x116990: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x116990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116994: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x116994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116998: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x116998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11699c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x11699cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1169a0: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1169a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1169a4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1169a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1169a8: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x1169a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1169ac: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1169acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1169b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1169b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1169b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1169b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169bc: 0xc045702  jal         func_115C08
    ctx->pc = 0x1169BCu;
    SET_GPR_U32(ctx, 31, 0x1169C4u);
    ctx->pc = 0x1169C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169BCu;
    // 0x1169c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x115C08u, 0x1169BCu, 0x1169C4u)) {
        return;
    }
    ctx->pc = 0x1169C4u;
label_1169c4:
    // 0x1169c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1169C4u;
    {
        const bool branch_taken_0x1169c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1169C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169C4u;
        // 0x1169c8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169c4) {
            ctx->pc = 0x1169F0u;
            goto label_1169f0;
        }
    }
    ctx->pc = 0x1169CCu;
    // 0x1169cc: 0x0  nop
    ctx->pc = 0x1169ccu;
    // NOP
label_1169d0:
    // 0x1169d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1169d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1169d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1169d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169dc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1169dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1169e0: 0xc045702  jal         func_115C08
    ctx->pc = 0x1169E0u;
    SET_GPR_U32(ctx, 31, 0x1169E8u);
    ctx->pc = 0x1169E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169E0u;
    // 0x1169e4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x115C08u, 0x1169E0u, 0x1169E8u)) {
        return;
    }
    ctx->pc = 0x1169E8u;
label_1169e8:
    // 0x1169e8: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x1169e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1169ec: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1169ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1169f0:
    // 0x1169f0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1169f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1169f4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1169f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1169f8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1169f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1169fc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1169fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116a00: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x116a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x116a04: 0x3e00008  jr          $ra
    ctx->pc = 0x116A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A04u;
        // 0x116a08: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116A0Cu;
    // 0x116a0c: 0x0  nop
    ctx->pc = 0x116a0cu;
    // NOP
    ctx->pc = 0x116a10u;
}
