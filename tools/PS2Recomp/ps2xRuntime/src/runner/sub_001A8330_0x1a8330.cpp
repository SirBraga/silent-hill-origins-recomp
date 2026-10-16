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

// Function: sub_001A8330
// Address: 0x1a8330 - 0x1a8708
void sub_001A8330_0x1a8330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8330_0x1a8330");
#endif

    switch (ctx->pc) {
        case 0x1a8430u: goto label_1a8430;
        case 0x1a84b8u: goto label_1a84b8;
        case 0x1a85a8u: goto label_1a85a8;
        case 0x1a85b8u: goto label_1a85b8;
        case 0x1a85c8u: goto label_1a85c8;
        case 0x1a866cu: goto label_1a866c;
        case 0x1a8698u: goto label_1a8698;
        case 0x1a86a4u: goto label_1a86a4;
        case 0x1a86b0u: goto label_1a86b0;
        default: break;
    }

    ctx->pc = 0x1a8330u;

    // 0x1a8330: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1a8330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1a8334: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1a8334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x1a8338: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1a8338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x1a833c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a833cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8340: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x1a8340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x1a8344: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a8344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8348: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x1a8348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x1a834c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a834cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8350: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x1a8350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x1a8354: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1a8354u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8358: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1a8358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x1a835c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1a835cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8360: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1a8360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x1a8364: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x1a8364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x1a8368: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x1a8368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x1a836c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1a8370: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x1a8370u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1a8374: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1a8374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1a8378: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x1a8378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a837c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1a837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8380: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x1a8380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8384: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x1a8384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8388: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a8388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a838c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1a838cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a8390: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1a8390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a8394: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a8394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a8398: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a8398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a839c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a839cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a83a0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1a83a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a83a4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1a83a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a83a8: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x1a83a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a83ac: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x1a83acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a83b0: 0xb3a6002f  sdl         $a2, 0x2F($sp)
    ctx->pc = 0x1a83b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a83b4: 0xb7a60028  sdr         $a2, 0x28($sp)
    ctx->pc = 0x1a83b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a83b8: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1A83B8u;
    {
        const bool branch_taken_0x1a83b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A83BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83B8u;
        // 0x1a83bc: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83b8) {
            ctx->pc = 0x1A83F8u;
            goto label_1a83f8;
        }
    }
    ctx->pc = 0x1A83C0u;
    // 0x1a83c0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1a83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1a83c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A83C4u;
    {
        const bool branch_taken_0x1a83c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83C4u;
        // 0x1a83c8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83c4) {
            ctx->pc = 0x1A83F8u;
            goto label_1a83f8;
        }
    }
    ctx->pc = 0x1A83CCu;
    // 0x1a83cc: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1a83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a83d0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a83d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a83d4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A83D4u;
    {
        const bool branch_taken_0x1a83d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a83d4) {
            ctx->pc = 0x1A83D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A83D4u;
            // 0x1a83d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A83DCu;
            goto label_1a83dc;
        }
    }
    ctx->pc = 0x1A83DCu;
label_1a83dc:
    // 0x1a83dc: 0x2012  mflo        $a0
    ctx->pc = 0x1a83dcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a83e0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A83E0u;
    {
        const bool branch_taken_0x1a83e0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1A83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83E0u;
        // 0x1a83e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83e0) {
            ctx->pc = 0x1A83FCu;
            goto label_1a83fc;
        }
    }
    ctx->pc = 0x1A83E8u;
    // 0x1a83e8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1a83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1a83ec: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1a83ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a83f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A83F0u;
    {
        const bool branch_taken_0x1a83f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83F0u;
        // 0x1a83f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83f0) {
            ctx->pc = 0x1A83FCu;
            goto label_1a83fc;
        }
    }
    ctx->pc = 0x1A83F8u;
label_1a83f8:
    // 0x1a83f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a83f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a83fc:
    // 0x1a83fc: 0xa7a20070  sh          $v0, 0x70($sp)
    ctx->pc = 0x1a83fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a8400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8404: 0x126200ad  beq         $s3, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x1A8404u;
    {
        const bool branch_taken_0x1a8404 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8404u;
        // 0x1a8408: 0x27b60028  addiu       $s6, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8404) {
            ctx->pc = 0x1A86BCu;
            goto label_1a86bc;
        }
    }
    ctx->pc = 0x1A840Cu;
    // 0x1a840c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a840cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1a8410: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a8410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a8414: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a8414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a8418: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1a8418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a841c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1a841cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1a8420: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a8420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a8424: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a8424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a8428: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x1a8428u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a842c: 0x0  nop
    ctx->pc = 0x1a842cu;
    // NOP
