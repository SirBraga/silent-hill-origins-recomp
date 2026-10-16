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

// Function: sub_001269C0
// Address: 0x1269c0 - 0x1269ec
void sub_001269C0_0x1269c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001269C0_0x1269c0");
#endif

    switch (ctx->pc) {
        case 0x1269c0u: goto label_1269c0;
        case 0x1269c4u: goto label_1269c4;
        case 0x1269c8u: goto label_1269c8;
        case 0x1269ccu: goto label_1269cc;
        case 0x1269d0u: goto label_1269d0;
        case 0x1269d4u: goto label_1269d4;
        case 0x1269d8u: goto label_1269d8;
        case 0x1269dcu: goto label_1269dc;
        case 0x1269e0u: goto label_1269e0;
        case 0x1269e4u: goto label_1269e4;
        case 0x1269e8u: goto label_1269e8;
        default: break;
    }

    ctx->pc = 0x1269c0u;

label_1269c0:
    // 0x1269c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1269c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1269c4:
    // 0x1269c4: 0x8ca30f54  lw          $v1, 0xF54($a1)
    ctx->pc = 0x1269c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3924)));
label_1269c8:
    // 0x1269c8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1269c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1269cc:
    // 0x1269cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1269d0:
    if (ctx->pc == 0x1269D0u) {
        ctx->pc = 0x1269D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269CCu;
        // 0x1269d0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1269D4u;
        goto label_1269d4;
    }
    ctx->pc = 0x1269CCu;
    {
        const bool branch_taken_0x1269cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1269D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269CCu;
        // 0x1269d0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269cc) {
            ctx->pc = 0x126A18u;
            return;
        }
    }
    ctx->pc = 0x1269D4u;
label_1269d4:
    // 0x1269d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1269d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1269d8:
    // 0x1269d8: 0x2442c4c0  addiu       $v0, $v0, -0x3B40
    ctx->pc = 0x1269d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952128));
label_1269dc:
    // 0x1269dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1269dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1269e0:
    // 0x1269e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1269e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1269e4:
    // 0x1269e4: 0x800008  jr          $a0
label_1269e8:
    if (ctx->pc == 0x1269E8u) {
        ctx->pc = 0x1269ECu;
        goto label_fallthrough_0x1269e4;
    }
    ctx->pc = 0x1269E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1269E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1269e4:
    ctx->pc = 0x1269ECu;
}
