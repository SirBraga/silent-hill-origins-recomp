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

// Function: sub_0016F850
// Address: 0x16f850 - 0x16f8a0
void sub_0016F850_0x16f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F850_0x16f850");
#endif

    switch (ctx->pc) {
        case 0x16f864u: goto label_16f864;
        case 0x16f884u: goto label_16f884;
        case 0x16f88cu: goto label_16f88c;
        default: break;
    }

    ctx->pc = 0x16f850u;

    // 0x16f850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16f854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16f858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f85c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16F85Cu;
    SET_GPR_U32(ctx, 31, 0x16F864u);
    ctx->pc = 0x16F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F85Cu;
    // 0x16f860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16F85Cu, 0x16F864u)) {
        return;
    }
    ctx->pc = 0x16F864u;
label_16f864:
    // 0x16f864: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16f864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16f868: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16f868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16f86c: 0x24635160  addiu       $v1, $v1, 0x5160
    ctx->pc = 0x16f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20832));
    // 0x16f870: 0x24425118  addiu       $v0, $v0, 0x5118
    ctx->pc = 0x16f870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20760));
    // 0x16f874: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16f874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16f878: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16f878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16f87c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16F87Cu;
    SET_GPR_U32(ctx, 31, 0x16F884u);
    ctx->pc = 0x16F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F87Cu;
    // 0x16f880: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16F87Cu, 0x16F884u)) {
        return;
    }
    ctx->pc = 0x16F884u;
label_16f884:
    // 0x16f884: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16F884u;
    SET_GPR_U32(ctx, 31, 0x16F88Cu);
    ctx->pc = 0x16F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F884u;
    // 0x16f888: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16F884u, 0x16F88Cu)) {
        return;
    }
    ctx->pc = 0x16F88Cu;
label_16f88c:
    // 0x16f88c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16f88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f894: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16f894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f898: 0x3e00008  jr          $ra
    ctx->pc = 0x16F898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F898u;
        // 0x16f89c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F8A0u;
}
