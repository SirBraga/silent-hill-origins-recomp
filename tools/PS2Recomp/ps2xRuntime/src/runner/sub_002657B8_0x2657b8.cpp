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

// Function: sub_002657B8
// Address: 0x2657b8 - 0x265ce0
void sub_002657B8_0x2657b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002657B8_0x2657b8");
#endif

    switch (ctx->pc) {
        case 0x2657d4u: goto label_2657d4;
        case 0x265c80u: goto label_265c80;
        case 0x265cc4u: goto label_265cc4;
        default: break;
    }

    ctx->pc = 0x2657b8u;

    // 0x2657b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2657b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2657bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2657bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2657c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2657c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2657c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2657c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2657c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2657c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2657cc: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2657CCu;
    SET_GPR_U32(ctx, 31, 0x2657D4u);
    ctx->pc = 0x2657D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2657CCu;
    // 0x2657d0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2657CCu, 0x2657D4u)) {
        return;
    }
    ctx->pc = 0x2657D4u;
label_2657d4:
    // 0x2657d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2657d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2657d8: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x2657d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x2657dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2657dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2657e0: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x2657e0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x2657e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2657e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2657e8: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2657e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2657ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2657ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2657f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2657f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2657f4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2657f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2657f8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2657f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2657fc: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x2657fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x265800: 0xa2030047  sb          $v1, 0x47($s0)
    ctx->pc = 0x265800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 3));
    // 0x265804: 0x3406d802  ori         $a2, $zero, 0xD802
    ctx->pc = 0x265804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x265808: 0x63578  dsll        $a2, $a2, 21
    ctx->pc = 0x265808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 21);
    // 0x26580c: 0x34c6fe80  ori         $a2, $a2, 0xFE80
    ctx->pc = 0x26580cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65152);
    // 0x265810: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x265810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x265814: 0x34c68002  ori         $a2, $a2, 0x8002
    ctx->pc = 0x265814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32770);
    // 0x265818: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x265818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x26581c: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x26581cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x265820: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x265820u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x265824: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x265824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x265828: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x265828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26582c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x26582cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x265830: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x265830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x265834: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265838: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26583c: 0x92030047  lbu         $v1, 0x47($s0)
    ctx->pc = 0x26583cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x265840: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x265840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x265844: 0x8c424134  lw          $v0, 0x4134($v0)
    ctx->pc = 0x265844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4134u));
    // 0x265848: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x265848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x26584c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x26584cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x265850: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x265850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x265854: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265854u;
    {
        const bool branch_taken_0x265854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265854u;
        // 0x265858: 0xaf8390cc  sw          $v1, -0x6F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265854) {
            ctx->pc = 0x265870u;
            goto label_265870;
        }
    }
    ctx->pc = 0x26585Cu;
    // 0x26585c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26585cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x265860: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x265860u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x265864: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x265864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x265868: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x265868u;
    {
        const bool branch_taken_0x265868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265868u;
        // 0x26586c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265868) {
            ctx->pc = 0x265880u;
            goto label_265880;
        }
    }
    ctx->pc = 0x265870u;
