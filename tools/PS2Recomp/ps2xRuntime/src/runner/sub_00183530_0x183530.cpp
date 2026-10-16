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

// Function: sub_00183530
// Address: 0x183530 - 0x183598
void sub_00183530_0x183530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183530_0x183530");
#endif

    switch (ctx->pc) {
        case 0x18358cu: goto label_18358c;
        default: break;
    }

    ctx->pc = 0x183530u;

    // 0x183530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183538: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x183538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18353c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x18353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x183540: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183540u;
    {
        const bool branch_taken_0x183540 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x183540) {
            ctx->pc = 0x183544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183540u;
            // 0x183544: 0x8c82004c  lw          $v0, 0x4C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183554u;
            goto label_183554;
        }
    }
    ctx->pc = 0x183548u;
    // 0x183548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18354c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18354Cu;
    {
        const bool branch_taken_0x18354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18354Cu;
        // 0x183550: 0xac820054  sw          $v0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18354c) {
            ctx->pc = 0x18358Cu;
            goto label_18358c;
        }
    }
    ctx->pc = 0x183554u;
label_183554:
    // 0x183554: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183554u;
    {
        const bool branch_taken_0x183554 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x183558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183554u;
        // 0x183558: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183554) {
            ctx->pc = 0x183564u;
            goto label_183564;
        }
    }
    ctx->pc = 0x18355Cu;
    // 0x18355c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18355Cu;
    {
        const bool branch_taken_0x18355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18355Cu;
        // 0x183560: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18355c) {
            ctx->pc = 0x18358Cu;
            goto label_18358c;
        }
    }
    ctx->pc = 0x183564u;
label_183564:
    // 0x183564: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x183564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
    // 0x183568: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x183568u;
    {
        const bool branch_taken_0x183568 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x18356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183568u;
        // 0x18356c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183568) {
            ctx->pc = 0x183590u;
            goto label_183590;
        }
    }
    ctx->pc = 0x183570u;
    // 0x183570: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x183570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x183574: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x183574u;
    {
        const bool branch_taken_0x183574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183574u;
        // 0x183578: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183574) {
            ctx->pc = 0x183590u;
            goto label_183590;
        }
    }
    ctx->pc = 0x18357Cu;
    // 0x18357c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18357Cu;
    {
        const bool branch_taken_0x18357c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18357c) {
            ctx->pc = 0x183590u;
            goto label_183590;
        }
    }
    ctx->pc = 0x183584u;
    // 0x183584: 0xc060c24  jal         func_183090
    ctx->pc = 0x183584u;
    SET_GPR_U32(ctx, 31, 0x18358Cu);
    ctx->pc = 0x183588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183584u;
    // 0x183588: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x183090u, 0x183584u, 0x18358Cu)) {
        return;
    }
    ctx->pc = 0x18358Cu;
label_18358c:
    // 0x18358c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18358cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_183590:
    // 0x183590: 0x3e00008  jr          $ra
    ctx->pc = 0x183590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183590u;
        // 0x183594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183598u;
}
