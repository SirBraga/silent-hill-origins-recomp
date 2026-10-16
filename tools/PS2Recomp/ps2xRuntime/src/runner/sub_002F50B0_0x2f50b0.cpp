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

// Function: sub_002F50B0
// Address: 0x2f50b0 - 0x2f52b8
void sub_002F50B0_0x2f50b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F50B0_0x2f50b0");
#endif

    switch (ctx->pc) {
        case 0x2f50f4u: goto label_2f50f4;
        case 0x2f5110u: goto label_2f5110;
        case 0x2f5130u: goto label_2f5130;
        case 0x2f5194u: goto label_2f5194;
        case 0x2f51a0u: goto label_2f51a0;
        case 0x2f51acu: goto label_2f51ac;
        case 0x2f51b4u: goto label_2f51b4;
        case 0x2f51bcu: goto label_2f51bc;
        case 0x2f51f8u: goto label_2f51f8;
        case 0x2f521cu: goto label_2f521c;
        case 0x2f5240u: goto label_2f5240;
        case 0x2f5264u: goto label_2f5264;
        default: break;
    }

    ctx->pc = 0x2f50b0u;

    // 0x2f50b0: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x2f50b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x2f50b4: 0xffb502e0  sd          $s5, 0x2E0($sp)
    ctx->pc = 0x2f50b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 21));
    // 0x2f50b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f50b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f50bc: 0xffb402d0  sd          $s4, 0x2D0($sp)
    ctx->pc = 0x2f50bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 20));
    // 0x2f50c0: 0xffb302c0  sd          $s3, 0x2C0($sp)
    ctx->pc = 0x2f50c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 19));
    // 0x2f50c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2f50c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f50c8: 0xffb202b0  sd          $s2, 0x2B0($sp)
    ctx->pc = 0x2f50c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 18));
    // 0x2f50cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f50ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f50d0: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x2f50d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
    // 0x2f50d4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2f50d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f50d8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f50d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f50dc: 0xffbf0320  sd          $ra, 0x320($sp)
    ctx->pc = 0x2f50dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 31));
    // 0x2f50e0: 0xffbe0310  sd          $fp, 0x310($sp)
    ctx->pc = 0x2f50e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 30));
    // 0x2f50e4: 0xffb70300  sd          $s7, 0x300($sp)
    ctx->pc = 0x2f50e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 23));
    // 0x2f50e8: 0xffb602f0  sd          $s6, 0x2F0($sp)
    ctx->pc = 0x2f50e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 22));
    // 0x2f50ec: 0xc0bce62  jal         func_2F3988
    ctx->pc = 0x2F50ECu;
    SET_GPR_U32(ctx, 31, 0x2F50F4u);
    ctx->pc = 0x2F50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F50ECu;
    // 0x2f50f0: 0xffb102a0  sd          $s1, 0x2A0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3988u, 0x2F50ECu, 0x2F50F4u)) {
        return;
    }
    ctx->pc = 0x2F50F4u;
label_2f50f4:
    // 0x2f50f4: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2F50F4u;
    {
        const bool branch_taken_0x2f50f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F50F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50F4u;
        // 0x2f50f8: 0xdfbf0320  ld          $ra, 0x320($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50f4) {
            ctx->pc = 0x2F528Cu;
            goto label_2f528c;
        }
    }
    ctx->pc = 0x2F50FCu;
    // 0x2f50fc: 0x27b10200  addiu       $s1, $sp, 0x200
    ctx->pc = 0x2f50fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2f5100: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f5100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5104: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f5104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5108: 0xc0bce8c  jal         func_2F3A30
    ctx->pc = 0x2F5108u;
    SET_GPR_U32(ctx, 31, 0x2F5110u);
    ctx->pc = 0x2F510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5108u;
    // 0x2f510c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3A30u, 0x2F5108u, 0x2F5110u)) {
        return;
    }
    ctx->pc = 0x2F5110u;
label_2f5110:
    // 0x2f5110: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2F5110u;
    {
        const bool branch_taken_0x2f5110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5110u;
        // 0x2f5114: 0xdfbf0320  ld          $ra, 0x320($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5110) {
            ctx->pc = 0x2F528Cu;
            goto label_2f528c;
        }
    }
    ctx->pc = 0x2F5118u;
    // 0x2f5118: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f5118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f511c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f511cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5120: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f5120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f5124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5128: 0xc0bcf42  jal         func_2F3D08
    ctx->pc = 0x2F5128u;
    SET_GPR_U32(ctx, 31, 0x2F5130u);
    ctx->pc = 0x2F512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5128u;
    // 0x2f512c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3D08u, 0x2F5128u, 0x2F5130u)) {
        return;
    }
    ctx->pc = 0x2F5130u;