label_265870:
    // 0x265870: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x265870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x265874: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x265874u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x265878: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x265878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x26587c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_265880:
    // 0x265880: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265884: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x265884u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x265888: 0x92060029  lbu         $a2, 0x29($s0)
    ctx->pc = 0x265888u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x26588c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26588cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x265890: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x265890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x265894: 0x8c423510  lw          $v0, 0x3510($v0)
    ctx->pc = 0x265894u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3510u));
    // 0x265898: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x265898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x26589c: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x26589cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x2658a0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2658a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2658a4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2658a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2658a8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2658a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2658ac: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x2658acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x2658b0: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x2658b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x2658b4: 0xdc640f90  ld          $a0, 0xF90($v1)
    ctx->pc = 0x2658b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x2658b8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2658b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2658bc: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x2658bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x2658c0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2658c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2658c4: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x2658c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x2658c8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x2658c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x2658cc: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2658ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2658d0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2658d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2658d4: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x2658d4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x2658d8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2658d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2658dc: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2658dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2658e0: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x2658e0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2658e4: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2658e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x2658e8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2658e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2658ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2658ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2658f0: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x2658f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2658f4: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x2658f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x2658f8: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x2658f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x2658fc: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x2658fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x265900: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x265900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x265904: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x265904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x265908: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x265908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x26590c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26590cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x265910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x265910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265914: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x265914u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x265918: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x265918u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x26591c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x26591cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x265920: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265924: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x265924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265928: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x265928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26592c: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26592cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x265930: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x265930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x265934: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x265934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x265938: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x265938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26593c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26593cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x265940: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265940u;
    {
        const bool branch_taken_0x265940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265940u;
        // 0x265944: 0x92020044  lbu         $v0, 0x44($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265940) {
            ctx->pc = 0x265958u;
            goto label_265958;
        }
    }
    ctx->pc = 0x265948u;
    // 0x265948: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x265948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x26594c: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x26594cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x265950: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x265950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x265954: 0x0  nop
    ctx->pc = 0x265954u;
    // NOP
label_265958:
    // 0x265958: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x265958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x26595c: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x26595cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x265960: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x265960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x265964: 0x0  nop
    ctx->pc = 0x265964u;
    // NOP
    // 0x265968: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x265968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x26596c: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x26596cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x265970: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x265970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x265974: 0x0  nop
    ctx->pc = 0x265974u;
    // NOP
    // 0x265978: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x265978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x26597c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x26597cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x265980: 0x0  nop
    ctx->pc = 0x265980u;
    // NOP
    // 0x265984: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x265984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x265988: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x265988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x26598c: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x26598cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x265990: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x265990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x265994: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x265994u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x265998: 0x0  nop
    ctx->pc = 0x265998u;
    // NOP
    // 0x26599c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26599cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2659a0: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x2659a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2659a4: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x2659a4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2659a8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x2659a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2659ac: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x2659acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2659b0: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x2659b0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x2659b4: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x2659b4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x2659b8: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x2659b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2659bc: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x2659bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2659c0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x2659c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2659c4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x2659c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2659c8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x2659c8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2659cc: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x2659ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x2659d0: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x2659d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2659d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2659d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2659d8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2659d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2659dc: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x2659dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x2659e0: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x2659e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x2659e4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x2659e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x2659e8: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x2659e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x2659ec: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x2659ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x2659f0: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x2659f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x2659f4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2659f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2659f8: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x2659f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x2659fc: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x2659fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x265a00: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x265a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x265a04: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265a08: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x265a08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265a0c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x265a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x265a10: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x265a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x265a14: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x265a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x265a18: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x265a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x265a1c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x265a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265a20: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x265a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265a24: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x265a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265a28: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x265a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265a2c: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x265a2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x265a30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x265a30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x265a34: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x265a34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x265a38: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x265a38u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x265a3c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x265a3cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x265a40: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x265a40u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x265a44: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x265a44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x265a48: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x265a48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x265a4c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x265a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x265a50: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x265a50u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x265a54: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x265a54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x265a58: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x265a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x265a5c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265a60: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x265a60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265a64: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x265a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x265a68: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x265a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x265a6c: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x265a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x265a70: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x265a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x265a74: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x265a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x265a78: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x265a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x265a7c: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x265a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x265a80: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x265a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x265a84: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x265a84u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x265a88: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x265a88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x265a8c: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x265a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x265a90: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x265a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x265a94: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265a98: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265a9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x265a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x265aa0: 0x8c633560  lw          $v1, 0x3560($v1)
    ctx->pc = 0x265aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3560u));
    // 0x265aa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x265AA4u;
    {
        const bool branch_taken_0x265aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265AA4u;
        // 0x265aa8: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265aa4) {
            ctx->pc = 0x265AB8u;
            goto label_265ab8;
        }
    }
    ctx->pc = 0x265AACu;
    // 0x265aac: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x265AACu;
    {
        const bool branch_taken_0x265aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265aac) {
            ctx->pc = 0x265AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265AACu;
            // 0x265ab0: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x265AD8u;
            goto label_265ad8;
        }
    }
    ctx->pc = 0x265AB4u;
    // 0x265ab4: 0x0  nop
    ctx->pc = 0x265ab4u;
    // NOP
