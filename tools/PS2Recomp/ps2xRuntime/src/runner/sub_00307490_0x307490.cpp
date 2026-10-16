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

// Function: sub_00307490
// Address: 0x307490 - 0x3079b8
void sub_00307490_0x307490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307490_0x307490");
#endif

    switch (ctx->pc) {
        case 0x3074acu: goto label_3074ac;
        case 0x307958u: goto label_307958;
        case 0x30799cu: goto label_30799c;
        default: break;
    }

    ctx->pc = 0x307490u;

    // 0x307490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307494: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x307494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x307498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x307498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30749c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3074a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3074a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3074a4: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x3074A4u;
    SET_GPR_U32(ctx, 31, 0x3074ACu);
    ctx->pc = 0x3074A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074A4u;
    // 0x3074a8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x3074A4u, 0x3074ACu)) {
        return;
    }
    ctx->pc = 0x3074ACu;
label_3074ac:
    // 0x3074ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3074acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3074b0: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x3074b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x3074b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3074b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3074b8: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x3074b8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x3074bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3074bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3074c0: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x3074c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x3074c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3074c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3074c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3074c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3074cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3074ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x3074d0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x3074d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x3074d4: 0x3406d802  ori         $a2, $zero, 0xD802
    ctx->pc = 0x3074d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x3074d8: 0x63578  dsll        $a2, $a2, 21
    ctx->pc = 0x3074d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 21);
    // 0x3074dc: 0x34c6fe80  ori         $a2, $a2, 0xFE80
    ctx->pc = 0x3074dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65152);
    // 0x3074e0: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x3074e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x3074e4: 0x34c68002  ori         $a2, $a2, 0x8002
    ctx->pc = 0x3074e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32770);
    // 0x3074e8: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x3074e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x3074ec: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x3074ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x3074f0: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x3074f0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x3074f4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x3074f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x3074f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3074f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3074fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3074fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x307500: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x307500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x307504: 0x92030047  lbu         $v1, 0x47($s0)
    ctx->pc = 0x307504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x307508: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x307508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x30750c: 0x8c424134  lw          $v0, 0x4134($v0)
    ctx->pc = 0x30750cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4134u));
    // 0x307510: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x307510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x307514: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x307514u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x307518: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x307518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30751c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30751Cu;
    {
        const bool branch_taken_0x30751c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30751Cu;
        // 0x307520: 0xaf8390cc  sw          $v1, -0x6F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30751c) {
            ctx->pc = 0x307538u;
            goto label_307538;
        }
    }
    ctx->pc = 0x307524u;
    // 0x307524: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x307524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x307528: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x307528u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x30752c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x30752cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x307530: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x307530u;
    {
        const bool branch_taken_0x307530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307530u;
        // 0x307534: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307530) {
            ctx->pc = 0x307548u;
            goto label_307548;
        }
    }
    ctx->pc = 0x307538u;
