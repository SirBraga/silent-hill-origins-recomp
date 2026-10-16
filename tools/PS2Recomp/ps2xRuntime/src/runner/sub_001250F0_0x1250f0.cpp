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

// Function: sub_001250F0
// Address: 0x1250f0 - 0x1252e8
void sub_001250F0_0x1250f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001250F0_0x1250f0");
#endif

    switch (ctx->pc) {
        case 0x125114u: goto label_125114;
        case 0x125120u: goto label_125120;
        case 0x12512cu: goto label_12512c;
        case 0x125138u: goto label_125138;
        case 0x125144u: goto label_125144;
        case 0x125150u: goto label_125150;
        case 0x12515cu: goto label_12515c;
        case 0x125168u: goto label_125168;
        case 0x125174u: goto label_125174;
        case 0x125180u: goto label_125180;
        case 0x12518cu: goto label_12518c;
        case 0x125198u: goto label_125198;
        case 0x1251a4u: goto label_1251a4;
        case 0x1251b0u: goto label_1251b0;
        case 0x1251bcu: goto label_1251bc;
        case 0x1251c8u: goto label_1251c8;
        case 0x1251d4u: goto label_1251d4;
        case 0x1251ecu: goto label_1251ec;
        case 0x1251fcu: goto label_1251fc;
        case 0x12520cu: goto label_12520c;
        case 0x12521cu: goto label_12521c;
        case 0x12522cu: goto label_12522c;
        case 0x12523cu: goto label_12523c;
        case 0x12524cu: goto label_12524c;
        case 0x12525cu: goto label_12525c;
        case 0x12526cu: goto label_12526c;
        case 0x12527cu: goto label_12527c;
        case 0x12528cu: goto label_12528c;
        case 0x12529cu: goto label_12529c;
        case 0x1252acu: goto label_1252ac;
        case 0x1252bcu: goto label_1252bc;
        case 0x1252ccu: goto label_1252cc;
        case 0x1252dcu: goto label_1252dc;
        default: break;
    }

    ctx->pc = 0x1250f0u;

    // 0x1250f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1250f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1250f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1250f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1250f8: 0x14a20078  bne         $a1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1250F8u;
    {
        const bool branch_taken_0x1250f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1250FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250F8u;
        // 0x1250fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250f8) {
            ctx->pc = 0x1252DCu;
            goto label_1252dc;
        }
    }
    ctx->pc = 0x125100u;
    // 0x125100: 0x50800037  beql        $a0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x125100u;
    {
        const bool branch_taken_0x125100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x125100) {
            ctx->pc = 0x125104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125100u;
            // 0x125104: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1251E0u;
            goto label_1251e0;
        }
    }
    ctx->pc = 0x125108u;
    // 0x125108: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x125108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12510c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x12510Cu;
    SET_GPR_U32(ctx, 31, 0x125114u);
    ctx->pc = 0x125110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12510Cu;
    // 0x125110: 0x248445e0  addiu       $a0, $a0, 0x45E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x12510Cu, 0x125114u)) {
        return;
    }
    ctx->pc = 0x125114u;
label_125114:
    // 0x125114: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x125114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125118: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x125118u;
    SET_GPR_U32(ctx, 31, 0x125120u);
    ctx->pc = 0x12511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125118u;
    // 0x12511c: 0x248445e8  addiu       $a0, $a0, 0x45E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x125118u, 0x125120u)) {
        return;
    }
    ctx->pc = 0x125120u;
label_125120:
    // 0x125120: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x125120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125124: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x125124u;
    SET_GPR_U32(ctx, 31, 0x12512Cu);
    ctx->pc = 0x125128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125124u;
    // 0x125128: 0x248445f0  addiu       $a0, $a0, 0x45F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x125124u, 0x12512Cu)) {
        return;
    }
    ctx->pc = 0x12512Cu;
label_12512c:
    // 0x12512c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12512cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125130: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x125130u;
    SET_GPR_U32(ctx, 31, 0x125138u);
    ctx->pc = 0x125134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125130u;
    // 0x125134: 0x248445f8  addiu       $a0, $a0, 0x45F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x125130u, 0x125138u)) {
        return;
    }
    ctx->pc = 0x125138u;
