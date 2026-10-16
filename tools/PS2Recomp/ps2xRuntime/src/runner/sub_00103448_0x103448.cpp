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

// Function: sub_00103448
// Address: 0x103448 - 0x103480
void sub_00103448_0x103448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103448_0x103448");
#endif

    ctx->pc = 0x103448u;

    // 0x103448: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x103448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10344c: 0x50c20001  beql        $a2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x10344Cu;
    {
        const bool branch_taken_0x10344c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x10344c) {
            ctx->pc = 0x103450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10344Cu;
            // 0x103450: 0x8c8601a0  lw          $a2, 0x1A0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103454u;
            goto label_103454;
        }
    }
    ctx->pc = 0x103454u;
label_103454:
    // 0x103454: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x103454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x103458: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x103458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x10345c: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x10345cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x103460: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x103460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x103464: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x103464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x103468: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10346c: 0x3e00008  jr          $ra
    ctx->pc = 0x10346Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10346Cu;
        // 0x103470: 0x8c620028  lw          $v0, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10346Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103474u;
    // 0x103474: 0x0  nop
    ctx->pc = 0x103474u;
    // NOP
    // 0x103478: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x103478u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10347c: 0x0  nop
    ctx->pc = 0x10347cu;
    // NOP
    ctx->pc = 0x103480u;
}