label_307538:
    // 0x307538: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x307538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x30753c: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x30753cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x307540: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x307540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x307544: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307548:
    // 0x307548: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x307548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x30754c: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x30754cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x307550: 0x92060029  lbu         $a2, 0x29($s0)
    ctx->pc = 0x307550u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x307554: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x307554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x307558: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x307558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x30755c: 0x8c423510  lw          $v0, 0x3510($v0)
    ctx->pc = 0x30755cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3510u));
    // 0x307560: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x307560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x307564: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x307564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x307568: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x307568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x30756c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x30756cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x307570: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x307570u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x307574: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x307574u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x307578: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x307578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x30757c: 0xdc640f90  ld          $a0, 0xF90($v1)
    ctx->pc = 0x30757cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x307580: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x307580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x307584: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x307584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x307588: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x307588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x30758c: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x30758cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x307590: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x307590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x307594: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x307594u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x307598: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x307598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30759c: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x30759cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x3075a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3075a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3075a4: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x3075a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x3075a8: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x3075a8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x3075ac: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x3075acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x3075b0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3075b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3075b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3075b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x3075b8: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x3075b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x3075bc: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x3075bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x3075c0: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x3075c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x3075c4: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x3075c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x3075c8: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x3075c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x3075cc: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x3075ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x3075d0: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x3075d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x3075d4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3075d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3075d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3075d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3075dc: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x3075dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3075e0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3075e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3075e4: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x3075e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3075e8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3075e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x3075ec: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x3075ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x3075f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3075f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3075f4: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x3075f4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x3075f8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3075f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3075fc: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x3075fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x307600: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x307600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x307604: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x307604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x307608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x307608u;
    {
        const bool branch_taken_0x307608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307608u;
        // 0x30760c: 0x92020044  lbu         $v0, 0x44($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307608) {
            ctx->pc = 0x307620u;
            goto label_307620;
        }
    }
    ctx->pc = 0x307610u;
    // 0x307610: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x307610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x307614: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x307614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x307618: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x307618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30761c: 0x0  nop
    ctx->pc = 0x30761cu;
    // NOP
label_307620:
    // 0x307620: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x307620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x307624: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x307624u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x307628: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x307628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30762c: 0x0  nop
    ctx->pc = 0x30762cu;
    // NOP
    // 0x307630: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x307630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x307634: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x307634u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x307638: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x307638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30763c: 0x0  nop
    ctx->pc = 0x30763cu;
    // NOP
    // 0x307640: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x307640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x307644: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x307644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x307648: 0x0  nop
    ctx->pc = 0x307648u;
    // NOP
    // 0x30764c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30764cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x307650: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x307650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x307654: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x307654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x307658: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x307658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30765c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30765cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307660: 0x0  nop
    ctx->pc = 0x307660u;
    // NOP
    // 0x307664: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x307664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x307668: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x307668u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30766c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x30766cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x307670: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x307670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x307674: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x307674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x307678: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x307678u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x30767c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x30767cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x307680: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x307680u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x307684: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x307684u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x307688: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x307688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30768c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x30768cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x307690: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x307690u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x307694: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x307694u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x307698: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x307698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x30769c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x30769cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x3076a0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x3076a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x3076a4: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x3076a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x3076a8: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x3076a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x3076ac: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3076acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x3076b0: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x3076b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x3076b4: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x3076b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x3076b8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x3076b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x3076bc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3076bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3076c0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x3076c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3076c4: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x3076c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x3076c8: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x3076c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x3076cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3076ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x3076d0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x3076d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x3076d4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3076d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3076d8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3076d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3076dc: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x3076dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x3076e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3076e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3076e4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3076e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3076e8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3076e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3076ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3076ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3076f0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x3076f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3076f4: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x3076f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3076f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3076f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3076fc: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x3076fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x307700: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x307700u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x307704: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x307704u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x307708: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x307708u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x30770c: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x30770cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x307710: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x307710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x307714: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x307714u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x307718: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x307718u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x30771c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x30771cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x307720: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x307720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x307724: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x307724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x307728: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x307728u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x30772c: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x30772cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x307730: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x307730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x307734: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x307734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x307738: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x307738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x30773c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x30773cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x307740: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x307740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x307744: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x307744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x307748: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x307748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x30774c: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x30774cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x307750: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x307750u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x307754: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x307754u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x307758: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x307758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x30775c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x30775cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x307760: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x307760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x307764: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x307764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x307768: 0x8c633560  lw          $v1, 0x3560($v1)
    ctx->pc = 0x307768u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3560u));
    // 0x30776c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30776Cu;
    {
        const bool branch_taken_0x30776c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x307770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30776Cu;
        // 0x307770: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30776c) {
            ctx->pc = 0x307780u;
            goto label_307780;
        }
    }
    ctx->pc = 0x307774u;
    // 0x307774: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x307774u;
    {
        const bool branch_taken_0x307774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307774) {
            ctx->pc = 0x307778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307774u;
            // 0x307778: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3077A0u;
            goto label_3077a0;
        }
    }
    ctx->pc = 0x30777Cu;
    // 0x30777c: 0x0  nop
    ctx->pc = 0x30777cu;
    // NOP
