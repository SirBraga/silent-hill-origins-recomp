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

// Function: sub_001B0540
// Address: 0x1b0540 - 0x1b07b8
void sub_001B0540_0x1b0540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0540_0x1b0540");
#endif

    switch (ctx->pc) {
        case 0x1b0570u: goto label_1b0570;
        case 0x1b05e0u: goto label_1b05e0;
        case 0x1b0618u: goto label_1b0618;
        case 0x1b0628u: goto label_1b0628;
        case 0x1b066cu: goto label_1b066c;
        case 0x1b0680u: goto label_1b0680;
        case 0x1b0694u: goto label_1b0694;
        case 0x1b06a4u: goto label_1b06a4;
        case 0x1b06b8u: goto label_1b06b8;
        case 0x1b06c8u: goto label_1b06c8;
        case 0x1b06e0u: goto label_1b06e0;
        case 0x1b071cu: goto label_1b071c;
        case 0x1b072cu: goto label_1b072c;
        case 0x1b0740u: goto label_1b0740;
        case 0x1b077cu: goto label_1b077c;
        case 0x1b0794u: goto label_1b0794;
        default: break;
    }

    ctx->pc = 0x1b0540u;

    // 0x1b0540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b0540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b0544: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b0544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b0548: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b0548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b054c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b054cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b0554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b0554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b055c: 0x8e220248  lw          $v0, 0x248($s1)
    ctx->pc = 0x1b055cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x1b0560: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1B0560u;
    {
        const bool branch_taken_0x1b0560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0560u;
        // 0x1b0564: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0560) {
            ctx->pc = 0x1B079Cu;
            goto label_1b079c;
        }
    }
    ctx->pc = 0x1B0568u;
    // 0x1b0568: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x1B0568u;
    SET_GPR_U32(ctx, 31, 0x1B0570u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x1B0568u, 0x1B0570u)) {
        return;
    }
    ctx->pc = 0x1B0570u;
label_1b0570:
    // 0x1b0570: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B0570u;
    {
        const bool branch_taken_0x1b0570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0570u;
        // 0x1b0574: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0570) {
            ctx->pc = 0x1B05C8u;
            goto label_1b05c8;
        }
    }
    ctx->pc = 0x1B0578u;
    // 0x1b0578: 0x8e240150  lw          $a0, 0x150($s1)
    ctx->pc = 0x1b0578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1b057c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B057Cu;
    {
        const bool branch_taken_0x1b057c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B057Cu;
        // 0x1b0580: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b057c) {
            ctx->pc = 0x1B0594u;
            goto label_1b0594;
        }
    }
    ctx->pc = 0x1B0584u;
    // 0x1b0584: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b0584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0588: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b0588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b058c: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1B058Cu;
    {
        const bool branch_taken_0x1b058c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B058Cu;
        // 0x1b0590: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b058c) {
            ctx->pc = 0x1B068Cu;
            goto label_1b068c;
        }
    }
    ctx->pc = 0x1B0594u;
label_1b0594:
    // 0x1b0594: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0594u;
    {
        const bool branch_taken_0x1b0594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0594) {
            ctx->pc = 0x1B05A8u;
            goto label_1b05a8;
        }
    }
    ctx->pc = 0x1B059Cu;
    // 0x1b059c: 0x8e220244  lw          $v0, 0x244($s1)
    ctx->pc = 0x1b059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x1b05a0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B05A0u;
    {
        const bool branch_taken_0x1b05a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b05a0) {
            ctx->pc = 0x1B05A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B05A0u;
            // 0x1b05a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B05D8u;
            goto label_1b05d8;
        }
    }
    ctx->pc = 0x1B05A8u;
label_1b05a8:
    // 0x1b05a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B05A8u;
    {
        const bool branch_taken_0x1b05a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05A8u;
        // 0x1b05ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05a8) {
            ctx->pc = 0x1B05C0u;
            goto label_1b05c0;
        }
    }
    ctx->pc = 0x1B05B0u;
    // 0x1b05b0: 0x38820009  xori        $v0, $a0, 0x9
    ctx->pc = 0x1b05b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)9);
    // 0x1b05b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B05B4u;
    {
        const bool branch_taken_0x1b05b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05B4u;
        // 0x1b05b8: 0x3882000a  xori        $v0, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05b4) {
            ctx->pc = 0x1B05C0u;
            goto label_1b05c0;
        }
    }
    ctx->pc = 0x1B05BCu;
    // 0x1b05bc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1b05bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b05c0:
    // 0x1b05c0: 0x54600077  bnel        $v1, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x1B05C0u;
    {
        const bool branch_taken_0x1b05c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b05c0) {
            ctx->pc = 0x1B05C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B05C0u;
            // 0x1b05c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B05C8u;
label_1b05c8:
    // 0x1b05c8: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1b05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1b05cc: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x1b05ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x1b05d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B05D0u;
    {
        const bool branch_taken_0x1b05d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05D0u;
        // 0x1b05d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05d0) {
            ctx->pc = 0x1B05E8u;
            goto label_1b05e8;
        }
    }
    ctx->pc = 0x1B05D8u;
