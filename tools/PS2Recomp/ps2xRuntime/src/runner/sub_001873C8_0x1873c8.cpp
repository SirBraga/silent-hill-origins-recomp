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

// Function: sub_001873C8
// Address: 0x1873c8 - 0x187410
void sub_001873C8_0x1873c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001873C8_0x1873c8");
#endif

    switch (ctx->pc) {
        case 0x1873e0u: goto label_1873e0;
        case 0x1873e8u: goto label_1873e8;
        default: break;
    }

    ctx->pc = 0x1873c8u;

    // 0x1873c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1873c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1873cc: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1873ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1873d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1873d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1873d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1873d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1873d8: 0xc080858  jal         func_202160
    ctx->pc = 0x1873D8u;
    SET_GPR_U32(ctx, 31, 0x1873E0u);
    ctx->pc = 0x1873DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1873D8u;
    // 0x1873dc: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1873D8u, 0x1873E0u)) {
        return;
    }
    ctx->pc = 0x1873E0u;
label_1873e0:
    // 0x1873e0: 0xc06172c  jal         func_185CB0
    ctx->pc = 0x1873E0u;
    SET_GPR_U32(ctx, 31, 0x1873E8u);
    ctx->pc = 0x1873E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1873E0u;
    // 0x1873e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185CB0u, 0x1873E0u, 0x1873E8u)) {
        return;
    }
    ctx->pc = 0x1873E8u;
label_1873e8:
    // 0x1873e8: 0xae028ab8  sw          $v0, -0x7548($s0)
    ctx->pc = 0x1873e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937272), GPR_U32(ctx, 2));
    // 0x1873ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1873ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1873f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1873f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1873f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1873F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873F4u;
        // 0x1873f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1873FCu;
    // 0x1873fc: 0x0  nop
    ctx->pc = 0x1873fcu;
    // NOP
    // 0x187400: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x187400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x187404: 0x0  nop
    ctx->pc = 0x187404u;
    // NOP
    // 0x187408: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18740c: 0x0  nop
    ctx->pc = 0x18740cu;
    // NOP
    ctx->pc = 0x187410u;
}
