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

// Function: sub_00220310
// Address: 0x220310 - 0x220820
void sub_00220310_0x220310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220310_0x220310");
#endif

    switch (ctx->pc) {
        case 0x220380u: goto label_220380;
        case 0x2205f0u: goto label_2205f0;
        case 0x2206b8u: goto label_2206b8;
        case 0x2206dcu: goto label_2206dc;
        case 0x220700u: goto label_220700;
        case 0x220724u: goto label_220724;
        case 0x220748u: goto label_220748;
        case 0x22076cu: goto label_22076c;
        case 0x220790u: goto label_220790;
        case 0x2207b4u: goto label_2207b4;
        default: break;
    }

    ctx->pc = 0x220310u;

    // 0x220310: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x220310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x220314: 0x3c013fb5  lui         $at, 0x3FB5
    ctx->pc = 0x220314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16309 << 16));
    // 0x220318: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x220318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x22031c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x22031cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x220320: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x220320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x220324: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x220324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x220328: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x220328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22032c: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x22032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x220330: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x220330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220334: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x220334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x220338: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x220338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x22033c: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x22033cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220340: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x220340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x220344: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x220344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220348: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x220348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x22034c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x22034cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220350: 0xe7bc01b0  swc1        $f28, 0x1B0($sp)
    ctx->pc = 0x220350u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x220354: 0xe7bb01a8  swc1        $f27, 0x1A8($sp)
    ctx->pc = 0x220354u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x220358: 0xe7ba01a0  swc1        $f26, 0x1A0($sp)
    ctx->pc = 0x220358u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x22035c: 0xe7b90198  swc1        $f25, 0x198($sp)
    ctx->pc = 0x22035cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x220360: 0xe7b80190  swc1        $f24, 0x190($sp)
    ctx->pc = 0x220360u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x220364: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x220364u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x220368: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x220368u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x22036c: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x22036cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x220370: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x220370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x220374: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x220374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x220378: 0x8caa0050  lw          $t2, 0x50($a1)
    ctx->pc = 0x220378u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x22037c: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x22037cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_220380:
    // 0x220380: 0x85020010  lh          $v0, 0x10($t0)
    ctx->pc = 0x220380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x220384: 0x95040010  lhu         $a0, 0x10($t0)
    ctx->pc = 0x220384u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x220388: 0x95090020  lhu         $t1, 0x20($t0)
    ctx->pc = 0x220388u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x22038c: 0x95050030  lhu         $a1, 0x30($t0)
    ctx->pc = 0x22038cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x220390: 0x950b0040  lhu         $t3, 0x40($t0)
    ctx->pc = 0x220390u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x220394: 0x95060050  lhu         $a2, 0x50($t0)
    ctx->pc = 0x220394u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x220398: 0x95030060  lhu         $v1, 0x60($t0)
    ctx->pc = 0x220398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x22039c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22039Cu;
    {
        const bool branch_taken_0x22039c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2203A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22039Cu;
        // 0x2203a0: 0x95070070  lhu         $a3, 0x70($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22039c) {
            ctx->pc = 0x220418u;
            goto label_220418;
        }
    }
    ctx->pc = 0x2203A4u;
    // 0x2203a4: 0x5520001d  bnel        $t1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2203A4u;
    {
        const bool branch_taken_0x2203a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2203a4) {
            ctx->pc = 0x2203A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2203A4u;
            // 0x2203a8: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22041Cu;
            goto label_22041c;
        }
    }
    ctx->pc = 0x2203ACu;
    // 0x2203ac: 0x54a0001b  bnel        $a1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2203ACu;
    {
        const bool branch_taken_0x2203ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2203ac) {
            ctx->pc = 0x2203B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2203ACu;
            // 0x2203b0: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22041Cu;
            goto label_22041c;
        }
    }
    ctx->pc = 0x2203B4u;
    // 0x2203b4: 0x15600019  bnez        $t3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2203B4u;
    {
        const bool branch_taken_0x2203b4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2203B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203B4u;
        // 0x2203b8: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203b4) {
            ctx->pc = 0x22041Cu;
            goto label_22041c;
        }
    }
    ctx->pc = 0x2203BCu;
    // 0x2203bc: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2203BCu;
    {
        const bool branch_taken_0x2203bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2203bc) {
            ctx->pc = 0x22041Cu;
            goto label_22041c;
        }
    }
    ctx->pc = 0x2203C4u;
    // 0x2203c4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2203C4u;
    {
        const bool branch_taken_0x2203c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2203C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203C4u;
        // 0x2203c8: 0x31c00  sll         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203c4) {
            ctx->pc = 0x220420u;
            goto label_220420;
        }
    }
    ctx->pc = 0x2203CCu;
    // 0x2203cc: 0x14e00014  bnez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2203CCu;
    {
        const bool branch_taken_0x2203cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2203cc) {
            ctx->pc = 0x220420u;
            goto label_220420;
        }
    }
    ctx->pc = 0x2203D4u;
    // 0x2203d4: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x2203d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2203d8: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x2203d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2203dc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2203dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2203e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2203e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2203e4: 0x0  nop
    ctx->pc = 0x2203e4u;
    // NOP
    // 0x2203e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2203e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2203ec: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2203ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2203f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2203f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2203f4: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x2203f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x2203f8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2203f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2203fc: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2203fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x220400: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x220400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x220404: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x220404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x220408: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x220408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x22040c: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x22040cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x220410: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x220410u;
    {
        const bool branch_taken_0x220410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220410u;
        // 0x220414: 0xe62000c0  swc1        $f0, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220410) {
            ctx->pc = 0x2205C8u;
            goto label_2205c8;
        }
    }
    ctx->pc = 0x220418u;
