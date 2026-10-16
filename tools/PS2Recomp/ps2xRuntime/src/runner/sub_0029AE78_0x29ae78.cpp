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

// Function: sub_0029AE78
// Address: 0x29ae78 - 0x29af88
void sub_0029AE78_0x29ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AE78_0x29ae78");
#endif

    switch (ctx->pc) {
        case 0x29af08u: goto label_29af08;
        case 0x29af30u: goto label_29af30;
        default: break;
    }

    ctx->pc = 0x29ae78u;

    // 0x29ae78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29ae78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29ae7c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x29ae7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x29ae80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29ae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29ae84: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x29ae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29ae88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ae88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae8c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29ae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29ae90: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29ae90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae94: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29ae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29ae98: 0x79603  sra         $s2, $a3, 24
    ctx->pc = 0x29ae98u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 24));
    // 0x29ae9c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29ae9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29aea0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29aea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aea4: 0x1e200007  bgtz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AEA4u;
    {
        const bool branch_taken_0x29aea4 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x29AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEA4u;
        // 0x29aea8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aea4) {
            ctx->pc = 0x29AEC4u;
            goto label_29aec4;
        }
    }
    ctx->pc = 0x29AEACu;
    // 0x29aeac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29aeb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29aeb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aeb4: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x29aeb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29aeb8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x29aeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x29aebc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x29AEBCu;
    {
        const bool branch_taken_0x29aebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEBCu;
        // 0x29aec0: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aebc) {
            ctx->pc = 0x29AF68u;
            goto label_29af68;
        }
    }
    ctx->pc = 0x29AEC4u;
label_29aec4:
    // 0x29aec4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29aec8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29aec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29aecc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AECCu;
    {
        const bool branch_taken_0x29aecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AECCu;
        // 0x29aed0: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aecc) {
            ctx->pc = 0x29AEE0u;
            goto label_29aee0;
        }
    }
    ctx->pc = 0x29AED4u;
    // 0x29aed4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29aed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aed8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29AED8u;
    {
        const bool branch_taken_0x29aed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AED8u;
        // 0x29aedc: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aed8) {
            ctx->pc = 0x29AF0Cu;
            goto label_29af0c;
        }
    }
    ctx->pc = 0x29AEE0u;
label_29aee0:
    // 0x29aee0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x29aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29aee4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29AEE4u;
    {
        const bool branch_taken_0x29aee4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEE4u;
        // 0x29aee8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aee4) {
            ctx->pc = 0x29AF0Cu;
            goto label_29af0c;
        }
    }
    ctx->pc = 0x29AEECu;
    // 0x29aeec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29aef0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29aef4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29aef8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AEF8u;
    {
        const bool branch_taken_0x29aef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEF8u;
        // 0x29aefc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aef8) {
            ctx->pc = 0x29AF0Cu;
            goto label_29af0c;
        }
    }
    ctx->pc = 0x29AF00u;
    // 0x29af00: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x29AF00u;
    SET_GPR_U32(ctx, 31, 0x29AF08u);
    ctx->pc = 0x29AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF00u;
    // 0x29af04: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x29AF00u, 0x29AF08u)) {
        return;
    }
    ctx->pc = 0x29AF08u;
label_29af08:
    // 0x29af08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29af08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29af0c:
    // 0x29af0c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29AF0Cu;
    {
        const bool branch_taken_0x29af0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF0Cu;
        // 0x29af10: 0x2626ffff  addiu       $a2, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af0c) {
            ctx->pc = 0x29AF58u;
            goto label_29af58;
        }
    }
    ctx->pc = 0x29AF14u;
    // 0x29af14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29af18: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29af18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29af1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29af20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29af24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x29af24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29af28: 0xc0a799c  jal         func_29E670
    ctx->pc = 0x29AF28u;
    SET_GPR_U32(ctx, 31, 0x29AF30u);
    ctx->pc = 0x29AF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF28u;
    // 0x29af2c: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E670u, 0x29AF28u, 0x29AF30u)) {
        return;
    }
    ctx->pc = 0x29AF30u;
label_29af30:
    // 0x29af30: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29AF30u;
    {
        const bool branch_taken_0x29af30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF30u;
        // 0x29af34: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af30) {
            ctx->pc = 0x29AF58u;
            goto label_29af58;
        }
    }
    ctx->pc = 0x29AF38u;
    // 0x29af38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29af3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29af40: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29AF40u;
    {
        const bool branch_taken_0x29af40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29af40) {
            ctx->pc = 0x29AF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AF40u;
            // 0x29af44: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AF5Cu;
            goto label_29af5c;
        }
    }
    ctx->pc = 0x29AF48u;
    // 0x29af48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29af48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29af4c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29af4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29af50: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x29af50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x29af54: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x29af54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_29af58:
    // 0x29af58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29af5c:
    // 0x29af5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29af5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af60: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x29af60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x29af64: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x29af64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_29af68:
    // 0x29af68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29af68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29af6c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29af6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29af70: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29af70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29af74: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29af74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29af78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29af78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29af7c: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF7Cu;
        // 0x29af80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AF84u;
    // 0x29af84: 0x0  nop
    ctx->pc = 0x29af84u;
    // NOP
    ctx->pc = 0x29af88u;
}
