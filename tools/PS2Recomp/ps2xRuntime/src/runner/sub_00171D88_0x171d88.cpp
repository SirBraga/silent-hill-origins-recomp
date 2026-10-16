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

// Function: sub_00171D88
// Address: 0x171d88 - 0x171dc0
void sub_00171D88_0x171d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171D88_0x171d88");
#endif

    switch (ctx->pc) {
        case 0x171d88u: goto label_171d88;
        case 0x171d8cu: goto label_171d8c;
        case 0x171d90u: goto label_171d90;
        case 0x171d94u: goto label_171d94;
        case 0x171d98u: goto label_171d98;
        case 0x171d9cu: goto label_171d9c;
        case 0x171da0u: goto label_171da0;
        case 0x171da4u: goto label_171da4;
        case 0x171da8u: goto label_171da8;
        case 0x171dacu: goto label_171dac;
        case 0x171db0u: goto label_171db0;
        case 0x171db4u: goto label_171db4;
        case 0x171db8u: goto label_171db8;
        case 0x171dbcu: goto label_171dbc;
        default: break;
    }

    ctx->pc = 0x171d88u;

label_171d88:
    // 0x171d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_171d8c:
    // 0x171d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171d90:
    // 0x171d90: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x171d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171d94:
    // 0x171d94: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x171d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_171d98:
    // 0x171d98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_171d9c:
    if (ctx->pc == 0x171D9Cu) {
        ctx->pc = 0x171D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D98u;
        // 0x171d9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171DA0u;
        goto label_171da0;
    }
    ctx->pc = 0x171D98u;
    {
        const bool branch_taken_0x171d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D98u;
        // 0x171d9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d98) {
            ctx->pc = 0x171DB8u;
            goto label_171db8;
        }
    }
    ctx->pc = 0x171DA0u;
label_171da0:
    // 0x171da0: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x171da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_171da4:
    // 0x171da4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x171da4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_171da8:
    // 0x171da8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x171da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_171dac:
    // 0x171dac: 0x60f809  jalr        $v1
label_171db0:
    if (ctx->pc == 0x171DB0u) {
        ctx->pc = 0x171DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DACu;
        // 0x171db0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171DB4u;
        goto label_171db4;
    }
    ctx->pc = 0x171DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171DB4u);
        ctx->pc = 0x171DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DACu;
        // 0x171db0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171DACu, 0x171DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171DB4u;
label_171db4:
    // 0x171db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171db8:
    // 0x171db8: 0x3e00008  jr          $ra
label_171dbc:
    if (ctx->pc == 0x171DBCu) {
        ctx->pc = 0x171DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DB8u;
        // 0x171dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171DC0u;
        goto label_fallthrough_0x171db8;
    }
    ctx->pc = 0x171DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DB8u;
        // 0x171dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x171db8:
    ctx->pc = 0x171DC0u;
}
