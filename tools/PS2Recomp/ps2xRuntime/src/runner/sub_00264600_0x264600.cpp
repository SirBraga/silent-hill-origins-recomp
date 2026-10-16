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

// Function: sub_00264600
// Address: 0x264600 - 0x264dd8
void sub_00264600_0x264600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264600_0x264600");
#endif

    switch (ctx->pc) {
        case 0x2646b8u: goto label_2646b8;
        case 0x2647a8u: goto label_2647a8;
        case 0x264960u: goto label_264960;
        default: break;
    }

    ctx->pc = 0x264600u;

    // 0x264600: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x264600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x264604: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x264604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264608: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x264608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x26460c: 0x70427b89  pcpyld      $t7, $v0, $v0
    ctx->pc = 0x26460cu;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x264610: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x264610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x264614: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x264614u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264618: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x264618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x26461c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x26461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x264620: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x264620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x264624: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x264624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x264628: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x264628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x26462c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x26462cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x264630: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x264630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x264634: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x264634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x264638: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x264638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26463c: 0x8ec50030  lw          $a1, 0x30($s6)
    ctx->pc = 0x26463cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x264640: 0x907300b6  lbu         $s3, 0xB6($v1)
    ctx->pc = 0x264640u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 182)));
    // 0x264644: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x264644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x264648: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x264648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x26464c: 0x248e0018  addiu       $t6, $a0, 0x18
    ctx->pc = 0x26464cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x264650: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264654: 0x8dc50020  lw          $a1, 0x20($t6)
    ctx->pc = 0x264654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x264658: 0x8dc4000c  lw          $a0, 0xC($t6)
    ctx->pc = 0x264658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x26465c: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x26465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x264660: 0x8dc3001c  lw          $v1, 0x1C($t6)
    ctx->pc = 0x264660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x264664: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x264664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x264668: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x264668u;
    {
        const bool branch_taken_0x264668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264668u;
        // 0x26466c: 0x8dc90008  lw          $t1, 0x8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264668) {
            ctx->pc = 0x264694u;
            goto label_264694;
        }
    }
    ctx->pc = 0x264670u;
    // 0x264670: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x264670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264674: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x264674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x264678: 0x800013  mtlo        $a0
    ctx->pc = 0x264678u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x26467c: 0x90e700b9  lbu         $a3, 0xB9($a3)
    ctx->pc = 0x26467cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 185)));
    // 0x264680: 0x70e20000  madd        $zero, $a3, $v0
    ctx->pc = 0x264680u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x264684: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x264684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x264688: 0x1812  mflo        $v1
    ctx->pc = 0x264688u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x26468c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26468Cu;
    {
        const bool branch_taken_0x26468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26468Cu;
        // 0x264690: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26468c) {
            ctx->pc = 0x2646A4u;
            goto label_2646a4;
        }
    }
    ctx->pc = 0x264694u;
label_264694:
    // 0x264694: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x264694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264698: 0x90a501f1  lbu         $a1, 0x1F1($a1)
    ctx->pc = 0x264698u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 497)));
    // 0x26469c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x26469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2646a0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x2646a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_2646a4:
    // 0x2646a4: 0x8dc3001c  lw          $v1, 0x1C($t6)
    ctx->pc = 0x2646a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x2646a8: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2646a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2646ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2646acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2646b0: 0x186001ae  blez        $v1, . + 4 + (0x1AE << 2)
    ctx->pc = 0x2646B0u;
    {
        const bool branch_taken_0x2646b0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2646B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646B0u;
        // 0x2646b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646b0) {
            ctx->pc = 0x264D6Cu;
            goto label_264d6c;
        }
    }
    ctx->pc = 0x2646B8u;
label_2646b8:
    // 0x2646b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2646b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2646bc: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x2646bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2646c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2646C0u;
    {
        const bool branch_taken_0x2646c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2646c0) {
            ctx->pc = 0x2646C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2646C0u;
            // 0x2646c4: 0x8dc20018  lw          $v0, 0x18($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2646D0u;
            goto label_2646d0;
        }
    }
    ctx->pc = 0x2646C8u;
    // 0x2646c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2646C8u;
    {
        const bool branch_taken_0x2646c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2646CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646C8u;
        // 0x2646cc: 0x8dcb0018  lw          $t3, 0x18($t6) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646c8) {
            ctx->pc = 0x2646DCu;
            goto label_2646dc;
        }
    }
    ctx->pc = 0x2646D0u;
