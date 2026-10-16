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

// Function: sub_002626D8
// Address: 0x2626d8 - 0x262748
void sub_002626D8_0x2626d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002626D8_0x2626d8");
#endif

    switch (ctx->pc) {
        case 0x262714u: goto label_262714;
        case 0x262724u: goto label_262724;
        default: break;
    }

    ctx->pc = 0x2626d8u;

    // 0x2626d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2626d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2626dc: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x2626dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x2626e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2626e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2626e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2626e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2626e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2626e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2626ec: 0x8ca30fcc  lw          $v1, 0xFCC($a1)
    ctx->pc = 0x2626ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x730FCCu));
    // 0x2626f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2626f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2626f4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2626f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2626f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2626F8u;
    {
        const bool branch_taken_0x2626f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2626FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626F8u;
        // 0x2626fc: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626f8) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x262700u;
    // 0x262700: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x262700u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x262704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262708: 0x26102460  addiu       $s0, $s0, 0x2460
    ctx->pc = 0x262708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9312));
    // 0x26270c: 0xc09703c  jal         func_25C0F0
    ctx->pc = 0x26270Cu;
    SET_GPR_U32(ctx, 31, 0x262714u);
    ctx->pc = 0x262710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26270Cu;
    // 0x262710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C0F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C0F0u, 0x26270Cu, 0x262714u)) {
        return;
    }
    ctx->pc = 0x262714u;
label_262714:
    // 0x262714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262718: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x262718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26271c: 0xc09705c  jal         func_25C170
    ctx->pc = 0x26271Cu;
    SET_GPR_U32(ctx, 31, 0x262724u);
    ctx->pc = 0x262720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26271Cu;
    // 0x262720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C170u, 0x26271Cu, 0x262724u)) {
        return;
    }
    ctx->pc = 0x262724u;
label_262724:
    // 0x262724: 0x0  nop
    ctx->pc = 0x262724u;
    // NOP
label_262728:
    // 0x262728: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x262728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26272c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26272cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262734: 0x3e00008  jr          $ra
    ctx->pc = 0x262734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262734u;
        // 0x262738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26273Cu;
    // 0x26273c: 0x0  nop
    ctx->pc = 0x26273cu;
    // NOP
    // 0x262740: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x262740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262744: 0x0  nop
    ctx->pc = 0x262744u;
    // NOP
    ctx->pc = 0x262748u;
}