label_220418:
    // 0x220418: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x220418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_22041c:
    // 0x22041c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x22041cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_220420:
    // 0x220420: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x220420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x220424: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x220424u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x220428: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x220428u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x22042c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x22042cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x220430: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x220430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x220434: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x220434u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x220438: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x220438u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x22043c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x22043cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x220440: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x220440u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x220444: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x220444u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x220448: 0x44825000  mtc1        $v0, $f10
    ctx->pc = 0x220448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x22044c: 0x0  nop
    ctx->pc = 0x22044cu;
    // NOP
    // 0x220450: 0x468052a0  cvt.s.w     $f10, $f10
    ctx->pc = 0x220450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[10], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x220454: 0xc5420040  lwc1        $f2, 0x40($t2)
    ctx->pc = 0x220454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220458: 0x44835800  mtc1        $v1, $f11
    ctx->pc = 0x220458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x22045c: 0x0  nop
    ctx->pc = 0x22045cu;
    // NOP
    // 0x220460: 0x46805ae0  cvt.s.w     $f11, $f11
    ctx->pc = 0x220460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[11], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x220464: 0xc54300c0  lwc1        $f3, 0xC0($t2)
    ctx->pc = 0x220464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x220468: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x220468u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x22046c: 0x0  nop
    ctx->pc = 0x22046cu;
    // NOP
    // 0x220470: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x220470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x220474: 0xc5400020  lwc1        $f0, 0x20($t2)
    ctx->pc = 0x220474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220478: 0x44853800  mtc1        $a1, $f7
    ctx->pc = 0x220478u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x22047c: 0x0  nop
    ctx->pc = 0x22047cu;
    // NOP
    // 0x220480: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x220480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x220484: 0xc5410060  lwc1        $f1, 0x60($t2)
    ctx->pc = 0x220484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220488: 0x44864000  mtc1        $a2, $f8
    ctx->pc = 0x220488u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x22048c: 0x0  nop
    ctx->pc = 0x22048cu;
    // NOP
    // 0x220490: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x220490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x220494: 0xc54400a0  lwc1        $f4, 0xA0($t2)
    ctx->pc = 0x220494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x220498: 0x44874800  mtc1        $a3, $f9
    ctx->pc = 0x220498u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x22049c: 0x0  nop
    ctx->pc = 0x22049cu;
    // NOP
    // 0x2204a0: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x2204a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x2204a4: 0xc54500e0  lwc1        $f5, 0xE0($t2)
    ctx->pc = 0x2204a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2204a8: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x2204a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2204ac: 0x46025602  mul.s       $f24, $f10, $f2
    ctx->pc = 0x2204acu;
    ctx->f[24] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x2204b0: 0x46035ec2  mul.s       $f27, $f11, $f3
    ctx->pc = 0x2204b0u;
    ctx->f[27] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x2204b4: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x2204b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x2204b8: 0x46003682  mul.s       $f26, $f6, $f0
    ctx->pc = 0x2204b8u;
    ctx->f[26] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2204bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2204bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2204c0: 0x46013dc2  mul.s       $f23, $f7, $f1
    ctx->pc = 0x2204c0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2204c4: 0xc5460000  lwc1        $f6, 0x0($t2)
    ctx->pc = 0x2204c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2204c8: 0x46044582  mul.s       $f22, $f8, $f4
    ctx->pc = 0x2204c8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x2204cc: 0x3c013fec  lui         $at, 0x3FEC
    ctx->pc = 0x2204ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16364 << 16));
    // 0x2204d0: 0x3421835e  ori         $at, $at, 0x835E
    ctx->pc = 0x2204d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33630);
    // 0x2204d4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2204d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2204d8: 0x46054d42  mul.s       $f21, $f9, $f5
    ctx->pc = 0x2204d8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x2204dc: 0x3c01c027  lui         $at, 0xC027
    ctx->pc = 0x2204dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49191 << 16));
    // 0x2204e0: 0x34213d75  ori         $at, $at, 0x3D75
    ctx->pc = 0x2204e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15733);
    // 0x2204e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2204e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2204e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2204e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2204ec: 0x0  nop
    ctx->pc = 0x2204ecu;
    // NOP
    // 0x2204f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2204f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2204f4: 0xc5450080  lwc1        $f5, 0x80($t2)
    ctx->pc = 0x2204f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2204f8: 0x4617b341  sub.s       $f13, $f22, $f23
    ctx->pc = 0x2204f8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x2204fc: 0x3c013f8a  lui         $at, 0x3F8A
    ctx->pc = 0x2204fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16266 << 16));
    // 0x220500: 0x34218bd4  ori         $at, $at, 0x8BD4
    ctx->pc = 0x220500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35796);
    // 0x220504: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x220504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x220508: 0x4615d3c1  sub.s       $f15, $f26, $f21
    ctx->pc = 0x220508u;
    ctx->f[15] = FPU_SUB_S(ctx->f[26], ctx->f[21]);
    // 0x22050c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x22050cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x220510: 0x461bc041  sub.s       $f1, $f24, $f27
    ctx->pc = 0x220510u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[27]);
    // 0x220514: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x220514u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x220518: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x220518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22051c: 0x0  nop
    ctx->pc = 0x22051cu;
    // NOP
    // 0x220520: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x220520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x220524: 0x46060502  mul.s       $f20, $f0, $f6
    ctx->pc = 0x220524u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x220528: 0x461bc380  add.s       $f14, $f24, $f27
    ctx->pc = 0x220528u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
    // 0x22052c: 0x46051e42  mul.s       $f25, $f3, $f5
    ctx->pc = 0x22052cu;
    ctx->f[25] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x220530: 0x46100842  mul.s       $f1, $f1, $f16
    ctx->pc = 0x220530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[16]);
    // 0x220534: 0x460f6800  add.s       $f0, $f13, $f15
    ctx->pc = 0x220534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x220538: 0x4619a2c1  sub.s       $f11, $f20, $f25
    ctx->pc = 0x220538u;
    ctx->f[11] = FPU_SUB_S(ctx->f[20], ctx->f[25]);
    // 0x22053c: 0x460e0a81  sub.s       $f10, $f1, $f14
    ctx->pc = 0x22053cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[14]);
    // 0x220540: 0x46070142  mul.s       $f5, $f0, $f7
    ctx->pc = 0x220540u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x220544: 0x4617b300  add.s       $f12, $f22, $f23
    ctx->pc = 0x220544u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x220548: 0x4615d1c0  add.s       $f7, $f26, $f21
    ctx->pc = 0x220548u;
    ctx->f[7] = FPU_ADD_S(ctx->f[26], ctx->f[21]);
    // 0x22054c: 0x46026882  mul.s       $f2, $f13, $f2
    ctx->pc = 0x22054cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x220550: 0x4619a180  add.s       $f6, $f20, $f25
    ctx->pc = 0x220550u;
    ctx->f[6] = FPU_ADD_S(ctx->f[20], ctx->f[25]);
    // 0x220554: 0x460a5e41  sub.s       $f25, $f11, $f10
    ctx->pc = 0x220554u;
    ctx->f[25] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
    // 0x220558: 0x460a5e00  add.s       $f24, $f11, $f10
    ctx->pc = 0x220558u;
    ctx->f[24] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x22055c: 0x46051280  add.s       $f10, $f2, $f5
    ctx->pc = 0x22055cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x220560: 0x460c3d40  add.s       $f21, $f7, $f12
    ctx->pc = 0x220560u;
    ctx->f[21] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x220564: 0x460c3801  sub.s       $f0, $f7, $f12
    ctx->pc = 0x220564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x220568: 0x46047902  mul.s       $f4, $f15, $f4
    ctx->pc = 0x220568u;
    ctx->f[4] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
    // 0x22056c: 0x46155581  sub.s       $f22, $f10, $f21
    ctx->pc = 0x22056cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[10], ctx->f[21]);
    // 0x220570: 0x461002c2  mul.s       $f11, $f0, $f16
    ctx->pc = 0x220570u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x220574: 0x460e36c1  sub.s       $f27, $f6, $f14
    ctx->pc = 0x220574u;
    ctx->f[27] = FPU_SUB_S(ctx->f[6], ctx->f[14]);
    // 0x220578: 0x460e3500  add.s       $f20, $f6, $f14
    ctx->pc = 0x220578u;
    ctx->f[20] = FPU_ADD_S(ctx->f[6], ctx->f[14]);
    // 0x22057c: 0x46165dc1  sub.s       $f23, $f11, $f22
    ctx->pc = 0x22057cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[11], ctx->f[22]);
    // 0x220580: 0x46052181  sub.s       $f6, $f4, $f5
    ctx->pc = 0x220580u;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x220584: 0x4615a001  sub.s       $f0, $f20, $f21
    ctx->pc = 0x220584u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x220588: 0x4616c041  sub.s       $f1, $f24, $f22
    ctx->pc = 0x220588u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
    // 0x22058c: 0x46173680  add.s       $f26, $f6, $f23
    ctx->pc = 0x22058cu;
    ctx->f[26] = FPU_ADD_S(ctx->f[6], ctx->f[23]);
    // 0x220590: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x220590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x220594: 0x4617c881  sub.s       $f2, $f25, $f23
    ctx->pc = 0x220594u;
    ctx->f[2] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x220598: 0xe62100c0  swc1        $f1, 0xC0($s1)
    ctx->pc = 0x220598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    // 0x22059c: 0x4615a0c0  add.s       $f3, $f20, $f21
    ctx->pc = 0x22059cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2205a0: 0x461ad901  sub.s       $f4, $f27, $f26
    ctx->pc = 0x2205a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[27], ctx->f[26]);
    // 0x2205a4: 0x4616c140  add.s       $f5, $f24, $f22
    ctx->pc = 0x2205a4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    // 0x2205a8: 0xe62200a0  swc1        $f2, 0xA0($s1)
    ctx->pc = 0x2205a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x2205ac: 0x4617c840  add.s       $f1, $f25, $f23
    ctx->pc = 0x2205acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
    // 0x2205b0: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x2205b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2205b4: 0x461ad800  add.s       $f0, $f27, $f26
    ctx->pc = 0x2205b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[26]);
    // 0x2205b8: 0xe6240060  swc1        $f4, 0x60($s1)
    ctx->pc = 0x2205b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x2205bc: 0xe6250020  swc1        $f5, 0x20($s1)
    ctx->pc = 0x2205bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2205c0: 0xe6210040  swc1        $f1, 0x40($s1)
    ctx->pc = 0x2205c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x2205c4: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2205c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_2205c8:
    // 0x2205c8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2205c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2205cc: 0x1e80ff6c  bgtz        $s4, . + 4 + (-0x94 << 2)
    ctx->pc = 0x2205CCu;
    {
        const bool branch_taken_0x2205cc = (GPR_S64(ctx, 20) > 0);
        ctx->pc = 0x2205D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205CCu;
        // 0x2205d0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205cc) {
            ctx->pc = 0x220380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220380;
        }
    }
    ctx->pc = 0x2205D4u;
    // 0x2205d4: 0x3c013fb5  lui         $at, 0x3FB5
    ctx->pc = 0x2205d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16309 << 16));
    // 0x2205d8: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x2205d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
    // 0x2205dc: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x2205dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x2205e0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2205e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205e4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2205e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205e8: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x2205e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2205ec: 0x0  nop
    ctx->pc = 0x2205ecu;
    // NOP
