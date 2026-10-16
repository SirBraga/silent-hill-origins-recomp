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

// Function: sub_00188C30
// Address: 0x188c30 - 0x188c78
void sub_00188C30_0x188c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188C30_0x188c30");
#endif

    switch (ctx->pc) {
        case 0x188c30u: goto label_188c30;
        case 0x188c34u: goto label_188c34;
        case 0x188c38u: goto label_188c38;
        case 0x188c3cu: goto label_188c3c;
        case 0x188c40u: goto label_188c40;
        case 0x188c44u: goto label_188c44;
        case 0x188c48u: goto label_188c48;
        case 0x188c4cu: goto label_188c4c;
        case 0x188c50u: goto label_188c50;
        case 0x188c54u: goto label_188c54;
        case 0x188c58u: goto label_188c58;
        case 0x188c5cu: goto label_188c5c;
        case 0x188c60u: goto label_188c60;
        case 0x188c64u: goto label_188c64;
        case 0x188c68u: goto label_188c68;
        case 0x188c6cu: goto label_188c6c;
        case 0x188c70u: goto label_188c70;
        case 0x188c74u: goto label_188c74;
        default: break;
    }

    ctx->pc = 0x188c30u;

label_188c30:
    // 0x188c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_188c34:
    // 0x188c34: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_188c38:
    if (ctx->pc == 0x188C38u) {
        ctx->pc = 0x188C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C34u;
        // 0x188c38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C3Cu;
        goto label_188c3c;
    }
    ctx->pc = 0x188C34u;
    {
        const bool branch_taken_0x188c34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C34u;
        // 0x188c38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c34) {
            ctx->pc = 0x188C44u;
            goto label_188c44;
        }
    }
    ctx->pc = 0x188C3Cu;
label_188c3c:
    // 0x188c3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_188c40:
    if (ctx->pc == 0x188C40u) {
        ctx->pc = 0x188C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C3Cu;
        // 0x188c40: 0x8c86010c  lw          $a2, 0x10C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C44u;
        goto label_188c44;
    }
    ctx->pc = 0x188C3Cu;
    {
        const bool branch_taken_0x188c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C3Cu;
        // 0x188c40: 0x8c86010c  lw          $a2, 0x10C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c3c) {
            ctx->pc = 0x188C48u;
            goto label_188c48;
        }
    }
    ctx->pc = 0x188C44u;
label_188c44:
    // 0x188c44: 0x8c860108  lw          $a2, 0x108($a0)
    ctx->pc = 0x188c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_188c48:
    // 0x188c48: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
label_188c4c:
    if (ctx->pc == 0x188C4Cu) {
        ctx->pc = 0x188C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C48u;
        // 0x188c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C50u;
        goto label_188c50;
    }
    ctx->pc = 0x188C48u;
    {
        const bool branch_taken_0x188c48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x188c48) {
            ctx->pc = 0x188C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188C48u;
            // 0x188c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C68u;
            goto label_188c68;
        }
    }
    ctx->pc = 0x188C50u;
label_188c50:
    // 0x188c50: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x188c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_188c54:
    // 0x188c54: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x188c54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_188c58:
    // 0x188c58: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x188c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_188c5c:
    // 0x188c5c: 0x60f809  jalr        $v1
label_188c60:
    if (ctx->pc == 0x188C60u) {
        ctx->pc = 0x188C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C5Cu;
        // 0x188c60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C64u;
        goto label_188c64;
    }
    ctx->pc = 0x188C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188C64u);
        ctx->pc = 0x188C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C5Cu;
        // 0x188c60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188C5Cu, 0x188C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188C64u;
label_188c64:
    // 0x188c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188c68:
    // 0x188c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188c6c:
    // 0x188c6c: 0x3e00008  jr          $ra
label_188c70:
    if (ctx->pc == 0x188C70u) {
        ctx->pc = 0x188C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C6Cu;
        // 0x188c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C74u;
        goto label_188c74;
    }
    ctx->pc = 0x188C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C6Cu;
        // 0x188c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188C74u;
label_188c74:
    // 0x188c74: 0x0  nop
    ctx->pc = 0x188c74u;
    // NOP
    ctx->pc = 0x188c78u;
}
