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

// Function: sub_001805D0
// Address: 0x1805d0 - 0x180660
void sub_001805D0_0x1805d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001805D0_0x1805d0");
#endif

    switch (ctx->pc) {
        case 0x180600u: goto label_180600;
        case 0x180638u: goto label_180638;
        default: break;
    }

    ctx->pc = 0x1805d0u;

    // 0x1805d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1805d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1805d4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1805d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1805d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1805d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1805dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1805dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1805e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1805e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1805e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1805e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1805e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805ec: 0x8c4389ec  lw          $v1, -0x7614($v0)
    ctx->pc = 0x1805ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3389ECu));
    // 0x1805f0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1805F0u;
    {
        const bool branch_taken_0x1805f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1805F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805F0u;
        // 0x1805f4: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1805f0) {
            ctx->pc = 0x180620u;
            goto label_180620;
        }
    }
    ctx->pc = 0x1805F8u;
    // 0x1805f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1805f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1805fc: 0x0  nop
    ctx->pc = 0x1805fcu;
    // NOP
label_180600:
    // 0x180600: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x180600u;
    {
        const bool branch_taken_0x180600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180600) {
            ctx->pc = 0x180604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180600u;
            // 0x180604: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180618u;
            goto label_180618;
        }
    }
    ctx->pc = 0x180608u;
    // 0x180608: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x180608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18060c: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18060Cu;
    {
        const bool branch_taken_0x18060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x18060c) {
            ctx->pc = 0x180624u;
            goto label_180624;
        }
    }
    ctx->pc = 0x180614u;
    // 0x180614: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x180614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_180618:
    // 0x180618: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x180618u;
    {
        const bool branch_taken_0x180618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180618) {
            ctx->pc = 0x18061Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180618u;
            // 0x18061c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180600;
        }
    }
    ctx->pc = 0x180620u;
label_180620:
    // 0x180620: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x180620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180624:
    // 0x180624: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x180624u;
    {
        const bool branch_taken_0x180624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180624) {
            ctx->pc = 0x180628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180624u;
            // 0x180628: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180640u;
            goto label_180640;
        }
    }
    ctx->pc = 0x18062Cu;
    // 0x18062c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18062cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x180630: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x180630u;
    SET_GPR_U32(ctx, 31, 0x180638u);
    ctx->pc = 0x180634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180630u;
    // 0x180634: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x180630u, 0x180638u)) {
        return;
    }
    ctx->pc = 0x180638u;
label_180638:
    // 0x180638: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x180638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18063c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x18063cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_180640:
    // 0x180640: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x180640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180644: 0x8e2289ec  lw          $v0, -0x7614($s1)
    ctx->pc = 0x180644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937068)));
    // 0x180648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18064c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18064cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x180650: 0xae2389ec  sw          $v1, -0x7614($s1)
    ctx->pc = 0x180650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294937068), GPR_U32(ctx, 3));
    // 0x180654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180658: 0x3e00008  jr          $ra
    ctx->pc = 0x180658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180658u;
        // 0x18065c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180660u;
}