label_2646d0:
    // 0x2646d0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x2646d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2646d4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2646d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2646d8: 0xe25823  subu        $t3, $a3, $v0
    ctx->pc = 0x2646d8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2646dc:
    // 0x2646dc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2646dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2646e0: 0x2a3001b  divu        $zero, $s5, $v1
    ctx->pc = 0x2646e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
    // 0x2646e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2646E4u;
    {
        const bool branch_taken_0x2646e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2646e4) {
            ctx->pc = 0x2646E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2646E4u;
            // 0x2646e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2646ECu;
            goto label_2646ec;
        }
    }
    ctx->pc = 0x2646ECu;
label_2646ec:
    // 0x2646ec: 0x1010  mfhi        $v0
    ctx->pc = 0x2646ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2646f0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2646F0u;
    {
        const bool branch_taken_0x2646f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2646f0) {
            ctx->pc = 0x2646F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2646F0u;
            // 0x2646f4: 0x8ec20024  lw          $v0, 0x24($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26475Cu;
            goto label_26475c;
        }
    }
    ctx->pc = 0x2646F8u;
    // 0x2646f8: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x2646f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x2646fc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2646fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x264700: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x264700u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x264704: 0x34038800  ori         $v1, $zero, 0x8800
    ctx->pc = 0x264704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x264708: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x264708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26470c: 0x34638800  ori         $v1, $v1, 0x8800
    ctx->pc = 0x26470cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34816);
    // 0x264710: 0x31b78  dsll        $v1, $v1, 13
    ctx->pc = 0x264710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 13);
    // 0x264714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x264714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264718: 0x15180b  movn        $v1, $zero, $s5
    ctx->pc = 0x264718u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x26471c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x264720: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x264720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264724: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x264724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264728: 0x90a400b4  lbu         $a0, 0xB4($a1)
    ctx->pc = 0x264728u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x26472c: 0x70672b89  pcpyld      $a1, $v1, $a3
    ctx->pc = 0x26472cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x264730: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x264730u;
    {
        const bool branch_taken_0x264730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x264730) {
            ctx->pc = 0x264734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264730u;
            // 0x264734: 0x7e850000  sq          $a1, 0x0($s4) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264750u;
            goto label_264750;
        }
    }
    ctx->pc = 0x264738u;
    // 0x264738: 0x52a00005  beql        $s5, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x264738u;
    {
        const bool branch_taken_0x264738 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x264738) {
            ctx->pc = 0x26473Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264738u;
            // 0x26473c: 0x7e850000  sq          $a1, 0x0($s4) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264750u;
            goto label_264750;
        }
    }
    ctx->pc = 0x264740u;
    // 0x264740: 0xfe870000  sd          $a3, 0x0($s4)
    ctx->pc = 0x264740u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 7));
    // 0x264744: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x264744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264748: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264748u;
    {
        const bool branch_taken_0x264748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264748u;
        // 0x26474c: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264748) {
            ctx->pc = 0x264758u;
            goto label_264758;
        }
    }
    ctx->pc = 0x264750u;
