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

// Function: sub_002435C8
// Address: 0x2435c8 - 0x243888
void sub_002435C8_0x2435c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002435C8_0x2435c8");
#endif

    switch (ctx->pc) {
        case 0x243620u: goto label_243620;
        case 0x243660u: goto label_243660;
        case 0x2436f8u: goto label_2436f8;
        case 0x243840u: goto label_243840;
        case 0x243850u: goto label_243850;
        default: break;
    }

    ctx->pc = 0x2435c8u;

    // 0x2435c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2435c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2435cc: 0x24e3fffe  addiu       $v1, $a3, -0x2
    ctx->pc = 0x2435ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x2435d0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2435d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2435d4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2435d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2435d8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2435d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2435dc: 0x2ce70003  sltiu       $a3, $a3, 0x3
    ctx->pc = 0x2435dcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2435e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2435e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2435e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2435e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435e8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2435e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2435ec: 0x67900a  movz        $s2, $v1, $a3
    ctx->pc = 0x2435ecu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
    // 0x2435f0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2435f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2435f4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2435f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435f8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2435f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2435fc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2435fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243600: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x243600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x243604: 0x24570fe0  addiu       $s7, $v0, 0xFE0
    ctx->pc = 0x243604u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x243608: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x243608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24360c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24360cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243614: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x243614u;
    {
        const bool branch_taken_0x243614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243614u;
        // 0x243618: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243614) {
            ctx->pc = 0x243840u;
            goto label_243840;
        }
    }
    ctx->pc = 0x24361Cu;
    // 0x24361c: 0x0  nop
    ctx->pc = 0x24361cu;
    // NOP
label_243620:
    // 0x243620: 0x3c0d7c00  lui         $t5, 0x7C00
    ctx->pc = 0x243620u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)31744 << 16));
    // 0x243624: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x243624u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x243628: 0x7aeb0000  lq          $t3, 0x0($s7)
    ctx->pc = 0x243628u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24362c: 0x24540f40  addiu       $s4, $v0, 0xF40
    ctx->pc = 0x24362cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x243630: 0x2499023  subu        $s2, $s2, $t1
    ctx->pc = 0x243630u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x243634: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x243634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x243638: 0x2419000c  addiu       $t9, $zero, 0xC
    ctx->pc = 0x243638u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24363c: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x24363cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x243640: 0x3c0f0400  lui         $t7, 0x400
    ctx->pc = 0x243640u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1024 << 16));
    // 0x243644: 0x340e8002  ori         $t6, $zero, 0x8002
    ctx->pc = 0x243644u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x243648: 0xe75b8  dsll        $t6, $t6, 22
    ctx->pc = 0x243648u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 22);
    // 0x24364c: 0x35ce8000  ori         $t6, $t6, 0x8000
    ctx->pc = 0x24364cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)32768);
    // 0x243650: 0xe74f8  dsll        $t6, $t6, 19
    ctx->pc = 0x243650u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 19);
    // 0x243654: 0x35ad8000  ori         $t5, $t5, 0x8000
    ctx->pc = 0x243654u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
    // 0x243658: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x243658u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x24365c: 0x0  nop
    ctx->pc = 0x24365cu;
    // NOP
label_243660:
    // 0x243660: 0x2d220011  sltiu       $v0, $t1, 0x11
    ctx->pc = 0x243660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x243664: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x243664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243668: 0x122400b  movn        $t0, $t1, $v0
    ctx->pc = 0x243668u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9));
    // 0x24366c: 0x1192018  mult        $a0, $t0, $t9
    ctx->pc = 0x24366cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x243670: 0x10f1825  or          $v1, $t0, $t7
    ctx->pc = 0x243670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x243674: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x243674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x243678: 0x1284823  subu        $t1, $t1, $t0
    ctx->pc = 0x243678u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x24367c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24367cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x243680: 0x6e2825  or          $a1, $v1, $t6
    ctx->pc = 0x243680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x243684: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x243684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x243688: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x243688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24368c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x24368cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x243690: 0x581825  or          $v1, $v0, $t8
    ctx->pc = 0x243690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x243694: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x243694u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x243698: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x243698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24369c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x24369cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2436a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2436a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2436a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2436a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2436a8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2436a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2436ac: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2436acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2436b0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2436b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2436b4: 0x8d2025  or          $a0, $a0, $t5
    ctx->pc = 0x2436b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
    // 0x2436b8: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x2436b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x2436bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2436bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2436c0: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2436c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2436c4: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x2436c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x2436c8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2436c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2436cc: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x2436ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x2436d0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2436d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2436d4: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x2436d4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x2436d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2436d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2436dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2436dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2436e0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2436e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2436e4: 0x110c004c  beq         $t0, $t4, . + 4 + (0x4C << 2)
    ctx->pc = 0x2436E4u;
    {
        const bool branch_taken_0x2436e4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        ctx->pc = 0x2436E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2436E4u;
        // 0x2436e8: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436e4) {
            ctx->pc = 0x243818u;
            goto label_243818;
        }
    }
    ctx->pc = 0x2436ECu;
    // 0x2436ec: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2436ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x2436f0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x2436f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x2436f4: 0x0  nop
    ctx->pc = 0x2436f4u;
    // NOP
