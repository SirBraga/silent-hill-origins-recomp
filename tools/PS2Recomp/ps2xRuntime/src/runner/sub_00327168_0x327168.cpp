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

// Function: sub_00327168
// Address: 0x327168 - 0x3271b0
void sub_00327168_0x327168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327168_0x327168");
#endif

    switch (ctx->pc) {
        case 0x327170u: goto label_327170;
        case 0x327178u: goto label_327178;
        case 0x327188u: goto label_327188;
        default: break;
    }

    ctx->pc = 0x327168u;

    // 0x327168: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x327168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x32716c: 0xc  syscall     0
    ctx->pc = 0x32716cu;
    ctx->pc = 0x327170u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_327170:
    // 0x327170: 0x3e00008  jr          $ra
    ctx->pc = 0x327170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327178u;
label_327178:
    // 0x327178: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x327178u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x32717c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x32717Cu;
    {
        const bool branch_taken_0x32717c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x327180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32717Cu;
        // 0x327180: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32717c) {
            ctx->pc = 0x3271A8u;
            goto label_3271a8;
        }
    }
    ctx->pc = 0x327184u;
    // 0x327184: 0x0  nop
    ctx->pc = 0x327184u;
    // NOP
label_327188:
    // 0x327188: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x327188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32718c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x32718cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x327190: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x327190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x327194: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x327194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x327198: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x327198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x32719c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32719cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3271a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3271A0u;
    {
        const bool branch_taken_0x3271a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3271a0) {
            ctx->pc = 0x327188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327188;
        }
    }
    ctx->pc = 0x3271A8u;
label_3271a8:
    // 0x3271a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3271A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3271ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271A8u;
        // 0x3271ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3271A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3271B0u;
}
