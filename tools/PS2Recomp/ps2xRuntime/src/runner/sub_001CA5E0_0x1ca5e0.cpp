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

// Function: sub_001CA5E0
// Address: 0x1ca5e0 - 0x1ca628
void sub_001CA5E0_0x1ca5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA5E0_0x1ca5e0");
#endif

    switch (ctx->pc) {
        case 0x1ca5fcu: goto label_1ca5fc;
        case 0x1ca610u: goto label_1ca610;
        default: break;
    }

    ctx->pc = 0x1ca5e0u;

    // 0x1ca5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca5e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ca5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ca5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca5ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca5f4: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1CA5F4u;
    SET_GPR_U32(ctx, 31, 0x1CA5FCu);
    ctx->pc = 0x1CA5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5F4u;
    // 0x1ca5f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1CA5F4u, 0x1CA5FCu)) {
        return;
    }
    ctx->pc = 0x1CA5FCu;
label_1ca5fc:
    // 0x1ca5fc: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1ca5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1ca600: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA600u;
    {
        const bool branch_taken_0x1ca600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA600u;
        // 0x1ca604: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca600) {
            ctx->pc = 0x1CA614u;
            goto label_1ca614;
        }
    }
    ctx->pc = 0x1CA608u;
    // 0x1ca608: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1CA608u;
    SET_GPR_U32(ctx, 31, 0x1CA610u);
    ctx->pc = 0x1CA60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA608u;
    // 0x1ca60c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D90u, 0x1CA608u, 0x1CA610u)) {
        return;
    }
    ctx->pc = 0x1CA610u;
label_1ca610:
    // 0x1ca610: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ca610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca614:
    // 0x1ca614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca61c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA61Cu;
        // 0x1ca620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA624u;
    // 0x1ca624: 0x0  nop
    ctx->pc = 0x1ca624u;
    // NOP
    ctx->pc = 0x1ca628u;
}
