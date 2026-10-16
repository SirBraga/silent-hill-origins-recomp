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

// Function: sub_002F9B60
// Address: 0x2f9b60 - 0x2f9c30
void sub_002F9B60_0x2f9b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9B60_0x2f9b60");
#endif

    switch (ctx->pc) {
        case 0x2f9b9cu: goto label_2f9b9c;
        case 0x2f9bfcu: goto label_2f9bfc;
        case 0x2f9c04u: goto label_2f9c04;
        default: break;
    }

    ctx->pc = 0x2f9b60u;

    // 0x2f9b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f9b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f9b64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f9b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9b6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f9b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f9b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9b74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f9b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f9b78: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x2f9b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2f9b7c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F9B7Cu;
    {
        const bool branch_taken_0x2f9b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B7Cu;
        // 0x2f9b80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b7c) {
            ctx->pc = 0x2F9BA8u;
            goto label_2f9ba8;
        }
    }
    ctx->pc = 0x2F9B84u;
    // 0x2f9b84: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x2f9b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2f9b88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9B88u;
    {
        const bool branch_taken_0x2f9b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B88u;
        // 0x2f9b8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b88) {
            ctx->pc = 0x2F9BA8u;
            goto label_2f9ba8;
        }
    }
    ctx->pc = 0x2F9B90u;
    // 0x2f9b90: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f9b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f9b94: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2F9B94u;
    SET_GPR_U32(ctx, 31, 0x2F9B9Cu);
    ctx->pc = 0x2F9B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9B94u;
    // 0x2f9b98: 0x24a50678  addiu       $a1, $a1, 0x678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2F9B94u, 0x2F9B9Cu)) {
        return;
    }
    ctx->pc = 0x2F9B9Cu;
label_2f9b9c:
    // 0x2f9b9c: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x2f9b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x2f9ba0: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x2f9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2f9ba4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9ba8:
    // 0x2f9ba8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F9BA8u;
    {
        const bool branch_taken_0x2f9ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BA8u;
        // 0x2f9bac: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ba8) {
            ctx->pc = 0x2F9BE4u;
            goto label_2f9be4;
        }
    }
    ctx->pc = 0x2F9BB0u;
    // 0x2f9bb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9BB0u;
    {
        const bool branch_taken_0x2f9bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BB0u;
        // 0x2f9bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bb0) {
            ctx->pc = 0x2F9BC8u;
            goto label_2f9bc8;
        }
    }
    ctx->pc = 0x2F9BB8u;
    // 0x2f9bb8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F9BB8u;
    {
        const bool branch_taken_0x2f9bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BB8u;
        // 0x2f9bbc: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bb8) {
            ctx->pc = 0x2F9BDCu;
            goto label_2f9bdc;
        }
    }
    ctx->pc = 0x2F9BC0u;
    // 0x2f9bc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F9BC0u;
    {
        const bool branch_taken_0x2f9bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BC0u;
        // 0x2f9bc4: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bc0) {
            ctx->pc = 0x2F9BF0u;
            goto label_2f9bf0;
        }
    }
    ctx->pc = 0x2F9BC8u;
label_2f9bc8:
    // 0x2f9bc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f9bcc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9BCCu;
    {
        const bool branch_taken_0x2f9bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BCCu;
        // 0x2f9bd0: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bcc) {
            ctx->pc = 0x2F9BECu;
            goto label_2f9bec;
        }
    }
    ctx->pc = 0x2F9BD4u;
    // 0x2f9bd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9BD4u;
    {
        const bool branch_taken_0x2f9bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BD4u;
        // 0x2f9bd8: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bd4) {
            ctx->pc = 0x2F9BFCu;
            goto label_2f9bfc;
        }
    }
    ctx->pc = 0x2F9BDCu;
label_2f9bdc:
    // 0x2f9bdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9BDCu;
    {
        const bool branch_taken_0x2f9bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BDCu;
        // 0x2f9be0: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bdc) {
            ctx->pc = 0x2F9BFCu;
            goto label_2f9bfc;
        }
    }
    ctx->pc = 0x2F9BE4u;
label_2f9be4:
    // 0x2f9be4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9BE4u;
    {
        const bool branch_taken_0x2f9be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BE4u;
        // 0x2f9be8: 0x8e1101f0  lw          $s1, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9be4) {
            ctx->pc = 0x2F9BFCu;
            goto label_2f9bfc;
        }
    }
    ctx->pc = 0x2F9BECu;
label_2f9bec:
    // 0x2f9bec: 0x8e1101d0  lw          $s1, 0x1D0($s0)
    ctx->pc = 0x2f9becu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_2f9bf0:
    // 0x2f9bf0: 0x24a50698  addiu       $a1, $a1, 0x698
    ctx->pc = 0x2f9bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1688));
    // 0x2f9bf4: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2F9BF4u;
    SET_GPR_U32(ctx, 31, 0x2F9BFCu);
    ctx->pc = 0x2F9BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9BF4u;
    // 0x2f9bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2F9BF4u, 0x2F9BFCu)) {
        return;
    }
    ctx->pc = 0x2F9BFCu;
label_2f9bfc:
    // 0x2f9bfc: 0xc0bfbe6  jal         func_2FEF98
    ctx->pc = 0x2F9BFCu;
    SET_GPR_U32(ctx, 31, 0x2F9C04u);
    ctx->pc = 0x2F9C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9BFCu;
    // 0x2f9c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FEF98u, 0x2F9BFCu, 0x2F9C04u)) {
        return;
    }
    ctx->pc = 0x2F9C04u;
label_2f9c04:
    // 0x2f9c04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f9c04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c08: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9C08u;
    {
        const bool branch_taken_0x2f9c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C08u;
        // 0x2f9c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c08) {
            ctx->pc = 0x2F9C14u;
            goto label_2f9c14;
        }
    }
    ctx->pc = 0x2F9C10u;
    // 0x2f9c10: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2f9c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_2f9c14:
    // 0x2f9c14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f9c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9c18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f9c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f9c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9c24: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C24u;
        // 0x2f9c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9C2Cu;
    // 0x2f9c2c: 0x0  nop
    ctx->pc = 0x2f9c2cu;
    // NOP
    ctx->pc = 0x2f9c30u;
}
