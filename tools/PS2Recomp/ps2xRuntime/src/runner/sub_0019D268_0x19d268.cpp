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

// Function: sub_0019D268
// Address: 0x19d268 - 0x19d298
void sub_0019D268_0x19d268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D268_0x19d268");
#endif

    switch (ctx->pc) {
        case 0x19d28cu: goto label_19d28c;
        default: break;
    }

    ctx->pc = 0x19d268u;

    // 0x19d268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d26c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19d270: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d274: 0x2442ac60  addiu       $v0, $v0, -0x53A0
    ctx->pc = 0x19d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945888));
    // 0x19d278: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x19d278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19d27c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D27Cu;
    {
        const bool branch_taken_0x19d27c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D27Cu;
        // 0x19d280: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d27c) {
            ctx->pc = 0x19D28Cu;
            goto label_19d28c;
        }
    }
    ctx->pc = 0x19D284u;
    // 0x19d284: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19D284u;
    SET_GPR_U32(ctx, 31, 0x19D28Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19D284u, 0x19D28Cu)) {
        return;
    }
    ctx->pc = 0x19D28Cu;
label_19d28c:
    // 0x19d28c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d290: 0x3e00008  jr          $ra
    ctx->pc = 0x19D290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D290u;
        // 0x19d294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D298u;
}