label_1b05d8:
    // 0x1b05d8: 0xc06c9e6  jal         func_1B2798
    ctx->pc = 0x1B05D8u;
    SET_GPR_U32(ctx, 31, 0x1B05E0u);
    ctx->pc = 0x1B05DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B05D8u;
    // 0x1b05dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2798u, 0x1B05D8u, 0x1B05E0u)) {
        return;
    }
    ctx->pc = 0x1B05E0u;
label_1b05e0:
    // 0x1b05e0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1B05E0u;
    {
        const bool branch_taken_0x1b05e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05E0u;
        // 0x1b05e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05e0) {
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B05E8u;
label_1b05e8:
    // 0x1b05e8: 0x8e220240  lw          $v0, 0x240($s1)
    ctx->pc = 0x1b05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x1b05ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B05ECu;
    {
        const bool branch_taken_0x1b05ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05ECu;
        // 0x1b05f0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05ec) {
            ctx->pc = 0x1B0608u;
            goto label_1b0608;
        }
    }
    ctx->pc = 0x1B05F4u;
    // 0x1b05f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b05f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b05f8: 0x14620069  bne         $v1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1B05F8u;
    {
        const bool branch_taken_0x1b05f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05F8u;
        // 0x1b05fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05f8) {
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B0600u;
    // 0x1b0600: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1B0600u;
    {
        const bool branch_taken_0x1b0600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0600) {
            ctx->pc = 0x1B068Cu;
            goto label_1b068c;
        }
    }
    ctx->pc = 0x1B0608u;
label_1b0608:
    // 0x1b0608: 0x12400064  beqz        $s2, . + 4 + (0x64 << 2)
    ctx->pc = 0x1B0608u;
    {
        const bool branch_taken_0x1b0608 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0608u;
        // 0x1b060c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0608) {
            ctx->pc = 0x1B079Cu;
            goto label_1b079c;
        }
    }
    ctx->pc = 0x1B0610u;
    // 0x1b0610: 0xc05ec56  jal         func_17B158
    ctx->pc = 0x1B0610u;
    SET_GPR_U32(ctx, 31, 0x1B0618u);
    ctx->pc = 0x1B0614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0610u;
    // 0x1b0614: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B158u, 0x1B0610u, 0x1B0618u)) {
        return;
    }
    ctx->pc = 0x1B0618u;
label_1b0618:
    // 0x1b0618: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x1B0618u;
    {
        const bool branch_taken_0x1b0618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0618) {
            ctx->pc = 0x1B061Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0618u;
            // 0x1b061c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B0620u;
    // 0x1b0620: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1B0620u;
    SET_GPR_U32(ctx, 31, 0x1B0628u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1B0620u, 0x1B0628u)) {
        return;
    }
    ctx->pc = 0x1B0628u;
label_1b0628:
    // 0x1b0628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b0628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b062c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b0630: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B0630u;
    {
        const bool branch_taken_0x1b0630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0630u;
        // 0x1b0634: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0630) {
            ctx->pc = 0x1B0664u;
            goto label_1b0664;
        }
    }
    ctx->pc = 0x1B0638u;
    // 0x1b0638: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0638u;
    {
        const bool branch_taken_0x1b0638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0638u;
        // 0x1b063c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0638) {
            ctx->pc = 0x1B0650u;
            goto label_1b0650;
        }
    }
    ctx->pc = 0x1B0640u;
    // 0x1b0640: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1B0640u;
    {
        const bool branch_taken_0x1b0640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0640u;
        // 0x1b0644: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0640) {
            ctx->pc = 0x1B0724u;
            goto label_1b0724;
        }
    }
    ctx->pc = 0x1B0648u;
    // 0x1b0648: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1B0648u;
    {
        const bool branch_taken_0x1b0648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0648u;
        // 0x1b064c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0648) {
            ctx->pc = 0x1B07A4u;
            goto label_1b07a4;
        }
    }
    ctx->pc = 0x1B0650u;
label_1b0650:
    // 0x1b0650: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1b0650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b0654: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B0654u;
    {
        const bool branch_taken_0x1b0654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0654u;
        // 0x1b0658: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0654) {
            ctx->pc = 0x1B069Cu;
            goto label_1b069c;
        }
    }
    ctx->pc = 0x1B065Cu;
    // 0x1b065c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1B065Cu;
    {
        const bool branch_taken_0x1b065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B065Cu;
        // 0x1b0660: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b065c) {
            ctx->pc = 0x1B07A4u;
            goto label_1b07a4;
        }
    }
    ctx->pc = 0x1B0664u;