label_2205f0:
    // 0x2205f0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2205f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2205f4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2205f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2205f8: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2205f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2205fc: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x2205fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x220600: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x220600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x220604: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x220604u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x220608: 0xc626001c  lwc1        $f6, 0x1C($s1)
    ctx->pc = 0x220608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22060c: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x22060cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x220610: 0xc6270004  lwc1        $f7, 0x4($s1)
    ctx->pc = 0x220610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x220614: 0x46032341  sub.s       $f13, $f4, $f3
    ctx->pc = 0x220614u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x220618: 0x461c1082  mul.s       $f2, $f2, $f28
    ctx->pc = 0x220618u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[28]);
    // 0x22061c: 0xc6290000  lwc1        $f9, 0x0($s1)
    ctx->pc = 0x22061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x220620: 0x46063bc1  sub.s       $f15, $f7, $f6
    ctx->pc = 0x220620u;
    ctx->f[15] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x220624: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x220624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x220628: 0x3c013fec  lui         $at, 0x3FEC
    ctx->pc = 0x220628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16364 << 16));
    // 0x22062c: 0x3421835e  ori         $at, $at, 0x835E
    ctx->pc = 0x22062cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33630);
    // 0x220630: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x220630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x220634: 0x46032300  add.s       $f12, $f4, $f3
    ctx->pc = 0x220634u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x220638: 0x3c01c027  lui         $at, 0xC027
    ctx->pc = 0x220638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49191 << 16));
    // 0x22063c: 0x34213d75  ori         $at, $at, 0x3D75
    ctx->pc = 0x22063cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15733);
    // 0x220640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x220640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220644: 0x46084ac1  sub.s       $f11, $f9, $f8
    ctx->pc = 0x220644u;
    ctx->f[11] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
    // 0x220648: 0x460f6840  add.s       $f1, $f13, $f15
    ctx->pc = 0x220648u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x22064c: 0x3c013f8a  lui         $at, 0x3F8A
    ctx->pc = 0x22064cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16266 << 16));
    // 0x220650: 0x34218bd4  ori         $at, $at, 0x8BD4
    ctx->pc = 0x220650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35796);
    // 0x220654: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x220654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x220658: 0x460e1281  sub.s       $f10, $f2, $f14
    ctx->pc = 0x220658u;
    ctx->f[10] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x22065c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x22065cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x220660: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x220660u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x220664: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x220664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x220668: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x220668u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x22066c: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x22066cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x220670: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x220670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x220674: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x220674u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x220678: 0x460a5e41  sub.s       $f25, $f11, $f10
    ctx->pc = 0x220678u;
    ctx->f[25] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
    // 0x22067c: 0x460a5e00  add.s       $f24, $f11, $f10
    ctx->pc = 0x22067cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x220680: 0x460c3d40  add.s       $f21, $f7, $f12
    ctx->pc = 0x220680u;
    ctx->f[21] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x220684: 0x460c3841  sub.s       $f1, $f7, $f12
    ctx->pc = 0x220684u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x220688: 0x46050280  add.s       $f10, $f0, $f5
    ctx->pc = 0x220688u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x22068c: 0x46084980  add.s       $f6, $f9, $f8
    ctx->pc = 0x22068cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x220690: 0x460378c2  mul.s       $f3, $f15, $f3
    ctx->pc = 0x220690u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x220694: 0x46155581  sub.s       $f22, $f10, $f21
    ctx->pc = 0x220694u;
    ctx->f[22] = FPU_SUB_S(ctx->f[10], ctx->f[21]);
    // 0x220698: 0x461c0ac2  mul.s       $f11, $f1, $f28
    ctx->pc = 0x220698u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
    // 0x22069c: 0x460e3500  add.s       $f20, $f6, $f14
    ctx->pc = 0x22069cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[6], ctx->f[14]);
    // 0x2206a0: 0x460e36c1  sub.s       $f27, $f6, $f14
    ctx->pc = 0x2206a0u;
    ctx->f[27] = FPU_SUB_S(ctx->f[6], ctx->f[14]);
    // 0x2206a4: 0x46165dc1  sub.s       $f23, $f11, $f22
    ctx->pc = 0x2206a4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[11], ctx->f[22]);
    // 0x2206a8: 0x46051981  sub.s       $f6, $f3, $f5
    ctx->pc = 0x2206a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x2206ac: 0x4615a300  add.s       $f12, $f20, $f21
    ctx->pc = 0x2206acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2206b0: 0xc0ca48c  jal         func_329230
    ctx->pc = 0x2206B0u;
    SET_GPR_U32(ctx, 31, 0x2206B8u);
    ctx->pc = 0x2206B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206B0u;
    // 0x2206b4: 0x46173680  add.s       $f26, $f6, $f23 (Delay Slot)
    ctx->f[26] = FPU_ADD_S(ctx->f[6], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x329230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329230u, 0x2206B0u, 0x2206B8u)) {
        return;
    }
    ctx->pc = 0x2206B8u;