label_125138:
    // 0x125138: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x125138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12513c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x12513Cu;
    SET_GPR_U32(ctx, 31, 0x125144u);
    ctx->pc = 0x125140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12513Cu;
    // 0x125140: 0x24844600  addiu       $a0, $a0, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x12513Cu, 0x125144u)) {
        return;
    }
    ctx->pc = 0x125144u;
label_125144:
    // 0x125144: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x125144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125148: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x125148u;
    SET_GPR_U32(ctx, 31, 0x125150u);
    ctx->pc = 0x12514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125148u;
    // 0x12514c: 0x24844608  addiu       $a0, $a0, 0x4608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x125148u, 0x125150u)) {
        return;
    }
    ctx->pc = 0x125150u;
label_125150:
    // 0x125150: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x125150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125154: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x125154u;
    SET_GPR_U32(ctx, 31, 0x12515Cu);
    ctx->pc = 0x125158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125154u;
    // 0x125158: 0x24844610  addiu       $a0, $a0, 0x4610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x125154u, 0x12515Cu)) {
        return;
    }
    ctx->pc = 0x12515Cu;
label_12515c:
    // 0x12515c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12515cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125160: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x125160u;
    SET_GPR_U32(ctx, 31, 0x125168u);
    ctx->pc = 0x125164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125160u;
    // 0x125164: 0x24844618  addiu       $a0, $a0, 0x4618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x125160u, 0x125168u)) {
        return;
    }
    ctx->pc = 0x125168u;
label_125168:
    // 0x125168: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x125168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12516c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x12516Cu;
    SET_GPR_U32(ctx, 31, 0x125174u);
    ctx->pc = 0x125170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12516Cu;
    // 0x125170: 0x24844620  addiu       $a0, $a0, 0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x12516Cu, 0x125174u)) {
        return;
    }
    ctx->pc = 0x125174u;
label_125174:
    // 0x125174: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x125174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125178: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x125178u;
    SET_GPR_U32(ctx, 31, 0x125180u);
    ctx->pc = 0x12517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125178u;
    // 0x12517c: 0x24844628  addiu       $a0, $a0, 0x4628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x125178u, 0x125180u)) {
        return;
    }
    ctx->pc = 0x125180u;
label_125180:
    // 0x125180: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x125180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125184: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x125184u;
    SET_GPR_U32(ctx, 31, 0x12518Cu);
    ctx->pc = 0x125188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125184u;
    // 0x125188: 0x24844630  addiu       $a0, $a0, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x125184u, 0x12518Cu)) {
        return;
    }
    ctx->pc = 0x12518Cu;
label_12518c:
    // 0x12518c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12518cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125190: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x125190u;
    SET_GPR_U32(ctx, 31, 0x125198u);
    ctx->pc = 0x125194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125190u;
    // 0x125194: 0x24844638  addiu       $a0, $a0, 0x4638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x125190u, 0x125198u)) {
        return;
    }
    ctx->pc = 0x125198u;
label_125198:
    // 0x125198: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x125198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12519c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x12519Cu;
    SET_GPR_U32(ctx, 31, 0x1251A4u);
    ctx->pc = 0x1251A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12519Cu;
    // 0x1251a0: 0x24844640  addiu       $a0, $a0, 0x4640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x12519Cu, 0x1251A4u)) {
        return;
    }
    ctx->pc = 0x1251A4u;
label_1251a4:
    // 0x1251a4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1251a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1251a8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1251A8u;
    SET_GPR_U32(ctx, 31, 0x1251B0u);
    ctx->pc = 0x1251ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251A8u;
    // 0x1251ac: 0x24844648  addiu       $a0, $a0, 0x4648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1251A8u, 0x1251B0u)) {
        return;
    }
    ctx->pc = 0x1251B0u;