label_307780:
    // 0x307780: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x307780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x307784: 0x8c423564  lw          $v0, 0x3564($v0)
    ctx->pc = 0x307784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3564u));
    // 0x307788: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x307788u;
    {
        const bool branch_taken_0x307788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307788u;
        // 0x30778c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307788) {
            ctx->pc = 0x3077D0u;
            goto label_3077d0;
        }
    }
    ctx->pc = 0x307790u;
    // 0x307790: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x307790u;
    {
        const bool branch_taken_0x307790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307790) {
            ctx->pc = 0x307794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307790u;
            // 0x307794: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3077D8u;
            goto label_3077d8;
        }
    }
    ctx->pc = 0x307798u;
    // 0x307798: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x307798u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x30779c: 0x0  nop
    ctx->pc = 0x30779cu;
    // NOP
label_3077a0:
    // 0x3077a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3077a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3077a4: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x3077a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x3077a8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3077a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3077ac: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x3077acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x3077b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3077b0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1030u));
    // 0x3077b4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3077b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3077b8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3077b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3077bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3077bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x3077c0: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x3077c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x3077c4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3077c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3077c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3077C8u;
    {
        const bool branch_taken_0x3077c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3077CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077C8u;
        // 0x3077cc: 0x24631040  addiu       $v1, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077c8) {
            ctx->pc = 0x307800u;
            goto label_307800;
        }
    }
    ctx->pc = 0x3077D0u;
label_3077d0:
    // 0x3077d0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3077d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3077d4: 0x0  nop
    ctx->pc = 0x3077d4u;
    // NOP
label_3077d8:
    // 0x3077d8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3077d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3077dc: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x3077dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x3077e0: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x3077e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x3077e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3077e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3077e8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3077e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3077ec: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3077ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3077f0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3077f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x3077f4: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x3077f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x3077f8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3077f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3077fc: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x3077fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_307800:
    // 0x307800: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x307800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x307804: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x307804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307808: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x307808u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x30780c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x30780cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x307810: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x307810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x307814: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x307814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x307818: 0x8c634140  lw          $v1, 0x4140($v1)
    ctx->pc = 0x307818u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4140u));
    // 0x30781c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307820: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307820u;
    {
        const bool branch_taken_0x307820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x307824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307820u;
        // 0x307824: 0xaf8084e8  sw          $zero, -0x7B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307820) {
            ctx->pc = 0x307834u;
            goto label_307834;
        }
    }
    ctx->pc = 0x307828u;
    // 0x307828: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x307828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30782c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x30782cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x307830: 0xac223558  sw          $v0, 0x3558($at)
    ctx->pc = 0x307830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3558u, _value); } while (0);
