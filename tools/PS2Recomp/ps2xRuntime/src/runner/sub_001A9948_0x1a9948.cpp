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

// Function: sub_001A9948
// Address: 0x1a9948 - 0x1a9978
void sub_001A9948_0x1a9948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9948_0x1a9948");
#endif

    switch (ctx->pc) {
        case 0x1a996cu: goto label_1a996c;
        default: break;
    }

    ctx->pc = 0x1a9948u;

    // 0x1a9948: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a9948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1a994c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a994cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9950: 0x2442b540  addiu       $v0, $v0, -0x4AC0
    ctx->pc = 0x1a9950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948160));
    // 0x1a9954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9958: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1a9958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1a995c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A995Cu;
    {
        const bool branch_taken_0x1a995c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A995Cu;
        // 0x1a9960: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a995c) {
            ctx->pc = 0x1A996Cu;
            goto label_1a996c;
        }
    }
    ctx->pc = 0x1A9964u;
    // 0x1a9964: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1A9964u;
    SET_GPR_U32(ctx, 31, 0x1A996Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1A9964u, 0x1A996Cu)) {
        return;
    }
    ctx->pc = 0x1A996Cu;
label_1a996c:
    // 0x1a996c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a996cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9970: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9970u;
        // 0x1a9974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9978u;
}
