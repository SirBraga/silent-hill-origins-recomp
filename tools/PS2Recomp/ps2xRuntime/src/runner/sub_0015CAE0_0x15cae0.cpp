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

// Function: sub_0015CAE0
// Address: 0x15cae0 - 0x15cb08
void sub_0015CAE0_0x15cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CAE0_0x15cae0");
#endif

    switch (ctx->pc) {
        case 0x15cae0u: goto label_15cae0;
        case 0x15cae4u: goto label_15cae4;
        case 0x15cae8u: goto label_15cae8;
        case 0x15caecu: goto label_15caec;
        case 0x15caf0u: goto label_15caf0;
        case 0x15caf4u: goto label_15caf4;
        case 0x15caf8u: goto label_15caf8;
        case 0x15cafcu: goto label_15cafc;
        case 0x15cb00u: goto label_15cb00;
        case 0x15cb04u: goto label_15cb04;
        default: break;
    }

    ctx->pc = 0x15cae0u;

label_15cae0:
    // 0x15cae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15cae4:
    // 0x15cae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15cae8:
    // 0x15cae8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x15cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15caec:
    // 0x15caec: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x15caecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_15caf0:
    // 0x15caf0: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x15caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_15caf4:
    // 0x15caf4: 0x40f809  jalr        $v0
label_15caf8:
    if (ctx->pc == 0x15CAF8u) {
        ctx->pc = 0x15CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAF4u;
        // 0x15caf8: 0x24a5004c  addiu       $a1, $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAFCu;
        goto label_15cafc;
    }
    ctx->pc = 0x15CAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CAFCu);
        ctx->pc = 0x15CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAF4u;
        // 0x15caf8: 0x24a5004c  addiu       $a1, $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CAF4u, 0x15CAFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CAFCu;
label_15cafc:
    // 0x15cafc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15cafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15cb00:
    // 0x15cb00: 0x3e00008  jr          $ra
label_15cb04:
    if (ctx->pc == 0x15CB04u) {
        ctx->pc = 0x15CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB00u;
        // 0x15cb04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB08u;
        goto label_fallthrough_0x15cb00;
    }
    ctx->pc = 0x15CB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB00u;
        // 0x15cb04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15cb00:
    ctx->pc = 0x15CB08u;
}