label_1b0664:
    // 0x1b0664: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1B0664u;
    SET_GPR_U32(ctx, 31, 0x1B066Cu);
    ctx->pc = 0x1B0668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0664u;
    // 0x1b0668: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1B0664u, 0x1B066Cu)) {
        return;
    }
    ctx->pc = 0x1B066Cu;
label_1b066c:
    // 0x1b066c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1b066cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b0670: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0670u;
    {
        const bool branch_taken_0x1b0670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0670) {
            ctx->pc = 0x1B0684u;
            goto label_1b0684;
        }
    }
    ctx->pc = 0x1B0678u;
    // 0x1b0678: 0xc04def4  jal         func_137BD0
    ctx->pc = 0x1B0678u;
    SET_GPR_U32(ctx, 31, 0x1B0680u);
    ctx->pc = 0x137BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137BD0u, 0x1B0678u, 0x1B0680u)) {
        return;
    }
    ctx->pc = 0x1B0680u;
label_1b0680:
    // 0x1b0680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b0680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0684:
    // 0x1b0684: 0x16000046  bnez        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1B0684u;
    {
        const bool branch_taken_0x1b0684 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0684u;
        // 0x1b0688: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0684) {
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B068Cu;
label_1b068c:
    // 0x1b068c: 0xc06c1ee  jal         func_1B07B8
    ctx->pc = 0x1B068Cu;
    SET_GPR_U32(ctx, 31, 0x1B0694u);
    ctx->pc = 0x1B0690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B068Cu;
    // 0x1b0690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B07B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B07B8u, 0x1B068Cu, 0x1B0694u)) {
        return;
    }
    ctx->pc = 0x1B0694u;
label_1b0694:
    // 0x1b0694: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1B0694u;
    {
        const bool branch_taken_0x1b0694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0694u;
        // 0x1b0698: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0694) {
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B069Cu;
label_1b069c:
    // 0x1b069c: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1B069Cu;
    SET_GPR_U32(ctx, 31, 0x1B06A4u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1B069Cu, 0x1B06A4u)) {
        return;
    }
    ctx->pc = 0x1B06A4u;
label_1b06a4:
    // 0x1b06a4: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x1b06a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b06a8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B06A8u;
    {
        const bool branch_taken_0x1b06a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06A8u;
        // 0x1b06ac: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06a8) {
            ctx->pc = 0x1B06F0u;
            goto label_1b06f0;
        }
    }
    ctx->pc = 0x1B06B0u;
    // 0x1b06b0: 0xc04decc  jal         func_137B30
    ctx->pc = 0x1B06B0u;
    SET_GPR_U32(ctx, 31, 0x1B06B8u);
    ctx->pc = 0x1B06B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06B0u;
    // 0x1b06b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137B30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137B30u, 0x1B06B0u, 0x1B06B8u)) {
        return;
    }
    ctx->pc = 0x1B06B8u;
label_1b06b8:
    // 0x1b06b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B06B8u;
    {
        const bool branch_taken_0x1b06b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06B8u;
        // 0x1b06bc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06b8) {
            ctx->pc = 0x1B06F0u;
            goto label_1b06f0;
        }
    }
    ctx->pc = 0x1B06C0u;
    // 0x1b06c0: 0xc04df32  jal         func_137CC8
    ctx->pc = 0x1B06C0u;
    SET_GPR_U32(ctx, 31, 0x1B06C8u);
    ctx->pc = 0x1B06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06C0u;
    // 0x1b06c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137CC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137CC8u, 0x1B06C0u, 0x1B06C8u)) {
        return;
    }
    ctx->pc = 0x1B06C8u;
label_1b06c8:
    // 0x1b06c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b06c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b06ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b06d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b06d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b06d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b06d8: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x1B06D8u;
    SET_GPR_U32(ctx, 31, 0x1B06E0u);
    ctx->pc = 0x1B06DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06D8u;
    // 0x1b06dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x1B06D8u, 0x1B06E0u)) {
        return;
    }
    ctx->pc = 0x1B06E0u;
label_1b06e0:
    // 0x1b06e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1b06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1b06e4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1b06e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1b06e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B06E8u;
    {
        const bool branch_taken_0x1b06e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06E8u;
        // 0x1b06ec: 0x8c4543b8  lw          $a1, 0x43B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06e8) {
            ctx->pc = 0x1B06F8u;
            goto label_1b06f8;
        }
    }
    ctx->pc = 0x1B06F0u;
