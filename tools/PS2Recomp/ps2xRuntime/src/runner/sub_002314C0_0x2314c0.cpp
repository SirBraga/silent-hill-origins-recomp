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

// Function: sub_002314C0
// Address: 0x2314c0 - 0x2314e8
void sub_002314C0_0x2314c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002314C0_0x2314c0");
#endif

    switch (ctx->pc) {
        case 0x2314c0u: goto label_2314c0;
        case 0x2314c4u: goto label_2314c4;
        case 0x2314c8u: goto label_2314c8;
        case 0x2314ccu: goto label_2314cc;
        case 0x2314d0u: goto label_2314d0;
        case 0x2314d4u: goto label_2314d4;
        case 0x2314d8u: goto label_2314d8;
        case 0x2314dcu: goto label_2314dc;
        case 0x2314e0u: goto label_2314e0;
        case 0x2314e4u: goto label_2314e4;
        default: break;
    }

    ctx->pc = 0x2314c0u;

label_2314c0:
    // 0x2314c0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2314c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2314c4:
    // 0x2314c4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2314c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2314c8:
    // 0x2314c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2314cc:
    if (ctx->pc == 0x2314CCu) {
        ctx->pc = 0x2314CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314C8u;
        // 0x2314cc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314D0u;
        goto label_2314d0;
    }
    ctx->pc = 0x2314C8u;
    {
        const bool branch_taken_0x2314c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314C8u;
        // 0x2314cc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314c8) {
            ctx->pc = 0x231504u;
            return;
        }
    }
    ctx->pc = 0x2314D0u;
label_2314d0:
    // 0x2314d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2314d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2314d4:
    // 0x2314d4: 0x2442aa20  addiu       $v0, $v0, -0x55E0
    ctx->pc = 0x2314d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945312));
label_2314d8:
    // 0x2314d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2314d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2314dc:
    // 0x2314dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2314dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2314e0:
    // 0x2314e0: 0x800008  jr          $a0
label_2314e4:
    if (ctx->pc == 0x2314E4u) {
        ctx->pc = 0x2314E8u;
        goto label_fallthrough_0x2314e0;
    }
    ctx->pc = 0x2314E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2314E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2314e0:
    ctx->pc = 0x2314E8u;
}
