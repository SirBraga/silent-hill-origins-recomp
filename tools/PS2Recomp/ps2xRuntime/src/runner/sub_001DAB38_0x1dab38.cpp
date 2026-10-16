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

// Function: sub_001DAB38
// Address: 0x1dab38 - 0x1dabc8
void sub_001DAB38_0x1dab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAB38_0x1dab38");
#endif

    switch (ctx->pc) {
        case 0x1dab68u: goto label_1dab68;
        case 0x1dab7cu: goto label_1dab7c;
        case 0x1dab88u: goto label_1dab88;
        case 0x1dab90u: goto label_1dab90;
        case 0x1dab98u: goto label_1dab98;
        case 0x1daba8u: goto label_1daba8;
        case 0x1dabb0u: goto label_1dabb0;
        default: break;
    }

    ctx->pc = 0x1dab38u;

    // 0x1dab38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dab38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dab3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dab40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dab44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dab44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dab4c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1dab4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1dab50: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DAB50u;
    {
        const bool branch_taken_0x1dab50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB50u;
        // 0x1dab54: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab50) {
            ctx->pc = 0x1DAB90u;
            goto label_1dab90;
        }
    }
    ctx->pc = 0x1DAB58u;
    // 0x1dab58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dab58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab5c: 0x24a5aa88  addiu       $a1, $a1, -0x5578
    ctx->pc = 0x1dab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945416));
    // 0x1dab60: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1DAB60u;
    SET_GPR_U32(ctx, 31, 0x1DAB68u);
    ctx->pc = 0x1DAB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB60u;
    // 0x1dab64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2266F0u, 0x1DAB60u, 0x1DAB68u)) {
        return;
    }
    ctx->pc = 0x1DAB68u;
label_1dab68:
    // 0x1dab68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1dab68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dab6c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAB6Cu;
    {
        const bool branch_taken_0x1dab6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dab6c) {
            ctx->pc = 0x1DAB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAB6Cu;
            // 0x1dab70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAB80u;
            goto label_1dab80;
        }
    }
    ctx->pc = 0x1DAB74u;
    // 0x1dab74: 0xc08999a  jal         func_226668
    ctx->pc = 0x1DAB74u;
    SET_GPR_U32(ctx, 31, 0x1DAB7Cu);
    ctx->pc = 0x1DAB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB74u;
    // 0x1dab78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226668u, 0x1DAB74u, 0x1DAB7Cu)) {
        return;
    }
    ctx->pc = 0x1DAB7Cu;
label_1dab7c:
    // 0x1dab7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dab7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dab80:
    // 0x1dab80: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1DAB80u;
    SET_GPR_U32(ctx, 31, 0x1DAB88u);
    ctx->pc = 0x1DAB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB80u;
    // 0x1dab84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1DAB80u, 0x1DAB88u)) {
        return;
    }
    ctx->pc = 0x1DAB88u;
label_1dab88:
    // 0x1dab88: 0xc076a96  jal         func_1DAA58
    ctx->pc = 0x1DAB88u;
    SET_GPR_U32(ctx, 31, 0x1DAB90u);
    ctx->pc = 0x1DAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB88u;
    // 0x1dab8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DAA58u, 0x1DAB88u, 0x1DAB90u)) {
        return;
    }
    ctx->pc = 0x1DAB90u;
label_1dab90:
    // 0x1dab90: 0xc097a3e  jal         func_25E8F8
    ctx->pc = 0x1DAB90u;
    SET_GPR_U32(ctx, 31, 0x1DAB98u);
    ctx->pc = 0x1DAB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB90u;
    // 0x1dab94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E8F8u, 0x1DAB90u, 0x1DAB98u)) {
        return;
    }
    ctx->pc = 0x1DAB98u;
label_1dab98:
    // 0x1dab98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAB98u;
    {
        const bool branch_taken_0x1dab98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB98u;
        // 0x1dab9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab98) {
            ctx->pc = 0x1DABA8u;
            goto label_1daba8;
        }
    }
    ctx->pc = 0x1DABA0u;
    // 0x1daba0: 0xc097a26  jal         func_25E898
    ctx->pc = 0x1DABA0u;
    SET_GPR_U32(ctx, 31, 0x1DABA8u);
    ctx->pc = 0x1DABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DABA0u;
    // 0x1daba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x1DABA0u, 0x1DABA8u)) {
        return;
    }
    ctx->pc = 0x1DABA8u;
label_1daba8:
    // 0x1daba8: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x1DABA8u;
    SET_GPR_U32(ctx, 31, 0x1DABB0u);
    ctx->pc = 0x1DABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DABA8u;
    // 0x1dabac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x1DABA8u, 0x1DABB0u)) {
        return;
    }
    ctx->pc = 0x1DABB0u;
label_1dabb0:
    // 0x1dabb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dabb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dabb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dabb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dabb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dabb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dabbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABBCu;
        // 0x1dabc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DABBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DABC4u;
    // 0x1dabc4: 0x0  nop
    ctx->pc = 0x1dabc4u;
    // NOP
    ctx->pc = 0x1dabc8u;
}