label_264750:
    // 0x264750: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x264750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264754: 0x26890010  addiu       $t1, $s4, 0x10
    ctx->pc = 0x264754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_264758:
    // 0x264758: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x264758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_26475c:
    // 0x26475c: 0x26a70001  addiu       $a3, $s5, 0x1
    ctx->pc = 0x26475cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x264760: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x264760u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264764: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x264764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264768: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x264768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x26476c: 0x18400077  blez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x26476Cu;
    {
        const bool branch_taken_0x26476c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x264770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26476Cu;
        // 0x264770: 0xafa70018  sw          $a3, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26476c) {
            ctx->pc = 0x26494Cu;
            goto label_26494c;
        }
    }
    ctx->pc = 0x264774u;
    // 0x264774: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x264774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x264778: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x264778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x26477c: 0x8fbe0000  lw          $fp, 0x0($sp)
    ctx->pc = 0x26477cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264780: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x264780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x264784: 0x3c12ff00  lui         $s2, 0xFF00
    ctx->pc = 0x264784u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65280 << 16));
    // 0x264788: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x264788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x26478c: 0x27d80020  addiu       $t8, $fp, 0x20
    ctx->pc = 0x26478cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x264790: 0x25c20098  addiu       $v0, $t6, 0x98
    ctx->pc = 0x264790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 152));
    // 0x264794: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x264794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264798: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x264798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x26479c: 0x25d7009c  addiu       $s7, $t6, 0x9C
    ctx->pc = 0x26479cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 14), 156));
    // 0x2647a0: 0x36524000  ori         $s2, $s2, 0x4000
    ctx->pc = 0x2647a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16384);
    // 0x2647a4: 0x300c82d  daddu       $t9, $t8, $zero
    ctx->pc = 0x2647a4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_2647a8:
    // 0x2647a8: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x2647a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2647ac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2647acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2647b0: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2647B0u;
    {
        const bool branch_taken_0x2647b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2647B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647B0u;
        // 0x2647b4: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647b0) {
            ctx->pc = 0x26492Cu;
            goto label_26492c;
        }
    }
    ctx->pc = 0x2647B8u;
    // 0x2647b8: 0x5440005d  bnel        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x2647B8u;
    {
        const bool branch_taken_0x2647b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2647b8) {
            ctx->pc = 0x2647BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2647B8u;
            // 0x2647bc: 0x8ec30024  lw          $v1, 0x24($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264930u;
            goto label_264930;
        }
    }
    ctx->pc = 0x2647C0u;
    // 0x2647c0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x2647c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2647c4: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x2647c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x2647c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2647c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2647cc: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2647CCu;
    {
        const bool branch_taken_0x2647cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2647D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647CCu;
        // 0x2647d0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647cc) {
            ctx->pc = 0x26483Cu;
            goto label_26483c;
        }
    }
    ctx->pc = 0x2647D4u;
    // 0x2647d4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2647D4u;
    {
        const bool branch_taken_0x2647d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2647D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647D4u;
        // 0x2647d8: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647d4) {
            ctx->pc = 0x264814u;
            goto label_264814;
        }
    }
    ctx->pc = 0x2647DCu;
    // 0x2647dc: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x2647dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x2647e0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2647E0u;
    {
        const bool branch_taken_0x2647e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2647E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647E0u;
        // 0x2647e4: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647e0) {
            ctx->pc = 0x264834u;
            goto label_264834;
        }
    }
    ctx->pc = 0x2647E8u;
    // 0x2647e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2647E8u;
    {
        const bool branch_taken_0x2647e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2647ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647E8u;
        // 0x2647ec: 0x3c1e6500  lui         $fp, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647e8) {
            ctx->pc = 0x264804u;
            goto label_264804;
        }
    }
    ctx->pc = 0x2647F0u;
    // 0x2647f0: 0x3c076000  lui         $a3, 0x6000
    ctx->pc = 0x2647f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24576 << 16));
    // 0x2647f4: 0x1067000d  beq         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2647F4u;
    {
        const bool branch_taken_0x2647f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2647F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647F4u;
        // 0x2647f8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647f4) {
            ctx->pc = 0x26482Cu;
            goto label_26482c;
        }
    }
    ctx->pc = 0x2647FCu;
    // 0x2647fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2647FCu;
    {
        const bool branch_taken_0x2647fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647FCu;
        // 0x264800: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647fc) {
            ctx->pc = 0x26484Cu;
            goto label_26484c;
        }
    }
    ctx->pc = 0x264804u;
label_264804:
    // 0x264804: 0x107e0009  beq         $v1, $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x264804u;
    {
        const bool branch_taken_0x264804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x264808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264804u;
        // 0x264808: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264804) {
            ctx->pc = 0x26482Cu;
            goto label_26482c;
        }
    }
    ctx->pc = 0x26480Cu;
    // 0x26480c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26480Cu;
    {
        const bool branch_taken_0x26480c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26480Cu;
        // 0x264810: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26480c) {
            ctx->pc = 0x26484Cu;
            goto label_26484c;
        }
    }
    ctx->pc = 0x264814u;
label_264814:
    // 0x264814: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264814u;
    {
        const bool branch_taken_0x264814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x264818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264814u;
        // 0x264818: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264814) {
            ctx->pc = 0x264834u;
            goto label_264834;
        }
    }
    ctx->pc = 0x26481Cu;
    // 0x26481c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26481Cu;
    {
        const bool branch_taken_0x26481c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26481Cu;
        // 0x264820: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26481c) {
            ctx->pc = 0x264844u;
            goto label_264844;
        }
    }
    ctx->pc = 0x264824u;
    // 0x264824: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264824u;
    {
        const bool branch_taken_0x264824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x264828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264824u;
        // 0x264828: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264824) {
            ctx->pc = 0x264848u;
            goto label_264848;
        }
    }
    ctx->pc = 0x26482Cu;
label_26482c:
    // 0x26482c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26482Cu;
    {
        const bool branch_taken_0x26482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26482Cu;
        // 0x264830: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26482c) {
            ctx->pc = 0x264848u;
            goto label_264848;
        }
    }
    ctx->pc = 0x264834u;
label_264834:
    // 0x264834: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264834u;
    {
        const bool branch_taken_0x264834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264834u;
        // 0x264838: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264834) {
            ctx->pc = 0x264848u;
            goto label_264848;
        }
    }
    ctx->pc = 0x26483Cu;
label_26483c:
    // 0x26483c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26483Cu;
    {
        const bool branch_taken_0x26483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26483Cu;
        // 0x264840: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26483c) {
            ctx->pc = 0x264848u;
            goto label_264848;
        }
    }
    ctx->pc = 0x264844u;