label_307834:
    // 0x307834: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x307834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x307838: 0x9c42355c  lwu         $v0, 0x355C($v0)
    ctx->pc = 0x307838u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x6B355Cu));
    // 0x30783c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x30783cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x307840: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x307840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x307844: 0x9c843558  lwu         $a0, 0x3558($a0)
    ctx->pc = 0x307844u;
    SET_GPR_ZE32(ctx, 4, FAST_READ32(0x6B3558u));
    // 0x307848: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x307848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30784c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x307850: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x307850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x307854: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x307854u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x307858: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x307858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x30785c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x30785cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x307860: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x307860u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x307864: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x307864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x307868: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x307868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x30786c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x30786cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x307870: 0x92030028  lbu         $v1, 0x28($s0)
    ctx->pc = 0x307870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x307874: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x307874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x307878: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x307878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x30787c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30787cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x307880: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x307880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x307884: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x307884u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x307888: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x307888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x30788c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30788cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x307890: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x307890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x307894: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x307894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x307898: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x307898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x30789c: 0x8ca53554  lw          $a1, 0x3554($a1)
    ctx->pc = 0x30789cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3554u));
    // 0x3078a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3078a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3078a4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3078a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3078a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3078a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3078ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3078acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3078b0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3078b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3078b4: 0x10a6000e  beq         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x3078B4u;
    {
        const bool branch_taken_0x3078b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3078B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078B4u;
        // 0x3078b8: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078b4) {
            ctx->pc = 0x3078F0u;
            goto label_3078f0;
        }
    }
    ctx->pc = 0x3078BCu;
    // 0x3078bc: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3078bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3078c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3078c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3078c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3078c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078c8: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3078c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3078cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3078ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3078d0: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x3078d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x3078d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3078d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3078d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3078d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3078dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3078dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x3078e0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x3078e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x3078e4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3078e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x3078e8: 0xac263554  sw          $a2, 0x3554($at)
    ctx->pc = 0x3078e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3554u, _value); } while (0);
    // 0x3078ec: 0x0  nop
    ctx->pc = 0x3078ecu;
    // NOP
label_3078f0:
    // 0x3078f0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3078f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3078f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3078f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3078f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3078f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3078fc: 0xac69001c  sw          $t1, 0x1C($v1)
    ctx->pc = 0x3078fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 9));
    // 0x307900: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x307900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x307904: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x307904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x307908: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x307908u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x30790c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30790cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307910: 0x3c070300  lui         $a3, 0x300
    ctx->pc = 0x307910u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)768 << 16));
    // 0x307914: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x307914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x307918: 0x24aa0018  addiu       $t2, $a1, 0x18
    ctx->pc = 0x307918u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x30791c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x30791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x307920: 0x9d440008  lwu         $a0, 0x8($t2)
    ctx->pc = 0x307920u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x307924: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x307924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x307928: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x307928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30792c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x307930: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x307930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x307934: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x307934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x307938: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x307938u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x30793c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x30793cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x307940: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x307940u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x307944: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x307944u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x307948: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x307948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30794c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x30794cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x307950: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x307950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x307954: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x307954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_307958:
    // 0x307958: 0x42000039  di
    ctx->pc = 0x307958u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x30795c: 0x40f  sync.p
    ctx->pc = 0x30795cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x307960: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x307960u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x307964: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x307964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x307968: 0x0  nop
    ctx->pc = 0x307968u;
    // NOP
    // 0x30796c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30796Cu;
    {
        const bool branch_taken_0x30796c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30796c) {
            ctx->pc = 0x307958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307958;
        }
    }
    ctx->pc = 0x307974u;
    // 0x307974: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x307974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x307978: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x307978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30797c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x30797cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x307980: 0x42000038  ei
    ctx->pc = 0x307980u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x307984: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x307984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x307988: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30798c: 0x14490004  bne         $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30798Cu;
    {
        const bool branch_taken_0x30798c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x307990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30798Cu;
        // 0x307990: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30798c) {
            ctx->pc = 0x3079A0u;
            goto label_3079a0;
        }
    }
    ctx->pc = 0x307994u;
    // 0x307994: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x307994u;
    SET_GPR_U32(ctx, 31, 0x30799Cu);
    ctx->pc = 0x307998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307994u;
    // 0x307998: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x307994u, 0x30799Cu)) {
        return;
    }
    ctx->pc = 0x30799Cu;
label_30799c:
    // 0x30799c: 0x0  nop
    ctx->pc = 0x30799cu;
    // NOP
label_3079a0:
    // 0x3079a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3079a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3079a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3079a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3079a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3079a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3079ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3079ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3079B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079ACu;
        // 0x3079b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3079ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3079B4u;
    // 0x3079b4: 0x0  nop
    ctx->pc = 0x3079b4u;
    // NOP
    ctx->pc = 0x3079b8u;
}
