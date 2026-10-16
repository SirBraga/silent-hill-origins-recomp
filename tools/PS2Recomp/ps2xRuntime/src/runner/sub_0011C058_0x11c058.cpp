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

// Function: sub_0011C058
// Address: 0x11c058 - 0x11c0a0
void sub_0011C058_0x11c058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C058_0x11c058");
#endif

    switch (ctx->pc) {
        case 0x11c074u: goto label_11c074;
        case 0x11c080u: goto label_11c080;
        default: break;
    }

    ctx->pc = 0x11c058u;

    // 0x11c058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c05c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11c05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c060: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11c060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11c064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c06c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x11C06Cu;
    SET_GPR_U32(ctx, 31, 0x11C074u);
    ctx->pc = 0x11C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C06Cu;
    // 0x11c070: 0x2404009c  addiu       $a0, $zero, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x11C06Cu, 0x11C074u)) {
        return;
    }
    ctx->pc = 0x11C074u;
label_11c074:
    // 0x11c074: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c078: 0xc047028  jal         func_11C0A0
    ctx->pc = 0x11C078u;
    SET_GPR_U32(ctx, 31, 0x11C080u);
    ctx->pc = 0x11C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C078u;
    // 0x11c07c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C0A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11C0A0u, 0x11C078u, 0x11C080u)) {
        return;
    }
    ctx->pc = 0x11C080u;
label_11c080:
    // 0x11c080: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x11c080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11c084: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11c084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c088: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x11c088u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x11c08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c090: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11c090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c094: 0x3e00008  jr          $ra
    ctx->pc = 0x11C094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C094u;
        // 0x11c098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C09Cu;
    // 0x11c09c: 0x0  nop
    ctx->pc = 0x11c09cu;
    // NOP
    ctx->pc = 0x11c0a0u;
}
