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

// Function: sub_00266330
// Address: 0x266330 - 0x266858
void sub_00266330_0x266330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266330_0x266330");
#endif

    switch (ctx->pc) {
        case 0x26634cu: goto label_26634c;
        case 0x2667f8u: goto label_2667f8;
        case 0x26683cu: goto label_26683c;
        default: break;
    }

    ctx->pc = 0x266330u;

    // 0x266330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266334: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x266334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x266338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x266338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26633c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266340: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x266340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266344: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x266344u;
    SET_GPR_U32(ctx, 31, 0x26634Cu);
    ctx->pc = 0x266348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266344u;
    // 0x266348: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x266344u, 0x26634Cu)) {
        return;
    }
    ctx->pc = 0x26634Cu;
label_26634c:
    // 0x26634c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26634cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x266350: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x266350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x266354: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x266354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266358: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x266358u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x26635c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26635cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x266360: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x266360u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x266364: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x266364u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x266368: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x266368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26636c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26636cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x266370: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x266370u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x266374: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x266374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x266378: 0xa2030047  sb          $v1, 0x47($s0)
    ctx->pc = 0x266378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 3));
    // 0x26637c: 0x3406d802  ori         $a2, $zero, 0xD802
    ctx->pc = 0x26637cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x266380: 0x63578  dsll        $a2, $a2, 21
    ctx->pc = 0x266380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 21);
    // 0x266384: 0x34c6fe80  ori         $a2, $a2, 0xFE80
    ctx->pc = 0x266384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65152);
    // 0x266388: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x266388u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x26638c: 0x34c68002  ori         $a2, $a2, 0x8002
    ctx->pc = 0x26638cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32770);
    // 0x266390: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x266390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x266394: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x266394u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x266398: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x266398u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x26639c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26639cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2663a0: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2663a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2663a4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x2663a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x2663a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2663a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2663ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2663acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2663b0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2663b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2663b4: 0x92030047  lbu         $v1, 0x47($s0)
    ctx->pc = 0x2663b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x2663b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2663b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2663bc: 0x8c424134  lw          $v0, 0x4134($v0)
    ctx->pc = 0x2663bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4134u));
    // 0x2663c0: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x2663c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x2663c4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2663c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2663c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2663c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2663cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2663CCu;
    {
        const bool branch_taken_0x2663cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2663D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663CCu;
        // 0x2663d0: 0xaf8390cc  sw          $v1, -0x6F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2663cc) {
            ctx->pc = 0x2663E8u;
            goto label_2663e8;
        }
    }
    ctx->pc = 0x2663D4u;
    // 0x2663d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2663d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2663d8: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x2663d8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x2663dc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2663dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2663e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2663E0u;
    {
        const bool branch_taken_0x2663e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2663E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663E0u;
        // 0x2663e4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2663e0) {
            ctx->pc = 0x2663F8u;
            goto label_2663f8;
        }
    }
    ctx->pc = 0x2663E8u;
