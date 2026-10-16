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

// Function: sub_002E2688
// Address: 0x2e2688 - 0x2e27d8
void sub_002E2688_0x2e2688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2688_0x2e2688");
#endif

    switch (ctx->pc) {
        case 0x2e26b4u: goto label_2e26b4;
        case 0x2e26c8u: goto label_2e26c8;
        case 0x2e26e0u: goto label_2e26e0;
        case 0x2e26f0u: goto label_2e26f0;
        case 0x2e2708u: goto label_2e2708;
        case 0x2e2724u: goto label_2e2724;
        case 0x2e273cu: goto label_2e273c;
        case 0x2e2768u: goto label_2e2768;
        case 0x2e2780u: goto label_2e2780;
        default: break;
    }

    ctx->pc = 0x2e2688u;

    // 0x2e2688: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e2688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e268c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e268cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e2690: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e2690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2e2694: 0x24a5f5a0  addiu       $a1, $a1, -0xA60
    ctx->pc = 0x2e2694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964640));
    // 0x2e2698: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e2698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e269c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e26a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e26a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e26a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e26a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e26a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e26a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e26ac: 0xc0b8f92  jal         func_2E3E48
    ctx->pc = 0x2E26ACu;
    SET_GPR_U32(ctx, 31, 0x2E26B4u);
    ctx->pc = 0x2E26B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E26ACu;
    // 0x2e26b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3E48u, 0x2E26ACu, 0x2E26B4u)) {
        return;
    }
    ctx->pc = 0x2E26B4u;
label_2e26b4:
    // 0x2e26b4: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x2e26b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e26b8: 0xae710040  sw          $s1, 0x40($s3)
    ctx->pc = 0x2e26b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 17));
    // 0x2e26bc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e26bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e26c0: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E26C0u;
    SET_GPR_U32(ctx, 31, 0x2E26C8u);
    ctx->pc = 0x2E26C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E26C0u;
    // 0x2e26c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E26C0u, 0x2E26C8u)) {
        return;
    }
    ctx->pc = 0x2E26C8u;
label_2e26c8:
    // 0x2e26c8: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e26cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e26ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e26d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E26D0u;
    {
        const bool branch_taken_0x2e26d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26D0u;
        // 0x2e26d4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26d0) {
            ctx->pc = 0x2E26E8u;
            goto label_2e26e8;
        }
    }
    ctx->pc = 0x2E26D8u;
    // 0x2e26d8: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E26D8u;
    SET_GPR_U32(ctx, 31, 0x2E26E0u);
    ctx->pc = 0x2E26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E26D8u;
    // 0x2e26dc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E26D8u, 0x2E26E0u)) {
        return;
    }
    ctx->pc = 0x2E26E0u;
label_2e26e0:
    // 0x2e26e0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e26e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e26e4: 0x0  nop
    ctx->pc = 0x2e26e4u;
    // NOP
label_2e26e8:
    // 0x2e26e8: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E26E8u;
    SET_GPR_U32(ctx, 31, 0x2E26F0u);
    ctx->pc = 0x2E26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E26E8u;
    // 0x2e26ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E26E8u, 0x2E26F0u)) {
        return;
    }
    ctx->pc = 0x2E26F0u;
label_2e26f0:
    // 0x2e26f0: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e26f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e26f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e26f8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E26F8u;
    {
        const bool branch_taken_0x2e26f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26F8u;
        // 0x2e26fc: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26f8) {
            ctx->pc = 0x2E2758u;
            goto label_2e2758;
        }
    }
    ctx->pc = 0x2E2700u;
    // 0x2e2700: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E2700u;
    SET_GPR_U32(ctx, 31, 0x2E2708u);
    ctx->pc = 0x2E2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2700u;
    // 0x2e2704: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E2700u, 0x2E2708u)) {
        return;
    }
    ctx->pc = 0x2E2708u;
