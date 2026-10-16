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

// Function: sub_001607A0
// Address: 0x1607a0 - 0x1607e8
void sub_001607A0_0x1607a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001607A0_0x1607a0");
#endif

    switch (ctx->pc) {
        case 0x1607bcu: goto label_1607bc;
        case 0x1607c8u: goto label_1607c8;
        default: break;
    }

    ctx->pc = 0x1607a0u;

    // 0x1607a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1607a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1607a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1607a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1607a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1607a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1607ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1607acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1607b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1607b4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1607B4u;
    SET_GPR_U32(ctx, 31, 0x1607BCu);
    ctx->pc = 0x1607B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1607B4u;
    // 0x1607b8: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1607B4u, 0x1607BCu)) {
        return;
    }
    ctx->pc = 0x1607BCu;
label_1607bc:
    // 0x1607bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1607bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607c0: 0xc057c5e  jal         func_15F178
    ctx->pc = 0x1607C0u;
    SET_GPR_U32(ctx, 31, 0x1607C8u);
    ctx->pc = 0x1607C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1607C0u;
    // 0x1607c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F178u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15F178u, 0x1607C0u, 0x1607C8u)) {
        return;
    }
    ctx->pc = 0x1607C8u;
label_1607c8:
    // 0x1607c8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1607c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1607cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1607ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1607d0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1607d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1607d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1607d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1607d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1607d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1607DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1607E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607DCu;
        // 0x1607e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1607DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1607E4u;
    // 0x1607e4: 0x0  nop
    ctx->pc = 0x1607e4u;
    // NOP
    ctx->pc = 0x1607e8u;
}
