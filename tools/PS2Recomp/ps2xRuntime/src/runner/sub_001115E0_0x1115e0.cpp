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

// Function: sub_001115E0
// Address: 0x1115e0 - 0x111630
void sub_001115E0_0x1115e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001115E0_0x1115e0");
#endif

    switch (ctx->pc) {
        case 0x1115fcu: goto label_1115fc;
        case 0x111608u: goto label_111608;
        default: break;
    }

    ctx->pc = 0x1115e0u;

    // 0x1115e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1115e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1115e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1115e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1115e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1115e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1115ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1115ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1115f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1115f4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1115F4u;
    SET_GPR_U32(ctx, 31, 0x1115FCu);
    ctx->pc = 0x1115F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115F4u;
    // 0x1115f8: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1115F4u, 0x1115FCu)) {
        return;
    }
    ctx->pc = 0x1115FCu;
label_1115fc:
    // 0x1115fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1115fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111600: 0xc043f56  jal         func_10FD58
    ctx->pc = 0x111600u;
    SET_GPR_U32(ctx, 31, 0x111608u);
    ctx->pc = 0x111604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111600u;
    // 0x111604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10FD58u, 0x111600u, 0x111608u)) {
        return;
    }
    ctx->pc = 0x111608u;
label_111608:
    // 0x111608: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x111608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11160c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11160cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111610: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x111610u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x111614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111618: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x111618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11161c: 0x3e00008  jr          $ra
    ctx->pc = 0x11161Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11161Cu;
        // 0x111620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11161Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111624u;
    // 0x111624: 0x0  nop
    ctx->pc = 0x111624u;
    // NOP
    // 0x111628: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x111628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11162c: 0x0  nop
    ctx->pc = 0x11162cu;
    // NOP
    ctx->pc = 0x111630u;
}
