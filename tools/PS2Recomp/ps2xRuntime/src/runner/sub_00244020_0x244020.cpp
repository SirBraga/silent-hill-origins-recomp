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

// Function: sub_00244020
// Address: 0x244020 - 0x2442f0
void sub_00244020_0x244020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244020_0x244020");
#endif

    switch (ctx->pc) {
        case 0x244080u: goto label_244080;
        case 0x2440c0u: goto label_2440c0;
        case 0x244158u: goto label_244158;
        case 0x2442a8u: goto label_2442a8;
        case 0x2442b8u: goto label_2442b8;
        default: break;
    }

    ctx->pc = 0x244020u;

    // 0x244020: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x244020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244024: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x244024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x244028: 0x102001b  divu        $zero, $t0, $v0
    ctx->pc = 0x244028u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x24402c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x24402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x244030: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x244030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x244034: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x244034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x244038: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x244038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x24403c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24403cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244040: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x244040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x244044: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x244044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244048: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x244048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x24404c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x24404cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244050: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x244050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x244054: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x244054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244058: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x244058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x24405c: 0x24770fe0  addiu       $s7, $v1, 0xFE0
    ctx->pc = 0x24405cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x244060: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x244060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x244064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244068: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x244068u;
    {
        const bool branch_taken_0x244068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244068) {
            ctx->pc = 0x24406Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244068u;
            // 0x24406c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x244070u;
            goto label_244070;
        }
    }
    ctx->pc = 0x244070u;
label_244070:
    // 0x244070: 0x4012  mflo        $t0
    ctx->pc = 0x244070u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x244074: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x244074u;
    {
        const bool branch_taken_0x244074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244074u;
        // 0x244078: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244074) {
            ctx->pc = 0x2442A8u;
            goto label_2442a8;
        }
    }
    ctx->pc = 0x24407Cu;
    // 0x24407c: 0x0  nop
    ctx->pc = 0x24407cu;
    // NOP
label_244080:
    // 0x244080: 0x3c0d7c00  lui         $t5, 0x7C00
    ctx->pc = 0x244080u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)31744 << 16));
    // 0x244084: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x244084u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x244088: 0x7aeb0000  lq          $t3, 0x0($s7)
    ctx->pc = 0x244088u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24408c: 0x24540f40  addiu       $s4, $v0, 0xF40
    ctx->pc = 0x24408cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x244090: 0x2499023  subu        $s2, $s2, $t1
    ctx->pc = 0x244090u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x244094: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x244094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244098: 0x2419000c  addiu       $t9, $zero, 0xC
    ctx->pc = 0x244098u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24409c: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x24409cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x2440a0: 0x3c0f0400  lui         $t7, 0x400
    ctx->pc = 0x2440a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1024 << 16));
    // 0x2440a4: 0x340e8002  ori         $t6, $zero, 0x8002
    ctx->pc = 0x2440a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x2440a8: 0xe75b8  dsll        $t6, $t6, 22
    ctx->pc = 0x2440a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 22);
    // 0x2440ac: 0x35ce8000  ori         $t6, $t6, 0x8000
    ctx->pc = 0x2440acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)32768);
    // 0x2440b0: 0xe74f8  dsll        $t6, $t6, 19
    ctx->pc = 0x2440b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 19);
    // 0x2440b4: 0x35ad8000  ori         $t5, $t5, 0x8000
    ctx->pc = 0x2440b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
    // 0x2440b8: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x2440b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x2440bc: 0x0  nop
    ctx->pc = 0x2440bcu;
    // NOP
label_2440c0:
    // 0x2440c0: 0x2d220011  sltiu       $v0, $t1, 0x11
    ctx->pc = 0x2440c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x2440c4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2440c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440c8: 0x122400b  movn        $t0, $t1, $v0
    ctx->pc = 0x2440c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9));
    // 0x2440cc: 0x1192018  mult        $a0, $t0, $t9
    ctx->pc = 0x2440ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2440d0: 0x10f1825  or          $v1, $t0, $t7
    ctx->pc = 0x2440d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x2440d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2440d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2440d8: 0x1284823  subu        $t1, $t1, $t0
    ctx->pc = 0x2440d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2440dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2440dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2440e0: 0x6e2825  or          $a1, $v1, $t6
    ctx->pc = 0x2440e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x2440e4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2440e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2440e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2440e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2440ec: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x2440ecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x2440f0: 0x581825  or          $v1, $v0, $t8
    ctx->pc = 0x2440f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x2440f4: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x2440f4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x2440f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2440f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2440fc: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2440fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x244100: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x244100u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x244104: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x244104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x244108: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24410c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x24410cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244110: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x244110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x244114: 0x8d2025  or          $a0, $a0, $t5
    ctx->pc = 0x244114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
    // 0x244118: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x244118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x24411c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24411cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x244120: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x244120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x244124: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x244124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x244128: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x244128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x24412c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x24412cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x244130: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x244130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x244134: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x244134u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x244138: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x244138u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24413c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x244140: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x244140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x244144: 0x110c004e  beq         $t0, $t4, . + 4 + (0x4E << 2)
    ctx->pc = 0x244144u;
    {
        const bool branch_taken_0x244144 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        ctx->pc = 0x244148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244144u;
        // 0x244148: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244144) {
            ctx->pc = 0x244280u;
            goto label_244280;
        }
    }
    ctx->pc = 0x24414Cu;
    // 0x24414c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x24414cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x244150: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x244150u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x244154: 0x0  nop
    ctx->pc = 0x244154u;
    // NOP
