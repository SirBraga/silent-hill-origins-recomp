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

// Function: sub_001E3A70
// Address: 0x1e3a70 - 0x1e3b18
void sub_001E3A70_0x1e3a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3A70_0x1e3a70");
#endif

    switch (ctx->pc) {
        case 0x1e3a9cu: goto label_1e3a9c;
        case 0x1e3ab0u: goto label_1e3ab0;
        case 0x1e3ab8u: goto label_1e3ab8;
        case 0x1e3ad4u: goto label_1e3ad4;
        default: break;
    }

    ctx->pc = 0x1e3a70u;

    // 0x1e3a70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e3a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e3a74: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e3a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e3a78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e3a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3a7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e3a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e3a80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e3a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e3a84: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e3a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1e3a88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3a8c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e3a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1e3a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3a94: 0xc078ec6  jal         func_1E3B18
    ctx->pc = 0x1E3A94u;
    SET_GPR_U32(ctx, 31, 0x1E3A9Cu);
    ctx->pc = 0x1E3A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A94u;
    // 0x1e3a98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B18u, 0x1E3A94u, 0x1E3A9Cu)) {
        return;
    }
    ctx->pc = 0x1E3A9Cu;
label_1e3a9c:
    // 0x1e3a9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e3a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3aa0: 0x1a600013  blez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E3AA0u;
    {
        const bool branch_taken_0x1e3aa0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1E3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AA0u;
        // 0x1e3aa4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3aa0) {
            ctx->pc = 0x1E3AF0u;
            goto label_1e3af0;
        }
    }
    ctx->pc = 0x1E3AA8u;
    // 0x1e3aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3aac: 0x0  nop
    ctx->pc = 0x1e3aacu;
    // NOP
label_1e3ab0:
    // 0x1e3ab0: 0xc078ece  jal         func_1E3B38
    ctx->pc = 0x1E3AB0u;
    SET_GPR_U32(ctx, 31, 0x1E3AB8u);
    ctx->pc = 0x1E3AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3AB0u;
    // 0x1e3ab4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B38u, 0x1E3AB0u, 0x1E3AB8u)) {
        return;
    }
    ctx->pc = 0x1E3AB8u;
label_1e3ab8:
    // 0x1e3ab8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3AB8u;
    {
        const bool branch_taken_0x1e3ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AB8u;
        // 0x1e3abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ab8) {
            ctx->pc = 0x1E3ACCu;
            goto label_1e3acc;
        }
    }
    ctx->pc = 0x1E3AC0u;
    // 0x1e3ac0: 0x54540008  bnel        $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3AC0u;
    {
        const bool branch_taken_0x1e3ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1e3ac0) {
            ctx->pc = 0x1E3AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3AC0u;
            // 0x1e3ac4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3AE4u;
            goto label_1e3ae4;
        }
    }
    ctx->pc = 0x1E3AC8u;
    // 0x1e3ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3acc:
    // 0x1e3acc: 0xc078ec8  jal         func_1E3B20
    ctx->pc = 0x1E3ACCu;
    SET_GPR_U32(ctx, 31, 0x1E3AD4u);
    ctx->pc = 0x1E3AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3ACCu;
    // 0x1e3ad0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1E3ACCu, 0x1E3AD4u)) {
        return;
    }
    ctx->pc = 0x1E3AD4u;
label_1e3ad4:
    // 0x1e3ad4: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x1e3ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1e3ad8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e3adc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1e3adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3ae0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e3ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e3ae4:
    // 0x1e3ae4: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1e3ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1e3ae8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1E3AE8u;
    {
        const bool branch_taken_0x1e3ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AE8u;
        // 0x1e3aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ae8) {
            ctx->pc = 0x1E3AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3ab0;
        }
    }
    ctx->pc = 0x1E3AF0u;
label_1e3af0:
    // 0x1e3af0: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x1e3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e3af4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e3af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3af8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e3af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3afc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e3afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3b00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e3b00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3b04: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1e3b04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B0Cu;
        // 0x1e3b10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3B14u;
    // 0x1e3b14: 0x0  nop
    ctx->pc = 0x1e3b14u;
    // NOP
    ctx->pc = 0x1e3b18u;
}
