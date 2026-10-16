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

// Function: sub_001A5408
// Address: 0x1a5408 - 0x1a5470
void sub_001A5408_0x1a5408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5408_0x1a5408");
#endif

    switch (ctx->pc) {
        case 0x1a5430u: goto label_1a5430;
        default: break;
    }

    ctx->pc = 0x1a5408u;

    // 0x1a5408: 0xa64818  mult        $t1, $a1, $a2
    ctx->pc = 0x1a5408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1a540c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1a540cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5410: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x1a5410u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x1a5414: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a5414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5418: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x1a5418u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x1a541c: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x1a541cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x1a5420: 0xa9282b  sltu        $a1, $a1, $t1
    ctx->pc = 0x1a5420u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1a5424: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A5424u;
    {
        const bool branch_taken_0x1a5424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5424u;
        // 0x1a5428: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5424) {
            ctx->pc = 0x1A5450u;
            goto label_1a5450;
        }
    }
    ctx->pc = 0x1A542Cu;
    // 0x1a542c: 0x0  nop
    ctx->pc = 0x1a542cu;
    // NOP
label_1a5430:
    // 0x1a5430: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1a5430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1a5434: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5438: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a5438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a543c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1a543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1a5440: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x1a5440u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1a5444: 0x69182b  sltu        $v1, $v1, $t1
    ctx->pc = 0x1a5444u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1a5448: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A5448u;
    {
        const bool branch_taken_0x1a5448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5448u;
        // 0x1a544c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5448) {
            ctx->pc = 0x1A5430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5430;
        }
    }
    ctx->pc = 0x1A5450u;
label_1a5450:
    // 0x1a5450: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a5450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a5454: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1a5454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1a5458: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1a5458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1a545c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1a545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a5460: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1a5460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a5464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5468: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5468u;
        // 0x1a546c: 0xad020010  sw          $v0, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5470u;
}
