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

// Function: sub_00204D08
// Address: 0x204d08 - 0x204d38
void sub_00204D08_0x204d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204D08_0x204d08");
#endif

    switch (ctx->pc) {
        case 0x204d2cu: goto label_204d2c;
        default: break;
    }

    ctx->pc = 0x204d08u;

    // 0x204d08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x204d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x204d0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204d10: 0x24423cb8  addiu       $v0, $v0, 0x3CB8
    ctx->pc = 0x204d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15544));
    // 0x204d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204d18: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x204d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x204d1c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204D1Cu;
    {
        const bool branch_taken_0x204d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D1Cu;
        // 0x204d20: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d1c) {
            ctx->pc = 0x204D2Cu;
            goto label_204d2c;
        }
    }
    ctx->pc = 0x204D24u;
    // 0x204d24: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x204D24u;
    SET_GPR_U32(ctx, 31, 0x204D2Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x204D24u, 0x204D2Cu)) {
        return;
    }
    ctx->pc = 0x204D2Cu;
label_204d2c:
    // 0x204d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204d30: 0x3e00008  jr          $ra
    ctx->pc = 0x204D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D30u;
        // 0x204d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204D38u;
}
