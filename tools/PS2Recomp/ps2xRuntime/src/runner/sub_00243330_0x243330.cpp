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

// Function: sub_00243330
// Address: 0x243330 - 0x2435c8
void sub_00243330_0x243330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243330_0x243330");
#endif

    switch (ctx->pc) {
        case 0x243380u: goto label_243380;
        case 0x2433c0u: goto label_2433c0;
        case 0x243458u: goto label_243458;
        case 0x243588u: goto label_243588;
        case 0x243598u: goto label_243598;
        default: break;
    }

    ctx->pc = 0x243330u;

    // 0x243330: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x243330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243334: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x243334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x243338: 0xe2001b  divu        $zero, $a3, $v0
    ctx->pc = 0x243338u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x24333c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x243340: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x243340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x243344: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x243344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x243348: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x243348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24334c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24334cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243350: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x243350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x243354: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x243354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243358: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x243358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x24335c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24335cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243364: 0x24740fe0  addiu       $s4, $v1, 0xFE0
    ctx->pc = 0x243364u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x243368: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x243368u;
    {
        const bool branch_taken_0x243368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243368) {
            ctx->pc = 0x24336Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243368u;
            // 0x24336c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x243370u;
            goto label_243370;
        }
    }
    ctx->pc = 0x243370u;
label_243370:
    // 0x243370: 0x3812  mflo        $a3
    ctx->pc = 0x243370u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x243374: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x243374u;
    {
        const bool branch_taken_0x243374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243374u;
        // 0x243378: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243374) {
            ctx->pc = 0x243588u;
            goto label_243588;
        }
    }
    ctx->pc = 0x24337Cu;
    // 0x24337c: 0x0  nop
    ctx->pc = 0x24337cu;
    // NOP
label_243380:
    // 0x243380: 0x3c0b7c00  lui         $t3, 0x7C00
    ctx->pc = 0x243380u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)31744 << 16));
    // 0x243384: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x243384u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x243388: 0x7a890000  lq          $t1, 0x0($s4)
    ctx->pc = 0x243388u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24338c: 0x24590f40  addiu       $t9, $v0, 0xF40
    ctx->pc = 0x24338cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x243390: 0x2278823  subu        $s1, $s1, $a3
    ctx->pc = 0x243390u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x243394: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x243394u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x243398: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x243398u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24339c: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x24339cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x2433a0: 0x3c0d0400  lui         $t5, 0x400
    ctx->pc = 0x2433a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1024 << 16));
    // 0x2433a4: 0x340c8002  ori         $t4, $zero, 0x8002
    ctx->pc = 0x2433a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x2433a8: 0xc65b8  dsll        $t4, $t4, 22
    ctx->pc = 0x2433a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 22);
    // 0x2433ac: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x2433acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x2433b0: 0xc64f8  dsll        $t4, $t4, 19
    ctx->pc = 0x2433b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 19);
    // 0x2433b4: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x2433b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x2433b8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x2433b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x2433bc: 0x0  nop
    ctx->pc = 0x2433bcu;
    // NOP
