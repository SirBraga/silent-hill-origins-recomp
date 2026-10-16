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

// Function: sub_00141CB8
// Address: 0x141cb8 - 0x141d00
void sub_00141CB8_0x141cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141CB8_0x141cb8");
#endif

    switch (ctx->pc) {
        case 0x141cd4u: goto label_141cd4;
        case 0x141ce0u: goto label_141ce0;
        default: break;
    }

    ctx->pc = 0x141cb8u;

    // 0x141cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141cbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x141cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141cc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x141cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x141cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141ccc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x141CCCu;
    SET_GPR_U32(ctx, 31, 0x141CD4u);
    ctx->pc = 0x141CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141CCCu;
    // 0x141cd0: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x141CCCu, 0x141CD4u)) {
        return;
    }
    ctx->pc = 0x141CD4u;
label_141cd4:
    // 0x141cd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141cd8: 0xc050740  jal         func_141D00
    ctx->pc = 0x141CD8u;
    SET_GPR_U32(ctx, 31, 0x141CE0u);
    ctx->pc = 0x141CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141CD8u;
    // 0x141cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x141D00u, 0x141CD8u, 0x141CE0u)) {
        return;
    }
    ctx->pc = 0x141CE0u;
label_141ce0:
    // 0x141ce0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x141ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x141ce4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x141ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141ce8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x141ce8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x141cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141cf0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x141cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x141CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CF4u;
        // 0x141cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141CFCu;
    // 0x141cfc: 0x0  nop
    ctx->pc = 0x141cfcu;
    // NOP
    ctx->pc = 0x141d00u;
}
