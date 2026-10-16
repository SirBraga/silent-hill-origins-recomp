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

// Function: sub_00283610
// Address: 0x283610 - 0x283768
void sub_00283610_0x283610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283610_0x283610");
#endif

    switch (ctx->pc) {
        case 0x283668u: goto label_283668;
        case 0x28368cu: goto label_28368c;
        case 0x2836a0u: goto label_2836a0;
        case 0x2836ecu: goto label_2836ec;
        case 0x283700u: goto label_283700;
        case 0x283718u: goto label_283718;
        case 0x28372cu: goto label_28372c;
        case 0x28373cu: goto label_28373c;
        default: break;
    }

    ctx->pc = 0x283610u;

    // 0x283610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x283610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x283614: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x283614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x283618: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x283618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x28361c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28361cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x283620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x283620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283624: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x283624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x283628: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x283628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28362c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x283630: 0x2453e6e0  addiu       $s3, $v0, -0x1920
    ctx->pc = 0x283630u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960864));
    // 0x283634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283638: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x283638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28363c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x28363cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x67E6E8u));
    // 0x283640: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x283640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x283644: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x283644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x283648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x283648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28364c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28364cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x283650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283654: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x283654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x283658: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x283658u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x28365c: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x28365cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x283660: 0xc0a0f48  jal         func_283D20
    ctx->pc = 0x283660u;
    SET_GPR_U32(ctx, 31, 0x283668u);
    ctx->pc = 0x283664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283660u;
    // 0x283664: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283D20u, 0x283660u, 0x283668u)) {
        return;
    }
    ctx->pc = 0x283668u;
label_283668:
    // 0x283668: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x283668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28366c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28366cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x283670: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x283670u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x283674: 0x2606fff4  addiu       $a2, $s0, -0xC
    ctx->pc = 0x283674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x283678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28367c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283680: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x283680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x283684: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x283684u;
    SET_GPR_U32(ctx, 31, 0x28368Cu);
    ctx->pc = 0x283688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283684u;
    // 0x283688: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x283684u, 0x28368Cu)) {
        return;
    }
    ctx->pc = 0x28368Cu;
label_28368c:
    // 0x28368c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28368Cu;
    {
        const bool branch_taken_0x28368c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28368Cu;
        // 0x283690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28368c) {
            ctx->pc = 0x283748u;
            goto label_283748;
        }
    }
    ctx->pc = 0x283694u;
    // 0x283694: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x283694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283698: 0xc092782  jal         func_249E08
    ctx->pc = 0x283698u;
    SET_GPR_U32(ctx, 31, 0x2836A0u);
    ctx->pc = 0x28369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283698u;
    // 0x28369c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x283698u, 0x2836A0u)) {
        return;
    }
    ctx->pc = 0x2836A0u;
label_2836a0:
    // 0x2836a0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2836A0u;
    {
        const bool branch_taken_0x2836a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836A0u;
        // 0x2836a4: 0x3c0800ff  lui         $t0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836a0) {
            ctx->pc = 0x283748u;
            goto label_283748;
        }
    }
    ctx->pc = 0x2836A8u;
    // 0x2836a8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2836a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2836ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2836acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2836b0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2836b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2836b4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2836b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2836b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2836b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2836bc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2836bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2836c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2836c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2836c4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2836c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2836c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2836c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2836cc: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x2836ccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2836d0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2836d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2836d4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2836d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2836d8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2836d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2836dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2836dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2836e0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2836e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2836e4: 0xc092782  jal         func_249E08
    ctx->pc = 0x2836E4u;
    SET_GPR_U32(ctx, 31, 0x2836ECu);
    ctx->pc = 0x2836E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2836E4u;
    // 0x2836e8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2836E4u, 0x2836ECu)) {
        return;
    }
    ctx->pc = 0x2836ECu;
label_2836ec:
    // 0x2836ec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2836ECu;
    {
        const bool branch_taken_0x2836ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836ECu;
        // 0x2836f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836ec) {
            ctx->pc = 0x283748u;
            goto label_283748;
        }
    }
    ctx->pc = 0x2836F4u;
    // 0x2836f4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2836f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2836f8: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x2836F8u;
    SET_GPR_U32(ctx, 31, 0x283700u);
    ctx->pc = 0x2836FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2836F8u;
    // 0x2836fc: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x2836F8u, 0x283700u)) {
        return;
    }
    ctx->pc = 0x283700u;
label_283700:
    // 0x283700: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x283700u;
    {
        const bool branch_taken_0x283700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283700u;
        // 0x283704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283700) {
            ctx->pc = 0x283748u;
            goto label_283748;
        }
    }
    ctx->pc = 0x283708u;
    // 0x283708: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x283708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28370c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x28370cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x283710: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x283710u;
    SET_GPR_U32(ctx, 31, 0x283718u);
    ctx->pc = 0x283714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283710u;
    // 0x283714: 0x63180  sll         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x283710u, 0x283718u)) {
        return;
    }
    ctx->pc = 0x283718u;
label_283718:
    // 0x283718: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x283718u;
    {
        const bool branch_taken_0x283718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283718u;
        // 0x28371c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283718) {
            ctx->pc = 0x283748u;
            goto label_283748;
        }
    }
    ctx->pc = 0x283720u;
    // 0x283720: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x283720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x283724: 0xc092782  jal         func_249E08
    ctx->pc = 0x283724u;
    SET_GPR_U32(ctx, 31, 0x28372Cu);
    ctx->pc = 0x283728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283724u;
    // 0x283728: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x283724u, 0x28372Cu)) {
        return;
    }
    ctx->pc = 0x28372Cu;
label_28372c:
    // 0x28372c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28372Cu;
    {
        const bool branch_taken_0x28372c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28372Cu;
        // 0x283730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28372c) {
            ctx->pc = 0x283748u;
            goto label_283748;
        }
    }
    ctx->pc = 0x283734u;
    // 0x283734: 0xc0a0f1a  jal         func_283C68
    ctx->pc = 0x283734u;
    SET_GPR_U32(ctx, 31, 0x28373Cu);
    ctx->pc = 0x283738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283734u;
    // 0x283738: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283C68u, 0x283734u, 0x28373Cu)) {
        return;
    }
    ctx->pc = 0x28373Cu;
label_28373c:
    // 0x28373c: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x28373cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
    // 0x283740: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283740u;
    {
        const bool branch_taken_0x283740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283740u;
        // 0x283744: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283740) {
            ctx->pc = 0x28374Cu;
            goto label_28374c;
        }
    }
    ctx->pc = 0x283748u;
label_283748:
    // 0x283748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28374c:
    // 0x28374c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28374cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x283750: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x283750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283754: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x283754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283758: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x283758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28375c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28375cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283760: 0x3e00008  jr          $ra
    ctx->pc = 0x283760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283760u;
        // 0x283764: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283768u;
}
