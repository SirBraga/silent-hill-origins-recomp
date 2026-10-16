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

// Function: sub_0012BF08
// Address: 0x12bf08 - 0x12bf50
void sub_0012BF08_0x12bf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BF08_0x12bf08");
#endif

    switch (ctx->pc) {
        case 0x12bf24u: goto label_12bf24;
        case 0x12bf30u: goto label_12bf30;
        default: break;
    }

    ctx->pc = 0x12bf08u;

    // 0x12bf08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bf0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12bf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bf10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12bf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12bf14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bf14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bf1c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x12BF1Cu;
    SET_GPR_U32(ctx, 31, 0x12BF24u);
    ctx->pc = 0x12BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF1Cu;
    // 0x12bf20: 0x24042d90  addiu       $a0, $zero, 0x2D90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x12BF1Cu, 0x12BF24u)) {
        return;
    }
    ctx->pc = 0x12BF24u;
label_12bf24:
    // 0x12bf24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12bf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf28: 0xc04afd4  jal         func_12BF50
    ctx->pc = 0x12BF28u;
    SET_GPR_U32(ctx, 31, 0x12BF30u);
    ctx->pc = 0x12BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF28u;
    // 0x12bf2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BF50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12BF50u, 0x12BF28u, 0x12BF30u)) {
        return;
    }
    ctx->pc = 0x12BF30u;
label_12bf30:
    // 0x12bf30: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x12bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x12bf34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12bf34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bf38: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x12bf38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x12bf3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bf40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12bf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf44: 0x3e00008  jr          $ra
    ctx->pc = 0x12BF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF44u;
        // 0x12bf48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BF4Cu;
    // 0x12bf4c: 0x0  nop
    ctx->pc = 0x12bf4cu;
    // NOP
    ctx->pc = 0x12bf50u;
}
