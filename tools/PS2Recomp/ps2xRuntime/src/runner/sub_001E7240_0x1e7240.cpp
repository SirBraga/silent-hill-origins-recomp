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

// Function: sub_001E7240
// Address: 0x1e7240 - 0x1e7280
void sub_001E7240_0x1e7240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7240_0x1e7240");
#endif

    switch (ctx->pc) {
        case 0x1e725cu: goto label_1e725c;
        case 0x1e726cu: goto label_1e726c;
        default: break;
    }

    ctx->pc = 0x1e7240u;

    // 0x1e7240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e7244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7248: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e7248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e724c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7254: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x1E7254u;
    SET_GPR_U32(ctx, 31, 0x1E725Cu);
    ctx->pc = 0x1E7258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7254u;
    // 0x1e7258: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x1E7254u, 0x1E725Cu)) {
        return;
    }
    ctx->pc = 0x1E725Cu;
label_1e725c:
    // 0x1e725c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e725cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e7260: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x1e7260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1e7264: 0xc091de2  jal         func_247788
    ctx->pc = 0x1E7264u;
    SET_GPR_U32(ctx, 31, 0x1E726Cu);
    ctx->pc = 0x1E7268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7264u;
    // 0x1e7268: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x1E7264u, 0x1E726Cu)) {
        return;
    }
    ctx->pc = 0x1E726Cu;
label_1e726c:
    // 0x1e726c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e726cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7274: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7274u;
        // 0x1e7278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E727Cu;
    // 0x1e727c: 0x0  nop
    ctx->pc = 0x1e727cu;
    // NOP
    ctx->pc = 0x1e7280u;
}
