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

// Function: sub_00170A78
// Address: 0x170a78 - 0x170b40
void sub_00170A78_0x170a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170A78_0x170a78");
#endif

    switch (ctx->pc) {
        case 0x170aa8u: goto label_170aa8;
        case 0x170ab8u: goto label_170ab8;
        case 0x170accu: goto label_170acc;
        case 0x170ae0u: goto label_170ae0;
        case 0x170b14u: goto label_170b14;
        default: break;
    }

    ctx->pc = 0x170a78u;

    // 0x170a78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x170a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x170a7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x170a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x170a80: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x170a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x170a84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a88: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x170a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x170a8c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x170a8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170a90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x170a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x170a94: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x170A94u;
    {
        const bool branch_taken_0x170a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A94u;
        // 0x170a98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a94) {
            ctx->pc = 0x170B20u;
            goto label_170b20;
        }
    }
    ctx->pc = 0x170A9Cu;
    // 0x170a9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x170a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x170aa0: 0xc04e448  jal         func_139120
    ctx->pc = 0x170AA0u;
    SET_GPR_U32(ctx, 31, 0x170AA8u);
    ctx->pc = 0x170AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170AA0u;
    // 0x170aa4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x170AA0u, 0x170AA8u)) {
        return;
    }
    ctx->pc = 0x170AA8u;
label_170aa8:
    // 0x170aa8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x170aa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170aac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x170aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x170ab0: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x170AB0u;
    SET_GPR_U32(ctx, 31, 0x170AB8u);
    ctx->pc = 0x170AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170AB0u;
    // 0x170ab4: 0x245152c8  addiu       $s1, $v0, 0x52C8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x170AB0u, 0x170AB8u)) {
        return;
    }
    ctx->pc = 0x170AB8u;
label_170ab8:
    // 0x170ab8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x170AB8u;
    {
        const bool branch_taken_0x170ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AB8u;
        // 0x170abc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ab8) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x170AC0u;
    // 0x170ac0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x170ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ac4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x170AC4u;
    SET_GPR_U32(ctx, 31, 0x170ACCu);
    ctx->pc = 0x170AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170AC4u;
    // 0x170ac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x170AC4u, 0x170ACCu)) {
        return;
    }
    ctx->pc = 0x170ACCu;
label_170acc:
    // 0x170acc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170ACCu;
    {
        const bool branch_taken_0x170acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170ACCu;
        // 0x170ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170acc) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x170AD4u;
    // 0x170ad4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x170ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ad8: 0xc07d352  jal         func_1F4D48
    ctx->pc = 0x170AD8u;
    SET_GPR_U32(ctx, 31, 0x170AE0u);
    ctx->pc = 0x170ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170AD8u;
    // 0x170adc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x170AD8u, 0x170AE0u)) {
        return;
    }
    ctx->pc = 0x170AE0u;
label_170ae0:
    // 0x170ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170ae4: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x170AE4u;
    {
        const bool branch_taken_0x170ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x170AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AE4u;
        // 0x170ae8: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ae4) {
            ctx->pc = 0x170B0Cu;
            goto label_170b0c;
        }
    }
    ctx->pc = 0x170AECu;
    // 0x170aec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170AECu;
    {
        const bool branch_taken_0x170aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AECu;
        // 0x170af0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170aec) {
            ctx->pc = 0x170B04u;
            goto label_170b04;
        }
    }
    ctx->pc = 0x170AF4u;
    // 0x170af4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x170AF4u;
    {
        const bool branch_taken_0x170af4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x170AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AF4u;
        // 0x170af8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170af4) {
            ctx->pc = 0x170B1Cu;
            goto label_170b1c;
        }
    }
    ctx->pc = 0x170AFCu;
    // 0x170afc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x170AFCu;
    {
        const bool branch_taken_0x170afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AFCu;
        // 0x170b00: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170afc) {
            ctx->pc = 0x170B28u;
            goto label_170b28;
        }
    }
    ctx->pc = 0x170B04u;
label_170b04:
    // 0x170b04: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x170B04u;
    {
        const bool branch_taken_0x170b04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x170B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B04u;
        // 0x170b08: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b04) {
            ctx->pc = 0x170B24u;
            goto label_170b24;
        }
    }
    ctx->pc = 0x170B0Cu;
label_170b0c:
    // 0x170b0c: 0xc05fd80  jal         func_17F600
    ctx->pc = 0x170B0Cu;
    SET_GPR_U32(ctx, 31, 0x170B14u);
    ctx->pc = 0x17F600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F600u, 0x170B0Cu, 0x170B14u)) {
        return;
    }
    ctx->pc = 0x170B14u;
label_170b14:
    // 0x170b14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170B14u;
    {
        const bool branch_taken_0x170b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B14u;
        // 0x170b18: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b14) {
            ctx->pc = 0x170B20u;
            goto label_170b20;
        }
    }
    ctx->pc = 0x170B1Cu;
label_170b1c:
    // 0x170b1c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x170b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170b20:
    // 0x170b20: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x170b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170b24:
    // 0x170b24: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x170b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_170b28:
    // 0x170b28: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x170b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170b2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x170b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170b30: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x170b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170b34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170b38: 0x3e00008  jr          $ra
    ctx->pc = 0x170B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B38u;
        // 0x170b3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170B40u;
}
