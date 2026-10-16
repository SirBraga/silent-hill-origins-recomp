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

// Function: sub_0029C5C0
// Address: 0x29c5c0 - 0x29c620
void sub_0029C5C0_0x29c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C5C0_0x29c5c0");
#endif

    switch (ctx->pc) {
        case 0x29c5f0u: goto label_29c5f0;
        default: break;
    }

    ctx->pc = 0x29c5c0u;

    // 0x29c5c0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x29c5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c5c4: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x29c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x29c5c8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29C5C8u;
    {
        const bool branch_taken_0x29c5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5C8u;
        // 0x29c5cc: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5c8) {
            ctx->pc = 0x29C618u;
            goto label_29c618;
        }
    }
    ctx->pc = 0x29C5D0u;
    // 0x29c5d0: 0x8c622c10  lw          $v0, 0x2C10($v1)
    ctx->pc = 0x29c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
    // 0x29c5d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29C5D4u;
    {
        const bool branch_taken_0x29c5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5D4u;
        // 0x29c5d8: 0x24652c10  addiu       $a1, $v1, 0x2C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 11280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5d4) {
            ctx->pc = 0x29C60Cu;
            goto label_29c60c;
        }
    }
    ctx->pc = 0x29C5DCu;
    // 0x29c5dc: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C5DCu;
    {
        const bool branch_taken_0x29c5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x29c5dc) {
            ctx->pc = 0x29C5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C5DCu;
            // 0x29c5e0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C5F0u;
            goto label_29c5f0;
        }
    }
    ctx->pc = 0x29C5E4u;
    // 0x29c5e4: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x29c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x29c5e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C5E8u;
    {
        const bool branch_taken_0x29c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5E8u;
        // 0x29c5ec: 0xac622c10  sw          $v0, 0x2C10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5e8) {
            ctx->pc = 0x29C60Cu;
            goto label_29c60c;
        }
    }
    ctx->pc = 0x29C5F0u;
label_29c5f0:
    // 0x29c5f0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x29c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x29c5f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C5F4u;
    {
        const bool branch_taken_0x29c5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5F4u;
        // 0x29c5f8: 0x24650034  addiu       $a1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5f4) {
            ctx->pc = 0x29C60Cu;
            goto label_29c60c;
        }
    }
    ctx->pc = 0x29C5FCu;
    // 0x29c5fc: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x29C5FCu;
    {
        const bool branch_taken_0x29c5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x29c5fc) {
            ctx->pc = 0x29C600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C5FCu;
            // 0x29c600: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c5f0;
        }
    }
    ctx->pc = 0x29C604u;
    // 0x29c604: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x29c604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x29c608: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x29c608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_29c60c:
    // 0x29c60c: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x29c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x29c610: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x29c610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x29c614: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29c614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_29c618:
    // 0x29c618: 0x3e00008  jr          $ra
    ctx->pc = 0x29C618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C620u;
}
