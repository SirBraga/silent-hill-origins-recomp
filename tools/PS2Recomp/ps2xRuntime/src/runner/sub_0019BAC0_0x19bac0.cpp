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

// Function: sub_0019BAC0
// Address: 0x19bac0 - 0x19bb08
void sub_0019BAC0_0x19bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BAC0_0x19bac0");
#endif

    switch (ctx->pc) {
        case 0x19badcu: goto label_19badc;
        case 0x19bae8u: goto label_19bae8;
        default: break;
    }

    ctx->pc = 0x19bac0u;

    // 0x19bac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bac4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19bac8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19bacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19baccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bad4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19BAD4u;
    SET_GPR_U32(ctx, 31, 0x19BADCu);
    ctx->pc = 0x19BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BAD4u;
    // 0x19bad8: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19BAD4u, 0x19BADCu)) {
        return;
    }
    ctx->pc = 0x19BADCu;
label_19badc:
    // 0x19badc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19badcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bae0: 0xc066c2a  jal         func_19B0A8
    ctx->pc = 0x19BAE0u;
    SET_GPR_U32(ctx, 31, 0x19BAE8u);
    ctx->pc = 0x19BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BAE0u;
    // 0x19bae4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19B0A8u, 0x19BAE0u, 0x19BAE8u)) {
        return;
    }
    ctx->pc = 0x19BAE8u;
label_19bae8:
    // 0x19bae8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x19bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19baec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19baecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19baf0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x19baf0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x19baf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19baf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19baf8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19baf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bafc: 0x3e00008  jr          $ra
    ctx->pc = 0x19BAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAFCu;
        // 0x19bb00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BB04u;
    // 0x19bb04: 0x0  nop
    ctx->pc = 0x19bb04u;
    // NOP
    ctx->pc = 0x19bb08u;
}
