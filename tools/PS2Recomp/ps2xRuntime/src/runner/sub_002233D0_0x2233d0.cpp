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

// Function: sub_002233D0
// Address: 0x2233d0 - 0x223630
void sub_002233D0_0x2233d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002233D0_0x2233d0");
#endif

    switch (ctx->pc) {
        case 0x223400u: goto label_223400;
        case 0x223430u: goto label_223430;
        case 0x22346cu: goto label_22346c;
        case 0x223474u: goto label_223474;
        case 0x223490u: goto label_223490;
        case 0x2234a4u: goto label_2234a4;
        case 0x2234b4u: goto label_2234b4;
        case 0x2234c4u: goto label_2234c4;
        case 0x2234ccu: goto label_2234cc;
        case 0x2234d8u: goto label_2234d8;
        case 0x2234e8u: goto label_2234e8;
        case 0x2234f0u: goto label_2234f0;
        case 0x223504u: goto label_223504;
        case 0x223514u: goto label_223514;
        case 0x22351cu: goto label_22351c;
        case 0x22352cu: goto label_22352c;
        case 0x223544u: goto label_223544;
        case 0x22354cu: goto label_22354c;
        case 0x223554u: goto label_223554;
        case 0x223564u: goto label_223564;
        case 0x22356cu: goto label_22356c;
        case 0x223594u: goto label_223594;
        case 0x2235b0u: goto label_2235b0;
        case 0x2235d8u: goto label_2235d8;
        case 0x2235e4u: goto label_2235e4;
        default: break;
    }

    ctx->pc = 0x2233d0u;

    // 0x2233d0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2233d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2233d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2233d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2233d8: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x2233d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x2233dc: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2233dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2233e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2233e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233e4: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x2233e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x2233e8: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x2233e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x2233ec: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x2233ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x2233f0: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x2233f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x2233f4: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2233f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2233f8: 0xc09270a  jal         func_249C28
    ctx->pc = 0x2233F8u;
    SET_GPR_U32(ctx, 31, 0x223400u);
    ctx->pc = 0x2233FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2233F8u;
    // 0x2233fc: 0x27a70114  addiu       $a3, $sp, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x2233F8u, 0x223400u)) {
        return;
    }
    ctx->pc = 0x223400u;
label_223400:
    // 0x223400: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x223400u;
    {
        const bool branch_taken_0x223400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223400u;
        // 0x223404: 0x8fa30114  lw          $v1, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223400) {
            ctx->pc = 0x2235E8u;
            goto label_2235e8;
        }
    }
    ctx->pc = 0x223408u;
    // 0x223408: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x223408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x22340c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x22340cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x223410: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223414: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x223414u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x223418: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x223418u;
    {
        const bool branch_taken_0x223418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223418u;
        // 0x22341c: 0x8fa60110  lw          $a2, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223418) {
            ctx->pc = 0x2235C4u;
            goto label_2235c4;
        }
    }
    ctx->pc = 0x223420u;
    // 0x223420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223424: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x223424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x223428: 0xc093546  jal         func_24D518
    ctx->pc = 0x223428u;
    SET_GPR_U32(ctx, 31, 0x223430u);
    ctx->pc = 0x22342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223428u;
    // 0x22342c: 0x27a50118  addiu       $a1, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x223428u, 0x223430u)) {
        return;
    }
    ctx->pc = 0x223430u;