label_264844:
    // 0x264844: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x264844u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_264848:
    // 0x264848: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x264848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_26484c:
    // 0x26484c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x26484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x264850: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x264850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x264854: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264854u;
    {
        const bool branch_taken_0x264854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264854u;
        // 0x264858: 0x8c4c0000  lw          $t4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264854) {
            ctx->pc = 0x264864u;
            goto label_264864;
        }
    }
    ctx->pc = 0x26485Cu;
    // 0x26485c: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x26485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x264860: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x264860u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_264864:
    // 0x264864: 0x16a3018  mult        $a2, $t3, $t2
    ctx->pc = 0x264864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x264868: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x264868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x26486c: 0x8dc50018  lw          $a1, 0x18($t6)
    ctx->pc = 0x26486cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x264870: 0x1d01821  addu        $v1, $t6, $s0
    ctx->pc = 0x264870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x264874: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x264874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x264878: 0x906800a6  lbu         $t0, 0xA6($v1)
    ctx->pc = 0x264878u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 166)));
    // 0x26487c: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x26487cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x264880: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x264880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264884: 0x24c70003  addiu       $a3, $a2, 0x3
    ctx->pc = 0x264884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x264888: 0x241efffc  addiu       $fp, $zero, -0x4
    ctx->pc = 0x264888u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x26488c: 0xfe1824  and         $v1, $a3, $fp
    ctx->pc = 0x26488cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 30));
    // 0x264890: 0x8f240000  lw          $a0, 0x0($t9)
    ctx->pc = 0x264890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x264894: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x264894u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x264898: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x264898u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x26489c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26489cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2648a0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2648a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2648a4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2648a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2648a8: 0x8dc60008  lw          $a2, 0x8($t6)
    ctx->pc = 0x2648a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2648ac: 0x6a001a  div         $zero, $v1, $t2
    ctx->pc = 0x2648acu;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2648b0: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x2648b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x2648b4: 0xc2900  sll         $a1, $t4, 4
    ctx->pc = 0x2648b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x2648b8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2648b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2648bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2648bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2648c0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2648c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2648c4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2648c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2648c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2648c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2648cc: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x2648ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x2648d0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2648d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2648d4: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x2648d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2648d8: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2648D8u;
    {
        const bool branch_taken_0x2648d8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648d8) {
            ctx->pc = 0x2648DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2648D8u;
            // 0x2648dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2648E0u;
            goto label_2648e0;
        }
    }
    ctx->pc = 0x2648E0u;
label_2648e0:
    // 0x2648e0: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x2648e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x2648e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2648e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2648e8: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x2648e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x2648ec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2648ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2648f0: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x2648f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2648f4: 0x1812  mflo        $v1
    ctx->pc = 0x2648f4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2648f8: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x2648f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2648fc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2648fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x264900: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x264900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x264904: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x264904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x264908: 0x5e2025  or          $a0, $v0, $fp
    ctx->pc = 0x264908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x26490c: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x26490cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x264910: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x264910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264914: 0x7e850000  sq          $a1, 0x0($s4)
    ctx->pc = 0x264914u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 5));
    // 0x264918: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x264918u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x26491c: 0x70472b89  pcpyld      $a1, $v0, $a3
    ctx->pc = 0x26491cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x264920: 0x25340010  addiu       $s4, $t1, 0x10
    ctx->pc = 0x264920u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x264924: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x264924u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x264928: 0x26890010  addiu       $t1, $s4, 0x10
    ctx->pc = 0x264928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_26492c:
    // 0x26492c: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x26492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_264930:
    // 0x264930: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x264930u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x264934: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x264934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x264938: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x264938u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x26493c: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x26493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x264940: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x264940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x264944: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x264944u;
    {
        const bool branch_taken_0x264944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264944u;
        // 0x264948: 0x27390008  addiu       $t9, $t9, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264944) {
            ctx->pc = 0x2647A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2647a8;
        }
    }
    ctx->pc = 0x26494Cu;
label_26494c:
    // 0x26494c: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x26494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x264950: 0x184000f6  blez        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x264950u;
    {
        const bool branch_taken_0x264950 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x264954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264950u;
        // 0x264954: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264950) {
            ctx->pc = 0x264D2Cu;
            goto label_264d2c;
        }
    }
    ctx->pc = 0x264958u;
    // 0x264958: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x264958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26495c: 0x0  nop
    ctx->pc = 0x26495cu;
    // NOP
