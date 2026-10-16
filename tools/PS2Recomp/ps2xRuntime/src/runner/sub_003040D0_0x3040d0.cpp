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

// Function: sub_003040D0
// Address: 0x3040d0 - 0x304120
void sub_003040D0_0x3040d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003040D0_0x3040d0");
#endif

    ctx->pc = 0x3040d0u;

    // 0x3040d0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3040d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040d4: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x3040d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x3040d8: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x3040d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3040dc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3040dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3040e0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x3040e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3040e4: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x3040e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3040e8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3040e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3040ec: 0x238c3  sra         $a3, $v0, 3
    ctx->pc = 0x3040ecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3040f0: 0xe41018  mult        $v0, $a3, $a0
    ctx->pc = 0x3040f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3040f4: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x3040f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3040f8: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3040F8u;
    {
        const bool branch_taken_0x3040f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x3040f8) {
            ctx->pc = 0x304110u;
            goto label_304110;
        }
    }
    ctx->pc = 0x304100u;
    // 0x304100: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x304100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x304104: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x304104u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x304108: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x304108u;
    {
        const bool branch_taken_0x304108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304108u;
        // 0x30410c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304108) {
            ctx->pc = 0x304118u;
            goto label_304118;
        }
    }
    ctx->pc = 0x304110u;
label_304110:
    // 0x304110: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x304110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x304114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_304118:
    // 0x304118: 0x3e00008  jr          $ra
    ctx->pc = 0x304118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304120u;
}
