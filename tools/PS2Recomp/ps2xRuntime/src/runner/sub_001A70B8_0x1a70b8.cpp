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

// Function: sub_001A70B8
// Address: 0x1a70b8 - 0x1a70f0
void sub_001A70B8_0x1a70b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A70B8_0x1a70b8");
#endif

    switch (ctx->pc) {
        case 0x1a70dcu: goto label_1a70dc;
        default: break;
    }

    ctx->pc = 0x1a70b8u;

    // 0x1a70b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a70b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a70bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1a70c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a70c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a70c4: 0x2442b588  addiu       $v0, $v0, -0x4A78
    ctx->pc = 0x1a70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948232));
    // 0x1a70c8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1a70c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1a70cc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A70CCu;
    {
        const bool branch_taken_0x1a70cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70CCu;
        // 0x1a70d0: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70cc) {
            ctx->pc = 0x1A70DCu;
            goto label_1a70dc;
        }
    }
    ctx->pc = 0x1A70D4u;
    // 0x1a70d4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1A70D4u;
    SET_GPR_U32(ctx, 31, 0x1A70DCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1A70D4u, 0x1A70DCu)) {
        return;
    }
    ctx->pc = 0x1A70DCu;
label_1a70dc:
    // 0x1a70dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a70dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a70e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A70E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70E0u;
        // 0x1a70e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A70E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A70E8u;
    // 0x1a70e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a70e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a70ec: 0x0  nop
    ctx->pc = 0x1a70ecu;
    // NOP
    ctx->pc = 0x1a70f0u;
}
