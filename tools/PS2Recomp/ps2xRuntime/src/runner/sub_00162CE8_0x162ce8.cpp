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

// Function: sub_00162CE8
// Address: 0x162ce8 - 0x162d20
void sub_00162CE8_0x162ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162CE8_0x162ce8");
#endif

    switch (ctx->pc) {
        case 0x162d08u: goto label_162d08;
        default: break;
    }

    ctx->pc = 0x162ce8u;

    // 0x162ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162cec: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x162cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x162cf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x162cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x162cf4: 0x24a53b90  addiu       $a1, $a1, 0x3B90
    ctx->pc = 0x162cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15248));
    // 0x162cf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162d00: 0xc07f228  jal         func_1FC8A0
    ctx->pc = 0x162D00u;
    SET_GPR_U32(ctx, 31, 0x162D08u);
    ctx->pc = 0x162D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D00u;
    // 0x162d04: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC8A0u, 0x162D00u, 0x162D08u)) {
        return;
    }
    ctx->pc = 0x162D08u;
label_162d08:
    // 0x162d08: 0xae021d3c  sw          $v0, 0x1D3C($s0)
    ctx->pc = 0x162d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7484), GPR_U32(ctx, 2));
    // 0x162d0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x162d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162d14: 0x3e00008  jr          $ra
    ctx->pc = 0x162D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D14u;
        // 0x162d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162D1Cu;
    // 0x162d1c: 0x0  nop
    ctx->pc = 0x162d1cu;
    // NOP
    ctx->pc = 0x162d20u;
}
