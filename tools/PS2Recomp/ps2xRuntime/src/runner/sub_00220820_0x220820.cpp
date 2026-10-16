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

// Function: sub_00220820
// Address: 0x220820 - 0x220de8
void sub_00220820_0x220820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220820_0x220820");
#endif

    switch (ctx->pc) {
        case 0x220870u: goto label_220870;
        case 0x220b08u: goto label_220b08;
        default: break;
    }

    ctx->pc = 0x220820u;

    // 0x220820: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x220820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x220824: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x220824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x220828: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x220828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x22082c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x22082cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220830: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x220830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x220834: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x220834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220838: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x220838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x22083c: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x22083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x220840: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x220840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x220844: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x220844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x220848: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x220848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x22084c: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x22084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x220850: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x220850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x220854: 0xafa70100  sw          $a3, 0x100($sp)
    ctx->pc = 0x220854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 7));
    // 0x220858: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x220858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x22085c: 0x8cb60050  lw          $s6, 0x50($a1)
    ctx->pc = 0x22085cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x220860: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x220860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x220864: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x220864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220868: 0xafa80104  sw          $t0, 0x104($sp)
    ctx->pc = 0x220868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 8));
    // 0x22086c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x22086cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_220870:
    // 0x220870: 0x86a20010  lh          $v0, 0x10($s5)
    ctx->pc = 0x220870u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x220874: 0x96a80010  lhu         $t0, 0x10($s5)
    ctx->pc = 0x220874u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x220878: 0x96a40020  lhu         $a0, 0x20($s5)
    ctx->pc = 0x220878u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x22087c: 0x96a90030  lhu         $t1, 0x30($s5)
    ctx->pc = 0x22087cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x220880: 0x96a60040  lhu         $a2, 0x40($s5)
    ctx->pc = 0x220880u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x220884: 0x96aa0050  lhu         $t2, 0x50($s5)
    ctx->pc = 0x220884u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x220888: 0x96a30060  lhu         $v1, 0x60($s5)
    ctx->pc = 0x220888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x22088c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22088Cu;
    {
        const bool branch_taken_0x22088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22088Cu;
        // 0x220890: 0x96ab0070  lhu         $t3, 0x70($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22088c) {
            ctx->pc = 0x2208FCu;
            goto label_2208fc;
        }
    }
    ctx->pc = 0x220894u;
    // 0x220894: 0x5480001a  bnel        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x220894u;
    {
        const bool branch_taken_0x220894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x220894) {
            ctx->pc = 0x220898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220894u;
            // 0x220898: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220900u;
            goto label_220900;
        }
    }
    ctx->pc = 0x22089Cu;
    // 0x22089c: 0x55200018  bnel        $t1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x22089Cu;
    {
        const bool branch_taken_0x22089c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x22089c) {
            ctx->pc = 0x2208A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22089Cu;
            // 0x2208a0: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220900u;
            goto label_220900;
        }
    }
    ctx->pc = 0x2208A4u;
    // 0x2208a4: 0x14c00016  bnez        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2208A4u;
    {
        const bool branch_taken_0x2208a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2208A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208A4u;
        // 0x2208a8: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208a4) {
            ctx->pc = 0x220900u;
            goto label_220900;
        }
    }
    ctx->pc = 0x2208ACu;
    // 0x2208ac: 0x15400014  bnez        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2208ACu;
    {
        const bool branch_taken_0x2208ac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2208ac) {
            ctx->pc = 0x220900u;
            goto label_220900;
        }
    }
    ctx->pc = 0x2208B4u;
    // 0x2208b4: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2208B4u;
    {
        const bool branch_taken_0x2208b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2208b4) {
            ctx->pc = 0x2208B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2208B4u;
            // 0x2208b8: 0x8ec500c0  lw          $a1, 0xC0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220904u;
            goto label_220904;
        }
    }
    ctx->pc = 0x2208BCu;
    // 0x2208bc: 0x55600011  bnel        $t3, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2208BCu;
    {
        const bool branch_taken_0x2208bc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x2208bc) {
            ctx->pc = 0x2208C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2208BCu;
            // 0x2208c0: 0x8ec500c0  lw          $a1, 0xC0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220904u;
            goto label_220904;
        }
    }
    ctx->pc = 0x2208C4u;
    // 0x2208c4: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x2208c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2208c8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2208c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2208cc: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x2208ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x2208d0: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x2208d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x2208d4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2208d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2208d8: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x2208d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x2208dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2208dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2208e0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2208e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2208e4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2208e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2208e8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x2208e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x2208ec: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2208ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x2208f0: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x2208f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x2208f4: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2208F4u;
    {
        const bool branch_taken_0x2208f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208F4u;
        // 0x2208f8: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208f4) {
            ctx->pc = 0x220ADCu;
            goto label_220adc;
        }
    }
    ctx->pc = 0x2208FCu;
