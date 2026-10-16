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

// Function: sub_00258990
// Address: 0x258990 - 0x2589e0
void sub_00258990_0x258990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258990_0x258990");
#endif

    switch (ctx->pc) {
        case 0x2589ccu: goto label_2589cc;
        default: break;
    }

    ctx->pc = 0x258990u;

    // 0x258990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x258990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x258994: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x258994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258998: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x258998u;
    {
        const bool branch_taken_0x258998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258998u;
        // 0x25899c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258998) {
            ctx->pc = 0x2589C4u;
            goto label_2589c4;
        }
    }
    ctx->pc = 0x2589A0u;
    // 0x2589a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2589a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2589a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2589A4u;
    {
        const bool branch_taken_0x2589a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2589a4) {
            ctx->pc = 0x2589C4u;
            goto label_2589c4;
        }
    }
    ctx->pc = 0x2589ACu;
    // 0x2589ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2589acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2589b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2589B0u;
    {
        const bool branch_taken_0x2589b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2589b0) {
            ctx->pc = 0x2589C4u;
            goto label_2589c4;
        }
    }
    ctx->pc = 0x2589B8u;
    // 0x2589b8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2589b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2589bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2589BCu;
    {
        const bool branch_taken_0x2589bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589BCu;
        // 0x2589c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589bc) {
            ctx->pc = 0x2589D0u;
            goto label_2589d0;
        }
    }
    ctx->pc = 0x2589C4u;
label_2589c4:
    // 0x2589c4: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x2589C4u;
    SET_GPR_U32(ctx, 31, 0x2589CCu);
    ctx->pc = 0x2586C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2586C0u, 0x2589C4u, 0x2589CCu)) {
        return;
    }
    ctx->pc = 0x2589CCu;
label_2589cc:
    // 0x2589cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2589ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2589d0:
    // 0x2589d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2589d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2589d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2589D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2589D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589D4u;
        // 0x2589d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2589D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2589DCu;
    // 0x2589dc: 0x0  nop
    ctx->pc = 0x2589dcu;
    // NOP
    ctx->pc = 0x2589e0u;
}
