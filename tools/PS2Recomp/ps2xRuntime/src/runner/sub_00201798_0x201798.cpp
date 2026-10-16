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

// Function: sub_00201798
// Address: 0x201798 - 0x2017f8
void sub_00201798_0x201798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201798_0x201798");
#endif

    switch (ctx->pc) {
        case 0x2017d0u: goto label_2017d0;
        default: break;
    }

    ctx->pc = 0x201798u;

    // 0x201798: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x201798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20179c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x20179cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2017a0: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x2017a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x2017a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2017a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2017a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2017a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2017ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2017acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2017b0: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2017B0u;
    {
        const bool branch_taken_0x2017b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2017b0) {
            ctx->pc = 0x2017B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2017B0u;
            // 0x2017b4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2017C8u;
            goto label_2017c8;
        }
    }
    ctx->pc = 0x2017B8u;
    // 0x2017b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2017b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2017bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2017bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2017c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2017C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2017C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017C0u;
        // 0x2017c4: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2017C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2017C8u;
label_2017c8:
    // 0x2017c8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2017c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2017cc: 0x0  nop
    ctx->pc = 0x2017ccu;
    // NOP
label_2017d0:
    // 0x2017d0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2017D0u;
    {
        const bool branch_taken_0x2017d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2017d0) {
            ctx->pc = 0x2017D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2017D0u;
            // 0x2017d4: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2017ECu;
            goto label_2017ec;
        }
    }
    ctx->pc = 0x2017D8u;
    // 0x2017d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2017d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2017dc: 0x0  nop
    ctx->pc = 0x2017dcu;
    // NOP
    // 0x2017e0: 0x5444fffb  bnel        $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2017E0u;
    {
        const bool branch_taken_0x2017e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2017e0) {
            ctx->pc = 0x2017E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2017E0u;
            // 0x2017e4: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2017D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2017d0;
        }
    }
    ctx->pc = 0x2017E8u;
    // 0x2017e8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2017e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_2017ec:
    // 0x2017ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2017ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2017F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017ECu;
        // 0x2017f0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2017ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2017F4u;
    // 0x2017f4: 0x0  nop
    ctx->pc = 0x2017f4u;
    // NOP
    ctx->pc = 0x2017f8u;
}
