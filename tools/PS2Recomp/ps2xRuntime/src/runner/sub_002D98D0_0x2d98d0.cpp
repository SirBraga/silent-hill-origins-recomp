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

// Function: sub_002D98D0
// Address: 0x2d98d0 - 0x2d9930
void sub_002D98D0_0x2d98d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D98D0_0x2d98d0");
#endif

    switch (ctx->pc) {
        case 0x2d9908u: goto label_2d9908;
        default: break;
    }

    ctx->pc = 0x2d98d0u;

    // 0x2d98d0: 0x27828fc0  addiu       $v0, $gp, -0x7040
    ctx->pc = 0x2d98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938560));
    // 0x2d98d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d98d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d98d8: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x2d98d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x2d98dc: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2d98dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2d98e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d98e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d98e4: 0x25087bf8  addiu       $t0, $t0, 0x7BF8
    ctx->pc = 0x2d98e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31736));
    // 0x2d98e8: 0xaf828fc4  sw          $v0, -0x703C($gp)
    ctx->pc = 0x2d98e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 2));
    // 0x2d98ec: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2d98ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d98f0: 0xaf828fc0  sw          $v0, -0x7040($gp)
    ctx->pc = 0x2d98f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938560), GPR_U32(ctx, 2));
    // 0x2d98f4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2d98f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d98f8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2d98f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d98fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d98fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9900: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2D9900u;
    SET_GPR_U32(ctx, 31, 0x2D9908u);
    ctx->pc = 0x2D9904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9900u;
    // 0x2d9904: 0x3529080b  ori         $t1, $t1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2D9900u, 0x2D9908u)) {
        return;
    }
    ctx->pc = 0x2D9908u;
label_2d9908:
    // 0x2d9908: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9908u;
    {
        const bool branch_taken_0x2d9908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9908u;
        // 0x2d990c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9908) {
            ctx->pc = 0x2D991Cu;
            goto label_2d991c;
        }
    }
    ctx->pc = 0x2D9910u;
    // 0x2d9910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9914: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9914u;
    {
        const bool branch_taken_0x2d9914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9914u;
        // 0x2d9918: 0xaf838b50  sw          $v1, -0x74B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9914) {
            ctx->pc = 0x2D9920u;
            goto label_2d9920;
        }
    }
    ctx->pc = 0x2D991Cu;
label_2d991c:
    // 0x2d991c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d991cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9920:
    // 0x2d9920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9924: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9924u;
        // 0x2d9928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D992Cu;
    // 0x2d992c: 0x0  nop
    ctx->pc = 0x2d992cu;
    // NOP
    ctx->pc = 0x2d9930u;
}
