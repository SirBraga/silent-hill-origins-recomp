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

// Function: sub_0020ED30
// Address: 0x20ed30 - 0x20eed0
void sub_0020ED30_0x20ed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ED30_0x20ed30");
#endif

    switch (ctx->pc) {
        case 0x20ed30u: goto label_20ed30;
        case 0x20ed34u: goto label_20ed34;
        case 0x20ed38u: goto label_20ed38;
        case 0x20ed3cu: goto label_20ed3c;
        case 0x20ed40u: goto label_20ed40;
        case 0x20ed44u: goto label_20ed44;
        case 0x20ed48u: goto label_20ed48;
        case 0x20ed4cu: goto label_20ed4c;
        case 0x20ed50u: goto label_20ed50;
        case 0x20ed54u: goto label_20ed54;
        case 0x20ed58u: goto label_20ed58;
        case 0x20ed5cu: goto label_20ed5c;
        case 0x20ed60u: goto label_20ed60;
        case 0x20ed64u: goto label_20ed64;
        case 0x20ed68u: goto label_20ed68;
        case 0x20ed6cu: goto label_20ed6c;
        case 0x20ed70u: goto label_20ed70;
        case 0x20ed74u: goto label_20ed74;
        case 0x20ed78u: goto label_20ed78;
        case 0x20ed7cu: goto label_20ed7c;
        case 0x20ed80u: goto label_20ed80;
        case 0x20ed84u: goto label_20ed84;
        case 0x20ed88u: goto label_20ed88;
        case 0x20ed8cu: goto label_20ed8c;
        case 0x20ed90u: goto label_20ed90;
        case 0x20ed94u: goto label_20ed94;
        case 0x20ed98u: goto label_20ed98;
        case 0x20ed9cu: goto label_20ed9c;
        case 0x20eda0u: goto label_20eda0;
        case 0x20eda4u: goto label_20eda4;
        case 0x20eda8u: goto label_20eda8;
        case 0x20edacu: goto label_20edac;
        case 0x20edb0u: goto label_20edb0;
        case 0x20edb4u: goto label_20edb4;
        case 0x20edb8u: goto label_20edb8;
        case 0x20edbcu: goto label_20edbc;
        case 0x20edc0u: goto label_20edc0;
        case 0x20edc4u: goto label_20edc4;
        case 0x20edc8u: goto label_20edc8;
        case 0x20edccu: goto label_20edcc;
        case 0x20edd0u: goto label_20edd0;
        case 0x20edd4u: goto label_20edd4;
        case 0x20edd8u: goto label_20edd8;
        case 0x20eddcu: goto label_20eddc;
        case 0x20ede0u: goto label_20ede0;
        case 0x20ede4u: goto label_20ede4;
        case 0x20ede8u: goto label_20ede8;
        case 0x20edecu: goto label_20edec;
        case 0x20edf0u: goto label_20edf0;
        case 0x20edf4u: goto label_20edf4;
        case 0x20edf8u: goto label_20edf8;
        case 0x20edfcu: goto label_20edfc;
        case 0x20ee00u: goto label_20ee00;
        case 0x20ee04u: goto label_20ee04;
        case 0x20ee08u: goto label_20ee08;
        case 0x20ee0cu: goto label_20ee0c;
        case 0x20ee10u: goto label_20ee10;
        case 0x20ee14u: goto label_20ee14;
        case 0x20ee18u: goto label_20ee18;
        case 0x20ee1cu: goto label_20ee1c;
        case 0x20ee20u: goto label_20ee20;
        case 0x20ee24u: goto label_20ee24;
        case 0x20ee28u: goto label_20ee28;
        case 0x20ee2cu: goto label_20ee2c;
        case 0x20ee30u: goto label_20ee30;
        case 0x20ee34u: goto label_20ee34;
        case 0x20ee38u: goto label_20ee38;
        case 0x20ee3cu: goto label_20ee3c;
        case 0x20ee40u: goto label_20ee40;
        case 0x20ee44u: goto label_20ee44;
        case 0x20ee48u: goto label_20ee48;
        case 0x20ee4cu: goto label_20ee4c;
        case 0x20ee50u: goto label_20ee50;
        case 0x20ee54u: goto label_20ee54;
        case 0x20ee58u: goto label_20ee58;
        case 0x20ee5cu: goto label_20ee5c;
        case 0x20ee60u: goto label_20ee60;
        case 0x20ee64u: goto label_20ee64;
        case 0x20ee68u: goto label_20ee68;
        case 0x20ee6cu: goto label_20ee6c;
        case 0x20ee70u: goto label_20ee70;
        case 0x20ee74u: goto label_20ee74;
        case 0x20ee78u: goto label_20ee78;
        case 0x20ee7cu: goto label_20ee7c;
        case 0x20ee80u: goto label_20ee80;
        case 0x20ee84u: goto label_20ee84;
        case 0x20ee88u: goto label_20ee88;
        case 0x20ee8cu: goto label_20ee8c;
        case 0x20ee90u: goto label_20ee90;
        case 0x20ee94u: goto label_20ee94;
        case 0x20ee98u: goto label_20ee98;
        case 0x20ee9cu: goto label_20ee9c;
        case 0x20eea0u: goto label_20eea0;
        case 0x20eea4u: goto label_20eea4;
        case 0x20eea8u: goto label_20eea8;
        case 0x20eeacu: goto label_20eeac;
        case 0x20eeb0u: goto label_20eeb0;
        case 0x20eeb4u: goto label_20eeb4;
        case 0x20eeb8u: goto label_20eeb8;
        case 0x20eebcu: goto label_20eebc;
        case 0x20eec0u: goto label_20eec0;
        case 0x20eec4u: goto label_20eec4;
        case 0x20eec8u: goto label_20eec8;
        case 0x20eeccu: goto label_20eecc;
        default: break;
    }

    ctx->pc = 0x20ed30u;

