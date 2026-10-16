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

// Function: sub_00187C50
// Address: 0x187c50 - 0x187c98
void sub_00187C50_0x187c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187C50_0x187c50");
#endif

    switch (ctx->pc) {
        case 0x187c6cu: goto label_187c6c;
        case 0x187c78u: goto label_187c78;
        default: break;
    }

    ctx->pc = 0x187c50u;

    // 0x187c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187c54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x187c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187c58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x187c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x187c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187c64: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x187C64u;
    SET_GPR_U32(ctx, 31, 0x187C6Cu);
    ctx->pc = 0x187C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C64u;
    // 0x187c68: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x187C64u, 0x187C6Cu)) {
        return;
    }
    ctx->pc = 0x187C6Cu;
label_187c6c:
    // 0x187c6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c70: 0xc061d1e  jal         func_187478
    ctx->pc = 0x187C70u;
    SET_GPR_U32(ctx, 31, 0x187C78u);
    ctx->pc = 0x187C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C70u;
    // 0x187c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x187478u, 0x187C70u, 0x187C78u)) {
        return;
    }
    ctx->pc = 0x187C78u;
label_187c78:
    // 0x187c78: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x187c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x187c7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x187c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187c80: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x187c80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x187c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187c88: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x187c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x187C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C8Cu;
        // 0x187c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187C94u;
    // 0x187c94: 0x0  nop
    ctx->pc = 0x187c94u;
    // NOP
    ctx->pc = 0x187c98u;
}