label_2663e8:
    // 0x2663e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2663e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2663ec: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x2663ecu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x2663f0: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x2663f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2663f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2663f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2663f8:
    // 0x2663f8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2663f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2663fc: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x2663fcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x266400: 0x92060029  lbu         $a2, 0x29($s0)
    ctx->pc = 0x266400u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x266404: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x266404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x266408: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x266408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26640c: 0x8c423510  lw          $v0, 0x3510($v0)
    ctx->pc = 0x26640cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3510u));
    // 0x266410: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x266410u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x266414: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x266414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x266418: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x266418u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x26641c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x26641cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x266420: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x266420u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x266424: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x266424u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x266428: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x266428u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x26642c: 0xdc640f90  ld          $a0, 0xF90($v1)
    ctx->pc = 0x26642cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x266430: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x266430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x266434: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x266434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x266438: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x266438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x26643c: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x26643cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x266440: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x266440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x266444: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x266444u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x266448: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x266448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x26644c: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x26644cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x266450: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x266450u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x266454: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x266454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x266458: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x266458u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26645c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x26645cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x266460: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x266460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x266464: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x266464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x266468: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x266468u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26646c: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x26646cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x266470: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x266470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x266474: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x266474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x266478: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x266478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x26647c: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x26647cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x266480: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x266480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x266484: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x266484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x266488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x266488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26648c: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x26648cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x266490: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x266490u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x266494: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x266494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x266498: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x266498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26649c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26649cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2664a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2664a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2664a4: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x2664a4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x2664a8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2664a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2664ac: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x2664acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x2664b0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2664b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2664b4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2664b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2664b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2664B8u;
    {
        const bool branch_taken_0x2664b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664B8u;
        // 0x2664bc: 0x92020044  lbu         $v0, 0x44($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664b8) {
            ctx->pc = 0x2664D0u;
            goto label_2664d0;
        }
    }
    ctx->pc = 0x2664C0u;
    // 0x2664c0: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x2664c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x2664c4: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x2664c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x2664c8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2664c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2664cc: 0x0  nop
    ctx->pc = 0x2664ccu;
    // NOP
label_2664d0:
    // 0x2664d0: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x2664d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x2664d4: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x2664d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2664d8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2664d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2664dc: 0x0  nop
    ctx->pc = 0x2664dcu;
    // NOP
    // 0x2664e0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2664e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2664e4: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x2664e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x2664e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2664e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2664ec: 0x0  nop
    ctx->pc = 0x2664ecu;
    // NOP
    // 0x2664f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2664f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2664f4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2664f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2664f8: 0x0  nop
    ctx->pc = 0x2664f8u;
    // NOP
    // 0x2664fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2664fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x266500: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x266500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x266504: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x266504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x266508: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x266508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26650c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x26650cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266510: 0x0  nop
    ctx->pc = 0x266510u;
    // NOP
    // 0x266514: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x266514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x266518: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x266518u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26651c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x26651cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x266520: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x266520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x266524: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x266524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x266528: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x266528u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x26652c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x26652cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x266530: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x266530u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x266534: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x266534u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x266538: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x266538u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26653c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x26653cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x266540: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x266540u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x266544: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x266544u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x266548: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x266548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x26654c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26654cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x266550: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x266550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x266554: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x266554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x266558: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x266558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x26655c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x26655cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x266560: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x266560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x266564: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x266564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x266568: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x266568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x26656c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x266570: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x266570u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x266574: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x266574u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x266578: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x266578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x26657c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26657cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x266580: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x266580u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x266584: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x266584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x266588: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x266588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x26658c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x26658cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x266590: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x266590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x266594: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x266594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x266598: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x266598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26659c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2665a0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2665a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2665a4: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x2665a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2665a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2665a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2665ac: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x2665acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2665b0: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x2665b0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x2665b4: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x2665b4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x2665b8: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x2665b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2665bc: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x2665bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2665c0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x2665c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2665c4: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x2665c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2665c8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x2665c8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2665cc: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x2665ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x2665d0: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x2665d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2665d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2665d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2665d8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2665d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2665dc: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x2665dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2665e0: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x2665e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x2665e4: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x2665e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x2665e8: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x2665e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x2665ec: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x2665ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x2665f0: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x2665f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x2665f4: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x2665f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x2665f8: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x2665f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x2665fc: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x2665fcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x266600: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x266600u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x266604: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x266604u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x266608: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x266608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x26660c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26660cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x266610: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x266610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x266614: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x266614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x266618: 0x8c633560  lw          $v1, 0x3560($v1)
    ctx->pc = 0x266618u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3560u));
    // 0x26661c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26661Cu;
    {
        const bool branch_taken_0x26661c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x266620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26661Cu;
        // 0x266620: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26661c) {
            ctx->pc = 0x266630u;
            goto label_266630;
        }
    }
    ctx->pc = 0x266624u;
    // 0x266624: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x266624u;
    {
        const bool branch_taken_0x266624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266624) {
            ctx->pc = 0x266628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266624u;
            // 0x266628: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x266650u;
            goto label_266650;
        }
    }
    ctx->pc = 0x26662Cu;
    // 0x26662c: 0x0  nop
    ctx->pc = 0x26662cu;
    // NOP