label_2206b8:
    // 0x2206b8: 0x64420004  daddiu      $v0, $v0, 0x4
    ctx->pc = 0x2206b8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4);
    // 0x2206bc: 0x4615a301  sub.s       $f12, $f20, $f21
    ctx->pc = 0x2206bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x2206c0: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x2206c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x2206c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2206c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2206c8: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2206c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2206cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2206ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2206d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2206d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2206d4: 0xc0ca48c  jal         func_329230
    ctx->pc = 0x2206D4u;
    SET_GPR_U32(ctx, 31, 0x2206DCu);
    ctx->pc = 0x2206D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206D4u;
    // 0x2206d8: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329230u, 0x2206D4u, 0x2206DCu)) {
        return;
    }
    ctx->pc = 0x2206DCu;
label_2206dc:
    // 0x2206dc: 0x64420004  daddiu      $v0, $v0, 0x4
    ctx->pc = 0x2206dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4);
    // 0x2206e0: 0x4616c300  add.s       $f12, $f24, $f22
    ctx->pc = 0x2206e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    // 0x2206e4: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x2206e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x2206e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2206e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2206ec: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2206ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2206f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2206f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2206f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2206f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2206f8: 0xc0ca48c  jal         func_329230
    ctx->pc = 0x2206F8u;
    SET_GPR_U32(ctx, 31, 0x220700u);
    ctx->pc = 0x2206FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206F8u;
    // 0x2206fc: 0xa2030007  sb          $v1, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329230u, 0x2206F8u, 0x220700u)) {
        return;
    }
    ctx->pc = 0x220700u;
