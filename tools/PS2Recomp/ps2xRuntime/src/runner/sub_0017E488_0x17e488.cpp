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

// Function: sub_0017E488
// Address: 0x17e488 - 0x17e530
void sub_0017E488_0x17e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E488_0x17e488");
#endif

    switch (ctx->pc) {
        case 0x17e4c0u: goto label_17e4c0;
        case 0x17e4d4u: goto label_17e4d4;
        case 0x17e4ecu: goto label_17e4ec;
        case 0x17e504u: goto label_17e504;
        default: break;
    }

    ctx->pc = 0x17e488u;

    // 0x17e488: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17e488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17e48c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17e490: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x17e494: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17e494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17e498: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17e49c: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x17e49cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17e4a0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x17e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x17e4a4: 0x24738870  addiu       $s3, $v1, -0x7790
    ctx->pc = 0x17e4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936688));
    // 0x17e4a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x17e4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x17e4ac: 0x2454f9a0  addiu       $s4, $v0, -0x660
    ctx->pc = 0x17e4acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965664));
    // 0x17e4b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17e4b4: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x17e4b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    // 0x17e4b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x17e4bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17e4c0:
    // 0x17e4c0: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x17e4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17e4c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17e4c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17e4c8: 0x8eb08858  lw          $s0, -0x77A8($s5)
    ctx->pc = 0x17e4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936664)));
    // 0x17e4cc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17E4CCu;
    SET_GPR_U32(ctx, 31, 0x17E4D4u);
    ctx->pc = 0x17E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4CCu;
    // 0x17e4d0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17E4CCu, 0x17E4D4u)) {
        return;
    }
    ctx->pc = 0x17E4D4u;
label_17e4d4:
    // 0x17e4d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E4DCu;
    {
        const bool branch_taken_0x17e4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4DCu;
        // 0x17e4e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4dc) {
            ctx->pc = 0x17E504u;
            goto label_17e504;
        }
    }
    ctx->pc = 0x17E4E4u;
    // 0x17e4e4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17E4E4u;
    SET_GPR_U32(ctx, 31, 0x17E4ECu);
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17E4E4u, 0x17E4ECu)) {
        return;
    }
    ctx->pc = 0x17E4ECu;
label_17e4ec:
    // 0x17e4ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x17e4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E4F4u;
    {
        const bool branch_taken_0x17e4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4F4u;
        // 0x17e4f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4f4) {
            ctx->pc = 0x17E504u;
            goto label_17e504;
        }
    }
    ctx->pc = 0x17E4FCu;
    // 0x17e4fc: 0xc07d368  jal         func_1F4DA0
    ctx->pc = 0x17E4FCu;
    SET_GPR_U32(ctx, 31, 0x17E504u);
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x17E4FCu, 0x17E504u)) {
        return;
    }
    ctx->pc = 0x17E504u;
label_17e504:
    // 0x17e504: 0x641ffee  bgez        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17E504u;
    {
        const bool branch_taken_0x17e504 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x17E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E504u;
        // 0x17e508: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e504) {
            ctx->pc = 0x17E4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e4c0;
        }
    }
    ctx->pc = 0x17E50Cu;
    // 0x17e50c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17e50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e510: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17e510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e514: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17e514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e518: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e51c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17e51cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e520: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x17e520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e528: 0x3e00008  jr          $ra
    ctx->pc = 0x17E528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E528u;
        // 0x17e52c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E530u;
}