label_223430:
    // 0x223430: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x223430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x223434: 0x1443006d  bne         $v0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x223434u;
    {
        const bool branch_taken_0x223434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x223438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223434u;
        // 0x223438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223434) {
            ctx->pc = 0x2235ECu;
            goto label_2235ec;
        }
    }
    ctx->pc = 0x22343Cu;
    // 0x22343c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x22343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x223440: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x223440u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x223444: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x223444u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x223448: 0x309400ff  andi        $s4, $a0, 0xFF
    ctx->pc = 0x223448u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22344c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x22344cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x223450: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223450u;
    {
        const bool branch_taken_0x223450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223450u;
        // 0x223454: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223450) {
            ctx->pc = 0x223464u;
            goto label_223464;
        }
    }
    ctx->pc = 0x223458u;
    // 0x223458: 0x31300  sll         $v0, $v1, 12
    ctx->pc = 0x223458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x22345c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x22345cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x223460: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x223460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_223464:
    // 0x223464: 0xc08aa96  jal         func_22AA58
    ctx->pc = 0x223464u;
    SET_GPR_U32(ctx, 31, 0x22346Cu);
    ctx->pc = 0x223468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223464u;
    // 0x223468: 0x97b0011a  lhu         $s0, 0x11A($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 282)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA58u, 0x223464u, 0x22346Cu)) {
        return;
    }
    ctx->pc = 0x22346Cu;
label_22346c:
    // 0x22346c: 0xc08aaa6  jal         func_22AA98
    ctx->pc = 0x22346Cu;
    SET_GPR_U32(ctx, 31, 0x223474u);
    ctx->pc = 0x223470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22346Cu;
    // 0x223470: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA98u, 0x22346Cu, 0x223474u)) {
        return;
    }
    ctx->pc = 0x223474u;
label_223474:
    // 0x223474: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x223474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223478: 0x2682fffd  addiu       $v0, $s4, -0x3
    ctx->pc = 0x223478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967293));
    // 0x22347c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x22347cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x223480: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x223480u;
    {
        const bool branch_taken_0x223480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223480) {
            ctx->pc = 0x2234BCu;
            goto label_2234bc;
        }
    }
    ctx->pc = 0x223488u;
    // 0x223488: 0xc08aa8e  jal         func_22AA38
    ctx->pc = 0x223488u;
    SET_GPR_U32(ctx, 31, 0x223490u);
    ctx->pc = 0x22348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223488u;
    // 0x22348c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA38u, 0x223488u, 0x223490u)) {
        return;
    }
    ctx->pc = 0x223490u;
label_223490:
    // 0x223490: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x223490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x223494: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x223494u;
    {
        const bool branch_taken_0x223494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223494) {
            ctx->pc = 0x2234ACu;
            goto label_2234ac;
        }
    }
    ctx->pc = 0x22349Cu;
    // 0x22349c: 0xc08aa9e  jal         func_22AA78
    ctx->pc = 0x22349Cu;
    SET_GPR_U32(ctx, 31, 0x2234A4u);
    ctx->pc = 0x2234A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22349Cu;
    // 0x2234a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA78u, 0x22349Cu, 0x2234A4u)) {
        return;
    }
    ctx->pc = 0x2234A4u;
label_2234a4:
    // 0x2234a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2234A4u;
    {
        const bool branch_taken_0x2234a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234A4u;
        // 0x2234a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234a4) {
            ctx->pc = 0x2234D0u;
            goto label_2234d0;
        }
    }
    ctx->pc = 0x2234ACu;
label_2234ac:
    // 0x2234ac: 0xc08aa9e  jal         func_22AA78
    ctx->pc = 0x2234ACu;
    SET_GPR_U32(ctx, 31, 0x2234B4u);
    ctx->pc = 0x2234B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234ACu;
    // 0x2234b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA78u, 0x2234ACu, 0x2234B4u)) {
        return;
    }
    ctx->pc = 0x2234B4u;
label_2234b4:
    // 0x2234b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2234B4u;
    {
        const bool branch_taken_0x2234b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234B4u;
        // 0x2234b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234b4) {
            ctx->pc = 0x2234D0u;
            goto label_2234d0;
        }
    }
    ctx->pc = 0x2234BCu;
label_2234bc:
    // 0x2234bc: 0xc08aa8e  jal         func_22AA38
    ctx->pc = 0x2234BCu;
    SET_GPR_U32(ctx, 31, 0x2234C4u);
    ctx->pc = 0x2234C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234BCu;
    // 0x2234c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA38u, 0x2234BCu, 0x2234C4u)) {
        return;
    }
    ctx->pc = 0x2234C4u;
