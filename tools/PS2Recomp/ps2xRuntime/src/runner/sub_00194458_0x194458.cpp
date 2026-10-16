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

// Function: sub_00194458
// Address: 0x194458 - 0x194528
void sub_00194458_0x194458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194458_0x194458");
#endif

    switch (ctx->pc) {
        case 0x194474u: goto label_194474;
        case 0x194488u: goto label_194488;
        case 0x1944ccu: goto label_1944cc;
        default: break;
    }

    ctx->pc = 0x194458u;

    // 0x194458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19445c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19445cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194460: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x194464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19446c: 0xc0649ce  jal         func_192738
    ctx->pc = 0x19446Cu;
    SET_GPR_U32(ctx, 31, 0x194474u);
    ctx->pc = 0x194470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19446Cu;
    // 0x194470: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192738u, 0x19446Cu, 0x194474u)) {
        return;
    }
    ctx->pc = 0x194474u;
label_194474:
    // 0x194474: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x194474u;
    {
        const bool branch_taken_0x194474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194474u;
        // 0x194478: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194474) {
            ctx->pc = 0x1944ACu;
            goto label_1944ac;
        }
    }
    ctx->pc = 0x19447Cu;
    // 0x19447c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19447cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194480: 0xc0a4f86  jal         func_293E18
    ctx->pc = 0x194480u;
    SET_GPR_U32(ctx, 31, 0x194488u);
    ctx->pc = 0x194484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194480u;
    // 0x194484: 0x26060048  addiu       $a2, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293E18u, 0x194480u, 0x194488u)) {
        return;
    }
    ctx->pc = 0x194488u;
label_194488:
    // 0x194488: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x194488u;
    {
        const bool branch_taken_0x194488 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x19448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194488u;
        // 0x19448c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194488) {
            ctx->pc = 0x1944B0u;
            goto label_1944b0;
        }
    }
    ctx->pc = 0x194490u;
    // 0x194490: 0x9202004a  lbu         $v0, 0x4A($s0)
    ctx->pc = 0x194490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x194494: 0x9203004b  lbu         $v1, 0x4B($s0)
    ctx->pc = 0x194494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x194498: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x194498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19449c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19449cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1944a0: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x1944a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x1944a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1944A4u;
    {
        const bool branch_taken_0x1944a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944A4u;
        // 0x1944a8: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944a4) {
            ctx->pc = 0x1944C4u;
            goto label_1944c4;
        }
    }
    ctx->pc = 0x1944ACu;
label_1944ac:
    // 0x1944ac: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1944acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1944b0:
    // 0x1944b0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1944b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1944b4: 0xa202004f  sb          $v0, 0x4F($s0)
    ctx->pc = 0x1944b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x1944b8: 0xa202004c  sb          $v0, 0x4C($s0)
    ctx->pc = 0x1944b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x1944bc: 0xa202004d  sb          $v0, 0x4D($s0)
    ctx->pc = 0x1944bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x1944c0: 0xa202004e  sb          $v0, 0x4E($s0)
    ctx->pc = 0x1944c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
label_1944c4:
    // 0x1944c4: 0xc07cdf0  jal         func_1F37C0
    ctx->pc = 0x1944C4u;
    SET_GPR_U32(ctx, 31, 0x1944CCu);
    ctx->pc = 0x1F37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F37C0u, 0x1944C4u, 0x1944CCu)) {
        return;
    }
    ctx->pc = 0x1944CCu;
label_1944cc:
    // 0x1944cc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1944CCu;
    {
        const bool branch_taken_0x1944cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1944cc) {
            ctx->pc = 0x1944D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1944CCu;
            // 0x1944d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19451Cu;
            goto label_19451c;
        }
    }
    ctx->pc = 0x1944D4u;
    // 0x1944d4: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1944d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1944d8: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x1944d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x1944dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1944DCu;
    {
        const bool branch_taken_0x1944dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944DCu;
        // 0x1944e0: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944dc) {
            ctx->pc = 0x194518u;
            goto label_194518;
        }
    }
    ctx->pc = 0x1944E4u;
    // 0x1944e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1944e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1944e8: 0x3442ff9f  ori         $v0, $v0, 0xFF9F
    ctx->pc = 0x1944e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65439);
    // 0x1944ec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1944ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1944f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1944F0u;
    {
        const bool branch_taken_0x1944f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944F0u;
        // 0x1944f4: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944f0) {
            ctx->pc = 0x194500u;
            goto label_194500;
        }
    }
    ctx->pc = 0x1944F8u;
    // 0x1944f8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1944f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1944fc: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1944fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_194500:
    // 0x194500: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x194500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x194504: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x194504u;
    {
        const bool branch_taken_0x194504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194504) {
            ctx->pc = 0x194508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194504u;
            // 0x194508: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19451Cu;
            goto label_19451c;
        }
    }
    ctx->pc = 0x19450Cu;
    // 0x19450c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x19450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x194510: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x194510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x194514: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x194514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_194518:
    // 0x194518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x194518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19451c:
    // 0x19451c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19451cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194520: 0x3e00008  jr          $ra
    ctx->pc = 0x194520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194520u;
        // 0x194524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194528u;
}
