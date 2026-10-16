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

// Function: sub_002DBE90
// Address: 0x2dbe90 - 0x2dbec8
void sub_002DBE90_0x2dbe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBE90_0x2dbe90");
#endif

    switch (ctx->pc) {
        case 0x2dbeb8u: goto label_2dbeb8;
        default: break;
    }

    ctx->pc = 0x2dbe90u;

    // 0x2dbe90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbe94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2dbe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbe9c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2dbe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2dbea0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dbea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dbea4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBEA4u;
    {
        const bool branch_taken_0x2dbea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEA4u;
        // 0x2dbea8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbea4) {
            ctx->pc = 0x2DBEBCu;
            goto label_2dbebc;
        }
    }
    ctx->pc = 0x2DBEACu;
    // 0x2dbeac: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2dbeacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2dbeb0: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DBEB0u;
    SET_GPR_U32(ctx, 31, 0x2DBEB8u);
    ctx->pc = 0x2DBEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEB0u;
    // 0x2dbeb4: 0x24847ca8  addiu       $a0, $a0, 0x7CA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DBEB0u, 0x2DBEB8u)) {
        return;
    }
    ctx->pc = 0x2DBEB8u;
label_2dbeb8:
    // 0x2dbeb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbebc:
    // 0x2dbebc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEBCu;
        // 0x2dbec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBEC4u;
    // 0x2dbec4: 0x0  nop
    ctx->pc = 0x2dbec4u;
    // NOP
    ctx->pc = 0x2dbec8u;
}