label_1251b0:
    // 0x1251b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1251b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1251b4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1251B4u;
    SET_GPR_U32(ctx, 31, 0x1251BCu);
    ctx->pc = 0x1251B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251B4u;
    // 0x1251b8: 0x24844650  addiu       $a0, $a0, 0x4650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1251B4u, 0x1251BCu)) {
        return;
    }
    ctx->pc = 0x1251BCu;
label_1251bc:
    // 0x1251bc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1251bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1251c0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1251C0u;
    SET_GPR_U32(ctx, 31, 0x1251C8u);
    ctx->pc = 0x1251C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251C0u;
    // 0x1251c4: 0x24844658  addiu       $a0, $a0, 0x4658 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1251C0u, 0x1251C8u)) {
        return;
    }
    ctx->pc = 0x1251C8u;
label_1251c8:
    // 0x1251c8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1251c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1251cc: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1251CCu;
    SET_GPR_U32(ctx, 31, 0x1251D4u);
    ctx->pc = 0x1251D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251CCu;
    // 0x1251d0: 0x2484c4a0  addiu       $a0, $a0, -0x3B60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1251CCu, 0x1251D4u)) {
        return;
    }
    ctx->pc = 0x1251D4u;
label_1251d4:
    // 0x1251d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1251d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1251d8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1251D8u;
    {
        const bool branch_taken_0x1251d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1251DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251D8u;
        // 0x1251dc: 0xac624660  sw          $v0, 0x4660($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251d8) {
            ctx->pc = 0x1252DCu;
            goto label_1252dc;
        }
    }
    ctx->pc = 0x1251E0u;
label_1251e0:
    // 0x1251e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1251e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1251e4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1251E4u;
    SET_GPR_U32(ctx, 31, 0x1251ECu);
    ctx->pc = 0x1251E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251E4u;
    // 0x1251e8: 0x24844658  addiu       $a0, $a0, 0x4658 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1251E4u, 0x1251ECu)) {
        return;
    }
    ctx->pc = 0x1251ECu;
label_1251ec:
    // 0x1251ec: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1251ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1251f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1251f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1251f4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1251F4u;
    SET_GPR_U32(ctx, 31, 0x1251FCu);
    ctx->pc = 0x1251F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251F4u;
    // 0x1251f8: 0x24844650  addiu       $a0, $a0, 0x4650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1251F4u, 0x1251FCu)) {
        return;
    }
    ctx->pc = 0x1251FCu;
label_1251fc:
    // 0x1251fc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1251fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125200: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125204: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x125204u;
    SET_GPR_U32(ctx, 31, 0x12520Cu);
    ctx->pc = 0x125208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125204u;
    // 0x125208: 0x24844648  addiu       $a0, $a0, 0x4648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x125204u, 0x12520Cu)) {
        return;
    }
    ctx->pc = 0x12520Cu;
label_12520c:
    // 0x12520c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12520cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125210: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125214: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x125214u;
    SET_GPR_U32(ctx, 31, 0x12521Cu);
    ctx->pc = 0x125218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125214u;
    // 0x125218: 0x24844640  addiu       $a0, $a0, 0x4640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x125214u, 0x12521Cu)) {
        return;
    }
    ctx->pc = 0x12521Cu;
label_12521c:
    // 0x12521c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12521cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125220: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125224: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x125224u;
    SET_GPR_U32(ctx, 31, 0x12522Cu);
    ctx->pc = 0x125228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125224u;
    // 0x125228: 0x24844638  addiu       $a0, $a0, 0x4638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x125224u, 0x12522Cu)) {
        return;
    }
    ctx->pc = 0x12522Cu;
label_12522c:
    // 0x12522c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12522cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125230: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125234: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x125234u;
    SET_GPR_U32(ctx, 31, 0x12523Cu);
    ctx->pc = 0x125238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125234u;
    // 0x125238: 0x24844630  addiu       $a0, $a0, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x125234u, 0x12523Cu)) {
        return;
    }
    ctx->pc = 0x12523Cu;