label_220700:
    // 0x220700: 0x64420004  daddiu      $v0, $v0, 0x4
    ctx->pc = 0x220700u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4);
    // 0x220704: 0x4616c301  sub.s       $f12, $f24, $f22
    ctx->pc = 0x220704u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
    // 0x220708: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x220708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x22070c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22070cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x220710: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x220710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x220714: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x220714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x220718: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x220718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22071c: 0xc0ca48c  jal         func_329230
    ctx->pc = 0x22071Cu;
    SET_GPR_U32(ctx, 31, 0x220724u);
    ctx->pc = 0x220720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22071Cu;
    // 0x220720: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329230u, 0x22071Cu, 0x220724u)) {
        return;
    }
    ctx->pc = 0x220724u;
label_220724:
    // 0x220724: 0x64420004  daddiu      $v0, $v0, 0x4
    ctx->pc = 0x220724u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4);
    // 0x220728: 0x4617cb00  add.s       $f12, $f25, $f23
    ctx->pc = 0x220728u;
    ctx->f[12] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
    // 0x22072c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x22072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x220730: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x220730u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x220734: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x220734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x220738: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x220738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22073c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22073cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220740: 0xc0ca48c  jal         func_329230
    ctx->pc = 0x220740u;
    SET_GPR_U32(ctx, 31, 0x220748u);
    ctx->pc = 0x220744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220740u;
    // 0x220744: 0xa2030006  sb          $v1, 0x6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329230u, 0x220740u, 0x220748u)) {
        return;
    }
    ctx->pc = 0x220748u;
