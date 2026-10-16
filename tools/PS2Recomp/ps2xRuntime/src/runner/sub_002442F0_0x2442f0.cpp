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

// Function: sub_002442F0
// Address: 0x2442f0 - 0x2445d8
void sub_002442F0_0x2442f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002442F0_0x2442f0");
#endif

    switch (ctx->pc) {
        case 0x244348u: goto label_244348;
        case 0x244378u: goto label_244378;
        case 0x244428u: goto label_244428;
        case 0x244590u: goto label_244590;
        case 0x2445a0u: goto label_2445a0;
        default: break;
    }

    ctx->pc = 0x2442f0u;

    // 0x2442f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2442f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2442f4: 0x2503fffe  addiu       $v1, $t0, -0x2
    ctx->pc = 0x2442f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x2442f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2442f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2442fc: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2442fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x244300: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x244300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x244304: 0x2d080003  sltiu       $t0, $t0, 0x3
    ctx->pc = 0x244304u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x244308: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x244308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x24430c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24430cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244310: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x244310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x244314: 0x68980a  movz        $s3, $v1, $t0
    ctx->pc = 0x244314u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
    // 0x244318: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x244318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x24431c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24431cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244320: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x244320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x244324: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x244324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244328: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x244328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x24432c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x24432cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244330: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x244330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x244334: 0x24570fe0  addiu       $s7, $v0, 0xFE0
    ctx->pc = 0x244334u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x244338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24433c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x24433cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244340: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x244340u;
    {
        const bool branch_taken_0x244340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244340u;
        // 0x244344: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244340) {
            ctx->pc = 0x244590u;
            goto label_244590;
        }
    }
    ctx->pc = 0x244348u;
label_244348:
    // 0x244348: 0x7aec0000  lq          $t4, 0x0($s7)
    ctx->pc = 0x244348u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24434c: 0x24540f40  addiu       $s4, $v0, 0xF40
    ctx->pc = 0x24434cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x244350: 0x26a9823  subu        $s3, $s3, $t2
    ctx->pc = 0x244350u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
    // 0x244354: 0x24190010  addiu       $t9, $zero, 0x10
    ctx->pc = 0x244354u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244358: 0x2418000c  addiu       $t8, $zero, 0xC
    ctx->pc = 0x244358u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24435c: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x24435cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x244360: 0x3c0e0400  lui         $t6, 0x400
    ctx->pc = 0x244360u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)1024 << 16));
    // 0x244364: 0x340d8002  ori         $t5, $zero, 0x8002
    ctx->pc = 0x244364u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x244368: 0xd6db8  dsll        $t5, $t5, 22
    ctx->pc = 0x244368u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 22);
    // 0x24436c: 0x35ad8000  ori         $t5, $t5, 0x8000
    ctx->pc = 0x24436cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
    // 0x244370: 0xd6cf8  dsll        $t5, $t5, 19
    ctx->pc = 0x244370u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 19);
    // 0x244374: 0x0  nop
    ctx->pc = 0x244374u;
    // NOP
label_244378:
    // 0x244378: 0x2d420011  sltiu       $v0, $t2, 0x11
    ctx->pc = 0x244378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x24437c: 0x320482d  daddu       $t1, $t9, $zero
    ctx->pc = 0x24437cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244380: 0x142480b  movn        $t1, $t2, $v0
    ctx->pc = 0x244380u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10));
    // 0x244384: 0x1382018  mult        $a0, $t1, $t8
    ctx->pc = 0x244384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x244388: 0x12e1825  or          $v1, $t1, $t6
    ctx->pc = 0x244388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
    // 0x24438c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x24438cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x244390: 0x1495023  subu        $t2, $t2, $t1
    ctx->pc = 0x244390u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x244394: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x244394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x244398: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x244398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x24439c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x24439cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2443a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2443a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2443a4: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x2443a4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x2443a8: 0x4f2825  or          $a1, $v0, $t7
    ctx->pc = 0x2443a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x2443ac: 0x70651b89  pcpyld      $v1, $v1, $a1
    ctx->pc = 0x2443acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x2443b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2443b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2443b4: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2443b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2443b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2443b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2443bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2443bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2443c0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2443c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2443c4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2443c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2443c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2443c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2443cc: 0x3c037c00  lui         $v1, 0x7C00
    ctx->pc = 0x2443ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31744 << 16));
    // 0x2443d0: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x2443d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x2443d4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2443d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2443d8: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x2443d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x2443dc: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x2443dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x2443e0: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x2443e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2443e4: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x2443e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x2443e8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2443e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2443ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2443ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2443f0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2443f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2443f4: 0x70651b89  pcpyld      $v1, $v1, $a1
    ctx->pc = 0x2443f4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x2443f8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2443f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2443fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2443fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x244400: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244404: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x244404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244408: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x244408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x24440c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24440cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x244410: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x244410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x244414: 0x11220056  beq         $t1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x244414u;
    {
        const bool branch_taken_0x244414 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x244418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244414u;
        // 0x244418: 0x8f8290bc  lw          $v0, -0x6F44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244414) {
            ctx->pc = 0x244570u;
            goto label_244570;
        }
    }
    ctx->pc = 0x24441Cu;
    // 0x24441c: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x24441cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x244420: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x244420u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x244424: 0x0  nop
    ctx->pc = 0x244424u;
    // NOP
