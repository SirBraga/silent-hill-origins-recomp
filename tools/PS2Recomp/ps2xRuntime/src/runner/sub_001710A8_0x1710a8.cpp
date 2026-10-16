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

// Function: sub_001710A8
// Address: 0x1710a8 - 0x1710f0
void sub_001710A8_0x1710a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001710A8_0x1710a8");
#endif

    switch (ctx->pc) {
        case 0x1710c4u: goto label_1710c4;
        case 0x1710d0u: goto label_1710d0;
        default: break;
    }

    ctx->pc = 0x1710a8u;

    // 0x1710a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1710a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1710ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1710acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1710b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1710b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1710b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1710b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1710b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1710bc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1710BCu;
    SET_GPR_U32(ctx, 31, 0x1710C4u);
    ctx->pc = 0x1710C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710BCu;
    // 0x1710c0: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1710BCu, 0x1710C4u)) {
        return;
    }
    ctx->pc = 0x1710C4u;
label_1710c4:
    // 0x1710c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1710c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710c8: 0xc05c43c  jal         func_1710F0
    ctx->pc = 0x1710C8u;
    SET_GPR_U32(ctx, 31, 0x1710D0u);
    ctx->pc = 0x1710CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710C8u;
    // 0x1710cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1710F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1710F0u, 0x1710C8u, 0x1710D0u)) {
        return;
    }
    ctx->pc = 0x1710D0u;
label_1710d0:
    // 0x1710d0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1710d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1710d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1710d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1710d8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1710d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1710dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1710dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1710e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1710e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1710E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1710E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710E4u;
        // 0x1710e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1710E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1710ECu;
    // 0x1710ec: 0x0  nop
    ctx->pc = 0x1710ecu;
    // NOP
    ctx->pc = 0x1710f0u;
}