label_2436f8:
    // 0x2436f8: 0x3a270003  xori        $a3, $s1, 0x3
    ctx->pc = 0x2436f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
    // 0x2436fc: 0x112980  sll         $a1, $s1, 6
    ctx->pc = 0x2436fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x243700: 0x73180  sll         $a2, $a3, 6
    ctx->pc = 0x243700u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x243704: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x243704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x243708: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x243708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x24370c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24370cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x243710: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x243710u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243714: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x243714u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x243718: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x243718u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24371c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x24371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x243720: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243724: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x243724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243728: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x243728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24372c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x24372cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x243730: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x243730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x243734: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243738: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24373c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x24373cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x243740: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x243740u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x243744: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x243744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x243748: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24374c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24374cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243750: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x243750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x243754: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x243754u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x243758: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x243758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x24375c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24375cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243760: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243764: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x243764u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x243768: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x243768u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x24376c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x24376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x243770: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243774: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243778: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x243778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x24377c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x24377cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x243780: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x243780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x243784: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243788: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243788u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24378c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x24378cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x243790: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x243790u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x243794: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x243794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x243798: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24379c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24379cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2437a0: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x2437a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2437a4: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x2437a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x2437a8: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x2437a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2437ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2437acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2437b0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2437b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2437b4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2437b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2437b8: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x2437b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x2437bc: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x2437bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2437c0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2437c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2437c4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2437c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2437c8: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2437c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2437cc: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x2437ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x2437d0: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x2437d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x2437d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2437d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2437d8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2437d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2437dc: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x2437dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2437e0: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x2437e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x2437e4: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x2437e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2437e8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2437e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2437ec: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2437ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2437f0: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x2437f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2437f4: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x2437f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x2437f8: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x2437f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x2437fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2437fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243800: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x243800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243804: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x243804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x243808: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x243808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x24380c: 0x150affba  bne         $t0, $t2, . + 4 + (-0x46 << 2)
    ctx->pc = 0x24380Cu;
    {
        const bool branch_taken_0x24380c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x243810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24380Cu;
        // 0x243810: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24380c) {
            ctx->pc = 0x2436F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2436f8;
        }
    }
    ctx->pc = 0x243814u;
    // 0x243814: 0x0  nop
    ctx->pc = 0x243814u;
    // NOP
label_243818:
    // 0x243818: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x243818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24381c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x24381cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243820: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x243820u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
    // 0x243824: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x243824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243828: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24382c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x24382cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243830: 0x1520ff8b  bnez        $t1, . + 4 + (-0x75 << 2)
    ctx->pc = 0x243830u;
    {
        const bool branch_taken_0x243830 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x243834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243830u;
        // 0x243834: 0x7a8b0000  lq          $t3, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243830) {
            ctx->pc = 0x243660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243660;
        }
    }
    ctx->pc = 0x243838u;
    // 0x243838: 0xc0908e0  jal         func_242380
    ctx->pc = 0x243838u;
    SET_GPR_U32(ctx, 31, 0x243840u);
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x243838u, 0x243840u)) {
        return;
    }
    ctx->pc = 0x243840u;
label_243840:
    // 0x243840: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x243840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243844: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x243844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243848: 0xc090932  jal         func_2424C8
    ctx->pc = 0x243848u;
    SET_GPR_U32(ctx, 31, 0x243850u);
    ctx->pc = 0x24384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243848u;
    // 0x24384c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2424C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2424C8u, 0x243848u, 0x243850u)) {
        return;
    }
    ctx->pc = 0x243850u;
label_243850:
    // 0x243850: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x243850u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243854: 0x5520ff72  bnel        $t1, $zero, . + 4 + (-0x8E << 2)
    ctx->pc = 0x243854u;
    {
        const bool branch_taken_0x243854 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x243854) {
            ctx->pc = 0x243858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243854u;
            // 0x243858: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243620;
        }
    }
    ctx->pc = 0x24385Cu;
    // 0x24385c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x24385cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x243860: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x243860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x243864: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x243864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243868: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x243868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24386c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24386cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243870: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x243870u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243874: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x243874u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243878: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x243878u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24387c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24387cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243880: 0x3e00008  jr          $ra
    ctx->pc = 0x243880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243880u;
        // 0x243884: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243888u;
}