label_2f5130:
    // 0x2f5130: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f5130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5134: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5138: 0x14430054  bne         $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2F5138u;
    {
        const bool branch_taken_0x2f5138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5138u;
        // 0x2f513c: 0xdfbf0320  ld          $ra, 0x320($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5138) {
            ctx->pc = 0x2F528Cu;
            goto label_2f528c;
        }
    }
    ctx->pc = 0x2F5140u;
    // 0x2f5140: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x2f5140u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5144: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f5144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f5148: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5148u;
    {
        const bool branch_taken_0x2f5148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5148) {
            ctx->pc = 0x2F515Cu;
            goto label_2f515c;
        }
    }
    ctx->pc = 0x2F5150u;
    // 0x2f5150: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2f5150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2f5154: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5154u;
    {
        const bool branch_taken_0x2f5154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5154) {
            ctx->pc = 0x2F5158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5154u;
            // 0x2f5158: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5168u;
            goto label_2f5168;
        }
    }
    ctx->pc = 0x2F515Cu;
label_2f515c:
    // 0x2f515c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f515cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5160: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2F5160u;
    {
        const bool branch_taken_0x2f5160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5160u;
        // 0x2f5164: 0x3442000d  ori         $v0, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5160) {
            ctx->pc = 0x2F5288u;
            goto label_2f5288;
        }
    }
    ctx->pc = 0x2F5168u;
label_2f5168:
    // 0x2f5168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5168u;
    {
        const bool branch_taken_0x2f5168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5168u;
        // 0x2f516c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5168) {
            ctx->pc = 0x2F517Cu;
            goto label_2f517c;
        }
    }
    ctx->pc = 0x2F5170u;
    // 0x2f5170: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5174: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2F5174u;
    {
        const bool branch_taken_0x2f5174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5174u;
        // 0x2f5178: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5174) {
            ctx->pc = 0x2F5288u;
            goto label_2f5288;
        }
    }
    ctx->pc = 0x2F517Cu;
label_2f517c:
    // 0x2f517c: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x2f517cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2f5180: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F5180u;
    {
        const bool branch_taken_0x2f5180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5180u;
        // 0x2f5184: 0x901823  subu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5180) {
            ctx->pc = 0x2F51C8u;
            goto label_2f51c8;
        }
    }
    ctx->pc = 0x2F5188u;
    // 0x2f5188: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f518c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2F518Cu;
    {
        const bool branch_taken_0x2f518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F518Cu;
        // 0x2f5190: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f518c) {
            ctx->pc = 0x2F5288u;
            goto label_2f5288;
        }
    }
    ctx->pc = 0x2F5194u;
label_2f5194:
    // 0x2f5194: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5198: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2F5198u;
    {
        const bool branch_taken_0x2f5198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5198u;
        // 0x2f519c: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5198) {
            ctx->pc = 0x2F5288u;
            goto label_2f5288;
        }
    }
    ctx->pc = 0x2F51A0u;
label_2f51a0:
    // 0x2f51a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f51a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51a4: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2F51A4u;
    SET_GPR_U32(ctx, 31, 0x2F51ACu);
    ctx->pc = 0x2F51A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F51A4u;
    // 0x2f51a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2F51A4u, 0x2F51ACu)) {
        return;
    }
    ctx->pc = 0x2F51ACu;
label_2f51ac:
    // 0x2f51ac: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2F51ACu;
    {
        const bool branch_taken_0x2f51ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51ACu;
        // 0x2f51b0: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51ac) {
            ctx->pc = 0x2F5288u;
            goto label_2f5288;
        }
    }
    ctx->pc = 0x2F51B4u;
label_2f51b4:
    // 0x2f51b4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2F51B4u;
    {
        const bool branch_taken_0x2f51b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51B4u;
        // 0x2f51b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51b4) {
            ctx->pc = 0x2F5288u;
            goto label_2f5288;
        }
    }
    ctx->pc = 0x2F51BCu;
label_2f51bc:
    // 0x2f51bc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f51c0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2F51C0u;
    {
        const bool branch_taken_0x2f51c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51C0u;
        // 0x2f51c4: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51c0) {
            ctx->pc = 0x2F5288u;
            goto label_2f5288;
        }
    }
    ctx->pc = 0x2F51C8u;
label_2f51c8:
    // 0x2f51c8: 0x72900a  movz        $s2, $v1, $s2
    ctx->pc = 0x2f51c8u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
    // 0x2f51cc: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2f51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2f51d0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2f51d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f51d4: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x2f51d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
    // 0x2f51d8: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x2f51d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51dc: 0x13c00029  beqz        $fp, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F51DCu;
    {
        const bool branch_taken_0x2f51dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51DCu;
        // 0x2f51e0: 0x8fb10010  lw          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51dc) {
            ctx->pc = 0x2F5284u;
            goto label_2f5284;
        }
    }
    ctx->pc = 0x2F51E4u;
    // 0x2f51e4: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x2f51e4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x2f51e8: 0x3c167fff  lui         $s6, 0x7FFF
    ctx->pc = 0x2f51e8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32767 << 16));
    // 0x2f51ec: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x2f51ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x2f51f0: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x2f51f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x2f51f4: 0x0  nop
    ctx->pc = 0x2f51f4u;
    // NOP
