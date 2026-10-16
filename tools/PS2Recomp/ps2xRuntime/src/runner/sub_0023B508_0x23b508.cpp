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

// Function: sub_0023B508
// Address: 0x23b508 - 0x23b558
void sub_0023B508_0x23b508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B508_0x23b508");
#endif

    switch (ctx->pc) {
        case 0x23b524u: goto label_23b524;
        case 0x23b544u: goto label_23b544;
        default: break;
    }

    ctx->pc = 0x23b508u;

    // 0x23b508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b50c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x23b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23b510: 0x8c843f38  lw          $a0, 0x3F38($a0)
    ctx->pc = 0x23b510u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F38u));
    // 0x23b514: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B514u;
    {
        const bool branch_taken_0x23b514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B514u;
        // 0x23b518: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b514) {
            ctx->pc = 0x23B52Cu;
            goto label_23b52c;
        }
    }
    ctx->pc = 0x23B51Cu;
    // 0x23b51c: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x23B51Cu;
    SET_GPR_U32(ctx, 31, 0x23B524u);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x23B51Cu, 0x23B524u)) {
        return;
    }
    ctx->pc = 0x23B524u;
label_23b524:
    // 0x23b524: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b528: 0xac203f38  sw          $zero, 0x3F38($at)
    ctx->pc = 0x23b528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F38u, _value); } while (0);
label_23b52c:
    // 0x23b52c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x23b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23b530: 0x8c843f3c  lw          $a0, 0x3F3C($a0)
    ctx->pc = 0x23b530u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F3Cu));
    // 0x23b534: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B534u;
    {
        const bool branch_taken_0x23b534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B534u;
        // 0x23b538: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b534) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B53Cu;
    // 0x23b53c: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x23B53Cu;
    SET_GPR_U32(ctx, 31, 0x23B544u);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x23B53Cu, 0x23B544u)) {
        return;
    }
    ctx->pc = 0x23B544u;
label_23b544:
    // 0x23b544: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23b544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23b548: 0xac203f3c  sw          $zero, 0x3F3C($at)
    ctx->pc = 0x23b548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3F3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F3Cu, _value); } while (0);
    // 0x23b54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b550:
    // 0x23b550: 0x3e00008  jr          $ra
    ctx->pc = 0x23B550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B550u;
        // 0x23b554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B558u;
}
