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

// Function: sub_001C85C0
// Address: 0x1c85c0 - 0x1c8638
void sub_001C85C0_0x1c85c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C85C0_0x1c85c0");
#endif

    switch (ctx->pc) {
        case 0x1c860cu: goto label_1c860c;
        case 0x1c861cu: goto label_1c861c;
        case 0x1c862cu: goto label_1c862c;
        default: break;
    }

    ctx->pc = 0x1c85c0u;

    // 0x1c85c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c85c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c85c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c85c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c85c8: 0x8c820270  lw          $v0, 0x270($a0)
    ctx->pc = 0x1c85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x1c85cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C85CCu;
    {
        const bool branch_taken_0x1c85cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85CCu;
        // 0x1c85d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85cc) {
            ctx->pc = 0x1C862Cu;
            goto label_1c862c;
        }
    }
    ctx->pc = 0x1C85D4u;
    // 0x1c85d4: 0x8c830274  lw          $v1, 0x274($a0)
    ctx->pc = 0x1c85d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x1c85d8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C85D8u;
    {
        const bool branch_taken_0x1c85d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85D8u;
        // 0x1c85dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85d8) {
            ctx->pc = 0x1C8604u;
            goto label_1c8604;
        }
    }
    ctx->pc = 0x1C85E0u;
    // 0x1c85e0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C85E0u;
    {
        const bool branch_taken_0x1c85e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85E0u;
        // 0x1c85e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85e0) {
            ctx->pc = 0x1C8630u;
            goto label_1c8630;
        }
    }
    ctx->pc = 0x1C85E8u;
    // 0x1c85e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c85ec: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C85ECu;
    {
        const bool branch_taken_0x1c85ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85ECu;
        // 0x1c85f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85ec) {
            ctx->pc = 0x1C8614u;
            goto label_1c8614;
        }
    }
    ctx->pc = 0x1C85F4u;
    // 0x1c85f4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C85F4u;
    {
        const bool branch_taken_0x1c85f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c85f4) {
            ctx->pc = 0x1C8624u;
            goto label_1c8624;
        }
    }
    ctx->pc = 0x1C85FCu;
    // 0x1c85fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C85FCu;
    {
        const bool branch_taken_0x1c85fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c85fc) {
            ctx->pc = 0x1C8630u;
            goto label_1c8630;
        }
    }
    ctx->pc = 0x1C8604u;
label_1c8604:
    // 0x1c8604: 0xc071fba  jal         func_1C7EE8
    ctx->pc = 0x1C8604u;
    SET_GPR_U32(ctx, 31, 0x1C860Cu);
    ctx->pc = 0x1C7EE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C7EE8u, 0x1C8604u, 0x1C860Cu)) {
        return;
    }
    ctx->pc = 0x1C860Cu;
label_1c860c:
    // 0x1c860c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C860Cu;
    {
        const bool branch_taken_0x1c860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C860Cu;
        // 0x1c8610: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c860c) {
            ctx->pc = 0x1C8630u;
            goto label_1c8630;
        }
    }
    ctx->pc = 0x1C8614u;
label_1c8614:
    // 0x1c8614: 0xc07218e  jal         func_1C8638
    ctx->pc = 0x1C8614u;
    SET_GPR_U32(ctx, 31, 0x1C861Cu);
    ctx->pc = 0x1C8638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C8638u, 0x1C8614u, 0x1C861Cu)) {
        return;
    }
    ctx->pc = 0x1C861Cu;
label_1c861c:
    // 0x1c861c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C861Cu;
    {
        const bool branch_taken_0x1c861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C861Cu;
        // 0x1c8620: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c861c) {
            ctx->pc = 0x1C8630u;
            goto label_1c8630;
        }
    }
    ctx->pc = 0x1C8624u;
label_1c8624:
    // 0x1c8624: 0xc0721a6  jal         func_1C8698
    ctx->pc = 0x1C8624u;
    SET_GPR_U32(ctx, 31, 0x1C862Cu);
    ctx->pc = 0x1C8698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C8698u, 0x1C8624u, 0x1C862Cu)) {
        return;
    }
    ctx->pc = 0x1C862Cu;
label_1c862c:
    // 0x1c862c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c862cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8630:
    // 0x1c8630: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8630u;
        // 0x1c8634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8638u;
}
