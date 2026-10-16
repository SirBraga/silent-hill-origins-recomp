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

// Function: sub_002EB768
// Address: 0x2eb768 - 0x2eb7c8
void sub_002EB768_0x2eb768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB768_0x2eb768");
#endif

    switch (ctx->pc) {
        case 0x2eb780u: goto label_2eb780;
        case 0x2eb7a4u: goto label_2eb7a4;
        case 0x2eb7acu: goto label_2eb7ac;
        default: break;
    }

    ctx->pc = 0x2eb768u;

    // 0x2eb768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eb768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eb76c: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x2eb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
    // 0x2eb770: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EB770u;
    {
        const bool branch_taken_0x2eb770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB770u;
        // 0x2eb774: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb770) {
            ctx->pc = 0x2EB7B8u;
            goto label_2eb7b8;
        }
    }
    ctx->pc = 0x2EB778u;
    // 0x2eb778: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2EB778u;
    SET_GPR_U32(ctx, 31, 0x2EB780u);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2EB778u, 0x2EB780u)) {
        return;
    }
    ctx->pc = 0x2EB780u;
label_2eb780:
    // 0x2eb780: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2eb780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb784: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb78c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb790: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x2eb790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2eb794: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb798: 0x278a8ca8  addiu       $t2, $gp, -0x7358
    ctx->pc = 0x2eb798u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937768));
    // 0x2eb79c: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EB79Cu;
    SET_GPR_U32(ctx, 31, 0x2EB7A4u);
    ctx->pc = 0x2EB7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB79Cu;
    // 0x2eb7a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EB79Cu, 0x2EB7A4u)) {
        return;
    }
    ctx->pc = 0x2EB7A4u;
label_2eb7a4:
    // 0x2eb7a4: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2EB7A4u;
    SET_GPR_U32(ctx, 31, 0x2EB7ACu);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2EB7A4u, 0x2EB7ACu)) {
        return;
    }
    ctx->pc = 0x2EB7ACu;
label_2eb7ac:
    // 0x2eb7ac: 0x8f838ca8  lw          $v1, -0x7358($gp)
    ctx->pc = 0x2eb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
    // 0x2eb7b0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EB7B0u;
    {
        const bool branch_taken_0x2eb7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7B0u;
        // 0x2eb7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb7b0) {
            ctx->pc = 0x2EB7BCu;
            goto label_2eb7bc;
        }
    }
    ctx->pc = 0x2EB7B8u;
label_2eb7b8:
    // 0x2eb7b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eb7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb7bc:
    // 0x2eb7bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7C0u;
        // 0x2eb7c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB7C8u;
}
