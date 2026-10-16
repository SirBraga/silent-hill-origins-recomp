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

// Function: sub_0016FFA0
// Address: 0x16ffa0 - 0x16fff0
void sub_0016FFA0_0x16ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FFA0_0x16ffa0");
#endif

    switch (ctx->pc) {
        case 0x16ffbcu: goto label_16ffbc;
        case 0x16ffc8u: goto label_16ffc8;
        default: break;
    }

    ctx->pc = 0x16ffa0u;

    // 0x16ffa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ffa4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16ffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ffa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16ffac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ffacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ffb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ffb4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16FFB4u;
    SET_GPR_U32(ctx, 31, 0x16FFBCu);
    ctx->pc = 0x16FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FFB4u;
    // 0x16ffb8: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16FFB4u, 0x16FFBCu)) {
        return;
    }
    ctx->pc = 0x16FFBCu;
label_16ffbc:
    // 0x16ffbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ffbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffc0: 0xc05bffc  jal         func_16FFF0
    ctx->pc = 0x16FFC0u;
    SET_GPR_U32(ctx, 31, 0x16FFC8u);
    ctx->pc = 0x16FFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FFC0u;
    // 0x16ffc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FFF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16FFF0u, 0x16FFC0u, 0x16FFC8u)) {
        return;
    }
    ctx->pc = 0x16FFC8u;
label_16ffc8:
    // 0x16ffc8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16ffcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ffccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ffd0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16ffd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16ffd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ffd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ffd8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16ffd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffdc: 0x3e00008  jr          $ra
    ctx->pc = 0x16FFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFDCu;
        // 0x16ffe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FFE4u;
    // 0x16ffe4: 0x0  nop
    ctx->pc = 0x16ffe4u;
    // NOP
    // 0x16ffe8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x16ffe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16ffec: 0x0  nop
    ctx->pc = 0x16ffecu;
    // NOP
    ctx->pc = 0x16fff0u;
}
