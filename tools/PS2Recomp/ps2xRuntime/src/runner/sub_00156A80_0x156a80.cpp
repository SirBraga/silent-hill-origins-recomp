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

// Function: sub_00156A80
// Address: 0x156a80 - 0x156ac8
void sub_00156A80_0x156a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156A80_0x156a80");
#endif

    switch (ctx->pc) {
        case 0x156a9cu: goto label_156a9c;
        case 0x156aa8u: goto label_156aa8;
        default: break;
    }

    ctx->pc = 0x156a80u;

    // 0x156a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156a84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x156a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156a88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x156a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156a94: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x156A94u;
    SET_GPR_U32(ctx, 31, 0x156A9Cu);
    ctx->pc = 0x156A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156A94u;
    // 0x156a98: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x156A94u, 0x156A9Cu)) {
        return;
    }
    ctx->pc = 0x156A9Cu;
label_156a9c:
    // 0x156a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156aa0: 0xc055ab2  jal         func_156AC8
    ctx->pc = 0x156AA0u;
    SET_GPR_U32(ctx, 31, 0x156AA8u);
    ctx->pc = 0x156AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156AA0u;
    // 0x156aa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156AC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156AC8u, 0x156AA0u, 0x156AA8u)) {
        return;
    }
    ctx->pc = 0x156AA8u;
label_156aa8:
    // 0x156aa8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x156aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x156aac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x156aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156ab0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x156ab0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x156ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156ab8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x156ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156abc: 0x3e00008  jr          $ra
    ctx->pc = 0x156ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156ABCu;
        // 0x156ac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156AC4u;
    // 0x156ac4: 0x0  nop
    ctx->pc = 0x156ac4u;
    // NOP
    ctx->pc = 0x156ac8u;
}
