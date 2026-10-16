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

// Function: sub_001C43A0
// Address: 0x1c43a0 - 0x1c43e8
void sub_001C43A0_0x1c43a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C43A0_0x1c43a0");
#endif

    switch (ctx->pc) {
        case 0x1c43ccu: goto label_1c43cc;
        case 0x1c43dcu: goto label_1c43dc;
        default: break;
    }

    ctx->pc = 0x1c43a0u;

    // 0x1c43a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c43a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c43a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c43a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c43a8: 0x8c8302e8  lw          $v1, 0x2E8($a0)
    ctx->pc = 0x1c43a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 744)));
    // 0x1c43ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C43ACu;
    {
        const bool branch_taken_0x1c43ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43ACu;
        // 0x1c43b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43ac) {
            ctx->pc = 0x1C43C4u;
            goto label_1c43c4;
        }
    }
    ctx->pc = 0x1C43B4u;
    // 0x1c43b4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C43B4u;
    {
        const bool branch_taken_0x1c43b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43B4u;
        // 0x1c43b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43b4) {
            ctx->pc = 0x1C43D4u;
            goto label_1c43d4;
        }
    }
    ctx->pc = 0x1C43BCu;
    // 0x1c43bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C43BCu;
    {
        const bool branch_taken_0x1c43bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c43bc) {
            ctx->pc = 0x1C43E0u;
            goto label_1c43e0;
        }
    }
    ctx->pc = 0x1C43C4u;
label_1c43c4:
    // 0x1c43c4: 0xc05fdb4  jal         func_17F6D0
    ctx->pc = 0x1C43C4u;
    SET_GPR_U32(ctx, 31, 0x1C43CCu);
    ctx->pc = 0x1C43C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43C4u;
    // 0x1c43c8: 0xc48c02d0  lwc1        $f12, 0x2D0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F6D0u, 0x1C43C4u, 0x1C43CCu)) {
        return;
    }
    ctx->pc = 0x1C43CCu;
label_1c43cc:
    // 0x1c43cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C43CCu;
    {
        const bool branch_taken_0x1c43cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43CCu;
        // 0x1c43d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43cc) {
            ctx->pc = 0x1C43E0u;
            goto label_1c43e0;
        }
    }
    ctx->pc = 0x1C43D4u;
label_1c43d4:
    // 0x1c43d4: 0xc05fdbe  jal         func_17F6F8
    ctx->pc = 0x1C43D4u;
    SET_GPR_U32(ctx, 31, 0x1C43DCu);
    ctx->pc = 0x1C43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43D4u;
    // 0x1c43d8: 0xc48c02d0  lwc1        $f12, 0x2D0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F6F8u, 0x1C43D4u, 0x1C43DCu)) {
        return;
    }
    ctx->pc = 0x1C43DCu;
label_1c43dc:
    // 0x1c43dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c43dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c43e0:
    // 0x1c43e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C43E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43E0u;
        // 0x1c43e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C43E8u;
}
