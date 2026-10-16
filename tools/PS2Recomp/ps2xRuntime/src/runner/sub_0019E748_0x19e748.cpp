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

// Function: sub_0019E748
// Address: 0x19e748 - 0x19e7b8
void sub_0019E748_0x19e748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E748_0x19e748");
#endif

    switch (ctx->pc) {
        case 0x19e768u: goto label_19e768;
        case 0x19e774u: goto label_19e774;
        case 0x19e784u: goto label_19e784;
        case 0x19e790u: goto label_19e790;
        default: break;
    }

    ctx->pc = 0x19e748u;

    // 0x19e748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e74c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e754: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19e754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19e758: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e75c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e760: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19E760u;
    SET_GPR_U32(ctx, 31, 0x19E768u);
    ctx->pc = 0x19E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E760u;
    // 0x19e764: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19E760u, 0x19E768u)) {
        return;
    }
    ctx->pc = 0x19E768u;
label_19e768:
    // 0x19e768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e76c: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19E76Cu;
    SET_GPR_U32(ctx, 31, 0x19E774u);
    ctx->pc = 0x19E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E76Cu;
    // 0x19e770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19E76Cu, 0x19E774u)) {
        return;
    }
    ctx->pc = 0x19E774u;
label_19e774:
    // 0x19e774: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19e774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19e778: 0x2463a888  addiu       $v1, $v1, -0x5778
    ctx->pc = 0x19e778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944904));
    // 0x19e77c: 0xc0776d8  jal         func_1DDB60
    ctx->pc = 0x19E77Cu;
    SET_GPR_U32(ctx, 31, 0x19E784u);
    ctx->pc = 0x19E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E77Cu;
    // 0x19e780: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DDB60u, 0x19E77Cu, 0x19E784u)) {
        return;
    }
    ctx->pc = 0x19E784u;
label_19e784:
    // 0x19e784: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e788: 0xc0bb926  jal         func_2EE498
    ctx->pc = 0x19E788u;
    SET_GPR_U32(ctx, 31, 0x19E790u);
    ctx->pc = 0x19E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E788u;
    // 0x19e78c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE498u, 0x19E788u, 0x19E790u)) {
        return;
    }
    ctx->pc = 0x19E790u;
label_19e790:
    // 0x19e790: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19e790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19e794: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e79c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x19E7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7A4u;
        // 0x19e7a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E7ACu;
    // 0x19e7ac: 0x0  nop
    ctx->pc = 0x19e7acu;
    // NOP
    // 0x19e7b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e7b4: 0x0  nop
    ctx->pc = 0x19e7b4u;
    // NOP
    ctx->pc = 0x19e7b8u;
}
