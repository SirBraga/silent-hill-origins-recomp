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

// Function: sub_001A9D68
// Address: 0x1a9d68 - 0x1a9d98
void sub_001A9D68_0x1a9d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9D68_0x1a9d68");
#endif

    switch (ctx->pc) {
        case 0x1a9d8cu: goto label_1a9d8c;
        default: break;
    }

    ctx->pc = 0x1a9d68u;

    // 0x1a9d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9d6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1a9d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9d74: 0x2442b588  addiu       $v0, $v0, -0x4A78
    ctx->pc = 0x1a9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948232));
    // 0x1a9d78: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1a9d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1a9d7c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9D7Cu;
    {
        const bool branch_taken_0x1a9d7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D7Cu;
        // 0x1a9d80: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d7c) {
            ctx->pc = 0x1A9D8Cu;
            goto label_1a9d8c;
        }
    }
    ctx->pc = 0x1A9D84u;
    // 0x1a9d84: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1A9D84u;
    SET_GPR_U32(ctx, 31, 0x1A9D8Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1A9D84u, 0x1A9D8Cu)) {
        return;
    }
    ctx->pc = 0x1A9D8Cu;
label_1a9d8c:
    // 0x1a9d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9d90: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D90u;
        // 0x1a9d94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9D98u;
}