label_264960:
    // 0x264960: 0xd10c0  sll         $v0, $t5, 3
    ctx->pc = 0x264960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x264964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x264964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264968: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x264968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x26496c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x26496cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264970: 0x106000e8  beqz        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x264970u;
    {
        const bool branch_taken_0x264970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264970u;
        // 0x264974: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264970) {
            ctx->pc = 0x264D14u;
            goto label_264d14;
        }
    }
    ctx->pc = 0x264978u;
    // 0x264978: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x264978u;
    {
        const bool branch_taken_0x264978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264978u;
        // 0x26497c: 0x2da2000c  sltiu       $v0, $t5, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264978) {
            ctx->pc = 0x264D14u;
            goto label_264d14;
        }
    }
    ctx->pc = 0x264980u;
    // 0x264980: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x264980u;
    {
        const bool branch_taken_0x264980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264980u;
        // 0x264984: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264980) {
            ctx->pc = 0x264D14u;
            goto label_264d14;
        }
    }
    ctx->pc = 0x264988u;
    // 0x264988: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x264988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x26498c: 0x2442b960  addiu       $v0, $v0, -0x46A0
    ctx->pc = 0x26498cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949216));
    // 0x264990: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x264990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264994: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264998: 0x800008  jr          $a0
    ctx->pc = 0x264998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2649A0u: goto label_2649a0;
            case 0x264A18u: goto label_264a18;
            case 0x264A80u: goto label_264a80;
            case 0x264AF4u: goto label_264af4;
            case 0x264B5Cu: goto label_264b5c;
            case 0x264BC8u: goto label_264bc8;
            case 0x264C40u: goto label_264c40;
            case 0x264CA4u: goto label_264ca4;
            case 0x264D14u: goto label_264d14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264998u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2649A0u;
label_2649a0:
    // 0x2649a0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2649A0u;
    {
        const bool branch_taken_0x2649a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2649a0) {
            ctx->pc = 0x2649B4u;
            goto label_2649b4;
        }
    }
    ctx->pc = 0x2649A8u;
    // 0x2649a8: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x2649a8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2649ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2649ACu;
    {
        const bool branch_taken_0x2649ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2649B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649ACu;
        // 0x2649b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649ac) {
            ctx->pc = 0x2649BCu;
            goto label_2649bc;
        }
    }
    ctx->pc = 0x2649B4u;
label_2649b4:
    // 0x2649b4: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x2649b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2649b8: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x2649b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_2649bc:
    // 0x2649bc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2649bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2649c0: 0x3c036800  lui         $v1, 0x6800
    ctx->pc = 0x2649c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26624 << 16));
    // 0x2649c4: 0x1a61018  mult        $v0, $t5, $a2
    ctx->pc = 0x2649c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2649c8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2649c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2649cc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2649ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2649d0: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x2649d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x2649d4: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x2649d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x2649d8: 0x4e3021  addu        $a2, $v0, $t6
    ctx->pc = 0x2649d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2649dc: 0x90c500a6  lbu         $a1, 0xA6($a2)
    ctx->pc = 0x2649dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 166)));
    // 0x2649e0: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x2649e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x2649e4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2649e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2649e8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2649e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2649ec: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x2649ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2649f0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2649f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2649f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2649f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2649f8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2649f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2649fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2649fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x264a00: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x264a00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x264a04: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x264a04u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x264a08: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x264a08u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x264a0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x264a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x264a10: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x264A10u;
    {
        const bool branch_taken_0x264a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A10u;
        // 0x264a14: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a10) {
            ctx->pc = 0x264D0Cu;
            goto label_264d0c;
        }
    }
    ctx->pc = 0x264A18u;
label_264a18:
    // 0x264a18: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264A18u;
    {
        const bool branch_taken_0x264a18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x264a18) {
            ctx->pc = 0x264A2Cu;
            goto label_264a2c;
        }
    }
    ctx->pc = 0x264A20u;
    // 0x264a20: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x264a20u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x264a24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264A24u;
    {
        const bool branch_taken_0x264a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A24u;
        // 0x264a28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a24) {
            ctx->pc = 0x264A34u;
            goto label_264a34;
        }
    }
    ctx->pc = 0x264A2Cu;
label_264a2c:
    // 0x264a2c: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x264a2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x264a30: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x264a30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_264a34:
    // 0x264a34: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x264a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x264a38: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x264a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x264a3c: 0x1a51018  mult        $v0, $t5, $a1
    ctx->pc = 0x264a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264a40: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x264a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x264a44: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x264a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x264a48: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x264a48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x264a4c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x264a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x264a50: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x264a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x264a54: 0x4e2821  addu        $a1, $v0, $t6
    ctx->pc = 0x264a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x264a58: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x264a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x264a5c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x264a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x264a60: 0x90a200a6  lbu         $v0, 0xA6($a1)
    ctx->pc = 0x264a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 166)));
    // 0x264a64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x264a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x264a68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x264a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x264a6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x264a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x264a70: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x264a70u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x264a74: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x264a74u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x264a78: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x264A78u;
    {
        const bool branch_taken_0x264a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A78u;
        // 0x264a7c: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a78) {
            ctx->pc = 0x264D0Cu;
            goto label_264d0c;
        }
    }
    ctx->pc = 0x264A80u;
