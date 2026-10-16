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

// Function: sub_0019E828
// Address: 0x19e828 - 0x19e898
void sub_0019E828_0x19e828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E828_0x19e828");
#endif

    switch (ctx->pc) {
        case 0x19e848u: goto label_19e848;
        case 0x19e854u: goto label_19e854;
        case 0x19e864u: goto label_19e864;
        case 0x19e870u: goto label_19e870;
        default: break;
    }

    ctx->pc = 0x19e828u;

    // 0x19e828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e82c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e834: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19e834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19e838: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e83c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e840: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19E840u;
    SET_GPR_U32(ctx, 31, 0x19E848u);
    ctx->pc = 0x19E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E840u;
    // 0x19e844: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19E840u, 0x19E848u)) {
        return;
    }
    ctx->pc = 0x19E848u;
label_19e848:
    // 0x19e848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e84c: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19E84Cu;
    SET_GPR_U32(ctx, 31, 0x19E854u);
    ctx->pc = 0x19E850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E84Cu;
    // 0x19e850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19E84Cu, 0x19E854u)) {
        return;
    }
    ctx->pc = 0x19E854u;
label_19e854:
    // 0x19e854: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19e854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19e858: 0x2463a838  addiu       $v1, $v1, -0x57C8
    ctx->pc = 0x19e858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944824));
    // 0x19e85c: 0xc07b834  jal         func_1EE0D0
    ctx->pc = 0x19E85Cu;
    SET_GPR_U32(ctx, 31, 0x19E864u);
    ctx->pc = 0x19E860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E85Cu;
    // 0x19e860: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EE0D0u, 0x19E85Cu, 0x19E864u)) {
        return;
    }
    ctx->pc = 0x19E864u;
label_19e864:
    // 0x19e864: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e868: 0xc0bb926  jal         func_2EE498
    ctx->pc = 0x19E868u;
    SET_GPR_U32(ctx, 31, 0x19E870u);
    ctx->pc = 0x19E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E868u;
    // 0x19e86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE498u, 0x19E868u, 0x19E870u)) {
        return;
    }
    ctx->pc = 0x19E870u;
label_19e870:
    // 0x19e870: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19e870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19e874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e87c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e884: 0x3e00008  jr          $ra
    ctx->pc = 0x19E884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E884u;
        // 0x19e888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E88Cu;
    // 0x19e88c: 0x0  nop
    ctx->pc = 0x19e88cu;
    // NOP
    // 0x19e890: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19e894: 0x0  nop
    ctx->pc = 0x19e894u;
    // NOP
    ctx->pc = 0x19e898u;
}