label_244158:
    // 0x244158: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x244158u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24415c: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x24415cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x244160: 0x96070004  lhu         $a3, 0x4($s0)
    ctx->pc = 0x244160u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x244164: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x244164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x244168: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x244168u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x24416c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x24416cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x244170: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x244170u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x244174: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x244174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x244178: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x244178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x24417c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24417cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x244180: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x244180u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x244184: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x244184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x244188: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x244188u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24418c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x24418cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x244190: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244194: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x244194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244198: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x244198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x24419c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x24419cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2441a0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x2441a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2441a4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2441a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2441a8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2441a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2441ac: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x2441acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2441b0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2441b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2441b4: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x2441b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2441b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2441b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2441bc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2441bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2441c0: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x2441c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2441c4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2441c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2441c8: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2441c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2441cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2441ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2441d0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2441d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2441d4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2441d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2441d8: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2441d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2441dc: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2441dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2441e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2441e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2441e4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2441e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2441e8: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2441e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2441ec: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x2441ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x2441f0: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2441f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2441f4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2441f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2441f8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2441f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2441fc: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x2441fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x244200: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x244200u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x244204: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x244204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x244208: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24420c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24420cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244210: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x244210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x244214: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x244214u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x244218: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x244218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x24421c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24421cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244220: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x244220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244224: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x244224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x244228: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x244228u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x24422c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x24422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x244230: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244234: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x244234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244238: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x244238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x24423c: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x24423cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x244240: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x244240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x244244: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244248: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x244248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24424c: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x24424cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x244250: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x244250u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x244254: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x244254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x244258: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24425c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24425cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244260: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x244260u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x244264: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x244264u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x244268: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x244268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x24426c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24426cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244270: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x244270u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244274: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x244274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x244278: 0x150affb7  bne         $t0, $t2, . + 4 + (-0x49 << 2)
    ctx->pc = 0x244278u;
    {
        const bool branch_taken_0x244278 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x24427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244278u;
        // 0x24427c: 0x26100006  addiu       $s0, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244278) {
            ctx->pc = 0x244158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244158;
        }
    }
    ctx->pc = 0x244280u;
label_244280:
    // 0x244280: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x244280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x244284: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x244284u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x244288: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x244288u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
    // 0x24428c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x244290: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244294: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x244294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x244298: 0x1520ff89  bnez        $t1, . + 4 + (-0x77 << 2)
    ctx->pc = 0x244298u;
    {
        const bool branch_taken_0x244298 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x24429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244298u;
        // 0x24429c: 0x7a8b0000  lq          $t3, 0x0($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244298) {
            ctx->pc = 0x2440C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2440c0;
        }
    }
    ctx->pc = 0x2442A0u;
    // 0x2442a0: 0xc0908e0  jal         func_242380
    ctx->pc = 0x2442A0u;
    SET_GPR_U32(ctx, 31, 0x2442A8u);
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x2442A0u, 0x2442A8u)) {
        return;
    }
    ctx->pc = 0x2442A8u;
label_2442a8:
    // 0x2442a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2442a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2442acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442b0: 0xc090932  jal         func_2424C8
    ctx->pc = 0x2442B0u;
    SET_GPR_U32(ctx, 31, 0x2442B8u);
    ctx->pc = 0x2442B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2442B0u;
    // 0x2442b4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2424C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2424C8u, 0x2442B0u, 0x2442B8u)) {
        return;
    }
    ctx->pc = 0x2442B8u;
label_2442b8:
    // 0x2442b8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2442b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442bc: 0x5520ff70  bnel        $t1, $zero, . + 4 + (-0x90 << 2)
    ctx->pc = 0x2442BCu;
    {
        const bool branch_taken_0x2442bc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2442bc) {
            ctx->pc = 0x2442C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2442BCu;
            // 0x2442c0: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244080;
        }
    }
    ctx->pc = 0x2442C4u;
    // 0x2442c4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2442c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2442c8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2442c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2442cc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2442ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2442d0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2442d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2442d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2442d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2442d8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2442d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2442dc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2442dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2442e0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2442e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2442e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2442e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2442e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2442E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2442ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442E8u;
        // 0x2442ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2442E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2442F0u;
}
