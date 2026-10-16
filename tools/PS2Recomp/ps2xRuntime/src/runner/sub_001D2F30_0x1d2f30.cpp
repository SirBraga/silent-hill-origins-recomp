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

// Function: sub_001D2F30
// Address: 0x1d2f30 - 0x1d2f80
void sub_001D2F30_0x1d2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2F30_0x1d2f30");
#endif

    switch (ctx->pc) {
        case 0x1d2f30u: goto label_1d2f30;
        case 0x1d2f34u: goto label_1d2f34;
        case 0x1d2f38u: goto label_1d2f38;
        case 0x1d2f3cu: goto label_1d2f3c;
        case 0x1d2f40u: goto label_1d2f40;
        case 0x1d2f44u: goto label_1d2f44;
        case 0x1d2f48u: goto label_1d2f48;
        case 0x1d2f4cu: goto label_1d2f4c;
        case 0x1d2f50u: goto label_1d2f50;
        case 0x1d2f54u: goto label_1d2f54;
        case 0x1d2f58u: goto label_1d2f58;
        case 0x1d2f5cu: goto label_1d2f5c;
        case 0x1d2f60u: goto label_1d2f60;
        case 0x1d2f64u: goto label_1d2f64;
        case 0x1d2f68u: goto label_1d2f68;
        case 0x1d2f6cu: goto label_1d2f6c;
        case 0x1d2f70u: goto label_1d2f70;
        case 0x1d2f74u: goto label_1d2f74;
        case 0x1d2f78u: goto label_1d2f78;
        case 0x1d2f7cu: goto label_1d2f7c;
        default: break;
    }

    ctx->pc = 0x1d2f30u;

label_1d2f30:
    // 0x1d2f30: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x1d2f30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
label_1d2f34:
    // 0x1d2f34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d2f38:
    // 0x1d2f38: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d2f3c:
    // 0x1d2f3c: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1d2f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_1d2f40:
    // 0x1d2f40: 0x8d289b5c  lw          $t0, -0x64A4($t1)
    ctx->pc = 0x1d2f40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294941532)));
label_1d2f44:
    // 0x1d2f44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d2f48:
    // 0x1d2f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d2f4c:
    // 0x1d2f4c: 0xace69b6c  sw          $a2, -0x6494($a3)
    ctx->pc = 0x1d2f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941548), GPR_U32(ctx, 6));
label_1d2f50:
    // 0x1d2f50: 0xac459b68  sw          $a1, -0x6498($v0)
    ctx->pc = 0x1d2f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941544), GPR_U32(ctx, 5));
label_1d2f54:
    // 0x1d2f54: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x1d2f54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_1d2f58:
    // 0x1d2f58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d2f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f5c:
    // 0x1d2f5c: 0x8d269b5c  lw          $a2, -0x64A4($t1)
    ctx->pc = 0x1d2f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294941532)));
label_1d2f60:
    // 0x1d2f60: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1d2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1d2f64:
    // 0x1d2f64: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1d2f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1d2f68:
    // 0x1d2f68: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1d2f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1d2f6c:
    // 0x1d2f6c: 0x60f809  jalr        $v1
label_1d2f70:
    if (ctx->pc == 0x1D2F70u) {
        ctx->pc = 0x1D2F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F6Cu;
        // 0x1d2f70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F74u;
        goto label_1d2f74;
    }
    ctx->pc = 0x1D2F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D2F74u);
        ctx->pc = 0x1D2F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F6Cu;
        // 0x1d2f70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2F6Cu, 0x1D2F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2F74u;
label_1d2f74:
    // 0x1d2f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2f78:
    // 0x1d2f78: 0x3e00008  jr          $ra
label_1d2f7c:
    if (ctx->pc == 0x1D2F7Cu) {
        ctx->pc = 0x1D2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F78u;
        // 0x1d2f7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F80u;
        goto label_fallthrough_0x1d2f78;
    }
    ctx->pc = 0x1D2F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F78u;
        // 0x1d2f7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d2f78:
    ctx->pc = 0x1D2F80u;
}
