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

// Function: sub_00225908
// Address: 0x225908 - 0x225950
void sub_00225908_0x225908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225908_0x225908");
#endif

    switch (ctx->pc) {
        case 0x225934u: goto label_225934;
        default: break;
    }

    ctx->pc = 0x225908u;

    // 0x225908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22590c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x22590cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x225910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x225914: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x225914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x225918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22591c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22591cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225920: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x225920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x225924: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x225924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225928: 0x24840fd8  addiu       $a0, $a0, 0xFD8
    ctx->pc = 0x225928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    // 0x22592c: 0xc08959e  jal         func_225678
    ctx->pc = 0x22592Cu;
    SET_GPR_U32(ctx, 31, 0x225934u);
    ctx->pc = 0x225930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22592Cu;
    // 0x225930: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x22592Cu, 0x225934u)) {
        return;
    }
    ctx->pc = 0x225934u;
label_225934:
    // 0x225934: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x225934u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x225938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22593c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22593cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x225940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225944: 0x3e00008  jr          $ra
    ctx->pc = 0x225944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225944u;
        // 0x225948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22594Cu;
    // 0x22594c: 0x0  nop
    ctx->pc = 0x22594cu;
    // NOP
    ctx->pc = 0x225950u;
}
