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

// Function: sub_001536E8
// Address: 0x1536e8 - 0x153738
void sub_001536E8_0x1536e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001536E8_0x1536e8");
#endif

    switch (ctx->pc) {
        case 0x153704u: goto label_153704;
        case 0x153710u: goto label_153710;
        default: break;
    }

    ctx->pc = 0x1536e8u;

    // 0x1536e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1536e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1536ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1536ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1536f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1536f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1536f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1536f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1536f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1536f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1536fc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1536FCu;
    SET_GPR_U32(ctx, 31, 0x153704u);
    ctx->pc = 0x153700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536FCu;
    // 0x153700: 0x240400cc  addiu       $a0, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1536FCu, 0x153704u)) {
        return;
    }
    ctx->pc = 0x153704u;
label_153704:
    // 0x153704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x153704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153708: 0xc054de8  jal         func_1537A0
    ctx->pc = 0x153708u;
    SET_GPR_U32(ctx, 31, 0x153710u);
    ctx->pc = 0x15370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153708u;
    // 0x15370c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1537A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1537A0u, 0x153708u, 0x153710u)) {
        return;
    }
    ctx->pc = 0x153710u;
label_153710:
    // 0x153710: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x153710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x153714: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x153714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153718: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x153718u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x15371c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15371cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153720: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x153720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153724: 0x3e00008  jr          $ra
    ctx->pc = 0x153724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153724u;
        // 0x153728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15372Cu;
    // 0x15372c: 0x0  nop
    ctx->pc = 0x15372cu;
    // NOP
    // 0x153730: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x153730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x153734: 0x0  nop
    ctx->pc = 0x153734u;
    // NOP
    ctx->pc = 0x153738u;
}
