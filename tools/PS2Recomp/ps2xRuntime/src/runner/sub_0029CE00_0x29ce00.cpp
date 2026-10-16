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

// Function: sub_0029CE00
// Address: 0x29ce00 - 0x29ce28
void sub_0029CE00_0x29ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CE00_0x29ce00");
#endif

    switch (ctx->pc) {
        case 0x29ce00u: goto label_29ce00;
        case 0x29ce04u: goto label_29ce04;
        case 0x29ce08u: goto label_29ce08;
        case 0x29ce0cu: goto label_29ce0c;
        case 0x29ce10u: goto label_29ce10;
        case 0x29ce14u: goto label_29ce14;
        case 0x29ce18u: goto label_29ce18;
        case 0x29ce1cu: goto label_29ce1c;
        case 0x29ce20u: goto label_29ce20;
        case 0x29ce24u: goto label_29ce24;
        default: break;
    }

    ctx->pc = 0x29ce00u;

label_29ce00:
    // 0x29ce00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29ce04:
    // 0x29ce04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29ce08:
    // 0x29ce08: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x29ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_29ce0c:
    // 0x29ce0c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x29ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_29ce10:
    // 0x29ce10: 0x40f809  jalr        $v0
label_29ce14:
    if (ctx->pc == 0x29CE14u) {
        ctx->pc = 0x29CE18u;
        goto label_29ce18;
    }
    ctx->pc = 0x29CE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29CE18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE10u, 0x29CE18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CE18u;
label_29ce18:
    // 0x29ce18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ce18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ce1c:
    // 0x29ce1c: 0x3e00008  jr          $ra
label_29ce20:
    if (ctx->pc == 0x29CE20u) {
        ctx->pc = 0x29CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE1Cu;
        // 0x29ce20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE24u;
        goto label_29ce24;
    }
    ctx->pc = 0x29CE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE1Cu;
        // 0x29ce20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CE24u;
label_29ce24:
    // 0x29ce24: 0x0  nop
    ctx->pc = 0x29ce24u;
    // NOP
    ctx->pc = 0x29ce28u;
}
