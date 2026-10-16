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

// Function: sub_00171D18
// Address: 0x171d18 - 0x171d48
void sub_00171D18_0x171d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171D18_0x171d18");
#endif

    switch (ctx->pc) {
        case 0x171d18u: goto label_171d18;
        case 0x171d1cu: goto label_171d1c;
        case 0x171d20u: goto label_171d20;
        case 0x171d24u: goto label_171d24;
        case 0x171d28u: goto label_171d28;
        case 0x171d2cu: goto label_171d2c;
        case 0x171d30u: goto label_171d30;
        case 0x171d34u: goto label_171d34;
        case 0x171d38u: goto label_171d38;
        case 0x171d3cu: goto label_171d3c;
        case 0x171d40u: goto label_171d40;
        case 0x171d44u: goto label_171d44;
        default: break;
    }

    ctx->pc = 0x171d18u;

label_171d18:
    // 0x171d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_171d1c:
    // 0x171d1c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x171d1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171d20:
    // 0x171d20: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_171d24:
    if (ctx->pc == 0x171D24u) {
        ctx->pc = 0x171D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D20u;
        // 0x171d24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171D28u;
        goto label_171d28;
    }
    ctx->pc = 0x171D20u;
    {
        const bool branch_taken_0x171d20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D20u;
        // 0x171d24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d20) {
            ctx->pc = 0x171D3Cu;
            goto label_171d3c;
        }
    }
    ctx->pc = 0x171D28u;
label_171d28:
    // 0x171d28: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x171d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_171d2c:
    // 0x171d2c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x171d2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_171d30:
    // 0x171d30: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x171d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_171d34:
    // 0x171d34: 0x60f809  jalr        $v1
label_171d38:
    if (ctx->pc == 0x171D38u) {
        ctx->pc = 0x171D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D34u;
        // 0x171d38: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171D3Cu;
        goto label_171d3c;
    }
    ctx->pc = 0x171D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171D3Cu);
        ctx->pc = 0x171D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D34u;
        // 0x171d38: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D34u, 0x171D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171D3Cu;
label_171d3c:
    // 0x171d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171d40:
    // 0x171d40: 0x3e00008  jr          $ra
label_171d44:
    if (ctx->pc == 0x171D44u) {
        ctx->pc = 0x171D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D40u;
        // 0x171d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171D48u;
        goto label_fallthrough_0x171d40;
    }
    ctx->pc = 0x171D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D40u;
        // 0x171d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x171d40:
    ctx->pc = 0x171D48u;
}
