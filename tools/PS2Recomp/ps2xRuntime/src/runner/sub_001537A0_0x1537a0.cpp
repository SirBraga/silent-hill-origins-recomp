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

// Function: sub_001537A0
// Address: 0x1537a0 - 0x153808
void sub_001537A0_0x1537a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001537A0_0x1537a0");
#endif

    switch (ctx->pc) {
        case 0x1537b4u: goto label_1537b4;
        case 0x1537d4u: goto label_1537d4;
        case 0x1537dcu: goto label_1537dc;
        case 0x1537e4u: goto label_1537e4;
        case 0x1537ecu: goto label_1537ec;
        case 0x1537f4u: goto label_1537f4;
        default: break;
    }

    ctx->pc = 0x1537a0u;

    // 0x1537a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1537a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1537a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1537a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1537a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1537a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1537ac: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x1537ACu;
    SET_GPR_U32(ctx, 31, 0x1537B4u);
    ctx->pc = 0x1537B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537ACu;
    // 0x1537b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x1537ACu, 0x1537B4u)) {
        return;
    }
    ctx->pc = 0x1537B4u;
label_1537b4:
    // 0x1537b4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1537b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1537b8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1537b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1537bc: 0x246326b8  addiu       $v1, $v1, 0x26B8
    ctx->pc = 0x1537bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9912));
    // 0x1537c0: 0x244226d8  addiu       $v0, $v0, 0x26D8
    ctx->pc = 0x1537c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9944));
    // 0x1537c4: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1537c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1537c8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1537c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1537cc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1537CCu;
    SET_GPR_U32(ctx, 31, 0x1537D4u);
    ctx->pc = 0x1537D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537CCu;
    // 0x1537d0: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1537CCu, 0x1537D4u)) {
        return;
    }
    ctx->pc = 0x1537D4u;
label_1537d4:
    // 0x1537d4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1537D4u;
    SET_GPR_U32(ctx, 31, 0x1537DCu);
    ctx->pc = 0x1537D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537D4u;
    // 0x1537d8: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1537D4u, 0x1537DCu)) {
        return;
    }
    ctx->pc = 0x1537DCu;
label_1537dc:
    // 0x1537dc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1537DCu;
    SET_GPR_U32(ctx, 31, 0x1537E4u);
    ctx->pc = 0x1537E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537DCu;
    // 0x1537e0: 0x2604008c  addiu       $a0, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1537DCu, 0x1537E4u)) {
        return;
    }
    ctx->pc = 0x1537E4u;
label_1537e4:
    // 0x1537e4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1537E4u;
    SET_GPR_U32(ctx, 31, 0x1537ECu);
    ctx->pc = 0x1537E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537E4u;
    // 0x1537e8: 0x26040094  addiu       $a0, $s0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1537E4u, 0x1537ECu)) {
        return;
    }
    ctx->pc = 0x1537ECu;
label_1537ec:
    // 0x1537ec: 0xc054e02  jal         func_153808
    ctx->pc = 0x1537ECu;
    SET_GPR_U32(ctx, 31, 0x1537F4u);
    ctx->pc = 0x1537F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537ECu;
    // 0x1537f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153808u, 0x1537ECu, 0x1537F4u)) {
        return;
    }
    ctx->pc = 0x1537F4u;
label_1537f4:
    // 0x1537f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1537f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1537f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1537f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1537fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1537fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153800: 0x3e00008  jr          $ra
    ctx->pc = 0x153800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153800u;
        // 0x153804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153808u;
}
