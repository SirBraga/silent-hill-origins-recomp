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

// Function: sub_0013D7C0
// Address: 0x13d7c0 - 0x13d808
void sub_0013D7C0_0x13d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D7C0_0x13d7c0");
#endif

    switch (ctx->pc) {
        case 0x13d7dcu: goto label_13d7dc;
        case 0x13d7e8u: goto label_13d7e8;
        default: break;
    }

    ctx->pc = 0x13d7c0u;

    // 0x13d7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d7c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13d7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d7c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d7cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d7d4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x13D7D4u;
    SET_GPR_U32(ctx, 31, 0x13D7DCu);
    ctx->pc = 0x13D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D7D4u;
    // 0x13d7d8: 0x240400dc  addiu       $a0, $zero, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x13D7D4u, 0x13D7DCu)) {
        return;
    }
    ctx->pc = 0x13D7DCu;
label_13d7dc:
    // 0x13d7dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d7e0: 0xc04f602  jal         func_13D808
    ctx->pc = 0x13D7E0u;
    SET_GPR_U32(ctx, 31, 0x13D7E8u);
    ctx->pc = 0x13D7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D7E0u;
    // 0x13d7e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13D808u, 0x13D7E0u, 0x13D7E8u)) {
        return;
    }
    ctx->pc = 0x13D7E8u;
label_13d7e8:
    // 0x13d7e8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x13d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13d7ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d7f0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x13d7f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x13d7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d7f8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13d7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x13D7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7FCu;
        // 0x13d800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D804u;
    // 0x13d804: 0x0  nop
    ctx->pc = 0x13d804u;
    // NOP
    ctx->pc = 0x13d808u;
}
