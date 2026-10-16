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

// Function: sub_00232240
// Address: 0x232240 - 0x2324a0
void sub_00232240_0x232240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232240_0x232240");
#endif

    switch (ctx->pc) {
        case 0x23228cu: goto label_23228c;
        case 0x2322f4u: goto label_2322f4;
        case 0x232348u: goto label_232348;
        default: break;
    }

    ctx->pc = 0x232240u;

    // 0x232240: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x232240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x232244: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x232244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232248: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x232248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x23224c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x23224cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x232250: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x232250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232254: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x232254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x232258: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x232258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x23225c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x23225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x232260: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x232260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x232264: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x232264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x232268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23226c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x23226cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x232270: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x232270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x232274: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x232274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x232278: 0x1444007c  bne         $v0, $a0, . + 4 + (0x7C << 2)
    ctx->pc = 0x232278u;
    {
        const bool branch_taken_0x232278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x23227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232278u;
        // 0x23227c: 0x8f828448  lw          $v0, -0x7BB8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232278) {
            ctx->pc = 0x23246Cu;
            goto label_23246c;
        }
    }
    ctx->pc = 0x232280u;
    // 0x232280: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x232280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x232284: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x232284u;
    SET_GPR_U32(ctx, 31, 0x23228Cu);
    ctx->pc = 0x232288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232284u;
    // 0x232288: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x232284u, 0x23228Cu)) {
        return;
    }
    ctx->pc = 0x23228Cu;
label_23228c:
    // 0x23228c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x23228cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x232290: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x232290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x232294: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x232294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x232298: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x232298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23229c: 0x70642b89  pcpyld      $a1, $v1, $a0
    ctx->pc = 0x23229cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2322a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2322a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2322a4: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2322a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2322a8: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x2322a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x2322ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2322acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2322b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2322b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2322b4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2322b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2322b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2322b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322bc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2322bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2322c0: 0x70642b89  pcpyld      $a1, $v1, $a0
    ctx->pc = 0x2322c0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2322c4: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x2322c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x2322c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2322c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2322cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2322ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2322d0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2322d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2322d4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x2322d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2322d8: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x2322d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2322dc: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x2322dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x2322e0: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x2322e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x2322e4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2322E4u;
    {
        const bool branch_taken_0x2322e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2322e4) {
            ctx->pc = 0x2322E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2322E4u;
            // 0x2322e8: 0x8e080060  lw          $t0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2322F8u;
            goto label_2322f8;
        }
    }
    ctx->pc = 0x2322ECu;
    // 0x2322ec: 0xc08eab8  jal         func_23AAE0
    ctx->pc = 0x2322ECu;
    SET_GPR_U32(ctx, 31, 0x2322F4u);
    ctx->pc = 0x23AAE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23AAE0u, 0x2322ECu, 0x2322F4u)) {
        return;
    }
    ctx->pc = 0x2322F4u;
label_2322f4:
    // 0x2322f4: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x2322f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2322f8:
    // 0x2322f8: 0x91020023  lbu         $v0, 0x23($t0)
    ctx->pc = 0x2322f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 35)));
    // 0x2322fc: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x2322fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x232300: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x232300u;
    {
        const bool branch_taken_0x232300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232300u;
        // 0x232304: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232300) {
            ctx->pc = 0x232468u;
            goto label_232468;
        }
    }
    ctx->pc = 0x232308u;
    // 0x232308: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x232308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x23230c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x23230cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x232310: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x232310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232314: 0xdf838458  ld          $v1, -0x7BA8($gp)
    ctx->pc = 0x232314u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935640)));
    // 0x232318: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x232318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23231c: 0x8d160010  lw          $s6, 0x10($t0)
    ctx->pc = 0x23231cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x232320: 0x3143b  dsra        $v0, $v1, 16
    ctx->pc = 0x232320u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 16);
    // 0x232324: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x232324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x232328: 0x3052003f  andi        $s2, $v0, 0x3F
    ctx->pc = 0x232328u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x23232c: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x23232cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x232330: 0x71382  srl         $v0, $a3, 14
    ctx->pc = 0x232330u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
    // 0x232334: 0x39978  dsll        $s3, $v1, 5
    ctx->pc = 0x232334u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << 5);
    // 0x232338: 0x3054003f  andi        $s4, $v0, 0x3F
    ctx->pc = 0x232338u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x23233c: 0x30f13fff  andi        $s1, $a3, 0x3FFF
    ctx->pc = 0x23233cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x232340: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x232340u;
    SET_GPR_U32(ctx, 31, 0x232348u);
    ctx->pc = 0x232344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232340u;
    // 0x232344: 0x8d15000c  lw          $s5, 0xC($t0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x232340u, 0x232348u)) {
        return;
    }
    ctx->pc = 0x232348u;