label_244428:
    // 0x244428: 0x3a480003  xori        $t0, $s2, 0x3
    ctx->pc = 0x244428u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x24442c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x24442cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x244430: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x244430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x244434: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x244434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x244438: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x244438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x24443c: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x24443cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244440: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x244440u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244444: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x244444u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x244448: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x244448u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x24444c: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x24444cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x244450: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x244450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x244454: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x244454u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x244458: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x244458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x24445c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x24445cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x244460: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x244460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x244464: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x244464u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x244468: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x244468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24446c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x24446cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x244470: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x244470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x244474: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244478: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x244478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24447c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x24447cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x244480: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x244480u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x244484: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x244484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x244488: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24448c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24448cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244490: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x244490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x244494: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x244494u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x244498: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x244498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x24449c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24449cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2444a0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2444a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2444a4: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x2444a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2444a8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2444a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2444ac: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2444acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2444b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2444b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2444b4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2444b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2444b8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2444b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2444bc: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2444bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2444c0: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2444c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2444c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2444c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2444c8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2444c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2444cc: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2444ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2444d0: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x2444d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x2444d4: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2444d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2444d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2444d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2444dc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2444dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2444e0: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x2444e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2444e4: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x2444e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x2444e8: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x2444e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2444ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2444ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2444f0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2444f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2444f4: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x2444f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2444f8: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x2444f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x2444fc: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x2444fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x244500: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244504: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x244504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244508: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x244508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24450c: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x24450cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x244510: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x244510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x244514: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244518: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x244518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24451c: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x24451cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x244520: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x244520u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x244524: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x244524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x244528: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24452c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24452cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244530: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x244530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x244534: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x244534u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x244538: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x244538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x24453c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24453cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244540: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x244540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244544: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x244544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x244548: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x244548u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x24454c: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x24454cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x244550: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244554: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x244554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244558: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x244558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x24455c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x24455cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x244560: 0x152bffb1  bne         $t1, $t3, . + 4 + (-0x4F << 2)
    ctx->pc = 0x244560u;
    {
        const bool branch_taken_0x244560 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 11));
        ctx->pc = 0x244564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244560u;
        // 0x244564: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244560) {
            ctx->pc = 0x244428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244428;
        }
    }
    ctx->pc = 0x244568u;
    // 0x244568: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x244568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24456c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x24456cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
label_244570:
    // 0x244570: 0x7c4c0000  sq          $t4, 0x0($v0)
    ctx->pc = 0x244570u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 12));
    // 0x244574: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x244574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x244578: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24457c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x24457cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244580: 0x1540ff7d  bnez        $t2, . + 4 + (-0x83 << 2)
    ctx->pc = 0x244580u;
    {
        const bool branch_taken_0x244580 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x244584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244580u;
        // 0x244584: 0x7a8c0000  lq          $t4, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244580) {
            ctx->pc = 0x244378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244378;
        }
    }
    ctx->pc = 0x244588u;
    // 0x244588: 0xc0908e0  jal         func_242380
    ctx->pc = 0x244588u;
    SET_GPR_U32(ctx, 31, 0x244590u);
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x244588u, 0x244590u)) {
        return;
    }
    ctx->pc = 0x244590u;
label_244590:
    // 0x244590: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x244590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244594: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x244594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244598: 0xc090932  jal         func_2424C8
    ctx->pc = 0x244598u;
    SET_GPR_U32(ctx, 31, 0x2445A0u);
    ctx->pc = 0x24459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244598u;
    // 0x24459c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2424C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2424C8u, 0x244598u, 0x2445A0u)) {
        return;
    }
    ctx->pc = 0x2445A0u;
label_2445a0:
    // 0x2445a0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2445a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2445a4: 0x5540ff68  bnel        $t2, $zero, . + 4 + (-0x98 << 2)
    ctx->pc = 0x2445A4u;
    {
        const bool branch_taken_0x2445a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2445a4) {
            ctx->pc = 0x2445A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2445A4u;
            // 0x2445a8: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244348;
        }
    }
    ctx->pc = 0x2445ACu;
    // 0x2445ac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2445acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2445b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2445b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2445b4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2445b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2445b8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2445b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2445bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2445bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2445c0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2445c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2445c4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2445c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2445c8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2445c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2445cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2445ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2445d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2445D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2445D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445D0u;
        // 0x2445d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2445D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2445D8u;
}
