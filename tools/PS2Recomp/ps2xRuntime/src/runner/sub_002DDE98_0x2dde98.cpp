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

// Function: sub_002DDE98
// Address: 0x2dde98 - 0x2ddee8
void sub_002DDE98_0x2dde98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDE98_0x2dde98");
#endif

    switch (ctx->pc) {
        case 0x2ddeb4u: goto label_2ddeb4;
        case 0x2ddec4u: goto label_2ddec4;
        default: break;
    }

    ctx->pc = 0x2dde98u;

    // 0x2dde98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dde98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dde9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dde9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ddea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ddea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ddea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ddea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddeac: 0xc0b7d62  jal         func_2DF588
    ctx->pc = 0x2DDEACu;
    SET_GPR_U32(ctx, 31, 0x2DDEB4u);
    ctx->pc = 0x2DDEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDEACu;
    // 0x2ddeb0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF588u, 0x2DDEACu, 0x2DDEB4u)) {
        return;
    }
    ctx->pc = 0x2DDEB4u;
label_2ddeb4:
    // 0x2ddeb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDEB4u;
    {
        const bool branch_taken_0x2ddeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEB4u;
        // 0x2ddeb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddeb4) {
            ctx->pc = 0x2DDED0u;
            goto label_2dded0;
        }
    }
    ctx->pc = 0x2DDEBCu;
    // 0x2ddebc: 0xc0b7d4e  jal         func_2DF538
    ctx->pc = 0x2DDEBCu;
    SET_GPR_U32(ctx, 31, 0x2DDEC4u);
    ctx->pc = 0x2DDEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDEBCu;
    // 0x2ddec0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF538u, 0x2DDEBCu, 0x2DDEC4u)) {
        return;
    }
    ctx->pc = 0x2DDEC4u;
label_2ddec4:
    // 0x2ddec4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2ddec4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x2ddec8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DDEC8u;
    {
        const bool branch_taken_0x2ddec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEC8u;
        // 0x2ddecc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddec8) {
            ctx->pc = 0x2DDED4u;
            goto label_2dded4;
        }
    }
    ctx->pc = 0x2DDED0u;
label_2dded0:
    // 0x2dded0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dded0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dded4:
    // 0x2dded4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dded4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dded8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dded8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddee0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEE0u;
        // 0x2ddee4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDEE8u;
}
