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

// Function: sub_0010E528
// Address: 0x10e528 - 0x10e570
void sub_0010E528_0x10e528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E528_0x10e528");
#endif

    switch (ctx->pc) {
        case 0x10e538u: goto label_10e538;
        default: break;
    }

    ctx->pc = 0x10e528u;

    // 0x10e528: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10e52c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e530: 0x24840b20  addiu       $a0, $a0, 0xB20
    ctx->pc = 0x10e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2848));
    // 0x10e534: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10e534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e538:
    // 0x10e538: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10e53c: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E53Cu;
    {
        const bool branch_taken_0x10e53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x10E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E53Cu;
        // 0x10e540: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e53c) {
            ctx->pc = 0x10E55Cu;
            goto label_10e55c;
        }
    }
    ctx->pc = 0x10E544u;
    // 0x10e544: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10e544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x10e548: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x10e548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x10e54c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x10e54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x10e550: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x10e550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x10e554: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x10e554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x10e558: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x10e558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_10e55c:
    // 0x10e55c: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x10e55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10e560: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x10E560u;
    {
        const bool branch_taken_0x10e560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E560u;
        // 0x10e564: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e560) {
            ctx->pc = 0x10E538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e538;
        }
    }
    ctx->pc = 0x10E568u;
    // 0x10e568: 0x3e00008  jr          $ra
    ctx->pc = 0x10E568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E570u;
}