label_266630:
    // 0x266630: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x266630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x266634: 0x8c423564  lw          $v0, 0x3564($v0)
    ctx->pc = 0x266634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3564u));
    // 0x266638: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x266638u;
    {
        const bool branch_taken_0x266638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266638u;
        // 0x26663c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266638) {
            ctx->pc = 0x266680u;
            goto label_266680;
        }
    }
    ctx->pc = 0x266640u;
    // 0x266640: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x266640u;
    {
        const bool branch_taken_0x266640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266640) {
            ctx->pc = 0x266644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266640u;
            // 0x266644: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266688u;
            goto label_266688;
        }
    }
    ctx->pc = 0x266648u;
    // 0x266648: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x266648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x26664c: 0x0  nop
    ctx->pc = 0x26664cu;
    // NOP
label_266650:
    // 0x266650: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x266650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x266654: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x266654u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x266658: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x266658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26665c: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x26665cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x266660: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x266660u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1030u));
    // 0x266664: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x266664u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x266668: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x266668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26666c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26666cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x266670: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x266670u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x266674: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x266674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x266678: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x266678u;
    {
        const bool branch_taken_0x266678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266678u;
        // 0x26667c: 0x24631040  addiu       $v1, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266678) {
            ctx->pc = 0x2666B0u;
            goto label_2666b0;
        }
    }
    ctx->pc = 0x266680u;
label_266680:
    // 0x266680: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x266680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x266684: 0x0  nop
    ctx->pc = 0x266684u;
    // NOP
label_266688:
    // 0x266688: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x266688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26668c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26668cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x266690: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x266690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x266694: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x266694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266698: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x266698u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26669c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26669cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2666a0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2666a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2666a4: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x2666a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2666a8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2666a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2666ac: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x2666acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_2666b0:
    // 0x2666b0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2666b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2666b4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2666b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2666b8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2666b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2666bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2666bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2666c0: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x2666c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2666c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2666c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2666c8: 0x8c634140  lw          $v1, 0x4140($v1)
    ctx->pc = 0x2666c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4140u));
    // 0x2666cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2666ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2666d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2666D0u;
    {
        const bool branch_taken_0x2666d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2666D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666D0u;
        // 0x2666d4: 0xaf8084e8  sw          $zero, -0x7B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666d0) {
            ctx->pc = 0x2666E4u;
            goto label_2666e4;
        }
    }
    ctx->pc = 0x2666D8u;
    // 0x2666d8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2666d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2666dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2666dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2666e0: 0xac223558  sw          $v0, 0x3558($at)
    ctx->pc = 0x2666e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3558u, _value); } while (0);
