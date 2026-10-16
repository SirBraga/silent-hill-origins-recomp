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

// Function: sub_00194CE0
// Address: 0x194ce0 - 0x194d28
void sub_00194CE0_0x194ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194CE0_0x194ce0");
#endif

    switch (ctx->pc) {
        case 0x194cfcu: goto label_194cfc;
        case 0x194d08u: goto label_194d08;
        default: break;
    }

    ctx->pc = 0x194ce0u;

    // 0x194ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194ce4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x194ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194ce8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x194cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194cf4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x194CF4u;
    SET_GPR_U32(ctx, 31, 0x194CFCu);
    ctx->pc = 0x194CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CF4u;
    // 0x194cf8: 0x24040138  addiu       $a0, $zero, 0x138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x194CF4u, 0x194CFCu)) {
        return;
    }
    ctx->pc = 0x194CFCu;
label_194cfc:
    // 0x194cfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d00: 0xc06515a  jal         func_194568
    ctx->pc = 0x194D00u;
    SET_GPR_U32(ctx, 31, 0x194D08u);
    ctx->pc = 0x194D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D00u;
    // 0x194d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x194568u, 0x194D00u, 0x194D08u)) {
        return;
    }
    ctx->pc = 0x194D08u;
label_194d08:
    // 0x194d08: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x194d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x194d0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x194d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194d10: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x194d10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x194d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194d18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x194d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x194D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D1Cu;
        // 0x194d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194D24u;
    // 0x194d24: 0x0  nop
    ctx->pc = 0x194d24u;
    // NOP
    ctx->pc = 0x194d28u;
}