label_2234c4:
    // 0x2234c4: 0xc08aa9e  jal         func_22AA78
    ctx->pc = 0x2234C4u;
    SET_GPR_U32(ctx, 31, 0x2234CCu);
    ctx->pc = 0x2234C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234C4u;
    // 0x2234c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA78u, 0x2234C4u, 0x2234CCu)) {
        return;
    }
    ctx->pc = 0x2234CCu;
label_2234cc:
    // 0x2234cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2234ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2234d0:
    // 0x2234d0: 0xc093d92  jal         func_24F648
    ctx->pc = 0x2234D0u;
    SET_GPR_U32(ctx, 31, 0x2234D8u);
    ctx->pc = 0x2234D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234D0u;
    // 0x2234d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F648u, 0x2234D0u, 0x2234D8u)) {
        return;
    }
    ctx->pc = 0x2234D8u;
label_2234d8:
    // 0x2234d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2234D8u;
    {
        const bool branch_taken_0x2234d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2234DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234D8u;
        // 0x2234dc: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234d8) {
            ctx->pc = 0x2234F8u;
            goto label_2234f8;
        }
    }
    ctx->pc = 0x2234E0u;
    // 0x2234e0: 0xc08aa8e  jal         func_22AA38
    ctx->pc = 0x2234E0u;
    SET_GPR_U32(ctx, 31, 0x2234E8u);
    ctx->pc = 0x2234E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234E0u;
    // 0x2234e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA38u, 0x2234E0u, 0x2234E8u)) {
        return;
    }
    ctx->pc = 0x2234E8u;
label_2234e8:
    // 0x2234e8: 0xc08aa9e  jal         func_22AA78
    ctx->pc = 0x2234E8u;
    SET_GPR_U32(ctx, 31, 0x2234F0u);
    ctx->pc = 0x2234ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234E8u;
    // 0x2234ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA78u, 0x2234E8u, 0x2234F0u)) {
        return;
    }
    ctx->pc = 0x2234F0u;
label_2234f0:
    // 0x2234f0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2234F0u;
    {
        const bool branch_taken_0x2234f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234F0u;
        // 0x2234f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234f0) {
            ctx->pc = 0x2235ECu;
            goto label_2235ec;
        }
    }
    ctx->pc = 0x2234F8u;
label_2234f8:
    // 0x2234f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2234f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234fc: 0xc093d92  jal         func_24F648
    ctx->pc = 0x2234FCu;
    SET_GPR_U32(ctx, 31, 0x223504u);
    ctx->pc = 0x223500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234FCu;
    // 0x223500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F648u, 0x2234FCu, 0x223504u)) {
        return;
    }
    ctx->pc = 0x223504u;
label_223504:
    // 0x223504: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223504u;
    {
        const bool branch_taken_0x223504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223504u;
        // 0x223508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223504) {
            ctx->pc = 0x223524u;
            goto label_223524;
        }
    }
    ctx->pc = 0x22350Cu;
    // 0x22350c: 0xc08aa8e  jal         func_22AA38
    ctx->pc = 0x22350Cu;
    SET_GPR_U32(ctx, 31, 0x223514u);
    ctx->pc = 0x223510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22350Cu;
    // 0x223510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA38u, 0x22350Cu, 0x223514u)) {
        return;
    }
    ctx->pc = 0x223514u;
label_223514:
    // 0x223514: 0xc08aa9e  jal         func_22AA78
    ctx->pc = 0x223514u;
    SET_GPR_U32(ctx, 31, 0x22351Cu);
    ctx->pc = 0x223518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223514u;
    // 0x223518: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA78u, 0x223514u, 0x22351Cu)) {
        return;
    }
    ctx->pc = 0x22351Cu;
