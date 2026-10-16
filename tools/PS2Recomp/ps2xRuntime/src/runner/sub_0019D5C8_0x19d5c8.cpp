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

// Function: sub_0019D5C8
// Address: 0x19d5c8 - 0x19d5f8
void sub_0019D5C8_0x19d5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D5C8_0x19d5c8");
#endif

    switch (ctx->pc) {
        case 0x19d5ecu: goto label_19d5ec;
        default: break;
    }

    ctx->pc = 0x19d5c8u;

    // 0x19d5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d5cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19d5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d5d4: 0x2442ac60  addiu       $v0, $v0, -0x53A0
    ctx->pc = 0x19d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945888));
    // 0x19d5d8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x19d5d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19d5dc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D5DCu;
    {
        const bool branch_taken_0x19d5dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5DCu;
        // 0x19d5e0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5dc) {
            ctx->pc = 0x19D5ECu;
            goto label_19d5ec;
        }
    }
    ctx->pc = 0x19D5E4u;
    // 0x19d5e4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19D5E4u;
    SET_GPR_U32(ctx, 31, 0x19D5ECu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19D5E4u, 0x19D5ECu)) {
        return;
    }
    ctx->pc = 0x19D5ECu;
label_19d5ec:
    // 0x19d5ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5F0u;
        // 0x19d5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D5F8u;
}