label_2e2708:
    // 0x2e2708: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e2708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e270c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2e270cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2e2710: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E2710u;
    {
        const bool branch_taken_0x2e2710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2710u;
        // 0x2e2714: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2710) {
            ctx->pc = 0x2E2758u;
            goto label_2e2758;
        }
    }
    ctx->pc = 0x2E2718u;
    // 0x2e2718: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e2718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e271c: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E271Cu;
    SET_GPR_U32(ctx, 31, 0x2E2724u);
    ctx->pc = 0x2E2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E271Cu;
    // 0x2e2720: 0x24520300  addiu       $s2, $v0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E271Cu, 0x2E2724u)) {
        return;
    }
    ctx->pc = 0x2E2724u;
label_2e2724:
    // 0x2e2724: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e2724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e2728: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e2728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e272c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E272Cu;
    {
        const bool branch_taken_0x2e272c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e272c) {
            ctx->pc = 0x2E2730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E272Cu;
            // 0x2e2730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2748u;
            goto label_2e2748;
        }
    }
    ctx->pc = 0x2E2734u;
    // 0x2e2734: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E2734u;
    SET_GPR_U32(ctx, 31, 0x2E273Cu);
    ctx->pc = 0x2E2738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2734u;
    // 0x2e2738: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E2734u, 0x2E273Cu)) {
        return;
    }
    ctx->pc = 0x2E273Cu;
label_2e273c:
    // 0x2e273c: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e273cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e2740: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e2740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e2744: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2e2744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2e2748:
    // 0x2e2748: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2e2748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e274c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2e274cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2750: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E2750u;
    {
        const bool branch_taken_0x2e2750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2750u;
        // 0x2e2754: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2750) {
            ctx->pc = 0x2E2794u;
            goto label_2e2794;
        }
    }
    ctx->pc = 0x2E2758u;
label_2e2758:
    // 0x2e2758: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e2758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e275c: 0x24520300  addiu       $s2, $v0, 0x300
    ctx->pc = 0x2e275cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2e2760: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E2760u;
    SET_GPR_U32(ctx, 31, 0x2E2768u);
    ctx->pc = 0x2E2764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2760u;
    // 0x2e2764: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E2760u, 0x2E2768u)) {
        return;
    }
    ctx->pc = 0x2E2768u;
label_2e2768:
    // 0x2e2768: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e2768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e276c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e2770: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2770u;
    {
        const bool branch_taken_0x2e2770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2770) {
            ctx->pc = 0x2E2774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2770u;
            // 0x2e2774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2788u;
            goto label_2e2788;
        }
    }
    ctx->pc = 0x2E2778u;
    // 0x2e2778: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E2778u;
    SET_GPR_U32(ctx, 31, 0x2E2780u);
    ctx->pc = 0x2E277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2778u;
    // 0x2e277c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E2778u, 0x2E2780u)) {
        return;
    }
    ctx->pc = 0x2E2780u;
label_2e2780:
    // 0x2e2780: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e2780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e2784: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e2784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2e2788:
    // 0x2e2788: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2e2788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e278c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2e278cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2790: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e2790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e2794:
    // 0x2e2794: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x2e2794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x2e2798: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x2e2798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2e279c: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x2e279cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    // 0x2e27a0: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e27a4: 0x24422e48  addiu       $v0, $v0, 0x2E48
    ctx->pc = 0x2e27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11848));
    // 0x2e27a8: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x2e27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x2e27ac: 0xa6600044  sh          $zero, 0x44($s3)
    ctx->pc = 0x2e27acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e27b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e27b4: 0xa6620046  sh          $v0, 0x46($s3)
    ctx->pc = 0x2e27b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e27b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e27b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e27bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e27bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e27c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e27c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e27c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e27c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e27c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e27c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e27cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E27CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27CCu;
        // 0x2e27d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E27CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E27D4u;
    // 0x2e27d4: 0x0  nop
    ctx->pc = 0x2e27d4u;
    // NOP
    ctx->pc = 0x2e27d8u;
}
