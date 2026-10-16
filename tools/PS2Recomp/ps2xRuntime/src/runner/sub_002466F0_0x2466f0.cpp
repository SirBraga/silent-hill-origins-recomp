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

// Function: sub_002466F0
// Address: 0x2466f0 - 0x246a20
void sub_002466F0_0x2466f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002466F0_0x2466f0");
#endif

    switch (ctx->pc) {
        case 0x246724u: goto label_246724;
        case 0x246770u: goto label_246770;
        case 0x246848u: goto label_246848;
        case 0x246978u: goto label_246978;
        default: break;
    }

    ctx->pc = 0x2466f0u;

    // 0x2466f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2466f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2466f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2466f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2466f8: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x2466f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x2466fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2466fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x246700: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x246700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x246704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x246704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246708: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x246708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x24670c: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x24670cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x246710: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x246710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x246714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246718: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x246718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x24671c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24671Cu;
    {
        const bool branch_taken_0x24671c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24671c) {
            ctx->pc = 0x246720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24671Cu;
            // 0x246720: 0x92420021  lbu         $v0, 0x21($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24672Cu;
            goto label_24672c;
        }
    }
    ctx->pc = 0x246724u;
label_246724:
    // 0x246724: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x246724u;
    {
        const bool branch_taken_0x246724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246724u;
        // 0x246728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246724) {
            ctx->pc = 0x246A00u;
            goto label_246a00;
        }
    }
    ctx->pc = 0x24672Cu;
label_24672c:
    // 0x24672c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24672cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x246730: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x246730u;
    {
        const bool branch_taken_0x246730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246730u;
        // 0x246734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246730) {
            ctx->pc = 0x246A00u;
            goto label_246a00;
        }
    }
    ctx->pc = 0x246738u;
    // 0x246738: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x246738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x24673c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24673cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246740: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x246740u;
    {
        const bool branch_taken_0x246740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246740u;
        // 0x246744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246740) {
            ctx->pc = 0x246724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246724;
        }
    }
    ctx->pc = 0x246748u;
    // 0x246748: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x246748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x24674c: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x24674cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x246750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x246750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x246754: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x246754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x246758: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x246758u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x24675c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x246760: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x246760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x246764: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x246764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x246768: 0xc08be8a  jal         func_22FA28
    ctx->pc = 0x246768u;
    SET_GPR_U32(ctx, 31, 0x246770u);
    ctx->pc = 0x24676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246768u;
    // 0x24676c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FA28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22FA28u, 0x246768u, 0x246770u)) {
        return;
    }
    ctx->pc = 0x246770u;
label_246770:
    // 0x246770: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x246770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x246774: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x246774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x246778: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x246778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x24677c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x246780: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x246780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246784: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x246784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x246788: 0x319ba  dsrl        $v1, $v1, 6
    ctx->pc = 0x246788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 6);
    // 0x24678c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x24678cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x246790: 0x8cc64160  lw          $a2, 0x4160($a2)
    ctx->pc = 0x246790u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4160u));
    // 0x246794: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x246794u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246798: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x246798u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24679c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24679cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2467a0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2467a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2467a4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2467a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2467a8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2467a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2467ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2467acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2467b0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2467b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2467b4: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x2467b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2467b8: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x2467b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2467bc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2467bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2467c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x2467c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x2467c4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2467c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2467c8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2467c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2467cc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2467ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2467d0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2467d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2467d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2467d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2467d8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2467d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2467dc: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x2467dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2467e0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2467e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2467e4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2467e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2467e8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2467e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2467ec: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2467ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2467f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2467f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2467f4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2467f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2467f8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2467f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2467fc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2467fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x246800: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x246800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x246804: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x246804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246808: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x246808u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24680c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24680cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x246810: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x246810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x246814: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x246814u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246818: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x246818u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24681c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24681cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x246820: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x246820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x246824: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x246824u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x246828: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x246828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24682c: 0x24e7ffb0  addiu       $a3, $a3, -0x50
    ctx->pc = 0x24682cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967216));
    // 0x246830: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x246830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x246834: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x246834u;
    {
        const bool branch_taken_0x246834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246834u;
        // 0x246838: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246834) {
            ctx->pc = 0x246898u;
            goto label_246898;
        }
    }
    ctx->pc = 0x24683Cu;
    // 0x24683c: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x24683Cu;
    {
        const bool branch_taken_0x24683c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x246840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24683Cu;
        // 0x246840: 0x3c13005c  lui         $s3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24683c) {
            ctx->pc = 0x2468B8u;
            goto label_2468b8;
        }
    }
    ctx->pc = 0x246844u;
    // 0x246844: 0x0  nop
    ctx->pc = 0x246844u;
    // NOP
label_246848:
    // 0x246848: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x246848u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24684c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x24684cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x246850: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x246850u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246854: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x246854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x246858: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x246858u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24685c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x24685cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x246860: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x246860u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246864: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x246864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x246868: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x246868u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x24686c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24686cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x246870: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x246870u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x246874: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x246874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x246878: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x246878u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x24687c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24687cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x246880: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x246880u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x246884: 0x24e7ffc0  addiu       $a3, $a3, -0x40
    ctx->pc = 0x246884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
    // 0x246888: 0x14e0ffef  bnez        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x246888u;
    {
        const bool branch_taken_0x246888 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246888u;
        // 0x24688c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246888) {
            ctx->pc = 0x246848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246848;
        }
    }
    ctx->pc = 0x246890u;
    // 0x246890: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x246890u;
    {
        const bool branch_taken_0x246890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246890) {
            ctx->pc = 0x2468B8u;
            goto label_2468b8;
        }
    }
    ctx->pc = 0x246898u;
