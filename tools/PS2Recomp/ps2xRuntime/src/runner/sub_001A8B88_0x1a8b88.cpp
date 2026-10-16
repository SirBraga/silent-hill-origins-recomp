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

// Function: sub_001A8B88
// Address: 0x1a8b88 - 0x1a8be0
void sub_001A8B88_0x1a8b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8B88_0x1a8b88");
#endif

    switch (ctx->pc) {
        case 0x1a8bbcu: goto label_1a8bbc;
        case 0x1a8bc8u: goto label_1a8bc8;
        default: break;
    }

    ctx->pc = 0x1a8b88u;

    // 0x1a8b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8b8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a8b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a8b90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a8b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a8b94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a8b98: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A8B98u;
    {
        const bool branch_taken_0x1a8b98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B98u;
        // 0x1a8b9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b98) {
            ctx->pc = 0x1A8BC8u;
            goto label_1a8bc8;
        }
    }
    ctx->pc = 0x1A8BA0u;
    // 0x1a8ba0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8BA0u;
    {
        const bool branch_taken_0x1a8ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BA0u;
        // 0x1a8ba4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ba0) {
            ctx->pc = 0x1A8BC8u;
            goto label_1a8bc8;
        }
    }
    ctx->pc = 0x1A8BA8u;
    // 0x1a8ba8: 0x24508200  addiu       $s0, $v0, -0x7E00
    ctx->pc = 0x1a8ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935040));
    // 0x1a8bac: 0xac408200  sw          $zero, -0x7E00($v0)
    ctx->pc = 0x1a8bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935040), GPR_U32(ctx, 0));
    // 0x1a8bb0: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x1a8bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a8bb4: 0xc06a332  jal         func_1A8CC8
    ctx->pc = 0x1A8BB4u;
    SET_GPR_U32(ctx, 31, 0x1A8BBCu);
    ctx->pc = 0x1A8BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8BB4u;
    // 0x1a8bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8CC8u, 0x1A8BB4u, 0x1A8BBCu)) {
        return;
    }
    ctx->pc = 0x1A8BBCu;
label_1a8bbc:
    // 0x1a8bbc: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x1a8bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
    // 0x1a8bc0: 0xc06a2f8  jal         func_1A8BE0
    ctx->pc = 0x1A8BC0u;
    SET_GPR_U32(ctx, 31, 0x1A8BC8u);
    ctx->pc = 0x1A8BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8BC0u;
    // 0x1a8bc4: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8BE0u, 0x1A8BC0u, 0x1A8BC8u)) {
        return;
    }
    ctx->pc = 0x1A8BC8u;
label_1a8bc8:
    // 0x1a8bc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a8bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8bcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a8bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BD4u;
        // 0x1a8bd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8BDCu;
    // 0x1a8bdc: 0x0  nop
    ctx->pc = 0x1a8bdcu;
    // NOP
    ctx->pc = 0x1a8be0u;
}
