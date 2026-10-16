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

// Function: sub_0018BE50
// Address: 0x18be50 - 0x18bf30
void sub_0018BE50_0x18be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BE50_0x18be50");
#endif

    switch (ctx->pc) {
        case 0x18be70u: goto label_18be70;
        case 0x18be84u: goto label_18be84;
        case 0x18bea0u: goto label_18bea0;
        case 0x18bed0u: goto label_18bed0;
        case 0x18bf04u: goto label_18bf04;
        default: break;
    }

    ctx->pc = 0x18be50u;

    // 0x18be50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18be54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18be54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18be58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18be5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18be5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18be60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18be64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18be64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18be68: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x18BE68u;
    SET_GPR_U32(ctx, 31, 0x18BE70u);
    ctx->pc = 0x18BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE68u;
    // 0x18be6c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x18BE68u, 0x18BE70u)) {
        return;
    }
    ctx->pc = 0x18BE70u;
label_18be70:
    // 0x18be70: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18be70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x18be74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18be74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be78: 0x8c46bd60  lw          $a2, -0x42A0($v0)
    ctx->pc = 0x18be78u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6CBD60u));
    // 0x18be7c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x18BE7Cu;
    SET_GPR_U32(ctx, 31, 0x18BE84u);
    ctx->pc = 0x18BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BE7Cu;
    // 0x18be80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x18BE7Cu, 0x18BE84u)) {
        return;
    }
    ctx->pc = 0x18BE84u;
label_18be84:
    // 0x18be84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18be84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18be88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18be8c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x18BE8Cu;
    {
        const bool branch_taken_0x18be8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE8Cu;
        // 0x18be90: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be8c) {
            ctx->pc = 0x18BF14u;
            goto label_18bf14;
        }
    }
    ctx->pc = 0x18BE94u;
    // 0x18be94: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x18be94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18be98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18be98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18be9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18bea0:
    // 0x18bea0: 0x5072000d  beql        $v1, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x18BEA0u;
    {
        const bool branch_taken_0x18bea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x18bea0) {
            ctx->pc = 0x18BEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BEA0u;
            // 0x18bea4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BED8u;
            goto label_18bed8;
        }
    }
    ctx->pc = 0x18BEA8u;
    // 0x18bea8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BEA8u;
    {
        const bool branch_taken_0x18bea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEA8u;
        // 0x18beac: 0x24460008  addiu       $a2, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bea8) {
            ctx->pc = 0x18BEC0u;
            goto label_18bec0;
        }
    }
    ctx->pc = 0x18BEB0u;
    // 0x18beb0: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x18BEB0u;
    {
        const bool branch_taken_0x18beb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x18BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEB0u;
        // 0x18beb4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18beb0) {
            ctx->pc = 0x18BEE0u;
            goto label_18bee0;
        }
    }
    ctx->pc = 0x18BEB8u;
    // 0x18beb8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18BEB8u;
    {
        const bool branch_taken_0x18beb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEB8u;
        // 0x18bebc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18beb8) {
            ctx->pc = 0x18BEF0u;
            goto label_18bef0;
        }
    }
    ctx->pc = 0x18BEC0u;
label_18bec0:
    // 0x18bec0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x18bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x18bec4: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x18bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x18bec8: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x18BEC8u;
    SET_GPR_U32(ctx, 31, 0x18BED0u);
    ctx->pc = 0x18BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BEC8u;
    // 0x18becc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x18BEC8u, 0x18BED0u)) {
        return;
    }
    ctx->pc = 0x18BED0u;
label_18bed0:
    // 0x18bed0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18BED0u;
    {
        const bool branch_taken_0x18bed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BED0u;
        // 0x18bed4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bed0) {
            ctx->pc = 0x18BEECu;
            goto label_18beec;
        }
    }
    ctx->pc = 0x18BED8u;
label_18bed8:
    // 0x18bed8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18BED8u;
    {
        const bool branch_taken_0x18bed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BED8u;
        // 0x18bedc: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bed8) {
            ctx->pc = 0x18BEE8u;
            goto label_18bee8;
        }
    }
    ctx->pc = 0x18BEE0u;
label_18bee0:
    // 0x18bee0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18bee4: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x18bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_18bee8:
    // 0x18bee8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18beec:
    // 0x18beec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18beecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18bef0:
    // 0x18bef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bef4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18bef8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18befc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x18BEFCu;
    SET_GPR_U32(ctx, 31, 0x18BF04u);
    ctx->pc = 0x18BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BEFCu;
    // 0x18bf00: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x18BEFCu, 0x18BF04u)) {
        return;
    }
    ctx->pc = 0x18BF04u;
label_18bf04:
    // 0x18bf04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bf08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18bf0c: 0x5460ffe4  bnel        $v1, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x18BF0Cu;
    {
        const bool branch_taken_0x18bf0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bf0c) {
            ctx->pc = 0x18BF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BF0Cu;
            // 0x18bf10: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bea0;
        }
    }
    ctx->pc = 0x18BF14u;
label_18bf14:
    // 0x18bf14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18bf14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bf18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18bf18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bf1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bf1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bf20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18bf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bf24: 0x3e00008  jr          $ra
    ctx->pc = 0x18BF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF24u;
        // 0x18bf28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BF2Cu;
    // 0x18bf2c: 0x0  nop
    ctx->pc = 0x18bf2cu;
    // NOP
    ctx->pc = 0x18bf30u;
}