label_20ed30:
    // 0x20ed30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20ed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20ed34:
    // 0x20ed34: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x20ed34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_20ed38:
    // 0x20ed38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ed38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20ed3c:
    // 0x20ed3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20ed3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ed40:
    // 0x20ed40: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x20ed40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_20ed44:
    // 0x20ed44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20ed44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ed48:
    // 0x20ed48: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x20ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_20ed4c:
    // 0x20ed4c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x20ed4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20ed50:
    // 0x20ed50: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x20ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_20ed54:
    // 0x20ed54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20ed58:
    // 0x20ed58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20ed5c:
    // 0x20ed5c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_20ed60:
    if (ctx->pc == 0x20ED60u) {
        ctx->pc = 0x20ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED5Cu;
        // 0x20ed60: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED64u;
        goto label_20ed64;
    }
    ctx->pc = 0x20ED5Cu;
    {
        const bool branch_taken_0x20ed5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED5Cu;
        // 0x20ed60: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed5c) {
            ctx->pc = 0x20ED88u;
            goto label_20ed88;
        }
    }
    ctx->pc = 0x20ED64u;
label_20ed64:
    // 0x20ed64: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x20ed64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20ed68:
    // 0x20ed68: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x20ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20ed6c:
    // 0x20ed6c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20ed70:
    // 0x20ed70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x20ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20ed74:
    // 0x20ed74: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x20ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_20ed78:
    // 0x20ed78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x20ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20ed7c:
    // 0x20ed7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ed80:
    // 0x20ed80: 0x40f809  jalr        $v0
label_20ed84:
    if (ctx->pc == 0x20ED84u) {
        ctx->pc = 0x20ED88u;
        goto label_20ed88;
    }
    ctx->pc = 0x20ED80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20ED88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ED80u, 0x20ED88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20ED88u;
label_20ed88:
    // 0x20ed88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ed8c:
    // 0x20ed8c: 0x10a080  sll         $s4, $s0, 2
    ctx->pc = 0x20ed8cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20ed90:
    // 0x20ed90: 0x26510048  addiu       $s1, $s2, 0x48
    ctx->pc = 0x20ed90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_20ed94:
    // 0x20ed94: 0x1602001e  bne         $s0, $v0, . + 4 + (0x1E << 2)
