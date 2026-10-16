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

// Function: sub_001DDBE8
// Address: 0x1ddbe8 - 0x1ddc30
void sub_001DDBE8_0x1ddbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDBE8_0x1ddbe8");
#endif

    ctx->pc = 0x1ddbe8u;

    // 0x1ddbe8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DDBE8u;
    {
        const bool branch_taken_0x1ddbe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbe8) {
            ctx->pc = 0x1DDC20u;
            goto label_1ddc20;
        }
    }
    ctx->pc = 0x1DDBF0u;
    // 0x1ddbf0: 0x4a0000b  bltz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DDBF0u;
    {
        const bool branch_taken_0x1ddbf0 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x1ddbf0) {
            ctx->pc = 0x1DDC20u;
            goto label_1ddc20;
        }
    }
    ctx->pc = 0x1DDBF8u;
    // 0x1ddbf8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1ddbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ddbfc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ddbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ddc00: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ddc00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddc04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDC04u;
    {
        const bool branch_taken_0x1ddc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC04u;
        // 0x1ddc08: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc04) {
            ctx->pc = 0x1DDC20u;
            goto label_1ddc20;
        }
    }
    ctx->pc = 0x1DDC0Cu;
    // 0x1ddc0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ddc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ddc10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ddc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ddc14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ddc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddc18: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC18u;
        // 0x1ddc1c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDC20u;
label_1ddc20:
    // 0x1ddc20: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC20u;
        // 0x1ddc24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDC28u;
    // 0x1ddc28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ddc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ddc2c: 0x0  nop
    ctx->pc = 0x1ddc2cu;
    // NOP
    ctx->pc = 0x1ddc30u;
}
