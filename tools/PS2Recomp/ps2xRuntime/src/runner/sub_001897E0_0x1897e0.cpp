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

// Function: sub_001897E0
// Address: 0x1897e0 - 0x189828
void sub_001897E0_0x1897e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001897E0_0x1897e0");
#endif

    switch (ctx->pc) {
        case 0x1897fcu: goto label_1897fc;
        case 0x189808u: goto label_189808;
        default: break;
    }

    ctx->pc = 0x1897e0u;

    // 0x1897e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1897e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1897e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1897e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1897e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1897e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1897ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1897ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1897f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1897f4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1897F4u;
    SET_GPR_U32(ctx, 31, 0x1897FCu);
    ctx->pc = 0x1897F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1897F4u;
    // 0x1897f8: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1897F4u, 0x1897FCu)) {
        return;
    }
    ctx->pc = 0x1897FCu;
label_1897fc:
    // 0x1897fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1897fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189800: 0xc06260a  jal         func_189828
    ctx->pc = 0x189800u;
    SET_GPR_U32(ctx, 31, 0x189808u);
    ctx->pc = 0x189804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189800u;
    // 0x189804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189828u, 0x189800u, 0x189808u)) {
        return;
    }
    ctx->pc = 0x189808u;
label_189808:
    // 0x189808: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x189808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18980c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18980cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189810: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x189810u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x189814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189818: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x189818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18981c: 0x3e00008  jr          $ra
    ctx->pc = 0x18981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18981Cu;
        // 0x189820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18981Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189824u;
    // 0x189824: 0x0  nop
    ctx->pc = 0x189824u;
    // NOP
    ctx->pc = 0x189828u;
}
