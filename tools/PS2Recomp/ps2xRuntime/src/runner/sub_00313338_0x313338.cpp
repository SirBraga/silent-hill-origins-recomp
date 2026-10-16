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

// Function: sub_00313338
// Address: 0x313338 - 0x313390
void sub_00313338_0x313338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313338_0x313338");
#endif

    switch (ctx->pc) {
        case 0x31337cu: goto label_31337c;
        default: break;
    }

    ctx->pc = 0x313338u;

    // 0x313338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31333c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x313344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313348: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x313348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x31334c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31334Cu;
    {
        const bool branch_taken_0x31334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31334c) {
            ctx->pc = 0x313350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31334Cu;
            // 0x313350: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313368u;
            goto label_313368;
        }
    }
    ctx->pc = 0x313354u;
    // 0x313354: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x313354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x313358: 0x8c436ccc  lw          $v1, 0x6CCC($v0)
    ctx->pc = 0x313358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686CCCu));
    // 0x31335c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x31335cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x313360: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x313360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x313364: 0x0  nop
    ctx->pc = 0x313364u;
    // NOP
label_313368:
    // 0x313368: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x313368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x31336c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31336Cu;
    {
        const bool branch_taken_0x31336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31336c) {
            ctx->pc = 0x313370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31336Cu;
            // 0x313370: 0x8602000e  lh          $v0, 0xE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313380u;
            goto label_313380;
        }
    }
    ctx->pc = 0x313374u;
    // 0x313374: 0xc0c4cfe  jal         func_3133F8
    ctx->pc = 0x313374u;
    SET_GPR_U32(ctx, 31, 0x31337Cu);
    ctx->pc = 0x3133F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3133F8u, 0x313374u, 0x31337Cu)) {
        return;
    }
    ctx->pc = 0x31337Cu;
label_31337c:
    // 0x31337c: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x31337cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_313380:
    // 0x313380: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313388: 0x3e00008  jr          $ra
    ctx->pc = 0x313388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313388u;
        // 0x31338c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313390u;
}
