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

// Function: sub_00229620
// Address: 0x229620 - 0x229650
void sub_00229620_0x229620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229620_0x229620");
#endif

    ctx->pc = 0x229620u;

    // 0x229620: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x229620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x229624: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x229624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x229628: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x229628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x22962c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22962Cu;
    {
        const bool branch_taken_0x22962c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22962Cu;
        // 0x229630: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22962c) {
            ctx->pc = 0x229644u;
            goto label_229644;
        }
    }
    ctx->pc = 0x229634u;
    // 0x229634: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x229634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
    // 0x229638: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x229638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22963c: 0x3e00008  jr          $ra
    ctx->pc = 0x22963Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22963Cu;
        // 0x229640: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22963Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229644u;
label_229644:
    // 0x229644: 0x3e00008  jr          $ra
    ctx->pc = 0x229644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229644u;
        // 0x229648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22964Cu;
    // 0x22964c: 0x0  nop
    ctx->pc = 0x22964cu;
    // NOP
    ctx->pc = 0x229650u;
}
