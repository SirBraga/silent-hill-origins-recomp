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

// Function: sub_0016DE10
// Address: 0x16de10 - 0x16de58
void sub_0016DE10_0x16de10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DE10_0x16de10");
#endif

    switch (ctx->pc) {
        case 0x16de2cu: goto label_16de2c;
        case 0x16de38u: goto label_16de38;
        default: break;
    }

    ctx->pc = 0x16de10u;

    // 0x16de10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16de10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16de14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16de14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16de18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16de18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16de1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16de1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16de20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16de24: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16DE24u;
    SET_GPR_U32(ctx, 31, 0x16DE2Cu);
    ctx->pc = 0x16DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE24u;
    // 0x16de28: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16DE24u, 0x16DE2Cu)) {
        return;
    }
    ctx->pc = 0x16DE2Cu;
label_16de2c:
    // 0x16de2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16de2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de30: 0xc05b796  jal         func_16DE58
    ctx->pc = 0x16DE30u;
    SET_GPR_U32(ctx, 31, 0x16DE38u);
    ctx->pc = 0x16DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE30u;
    // 0x16de34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DE58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16DE58u, 0x16DE30u, 0x16DE38u)) {
        return;
    }
    ctx->pc = 0x16DE38u;
label_16de38:
    // 0x16de38: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16de38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16de3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16de3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16de40: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16de40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16de44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16de44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16de48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16de48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de4c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE4Cu;
        // 0x16de50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DE54u;
    // 0x16de54: 0x0  nop
    ctx->pc = 0x16de54u;
    // NOP
    ctx->pc = 0x16de58u;
}