label_264a80:
    // 0x264a80: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264A80u;
    {
        const bool branch_taken_0x264a80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x264a80) {
            ctx->pc = 0x264A94u;
            goto label_264a94;
        }
    }
    ctx->pc = 0x264A88u;
    // 0x264a88: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x264a88u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x264a8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264A8Cu;
    {
        const bool branch_taken_0x264a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A8Cu;
        // 0x264a90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a8c) {
            ctx->pc = 0x264A9Cu;
            goto label_264a9c;
        }
    }
    ctx->pc = 0x264A94u;
label_264a94:
    // 0x264a94: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x264a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x264a98: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x264a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_264a9c:
    // 0x264a9c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x264a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x264aa0: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x264aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x264aa4: 0x1a61018  mult        $v0, $t5, $a2
    ctx->pc = 0x264aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264aa8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x264aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x264aac: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x264aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x264ab0: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x264ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x264ab4: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x264ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x264ab8: 0x4e3021  addu        $a2, $v0, $t6
    ctx->pc = 0x264ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x264abc: 0x90c500a6  lbu         $a1, 0xA6($a2)
    ctx->pc = 0x264abcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 166)));
    // 0x264ac0: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x264ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x264ac4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x264ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x264ac8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x264ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x264acc: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x264accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x264ad0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x264ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x264ad4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x264ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x264ad8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x264ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x264adc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x264adcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x264ae0: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x264ae0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x264ae4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x264ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x264ae8: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x264ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x264aec: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x264AECu;
    {
        const bool branch_taken_0x264aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AECu;
        // 0x264af0: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264aec) {
            ctx->pc = 0x264D0Cu;
            goto label_264d0c;
        }
    }
    ctx->pc = 0x264AF4u;
label_264af4:
    // 0x264af4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264AF4u;
    {
        const bool branch_taken_0x264af4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x264af4) {
            ctx->pc = 0x264B08u;
            goto label_264b08;
        }
    }
    ctx->pc = 0x264AFCu;
    // 0x264afc: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x264afcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x264b00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264B00u;
    {
        const bool branch_taken_0x264b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B00u;
        // 0x264b04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b00) {
            ctx->pc = 0x264B10u;
            goto label_264b10;
        }
    }
    ctx->pc = 0x264B08u;
label_264b08:
    // 0x264b08: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x264b08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x264b0c: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x264b0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_264b10:
    // 0x264b10: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x264b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x264b14: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x264b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x264b18: 0x1a51018  mult        $v0, $t5, $a1
    ctx->pc = 0x264b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264b1c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x264b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x264b20: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x264b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x264b24: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x264b24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x264b28: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x264b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x264b2c: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x264b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x264b30: 0x4e2821  addu        $a1, $v0, $t6
    ctx->pc = 0x264b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x264b34: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x264b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x264b38: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x264b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x264b3c: 0x90a200a6  lbu         $v0, 0xA6($a1)
    ctx->pc = 0x264b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 166)));
    // 0x264b40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x264b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x264b44: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x264b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x264b48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x264b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x264b4c: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x264b4cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x264b50: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x264b50u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x264b54: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x264B54u;
    {
        const bool branch_taken_0x264b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B54u;
        // 0x264b58: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b54) {
            ctx->pc = 0x264D0Cu;
            goto label_264d0c;
        }
    }
    ctx->pc = 0x264B5Cu;
label_264b5c:
    // 0x264b5c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264B5Cu;
    {
        const bool branch_taken_0x264b5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b5c) {
            ctx->pc = 0x264B70u;
            goto label_264b70;
        }
    }
    ctx->pc = 0x264B64u;
    // 0x264b64: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x264b64u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x264b68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264B68u;
    {
        const bool branch_taken_0x264b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B68u;
        // 0x264b6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b68) {
            ctx->pc = 0x264B78u;
            goto label_264b78;
        }
    }
    ctx->pc = 0x264B70u;