label_2f51f8:
    // 0x2f51f8: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x2f51f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2f51fc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F51FCu;
    {
        const bool branch_taken_0x2f51fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51FCu;
        // 0x2f5200: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51fc) {
            ctx->pc = 0x2F5254u;
            goto label_2f5254;
        }
    }
    ctx->pc = 0x2F5204u;
    // 0x2f5204: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f5204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5208: 0x2453c880  addiu       $s3, $v0, -0x3780
    ctx->pc = 0x2f5208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
    // 0x2f520c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f520cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f5210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5214: 0xc0bdb5e  jal         func_2F6D78
    ctx->pc = 0x2F5214u;
    SET_GPR_U32(ctx, 31, 0x2F521Cu);
    ctx->pc = 0x2F5218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5214u;
    // 0x2f5218: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D78u, 0x2F5214u, 0x2F521Cu)) {
        return;
    }
    ctx->pc = 0x2F521Cu;
label_2f521c:
    // 0x2f521c: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2F521Cu;
    {
        const bool branch_taken_0x2f521c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F521Cu;
        // 0x2f5220: 0xafa20280  sw          $v0, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f521c) {
            ctx->pc = 0x2F5194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5194;
        }
    }
    ctx->pc = 0x2F5224u;
    // 0x2f5224: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2f5224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f5228: 0x503023  subu        $a2, $v0, $s0
    ctx->pc = 0x2f5228u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f522c: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x2f522cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2f5230: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2F5230u;
    {
        const bool branch_taken_0x2f5230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5230u;
        // 0x2f5234: 0x2132821  addu        $a1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5230) {
            ctx->pc = 0x2F51A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f51a0;
        }
    }
    ctx->pc = 0x2F5238u;
    // 0x2f5238: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2F5238u;
    SET_GPR_U32(ctx, 31, 0x2F5240u);
    ctx->pc = 0x2F523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5238u;
    // 0x2f523c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2F5238u, 0x2F5240u)) {
        return;
    }
    ctx->pc = 0x2F5240u;
label_2f5240:
    // 0x2f5240: 0x26830400  addiu       $v1, $s4, 0x400
    ctx->pc = 0x2f5240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    // 0x2f5244: 0x2642fc00  addiu       $v0, $s2, -0x400
    ctx->pc = 0x2f5244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966272));
    // 0x2f5248: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x2f5248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f524c: 0x70a023  subu        $s4, $v1, $s0
    ctx->pc = 0x2f524cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2f5250: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f5250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5254:
    // 0x2f5254: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f5254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5258: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f5258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f525c: 0xc0bc95c  jal         func_2F2570
    ctx->pc = 0x2F525Cu;
    SET_GPR_U32(ctx, 31, 0x2F5264u);
    ctx->pc = 0x2F5260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F525Cu;
    // 0x2f5260: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2570u, 0x2F525Cu, 0x2F5264u)) {
        return;
    }
    ctx->pc = 0x2F5264u;
label_2f5264:
    // 0x2f5264: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2f5264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2f5268: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2F5268u;
    {
        const bool branch_taken_0x2f5268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5268u;
        // 0x2f526c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5268) {
            ctx->pc = 0x2F51B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f51b4;
        }
    }
    ctx->pc = 0x2F5270u;
    // 0x2f5270: 0x1237ffd2  beq         $s1, $s7, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2F5270u;
    {
        const bool branch_taken_0x2f5270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x2F5274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5270u;
        // 0x2f5274: 0x2368824  and         $s1, $s1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5270) {
            ctx->pc = 0x2F51BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f51bc;
        }
    }
    ctx->pc = 0x2F5278u;
    // 0x2f5278: 0x2602fc00  addiu       $v0, $s0, -0x400
    ctx->pc = 0x2f5278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966272));
    // 0x2f527c: 0x1640ffde  bnez        $s2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2F527Cu;
    {
        const bool branch_taken_0x2f527c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F527Cu;
        // 0x2f5280: 0x50800b  movn        $s0, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f527c) {
            ctx->pc = 0x2F51F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f51f8;
        }
    }
    ctx->pc = 0x2F5284u;
label_2f5284:
    // 0x2f5284: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2f5284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f5288:
    // 0x2f5288: 0xdfbf0320  ld          $ra, 0x320($sp)
    ctx->pc = 0x2f5288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
label_2f528c:
    // 0x2f528c: 0xdfbe0310  ld          $fp, 0x310($sp)
    ctx->pc = 0x2f528cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2f5290: 0xdfb70300  ld          $s7, 0x300($sp)
    ctx->pc = 0x2f5290u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2f5294: 0xdfb602f0  ld          $s6, 0x2F0($sp)
    ctx->pc = 0x2f5294u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2f5298: 0xdfb502e0  ld          $s5, 0x2E0($sp)
    ctx->pc = 0x2f5298u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2f529c: 0xdfb402d0  ld          $s4, 0x2D0($sp)
    ctx->pc = 0x2f529cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2f52a0: 0xdfb302c0  ld          $s3, 0x2C0($sp)
    ctx->pc = 0x2f52a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2f52a4: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x2f52a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2f52a8: 0xdfb102a0  ld          $s1, 0x2A0($sp)
    ctx->pc = 0x2f52a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2f52ac: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x2f52acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2f52b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F52B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52B0u;
        // 0x2f52b4: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F52B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F52B8u;
}
