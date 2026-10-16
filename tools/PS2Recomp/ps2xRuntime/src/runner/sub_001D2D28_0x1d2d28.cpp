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

// Function: sub_001D2D28
// Address: 0x1d2d28 - 0x1d2d68
void sub_001D2D28_0x1d2d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2D28_0x1d2d28");
#endif

    switch (ctx->pc) {
        case 0x1d2d28u: goto label_1d2d28;
        case 0x1d2d2cu: goto label_1d2d2c;
        case 0x1d2d30u: goto label_1d2d30;
        case 0x1d2d34u: goto label_1d2d34;
        case 0x1d2d38u: goto label_1d2d38;
        case 0x1d2d3cu: goto label_1d2d3c;
        case 0x1d2d40u: goto label_1d2d40;
        case 0x1d2d44u: goto label_1d2d44;
        case 0x1d2d48u: goto label_1d2d48;
        case 0x1d2d4cu: goto label_1d2d4c;
        case 0x1d2d50u: goto label_1d2d50;
        case 0x1d2d54u: goto label_1d2d54;
        case 0x1d2d58u: goto label_1d2d58;
        case 0x1d2d5cu: goto label_1d2d5c;
        case 0x1d2d60u: goto label_1d2d60;
        case 0x1d2d64u: goto label_1d2d64;
        default: break;
    }

    ctx->pc = 0x1d2d28u;

label_1d2d28:
    // 0x1d2d28: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d2d2c:
    // 0x1d2d2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d2d30:
    // 0x1d2d30: 0x8c459b5c  lw          $a1, -0x64A4($v0)
    ctx->pc = 0x1d2d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941532)));
label_1d2d34:
    // 0x1d2d34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d2d34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d38:
    // 0x1d2d38: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1d2d3c:
    if (ctx->pc == 0x1D2D3Cu) {
        ctx->pc = 0x1D2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D38u;
        // 0x1d2d3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2D40u;
        goto label_1d2d40;
    }
    ctx->pc = 0x1D2D38u;
    {
        const bool branch_taken_0x1d2d38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D38u;
        // 0x1d2d3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d38) {
            ctx->pc = 0x1D2D58u;
            goto label_1d2d58;
        }
    }
    ctx->pc = 0x1D2D40u;
label_1d2d40:
    // 0x1d2d40: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1d2d44:
    // 0x1d2d44: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1d2d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1d2d48:
    // 0x1d2d48: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1d2d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1d2d4c:
    // 0x1d2d4c: 0x40f809  jalr        $v0
label_1d2d50:
    if (ctx->pc == 0x1D2D50u) {
        ctx->pc = 0x1D2D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D4Cu;
        // 0x1d2d50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2D54u;
        goto label_1d2d54;
    }
    ctx->pc = 0x1D2D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2D54u);
        ctx->pc = 0x1D2D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D4Cu;
        // 0x1d2d50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2D4Cu, 0x1D2D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2D54u;
label_1d2d54:
    // 0x1d2d54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d2d54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d58:
    // 0x1d2d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2d5c:
    // 0x1d2d5c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1d2d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d60:
    // 0x1d2d60: 0x3e00008  jr          $ra
label_1d2d64:
    if (ctx->pc == 0x1D2D64u) {
        ctx->pc = 0x1D2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D60u;
        // 0x1d2d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2D68u;
        goto label_fallthrough_0x1d2d60;
    }
    ctx->pc = 0x1D2D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D60u;
        // 0x1d2d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d2d60:
    ctx->pc = 0x1D2D68u;
}
