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

// Function: sub_0016E7D0
// Address: 0x16e7d0 - 0x16e818
void sub_0016E7D0_0x16e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E7D0_0x16e7d0");
#endif

    switch (ctx->pc) {
        case 0x16e7ecu: goto label_16e7ec;
        case 0x16e7f8u: goto label_16e7f8;
        default: break;
    }

    ctx->pc = 0x16e7d0u;

    // 0x16e7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16e7d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16e7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e7d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16e7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16e7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16e7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e7e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e7e4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16E7E4u;
    SET_GPR_U32(ctx, 31, 0x16E7ECu);
    ctx->pc = 0x16E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7E4u;
    // 0x16e7e8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16E7E4u, 0x16E7ECu)) {
        return;
    }
    ctx->pc = 0x16E7ECu;
label_16e7ec:
    // 0x16e7ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e7f0: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x16E7F0u;
    SET_GPR_U32(ctx, 31, 0x16E7F8u);
    ctx->pc = 0x16E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7F0u;
    // 0x16e7f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16E820u, 0x16E7F0u, 0x16E7F8u)) {
        return;
    }
    ctx->pc = 0x16E7F8u;
label_16e7f8:
    // 0x16e7f8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16e7fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16e7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e800: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16e800u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16e804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e808: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16e808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e80c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E80Cu;
        // 0x16e810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E814u;
    // 0x16e814: 0x0  nop
    ctx->pc = 0x16e814u;
    // NOP
    ctx->pc = 0x16e818u;
}