label_1a8430:
    // 0x1a8430: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1a8430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a8434: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1a8434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a8438: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x1a8438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a843c: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x1a843cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8440: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1a8440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1a8444: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1a8444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1a8448: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a8448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a844c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1a844cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8450: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1a8450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8454: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1a8454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8458: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a8458u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a845c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1a845cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a8460: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x1a8460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8464: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1a8464u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1a8468: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1a8468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a846c: 0x6ba60067  ldl         $a2, 0x67($sp)
    ctx->pc = 0x1a846cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a8470: 0x6fa60060  ldr         $a2, 0x60($sp)
    ctx->pc = 0x1a8470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a8474: 0xb3a60057  sdl         $a2, 0x57($sp)
    ctx->pc = 0x1a8474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8478: 0xb7a60050  sdr         $a2, 0x50($sp)
    ctx->pc = 0x1a8478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a847c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1a847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8480: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1a8480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8484: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a8484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a8488: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a8488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a848c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a848cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a8490: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1a8490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8494: 0x0  nop
    ctx->pc = 0x1a8494u;
    // NOP
    // 0x1a8498: 0x45000088  bc1f        . + 4 + (0x88 << 2)
    ctx->pc = 0x1A8498u;
    {
        const bool branch_taken_0x1a8498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8498u;
        // 0x1a849c: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8498) {
            ctx->pc = 0x1A86BCu;
            goto label_1a86bc;
        }
    }
    ctx->pc = 0x1A84A0u;
    // 0x1a84a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a84a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a84a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84a8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1a84a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a84ac: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1a84acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a84b0: 0xc069cd6  jal         func_1A7358
    ctx->pc = 0x1A84B0u;
    SET_GPR_U32(ctx, 31, 0x1A84B8u);
    ctx->pc = 0x1A84B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84B0u;
    // 0x1a84b4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7358u, 0x1A84B0u, 0x1A84B8u)) {
        return;
    }
    ctx->pc = 0x1A84B8u;
label_1a84b8:
    // 0x1a84b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a84b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a84c0: 0x1662006c  bne         $s3, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1A84C0u;
    {
        const bool branch_taken_0x1a84c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84C0u;
        // 0x1a84c4: 0x97a30070  lhu         $v1, 0x70($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84c0) {
            ctx->pc = 0x1A8674u;
            goto label_1a8674;
        }
    }
    ctx->pc = 0x1A84C8u;
    // 0x1a84c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a84c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a84cc: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1A84CCu;
    {
        const bool branch_taken_0x1a84cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84CCu;
        // 0x1a84d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84cc) {
            ctx->pc = 0x1A85B0u;
            goto label_1a85b0;
        }
    }
    ctx->pc = 0x1A84D4u;
    // 0x1a84d4: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1a84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1a84d8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A84D8u;
    {
        const bool branch_taken_0x1a84d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a84d8) {
            ctx->pc = 0x1A84DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A84D8u;
            // 0x1a84dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8500u;
            goto label_1a8500;
        }
    }
    ctx->pc = 0x1A84E0u;
    // 0x1a84e0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1a84e4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a84e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a84e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A84E8u;
    {
        const bool branch_taken_0x1a84e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84E8u;
        // 0x1a84ec: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84e8) {
            ctx->pc = 0x1A84F8u;
            goto label_1a84f8;
        }
    }
    ctx->pc = 0x1A84F0u;
    // 0x1a84f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A84F0u;
    {
        const bool branch_taken_0x1a84f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84F0u;
        // 0x1a84f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84f0) {
            ctx->pc = 0x1A8500u;
            goto label_1a8500;
        }
    }
    ctx->pc = 0x1A84F8u;