label_2666e4:
    // 0x2666e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2666e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2666e8: 0x9c42355c  lwu         $v0, 0x355C($v0)
    ctx->pc = 0x2666e8u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x6B355Cu));
    // 0x2666ec: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x2666ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2666f0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2666f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2666f4: 0x9c843558  lwu         $a0, 0x3558($a0)
    ctx->pc = 0x2666f4u;
    SET_GPR_ZE32(ctx, 4, FAST_READ32(0x6B3558u));
    // 0x2666f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2666f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2666fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2666fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x266700: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x266700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x266704: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x266704u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x266708: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x266708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26670c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x26670cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x266710: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x266710u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x266714: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x266714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x266718: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x266718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26671c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26671cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x266720: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x266720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x266724: 0x8c646ad4  lw          $a0, 0x6AD4($v1)
    ctx->pc = 0x266724u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x706AD4u));
    // 0x266728: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x266728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x26672c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26672cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x266730: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x266730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266734: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x266734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x266738: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x266738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26673c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x26673cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x266740: 0x8ca53554  lw          $a1, 0x3554($a1)
    ctx->pc = 0x266740u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3554u));
    // 0x266744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266748: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x266748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x26674c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26674cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266750: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266754: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x266754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266758: 0x10a6000d  beq         $a1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x266758u;
    {
        const bool branch_taken_0x266758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x26675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266758u;
        // 0x26675c: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266758) {
            ctx->pc = 0x266790u;
            goto label_266790;
        }
    }
    ctx->pc = 0x266760u;
    // 0x266760: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x266760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x266764: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x266764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x266768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x266768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26676c: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x26676cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x266770: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x266770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x266774: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x266774u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x266778: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x266778u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26677c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x26677cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x266780: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x266780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x266784: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x266784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x266788: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x266788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26678c: 0xac263554  sw          $a2, 0x3554($at)
    ctx->pc = 0x26678cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3554u, _value); } while (0);
label_266790:
    // 0x266790: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x266790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x266794: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x266794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266798: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x266798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26679c: 0xac69001c  sw          $t1, 0x1C($v1)
    ctx->pc = 0x26679cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 9));
    // 0x2667a0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2667a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2667a4: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x2667a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x2667a8: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x2667a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x2667ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2667acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2667b0: 0x3c070300  lui         $a3, 0x300
    ctx->pc = 0x2667b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)768 << 16));
    // 0x2667b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2667b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2667b8: 0x24aa0018  addiu       $t2, $a1, 0x18
    ctx->pc = 0x2667b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2667bc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2667bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2667c0: 0x9d440008  lwu         $a0, 0x8($t2)
    ctx->pc = 0x2667c0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2667c4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2667c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2667c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2667c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2667cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2667ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2667d0: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x2667d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x2667d4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2667d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2667d8: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x2667d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x2667dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2667dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2667e0: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x2667e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2667e4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2667e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2667e8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2667e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2667ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2667ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2667f0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2667f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2667f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2667f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2667f8:
    // 0x2667f8: 0x42000039  di
    ctx->pc = 0x2667f8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2667fc: 0x40f  sync.p
    ctx->pc = 0x2667fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x266800: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x266800u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x266804: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x266804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x266808: 0x0  nop
    ctx->pc = 0x266808u;
    // NOP
    // 0x26680c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26680Cu;
    {
        const bool branch_taken_0x26680c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26680c) {
            ctx->pc = 0x2667F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2667f8;
        }
    }
    ctx->pc = 0x266814u;
    // 0x266814: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x266814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x266818: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x266818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26681c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x26681cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x266820: 0x42000038  ei
    ctx->pc = 0x266820u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x266824: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x266824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x266828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x266828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26682c: 0x14490004  bne         $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26682Cu;
    {
        const bool branch_taken_0x26682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x266830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26682Cu;
        // 0x266830: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26682c) {
            ctx->pc = 0x266840u;
            goto label_266840;
        }
    }
    ctx->pc = 0x266834u;
    // 0x266834: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x266834u;
    SET_GPR_U32(ctx, 31, 0x26683Cu);
    ctx->pc = 0x266838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266834u;
    // 0x266838: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x266834u, 0x26683Cu)) {
        return;
    }
    ctx->pc = 0x26683Cu;
label_26683c:
    // 0x26683c: 0x0  nop
    ctx->pc = 0x26683cu;
    // NOP
label_266840:
    // 0x266840: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x266840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26684c: 0x3e00008  jr          $ra
    ctx->pc = 0x26684Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26684Cu;
        // 0x266850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26684Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266854u;
    // 0x266854: 0x0  nop
    ctx->pc = 0x266854u;
    // NOP
    ctx->pc = 0x266858u;
}
