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

// Function: sub_0016A618
// Address: 0x16a618 - 0x16a660
void sub_0016A618_0x16a618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A618_0x16a618");
#endif

    switch (ctx->pc) {
        case 0x16a634u: goto label_16a634;
        case 0x16a640u: goto label_16a640;
        default: break;
    }

    ctx->pc = 0x16a618u;

    // 0x16a618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a61c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a620: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a62c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16A62Cu;
    SET_GPR_U32(ctx, 31, 0x16A634u);
    ctx->pc = 0x16A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A62Cu;
    // 0x16a630: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16A62Cu, 0x16A634u)) {
        return;
    }
    ctx->pc = 0x16A634u;
label_16a634:
    // 0x16a634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a638: 0xc05a998  jal         func_16A660
    ctx->pc = 0x16A638u;
    SET_GPR_U32(ctx, 31, 0x16A640u);
    ctx->pc = 0x16A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A638u;
    // 0x16a63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A660u, 0x16A638u, 0x16A640u)) {
        return;
    }
    ctx->pc = 0x16A640u;
label_16a640:
    // 0x16a640: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16a640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16a644: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a648: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16a648u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16a64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a650: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16a650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a654: 0x3e00008  jr          $ra
    ctx->pc = 0x16A654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A654u;
        // 0x16a658: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A65Cu;
    // 0x16a65c: 0x0  nop
    ctx->pc = 0x16a65cu;
    // NOP
    ctx->pc = 0x16a660u;
}