label_22351c:
    // 0x22351c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x22351Cu;
    {
        const bool branch_taken_0x22351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22351Cu;
        // 0x223520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22351c) {
            ctx->pc = 0x2235ECu;
            goto label_2235ec;
        }
    }
    ctx->pc = 0x223524u;
label_223524:
    // 0x223524: 0xc08ac36  jal         func_22B0D8
    ctx->pc = 0x223524u;
    SET_GPR_U32(ctx, 31, 0x22352Cu);
    ctx->pc = 0x223528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223524u;
    // 0x223528: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B0D8u, 0x223524u, 0x22352Cu)) {
        return;
    }
    ctx->pc = 0x22352Cu;
label_22352c:
    // 0x22352c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22352cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223530: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x223530u;
    {
        const bool branch_taken_0x223530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x223534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223530u;
        // 0x223534: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223530) {
            ctx->pc = 0x22355Cu;
            goto label_22355c;
        }
    }
    ctx->pc = 0x223538u;
    // 0x223538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x223538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22353c: 0xc0937e8  jal         func_24DFA0
    ctx->pc = 0x22353Cu;
    SET_GPR_U32(ctx, 31, 0x223544u);
    ctx->pc = 0x223540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22353Cu;
    // 0x223540: 0x24840448  addiu       $a0, $a0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DFA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DFA0u, 0x22353Cu, 0x223544u)) {
        return;
    }
    ctx->pc = 0x223544u;
label_223544:
    // 0x223544: 0xc08aa8e  jal         func_22AA38
    ctx->pc = 0x223544u;
    SET_GPR_U32(ctx, 31, 0x22354Cu);
    ctx->pc = 0x223548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223544u;
    // 0x223548: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA38u, 0x223544u, 0x22354Cu)) {
        return;
    }
    ctx->pc = 0x22354Cu;
label_22354c:
    // 0x22354c: 0xc08aa9e  jal         func_22AA78
    ctx->pc = 0x22354Cu;
    SET_GPR_U32(ctx, 31, 0x223554u);
    ctx->pc = 0x223550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22354Cu;
    // 0x223550: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA78u, 0x22354Cu, 0x223554u)) {
        return;
    }
    ctx->pc = 0x223554u;
label_223554:
    // 0x223554: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x223554u;
    {
        const bool branch_taken_0x223554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223554u;
        // 0x223558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223554) {
            ctx->pc = 0x2235ECu;
            goto label_2235ec;
        }
    }
    ctx->pc = 0x22355Cu;
label_22355c:
    // 0x22355c: 0xc08aa8e  jal         func_22AA38
    ctx->pc = 0x22355Cu;
    SET_GPR_U32(ctx, 31, 0x223564u);
    ctx->pc = 0x223560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22355Cu;
    // 0x223560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA38u, 0x22355Cu, 0x223564u)) {
        return;
    }
    ctx->pc = 0x223564u;
label_223564:
    // 0x223564: 0xc08aa9e  jal         func_22AA78
    ctx->pc = 0x223564u;
    SET_GPR_U32(ctx, 31, 0x22356Cu);
    ctx->pc = 0x223568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223564u;
    // 0x223568: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA78u, 0x223564u, 0x22356Cu)) {
        return;
    }
    ctx->pc = 0x22356Cu;
label_22356c:
    // 0x22356c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x22356cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x223570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223574: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x223574u;
    {
        const bool branch_taken_0x223574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x223578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223574u;
        // 0x223578: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223574) {
            ctx->pc = 0x2235A4u;
            goto label_2235a4;
        }
    }
    ctx->pc = 0x22357Cu;
    // 0x22357c: 0x97a20118  lhu         $v0, 0x118($sp)
    ctx->pc = 0x22357cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x223580: 0x24840448  addiu       $a0, $a0, 0x448
    ctx->pc = 0x223580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1096));
    // 0x223584: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x223584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223588: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x223588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x22358c: 0xc093708  jal         func_24DC20
    ctx->pc = 0x22358Cu;
    SET_GPR_U32(ctx, 31, 0x223594u);
    ctx->pc = 0x223590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22358Cu;
    // 0x223590: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x22358Cu, 0x223594u)) {
        return;
    }
    ctx->pc = 0x223594u;
