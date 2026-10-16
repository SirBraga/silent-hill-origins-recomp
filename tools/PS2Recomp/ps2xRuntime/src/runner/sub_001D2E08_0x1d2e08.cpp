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

// Function: sub_001D2E08
// Address: 0x1d2e08 - 0x1d2e38
void sub_001D2E08_0x1d2e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2E08_0x1d2e08");
#endif

    switch (ctx->pc) {
        case 0x1d2e08u: goto label_1d2e08;
        case 0x1d2e0cu: goto label_1d2e0c;
        case 0x1d2e10u: goto label_1d2e10;
        case 0x1d2e14u: goto label_1d2e14;
        case 0x1d2e18u: goto label_1d2e18;
        case 0x1d2e1cu: goto label_1d2e1c;
        case 0x1d2e20u: goto label_1d2e20;
        case 0x1d2e24u: goto label_1d2e24;
        case 0x1d2e28u: goto label_1d2e28;
        case 0x1d2e2cu: goto label_1d2e2c;
        case 0x1d2e30u: goto label_1d2e30;
        case 0x1d2e34u: goto label_1d2e34;
        default: break;
    }

    ctx->pc = 0x1d2e08u;

label_1d2e08:
    // 0x1d2e08: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d2e0c:
    // 0x1d2e0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d2e10:
    // 0x1d2e10: 0x8c439b68  lw          $v1, -0x6498($v0)
    ctx->pc = 0x1d2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941544)));
label_1d2e14:
    // 0x1d2e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d2e18:
    // 0x1d2e18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1d2e1c:
    if (ctx->pc == 0x1D2E1Cu) {
        ctx->pc = 0x1D2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E18u;
        // 0x1d2e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2E20u;
        goto label_1d2e20;
    }
    ctx->pc = 0x1D2E18u;
    {
        const bool branch_taken_0x1d2e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E18u;
        // 0x1d2e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e18) {
            ctx->pc = 0x1D2E2Cu;
            goto label_1d2e2c;
        }
    }
    ctx->pc = 0x1D2E20u;
label_1d2e20:
    // 0x1d2e20: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d2e24:
    // 0x1d2e24: 0x60f809  jalr        $v1
label_1d2e28:
    if (ctx->pc == 0x1D2E28u) {
        ctx->pc = 0x1D2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E24u;
        // 0x1d2e28: 0x8c469b6c  lw          $a2, -0x6494($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2E2Cu;
        goto label_1d2e2c;
    }
    ctx->pc = 0x1D2E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D2E2Cu);
        ctx->pc = 0x1D2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E24u;
        // 0x1d2e28: 0x8c469b6c  lw          $a2, -0x6494($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941548)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2E24u, 0x1D2E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2E2Cu;
label_1d2e2c:
    // 0x1d2e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2e30:
    // 0x1d2e30: 0x3e00008  jr          $ra
label_1d2e34:
    if (ctx->pc == 0x1D2E34u) {
        ctx->pc = 0x1D2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E30u;
        // 0x1d2e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2E38u;
        goto label_fallthrough_0x1d2e30;
    }
    ctx->pc = 0x1D2E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E30u;
        // 0x1d2e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d2e30:
    ctx->pc = 0x1D2E38u;
}
