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

// Function: sub_001BE7A8
// Address: 0x1be7a8 - 0x1be7f0
void sub_001BE7A8_0x1be7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE7A8_0x1be7a8");
#endif

    switch (ctx->pc) {
        case 0x1be7e4u: goto label_1be7e4;
        default: break;
    }

    ctx->pc = 0x1be7a8u;

    // 0x1be7a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be7ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1be7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1be7b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be7b4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1be7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1be7b8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1be7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1be7bc: 0x8c4543c8  lw          $a1, 0x43C8($v0)
    ctx->pc = 0x1be7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43C8u));
    // 0x1be7c0: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1be7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1be7c4: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE7C4u;
    {
        const bool branch_taken_0x1be7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7C4u;
        // 0x1be7c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7c4) {
            ctx->pc = 0x1BE7E8u;
            goto label_1be7e8;
        }
    }
    ctx->pc = 0x1BE7CCu;
    // 0x1be7cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1be7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be7d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE7D0u;
    {
        const bool branch_taken_0x1be7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7D0u;
        // 0x1be7d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7d0) {
            ctx->pc = 0x1BE7E8u;
            goto label_1be7e8;
        }
    }
    ctx->pc = 0x1BE7D8u;
    // 0x1be7d8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1be7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1be7dc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BE7DCu;
    SET_GPR_U32(ctx, 31, 0x1BE7E4u);
    ctx->pc = 0x1BE7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7DCu;
    // 0x1be7e0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BE7DCu, 0x1BE7E4u)) {
        return;
    }
    ctx->pc = 0x1BE7E4u;
label_1be7e4:
    // 0x1be7e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1be7e8:
    // 0x1be7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7E8u;
        // 0x1be7ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE7F0u;
}
