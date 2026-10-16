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

// Function: sub_002972D0
// Address: 0x2972d0 - 0x2972f8
void sub_002972D0_0x2972d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002972D0_0x2972d0");
#endif

    ctx->pc = 0x2972d0u;

    // 0x2972d0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2972d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2972d4: 0x41702  srl         $v0, $a0, 28
    ctx->pc = 0x2972d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x2972d8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2972D8u;
    {
        const bool branch_taken_0x2972d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2972DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972D8u;
        // 0x2972dc: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972d8) {
            ctx->pc = 0x2972F0u;
            goto label_2972f0;
        }
    }
    ctx->pc = 0x2972E0u;
    // 0x2972e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2972e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2972e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2972e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2972e8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2972e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2972ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2972ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2972f0:
    // 0x2972f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2972F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2972F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972F0u;
        // 0x2972f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2972F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2972F8u;
}
