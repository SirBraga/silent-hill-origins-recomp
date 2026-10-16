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

// Function: sub_00206C00
// Address: 0x206c00 - 0x206c30
void sub_00206C00_0x206c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206C00_0x206c00");
#endif

    switch (ctx->pc) {
        case 0x206c00u: goto label_206c00;
        case 0x206c04u: goto label_206c04;
        case 0x206c08u: goto label_206c08;
        case 0x206c0cu: goto label_206c0c;
        case 0x206c10u: goto label_206c10;
        case 0x206c14u: goto label_206c14;
        case 0x206c18u: goto label_206c18;
        case 0x206c1cu: goto label_206c1c;
        case 0x206c20u: goto label_206c20;
        case 0x206c24u: goto label_206c24;
        case 0x206c28u: goto label_206c28;
        case 0x206c2cu: goto label_206c2c;
        default: break;
    }

    ctx->pc = 0x206c00u;

label_206c00:
    // 0x206c00: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x206c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_206c04:
    // 0x206c04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206c08:
    // 0x206c08: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x206c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_206c0c:
    // 0x206c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206c10:
    // 0x206c10: 0x40f809  jalr        $v0
label_206c14:
    if (ctx->pc == 0x206C14u) {
        ctx->pc = 0x206C18u;
        goto label_206c18;
    }
    ctx->pc = 0x206C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206C18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206C10u, 0x206C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206C18u;
label_206c18:
    // 0x206c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206c1c:
    // 0x206c1c: 0x3e00008  jr          $ra
label_206c20:
    if (ctx->pc == 0x206C20u) {
        ctx->pc = 0x206C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C1Cu;
        // 0x206c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C24u;
        goto label_206c24;
    }
    ctx->pc = 0x206C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C1Cu;
        // 0x206c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206C24u;
label_206c24:
    // 0x206c24: 0x0  nop
    ctx->pc = 0x206c24u;
    // NOP
label_206c28:
    // 0x206c28: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x206c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_206c2c:
    // 0x206c2c: 0x0  nop
    ctx->pc = 0x206c2cu;
    // NOP
    ctx->pc = 0x206c30u;
}
