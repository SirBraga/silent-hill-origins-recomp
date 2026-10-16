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

// Function: sub_0010F0B8
// Address: 0x10f0b8 - 0x10f100
void sub_0010F0B8_0x10f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F0B8_0x10f0b8");
#endif

    switch (ctx->pc) {
        case 0x10f0f0u: goto label_10f0f0;
        default: break;
    }

    ctx->pc = 0x10f0b8u;

    // 0x10f0b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f0bc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x10f0bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0c0: 0x2cc20022  sltiu       $v0, $a2, 0x22
    ctx->pc = 0x10f0c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x10f0c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10F0C4u;
    {
        const bool branch_taken_0x10f0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0C4u;
        // 0x10f0c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0c4) {
            ctx->pc = 0x10F0F0u;
            goto label_10f0f0;
        }
    }
    ctx->pc = 0x10F0CCu;
    // 0x10f0cc: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x10f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x10f0d0: 0x24640044  addiu       $a0, $v1, 0x44
    ctx->pc = 0x10f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x10f0d4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x10f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10f0d8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10f0d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10f0dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10f0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10f0e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10f0e8: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x10F0E8u;
    SET_GPR_U32(ctx, 31, 0x10F0F0u);
    ctx->pc = 0x10F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0E8u;
    // 0x10f0ec: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x10F0E8u, 0x10F0F0u)) {
        return;
    }
    ctx->pc = 0x10F0F0u;
label_10f0f0:
    // 0x10f0f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x10F0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0F4u;
        // 0x10f0f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F0FCu;
    // 0x10f0fc: 0x0  nop
    ctx->pc = 0x10f0fcu;
    // NOP
    ctx->pc = 0x10f100u;
}
