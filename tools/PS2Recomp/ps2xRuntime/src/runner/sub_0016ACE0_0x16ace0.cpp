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

// Function: sub_0016ACE0
// Address: 0x16ace0 - 0x16ad28
void sub_0016ACE0_0x16ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ACE0_0x16ace0");
#endif

    switch (ctx->pc) {
        case 0x16acfcu: goto label_16acfc;
        case 0x16ad08u: goto label_16ad08;
        default: break;
    }

    ctx->pc = 0x16ace0u;

    // 0x16ace0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ace4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ace8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ace8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16acec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16acecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16acf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16acf4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16ACF4u;
    SET_GPR_U32(ctx, 31, 0x16ACFCu);
    ctx->pc = 0x16ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ACF4u;
    // 0x16acf8: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16ACF4u, 0x16ACFCu)) {
        return;
    }
    ctx->pc = 0x16ACFCu;
label_16acfc:
    // 0x16acfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16acfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad00: 0xc05ab4a  jal         func_16AD28
    ctx->pc = 0x16AD00u;
    SET_GPR_U32(ctx, 31, 0x16AD08u);
    ctx->pc = 0x16AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD00u;
    // 0x16ad04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AD28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16AD28u, 0x16AD00u, 0x16AD08u)) {
        return;
    }
    ctx->pc = 0x16AD08u;
label_16ad08:
    // 0x16ad08: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16ad0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ad0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ad10: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16ad10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16ad14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ad14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ad18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16ad18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad1c: 0x3e00008  jr          $ra
    ctx->pc = 0x16AD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD1Cu;
        // 0x16ad20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AD24u;
    // 0x16ad24: 0x0  nop
    ctx->pc = 0x16ad24u;
    // NOP
    ctx->pc = 0x16ad28u;
}