label_2208fc:
    // 0x2208fc: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2208fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_220900:
    // 0x220900: 0x8ec500c0  lw          $a1, 0xC0($s6)
    ctx->pc = 0x220900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
label_220904:
    // 0x220904: 0x8ec40040  lw          $a0, 0x40($s6)
    ctx->pc = 0x220904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x220908: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x220908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x22090c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x22090cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x220910: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x220910u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x220914: 0x449818  mult        $s3, $v0, $a0
    ctx->pc = 0x220914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x220918: 0x659018  mult        $s2, $v1, $a1
    ctx->pc = 0x220918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x22091c: 0x8ecc0020  lw          $t4, 0x20($s6)
    ctx->pc = 0x22091cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x220920: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x220920u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x220924: 0x8ecd0060  lw          $t5, 0x60($s6)
    ctx->pc = 0x220924u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x220928: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x220928u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x22092c: 0x8ece00e0  lw          $t6, 0xE0($s6)
    ctx->pc = 0x22092cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
    // 0x220930: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x220930u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x220934: 0x8ecf00a0  lw          $t7, 0xA0($s6)
    ctx->pc = 0x220934u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 160)));
    // 0x220938: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x220938u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x22093c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x22093cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x220940: 0x10cc018  mult        $t8, $t0, $t4
    ctx->pc = 0x220940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x220944: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x220944u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x220948: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x220948u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x22094c: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x22094cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x220950: 0x12dc818  mult        $t9, $t1, $t5
    ctx->pc = 0x220950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x220954: 0x16e8818  mult        $s1, $t3, $t6
    ctx->pc = 0x220954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x220958: 0x2726023  subu        $t4, $s3, $s2
    ctx->pc = 0x220958u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x22095c: 0x14f7818  mult        $t7, $t2, $t7
    ctx->pc = 0x22095cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x220960: 0x2403016a  addiu       $v1, $zero, 0x16A
    ctx->pc = 0x220960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
    // 0x220964: 0x1830018  mult        $zero, $t4, $v1
    ctx->pc = 0x220964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x220968: 0x8eca0000  lw          $t2, 0x0($s6)
    ctx->pc = 0x220968u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22096c: 0x86ad0000  lh          $t5, 0x0($s5)
    ctx->pc = 0x22096cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x220970: 0x8ec90080  lw          $t1, 0x80($s6)
    ctx->pc = 0x220970u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x220974: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x220974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x220978: 0x3112023  subu        $a0, $t8, $s1
    ctx->pc = 0x220978u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 17)));
    // 0x22097c: 0x1f97023  subu        $t6, $t7, $t9
    ctx->pc = 0x22097cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x220980: 0x1812  mflo        $v1
    ctx->pc = 0x220980u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x220984: 0x6010  mfhi        $t4
    ctx->pc = 0x220984u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x220988: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x220988u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x22098c: 0x240b01d9  addiu       $t3, $zero, 0x1D9
    ctx->pc = 0x22098cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
    // 0x220990: 0x2406fd63  addiu       $a2, $zero, -0x29D
    ctx->pc = 0x220990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966627));
    // 0x220994: 0x24070115  addiu       $a3, $zero, 0x115
    ctx->pc = 0x220994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
    // 0x220998: 0x1aa6818  mult        $t5, $t5, $t2
    ctx->pc = 0x220998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x22099c: 0x49a018  mult        $s4, $v0, $t1
    ctx->pc = 0x22099cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x2209a0: 0x1c45021  addu        $t2, $t6, $a0
    ctx->pc = 0x2209a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2209a4: 0x1f9f021  addu        $fp, $t7, $t9
    ctx->pc = 0x2209a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x2209a8: 0x14b0018  mult        $zero, $t2, $t3
    ctx->pc = 0x2209a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2209ac: 0x311c821  addu        $t9, $t8, $s1
    ctx->pc = 0x2209acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 17)));
    // 0x2209b0: 0x33e4023  subu        $t0, $t9, $fp
    ctx->pc = 0x2209b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x2209b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2209b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2209b8: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x2209b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x2209bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2209bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2209c0: 0x272b821  addu        $s7, $s3, $s2
    ctx->pc = 0x2209c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2209c4: 0x1012  mflo        $v0
    ctx->pc = 0x2209c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2209c8: 0x5010  mfhi        $t2
    ctx->pc = 0x2209c8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x2209cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2209ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2209d0: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x2209d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2209d4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2209d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2209d8: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x2209d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x2209dc: 0x1c60018  mult        $zero, $t6, $a2
    ctx->pc = 0x2209dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2209e0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x2209e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x2209e4: 0xc6638  dsll        $t4, $t4, 24
    ctx->pc = 0x2209e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 24);
    // 0x2209e8: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2209e8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2209ec: 0x1b45823  subu        $t3, $t5, $s4
    ctx->pc = 0x2209ecu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 20)));
    // 0x2209f0: 0x1b4c021  addu        $t8, $t5, $s4
    ctx->pc = 0x2209f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 20)));
    // 0x2209f4: 0x1976023  subu        $t4, $t4, $s7
    ctx->pc = 0x2209f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 23)));
    // 0x2209f8: 0xa5638  dsll        $t2, $t2, 24
    ctx->pc = 0x2209f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 24);
    // 0x2209fc: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x2209fcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x220a00: 0x1012  mflo        $v0
    ctx->pc = 0x220a00u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x220a04: 0x3010  mfhi        $a2
    ctx->pc = 0x220a04u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x220a08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x220a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x220a0c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x220a0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x220a10: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x220a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x220a14: 0x16ca023  subu        $s4, $t3, $t4
    ctx->pc = 0x220a14u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x220a18: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x220a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x220a1c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x220a1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x220a20: 0x16c9821  addu        $s3, $t3, $t4
    ctx->pc = 0x220a20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x220a24: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x220a24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x220a28: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x220a28u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x220a2c: 0x33e8821  addu        $s1, $t9, $fp
    ctx->pc = 0x220a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x220a30: 0xca6021  addu        $t4, $a2, $t2
    ctx->pc = 0x220a30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x220a34: 0x3179023  subu        $s2, $t8, $s7
    ctx->pc = 0x220a34u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 23)));
    // 0x220a38: 0x1012  mflo        $v0
    ctx->pc = 0x220a38u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x220a3c: 0x3810  mfhi        $a3
    ctx->pc = 0x220a3cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x220a40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x220a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x220a44: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x220a44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x220a48: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x220a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x220a4c: 0x1917823  subu        $t7, $t4, $s1
    ctx->pc = 0x220a4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x220a50: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x220a50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x220a54: 0x3176821  addu        $t5, $t8, $s7
    ctx->pc = 0x220a54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 23)));
    // 0x220a58: 0x2402016a  addiu       $v0, $zero, 0x16A
    ctx->pc = 0x220a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
    // 0x220a5c: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x220a5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x220a60: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x220a60u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x220a64: 0x1020018  mult        $zero, $t0, $v0
    ctx->pc = 0x220a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x220a68: 0xeac023  subu        $t8, $a3, $t2
    ctx->pc = 0x220a68u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x220a6c: 0x1b12823  subu        $a1, $t5, $s1
    ctx->pc = 0x220a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x220a70: 0x26f3823  subu        $a3, $s3, $t7
    ctx->pc = 0x220a70u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x220a74: 0x26f1821  addu        $v1, $s3, $t7
    ctx->pc = 0x220a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x220a78: 0xae0500e0  sw          $a1, 0xE0($s0)
    ctx->pc = 0x220a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 5));
    // 0x220a7c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x220a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x220a80: 0x1012  mflo        $v0
    ctx->pc = 0x220a80u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x220a84: 0x4010  mfhi        $t0
    ctx->pc = 0x220a84u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x220a88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x220a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x220a8c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x220a8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x220a90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x220a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x220a94: 0xae0700c0  sw          $a3, 0xC0($s0)
    ctx->pc = 0x220a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 7));
    // 0x220a98: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x220a98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x220a9c: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x220a9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x220aa0: 0x85e38  dsll        $t3, $t0, 24
    ctx->pc = 0x220aa0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << 24);
    // 0x220aa4: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x220aa4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x220aa8: 0x1b11021  addu        $v0, $t5, $s1
    ctx->pc = 0x220aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x220aac: 0x16fc823  subu        $t9, $t3, $t7
    ctx->pc = 0x220aacu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x220ab0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x220ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x220ab4: 0x319c021  addu        $t8, $t8, $t9
    ctx->pc = 0x220ab4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x220ab8: 0x2994023  subu        $t0, $s4, $t9
    ctx->pc = 0x220ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 25)));
    // 0x220abc: 0x2584823  subu        $t1, $s2, $t8
    ctx->pc = 0x220abcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 24)));
    // 0x220ac0: 0x2992021  addu        $a0, $s4, $t9
    ctx->pc = 0x220ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 25)));
    // 0x220ac4: 0x2583021  addu        $a2, $s2, $t8
    ctx->pc = 0x220ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 24)));
    // 0x220ac8: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x220ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x220acc: 0xae0800a0  sw          $t0, 0xA0($s0)
    ctx->pc = 0x220accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 8));
    // 0x220ad0: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x220ad0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x220ad4: 0xae060080  sw          $a2, 0x80($s0)
    ctx->pc = 0x220ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 6));
    // 0x220ad8: 0xae090060  sw          $t1, 0x60($s0)
    ctx->pc = 0x220ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 9));