label_265ab8:
    // 0x265ab8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x265ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x265abc: 0x8c423564  lw          $v0, 0x3564($v0)
    ctx->pc = 0x265abcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3564u));
    // 0x265ac0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x265AC0u;
    {
        const bool branch_taken_0x265ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265AC0u;
        // 0x265ac4: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ac0) {
            ctx->pc = 0x265B08u;
            goto label_265b08;
        }
    }
    ctx->pc = 0x265AC8u;
    // 0x265ac8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x265AC8u;
    {
        const bool branch_taken_0x265ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265ac8) {
            ctx->pc = 0x265ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265AC8u;
            // 0x265acc: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265B10u;
            goto label_265b10;
        }
    }
    ctx->pc = 0x265AD0u;
    // 0x265ad0: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x265ad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x265ad4: 0x0  nop
    ctx->pc = 0x265ad4u;
    // NOP
label_265ad8:
    // 0x265ad8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x265ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x265adc: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x265adcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x265ae0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x265ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x265ae4: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x265ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x265ae8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x265ae8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1030u));
    // 0x265aec: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x265aecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x265af0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x265af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x265af4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265af8: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x265af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265afc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x265afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x265b00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x265B00u;
    {
        const bool branch_taken_0x265b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B00u;
        // 0x265b04: 0x24631040  addiu       $v1, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b00) {
            ctx->pc = 0x265B38u;
            goto label_265b38;
        }
    }
    ctx->pc = 0x265B08u;
label_265b08:
    // 0x265b08: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x265b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x265b0c: 0x0  nop
    ctx->pc = 0x265b0cu;
    // NOP
label_265b10:
    // 0x265b10: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x265b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x265b14: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x265b14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x265b18: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x265b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x265b1c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x265b1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265b20: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x265b20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x265b24: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x265b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x265b28: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265b2c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x265b2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265b30: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x265b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x265b34: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x265b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_265b38:
    // 0x265b38: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x265b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x265b3c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x265b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265b40: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x265b40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x265b44: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265b48: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x265b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265b4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x265b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x265b50: 0x8c634140  lw          $v1, 0x4140($v1)
    ctx->pc = 0x265b50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4140u));
    // 0x265b54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x265b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265b58: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265B58u;
    {
        const bool branch_taken_0x265b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x265B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B58u;
        // 0x265b5c: 0xaf8084e8  sw          $zero, -0x7B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265b58) {
            ctx->pc = 0x265B6Cu;
            goto label_265b6c;
        }
    }
    ctx->pc = 0x265B60u;
    // 0x265b60: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x265b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x265b64: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265b68: 0xac223558  sw          $v0, 0x3558($at)
    ctx->pc = 0x265b68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3558u, _value); } while (0);
