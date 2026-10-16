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

// Function: sub_00281730
// Address: 0x281730 - 0x281774
void sub_00281730_0x281730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281730_0x281730");
#endif

    ctx->pc = 0x281730u;

    // 0x281730: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x281730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x281734: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x281734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x281738: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x281738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28173c: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x28173cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x281740: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x281740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x281744: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x281744u;
    {
        const bool branch_taken_0x281744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281744u;
        // 0x281748: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281744) {
            ctx->pc = 0x2817C0u;
            return;
        }
    }
    ctx->pc = 0x28174Cu;
    // 0x28174c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28174cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x281750: 0x2442cd20  addiu       $v0, $v0, -0x32E0
    ctx->pc = 0x281750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954272));
    // 0x281754: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x281754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x281758: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x281758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28175c: 0x800008  jr          $a0
    ctx->pc = 0x28175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281764u: goto label_281764;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28175Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x281764u;
label_281764:
    // 0x281764: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x281764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x281768: 0xfca00070  sd          $zero, 0x70($a1)
    ctx->pc = 0x281768u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 0));
    // 0x28176c: 0xfca20068  sd          $v0, 0x68($a1)
    ctx->pc = 0x28176cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 2));
    // 0x281770: 0xfca00078  sd          $zero, 0x78($a1)
    ctx->pc = 0x281770u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 0));
    ctx->pc = 0x281774u;
}
