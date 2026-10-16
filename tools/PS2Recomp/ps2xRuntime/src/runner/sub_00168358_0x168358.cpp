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

// Function: sub_00168358
// Address: 0x168358 - 0x1683c8
void sub_00168358_0x168358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168358_0x168358");
#endif

    switch (ctx->pc) {
        case 0x1683a8u: goto label_1683a8;
        case 0x1683b4u: goto label_1683b4;
        default: break;
    }

    ctx->pc = 0x168358u;

    // 0x168358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16835c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x168360: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x168360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x168364: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x168364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x168368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16836c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16836cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168374: 0x24423fe8  addiu       $v0, $v0, 0x3FE8
    ctx->pc = 0x168374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16360));
    // 0x168378: 0x24634008  addiu       $v1, $v1, 0x4008
    ctx->pc = 0x168378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16392));
    // 0x16837c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16837cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x168380: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x168380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x168384: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x168384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x168388: 0x8c6286a0  lw          $v0, -0x7960($v1)
    ctx->pc = 0x168388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3386A0u));
    // 0x16838c: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16838Cu;
    {
        const bool branch_taken_0x16838c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x168390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16838Cu;
        // 0x168390: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16838c) {
            ctx->pc = 0x168398u;
            goto label_168398;
        }
    }
    ctx->pc = 0x168394u;
    // 0x168394: 0xac6086a0  sw          $zero, -0x7960($v1)
    ctx->pc = 0x168394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936224), GPR_U32(ctx, 0));
label_168398:
    // 0x168398: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x168398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16839c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16839cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1683a0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1683A0u;
    SET_GPR_U32(ctx, 31, 0x1683A8u);
    ctx->pc = 0x1683A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1683A0u;
    // 0x1683a4: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1683A0u, 0x1683A8u)) {
        return;
    }
    ctx->pc = 0x1683A8u;
label_1683a8:
    // 0x1683a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1683a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683ac: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1683ACu;
    SET_GPR_U32(ctx, 31, 0x1683B4u);
    ctx->pc = 0x1683B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1683ACu;
    // 0x1683b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1683ACu, 0x1683B4u)) {
        return;
    }
    ctx->pc = 0x1683B4u;
label_1683b4:
    // 0x1683b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1683b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1683b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1683b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1683bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1683bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1683c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1683C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1683C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683C0u;
        // 0x1683c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1683C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1683C8u;
}
