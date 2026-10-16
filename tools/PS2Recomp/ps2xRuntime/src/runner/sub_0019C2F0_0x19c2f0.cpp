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

// Function: sub_0019C2F0
// Address: 0x19c2f0 - 0x19c338
void sub_0019C2F0_0x19c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C2F0_0x19c2f0");
#endif

    switch (ctx->pc) {
        case 0x19c30cu: goto label_19c30c;
        case 0x19c318u: goto label_19c318;
        default: break;
    }

    ctx->pc = 0x19c2f0u;

    // 0x19c2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c2f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c2f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c304: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19C304u;
    SET_GPR_U32(ctx, 31, 0x19C30Cu);
    ctx->pc = 0x19C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C304u;
    // 0x19c308: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19C304u, 0x19C30Cu)) {
        return;
    }
    ctx->pc = 0x19C30Cu;
label_19c30c:
    // 0x19c30c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c310: 0xc0670ce  jal         func_19C338
    ctx->pc = 0x19C310u;
    SET_GPR_U32(ctx, 31, 0x19C318u);
    ctx->pc = 0x19C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C310u;
    // 0x19c314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C338u, 0x19C310u, 0x19C318u)) {
        return;
    }
    ctx->pc = 0x19C318u;
label_19c318:
    // 0x19c318: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x19c318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19c31c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c320: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x19c320u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x19c324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c328: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19c328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c32c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C32Cu;
        // 0x19c330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C334u;
    // 0x19c334: 0x0  nop
    ctx->pc = 0x19c334u;
    // NOP
    ctx->pc = 0x19c338u;
}
