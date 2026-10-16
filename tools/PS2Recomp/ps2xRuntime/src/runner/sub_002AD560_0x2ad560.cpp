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

// Function: sub_002AD560
// Address: 0x2ad560 - 0x2ad5a0
void sub_002AD560_0x2ad560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD560_0x2ad560");
#endif

    ctx->pc = 0x2ad560u;

    // 0x2ad560: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ad560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad564: 0x8cc4003c  lw          $a0, 0x3C($a2)
    ctx->pc = 0x2ad564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x2ad568: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AD568u;
    {
        const bool branch_taken_0x2ad568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD568u;
        // 0x2ad56c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad568) {
            ctx->pc = 0x2AD598u;
            goto label_2ad598;
        }
    }
    ctx->pc = 0x2AD570u;
    // 0x2ad570: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x2ad570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2ad574: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ad574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad578: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2ad578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ad57c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad580: 0xacc4003c  sw          $a0, 0x3C($a2)
    ctx->pc = 0x2ad580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 4));
    // 0x2ad584: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ad584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad588: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2ad588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2ad58c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ad58cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad590: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD590u;
        // 0x2ad594: 0xa4650004  sh          $a1, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD598u;
label_2ad598:
    // 0x2ad598: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD598u;
        // 0x2ad59c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD5A0u;
}
