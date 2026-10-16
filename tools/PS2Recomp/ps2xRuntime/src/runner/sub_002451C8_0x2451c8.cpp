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

// Function: sub_002451C8
// Address: 0x2451c8 - 0x245438
void sub_002451C8_0x2451c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002451C8_0x2451c8");
#endif

    switch (ctx->pc) {
        case 0x245210u: goto label_245210;
        case 0x245308u: goto label_245308;
        default: break;
    }

    ctx->pc = 0x2451c8u;

    // 0x2451c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2451c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2451cc: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x2451ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2451d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2451d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2451d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2451d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2451d8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2451d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451dc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2451dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2451e0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2451e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2451e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2451e8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2451e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451ec: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2451ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2451f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2451f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451f4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2451f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2451f8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2451f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2451fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245200: 0x1140003f  beqz        $t2, . + 4 + (0x3F << 2)
    ctx->pc = 0x245200u;
    {
        const bool branch_taken_0x245200 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x245204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245200u;
        // 0x245204: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245200) {
            ctx->pc = 0x245300u;
            goto label_245300;
        }
    }
    ctx->pc = 0x245208u;
    // 0x245208: 0xc08ba56  jal         func_22E958
    ctx->pc = 0x245208u;
    SET_GPR_U32(ctx, 31, 0x245210u);
    ctx->pc = 0x24520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245208u;
    // 0x24520c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E958u, 0x245208u, 0x245210u)) {
        return;
    }
    ctx->pc = 0x245210u;
label_245210:
    // 0x245210: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x245210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x245214: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x245214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x245218: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x245218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x24521c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x24521cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x245220: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x245220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x245224: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x245224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x245228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24522c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x245230: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x245230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x245234: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x245234u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x245238: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x245238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x24523c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x24523cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x245240: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x245240u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x245244: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x245244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x245248: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x245248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24524c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x24524cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x245250: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x245250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x245254: 0x24c64140  addiu       $a2, $a2, 0x4140
    ctx->pc = 0x245254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16704));
    // 0x245258: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x245258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24525c: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x24525cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x704170u));
    // 0x245260: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x245260u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x245264: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x245264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x245268: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x245268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24526c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x24526cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x704140u));
    // 0x245270: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x245270u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x245274: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x245274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x245278: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x245278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24527c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24527cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x245280: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x245280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x245284: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x245284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x245288: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x245288u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x24528c: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x24528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x245290: 0x32633fff  andi        $v1, $s3, 0x3FFF
    ctx->pc = 0x245290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
    // 0x245294: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x245294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x245298: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x245298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x24529c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24529cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2452a0: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2452a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2452a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2452a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2452a8: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x2452a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x2452ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2452acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2452b0: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2452b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2452b4: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x2452b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x2452b8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2452b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2452bc: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2452bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2452c0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2452c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2452c4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2452c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2452c8: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2452c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2452cc: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2452ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2452d0: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2452d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2452d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2452d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2452d8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2452d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2452dc: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x2452dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2452e0: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x2452e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2452e4: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x2452e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2452e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2452e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2452ec: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2452ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2452f0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2452f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2452f4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2452F4u;
    {
        const bool branch_taken_0x2452f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452F4u;
        // 0x2452f8: 0x7c820040  sq          $v0, 0x40($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452f4) {
            ctx->pc = 0x2453F0u;
            goto label_2453f0;
        }
    }
    ctx->pc = 0x2452FCu;
    // 0x2452fc: 0x0  nop
    ctx->pc = 0x2452fcu;
    // NOP
label_245300:
    // 0x245300: 0xc08ba56  jal         func_22E958
    ctx->pc = 0x245300u;
    SET_GPR_U32(ctx, 31, 0x245308u);
    ctx->pc = 0x245304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245300u;
    // 0x245304: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E958u, 0x245300u, 0x245308u)) {
        return;
    }
    ctx->pc = 0x245308u;
label_245308:
    // 0x245308: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x245308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x24530c: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x24530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x245310: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x245310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x245314: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x245314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x245318: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x245318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x24531c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x245320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245324: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x245324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x245328: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x245328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24532c: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x24532cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x245330: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x245330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x245334: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x245334u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x245338: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x245338u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24533c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x24533cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x245340: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x245340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x245344: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x245344u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x245348: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x245348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x24534c: 0x24c64140  addiu       $a2, $a2, 0x4140
    ctx->pc = 0x24534cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16704));
    // 0x245350: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x245350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x245354: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x245354u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x704170u));
    // 0x245358: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x245358u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24535c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24535cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x245360: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x245360u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x245364: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x245364u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x704140u));
    // 0x245368: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x245368u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x24536c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x24536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x245370: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x245370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x245374: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x245374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x245378: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x245378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x24537c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24537cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x245380: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x245380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x245384: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x245384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x245388: 0x32633fff  andi        $v1, $s3, 0x3FFF
    ctx->pc = 0x245388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
    // 0x24538c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x24538cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x245390: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x245390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x245394: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x245394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x245398: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x245398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x24539c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24539cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2453a0: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x2453a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x2453a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2453a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2453a8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2453a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2453ac: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x2453acu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x2453b0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2453b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2453b4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2453b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2453b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2453b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2453bc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2453bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2453c0: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2453c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2453c4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2453c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2453c8: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2453c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2453cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2453ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2453d0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2453d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2453d4: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x2453d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2453d8: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x2453d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2453dc: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x2453dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2453e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2453e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2453e4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2453e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2453e8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x2453e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2453ec: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x2453ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_2453f0:
    // 0x2453f0: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2453f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2453f4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2453f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2453f8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2453f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2453fc: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x2453fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x245400: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x245400u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x245404: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x245404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x245408: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x245408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24540c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x24540cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x245410: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x245410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x245414: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x245414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245418: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x245418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24541c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24541cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245420: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x245420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245424: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x245424u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24542c: 0x3e00008  jr          $ra
    ctx->pc = 0x24542Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24542Cu;
        // 0x245430: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24542Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245434u;
    // 0x245434: 0x0  nop
    ctx->pc = 0x245434u;
    // NOP
    ctx->pc = 0x245438u;
}
