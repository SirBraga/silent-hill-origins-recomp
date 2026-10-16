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

// Function: sub_00146730
// Address: 0x146730 - 0x146780
void sub_00146730_0x146730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146730_0x146730");
#endif

    switch (ctx->pc) {
        case 0x14674cu: goto label_14674c;
        case 0x146758u: goto label_146758;
        default: break;
    }

    ctx->pc = 0x146730u;

    // 0x146730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146734: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x146734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146738: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14673c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14673cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146744: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x146744u;
    SET_GPR_U32(ctx, 31, 0x14674Cu);
    ctx->pc = 0x146748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146744u;
    // 0x146748: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x146744u, 0x14674Cu)) {
        return;
    }
    ctx->pc = 0x14674Cu;
label_14674c:
    // 0x14674c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14674cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146750: 0xc05084c  jal         func_142130
    ctx->pc = 0x146750u;
    SET_GPR_U32(ctx, 31, 0x146758u);
    ctx->pc = 0x146754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146750u;
    // 0x146754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x142130u, 0x146750u, 0x146758u)) {
        return;
    }
    ctx->pc = 0x146758u;
label_146758:
    // 0x146758: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x146758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14675c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14675cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146760: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x146760u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x146764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146768: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x146768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14676c: 0x3e00008  jr          $ra
    ctx->pc = 0x14676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14676Cu;
        // 0x146770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146774u;
    // 0x146774: 0x0  nop
    ctx->pc = 0x146774u;
    // NOP
    // 0x146778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14677c: 0x0  nop
    ctx->pc = 0x14677cu;
    // NOP
    ctx->pc = 0x146780u;
}