label_223594:
    // 0x223594: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x223594u;
    {
        const bool branch_taken_0x223594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223594u;
        // 0x223598: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223594) {
            ctx->pc = 0x2235ECu;
            goto label_2235ec;
        }
    }
    ctx->pc = 0x22359Cu;
    // 0x22359c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x22359Cu;
    {
        const bool branch_taken_0x22359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22359Cu;
        // 0x2235a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22359c) {
            ctx->pc = 0x2235ECu;
            goto label_2235ec;
        }
    }
    ctx->pc = 0x2235A4u;
label_2235a4:
    // 0x2235a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2235a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235a8: 0xc0937e8  jal         func_24DFA0
    ctx->pc = 0x2235A8u;
    SET_GPR_U32(ctx, 31, 0x2235B0u);
    ctx->pc = 0x2235ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235A8u;
    // 0x2235ac: 0x24840448  addiu       $a0, $a0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DFA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DFA0u, 0x2235A8u, 0x2235B0u)) {
        return;
    }
    ctx->pc = 0x2235B0u;
label_2235b0:
    // 0x2235b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2235b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235b4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2235B4u;
    {
        const bool branch_taken_0x2235b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235B4u;
        // 0x2235b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235b4) {
            ctx->pc = 0x2235ECu;
            goto label_2235ec;
        }
    }
    ctx->pc = 0x2235BCu;
    // 0x2235bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2235BCu;
    {
        const bool branch_taken_0x2235bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235BCu;
        // 0x2235c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235bc) {
            ctx->pc = 0x2235ECu;
            goto label_2235ec;
        }
    }
    ctx->pc = 0x2235C4u;
label_2235c4:
    // 0x2235c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2235c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2235c8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2235c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2235cc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2235ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2235d0: 0xc092848  jal         func_24A120
    ctx->pc = 0x2235D0u;
    SET_GPR_U32(ctx, 31, 0x2235D8u);
    ctx->pc = 0x2235D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235D0u;
    // 0x2235d4: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2235D0u, 0x2235D8u)) {
        return;
    }
    ctx->pc = 0x2235D8u;
label_2235d8:
    // 0x2235d8: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x2235d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x2235dc: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2235DCu;
    SET_GPR_U32(ctx, 31, 0x2235E4u);
    ctx->pc = 0x2235E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235DCu;
    // 0x2235e0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2235DCu, 0x2235E4u)) {
        return;
    }
    ctx->pc = 0x2235E4u;
label_2235e4:
    // 0x2235e4: 0x0  nop
    ctx->pc = 0x2235e4u;
    // NOP
label_2235e8:
    // 0x2235e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2235e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2235ec:
    // 0x2235ec: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x2235ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2235f0: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x2235f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2235f4: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x2235f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2235f8: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x2235f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2235fc: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x2235fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x223600: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x223600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x223604: 0x3e00008  jr          $ra
    ctx->pc = 0x223604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223604u;
        // 0x223608: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22360Cu;
    // 0x22360c: 0x0  nop
    ctx->pc = 0x22360cu;
    // NOP
    // 0x223610: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x223610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x223614: 0x0  nop
    ctx->pc = 0x223614u;
    // NOP
    // 0x223618: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x223618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22361c: 0x0  nop
    ctx->pc = 0x22361cu;
    // NOP
    // 0x223620: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x223620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x223624: 0x0  nop
    ctx->pc = 0x223624u;
    // NOP
    // 0x223628: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x223628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22362c: 0x0  nop
    ctx->pc = 0x22362cu;
    // NOP
    ctx->pc = 0x223630u;
}
