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

// Function: sub_00156D78
// Address: 0x156d78 - 0x156de0
void sub_00156D78_0x156d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156D78_0x156d78");
#endif

    ctx->pc = 0x156d78u;

    // 0x156d78: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x156d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x156d7c: 0x8c438608  lw          $v1, -0x79F8($v0)
    ctx->pc = 0x156d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338608u));
    // 0x156d80: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x156D80u;
    {
        const bool branch_taken_0x156d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d80) {
            ctx->pc = 0x156DC4u;
            goto label_156dc4;
        }
    }
    ctx->pc = 0x156D88u;
    // 0x156d88: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x156D88u;
    {
        const bool branch_taken_0x156d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D88u;
        // 0x156d8c: 0x8c62004c  lw          $v0, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d88) {
            ctx->pc = 0x156DACu;
            goto label_156dac;
        }
    }
    ctx->pc = 0x156D90u;
    // 0x156d90: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x156D90u;
    {
        const bool branch_taken_0x156d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D90u;
        // 0x156d94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d90) {
            ctx->pc = 0x156DC4u;
            goto label_156dc4;
        }
    }
    ctx->pc = 0x156D98u;
    // 0x156d98: 0xac6000a4  sw          $zero, 0xA4($v1)
    ctx->pc = 0x156d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
    // 0x156d9c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x156d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x156da0: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x156da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x156da4: 0x3e00008  jr          $ra
    ctx->pc = 0x156DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156DA4u;
        // 0x156da8: 0xac6000a0  sw          $zero, 0xA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156DACu;
label_156dac:
    // 0x156dac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x156DACu;
    {
        const bool branch_taken_0x156dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156dac) {
            ctx->pc = 0x156DC4u;
            goto label_156dc4;
        }
    }
    ctx->pc = 0x156DB4u;
    // 0x156db4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x156db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x156db8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x156DB8u;
    {
        const bool branch_taken_0x156db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156DB8u;
        // 0x156dbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156db8) {
            ctx->pc = 0x156DC4u;
            goto label_156dc4;
        }
    }
    ctx->pc = 0x156DC0u;
    // 0x156dc0: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x156dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_156dc4:
    // 0x156dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x156DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156DCCu;
    // 0x156dcc: 0x0  nop
    ctx->pc = 0x156dccu;
    // NOP
    // 0x156dd0: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x156dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x156dd4: 0x0  nop
    ctx->pc = 0x156dd4u;
    // NOP
    // 0x156dd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x156dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x156ddc: 0x0  nop
    ctx->pc = 0x156ddcu;
    // NOP
    ctx->pc = 0x156de0u;
}
