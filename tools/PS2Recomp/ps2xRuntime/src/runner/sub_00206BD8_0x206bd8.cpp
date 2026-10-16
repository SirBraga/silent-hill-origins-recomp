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

// Function: sub_00206BD8
// Address: 0x206bd8 - 0x206c00
void sub_00206BD8_0x206bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206BD8_0x206bd8");
#endif

    switch (ctx->pc) {
        case 0x206bd8u: goto label_206bd8;
        case 0x206bdcu: goto label_206bdc;
        case 0x206be0u: goto label_206be0;
        case 0x206be4u: goto label_206be4;
        case 0x206be8u: goto label_206be8;
        case 0x206becu: goto label_206bec;
        case 0x206bf0u: goto label_206bf0;
        case 0x206bf4u: goto label_206bf4;
        case 0x206bf8u: goto label_206bf8;
        case 0x206bfcu: goto label_206bfc;
        default: break;
    }

    ctx->pc = 0x206bd8u;

label_206bd8:
    // 0x206bd8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x206bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_206bdc:
    // 0x206bdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206be0:
    // 0x206be0: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x206be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_206be4:
    // 0x206be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206be8:
    // 0x206be8: 0x40f809  jalr        $v0
label_206bec:
    if (ctx->pc == 0x206BECu) {
        ctx->pc = 0x206BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BE8u;
        // 0x206bec: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BF0u;
        goto label_206bf0;
    }
    ctx->pc = 0x206BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206BF0u);
        ctx->pc = 0x206BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BE8u;
        // 0x206bec: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206BE8u, 0x206BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206BF0u;
label_206bf0:
    // 0x206bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206bf4:
    // 0x206bf4: 0x3e00008  jr          $ra
label_206bf8:
    if (ctx->pc == 0x206BF8u) {
        ctx->pc = 0x206BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BF4u;
        // 0x206bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BFCu;
        goto label_206bfc;
    }
    ctx->pc = 0x206BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BF4u;
        // 0x206bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206BFCu;
label_206bfc:
    // 0x206bfc: 0x0  nop
    ctx->pc = 0x206bfcu;
    // NOP
    ctx->pc = 0x206c00u;
}
