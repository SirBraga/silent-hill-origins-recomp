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

// Function: sub_00101890
// Address: 0x101890 - 0x1018d8
void sub_00101890_0x101890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101890_0x101890");
#endif

    ctx->pc = 0x101890u;

    // 0x101890: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x101890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101894: 0x8cc200dc  lw          $v0, 0xDC($a2)
    ctx->pc = 0x101894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x101898: 0x8cc501d0  lw          $a1, 0x1D0($a2)
    ctx->pc = 0x101898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 464)));
    // 0x10189c: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x10189cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1018a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1018a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1018a4: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x1018a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1018a8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1018a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1018ac: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x1018acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1018b0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1018b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1018b4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1018b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1018b8: 0xacc20184  sw          $v0, 0x184($a2)
    ctx->pc = 0x1018b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 388), GPR_U32(ctx, 2));
    // 0x1018bc: 0xacc400dc  sw          $a0, 0xDC($a2)
    ctx->pc = 0x1018bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 4));
    // 0x1018c0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1018C0u;
    {
        const bool branch_taken_0x1018c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1018C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018C0u;
        // 0x1018c4: 0xacc30180  sw          $v1, 0x180($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018c0) {
            ctx->pc = 0x1018D0u;
            goto label_1018d0;
        }
    }
    ctx->pc = 0x1018C8u;
    // 0x1018c8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1018c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1018cc: 0xacc20198  sw          $v0, 0x198($a2)
    ctx->pc = 0x1018ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 408), GPR_U32(ctx, 2));
label_1018d0:
    // 0x1018d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1018D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1018D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1018D8u;
}
