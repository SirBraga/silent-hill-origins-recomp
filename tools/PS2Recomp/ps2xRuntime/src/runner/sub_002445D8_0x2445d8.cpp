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

// Function: sub_002445D8
// Address: 0x2445d8 - 0x2448a0
void sub_002445D8_0x2445d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002445D8_0x2445d8");
#endif

    switch (ctx->pc) {
        case 0x244638u: goto label_244638;
        case 0x244678u: goto label_244678;
        case 0x244710u: goto label_244710;
        case 0x244858u: goto label_244858;
        case 0x244868u: goto label_244868;
        default: break;
    }

    ctx->pc = 0x2445d8u;

    // 0x2445d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2445d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2445dc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2445dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2445e0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2445e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2445e4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2445e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2445e8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2445e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2445ec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2445ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2445f0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2445f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2445f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2445f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2445f8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2445f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2445fc: 0x2506fffe  addiu       $a2, $t0, -0x2
    ctx->pc = 0x2445fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x244600: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x244600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x244604: 0x2d080003  sltiu       $t0, $t0, 0x3
    ctx->pc = 0x244604u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x244608: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x244608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x24460c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24460cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244610: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x244610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x244614: 0x24770fe0  addiu       $s7, $v1, 0xFE0
    ctx->pc = 0x244614u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x244618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24461c: 0xc8980a  movz        $s3, $a2, $t0
    ctx->pc = 0x24461cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6));
    // 0x244620: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x244620u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244624: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x244624u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244628: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x244628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24462c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x24462cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x244630: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x244630u;
    {
        const bool branch_taken_0x244630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244630u;
        // 0x244634: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244630) {
            ctx->pc = 0x244858u;
            goto label_244858;
        }
    }
    ctx->pc = 0x244638u;
label_244638:
    // 0x244638: 0x3c0c7c00  lui         $t4, 0x7C00
    ctx->pc = 0x244638u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)31744 << 16));
    // 0x24463c: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x24463cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x244640: 0x7aea0000  lq          $t2, 0x0($s7)
    ctx->pc = 0x244640u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x244644: 0x24540f40  addiu       $s4, $v0, 0xF40
    ctx->pc = 0x244644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x244648: 0x2689823  subu        $s3, $s3, $t0
    ctx->pc = 0x244648u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x24464c: 0x24190010  addiu       $t9, $zero, 0x10
    ctx->pc = 0x24464cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244650: 0x2418000c  addiu       $t8, $zero, 0xC
    ctx->pc = 0x244650u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x244654: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x244654u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x244658: 0x3c0e0400  lui         $t6, 0x400
    ctx->pc = 0x244658u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1024 << 16));
    // 0x24465c: 0x340d8002  ori         $t5, $zero, 0x8002
    ctx->pc = 0x24465cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x244660: 0xd6db8  dsll        $t5, $t5, 22
    ctx->pc = 0x244660u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 22);
    // 0x244664: 0x35ad8000  ori         $t5, $t5, 0x8000
    ctx->pc = 0x244664u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
    // 0x244668: 0xd6cf8  dsll        $t5, $t5, 19
    ctx->pc = 0x244668u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 19);
    // 0x24466c: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x24466cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x244670: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x244670u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x244674: 0x0  nop
    ctx->pc = 0x244674u;
    // NOP
label_244678:
    // 0x244678: 0x2d020011  sltiu       $v0, $t0, 0x11
    ctx->pc = 0x244678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x24467c: 0x320382d  daddu       $a3, $t9, $zero
    ctx->pc = 0x24467cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244680: 0x102380b  movn        $a3, $t0, $v0
    ctx->pc = 0x244680u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8));
    // 0x244684: 0xf82018  mult        $a0, $a3, $t8
    ctx->pc = 0x244684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x244688: 0xee1825  or          $v1, $a3, $t6
    ctx->pc = 0x244688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x24468c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x24468cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x244690: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x244690u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x244694: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x244694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x244698: 0x6d2825  or          $a1, $v1, $t5
    ctx->pc = 0x244698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x24469c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x24469cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2446a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2446a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2446a4: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x2446a4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x2446a8: 0x4f1825  or          $v1, $v0, $t7
    ctx->pc = 0x2446a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x2446ac: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x2446acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x2446b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2446b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2446b4: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2446b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2446b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2446b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2446bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2446bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2446c0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2446c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2446c4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2446c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2446c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2446c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2446cc: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x2446ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x2446d0: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x2446d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x2446d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2446d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2446d8: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2446d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2446dc: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x2446dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x2446e0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2446e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2446e4: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x2446e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x2446e8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2446e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2446ec: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x2446ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x2446f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2446f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2446f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2446f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2446f8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2446f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2446fc: 0x10eb004c  beq         $a3, $t3, . + 4 + (0x4C << 2)
    ctx->pc = 0x2446FCu;
    {
        const bool branch_taken_0x2446fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x244700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446FCu;
        // 0x244700: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446fc) {
            ctx->pc = 0x244830u;
            goto label_244830;
        }
    }
    ctx->pc = 0x244704u;
    // 0x244704: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x244704u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x244708: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x244708u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x24470c: 0x0  nop
    ctx->pc = 0x24470cu;
    // NOP