label_20ed98:
    if (ctx->pc == 0x20ED98u) {
        ctx->pc = 0x20ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED94u;
        // 0x20ed98: 0x26550040  addiu       $s5, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED9Cu;
        goto label_20ed9c;
    }
    ctx->pc = 0x20ED94u;
    {
        const bool branch_taken_0x20ed94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED94u;
        // 0x20ed98: 0x26550040  addiu       $s5, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed94) {
            ctx->pc = 0x20EE10u;
            goto label_20ee10;
        }
    }
    ctx->pc = 0x20ED9Cu;
label_20ed9c:
    // 0x20ed9c: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x20ed9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_20eda0:
    // 0x20eda0: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_20eda4:
    if (ctx->pc == 0x20EDA4u) {
        ctx->pc = 0x20EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDA0u;
        // 0x20eda4: 0x8e500054  lw          $s0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDA8u;
        goto label_20eda8;
    }
    ctx->pc = 0x20EDA0u;
    {
        const bool branch_taken_0x20eda0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eda0) {
            ctx->pc = 0x20EDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EDA0u;
            // 0x20eda4: 0x8e500054  lw          $s0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EDD8u;
            goto label_20edd8;
        }
    }
    ctx->pc = 0x20EDA8u;
label_20eda8:
    // 0x20eda8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x20eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20edac:
    // 0x20edac: 0x0  nop
    ctx->pc = 0x20edacu;
    // NOP
label_20edb0:
    // 0x20edb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20edb4:
    if (ctx->pc == 0x20EDB4u) {
        ctx->pc = 0x20EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDB0u;
        // 0x20edb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDB8u;
        goto label_20edb8;
    }
    ctx->pc = 0x20EDB0u;
    {
        const bool branch_taken_0x20edb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDB0u;
        // 0x20edb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edb0) {
            ctx->pc = 0x20EDC8u;
            goto label_20edc8;
        }
    }
    ctx->pc = 0x20EDB8u;
label_20edb8:
    // 0x20edb8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x20edb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_20edbc:
    // 0x20edbc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x20edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_20edc0:
    // 0x20edc0: 0x40f809  jalr        $v0
label_20edc4:
    if (ctx->pc == 0x20EDC4u) {
        ctx->pc = 0x20EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDC0u;
        // 0x20edc4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDC8u;
        goto label_20edc8;
    }
    ctx->pc = 0x20EDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20EDC8u);
        ctx->pc = 0x20EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDC0u;
        // 0x20edc4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EDC0u, 0x20EDC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EDC8u;
label_20edc8:
    // 0x20edc8: 0x8e10002c  lw          $s0, 0x2C($s0)
    ctx->pc = 0x20edc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_20edcc:
    // 0x20edcc: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_20edd0:
    if (ctx->pc == 0x20EDD0u) {
        ctx->pc = 0x20EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDCCu;
        // 0x20edd0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDD4u;
        goto label_20edd4;
    }
    ctx->pc = 0x20EDCCu;
    {
        const bool branch_taken_0x20edcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20edcc) {
            ctx->pc = 0x20EDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EDCCu;
            // 0x20edd0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20edb0;
        }
    }
    ctx->pc = 0x20EDD4u;
label_20edd4:
    // 0x20edd4: 0x8e500054  lw          $s0, 0x54($s2)
    ctx->pc = 0x20edd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_20edd8:
    // 0x20edd8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_20eddc:
    if (ctx->pc == 0x20EDDCu) {
        ctx->pc = 0x20EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDD8u;
        // 0x20eddc: 0xae400050  sw          $zero, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDE0u;
        goto label_20ede0;
    }
    ctx->pc = 0x20EDD8u;
    {
        const bool branch_taken_0x20edd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDD8u;
        // 0x20eddc: 0xae400050  sw          $zero, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edd8) {
            ctx->pc = 0x20EE0Cu;
            goto label_20ee0c;
        }
    }
    ctx->pc = 0x20EDE0u;
