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

// Function: sub_0015EE08
// Address: 0x15ee08 - 0x15ee50
void sub_0015EE08_0x15ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EE08_0x15ee08");
#endif

    switch (ctx->pc) {
        case 0x15ee24u: goto label_15ee24;
        case 0x15ee30u: goto label_15ee30;
        default: break;
    }

    ctx->pc = 0x15ee08u;

    // 0x15ee08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ee0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15ee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ee10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15ee10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15ee14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15ee14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ee18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ee1c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x15EE1Cu;
    SET_GPR_U32(ctx, 31, 0x15EE24u);
    ctx->pc = 0x15EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE1Cu;
    // 0x15ee20: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x15EE1Cu, 0x15EE24u)) {
        return;
    }
    ctx->pc = 0x15EE24u;
label_15ee24:
    // 0x15ee24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ee24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee28: 0xc057b94  jal         func_15EE50
    ctx->pc = 0x15EE28u;
    SET_GPR_U32(ctx, 31, 0x15EE30u);
    ctx->pc = 0x15EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE28u;
    // 0x15ee2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EE50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15EE50u, 0x15EE28u, 0x15EE30u)) {
        return;
    }
    ctx->pc = 0x15EE30u;
label_15ee30:
    // 0x15ee30: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x15ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15ee34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15ee34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ee38: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x15ee38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x15ee3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ee40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x15ee40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee44: 0x3e00008  jr          $ra
    ctx->pc = 0x15EE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE44u;
        // 0x15ee48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EE4Cu;
    // 0x15ee4c: 0x0  nop
    ctx->pc = 0x15ee4cu;
    // NOP
    ctx->pc = 0x15ee50u;
}
