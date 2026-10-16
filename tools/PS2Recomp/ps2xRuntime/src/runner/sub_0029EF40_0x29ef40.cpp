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

// Function: sub_0029EF40
// Address: 0x29ef40 - 0x29ef90
void sub_0029EF40_0x29ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EF40_0x29ef40");
#endif

    switch (ctx->pc) {
        case 0x29ef68u: goto label_29ef68;
        default: break;
    }

    ctx->pc = 0x29ef40u;

    // 0x29ef40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ef44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ef48: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x29ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x29ef4c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x29ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x29ef50: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x29ef50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29ef54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29EF54u;
    {
        const bool branch_taken_0x29ef54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF54u;
        // 0x29ef58: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef54) {
            ctx->pc = 0x29EF70u;
            goto label_29ef70;
        }
    }
    ctx->pc = 0x29EF5Cu;
    // 0x29ef5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29ef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef60: 0xc0a7202  jal         func_29C808
    ctx->pc = 0x29EF60u;
    SET_GPR_U32(ctx, 31, 0x29EF68u);
    ctx->pc = 0x29EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF60u;
    // 0x29ef64: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C808u, 0x29EF60u, 0x29EF68u)) {
        return;
    }
    ctx->pc = 0x29EF68u;
label_29ef68:
    // 0x29ef68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29EF68u;
    {
        const bool branch_taken_0x29ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF68u;
        // 0x29ef6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef68) {
            ctx->pc = 0x29EF84u;
            goto label_29ef84;
        }
    }
    ctx->pc = 0x29EF70u;
label_29ef70:
    // 0x29ef70: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x29ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29ef74: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x29ef74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x29ef78: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x29ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x29ef7c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x29ef7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x29ef80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ef80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ef84:
    // 0x29ef84: 0x3e00008  jr          $ra
    ctx->pc = 0x29EF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF84u;
        // 0x29ef88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EF8Cu;
    // 0x29ef8c: 0x0  nop
    ctx->pc = 0x29ef8cu;
    // NOP
    ctx->pc = 0x29ef90u;
}