label_264b70:
    // 0x264b70: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x264b70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x264b74: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x264b74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_264b78:
    // 0x264b78: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x264b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x264b7c: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x264b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x264b80: 0x1a61818  mult        $v1, $t5, $a2
    ctx->pc = 0x264b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x264b84: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x264b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x264b88: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x264b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x264b8c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x264b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x264b90: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x264b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x264b94: 0x6e3021  addu        $a2, $v1, $t6
    ctx->pc = 0x264b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x264b98: 0x90c500a6  lbu         $a1, 0xA6($a2)
    ctx->pc = 0x264b98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 166)));
    // 0x264b9c: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x264b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x264ba0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x264ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x264ba4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x264ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x264ba8: 0x25630003  addiu       $v1, $t3, 0x3
    ctx->pc = 0x264ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x264bac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x264bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x264bb0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x264bb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x264bb4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x264bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x264bb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x264bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x264bbc: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x264bbcu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x264bc0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x264BC0u;
    {
        const bool branch_taken_0x264bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BC0u;
        // 0x264bc4: 0x7d250000  sq          $a1, 0x0($t1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bc0) {
            ctx->pc = 0x264D08u;
            goto label_264d08;
        }
    }
    ctx->pc = 0x264BC8u;
label_264bc8:
    // 0x264bc8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264BC8u;
    {
        const bool branch_taken_0x264bc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x264bc8) {
            ctx->pc = 0x264BDCu;
            goto label_264bdc;
        }
    }
    ctx->pc = 0x264BD0u;
    // 0x264bd0: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x264bd0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x264bd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264BD4u;
    {
        const bool branch_taken_0x264bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BD4u;
        // 0x264bd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bd4) {
            ctx->pc = 0x264BE4u;
            goto label_264be4;
        }
    }
    ctx->pc = 0x264BDCu;
label_264bdc:
    // 0x264bdc: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x264bdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x264be0: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x264be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_264be4:
    // 0x264be4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x264be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x264be8: 0x3c036a00  lui         $v1, 0x6A00
    ctx->pc = 0x264be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27136 << 16));
    // 0x264bec: 0x1a61018  mult        $v0, $t5, $a2
    ctx->pc = 0x264becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264bf0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x264bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x264bf4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x264bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x264bf8: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x264bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x264bfc: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x264bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x264c00: 0x4e3021  addu        $a2, $v0, $t6
    ctx->pc = 0x264c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x264c04: 0x90c500a6  lbu         $a1, 0xA6($a2)
    ctx->pc = 0x264c04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 166)));
    // 0x264c08: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x264c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x264c0c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x264c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x264c10: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x264c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x264c14: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x264c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x264c18: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x264c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x264c1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x264c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x264c20: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x264c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x264c24: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x264c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x264c28: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x264c28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x264c2c: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x264c2cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x264c30: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x264c30u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x264c34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x264c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x264c38: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x264C38u;
    {
        const bool branch_taken_0x264c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C38u;
        // 0x264c3c: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c38) {
            ctx->pc = 0x264D0Cu;
            goto label_264d0c;
        }
    }
    ctx->pc = 0x264C40u;
label_264c40:
    // 0x264c40: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264C40u;
    {
        const bool branch_taken_0x264c40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c40) {
            ctx->pc = 0x264C54u;
            goto label_264c54;
        }
    }
    ctx->pc = 0x264C48u;
    // 0x264c48: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x264c48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x264c4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264C4Cu;
    {
        const bool branch_taken_0x264c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C4Cu;
        // 0x264c50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c4c) {
            ctx->pc = 0x264C5Cu;
            goto label_264c5c;
        }
    }
    ctx->pc = 0x264C54u;
label_264c54:
    // 0x264c54: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x264c54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x264c58: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x264c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_264c5c:
    // 0x264c5c: 0x1732818  mult        $a1, $t3, $s3
    ctx->pc = 0x264c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x264c60: 0x3c046800  lui         $a0, 0x6800
    ctx->pc = 0x264c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26624 << 16));
    // 0x264c64: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x264c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x264c68: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x264c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x264c6c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x264c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x264c70: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x264c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x264c74: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x264c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x264c78: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x264c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x264c7c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x264c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x264c80: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x264c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x264c84: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x264c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x264c88: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x264c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x264c8c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x264c8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x264c90: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x264c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x264c94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x264c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x264c98: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x264c98u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x264c9c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x264C9Cu;
    {
        const bool branch_taken_0x264c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C9Cu;
        // 0x264ca0: 0x7d250000  sq          $a1, 0x0($t1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c9c) {
            ctx->pc = 0x264D08u;
            goto label_264d08;
        }
    }
    ctx->pc = 0x264CA4u;
label_264ca4:
    // 0x264ca4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264CA4u;
    {
        const bool branch_taken_0x264ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x264ca4) {
            ctx->pc = 0x264CB8u;
            goto label_264cb8;
        }
    }
    ctx->pc = 0x264CACu;
    // 0x264cac: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x264cacu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x264cb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264CB0u;
    {
        const bool branch_taken_0x264cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CB0u;
        // 0x264cb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264cb0) {
            ctx->pc = 0x264CC0u;
            goto label_264cc0;
        }
    }
    ctx->pc = 0x264CB8u;
