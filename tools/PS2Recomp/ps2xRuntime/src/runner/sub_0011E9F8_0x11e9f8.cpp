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

// Function: sub_0011E9F8
// Address: 0x11e9f8 - 0x11ea40
void sub_0011E9F8_0x11e9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E9F8_0x11e9f8");
#endif

    switch (ctx->pc) {
        case 0x11ea14u: goto label_11ea14;
        case 0x11ea20u: goto label_11ea20;
        default: break;
    }

    ctx->pc = 0x11e9f8u;

    // 0x11e9f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e9fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ea00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11ea00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11ea04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ea04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ea08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ea0c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x11EA0Cu;
    SET_GPR_U32(ctx, 31, 0x11EA14u);
    ctx->pc = 0x11EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA0Cu;
    // 0x11ea10: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x11EA0Cu, 0x11EA14u)) {
        return;
    }
    ctx->pc = 0x11EA14u;
label_11ea14:
    // 0x11ea14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ea14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea18: 0xc047676  jal         func_11D9D8
    ctx->pc = 0x11EA18u;
    SET_GPR_U32(ctx, 31, 0x11EA20u);
    ctx->pc = 0x11EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA18u;
    // 0x11ea1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D9D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11D9D8u, 0x11EA18u, 0x11EA20u)) {
        return;
    }
    ctx->pc = 0x11EA20u;
label_11ea20:
    // 0x11ea20: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x11ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11ea24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11ea24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ea28: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x11ea28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x11ea2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ea2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ea30: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11ea30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea34: 0x3e00008  jr          $ra
    ctx->pc = 0x11EA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA34u;
        // 0x11ea38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EA3Cu;
    // 0x11ea3c: 0x0  nop
    ctx->pc = 0x11ea3cu;
    // NOP
    ctx->pc = 0x11ea40u;
}
