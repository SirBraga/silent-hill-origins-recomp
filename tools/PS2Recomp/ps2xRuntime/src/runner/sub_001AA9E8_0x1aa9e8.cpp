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

// Function: sub_001AA9E8
// Address: 0x1aa9e8 - 0x1aaa18
void sub_001AA9E8_0x1aa9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA9E8_0x1aa9e8");
#endif

    switch (ctx->pc) {
        case 0x1aaa0cu: goto label_1aaa0c;
        default: break;
    }

    ctx->pc = 0x1aa9e8u;

    // 0x1aa9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa9ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1aa9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1aa9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa9f4: 0x2442b588  addiu       $v0, $v0, -0x4A78
    ctx->pc = 0x1aa9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948232));
    // 0x1aa9f8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1aa9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1aa9fc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA9FCu;
    {
        const bool branch_taken_0x1aa9fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9FCu;
        // 0x1aaa00: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9fc) {
            ctx->pc = 0x1AAA0Cu;
            goto label_1aaa0c;
        }
    }
    ctx->pc = 0x1AAA04u;
    // 0x1aaa04: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AAA04u;
    SET_GPR_U32(ctx, 31, 0x1AAA0Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AAA04u, 0x1AAA0Cu)) {
        return;
    }
    ctx->pc = 0x1AAA0Cu;
label_1aaa0c:
    // 0x1aaa0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aaa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aaa10: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA10u;
        // 0x1aaa14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAA18u;
}
