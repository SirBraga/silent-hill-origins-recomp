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

// Function: sub_00252C48
// Address: 0x252c48 - 0x252c80
void sub_00252C48_0x252c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252C48_0x252c48");
#endif

    switch (ctx->pc) {
        case 0x252c5cu: goto label_252c5c;
        case 0x252c64u: goto label_252c64;
        default: break;
    }

    ctx->pc = 0x252c48u;

    // 0x252c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252c4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x252c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x252c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252c54: 0xc094b64  jal         func_252D90
    ctx->pc = 0x252C54u;
    SET_GPR_U32(ctx, 31, 0x252C5Cu);
    ctx->pc = 0x252C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C54u;
    // 0x252c58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252D90u, 0x252C54u, 0x252C5Cu)) {
        return;
    }
    ctx->pc = 0x252C5Cu;
label_252c5c:
    // 0x252c5c: 0xc094a66  jal         func_252998
    ctx->pc = 0x252C5Cu;
    SET_GPR_U32(ctx, 31, 0x252C64u);
    ctx->pc = 0x252C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C5Cu;
    // 0x252c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252998u, 0x252C5Cu, 0x252C64u)) {
        return;
    }
    ctx->pc = 0x252C64u;
label_252c64:
    // 0x252c64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x252c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c68: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x252c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x252c6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x252c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c74: 0xac605618  sw          $zero, 0x5618($v1)
    ctx->pc = 0x252c74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x735618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735618u, _value); } while (0);
    // 0x252c78: 0x3e00008  jr          $ra
    ctx->pc = 0x252C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C78u;
        // 0x252c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252C80u;
}
