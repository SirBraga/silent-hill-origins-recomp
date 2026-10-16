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

// Function: sub_00101CF8
// Address: 0x101cf8 - 0x101d28
void sub_00101CF8_0x101cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101CF8_0x101cf8");
#endif

    ctx->pc = 0x101cf8u;

    // 0x101cf8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x101cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x101cfc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x101cfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101d04: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x101D04u;
    {
        const bool branch_taken_0x101d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x101D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D04u;
        // 0x101d08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d04) {
            ctx->pc = 0x101D20u;
            goto label_101d20;
        }
    }
    ctx->pc = 0x101D0Cu;
    // 0x101d0c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x101d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x101d10: 0x8c6300d8  lw          $v1, 0xD8($v1)
    ctx->pc = 0x101d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x101d14: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x101d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101d1c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x101d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_101d20:
    // 0x101d20: 0x3e00008  jr          $ra
    ctx->pc = 0x101D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D20u;
        // 0x101d24: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101D28u;
}
