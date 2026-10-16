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

// Function: sub_001A8970
// Address: 0x1a8970 - 0x1a8998
void sub_001A8970_0x1a8970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8970_0x1a8970");
#endif

    switch (ctx->pc) {
        case 0x1a8970u: goto label_1a8970;
        case 0x1a8974u: goto label_1a8974;
        case 0x1a8978u: goto label_1a8978;
        case 0x1a897cu: goto label_1a897c;
        case 0x1a8980u: goto label_1a8980;
        case 0x1a8984u: goto label_1a8984;
        case 0x1a8988u: goto label_1a8988;
        case 0x1a898cu: goto label_1a898c;
        case 0x1a8990u: goto label_1a8990;
        case 0x1a8994u: goto label_1a8994;
        default: break;
    }

    ctx->pc = 0x1a8970u;

label_1a8970:
    // 0x1a8970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a8974:
    // 0x1a8974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a8978:
    // 0x1a8978: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a8978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a897c:
    // 0x1a897c: 0x84660018  lh          $a2, 0x18($v1)
    ctx->pc = 0x1a897cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1a8980:
    // 0x1a8980: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1a8980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1a8984:
    // 0x1a8984: 0x40f809  jalr        $v0
label_1a8988:
    if (ctx->pc == 0x1A8988u) {
        ctx->pc = 0x1A8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8984u;
        // 0x1a8988: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A898Cu;
        goto label_1a898c;
    }
    ctx->pc = 0x1A8984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A898Cu);
        ctx->pc = 0x1A8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8984u;
        // 0x1a8988: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8984u, 0x1A898Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A898Cu;
label_1a898c:
    // 0x1a898c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a898cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8990:
    // 0x1a8990: 0x3e00008  jr          $ra
label_1a8994:
    if (ctx->pc == 0x1A8994u) {
        ctx->pc = 0x1A8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8990u;
        // 0x1a8994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8998u;
        goto label_fallthrough_0x1a8990;
    }
    ctx->pc = 0x1A8990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8990u;
        // 0x1a8994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a8990:
    ctx->pc = 0x1A8998u;
}