label_220748:
    // 0x220748: 0x64420004  daddiu      $v0, $v0, 0x4
    ctx->pc = 0x220748u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4);
    // 0x22074c: 0x4617cb01  sub.s       $f12, $f25, $f23
    ctx->pc = 0x22074cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x220750: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x220750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x220754: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x220754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x220758: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x220758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x22075c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x22075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x220760: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x220760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220764: 0xc0ca48c  jal         func_329230
    ctx->pc = 0x220764u;
    SET_GPR_U32(ctx, 31, 0x22076Cu);
    ctx->pc = 0x220768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220764u;
    // 0x220768: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329230u, 0x220764u, 0x22076Cu)) {
        return;
    }
    ctx->pc = 0x22076Cu;
label_22076c:
    // 0x22076c: 0x64420004  daddiu      $v0, $v0, 0x4
    ctx->pc = 0x22076cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4);
    // 0x220770: 0x461adb00  add.s       $f12, $f27, $f26
    ctx->pc = 0x220770u;
    ctx->f[12] = FPU_ADD_S(ctx->f[27], ctx->f[26]);
    // 0x220774: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x220774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x220778: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x220778u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x22077c: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x22077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x220780: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x220780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x220784: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x220784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220788: 0xc0ca48c  jal         func_329230
    ctx->pc = 0x220788u;
    SET_GPR_U32(ctx, 31, 0x220790u);
    ctx->pc = 0x22078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220788u;
    // 0x22078c: 0xa2030005  sb          $v1, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329230u, 0x220788u, 0x220790u)) {
        return;
    }
    ctx->pc = 0x220790u;