label_264cb8:
    // 0x264cb8: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x264cb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x264cbc: 0x73afc  dsll32      $a3, $a3, 11
    ctx->pc = 0x264cbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 11));
label_264cc0:
    // 0x264cc0: 0x26b1018  mult        $v0, $s3, $t3
    ctx->pc = 0x264cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264cc4: 0x3c046a00  lui         $a0, 0x6A00
    ctx->pc = 0x264cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27136 << 16));
    // 0x264cc8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x264cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x264ccc: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x264cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x264cd0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x264cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x264cd4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x264cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x264cd8: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x264cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x264cdc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x264cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x264ce0: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x264ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x264ce4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x264ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x264ce8: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x264ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x264cec: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x264cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x264cf0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x264cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x264cf4: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x264cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x264cf8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x264cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x264cfc: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x264cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x264d00: 0x70872b89  pcpyld      $a1, $a0, $a3
    ctx->pc = 0x264d00u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x264d04: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x264d04u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
label_264d08:
    // 0x264d08: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x264d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_264d0c:
    // 0x264d0c: 0x7d2f0000  sq          $t7, 0x0($t1)
    ctx->pc = 0x264d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 15));
    // 0x264d10: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x264d10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_264d14:
    // 0x264d14: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x264d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x264d18: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x264d18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x264d1c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x264d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x264d20: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x264d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x264d24: 0x1440ff0e  bnez        $v0, . + 4 + (-0xF2 << 2)
    ctx->pc = 0x264D24u;
    {
        const bool branch_taken_0x264d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D24u;
        // 0x264d28: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d24) {
            ctx->pc = 0x264960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264960;
        }
    }
    ctx->pc = 0x264D2Cu;
label_264d2c:
    // 0x264d2c: 0x3403a800  ori         $v1, $zero, 0xA800
    ctx->pc = 0x264d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x264d30: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x264d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x264d34: 0x3407b800  ori         $a3, $zero, 0xB800
    ctx->pc = 0x264d34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47104);
    // 0x264d38: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x264d38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x264d3c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x264d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x264d40: 0x75380a  movz        $a3, $v1, $s5
    ctx->pc = 0x264d40u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3));
    // 0x264d44: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x264d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x264d48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x264d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d4c: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x264d4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x264d50: 0x8fb50018  lw          $s5, 0x18($sp)
    ctx->pc = 0x264d50u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264d54: 0x70672b89  pcpyld      $a1, $v1, $a3
    ctx->pc = 0x264d54u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x264d58: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x264d58u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x264d5c: 0x8dc3001c  lw          $v1, 0x1C($t6)
    ctx->pc = 0x264d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x264d60: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x264d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x264d64: 0x1440fe54  bnez        $v0, . + 4 + (-0x1AC << 2)
    ctx->pc = 0x264D64u;
    {
        const bool branch_taken_0x264d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D64u;
        // 0x264d68: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d64) {
            ctx->pc = 0x2646B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2646b8;
        }
    }
    ctx->pc = 0x264D6Cu;
label_264d6c:
    // 0x264d6c: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x264d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x264d70: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x264d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x264d74: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x264d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x264d78: 0x34048800  ori         $a0, $zero, 0x8800
    ctx->pc = 0x264d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x264d7c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x264d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x264d80: 0x34848800  ori         $a0, $a0, 0x8800
    ctx->pc = 0x264d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34816);
    // 0x264d84: 0x42378  dsll        $a0, $a0, 13
    ctx->pc = 0x264d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 13);
    // 0x264d88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x264d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264d8c: 0xfd24fff8  sd          $a0, -0x8($t1)
    ctx->pc = 0x264d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 4294967288), GPR_U64(ctx, 4));
    // 0x264d90: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x264d90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x264d94: 0xfe870000  sd          $a3, 0x0($s4)
    ctx->pc = 0x264d94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 7));
    // 0x264d98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x264d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264d9c: 0x906200b4  lbu         $v0, 0xB4($v1)
    ctx->pc = 0x264d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x264da0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x264DA0u;
    {
        const bool branch_taken_0x264da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264da0) {
            ctx->pc = 0x264DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264DA0u;
            // 0x264da4: 0xfe800008  sd          $zero, 0x8($s4) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264DA8u;
            goto label_264da8;
        }
    }
    ctx->pc = 0x264DA8u;
label_264da8:
    // 0x264da8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x264da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x264dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264db0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x264db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x264db4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x264db4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264db8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x264db8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x264dbc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x264dbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x264dc0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x264dc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264dc4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x264dc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264dc8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x264dc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264dcc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x264dccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x264DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DD0u;
        // 0x264dd4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264DD8u;
}