label_2433c0:
    // 0x2433c0: 0x2ce20011  sltiu       $v0, $a3, 0x11
    ctx->pc = 0x2433c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x2433c4: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x2433c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433c8: 0xe2300b  movn        $a2, $a3, $v0
    ctx->pc = 0x2433c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7));
    // 0x2433cc: 0xcf2018  mult        $a0, $a2, $t7
    ctx->pc = 0x2433ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2433d0: 0xcd1825  or          $v1, $a2, $t5
    ctx->pc = 0x2433d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x2433d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2433d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2433d8: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x2433d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2433dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2433dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2433e0: 0x6c2825  or          $a1, $v1, $t4
    ctx->pc = 0x2433e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x2433e4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2433e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2433e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2433e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2433ec: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x2433ecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x2433f0: 0x4e1825  or          $v1, $v0, $t6
    ctx->pc = 0x2433f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x2433f4: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x2433f4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x2433f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2433f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2433fc: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2433fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243400: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x243400u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x243404: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x243404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243408: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24340c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x24340cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243410: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x243410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x243414: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x243414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x243418: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x243418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x24341c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24341cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x243420: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x243420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x243424: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x243424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x243428: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x243428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x24342c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x24342cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x243430: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x243430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x243434: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x243434u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x243438: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x243438u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24343c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243440: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x243440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x243444: 0x10ca0046  beq         $a2, $t2, . + 4 + (0x46 << 2)
    ctx->pc = 0x243444u;
    {
        const bool branch_taken_0x243444 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        ctx->pc = 0x243448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243444u;
        // 0x243448: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243444) {
            ctx->pc = 0x243560u;
            goto label_243560;
        }
    }
    ctx->pc = 0x24344Cu;
    // 0x24344c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x24344cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x243450: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x243450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x243454: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x243454u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_243458:
    // 0x243458: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x243458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x24345c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x24345cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243460: 0x78a2ff80  lq          $v0, -0x80($a1)
    ctx->pc = 0x243460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967168)));
    // 0x243464: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x243464u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x243468: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x243468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24346c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24346cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243470: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x243470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243474: 0x78a2ff90  lq          $v0, -0x70($a1)
    ctx->pc = 0x243474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967184)));
    // 0x243478: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x243478u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24347c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x24347cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x243480: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243484: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243484u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243488: 0x78a2ffa0  lq          $v0, -0x60($a1)
    ctx->pc = 0x243488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967200)));
    // 0x24348c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x24348cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x243490: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x243490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x243494: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243498: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243498u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24349c: 0x78a2ffb0  lq          $v0, -0x50($a1)
    ctx->pc = 0x24349cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967216)));
    // 0x2434a0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2434a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2434a4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2434a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2434a8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2434a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2434ac: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2434acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2434b0: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x2434b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
    // 0x2434b4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2434b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2434b8: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2434b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2434bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2434bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2434c0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2434c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2434c4: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x2434c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
    // 0x2434c8: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x2434c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x2434cc: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2434ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2434d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2434d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2434d4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2434d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2434d8: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x2434d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
    // 0x2434dc: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x2434dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x2434e0: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x2434e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2434e4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2434e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2434e8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2434e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2434ec: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x2434ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x2434f0: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x2434f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x2434f4: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x2434f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2434f8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2434f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2434fc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2434fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243500: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x243500u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x243504: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x243504u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x243508: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x243508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x24350c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24350cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243510: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243514: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x243514u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x243518: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x243518u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x24351c: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x24351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x243520: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243524: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243528: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x243528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x24352c: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x24352cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x243530: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x243530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x243534: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243538: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24353c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x24353cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x243540: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x243540u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x243544: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x243544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x243548: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24354c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x24354cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243550: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x243550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x243554: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x243554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x243558: 0x14c8ffbf  bne         $a2, $t0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x243558u;
    {
        const bool branch_taken_0x243558 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x24355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243558u;
        // 0x24355c: 0x261000c0  addiu       $s0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243558) {
            ctx->pc = 0x243458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243458;
        }
    }
    ctx->pc = 0x243560u;
label_243560:
    // 0x243560: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x243560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x243564: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x243564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x243568: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x243568u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x24356c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x243570: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243574: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x243574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243578: 0x14e0ff91  bnez        $a3, . + 4 + (-0x6F << 2)
    ctx->pc = 0x243578u;
    {
        const bool branch_taken_0x243578 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243578u;
        // 0x24357c: 0x7b290000  lq          $t1, 0x0($t9) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 25), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243578) {
            ctx->pc = 0x2433C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2433c0;
        }
    }
    ctx->pc = 0x243580u;
    // 0x243580: 0xc0908e0  jal         func_242380
    ctx->pc = 0x243580u;
    SET_GPR_U32(ctx, 31, 0x243588u);
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x243580u, 0x243588u)) {
        return;
    }
    ctx->pc = 0x243588u;
label_243588:
    // 0x243588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x243588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24358c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24358cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243590: 0xc090932  jal         func_2424C8
    ctx->pc = 0x243590u;
    SET_GPR_U32(ctx, 31, 0x243598u);
    ctx->pc = 0x243594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243590u;
    // 0x243594: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2424C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2424C8u, 0x243590u, 0x243598u)) {
        return;
    }
    ctx->pc = 0x243598u;
label_243598:
    // 0x243598: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x243598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24359c: 0x54e0ff78  bnel        $a3, $zero, . + 4 + (-0x88 << 2)
    ctx->pc = 0x24359Cu;
    {
        const bool branch_taken_0x24359c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24359c) {
            ctx->pc = 0x2435A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24359Cu;
            // 0x2435a0: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243380;
        }
    }
    ctx->pc = 0x2435A4u;
    // 0x2435a4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2435a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2435a8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2435a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2435ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2435acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2435b0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2435b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2435b4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2435b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2435b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2435b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2435bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2435BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2435C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435BCu;
        // 0x2435c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2435BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2435C4u;
    // 0x2435c4: 0x0  nop
    ctx->pc = 0x2435c4u;
    // NOP
    ctx->pc = 0x2435c8u;
}