label_1b06f0:
    // 0x1b06f0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1b06f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1b06f4: 0x8c4543c0  lw          $a1, 0x43C0($v0)
    ctx->pc = 0x1b06f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17344)));
label_1b06f8:
    // 0x1b06f8: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1b06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
    // 0x1b06fc: 0x10a30028  beq         $a1, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B06FCu;
    {
        const bool branch_taken_0x1b06fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06FCu;
        // 0x1b0700: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06fc) {
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B0704u;
    // 0x1b0704: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b0704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b0708: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B0708u;
    {
        const bool branch_taken_0x1b0708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0708u;
        // 0x1b070c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0708) {
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B0710u;
    // 0x1b0710: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1b0710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1b0714: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1B0714u;
    SET_GPR_U32(ctx, 31, 0x1B071Cu);
    ctx->pc = 0x1B0718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0714u;
    // 0x1b0718: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B0714u, 0x1B071Cu)) {
        return;
    }
    ctx->pc = 0x1B071Cu;
label_1b071c:
    // 0x1b071c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B071Cu;
    {
        const bool branch_taken_0x1b071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B071Cu;
        // 0x1b0720: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b071c) {
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B0724u;
label_1b0724:
    // 0x1b0724: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1B0724u;
    SET_GPR_U32(ctx, 31, 0x1B072Cu);
    ctx->pc = 0x1B0728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0724u;
    // 0x1b0728: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1B0724u, 0x1B072Cu)) {
        return;
    }
    ctx->pc = 0x1B072Cu;
label_1b072c:
    // 0x1b072c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1b072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b0730: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0730u;
    {
        const bool branch_taken_0x1b0730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0730) {
            ctx->pc = 0x1B0744u;
            goto label_1b0744;
        }
    }
    ctx->pc = 0x1B0738u;
    // 0x1b0738: 0xc04def4  jal         func_137BD0
    ctx->pc = 0x1B0738u;
    SET_GPR_U32(ctx, 31, 0x1B0740u);
    ctx->pc = 0x137BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137BD0u, 0x1B0738u, 0x1B0740u)) {
        return;
    }
    ctx->pc = 0x1B0740u;
label_1b0740:
    // 0x1b0740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b0740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0744:
    // 0x1b0744: 0x56000016  bnel        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B0744u;
    {
        const bool branch_taken_0x1b0744 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0744) {
            ctx->pc = 0x1B0748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0744u;
            // 0x1b0748: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B074Cu;
    // 0x1b074c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1b074cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1b0750: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1b0750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1b0754: 0x8c45f050  lw          $a1, -0xFB0($v0)
    ctx->pc = 0x1b0754u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BF050u));
    // 0x1b0758: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1b0758u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1b075c: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B075Cu;
    {
        const bool branch_taken_0x1b075c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b075c) {
            ctx->pc = 0x1B0760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B075Cu;
            // 0x1b0760: 0x8e220164  lw          $v0, 0x164($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0780u;
            goto label_1b0780;
        }
    }
    ctx->pc = 0x1B0764u;
    // 0x1b0764: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b0764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b0768: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0768u;
    {
        const bool branch_taken_0x1b0768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0768u;
        // 0x1b076c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0768) {
            ctx->pc = 0x1B077Cu;
            goto label_1b077c;
        }
    }
    ctx->pc = 0x1B0770u;
    // 0x1b0770: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1b0770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1b0774: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1B0774u;
    SET_GPR_U32(ctx, 31, 0x1B077Cu);
    ctx->pc = 0x1B0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0774u;
    // 0x1b0778: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B0774u, 0x1B077Cu)) {
        return;
    }
    ctx->pc = 0x1B077Cu;
label_1b077c:
    // 0x1b077c: 0x8e220164  lw          $v0, 0x164($s1)
    ctx->pc = 0x1b077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_1b0780:
    // 0x1b0780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0788: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b078c: 0xc06be86  jal         func_1AFA18
    ctx->pc = 0x1B078Cu;
    SET_GPR_U32(ctx, 31, 0x1B0794u);
    ctx->pc = 0x1B0790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B078Cu;
    // 0x1b0790: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFA18u, 0x1B078Cu, 0x1B0794u)) {
        return;
    }
    ctx->pc = 0x1B0794u;
label_1b0794:
    // 0x1b0794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b0794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0798: 0xae220150  sw          $v0, 0x150($s1)
    ctx->pc = 0x1b0798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
label_1b079c:
    // 0x1b079c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b079cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b07a0:
    // 0x1b07a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b07a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b07a4:
    // 0x1b07a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b07a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b07a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b07a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b07ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B07ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07ACu;
        // 0x1b07b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B07ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B07B4u;
    // 0x1b07b4: 0x0  nop
    ctx->pc = 0x1b07b4u;
    // NOP
    ctx->pc = 0x1b07b8u;
}