label_220adc:
    // 0x220adc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x220adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x220ae0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x220ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x220ae4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x220ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x220ae8: 0x1c60ff61  bgtz        $v1, . + 4 + (-0x9F << 2)
    ctx->pc = 0x220AE8u;
    {
        const bool branch_taken_0x220ae8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x220AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AE8u;
        // 0x220aec: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ae8) {
            ctx->pc = 0x220870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220870;
        }
    }
    ctx->pc = 0x220AF0u;
    // 0x220af0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x220af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x220af4: 0x8fb50100  lw          $s5, 0x100($sp)
    ctx->pc = 0x220af4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x220af8: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x220af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x220afc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x220afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b00: 0x2416016a  addiu       $s6, $zero, 0x16A
    ctx->pc = 0x220b00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
    // 0x220b04: 0x0  nop
    ctx->pc = 0x220b04u;
    // NOP
label_220b08:
    // 0x220b08: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x220b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x220b0c: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x220b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x220b10: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x220b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x220b14: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x220b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x220b18: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x220b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x220b1c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x220b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x220b20: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x220b20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x220b24: 0x8e090014  lw          $t1, 0x14($s0)
    ctx->pc = 0x220b24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x220b28: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x220b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x220b2c: 0x14e0001d  bnez        $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x220B2Cu;
    {
        const bool branch_taken_0x220b2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x220B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B2Cu;
        // 0x220b30: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b2c) {
            ctx->pc = 0x220BA4u;
            goto label_220ba4;
        }
    }
    ctx->pc = 0x220B34u;
    // 0x220b34: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x220B34u;
    {
        const bool branch_taken_0x220b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B34u;
        // 0x220b38: 0x624023  subu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b34) {
            ctx->pc = 0x220BA8u;
            goto label_220ba8;
        }
    }
    ctx->pc = 0x220B3Cu;
    // 0x220b3c: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x220B3Cu;
    {
        const bool branch_taken_0x220b3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x220B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B3Cu;
        // 0x220b40: 0x62b821  addu        $s7, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b3c) {
            ctx->pc = 0x220BACu;
            goto label_220bac;
        }
    }
    ctx->pc = 0x220B44u;
    // 0x220b44: 0x5560001a  bnel        $t3, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x220B44u;
    {
        const bool branch_taken_0x220b44 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x220b44) {
            ctx->pc = 0x220B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220B44u;
            // 0x220b48: 0x1160018  mult        $zero, $t0, $s6 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x220BB0u;
            goto label_220bb0;
        }
    }
    ctx->pc = 0x220B4Cu;
    // 0x220b4c: 0x55200018  bnel        $t1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x220B4Cu;
    {
        const bool branch_taken_0x220b4c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x220b4c) {
            ctx->pc = 0x220B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220B4Cu;
            // 0x220b50: 0x1160018  mult        $zero, $t0, $s6 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x220BB0u;
            goto label_220bb0;
        }
    }
    ctx->pc = 0x220B54u;
    // 0x220b54: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x220B54u;
    {
        const bool branch_taken_0x220b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220b54) {
            ctx->pc = 0x220B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220B54u;
            // 0x220b58: 0x1160018  mult        $zero, $t0, $s6 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x220BB0u;
            goto label_220bb0;
        }
    }
    ctx->pc = 0x220B5Cu;
    // 0x220b5c: 0x54800014  bnel        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x220B5Cu;
    {
        const bool branch_taken_0x220b5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x220b5c) {
            ctx->pc = 0x220B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220B5Cu;
            // 0x220b60: 0x1160018  mult        $zero, $t0, $s6 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x220BB0u;
            goto label_220bb0;
        }
    }
    ctx->pc = 0x220B64u;
    // 0x220b64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x220b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220b68: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x220b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x220b6c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x220b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x220b70: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x220b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x220b74: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x220b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x220b78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x220b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x220b7c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x220b7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220b80: 0xa0c30007  sb          $v1, 0x7($a2)
    ctx->pc = 0x220b80u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x220b84: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x220b84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x220b88: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x220b88u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x220b8c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x220b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x220b90: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x220b90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x220b94: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x220b94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x220b98: 0xa0c30005  sb          $v1, 0x5($a2)
    ctx->pc = 0x220b98u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x220b9c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x220B9Cu;
    {
        const bool branch_taken_0x220b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B9Cu;
        // 0x220ba0: 0xa0c30006  sb          $v1, 0x6($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b9c) {
            ctx->pc = 0x220DA8u;
            goto label_220da8;
        }
    }
    ctx->pc = 0x220BA4u;
