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

// Function: sub_0018BFA8
// Address: 0x18bfa8 - 0x18bff0
void sub_0018BFA8_0x18bfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BFA8_0x18bfa8");
#endif

    switch (ctx->pc) {
        case 0x18bfc4u: goto label_18bfc4;
        case 0x18bfd0u: goto label_18bfd0;
        default: break;
    }

    ctx->pc = 0x18bfa8u;

    // 0x18bfa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18bfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18bfac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bfb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18bfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18bfb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18bfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18bfbc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x18BFBCu;
    SET_GPR_U32(ctx, 31, 0x18BFC4u);
    ctx->pc = 0x18BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFBCu;
    // 0x18bfc0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x18BFBCu, 0x18BFC4u)) {
        return;
    }
    ctx->pc = 0x18BFC4u;
label_18bfc4:
    // 0x18bfc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfc8: 0xc062ffc  jal         func_18BFF0
    ctx->pc = 0x18BFC8u;
    SET_GPR_U32(ctx, 31, 0x18BFD0u);
    ctx->pc = 0x18BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFC8u;
    // 0x18bfcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BFF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18BFF0u, 0x18BFC8u, 0x18BFD0u)) {
        return;
    }
    ctx->pc = 0x18BFD0u;
label_18bfd0:
    // 0x18bfd0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x18bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18bfd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18bfd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bfd8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x18bfd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x18bfdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bfe0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18bfe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x18BFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFE4u;
        // 0x18bfe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BFECu;
    // 0x18bfec: 0x0  nop
    ctx->pc = 0x18bfecu;
    // NOP
    ctx->pc = 0x18bff0u;
}
