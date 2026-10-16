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

// Function: sub_001F2420
// Address: 0x1f2420 - 0x1f2460
void sub_001F2420_0x1f2420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2420_0x1f2420");
#endif

    switch (ctx->pc) {
        case 0x1f2430u: goto label_1f2430;
        default: break;
    }

    ctx->pc = 0x1f2420u;

    // 0x1f2420: 0x8c86271c  lw          $a2, 0x271C($a0)
    ctx->pc = 0x1f2420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10012)));
    // 0x1f2424: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2424u;
    {
        const bool branch_taken_0x1f2424 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2424u;
        // 0x1f2428: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2424) {
            ctx->pc = 0x1F2458u;
            goto label_1f2458;
        }
    }
    ctx->pc = 0x1F242Cu;
    // 0x1f242c: 0x0  nop
    ctx->pc = 0x1f242cu;
    // NOP
label_1f2430:
    // 0x1f2430: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1f2430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1f2434: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x1f2434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f2438: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f2438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f243c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1f243cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1f2440: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1f2440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f2444: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x1f2444u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4));
    // 0x1f2448: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x1f2448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x1f244c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1f244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f2450: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F2450u;
    {
        const bool branch_taken_0x1f2450 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2450u;
        // 0x1f2454: 0x43380a  movz        $a3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2450) {
            ctx->pc = 0x1F2430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2430;
        }
    }
    ctx->pc = 0x1F2458u;
label_1f2458:
    // 0x1f2458: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2458u;
        // 0x1f245c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2460u;
}
