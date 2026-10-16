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

// Function: sub_00248A40
// Address: 0x248a40 - 0x248a78
void sub_00248A40_0x248a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248A40_0x248a40");
#endif

    switch (ctx->pc) {
        case 0x248a5cu: goto label_248a5c;
        default: break;
    }

    ctx->pc = 0x248a40u;

    // 0x248a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248a44: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x248a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x248a48: 0xac254190  sw          $a1, 0x4190($at)
    ctx->pc = 0x248a48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B4190u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4190u, _value); } while (0);
    // 0x248a4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x248a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x248a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248a54: 0xc0922c8  jal         func_248B20
    ctx->pc = 0x248A54u;
    SET_GPR_U32(ctx, 31, 0x248A5Cu);
    ctx->pc = 0x248A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A54u;
    // 0x248a58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248B20u, 0x248A54u, 0x248A5Cu)) {
        return;
    }
    ctx->pc = 0x248A5Cu;
label_248a5c:
    // 0x248a5c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x248a5cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x248a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248a64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x248a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248a68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x248a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x248A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A6Cu;
        // 0x248a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248A74u;
    // 0x248a74: 0x0  nop
    ctx->pc = 0x248a74u;
    // NOP
    ctx->pc = 0x248a78u;
}
