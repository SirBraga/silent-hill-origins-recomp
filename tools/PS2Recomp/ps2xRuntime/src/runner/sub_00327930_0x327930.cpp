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

// Function: sub_00327930
// Address: 0x327930 - 0x327968
void sub_00327930_0x327930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327930_0x327930");
#endif

    ctx->pc = 0x327930u;

    // 0x327930: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x327930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x327934: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327934u;
    {
        const bool branch_taken_0x327934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327934u;
        // 0x327938: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327934) {
            ctx->pc = 0x327944u;
            goto label_327944;
        }
    }
    ctx->pc = 0x32793Cu;
    // 0x32793c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32793Cu;
    {
        const bool branch_taken_0x32793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32793Cu;
        // 0x327940: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32793c) {
            ctx->pc = 0x32794Cu;
            goto label_32794c;
        }
    }
    ctx->pc = 0x327944u;
label_327944:
    // 0x327944: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x327944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x327948: 0xac4385a8  sw          $v1, -0x7A58($v0)
    ctx->pc = 0x327948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6885A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6885A8u, _value); } while (0);
label_32794c:
    // 0x32794c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32794Cu;
    {
        const bool branch_taken_0x32794c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32794c) {
            ctx->pc = 0x327950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32794Cu;
            // 0x327950: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327960u;
            goto label_327960;
        }
    }
    ctx->pc = 0x327954u;
    // 0x327954: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x327954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x327958: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x327958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x32795c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x32795cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_327960:
    // 0x327960: 0x3e00008  jr          $ra
    ctx->pc = 0x327960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327960u;
        // 0x327964: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327968u;
}