label_265b6c:
    // 0x265b6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x265b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x265b70: 0x9c42355c  lwu         $v0, 0x355C($v0)
    ctx->pc = 0x265b70u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x6B355Cu));
    // 0x265b74: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x265b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x265b78: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x265b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x265b7c: 0x9c843558  lwu         $a0, 0x3558($a0)
    ctx->pc = 0x265b7cu;
    SET_GPR_ZE32(ctx, 4, FAST_READ32(0x6B3558u));
    // 0x265b80: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x265b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x265b84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x265b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x265b88: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x265b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x265b8c: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x265b8cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x265b90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x265b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x265b94: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x265b94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x265b98: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x265b98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x265b9c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x265b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x265ba0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265ba4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265ba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265ba8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x265ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x265bac: 0x8c646ad4  lw          $a0, 0x6AD4($v1)
    ctx->pc = 0x265bacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x706AD4u));
    // 0x265bb0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x265bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x265bb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x265bb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x265bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x265bbc: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x265bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x265bc0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x265bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x265bc4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x265bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x265bc8: 0x8ca53554  lw          $a1, 0x3554($a1)
    ctx->pc = 0x265bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3554u));
    // 0x265bcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x265bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265bd0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x265bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x265bd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265bdc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x265bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265be0: 0x10a6000d  beq         $a1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x265BE0u;
    {
        const bool branch_taken_0x265be0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x265BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265BE0u;
        // 0x265be4: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265be0) {
            ctx->pc = 0x265C18u;
            goto label_265c18;
        }
    }
    ctx->pc = 0x265BE8u;
    // 0x265be8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x265be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x265bec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x265becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x265bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x265bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265bf4: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x265bf4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x265bf8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x265bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x265bfc: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x265bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x265c00: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x265c00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x265c04: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x265c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x265c08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265c0c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x265c0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265c10: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265c14: 0xac263554  sw          $a2, 0x3554($at)
    ctx->pc = 0x265c14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3554u, _value); } while (0);
label_265c18:
    // 0x265c18: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x265c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x265c1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x265c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265c20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x265c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265c24: 0xac69001c  sw          $t1, 0x1C($v1)
    ctx->pc = 0x265c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 9));
    // 0x265c28: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x265c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x265c2c: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x265c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x265c30: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x265c30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x265c34: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x265c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265c38: 0x3c070300  lui         $a3, 0x300
    ctx->pc = 0x265c38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)768 << 16));
    // 0x265c3c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x265c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x265c40: 0x24aa0018  addiu       $t2, $a1, 0x18
    ctx->pc = 0x265c40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x265c44: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x265c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x265c48: 0x9d440008  lwu         $a0, 0x8($t2)
    ctx->pc = 0x265c48u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x265c4c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x265c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x265c50: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x265c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x265c54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x265c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x265c58: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x265c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x265c5c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x265c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x265c60: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x265c60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x265c64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x265c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x265c68: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x265c68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x265c6c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x265c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x265c70: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x265c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x265c74: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265c78: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x265c78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265c7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x265c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_265c80:
    // 0x265c80: 0x42000039  di
    ctx->pc = 0x265c80u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x265c84: 0x40f  sync.p
    ctx->pc = 0x265c84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x265c88: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x265c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x265c8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x265c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x265c90: 0x0  nop
    ctx->pc = 0x265c90u;
    // NOP
    // 0x265c94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x265C94u;
    {
        const bool branch_taken_0x265c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265c94) {
            ctx->pc = 0x265C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265c80;
        }
    }
    ctx->pc = 0x265C9Cu;
    // 0x265c9c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x265c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x265ca0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x265ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x265ca4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x265ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x265ca8: 0x42000038  ei
    ctx->pc = 0x265ca8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x265cac: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x265cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x265cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265cb4: 0x14490004  bne         $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x265CB4u;
    {
        const bool branch_taken_0x265cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x265CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265CB4u;
        // 0x265cb8: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265cb4) {
            ctx->pc = 0x265CC8u;
            goto label_265cc8;
        }
    }
    ctx->pc = 0x265CBCu;
    // 0x265cbc: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x265CBCu;
    SET_GPR_U32(ctx, 31, 0x265CC4u);
    ctx->pc = 0x265CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265CBCu;
    // 0x265cc0: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x265CBCu, 0x265CC4u)) {
        return;
    }
    ctx->pc = 0x265CC4u;
label_265cc4:
    // 0x265cc4: 0x0  nop
    ctx->pc = 0x265cc4u;
    // NOP
label_265cc8:
    // 0x265cc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x265cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x265CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265CD4u;
        // 0x265cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265CDCu;
    // 0x265cdc: 0x0  nop
    ctx->pc = 0x265cdcu;
    // NOP
    ctx->pc = 0x265ce0u;
}