label_20ede0:
    // 0x20ede0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x20ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20ede4:
    // 0x20ede4: 0x0  nop
    ctx->pc = 0x20ede4u;
    // NOP
label_20ede8:
    // 0x20ede8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20edec:
    if (ctx->pc == 0x20EDECu) {
        ctx->pc = 0x20EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDE8u;
        // 0x20edec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDF0u;
        goto label_20edf0;
    }
    ctx->pc = 0x20EDE8u;
    {
        const bool branch_taken_0x20ede8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDE8u;
        // 0x20edec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ede8) {
            ctx->pc = 0x20EE00u;
            goto label_20ee00;
        }
    }
    ctx->pc = 0x20EDF0u;
label_20edf0:
    // 0x20edf0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x20edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_20edf4:
    // 0x20edf4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x20edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_20edf8:
    // 0x20edf8: 0x40f809  jalr        $v0
label_20edfc:
    if (ctx->pc == 0x20EDFCu) {
        ctx->pc = 0x20EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDF8u;
        // 0x20edfc: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE00u;
        goto label_20ee00;
    }
    ctx->pc = 0x20EDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20EE00u);
        ctx->pc = 0x20EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDF8u;
        // 0x20edfc: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EDF8u, 0x20EE00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EE00u;
label_20ee00:
    // 0x20ee00: 0x8e10002c  lw          $s0, 0x2C($s0)
    ctx->pc = 0x20ee00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_20ee04:
    // 0x20ee04: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_20ee08:
    if (ctx->pc == 0x20EE08u) {
        ctx->pc = 0x20EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE04u;
        // 0x20ee08: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE0Cu;
        goto label_20ee0c;
    }
    ctx->pc = 0x20EE04u;
    {
        const bool branch_taken_0x20ee04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ee04) {
            ctx->pc = 0x20EE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EE04u;
            // 0x20ee08: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ede8;
        }
    }
    ctx->pc = 0x20EE0Cu;
label_20ee0c:
    // 0x20ee0c: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x20ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_20ee10:
    // 0x20ee10: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x20ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_20ee14:
    // 0x20ee14: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20ee14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ee18:
    // 0x20ee18: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_20ee1c:
    if (ctx->pc == 0x20EE1Cu) {
        ctx->pc = 0x20EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE18u;
        // 0x20ee1c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE20u;
        goto label_20ee20;
    }
    ctx->pc = 0x20EE18u;
    {
        const bool branch_taken_0x20ee18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE18u;
        // 0x20ee1c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee18) {
            ctx->pc = 0x20EE5Cu;
            goto label_20ee5c;
        }
    }
    ctx->pc = 0x20EE20u;
label_20ee20:
    // 0x20ee20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20ee24:
    // 0x20ee24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ee24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ee28:
    // 0x20ee28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20ee2c:
    // 0x20ee2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20ee2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20ee30:
    // 0x20ee30: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x20ee30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20ee34:
    // 0x20ee34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ee38:
    // 0x20ee38: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x20ee38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20ee3c:
    // 0x20ee3c: 0xc083d12  jal         func_20F448
label_20ee40:
    if (ctx->pc == 0x20EE40u) {
        ctx->pc = 0x20EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE3Cu;
        // 0x20ee40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE44u;
        goto label_20ee44;
    }
    ctx->pc = 0x20EE3Cu;
    SET_GPR_U32(ctx, 31, 0x20EE44u);
    ctx->pc = 0x20EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EE3Cu;
    // 0x20ee40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F448u, 0x20EE3Cu, 0x20EE44u)) {
        return;
    }
    ctx->pc = 0x20EE44u;
label_20ee44:
    // 0x20ee44: 0xde430058  ld          $v1, 0x58($s2)
    ctx->pc = 0x20ee44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 88)));
label_20ee48:
    // 0x20ee48: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x20ee48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_20ee4c:
    // 0x20ee4c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20ee50:
    // 0x20ee50: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x20ee50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_20ee54:
    // 0x20ee54: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
