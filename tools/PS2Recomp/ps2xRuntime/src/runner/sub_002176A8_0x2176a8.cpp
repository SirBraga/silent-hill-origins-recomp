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

// Function: sub_002176A8
// Address: 0x2176a8 - 0x2176f0
void sub_002176A8_0x2176a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002176A8_0x2176a8");
#endif

    switch (ctx->pc) {
        case 0x2176dcu: goto label_2176dc;
        default: break;
    }

    ctx->pc = 0x2176a8u;

    // 0x2176a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2176a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2176ac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2176acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2176b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2176b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2176b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2176b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2176B8u;
    {
        const bool branch_taken_0x2176b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2176BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176B8u;
        // 0x2176bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2176b8) {
            ctx->pc = 0x2176E0u;
            goto label_2176e0;
        }
    }
    ctx->pc = 0x2176C0u;
    // 0x2176c0: 0xac640260  sw          $a0, 0x260($v1)
    ctx->pc = 0x2176c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 608), GPR_U32(ctx, 4));
    // 0x2176c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2176c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176c8: 0xa060025c  sb          $zero, 0x25C($v1)
    ctx->pc = 0x2176c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 604), (uint8_t)GPR_U32(ctx, 0));
    // 0x2176cc: 0xac600264  sw          $zero, 0x264($v1)
    ctx->pc = 0x2176ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 612), GPR_U32(ctx, 0));
    // 0x2176d0: 0xac600268  sw          $zero, 0x268($v1)
    ctx->pc = 0x2176d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 616), GPR_U32(ctx, 0));
    // 0x2176d4: 0xc085b1c  jal         func_216C70
    ctx->pc = 0x2176D4u;
    SET_GPR_U32(ctx, 31, 0x2176DCu);
    ctx->pc = 0x2176D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176D4u;
    // 0x2176d8: 0xac60026c  sw          $zero, 0x26C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 620), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216C70u, 0x2176D4u, 0x2176DCu)) {
        return;
    }
    ctx->pc = 0x2176DCu;
label_2176dc:
    // 0x2176dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2176dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2176e0:
    // 0x2176e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2176e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2176e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2176e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2176E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2176ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176E8u;
        // 0x2176ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2176E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2176F0u;
}
