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

// Function: sub_0027D6D8
// Address: 0x27d6d8 - 0x27d720
void sub_0027D6D8_0x27d6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D6D8_0x27d6d8");
#endif

    ctx->pc = 0x27d6d8u;

    // 0x27d6d8: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x27d6d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x27d6dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27d6e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27d6e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27d6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27d6e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D6E8u;
    {
        const bool branch_taken_0x27d6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6E8u;
        // 0x27d6ec: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6e8) {
            ctx->pc = 0x27D6FCu;
            goto label_27d6fc;
        }
    }
    ctx->pc = 0x27D6F0u;
    // 0x27d6f0: 0x9482001c  lhu         $v0, 0x1C($a0)
    ctx->pc = 0x27d6f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x27d6f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x27d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27d6f8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27d6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27d6fc:
    // 0x27d6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x27D6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6FCu;
        // 0x27d700: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D704u;
    // 0x27d704: 0x0  nop
    ctx->pc = 0x27d704u;
    // NOP
    // 0x27d708: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x27d708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x27d70c: 0x0  nop
    ctx->pc = 0x27d70cu;
    // NOP
    // 0x27d710: 0x27bd01f0  addiu       $sp, $sp, 0x1F0
    ctx->pc = 0x27d710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x27d714: 0x0  nop
    ctx->pc = 0x27d714u;
    // NOP
    // 0x27d718: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27d718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d71c: 0x0  nop
    ctx->pc = 0x27d71cu;
    // NOP
    ctx->pc = 0x27d720u;
}
