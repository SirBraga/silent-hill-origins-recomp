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

// Function: sub_002811C8
// Address: 0x2811c8 - 0x281220
void sub_002811C8_0x2811c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002811C8_0x2811c8");
#endif

    switch (ctx->pc) {
        case 0x2811e0u: goto label_2811e0;
        default: break;
    }

    ctx->pc = 0x2811c8u;

    // 0x2811c8: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x2811c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x2811cc: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2811ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2811d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2811d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2811d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2811d8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2811d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2811dc: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x2811dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_2811e0:
    // 0x2811e0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2811e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2811e4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2811e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2811e8: 0x54690003  bnel        $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2811E8u;
    {
        const bool branch_taken_0x2811e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x2811e8) {
            ctx->pc = 0x2811ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2811E8u;
            // 0x2811ec: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2811F8u;
            goto label_2811f8;
        }
    }
    ctx->pc = 0x2811F0u;
    // 0x2811f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2811F0u;
    {
        const bool branch_taken_0x2811f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2811F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811F0u;
        // 0x2811f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811f0) {
            ctx->pc = 0x28120Cu;
            goto label_28120c;
        }
    }
    ctx->pc = 0x2811F8u;
label_2811f8:
    // 0x2811f8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2811f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2811fc: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x2811fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x281200: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x281200u;
    {
        const bool branch_taken_0x281200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281200u;
        // 0x281204: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281200) {
            ctx->pc = 0x2811E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2811e0;
        }
    }
    ctx->pc = 0x281208u;
    // 0x281208: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x281208u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28120c:
    // 0x28120c: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x28120cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x281210: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x281210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281214: 0x3e00008  jr          $ra
    ctx->pc = 0x281214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281214u;
        // 0x281218: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28121Cu;
    // 0x28121c: 0x0  nop
    ctx->pc = 0x28121cu;
    // NOP
    ctx->pc = 0x281220u;
}
