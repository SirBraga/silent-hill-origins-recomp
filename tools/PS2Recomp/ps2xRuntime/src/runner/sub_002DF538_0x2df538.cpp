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

// Function: sub_002DF538
// Address: 0x2df538 - 0x2df588
void sub_002DF538_0x2df538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF538_0x2df538");
#endif

    switch (ctx->pc) {
        case 0x2df554u: goto label_2df554;
        default: break;
    }

    ctx->pc = 0x2df538u;

    // 0x2df538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df53c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2df53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2df540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2df548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df54c: 0xc0b7d82  jal         func_2DF608
    ctx->pc = 0x2DF54Cu;
    SET_GPR_U32(ctx, 31, 0x2DF554u);
    ctx->pc = 0x2DF550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF54Cu;
    // 0x2df550: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF608u, 0x2DF54Cu, 0x2DF554u)) {
        return;
    }
    ctx->pc = 0x2DF554u;
label_2df554:
    // 0x2df554: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2df554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2df558: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2df558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2df55c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2df55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2df560: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2df560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2df564: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2df564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2df568: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df56c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2df56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df570: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2df570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2df574: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2df574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df57c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF57Cu;
        // 0x2df580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF584u;
    // 0x2df584: 0x0  nop
    ctx->pc = 0x2df584u;
    // NOP
    ctx->pc = 0x2df588u;
}
