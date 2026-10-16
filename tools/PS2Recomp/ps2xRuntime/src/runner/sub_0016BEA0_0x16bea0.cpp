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

// Function: sub_0016BEA0
// Address: 0x16bea0 - 0x16bf88
void sub_0016BEA0_0x16bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BEA0_0x16bea0");
#endif

    switch (ctx->pc) {
        case 0x16bec0u: goto label_16bec0;
        case 0x16bed4u: goto label_16bed4;
        case 0x16bef0u: goto label_16bef0;
        case 0x16bf24u: goto label_16bf24;
        case 0x16bf34u: goto label_16bf34;
        case 0x16bf60u: goto label_16bf60;
        default: break;
    }

    ctx->pc = 0x16bea0u;

    // 0x16bea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16bea4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16bea8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16beac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16beacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16beb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16beb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16beb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16beb8: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16BEB8u;
    SET_GPR_U32(ctx, 31, 0x16BEC0u);
    ctx->pc = 0x16BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BEB8u;
    // 0x16bebc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16BEB8u, 0x16BEC0u)) {
        return;
    }
    ctx->pc = 0x16BEC0u;
label_16bec0:
    // 0x16bec0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16bec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16bec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bec8: 0x8c46f688  lw          $a2, -0x978($v0)
    ctx->pc = 0x16bec8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF688u));
    // 0x16becc: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16BECCu;
    SET_GPR_U32(ctx, 31, 0x16BED4u);
    ctx->pc = 0x16BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BECCu;
    // 0x16bed0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16BECCu, 0x16BED4u)) {
        return;
    }
    ctx->pc = 0x16BED4u;
label_16bed4:
    // 0x16bed4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bed8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bedc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16BEDCu;
    {
        const bool branch_taken_0x16bedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEDCu;
        // 0x16bee0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bedc) {
            ctx->pc = 0x16BF70u;
            goto label_16bf70;
        }
    }
    ctx->pc = 0x16BEE4u;
    // 0x16bee4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16bee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bee8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16beec: 0x0  nop
    ctx->pc = 0x16beecu;
    // NOP
label_16bef0:
    // 0x16bef0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16bef4: 0x5052000d  beql        $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x16BEF4u;
    {
        const bool branch_taken_0x16bef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x16bef4) {
            ctx->pc = 0x16BEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BEF4u;
            // 0x16bef8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BF2Cu;
            goto label_16bf2c;
        }
    }
    ctx->pc = 0x16BEFCu;
    // 0x16befc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BEFCu;
    {
        const bool branch_taken_0x16befc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEFCu;
        // 0x16bf00: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16befc) {
            ctx->pc = 0x16BF14u;
            goto label_16bf14;
        }
    }
    ctx->pc = 0x16BF04u;
    // 0x16bf04: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x16BF04u;
    {
        const bool branch_taken_0x16bf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x16BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF04u;
        // 0x16bf08: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf04) {
            ctx->pc = 0x16BF3Cu;
            goto label_16bf3c;
        }
    }
    ctx->pc = 0x16BF0Cu;
    // 0x16bf0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16BF0Cu;
    {
        const bool branch_taken_0x16bf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF0Cu;
        // 0x16bf10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf0c) {
            ctx->pc = 0x16BF4Cu;
            goto label_16bf4c;
        }
    }
    ctx->pc = 0x16BF14u;
label_16bf14:
    // 0x16bf14: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x16bf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16bf18: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16bf1c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16BF1Cu;
    SET_GPR_U32(ctx, 31, 0x16BF24u);
    ctx->pc = 0x16BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF1Cu;
    // 0x16bf20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16BF1Cu, 0x16BF24u)) {
        return;
    }
    ctx->pc = 0x16BF24u;
label_16bf24:
    // 0x16bf24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16BF24u;
    {
        const bool branch_taken_0x16bf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF24u;
        // 0x16bf28: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf24) {
            ctx->pc = 0x16BF48u;
            goto label_16bf48;
        }
    }
    ctx->pc = 0x16BF2Cu;
label_16bf2c:
    // 0x16bf2c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x16BF2Cu;
    SET_GPR_U32(ctx, 31, 0x16BF34u);
    ctx->pc = 0x16BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF2Cu;
    // 0x16bf30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x16BF2Cu, 0x16BF34u)) {
        return;
    }
    ctx->pc = 0x16BF34u;
label_16bf34:
    // 0x16bf34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16BF34u;
    {
        const bool branch_taken_0x16bf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF34u;
        // 0x16bf38: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf34) {
            ctx->pc = 0x16BF44u;
            goto label_16bf44;
        }
    }
    ctx->pc = 0x16BF3Cu;
label_16bf3c:
    // 0x16bf3c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16bf40: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x16bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_16bf44:
    // 0x16bf44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16bf48:
    // 0x16bf48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16bf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16bf4c:
    // 0x16bf4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16bf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bf50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bf54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bf58: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16BF58u;
    SET_GPR_U32(ctx, 31, 0x16BF60u);
    ctx->pc = 0x16BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF58u;
    // 0x16bf5c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16BF58u, 0x16BF60u)) {
        return;
    }
    ctx->pc = 0x16BF60u;
label_16bf60:
    // 0x16bf60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bf68: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x16BF68u;
    {
        const bool branch_taken_0x16bf68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF68u;
        // 0x16bf6c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf68) {
            ctx->pc = 0x16BEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bef0;
        }
    }
    ctx->pc = 0x16BF70u;
label_16bf70:
    // 0x16bf70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16bf70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16bf74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16bf74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bf78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16bf78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bf7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf80: 0x3e00008  jr          $ra
    ctx->pc = 0x16BF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF80u;
        // 0x16bf84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BF88u;
}
