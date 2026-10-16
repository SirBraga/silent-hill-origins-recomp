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

// Function: sub_001F9A70
// Address: 0x1f9a70 - 0x1f9ac0
void sub_001F9A70_0x1f9a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9A70_0x1f9a70");
#endif

    switch (ctx->pc) {
        case 0x1f9a94u: goto label_1f9a94;
        case 0x1f9aacu: goto label_1f9aac;
        default: break;
    }

    ctx->pc = 0x1f9a70u;

    // 0x1f9a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9a74: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1f9a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1f9a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9a7c: 0x8c625490  lw          $v0, 0x5490($v1)
    ctx->pc = 0x1f9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735490u));
    // 0x1f9a80: 0x24705490  addiu       $s0, $v1, 0x5490
    ctx->pc = 0x1f9a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21648));
    // 0x1f9a84: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9A84u;
    {
        const bool branch_taken_0x1f9a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A84u;
        // 0x1f9a88: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a84) {
            ctx->pc = 0x1F9AACu;
            goto label_1f9aac;
        }
    }
    ctx->pc = 0x1F9A8Cu;
    // 0x1f9a8c: 0xc07e6c2  jal         func_1F9B08
    ctx->pc = 0x1F9A8Cu;
    SET_GPR_U32(ctx, 31, 0x1F9A94u);
    ctx->pc = 0x1F9B08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B08u, 0x1F9A8Cu, 0x1F9A94u)) {
        return;
    }
    ctx->pc = 0x1F9A94u;
label_1f9a94:
    // 0x1f9a94: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f9a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f9a98: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1f9a98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1f9a9c: 0x24a52d10  addiu       $a1, $a1, 0x2D10
    ctx->pc = 0x1f9a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
    // 0x1f9aa0: 0x24c64148  addiu       $a2, $a2, 0x4148
    ctx->pc = 0x1f9aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16712));
    // 0x1f9aa4: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1F9AA4u;
    SET_GPR_U32(ctx, 31, 0x1F9AACu);
    ctx->pc = 0x1F9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9AA4u;
    // 0x1f9aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1F9AA4u, 0x1F9AACu)) {
        return;
    }
    ctx->pc = 0x1F9AACu;
label_1f9aac:
    // 0x1f9aac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f9aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AB8u;
        // 0x1f9abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9AC0u;
}
