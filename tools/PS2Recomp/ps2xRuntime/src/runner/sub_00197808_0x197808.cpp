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

// Function: sub_00197808
// Address: 0x197808 - 0x197858
void sub_00197808_0x197808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197808_0x197808");
#endif

    switch (ctx->pc) {
        case 0x197834u: goto label_197834;
        case 0x197844u: goto label_197844;
        default: break;
    }

    ctx->pc = 0x197808u;

    // 0x197808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19780c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19780cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197810: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x197810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x197814: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x197814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x197818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19781c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19781cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197820: 0x260409ec  addiu       $a0, $s0, 0x9EC
    ctx->pc = 0x197820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2540));
    // 0x197824: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x197824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x197828: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x197828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x19782c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x19782Cu;
    SET_GPR_U32(ctx, 31, 0x197834u);
    ctx->pc = 0x197830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19782Cu;
    // 0x197830: 0xae0209d0  sw          $v0, 0x9D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x19782Cu, 0x197834u)) {
        return;
    }
    ctx->pc = 0x197834u;
label_197834:
    // 0x197834: 0xae0009e8  sw          $zero, 0x9E8($s0)
    ctx->pc = 0x197834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2536), GPR_U32(ctx, 0));
    // 0x197838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19783c: 0xc065cba  jal         func_1972E8
    ctx->pc = 0x19783Cu;
    SET_GPR_U32(ctx, 31, 0x197844u);
    ctx->pc = 0x197840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19783Cu;
    // 0x197840: 0xae000dec  sw          $zero, 0xDEC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3564), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1972E8u, 0x19783Cu, 0x197844u)) {
        return;
    }
    ctx->pc = 0x197844u;
label_197844:
    // 0x197844: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x197844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19784c: 0x3e00008  jr          $ra
    ctx->pc = 0x19784Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19784Cu;
        // 0x197850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19784Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197854u;
    // 0x197854: 0x0  nop
    ctx->pc = 0x197854u;
    // NOP
    ctx->pc = 0x197858u;
}