label_246898:
    // 0x246898: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x246898u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24689c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x24689cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2468a0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2468a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2468a4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2468a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2468a8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2468a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x2468ac: 0x3c13005c  lui         $s3, 0x5C
    ctx->pc = 0x2468acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)92 << 16));
    // 0x2468b0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2468b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2468b4: 0x0  nop
    ctx->pc = 0x2468b4u;
    // NOP
label_2468b8:
    // 0x2468b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2468b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2468bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2468bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2468c0: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x2468c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2468c4: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x2468c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x2468c8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2468c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2468cc: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x2468ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x2468d0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x2468d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x2468d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2468d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2468d8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2468d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2468dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2468dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2468e0: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2468e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2468e4: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x2468e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x2468e8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2468e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2468ec: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x2468ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x2468f0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2468f0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2468f4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2468f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2468f8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2468f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2468fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2468fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246900: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x246900u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x246904: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x246904u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x246908: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x246908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24690c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24690cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x246910: 0xac264160  sw          $a2, 0x4160($at)
    ctx->pc = 0x246910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B4160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4160u, _value); } while (0);
    // 0x246914: 0x26631180  addiu       $v1, $s3, 0x1180
    ctx->pc = 0x246914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
    // 0x246918: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x246918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x24691c: 0x14520038  bne         $v0, $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x24691Cu;
    {
        const bool branch_taken_0x24691c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x246920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24691Cu;
        // 0x246920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24691c) {
            ctx->pc = 0x246A00u;
            goto label_246a00;
        }
    }
    ctx->pc = 0x246924u;
    // 0x246924: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x246924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x246928: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x246928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x24692c: 0x800013  mtlo        $a0
    ctx->pc = 0x24692cu;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x246930: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x246930u;
    {
        const bool branch_taken_0x246930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246930u;
        // 0x246934: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246930) {
            ctx->pc = 0x246958u;
            goto label_246958;
        }
    }
    ctx->pc = 0x246938u;
    // 0x246938: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x246938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24693c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x246940: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x246940u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x246944: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x246944u;
    {
        const bool branch_taken_0x246944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x246948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246944u;
        // 0x246948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246944) {
            ctx->pc = 0x24696Cu;
            goto label_24696c;
        }
    }
    ctx->pc = 0x24694Cu;
    // 0x24694c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x24694Cu;
    {
        const bool branch_taken_0x24694c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24694Cu;
        // 0x246950: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24694c) {
            ctx->pc = 0x246A04u;
            goto label_246a04;
        }
    }
    ctx->pc = 0x246954u;
    // 0x246954: 0x0  nop
    ctx->pc = 0x246954u;
    // NOP
label_246958:
    // 0x246958: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x246958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x24695c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x246960: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x246960u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x246964: 0x14820026  bne         $a0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x246964u;
    {
        const bool branch_taken_0x246964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x246968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246964u;
        // 0x246968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246964) {
            ctx->pc = 0x246A00u;
            goto label_246a00;
        }
    }
    ctx->pc = 0x24696Cu;
label_24696c:
    // 0x24696c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24696cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x246970: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x246970u;
    SET_GPR_U32(ctx, 31, 0x246978u);
    ctx->pc = 0x246974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246970u;
    // 0x246974: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x246970u, 0x246978u)) {
        return;
    }
    ctx->pc = 0x246978u;
label_246978:
    // 0x246978: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x246978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x24697c: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x24697cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x246980: 0x34c68002  ori         $a2, $a2, 0x8002
    ctx->pc = 0x246980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32770);
    // 0x246984: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x246984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x246988: 0x71063389  pcpyld      $a2, $t0, $a2
    ctx->pc = 0x246988u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x24698c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24698cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x246990: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x246990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x246994: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x246994u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x246998: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x246998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x24699c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24699cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2469a0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2469a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2469a4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x2469a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2469a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2469a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2469ac: 0x70823389  pcpyld      $a2, $a0, $v0
    ctx->pc = 0x2469acu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x2469b0: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2469b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2469b4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2469b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2469b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2469b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2469bc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2469bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2469c0: 0x9e260008  lwu         $a2, 0x8($s1)
    ctx->pc = 0x2469c0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2469c4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2469c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2469c8: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2469c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2469cc: 0x9e22000c  lwu         $v0, 0xC($s1)
    ctx->pc = 0x2469ccu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2469d0: 0x26641180  addiu       $a0, $s3, 0x1180
    ctx->pc = 0x2469d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
    // 0x2469d4: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x2469d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2469d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2469d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2469dc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2469dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2469e0: 0xe5400b  movn        $t0, $a3, $a1
    ctx->pc = 0x2469e0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7));
    // 0x2469e4: 0x71063389  pcpyld      $a2, $t0, $a2
    ctx->pc = 0x2469e4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x2469e8: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x2469e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x2469ec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2469ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2469f0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2469f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2469f4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x2469f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2469f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2469f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2469fc: 0x0  nop
    ctx->pc = 0x2469fcu;
    // NOP
label_246a00:
    // 0x246a00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x246a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_246a04:
    // 0x246a04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x246a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246a08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x246a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246a0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x246a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246a14: 0x3e00008  jr          $ra
    ctx->pc = 0x246A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A14u;
        // 0x246a18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246A1Cu;
    // 0x246a1c: 0x0  nop
    ctx->pc = 0x246a1cu;
    // NOP
    ctx->pc = 0x246a20u;
}
