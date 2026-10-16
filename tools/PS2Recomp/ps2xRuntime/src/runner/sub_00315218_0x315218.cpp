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

// Function: sub_00315218
// Address: 0x315218 - 0x315260
void sub_00315218_0x315218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315218_0x315218");
#endif

    switch (ctx->pc) {
        case 0x315238u: goto label_315238;
        case 0x315244u: goto label_315244;
        case 0x31524cu: goto label_31524c;
        default: break;
    }

    ctx->pc = 0x315218u;

    // 0x315218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x315218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31521c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x315220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x315224: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x315224u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x315228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x315228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31522c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x315230: 0xc0c556c  jal         func_3155B0
    ctx->pc = 0x315230u;
    SET_GPR_U32(ctx, 31, 0x315238u);
    ctx->pc = 0x315234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315230u;
    // 0x315234: 0x8e046ccc  lw          $a0, 0x6CCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3155B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3155B0u, 0x315230u, 0x315238u)) {
        return;
    }
    ctx->pc = 0x315238u;
label_315238:
    // 0x315238: 0x8e046ccc  lw          $a0, 0x6CCC($s0)
    ctx->pc = 0x315238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    // 0x31523c: 0xc0c7602  jal         func_31D808
    ctx->pc = 0x31523Cu;
    SET_GPR_U32(ctx, 31, 0x315244u);
    ctx->pc = 0x315240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31523Cu;
    // 0x315240: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D808u, 0x31523Cu, 0x315244u)) {
        return;
    }
    ctx->pc = 0x315244u;
label_315244:
    // 0x315244: 0xc0c5584  jal         func_315610
    ctx->pc = 0x315244u;
    SET_GPR_U32(ctx, 31, 0x31524Cu);
    ctx->pc = 0x315248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315244u;
    // 0x315248: 0x8e046ccc  lw          $a0, 0x6CCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x315244u, 0x31524Cu)) {
        return;
    }
    ctx->pc = 0x31524Cu;
label_31524c:
    // 0x31524c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31524cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315258: 0x3e00008  jr          $ra
    ctx->pc = 0x315258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315258u;
        // 0x31525c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315260u;
}
