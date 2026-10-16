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

// Function: sub_003280D0
// Address: 0x3280d0 - 0x328120
void sub_003280D0_0x3280d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003280D0_0x3280d0");
#endif

    switch (ctx->pc) {
        case 0x3280f0u: goto label_3280f0;
        default: break;
    }

    ctx->pc = 0x3280d0u;

    // 0x3280d0: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x3280d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x3280d4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x3280d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x3280d8: 0x24a2f740  addiu       $v0, $a1, -0x8C0
    ctx->pc = 0x3280d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965056));
    // 0x3280dc: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x3280dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3280e0: 0xac62fb40  sw          $v0, -0x4C0($v1)
    ctx->pc = 0x3280e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FB40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72FB40u, _value); } while (0);
    // 0x3280e4: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x3280e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x3280e8: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x3280e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x3280ec: 0x0  nop
    ctx->pc = 0x3280ecu;
    // NOP
label_3280f0:
    // 0x3280f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3280f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3280f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3280f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3280f8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3280f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3280fc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3280fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x328100: 0x0  nop
    ctx->pc = 0x328100u;
    // NOP
    // 0x328104: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x328104u;
    {
        const bool branch_taken_0x328104 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x328104) {
            ctx->pc = 0x3280F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3280f0;
        }
    }
    ctx->pc = 0x32810Cu;
    // 0x32810c: 0x24a3f740  addiu       $v1, $a1, -0x8C0
    ctx->pc = 0x32810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965056));
    // 0x328110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x328110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328114: 0x3e00008  jr          $ra
    ctx->pc = 0x328114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328114u;
        // 0x328118: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32811Cu;
    // 0x32811c: 0x0  nop
    ctx->pc = 0x32811cu;
    // NOP
    ctx->pc = 0x328120u;
}
