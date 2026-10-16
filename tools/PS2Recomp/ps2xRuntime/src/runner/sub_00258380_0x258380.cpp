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

// Function: sub_00258380
// Address: 0x258380 - 0x2583c0
void sub_00258380_0x258380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258380_0x258380");
#endif

    switch (ctx->pc) {
        case 0x258390u: goto label_258390;
        default: break;
    }

    ctx->pc = 0x258380u;

    // 0x258380: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x258380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258384: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x258384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x258388: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x258388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25838c: 0x0  nop
    ctx->pc = 0x25838cu;
    // NOP
label_258390:
    // 0x258390: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x258390u;
    {
        const bool branch_taken_0x258390 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x258394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258390u;
        // 0x258394: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258390) {
            ctx->pc = 0x2583B0u;
            goto label_2583b0;
        }
    }
    ctx->pc = 0x258398u;
    // 0x258398: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x258398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25839c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x25839cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2583a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2583a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2583a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2583a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2583a8: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2583A8u;
    {
        const bool branch_taken_0x2583a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2583ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583A8u;
        // 0x2583ac: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583a8) {
            ctx->pc = 0x258390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258390;
        }
    }
    ctx->pc = 0x2583B0u;
label_2583b0:
    // 0x2583b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2583B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2583B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583B0u;
        // 0x2583b4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2583B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2583B8u;
    // 0x2583b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2583b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2583bc: 0x0  nop
    ctx->pc = 0x2583bcu;
    // NOP
    ctx->pc = 0x2583c0u;
}
