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

// Function: sub_001943C8
// Address: 0x1943c8 - 0x194410
void sub_001943C8_0x1943c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001943C8_0x1943c8");
#endif

    switch (ctx->pc) {
        case 0x1943e4u: goto label_1943e4;
        case 0x1943f0u: goto label_1943f0;
        default: break;
    }

    ctx->pc = 0x1943c8u;

    // 0x1943c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1943c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1943cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1943ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1943d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1943d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1943d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1943d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1943d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1943d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1943dc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1943DCu;
    SET_GPR_U32(ctx, 31, 0x1943E4u);
    ctx->pc = 0x1943E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1943DCu;
    // 0x1943e0: 0x24040174  addiu       $a0, $zero, 0x174 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1943DCu, 0x1943E4u)) {
        return;
    }
    ctx->pc = 0x1943E4u;
label_1943e4:
    // 0x1943e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1943e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1943e8: 0xc064a1c  jal         func_192870
    ctx->pc = 0x1943E8u;
    SET_GPR_U32(ctx, 31, 0x1943F0u);
    ctx->pc = 0x1943ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1943E8u;
    // 0x1943ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192870u, 0x1943E8u, 0x1943F0u)) {
        return;
    }
    ctx->pc = 0x1943F0u;
label_1943f0:
    // 0x1943f0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1943f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1943f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1943f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1943f8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1943f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1943fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1943fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194400: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x194400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194404: 0x3e00008  jr          $ra
    ctx->pc = 0x194404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194404u;
        // 0x194408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19440Cu;
    // 0x19440c: 0x0  nop
    ctx->pc = 0x19440cu;
    // NOP
    ctx->pc = 0x194410u;
}