label_244710:
    // 0x244710: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x244710u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x244714: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x244714u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x244718: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x244718u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x24471c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x24471cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x244720: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x244720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x244724: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x244724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x244728: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x244728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x24472c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x24472cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x244730: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x244730u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x244734: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x244734u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x244738: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x244738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24473c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24473cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244740: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x244740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244744: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x244744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x244748: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x244748u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24474c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x24474cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x244750: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244754: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x244754u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244758: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x244758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24475c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x24475cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x244760: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x244760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x244764: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244768: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x244768u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24476c: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x24476cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x244770: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x244770u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x244774: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x244774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x244778: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24477c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24477cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244780: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x244780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x244784: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x244784u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x244788: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x244788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x24478c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24478cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244790: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x244790u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244794: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x244794u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x244798: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x244798u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x24479c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x24479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2447a0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2447a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2447a4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2447a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2447a8: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x2447a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2447ac: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x2447acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x2447b0: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x2447b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2447b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2447b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2447b8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2447b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2447bc: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x2447bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2447c0: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x2447c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x2447c4: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x2447c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2447c8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2447c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2447cc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2447ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2447d0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2447d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2447d4: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x2447d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x2447d8: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x2447d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2447dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2447dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2447e0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2447e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2447e4: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2447e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2447e8: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x2447e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x2447ec: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x2447ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x2447f0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2447f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2447f4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2447f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2447f8: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x2447f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2447fc: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x2447fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x244800: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x244800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x244804: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244808: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x244808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24480c: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x24480cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x244810: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x244810u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x244814: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x244814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x244818: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24481c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x24481cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244820: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x244820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x244824: 0x14e9ffba  bne         $a3, $t1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x244824u;
    {
        const bool branch_taken_0x244824 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x244828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244824u;
        // 0x244828: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244824) {
            ctx->pc = 0x244710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244710;
        }
    }
    ctx->pc = 0x24482Cu;
    // 0x24482c: 0x0  nop
    ctx->pc = 0x24482cu;
    // NOP
label_244830:
    // 0x244830: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x244830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x244834: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x244834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x244838: 0x7c4a0000  sq          $t2, 0x0($v0)
    ctx->pc = 0x244838u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 10));
    // 0x24483c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x244840: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244844: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x244844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244848: 0x1500ff8b  bnez        $t0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x244848u;
    {
        const bool branch_taken_0x244848 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x24484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244848u;
        // 0x24484c: 0x7a8a0000  lq          $t2, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244848) {
            ctx->pc = 0x244678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244678;
        }
    }
    ctx->pc = 0x244850u;
    // 0x244850: 0xc0908e0  jal         func_242380
    ctx->pc = 0x244850u;
    SET_GPR_U32(ctx, 31, 0x244858u);
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x244850u, 0x244858u)) {
        return;
    }
    ctx->pc = 0x244858u;
label_244858:
    // 0x244858: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x244858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24485c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24485cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244860: 0xc090932  jal         func_2424C8
    ctx->pc = 0x244860u;
    SET_GPR_U32(ctx, 31, 0x244868u);
    ctx->pc = 0x244864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244860u;
    // 0x244864: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2424C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2424C8u, 0x244860u, 0x244868u)) {
        return;
    }
    ctx->pc = 0x244868u;
label_244868:
    // 0x244868: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x244868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24486c: 0x5500ff72  bnel        $t0, $zero, . + 4 + (-0x8E << 2)
    ctx->pc = 0x24486Cu;
    {
        const bool branch_taken_0x24486c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x24486c) {
            ctx->pc = 0x244870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24486Cu;
            // 0x244870: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244638;
        }
    }
    ctx->pc = 0x244874u;
    // 0x244874: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x244874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x244878: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x244878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24487c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x24487cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x244880: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x244880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x244884: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x244884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244888: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x244888u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24488c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x24488cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244890: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x244890u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244898: 0x3e00008  jr          $ra
    ctx->pc = 0x244898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244898u;
        // 0x24489c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2448A0u;
}
