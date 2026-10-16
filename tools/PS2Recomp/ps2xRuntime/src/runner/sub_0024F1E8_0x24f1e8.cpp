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

// Function: sub_0024F1E8
// Address: 0x24f1e8 - 0x24f218
void sub_0024F1E8_0x24f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F1E8_0x24f1e8");
#endif

    switch (ctx->pc) {
        case 0x24f1f8u: goto label_24f1f8;
        default: break;
    }

    ctx->pc = 0x24f1e8u;

    // 0x24f1e8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x24f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x24f1ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24f1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1f0: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x24f1f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x24f1f4: 0x0  nop
    ctx->pc = 0x24f1f4u;
    // NOP
label_24f1f8:
    // 0x24f1f8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x24f1f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f1fc: 0x651026  xor         $v0, $v1, $a1
    ctx->pc = 0x24f1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x24f200: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x24f200u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4));
    // 0x24f204: 0x0  nop
    ctx->pc = 0x24f204u;
    // NOP
    // 0x24f208: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24F208u;
    {
        const bool branch_taken_0x24f208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F208u;
        // 0x24f20c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f208) {
            ctx->pc = 0x24F1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f1f8;
        }
    }
    ctx->pc = 0x24F210u;
    // 0x24f210: 0x3e00008  jr          $ra
    ctx->pc = 0x24F210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F210u;
        // 0x24f214: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F218u;
}
