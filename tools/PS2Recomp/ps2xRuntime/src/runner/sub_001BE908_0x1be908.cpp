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

// Function: sub_001BE908
// Address: 0x1be908 - 0x1be938
void sub_001BE908_0x1be908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE908_0x1be908");
#endif

    switch (ctx->pc) {
        case 0x1be92cu: goto label_1be92c;
        default: break;
    }

    ctx->pc = 0x1be908u;

    // 0x1be908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be90c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1be90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1be910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be914: 0x2442d700  addiu       $v0, $v0, -0x2900
    ctx->pc = 0x1be914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956800));
    // 0x1be918: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1be918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1be91c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE91Cu;
    {
        const bool branch_taken_0x1be91c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE91Cu;
        // 0x1be920: 0xac8200f8  sw          $v0, 0xF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be91c) {
            ctx->pc = 0x1BE92Cu;
            goto label_1be92c;
        }
    }
    ctx->pc = 0x1BE924u;
    // 0x1be924: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1BE924u;
    SET_GPR_U32(ctx, 31, 0x1BE92Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BE924u, 0x1BE92Cu)) {
        return;
    }
    ctx->pc = 0x1BE92Cu;
label_1be92c:
    // 0x1be92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be930: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE930u;
        // 0x1be934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE938u;
}