label_1a84f8:
    // 0x1a84f8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x1a84f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a84fc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1a84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1a8500:
    // 0x1a8500: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x1a8500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a8504: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x1a8504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a8508: 0xb3a60087  sdl         $a2, 0x87($sp)
    ctx->pc = 0x1a8508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a850c: 0xb7a60080  sdr         $a2, 0x80($sp)
    ctx->pc = 0x1a850cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8510: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a8510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8518: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1a8518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a851c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1a851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8520: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1a8520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8524: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x1a8524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a8528: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a8528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a852c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a852cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a8530: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1a8530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a8534: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1a8534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1a8538: 0x6ba60087  ldl         $a2, 0x87($sp)
    ctx->pc = 0x1a8538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a853c: 0x6fa60080  ldr         $a2, 0x80($sp)
    ctx->pc = 0x1a853cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a8540: 0xb3a60057  sdl         $a2, 0x57($sp)
    ctx->pc = 0x1a8540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8544: 0xb7a60050  sdr         $a2, 0x50($sp)
    ctx->pc = 0x1a8544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8548: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1a8548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a854c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1a854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8550: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1a8550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a8554: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1a8554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1a8558: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a8558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a855c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1a855cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a8560: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x1a8560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a8564: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x1a8564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a8568: 0xb3a60097  sdl         $a2, 0x97($sp)
    ctx->pc = 0x1a8568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a856c: 0xb7a60090  sdr         $a2, 0x90($sp)
    ctx->pc = 0x1a856cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8570: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1a8570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8574: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1a8574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8578: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1a8578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a857c: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x1a857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a8580: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a8580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a8584: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a8584u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1a8588: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1a8588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a858c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1a858cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1a8590: 0x6ba60097  ldl         $a2, 0x97($sp)
    ctx->pc = 0x1a8590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a8594: 0x6fa60090  ldr         $a2, 0x90($sp)
    ctx->pc = 0x1a8594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a8598: 0xb3a60087  sdl         $a2, 0x87($sp)
    ctx->pc = 0x1a8598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a859c: 0xb7a60080  sdr         $a2, 0x80($sp)
    ctx->pc = 0x1a859cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a85a0: 0xc0695f0  jal         func_1A57C0
    ctx->pc = 0x1A85A0u;
    SET_GPR_U32(ctx, 31, 0x1A85A8u);
    ctx->pc = 0x1A85A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85A0u;
    // 0x1a85a4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A57C0u, 0x1A85A0u, 0x1A85A8u)) {
        return;
    }
    ctx->pc = 0x1A85A8u;
label_1a85a8:
    // 0x1a85a8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1A85A8u;
    {
        const bool branch_taken_0x1a85a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85A8u;
        // 0x1a85ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85a8) {
            ctx->pc = 0x1A86B4u;
            goto label_1a86b4;
        }
    }
    ctx->pc = 0x1A85B0u;
label_1a85b0:
    // 0x1a85b0: 0xc0695f0  jal         func_1A57C0
    ctx->pc = 0x1A85B0u;
    SET_GPR_U32(ctx, 31, 0x1A85B8u);
    ctx->pc = 0x1A85B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85B0u;
    // 0x1a85b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A57C0u, 0x1A85B0u, 0x1A85B8u)) {
        return;
    }
    ctx->pc = 0x1A85B8u;
label_1a85b8:
    // 0x1a85b8: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x1a85b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a85bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a85bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85c0: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1A85C0u;
    SET_GPR_U32(ctx, 31, 0x1A85C8u);
    ctx->pc = 0x1A85C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85C0u;
    // 0x1a85c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A78A8u, 0x1A85C0u, 0x1A85C8u)) {
        return;
    }
    ctx->pc = 0x1A85C8u;
