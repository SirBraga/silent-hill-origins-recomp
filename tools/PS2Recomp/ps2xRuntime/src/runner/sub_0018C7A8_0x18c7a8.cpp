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

// Function: sub_0018C7A8
// Address: 0x18c7a8 - 0x18c7f8
void sub_0018C7A8_0x18c7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C7A8_0x18c7a8");
#endif

    switch (ctx->pc) {
        case 0x18c7c4u: goto label_18c7c4;
        case 0x18c7d0u: goto label_18c7d0;
        default: break;
    }

    ctx->pc = 0x18c7a8u;

    // 0x18c7a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c7ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c7b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18c7b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c7bc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x18C7BCu;
    SET_GPR_U32(ctx, 31, 0x18C7C4u);
    ctx->pc = 0x18C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7BCu;
    // 0x18c7c0: 0x240400ec  addiu       $a0, $zero, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x18C7BCu, 0x18C7C4u)) {
        return;
    }
    ctx->pc = 0x18C7C4u;
label_18c7c4:
    // 0x18c7c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7c8: 0xc0631fe  jal         func_18C7F8
    ctx->pc = 0x18C7C8u;
    SET_GPR_U32(ctx, 31, 0x18C7D0u);
    ctx->pc = 0x18C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7C8u;
    // 0x18c7cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18C7F8u, 0x18C7C8u, 0x18C7D0u)) {
        return;
    }
    ctx->pc = 0x18C7D0u;
label_18c7d0:
    // 0x18c7d0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x18c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18c7d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c7d8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x18c7d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x18c7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c7e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18c7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x18C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7E4u;
        // 0x18c7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C7ECu;
    // 0x18c7ec: 0x0  nop
    ctx->pc = 0x18c7ecu;
    // NOP
    // 0x18c7f0: 0x0  nop
    ctx->pc = 0x18c7f0u;
    // NOP
    // 0x18c7f4: 0x0  nop
    ctx->pc = 0x18c7f4u;
    // NOP
    ctx->pc = 0x18c7f8u;
}