label_20ee58:
    if (ctx->pc == 0x20EE58u) {
        ctx->pc = 0x20EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE54u;
        // 0x20ee58: 0xfe430058  sd          $v1, 0x58($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE5Cu;
        goto label_20ee5c;
    }
    ctx->pc = 0x20EE54u;
    {
        const bool branch_taken_0x20ee54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE54u;
        // 0x20ee58: 0xfe430058  sd          $v1, 0x58($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee54) {
            ctx->pc = 0x20EE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ee20;
        }
    }
    ctx->pc = 0x20EE5Cu;
label_20ee5c:
    // 0x20ee5c: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x20ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_20ee60:
    // 0x20ee60: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20ee60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ee64:
    // 0x20ee64: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_20ee68:
    if (ctx->pc == 0x20EE68u) {
        ctx->pc = 0x20EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE64u;
        // 0x20ee68: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE6Cu;
        goto label_20ee6c;
    }
    ctx->pc = 0x20EE64u;
    {
        const bool branch_taken_0x20ee64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE64u;
        // 0x20ee68: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee64) {
            ctx->pc = 0x20EEACu;
            goto label_20eeac;
        }
    }
    ctx->pc = 0x20EE6Cu;
label_20ee6c:
    // 0x20ee6c: 0x0  nop
    ctx->pc = 0x20ee6cu;
    // NOP
label_20ee70:
    // 0x20ee70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20ee74:
    // 0x20ee74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ee74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ee78:
    // 0x20ee78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20ee7c:
    // 0x20ee7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20ee7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20ee80:
    // 0x20ee80: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x20ee80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20ee84:
    // 0x20ee84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ee88:
    // 0x20ee88: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x20ee88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20ee8c:
    // 0x20ee8c: 0xc083d02  jal         func_20F408
label_20ee90:
    if (ctx->pc == 0x20EE90u) {
        ctx->pc = 0x20EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE8Cu;
        // 0x20ee90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE94u;
        goto label_20ee94;
    }
    ctx->pc = 0x20EE8Cu;
    SET_GPR_U32(ctx, 31, 0x20EE94u);
    ctx->pc = 0x20EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EE8Cu;
    // 0x20ee90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F408u, 0x20EE8Cu, 0x20EE94u)) {
        return;
    }
    ctx->pc = 0x20EE94u;
label_20ee94:
    // 0x20ee94: 0xde430058  ld          $v1, 0x58($s2)
    ctx->pc = 0x20ee94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 88)));
label_20ee98:
    // 0x20ee98: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x20ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_20ee9c:
    // 0x20ee9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20ee9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20eea0:
    // 0x20eea0: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x20eea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_20eea4:
    // 0x20eea4: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
label_20eea8:
    if (ctx->pc == 0x20EEA8u) {
        ctx->pc = 0x20EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEA4u;
        // 0x20eea8: 0xfe430058  sd          $v1, 0x58($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EEACu;
        goto label_20eeac;
    }
    ctx->pc = 0x20EEA4u;
    {
        const bool branch_taken_0x20eea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEA4u;
        // 0x20eea8: 0xfe430058  sd          $v1, 0x58($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eea4) {
            ctx->pc = 0x20EE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ee70;
        }
    }
    ctx->pc = 0x20EEACu;
label_20eeac:
    // 0x20eeac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x20eeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20eeb0:
    // 0x20eeb0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x20eeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20eeb4:
    // 0x20eeb4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20eeb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20eeb8:
    // 0x20eeb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20eeb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20eebc:
    // 0x20eebc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x20eebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20eec0:
    // 0x20eec0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x20eec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20eec4:
    // 0x20eec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20eec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20eec8:
    // 0x20eec8: 0x3e00008  jr          $ra
label_20eecc:
    if (ctx->pc == 0x20EECCu) {
        ctx->pc = 0x20EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEC8u;
        // 0x20eecc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EED0u;
        goto label_fallthrough_0x20eec8;
    }
    ctx->pc = 0x20EEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEC8u;
        // 0x20eecc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20eec8:
    ctx->pc = 0x20EED0u;
}
