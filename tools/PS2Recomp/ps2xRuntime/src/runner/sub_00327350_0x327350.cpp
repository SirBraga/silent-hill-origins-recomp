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

// Function: sub_00327350
// Address: 0x327350 - 0x327398
void sub_00327350_0x327350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327350_0x327350");
#endif

    switch (ctx->pc) {
        case 0x327358u: goto label_327358;
        case 0x327360u: goto label_327360;
        case 0x327370u: goto label_327370;
        default: break;
    }

    ctx->pc = 0x327350u;

    // 0x327350: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x327350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x327354: 0xc  syscall     0
    ctx->pc = 0x327354u;
    ctx->pc = 0x327358u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_327358:
    // 0x327358: 0x3e00008  jr          $ra
    ctx->pc = 0x327358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327360u;
label_327360:
    // 0x327360: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x327360u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x327364: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x327364u;
    {
        const bool branch_taken_0x327364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x327368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327364u;
        // 0x327368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327364) {
            ctx->pc = 0x327390u;
            goto label_327390;
        }
    }
    ctx->pc = 0x32736Cu;
    // 0x32736c: 0x0  nop
    ctx->pc = 0x32736cu;
    // NOP
label_327370:
    // 0x327370: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x327370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x327374: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x327374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x327378: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x327378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x32737c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x32737cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x327380: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x327380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x327384: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x327384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x327388: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x327388u;
    {
        const bool branch_taken_0x327388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327388) {
            ctx->pc = 0x327370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327370;
        }
    }
    ctx->pc = 0x327390u;
label_327390:
    // 0x327390: 0x3e00008  jr          $ra
    ctx->pc = 0x327390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327390u;
        // 0x327394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327398u;
}
