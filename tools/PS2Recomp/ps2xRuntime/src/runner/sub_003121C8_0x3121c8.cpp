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

// Function: sub_003121C8
// Address: 0x3121c8 - 0x312208
void sub_003121C8_0x3121c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003121C8_0x3121c8");
#endif

    switch (ctx->pc) {
        case 0x3121e8u: goto label_3121e8;
        default: break;
    }

    ctx->pc = 0x3121c8u;

    // 0x3121c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3121c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3121cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3121ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3121d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3121d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3121d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3121d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3121d8: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3121d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3121dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3121dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3121e0: 0xc0c888a  jal         func_322228
    ctx->pc = 0x3121E0u;
    SET_GPR_U32(ctx, 31, 0x3121E8u);
    ctx->pc = 0x3121E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3121E0u;
    // 0x3121e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x322228u, 0x3121E0u, 0x3121E8u)) {
        return;
    }
    ctx->pc = 0x3121E8u;
label_3121e8:
    // 0x3121e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3121e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3121ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3121ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3121f0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3121f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x3121f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3121f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3121f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3121f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3121fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3121FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121FCu;
        // 0x312200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3121FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312204u;
    // 0x312204: 0x0  nop
    ctx->pc = 0x312204u;
    // NOP
    ctx->pc = 0x312208u;
}
