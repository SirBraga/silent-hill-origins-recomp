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

// Function: sub_0013EAE8
// Address: 0x13eae8 - 0x13eb18
void sub_0013EAE8_0x13eae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EAE8_0x13eae8");
#endif

    switch (ctx->pc) {
        case 0x13eafcu: goto label_13eafc;
        case 0x13eb04u: goto label_13eb04;
        default: break;
    }

    ctx->pc = 0x13eae8u;

    // 0x13eae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13eae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13eaec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13eaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13eaf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13eaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13eaf4: 0xc04faf8  jal         func_13EBE0
    ctx->pc = 0x13EAF4u;
    SET_GPR_U32(ctx, 31, 0x13EAFCu);
    ctx->pc = 0x13EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EAF4u;
    // 0x13eaf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EBE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13EBE0u, 0x13EAF4u, 0x13EAFCu)) {
        return;
    }
    ctx->pc = 0x13EAFCu;
label_13eafc:
    // 0x13eafc: 0xc041ce0  jal         func_107380
    ctx->pc = 0x13EAFCu;
    SET_GPR_U32(ctx, 31, 0x13EB04u);
    ctx->pc = 0x13EB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EAFCu;
    // 0x13eb00: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107380u, 0x13EAFCu, 0x13EB04u)) {
        return;
    }
    ctx->pc = 0x13EB04u;
label_13eb04:
    // 0x13eb04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13eb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eb08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13eb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x13EB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB0Cu;
        // 0x13eb10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EB14u;
    // 0x13eb14: 0x0  nop
    ctx->pc = 0x13eb14u;
    // NOP
    ctx->pc = 0x13eb18u;
}
