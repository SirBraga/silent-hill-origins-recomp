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

// Function: sub_0016A2A8
// Address: 0x16a2a8 - 0x16a2f8
void sub_0016A2A8_0x16a2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A2A8_0x16a2a8");
#endif

    switch (ctx->pc) {
        case 0x16a2bcu: goto label_16a2bc;
        case 0x16a2dcu: goto label_16a2dc;
        default: break;
    }

    ctx->pc = 0x16a2a8u;

    // 0x16a2a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a2ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a2b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a2b4: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16A2B4u;
    SET_GPR_U32(ctx, 31, 0x16A2BCu);
    ctx->pc = 0x16A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2B4u;
    // 0x16a2b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16A2B4u, 0x16A2BCu)) {
        return;
    }
    ctx->pc = 0x16A2BCu;
label_16a2bc:
    // 0x16a2bc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16a2c0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16a2c4: 0x24634538  addiu       $v1, $v1, 0x4538
    ctx->pc = 0x16a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17720));
    // 0x16a2c8: 0x24424558  addiu       $v0, $v0, 0x4558
    ctx->pc = 0x16a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17752));
    // 0x16a2cc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16a2d0: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x16a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x16a2d4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16A2D4u;
    SET_GPR_U32(ctx, 31, 0x16A2DCu);
    ctx->pc = 0x16A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2D4u;
    // 0x16a2d8: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16A2D4u, 0x16A2DCu)) {
        return;
    }
    ctx->pc = 0x16A2DCu;
label_16a2dc:
    // 0x16a2dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2e0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x16a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x16a2e4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x16a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x16a2e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a2ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2F0u;
        // 0x16a2f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A2F8u;
}
