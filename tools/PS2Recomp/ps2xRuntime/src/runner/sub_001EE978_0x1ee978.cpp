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

// Function: sub_001EE978
// Address: 0x1ee978 - 0x1ee9f0
void sub_001EE978_0x1ee978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE978_0x1ee978");
#endif

    switch (ctx->pc) {
        case 0x1ee9b8u: goto label_1ee9b8;
        case 0x1ee9ccu: goto label_1ee9cc;
        case 0x1ee9e0u: goto label_1ee9e0;
        default: break;
    }

    ctx->pc = 0x1ee978u;

    // 0x1ee978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ee97c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ee97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ee980: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EE980u;
    {
        const bool branch_taken_0x1ee980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE980u;
        // 0x1ee984: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee980) {
            ctx->pc = 0x1EE9E0u;
            goto label_1ee9e0;
        }
    }
    ctx->pc = 0x1EE988u;
    // 0x1ee988: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ee988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1ee98c: 0x8c62e7bc  lw          $v0, -0x1844($v1)
    ctx->pc = 0x1ee98cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1ee990: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ee990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ee994: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1ee994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ee998: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE998u;
    {
        const bool branch_taken_0x1ee998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee998) {
            ctx->pc = 0x1EE99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE998u;
            // 0x1ee99c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE9E4u;
            goto label_1ee9e4;
        }
    }
    ctx->pc = 0x1EE9A0u;
    // 0x1ee9a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ee9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee9a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ee9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ee9a8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE9A8u;
    {
        const bool branch_taken_0x1ee9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee9a8) {
            ctx->pc = 0x1EE9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE9A8u;
            // 0x1ee9ac: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE9BCu;
            goto label_1ee9bc;
        }
    }
    ctx->pc = 0x1EE9B0u;
    // 0x1ee9b0: 0xc07b83c  jal         func_1EE0F0
    ctx->pc = 0x1EE9B0u;
    SET_GPR_U32(ctx, 31, 0x1EE9B8u);
    ctx->pc = 0x1EE9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE9B0u;
    // 0x1ee9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EE0F0u, 0x1EE9B0u, 0x1EE9B8u)) {
        return;
    }
    ctx->pc = 0x1EE9B8u;
label_1ee9b8:
    // 0x1ee9b8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ee9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ee9bc:
    // 0x1ee9bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE9BCu;
    {
        const bool branch_taken_0x1ee9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee9bc) {
            ctx->pc = 0x1EE9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE9BCu;
            // 0x1ee9c0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE9D0u;
            goto label_1ee9d0;
        }
    }
    ctx->pc = 0x1EE9C4u;
    // 0x1ee9c4: 0xc07ba44  jal         func_1EE910
    ctx->pc = 0x1EE9C4u;
    SET_GPR_U32(ctx, 31, 0x1EE9CCu);
    ctx->pc = 0x1EE910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EE910u, 0x1EE9C4u, 0x1EE9CCu)) {
        return;
    }
    ctx->pc = 0x1EE9CCu;
label_1ee9cc:
    // 0x1ee9cc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ee9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ee9d0:
    // 0x1ee9d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE9D0u;
    {
        const bool branch_taken_0x1ee9d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9D0u;
        // 0x1ee9d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9d0) {
            ctx->pc = 0x1EE9E4u;
            goto label_1ee9e4;
        }
    }
    ctx->pc = 0x1EE9D8u;
    // 0x1ee9d8: 0xc07ba44  jal         func_1EE910
    ctx->pc = 0x1EE9D8u;
    SET_GPR_U32(ctx, 31, 0x1EE9E0u);
    ctx->pc = 0x1EE910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EE910u, 0x1EE9D8u, 0x1EE9E0u)) {
        return;
    }
    ctx->pc = 0x1EE9E0u;
label_1ee9e0:
    // 0x1ee9e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ee9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee9e4:
    // 0x1ee9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9E8u;
        // 0x1ee9ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE9F0u;
}
