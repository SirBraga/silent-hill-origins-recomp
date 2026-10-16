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

// Function: sub_002ED0F8
// Address: 0x2ed0f8 - 0x2ed148
void sub_002ED0F8_0x2ed0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED0F8_0x2ed0f8");
#endif

    switch (ctx->pc) {
        case 0x2ed118u: goto label_2ed118;
        default: break;
    }

    ctx->pc = 0x2ed0f8u;

    // 0x2ed0f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ed0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0fc: 0x8c470030  lw          $a3, 0x30($v0)
    ctx->pc = 0x2ed0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ed100: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed104: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ed104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed108: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ed108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ed10c: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x2ed10cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
    // 0x2ed110: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED110u;
        // 0x2ed114: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED118u;
label_2ed118:
    // 0x2ed118: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2ed118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2ed11c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ed11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed120: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ed120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed124: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED124u;
    {
        const bool branch_taken_0x2ed124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ED128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED124u;
        // 0x2ed128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed124) {
            ctx->pc = 0x2ED138u;
            goto label_2ed138;
        }
    }
    ctx->pc = 0x2ED12Cu;
    // 0x2ed12c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ed12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ed130: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x2ed130u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ed134: 0x0  nop
    ctx->pc = 0x2ed134u;
    // NOP
label_2ed138:
    // 0x2ed138: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2ed138u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2ed13c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED13Cu;
        // 0x2ed140: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED144u;
    // 0x2ed144: 0x0  nop
    ctx->pc = 0x2ed144u;
    // NOP
    ctx->pc = 0x2ed148u;
}