label_232348:
    // 0x232348: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x232348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23234c: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x23234cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x232350: 0x34848004  ori         $a0, $a0, 0x8004
    ctx->pc = 0x232350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32772);
    // 0x232354: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x232354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x232358: 0x70642b89  pcpyld      $a1, $v1, $a0
    ctx->pc = 0x232358u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x23235c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x232360: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x232360u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x232364: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x232364u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x232368: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x232368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23236c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23236cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232370: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232370u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232374: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x232374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x232378: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x232378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x23237c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23237cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x232380: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x232380u;
    {
        const bool branch_taken_0x232380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232380u;
        // 0x232384: 0x3c041b00  lui         $a0, 0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6912 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232380) {
            ctx->pc = 0x2323C0u;
            goto label_2323c0;
        }
    }
    ctx->pc = 0x232388u;
    // 0x232388: 0x121438  dsll        $v0, $s2, 16
    ctx->pc = 0x232388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 16);
    // 0x23238c: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x23238cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x232390: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x232390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x232394: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x232394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x232398: 0x142c3c  dsll32      $a1, $s4, 16
    ctx->pc = 0x232398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 16));
    // 0x23239c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23239cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2323a0: 0x34049800  ori         $a0, $zero, 0x9800
    ctx->pc = 0x2323a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x2323a4: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2323a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2323a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2323a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2323ac: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2323acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2323b0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2323b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2323b4: 0x70622b89  pcpyld      $a1, $v1, $v0
    ctx->pc = 0x2323b4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2323b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2323B8u;
    {
        const bool branch_taken_0x2323b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2323BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323B8u;
        // 0x2323bc: 0x8f8390bc  lw          $v1, -0x6F44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323b8) {
            ctx->pc = 0x232400u;
            goto label_232400;
        }
    }
    ctx->pc = 0x2323C0u;
label_2323c0:
    // 0x2323c0: 0x3c042c00  lui         $a0, 0x2C00
    ctx->pc = 0x2323c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)11264 << 16));
    // 0x2323c4: 0x121438  dsll        $v0, $s2, 16
    ctx->pc = 0x2323c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 16);
    // 0x2323c8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2323c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2323cc: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2323ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2323d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2323d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2323d4: 0x142c3c  dsll32      $a1, $s4, 16
    ctx->pc = 0x2323d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2323d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2323d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2323dc: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x2323dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2323e0: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2323e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2323e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2323e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2323e8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2323e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2323ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2323ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2323f0: 0x70622b89  pcpyld      $a1, $v1, $v0
    ctx->pc = 0x2323f0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2323f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2323f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2323f8: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x2323f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2323fc: 0x0  nop
    ctx->pc = 0x2323fcu;
    // NOP
label_232400:
    // 0x232400: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x232400u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x232404: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x232404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232408: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23240c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23240cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232410: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x232410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x232414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232418: 0x70822b89  pcpyld      $a1, $a0, $v0
    ctx->pc = 0x232418u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x23241c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x23241cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x232420: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x232420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232424: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232428: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23242c: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x23242cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x232430: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x232430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x232434: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x232434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x232438: 0x70822b89  pcpyld      $a1, $a0, $v0
    ctx->pc = 0x232438u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x23243c: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x23243cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x232440: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x232440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x232444: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232448: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23244c: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x23244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x232450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x232450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232454: 0x70822b89  pcpyld      $a1, $a0, $v0
    ctx->pc = 0x232454u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232458: 0x7c650020  sq          $a1, 0x20($v1)
    ctx->pc = 0x232458u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 5));
    // 0x23245c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x23245cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x232460: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232464: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x232464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
label_232468:
    // 0x232468: 0x8f828448  lw          $v0, -0x7BB8($gp)
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_23246c:
    // 0x23246c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23246Cu;
    {
        const bool branch_taken_0x23246c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23246c) {
            ctx->pc = 0x232470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23246Cu;
            // 0x232470: 0xaf808448  sw          $zero, -0x7BB8($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232474u;
            goto label_232474;
        }
    }
    ctx->pc = 0x232474u;
label_232474:
    // 0x232474: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x232474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x232478: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23247c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x23247cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x232480: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x232480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232484: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x232484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x232488: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x232488u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23248c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x23248cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232490: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x232490u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232498: 0x3e00008  jr          $ra
    ctx->pc = 0x232498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232498u;
        // 0x23249c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2324A0u;
}
