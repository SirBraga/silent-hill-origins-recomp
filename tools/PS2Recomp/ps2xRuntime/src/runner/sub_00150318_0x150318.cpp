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

// Function: sub_00150318
// Address: 0x150318 - 0x150368
void sub_00150318_0x150318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150318_0x150318");
#endif

    switch (ctx->pc) {
        case 0x150338u: goto label_150338;
        case 0x150340u: goto label_150340;
        default: break;
    }

    ctx->pc = 0x150318u;

    // 0x150318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15031c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150324: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x150324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x150328: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x150328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15032c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15032Cu;
    {
        const bool branch_taken_0x15032c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x150330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15032Cu;
        // 0x150330: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15032c) {
            ctx->pc = 0x150350u;
            goto label_150350;
        }
    }
    ctx->pc = 0x150334u;
    // 0x150334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150338:
    // 0x150338: 0xc053c92  jal         func_14F248
    ctx->pc = 0x150338u;
    SET_GPR_U32(ctx, 31, 0x150340u);
    ctx->pc = 0x15033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150338u;
    // 0x15033c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F248u, 0x150338u, 0x150340u)) {
        return;
    }
    ctx->pc = 0x150340u;
label_150340:
    // 0x150340: 0x8e100180  lw          $s0, 0x180($s0)
    ctx->pc = 0x150340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x150344: 0x0  nop
    ctx->pc = 0x150344u;
    // NOP
    // 0x150348: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x150348u;
    {
        const bool branch_taken_0x150348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150348u;
        // 0x15034c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150348) {
            ctx->pc = 0x150338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150338;
        }
    }
    ctx->pc = 0x150350u;
label_150350:
    // 0x150350: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x150350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15035c: 0x3e00008  jr          $ra
    ctx->pc = 0x15035Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15035Cu;
        // 0x150360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15035Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150364u;
    // 0x150364: 0x0  nop
    ctx->pc = 0x150364u;
    // NOP
    ctx->pc = 0x150368u;
}