label_220ba4:
    // 0x220ba4: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x220ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_220ba8:
    // 0x220ba8: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x220ba8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_220bac:
    // 0x220bac: 0x1160018  mult        $zero, $t0, $s6
    ctx->pc = 0x220bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_220bb0:
    // 0x220bb0: 0xe4c821  addu        $t9, $a3, $a0
    ctx->pc = 0x220bb0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x220bb4: 0x125f021  addu        $fp, $t1, $a1
    ctx->pc = 0x220bb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x220bb8: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x220bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x220bbc: 0x1257023  subu        $t6, $t1, $a1
    ctx->pc = 0x220bbcu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x220bc0: 0x1c74821  addu        $t1, $t6, $a3
    ctx->pc = 0x220bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x220bc4: 0x2404fd63  addiu       $a0, $zero, -0x29D
    ctx->pc = 0x220bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966627));
    // 0x220bc8: 0x1012  mflo        $v0
    ctx->pc = 0x220bc8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x220bcc: 0x4010  mfhi        $t0
    ctx->pc = 0x220bccu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x220bd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x220bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x220bd4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x220bd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x220bd8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x220bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x220bdc: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x220bdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220be0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x220be0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x220be4: 0x33e8821  addu        $s1, $t9, $fp
    ctx->pc = 0x220be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x220be8: 0x240201d9  addiu       $v0, $zero, 0x1D9
    ctx->pc = 0x220be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
    // 0x220bec: 0x14bc021  addu        $t8, $t2, $t3
    ctx->pc = 0x220becu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x220bf0: 0x1220018  mult        $zero, $t1, $v0
    ctx->pc = 0x220bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x220bf4: 0x3176821  addu        $t5, $t8, $s7
    ctx->pc = 0x220bf4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 23)));
    // 0x220bf8: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x220bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x220bfc: 0xafa70108  sw          $a3, 0x108($sp)
    ctx->pc = 0x220bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 7));
    // 0x220c00: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x220c00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x220c04: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x220c04u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x220c08: 0x14b5823  subu        $t3, $t2, $t3
    ctx->pc = 0x220c08u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x220c0c: 0x1176023  subu        $t4, $t0, $s7
    ctx->pc = 0x220c0cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
    // 0x220c10: 0x1812  mflo        $v1
    ctx->pc = 0x220c10u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x220c14: 0x4810  mfhi        $t1
    ctx->pc = 0x220c14u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x220c18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x220c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x220c1c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x220c1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x220c20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x220c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x220c24: 0x16ca023  subu        $s4, $t3, $t4
    ctx->pc = 0x220c24u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x220c28: 0x1c40018  mult        $zero, $t6, $a0
    ctx->pc = 0x220c28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x220c2c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x220c2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x220c30: 0x1b11823  subu        $v1, $t5, $s1
    ctx->pc = 0x220c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x220c34: 0x16c9821  addu        $s3, $t3, $t4
    ctx->pc = 0x220c34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x220c38: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x220c38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x220c3c: 0x95638  dsll        $t2, $t1, 24
    ctx->pc = 0x220c3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << 24);
    // 0x220c40: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x220c40u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x220c44: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x220c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x220c48: 0x1012  mflo        $v0
    ctx->pc = 0x220c48u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x220c4c: 0x2010  mfhi        $a0
    ctx->pc = 0x220c4cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x220c50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x220c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x220c54: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x220c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x220c58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x220c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x220c5c: 0x3179023  subu        $s2, $t8, $s7
    ctx->pc = 0x220c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 23)));
    // 0x220c60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x220c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x220c64: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x220c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x220c68: 0x1b11021  addu        $v0, $t5, $s1
    ctx->pc = 0x220c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x220c6c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x220c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x220c70: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x220c70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x220c74: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x220c74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x220c78: 0x8a6021  addu        $t4, $a0, $t2
    ctx->pc = 0x220c78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x220c7c: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x220c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x220c80: 0x33e2023  subu        $a0, $t9, $fp
    ctx->pc = 0x220c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 30)));
    // 0x220c84: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x220c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x220c88: 0x960018  mult        $zero, $a0, $s6
    ctx->pc = 0x220c88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x220c8c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x220c8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220c90: 0x1917823  subu        $t7, $t4, $s1
    ctx->pc = 0x220c90u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x220c94: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x220c94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x220c98: 0x2010  mfhi        $a0
    ctx->pc = 0x220c98u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x220c9c: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x220c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x220ca0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x220ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x220ca4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x220ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220ca8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x220ca8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220cac: 0x26f1021  addu        $v0, $s3, $t7
    ctx->pc = 0x220cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x220cb0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x220cb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x220cb4: 0x1812  mflo        $v1
    ctx->pc = 0x220cb4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x220cb8: 0xa0c50007  sb          $a1, 0x7($a2)
    ctx->pc = 0x220cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x220cbc: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x220cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x220cc0: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x220cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x220cc4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x220cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x220cc8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x220cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x220ccc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x220cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x220cd0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x220cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x220cd4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x220cd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220cd8: 0x26f1823  subu        $v1, $s3, $t7
    ctx->pc = 0x220cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x220cdc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x220cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x220ce0: 0x45e38  dsll        $t3, $a0, 24
    ctx->pc = 0x220ce0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << 24);
    // 0x220ce4: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x220ce4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x220ce8: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x220ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x220cec: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x220cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x220cf0: 0x24040115  addiu       $a0, $zero, 0x115
    ctx->pc = 0x220cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
    // 0x220cf4: 0x16fc823  subu        $t9, $t3, $t7
    ctx->pc = 0x220cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x220cf8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x220cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x220cfc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x220cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220d00: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x220d00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220d04: 0x2991021  addu        $v0, $s4, $t9
    ctx->pc = 0x220d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 25)));
    // 0x220d08: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x220d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x220d0c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x220d0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x220d10: 0xa0c50006  sb          $a1, 0x6($a2)
    ctx->pc = 0x220d10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x220d14: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x220d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x220d18: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x220d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x220d1c: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x220d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x220d20: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x220d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x220d24: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x220d24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220d28: 0x1812  mflo        $v1
    ctx->pc = 0x220d28u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x220d2c: 0x2010  mfhi        $a0
    ctx->pc = 0x220d2cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x220d30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x220d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x220d34: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x220d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x220d38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x220d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x220d3c: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x220d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x220d40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x220d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x220d44: 0x2991823  subu        $v1, $s4, $t9
    ctx->pc = 0x220d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 25)));
    // 0x220d48: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x220d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x220d4c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x220d4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x220d50: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x220d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x220d54: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x220d54u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x220d58: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x220d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x220d5c: 0x8ac023  subu        $t8, $a0, $t2
    ctx->pc = 0x220d5cu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x220d60: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x220d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220d64: 0x319c021  addu        $t8, $t8, $t9
    ctx->pc = 0x220d64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x220d68: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x220d68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220d6c: 0x2581021  addu        $v0, $s2, $t8
    ctx->pc = 0x220d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 24)));
    // 0x220d70: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x220d70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x220d74: 0x2581823  subu        $v1, $s2, $t8
    ctx->pc = 0x220d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 24)));
    // 0x220d78: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x220d78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x220d7c: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x220d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x220d80: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x220d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x220d84: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x220d84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x220d88: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x220d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x220d8c: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x220d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x220d90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x220d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x220d94: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x220d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220d98: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x220d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x220d9c: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x220d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x220da0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x220da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220da4: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x220da4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
label_220da8:
    // 0x220da8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x220da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x220dac: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x220dacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x220db0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x220db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x220db4: 0x441ff54  bgez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x220DB4u;
    {
        const bool branch_taken_0x220db4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x220DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DB4u;
        // 0x220db8: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220db4) {
            ctx->pc = 0x220B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220b08;
        }
    }
    ctx->pc = 0x220DBCu;
    // 0x220dbc: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x220dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x220dc0: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x220dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x220dc4: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x220dc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x220dc8: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x220dc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x220dcc: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x220dccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x220dd0: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x220dd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x220dd4: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x220dd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x220dd8: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x220dd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x220ddc: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x220ddcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x220de0: 0x3e00008  jr          $ra
    ctx->pc = 0x220DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DE0u;
        // 0x220de4: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220DE8u;
}