label_220790:
    // 0x220790: 0x64420004  daddiu      $v0, $v0, 0x4
    ctx->pc = 0x220790u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4);
    // 0x220794: 0x461adb01  sub.s       $f12, $f27, $f26
    ctx->pc = 0x220794u;
    ctx->f[12] = FPU_SUB_S(ctx->f[27], ctx->f[26]);
    // 0x220798: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x220798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x22079c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22079cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2207a0: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2207a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2207a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2207a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2207a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2207a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2207ac: 0xc0ca48c  jal         func_329230
    ctx->pc = 0x2207ACu;
    SET_GPR_U32(ctx, 31, 0x2207B4u);
    ctx->pc = 0x2207B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2207ACu;
    // 0x2207b0: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329230u, 0x2207ACu, 0x2207B4u)) {
        return;
    }
    ctx->pc = 0x2207B4u;
label_2207b4:
    // 0x2207b4: 0x64420004  daddiu      $v0, $v0, 0x4
    ctx->pc = 0x2207b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4);
    // 0x2207b8: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x2207b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x2207bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2207bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2207c0: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2207c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2207c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2207c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2207c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2207c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2207cc: 0x681ff88  bgez        $s4, . + 4 + (-0x78 << 2)
    ctx->pc = 0x2207CCu;
    {
        const bool branch_taken_0x2207cc = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2207D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207CCu;
        // 0x2207d0: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207cc) {
            ctx->pc = 0x2205F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2205f0;
        }
    }
    ctx->pc = 0x2207D4u;
    // 0x2207d4: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x2207d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2207d8: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x2207d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2207dc: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x2207dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2207e0: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x2207e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2207e4: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x2207e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2207e8: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x2207e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2207ec: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2207ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2207f0: 0xc7bc01b0  lwc1        $f28, 0x1B0($sp)
    ctx->pc = 0x2207f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2207f4: 0xc7bb01a8  lwc1        $f27, 0x1A8($sp)
    ctx->pc = 0x2207f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2207f8: 0xc7ba01a0  lwc1        $f26, 0x1A0($sp)
    ctx->pc = 0x2207f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2207fc: 0xc7b90198  lwc1        $f25, 0x198($sp)
    ctx->pc = 0x2207fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x220800: 0xc7b80190  lwc1        $f24, 0x190($sp)
    ctx->pc = 0x220800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x220804: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x220804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x220808: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x220808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22080c: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x22080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x220810: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x220810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x220814: 0x3e00008  jr          $ra
    ctx->pc = 0x220814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220814u;
        // 0x220818: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22081Cu;
    // 0x22081c: 0x0  nop
    ctx->pc = 0x22081cu;
    // NOP
    ctx->pc = 0x220820u;
}