label_1a85c8:
    // 0x1a85c8: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x1a85c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a85cc: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x1a85ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a85d0: 0xb3a40087  sdl         $a0, 0x87($sp)
    ctx->pc = 0x1a85d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a85d4: 0xb7a40080  sdr         $a0, 0x80($sp)
    ctx->pc = 0x1a85d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a85d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a85d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85dc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1a85dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a85e0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a85e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a85e4: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x1a85e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a85e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a85e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a85ec: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x1a85ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a85f0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1a85f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a85f4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1a85f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1a85f8: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x1a85f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1a85fc: 0x6ba20087  ldl         $v0, 0x87($sp)
    ctx->pc = 0x1a85fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a8600: 0x6fa20080  ldr         $v0, 0x80($sp)
    ctx->pc = 0x1a8600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a8604: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x1a8604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8608: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x1a8608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a860c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1a860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8610: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1a8610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8614: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a8614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a8618: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1a8618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1a861c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a861cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a8620: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1a8620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a8624: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1a8624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a8628: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1a8628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a862c: 0xb3a20097  sdl         $v0, 0x97($sp)
    ctx->pc = 0x1a862cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8630: 0xb7a20090  sdr         $v0, 0x90($sp)
    ctx->pc = 0x1a8630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8634: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1a8634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8638: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1a8638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a863c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1a863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8640: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x1a8640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a8644: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a8644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a8648: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a8648u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1a864c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1a864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a8650: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1a8650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1a8654: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1a8654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a8658: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1a8658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a865c: 0xb3a20087  sdl         $v0, 0x87($sp)
    ctx->pc = 0x1a865cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8660: 0xb7a20080  sdr         $v0, 0x80($sp)
    ctx->pc = 0x1a8660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8664: 0xc0695f6  jal         func_1A57D8
    ctx->pc = 0x1A8664u;
    SET_GPR_U32(ctx, 31, 0x1A866Cu);
    ctx->pc = 0x1A8668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8664u;
    // 0x1a8668: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A57D8u, 0x1A8664u, 0x1A866Cu)) {
        return;
    }
    ctx->pc = 0x1A866Cu;
label_1a866c:
    // 0x1a866c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A866Cu;
    {
        const bool branch_taken_0x1a866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A866Cu;
        // 0x1a8670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a866c) {
            ctx->pc = 0x1A86B4u;
            goto label_1a86b4;
        }
    }
    ctx->pc = 0x1A8674u;
label_1a8674:
    // 0x1a8674: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1A8674u;
    {
        const bool branch_taken_0x1a8674 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8674u;
        // 0x1a8678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8674) {
            ctx->pc = 0x1A86B4u;
            goto label_1a86b4;
        }
    }
    ctx->pc = 0x1A867Cu;
    // 0x1a867c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a867cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8680: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1a8680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a8684: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1a8684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a8688: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x1a8688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a868c: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x1a868cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8690: 0xc069edc  jal         func_1A7B70
    ctx->pc = 0x1A8690u;
    SET_GPR_U32(ctx, 31, 0x1A8698u);
    ctx->pc = 0x1A8694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8690u;
    // 0x1a8694: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7B70u, 0x1A8690u, 0x1A8698u)) {
        return;
    }
    ctx->pc = 0x1A8698u;
label_1a8698:
    // 0x1a8698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a869c: 0xc0695f0  jal         func_1A57C0
    ctx->pc = 0x1A869Cu;
    SET_GPR_U32(ctx, 31, 0x1A86A4u);
    ctx->pc = 0x1A86A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A869Cu;
    // 0x1a86a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A57C0u, 0x1A869Cu, 0x1A86A4u)) {
        return;
    }
    ctx->pc = 0x1A86A4u;
label_1a86a4:
    // 0x1a86a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a86a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86a8: 0xc0695f6  jal         func_1A57D8
    ctx->pc = 0x1A86A8u;
    SET_GPR_U32(ctx, 31, 0x1A86B0u);
    ctx->pc = 0x1A86ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86A8u;
    // 0x1a86ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A57D8u, 0x1A86A8u, 0x1A86B0u)) {
        return;
    }
    ctx->pc = 0x1A86B0u;
label_1a86b0:
    // 0x1a86b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a86b4:
    // 0x1a86b4: 0x1662ff5e  bne         $s3, $v0, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x1A86B4u;
    {
        const bool branch_taken_0x1a86b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a86b4) {
            ctx->pc = 0x1A8430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8430;
        }
    }
    ctx->pc = 0x1A86BCu;
label_1a86bc:
    // 0x1a86bc: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x1a86bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a86c0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a86c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a86c4: 0xafd20000  sw          $s2, 0x0($fp)
    ctx->pc = 0x1a86c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 18));
    // 0x1a86c8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x1a86c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x1a86cc: 0xe6e10000  swc1        $f1, 0x0($s7)
    ctx->pc = 0x1a86ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1a86d0: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1a86d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a86d4: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1a86d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a86d8: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1a86d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a86dc: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1a86dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a86e0: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1a86e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a86e4: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1a86e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a86e8: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x1a86e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a86ec: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x1a86ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a86f0: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x1a86f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a86f4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a86f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a86f8: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1a86f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a86fc: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1a86fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a8700: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8700u;
        // 0x1a8704: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8708u;
}
