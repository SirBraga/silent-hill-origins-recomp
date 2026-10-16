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

// Function: sub_0016C7A0
// Address: 0x16c7a0 - 0x16c810
void sub_0016C7A0_0x16c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C7A0_0x16c7a0");
#endif

    switch (ctx->pc) {
        case 0x16c7b4u: goto label_16c7b4;
        case 0x16c7d8u: goto label_16c7d8;
        case 0x16c7e0u: goto label_16c7e0;
        case 0x16c7f4u: goto label_16c7f4;
        case 0x16c7fcu: goto label_16c7fc;
        default: break;
    }

    ctx->pc = 0x16c7a0u;

    // 0x16c7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c7a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16c7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c7ac: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16C7ACu;
    SET_GPR_U32(ctx, 31, 0x16C7B4u);
    ctx->pc = 0x16C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7ACu;
    // 0x16c7b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16C7ACu, 0x16C7B4u)) {
        return;
    }
    ctx->pc = 0x16C7B4u;
label_16c7b4:
    // 0x16c7b4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16c7b8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16c7bc: 0x24634a08  addiu       $v1, $v1, 0x4A08
    ctx->pc = 0x16c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18952));
    // 0x16c7c0: 0x24424a28  addiu       $v0, $v0, 0x4A28
    ctx->pc = 0x16c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18984));
    // 0x16c7c4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x16c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x16c7c8: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x16c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x16c7cc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16c7d0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16C7D0u;
    SET_GPR_U32(ctx, 31, 0x16C7D8u);
    ctx->pc = 0x16C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7D0u;
    // 0x16c7d4: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16C7D0u, 0x16C7D8u)) {
        return;
    }
    ctx->pc = 0x16C7D8u;
label_16c7d8:
    // 0x16c7d8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16C7D8u;
    SET_GPR_U32(ctx, 31, 0x16C7E0u);
    ctx->pc = 0x16C7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7D8u;
    // 0x16c7dc: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16C7D8u, 0x16C7E0u)) {
        return;
    }
    ctx->pc = 0x16C7E0u;
label_16c7e0:
    // 0x16c7e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c7e4: 0x260400fc  addiu       $a0, $s0, 0xFC
    ctx->pc = 0x16c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    // 0x16c7e8: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x16c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x16c7ec: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16C7ECu;
    SET_GPR_U32(ctx, 31, 0x16C7F4u);
    ctx->pc = 0x16C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7ECu;
    // 0x16c7f0: 0xae0300f0  sw          $v1, 0xF0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16C7ECu, 0x16C7F4u)) {
        return;
    }
    ctx->pc = 0x16C7F4u;
label_16c7f4:
    // 0x16c7f4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16C7F4u;
    SET_GPR_U32(ctx, 31, 0x16C7FCu);
    ctx->pc = 0x16C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7F4u;
    // 0x16c7f8: 0x26040104  addiu       $a0, $s0, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16C7F4u, 0x16C7FCu)) {
        return;
    }
    ctx->pc = 0x16C7FCu;
label_16c7fc:
    // 0x16c7fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16c7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c804: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c808: 0x3e00008  jr          $ra
    ctx->pc = 0x16C808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C808u;
        // 0x16c80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C810u;
}