label_12523c:
    // 0x12523c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12523cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125240: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125244: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x125244u;
    SET_GPR_U32(ctx, 31, 0x12524Cu);
    ctx->pc = 0x125248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125244u;
    // 0x125248: 0x24844628  addiu       $a0, $a0, 0x4628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x125244u, 0x12524Cu)) {
        return;
    }
    ctx->pc = 0x12524Cu;
label_12524c:
    // 0x12524c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12524cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125250: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125254: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x125254u;
    SET_GPR_U32(ctx, 31, 0x12525Cu);
    ctx->pc = 0x125258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125254u;
    // 0x125258: 0x24844620  addiu       $a0, $a0, 0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x125254u, 0x12525Cu)) {
        return;
    }
    ctx->pc = 0x12525Cu;
label_12525c:
    // 0x12525c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12525cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125260: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125264: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x125264u;
    SET_GPR_U32(ctx, 31, 0x12526Cu);
    ctx->pc = 0x125268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125264u;
    // 0x125268: 0x24844618  addiu       $a0, $a0, 0x4618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x125264u, 0x12526Cu)) {
        return;
    }
    ctx->pc = 0x12526Cu;
label_12526c:
    // 0x12526c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12526cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125270: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125274: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x125274u;
    SET_GPR_U32(ctx, 31, 0x12527Cu);
    ctx->pc = 0x125278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125274u;
    // 0x125278: 0x24844610  addiu       $a0, $a0, 0x4610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x125274u, 0x12527Cu)) {
        return;
    }
    ctx->pc = 0x12527Cu;
label_12527c:
    // 0x12527c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12527cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125280: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125284: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x125284u;
    SET_GPR_U32(ctx, 31, 0x12528Cu);
    ctx->pc = 0x125288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125284u;
    // 0x125288: 0x24844608  addiu       $a0, $a0, 0x4608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x125284u, 0x12528Cu)) {
        return;
    }
    ctx->pc = 0x12528Cu;
label_12528c:
    // 0x12528c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12528cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x125290: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125294: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x125294u;
    SET_GPR_U32(ctx, 31, 0x12529Cu);
    ctx->pc = 0x125298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125294u;
    // 0x125298: 0x24844600  addiu       $a0, $a0, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x125294u, 0x12529Cu)) {
        return;
    }
    ctx->pc = 0x12529Cu;
label_12529c:
    // 0x12529c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12529cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1252a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1252a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1252a4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1252A4u;
    SET_GPR_U32(ctx, 31, 0x1252ACu);
    ctx->pc = 0x1252A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252A4u;
    // 0x1252a8: 0x248445f8  addiu       $a0, $a0, 0x45F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1252A4u, 0x1252ACu)) {
        return;
    }
    ctx->pc = 0x1252ACu;
label_1252ac:
    // 0x1252ac: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1252acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1252b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1252b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1252b4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1252B4u;
    SET_GPR_U32(ctx, 31, 0x1252BCu);
    ctx->pc = 0x1252B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252B4u;
    // 0x1252b8: 0x248445f0  addiu       $a0, $a0, 0x45F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1252B4u, 0x1252BCu)) {
        return;
    }
    ctx->pc = 0x1252BCu;
label_1252bc:
    // 0x1252bc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1252bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1252c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1252c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1252c4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1252C4u;
    SET_GPR_U32(ctx, 31, 0x1252CCu);
    ctx->pc = 0x1252C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252C4u;
    // 0x1252c8: 0x248445e8  addiu       $a0, $a0, 0x45E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1252C4u, 0x1252CCu)) {
        return;
    }
    ctx->pc = 0x1252CCu;
label_1252cc:
    // 0x1252cc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1252ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1252d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1252d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1252d4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1252D4u;
    SET_GPR_U32(ctx, 31, 0x1252DCu);
    ctx->pc = 0x1252D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252D4u;
    // 0x1252d8: 0x248445e0  addiu       $a0, $a0, 0x45E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1252D4u, 0x1252DCu)) {
        return;
    }
    ctx->pc = 0x1252DCu;
label_1252dc:
    // 0x1252dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1252dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1252e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1252E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1252E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252E0u;
        // 0x1252e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1252E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1252E8u;
}
