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

// Function: sub_0015A420
// Address: 0x15a420 - 0x15a468
void sub_0015A420_0x15a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A420_0x15a420");
#endif

    switch (ctx->pc) {
        case 0x15a43cu: goto label_15a43c;
        case 0x15a448u: goto label_15a448;
        default: break;
    }

    ctx->pc = 0x15a420u;

    // 0x15a420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a424: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15a424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a428: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15a428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15a42c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a434: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x15A434u;
    SET_GPR_U32(ctx, 31, 0x15A43Cu);
    ctx->pc = 0x15A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A434u;
    // 0x15a438: 0x240403a0  addiu       $a0, $zero, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x15A434u, 0x15A43Cu)) {
        return;
    }
    ctx->pc = 0x15A43Cu;
label_15a43c:
    // 0x15a43c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a440: 0xc056434  jal         func_1590D0
    ctx->pc = 0x15A440u;
    SET_GPR_U32(ctx, 31, 0x15A448u);
    ctx->pc = 0x15A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A440u;
    // 0x15a444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1590D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1590D0u, 0x15A440u, 0x15A448u)) {
        return;
    }
    ctx->pc = 0x15A448u;
label_15a448:
    // 0x15a448: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x15a448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15a44c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15a44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a450: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x15a450u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x15a454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a458: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x15a458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a45c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A45Cu;
        // 0x15a460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A464u;
    // 0x15a464: 0x0  nop
    ctx->pc = 0x15a464u;
    // NOP
    ctx->pc = 0x15a468u;
}
