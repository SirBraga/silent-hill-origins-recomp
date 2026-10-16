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

// Function: sub_0027EBF0
// Address: 0x27ebf0 - 0x27ee88
void sub_0027EBF0_0x27ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EBF0_0x27ebf0");
#endif

    switch (ctx->pc) {
        case 0x27ebf0u: goto label_27ebf0;
        case 0x27ebf4u: goto label_27ebf4;
        case 0x27ebf8u: goto label_27ebf8;
        case 0x27ebfcu: goto label_27ebfc;
        case 0x27ec00u: goto label_27ec00;
        case 0x27ec04u: goto label_27ec04;
        case 0x27ec08u: goto label_27ec08;
        case 0x27ec0cu: goto label_27ec0c;
        case 0x27ec10u: goto label_27ec10;
        case 0x27ec14u: goto label_27ec14;
        case 0x27ec18u: goto label_27ec18;
        case 0x27ec1cu: goto label_27ec1c;
        case 0x27ec20u: goto label_27ec20;
        case 0x27ec24u: goto label_27ec24;
        case 0x27ec28u: goto label_27ec28;
        case 0x27ec2cu: goto label_27ec2c;
        case 0x27ec30u: goto label_27ec30;
        case 0x27ec34u: goto label_27ec34;
        case 0x27ec38u: goto label_27ec38;
        case 0x27ec3cu: goto label_27ec3c;
        case 0x27ec40u: goto label_27ec40;
        case 0x27ec44u: goto label_27ec44;
        case 0x27ec48u: goto label_27ec48;
        case 0x27ec4cu: goto label_27ec4c;
        case 0x27ec50u: goto label_27ec50;
        case 0x27ec54u: goto label_27ec54;
        case 0x27ec58u: goto label_27ec58;
        case 0x27ec5cu: goto label_27ec5c;
        case 0x27ec60u: goto label_27ec60;
        case 0x27ec64u: goto label_27ec64;
        case 0x27ec68u: goto label_27ec68;
        case 0x27ec6cu: goto label_27ec6c;
        case 0x27ec70u: goto label_27ec70;
        case 0x27ec74u: goto label_27ec74;
        case 0x27ec78u: goto label_27ec78;
        case 0x27ec7cu: goto label_27ec7c;
        case 0x27ec80u: goto label_27ec80;
        case 0x27ec84u: goto label_27ec84;
        case 0x27ec88u: goto label_27ec88;
        case 0x27ec8cu: goto label_27ec8c;
        case 0x27ec90u: goto label_27ec90;
        case 0x27ec94u: goto label_27ec94;
        case 0x27ec98u: goto label_27ec98;
        case 0x27ec9cu: goto label_27ec9c;
        case 0x27eca0u: goto label_27eca0;
        case 0x27eca4u: goto label_27eca4;
        case 0x27eca8u: goto label_27eca8;
        case 0x27ecacu: goto label_27ecac;
        case 0x27ecb0u: goto label_27ecb0;
        case 0x27ecb4u: goto label_27ecb4;
        case 0x27ecb8u: goto label_27ecb8;
        case 0x27ecbcu: goto label_27ecbc;
        case 0x27ecc0u: goto label_27ecc0;
        case 0x27ecc4u: goto label_27ecc4;
        case 0x27ecc8u: goto label_27ecc8;
        case 0x27ecccu: goto label_27eccc;
        case 0x27ecd0u: goto label_27ecd0;
        case 0x27ecd4u: goto label_27ecd4;
        case 0x27ecd8u: goto label_27ecd8;
        case 0x27ecdcu: goto label_27ecdc;
        case 0x27ece0u: goto label_27ece0;
        case 0x27ece4u: goto label_27ece4;
        case 0x27ece8u: goto label_27ece8;
        case 0x27ececu: goto label_27ecec;
        case 0x27ecf0u: goto label_27ecf0;
        case 0x27ecf4u: goto label_27ecf4;
        case 0x27ecf8u: goto label_27ecf8;
        case 0x27ecfcu: goto label_27ecfc;
        case 0x27ed00u: goto label_27ed00;
        case 0x27ed04u: goto label_27ed04;
        case 0x27ed08u: goto label_27ed08;
        case 0x27ed0cu: goto label_27ed0c;
        case 0x27ed10u: goto label_27ed10;
        case 0x27ed14u: goto label_27ed14;
        case 0x27ed18u: goto label_27ed18;
        case 0x27ed1cu: goto label_27ed1c;
        case 0x27ed20u: goto label_27ed20;
        case 0x27ed24u: goto label_27ed24;
        case 0x27ed28u: goto label_27ed28;
        case 0x27ed2cu: goto label_27ed2c;
        case 0x27ed30u: goto label_27ed30;
        case 0x27ed34u: goto label_27ed34;
        case 0x27ed38u: goto label_27ed38;
        case 0x27ed3cu: goto label_27ed3c;
        case 0x27ed40u: goto label_27ed40;
        case 0x27ed44u: goto label_27ed44;
        case 0x27ed48u: goto label_27ed48;
        case 0x27ed4cu: goto label_27ed4c;
        case 0x27ed50u: goto label_27ed50;
        case 0x27ed54u: goto label_27ed54;
        case 0x27ed58u: goto label_27ed58;
        case 0x27ed5cu: goto label_27ed5c;
        case 0x27ed60u: goto label_27ed60;
        case 0x27ed64u: goto label_27ed64;
        case 0x27ed68u: goto label_27ed68;
        case 0x27ed6cu: goto label_27ed6c;
        case 0x27ed70u: goto label_27ed70;
        case 0x27ed74u: goto label_27ed74;
        case 0x27ed78u: goto label_27ed78;
        case 0x27ed7cu: goto label_27ed7c;
        case 0x27ed80u: goto label_27ed80;
        case 0x27ed84u: goto label_27ed84;
        case 0x27ed88u: goto label_27ed88;
        case 0x27ed8cu: goto label_27ed8c;
        case 0x27ed90u: goto label_27ed90;
        case 0x27ed94u: goto label_27ed94;
        case 0x27ed98u: goto label_27ed98;
        case 0x27ed9cu: goto label_27ed9c;
        case 0x27eda0u: goto label_27eda0;
        case 0x27eda4u: goto label_27eda4;
        case 0x27eda8u: goto label_27eda8;
        case 0x27edacu: goto label_27edac;
        case 0x27edb0u: goto label_27edb0;
        case 0x27edb4u: goto label_27edb4;
        case 0x27edb8u: goto label_27edb8;
        case 0x27edbcu: goto label_27edbc;
        case 0x27edc0u: goto label_27edc0;
        case 0x27edc4u: goto label_27edc4;
        case 0x27edc8u: goto label_27edc8;
        case 0x27edccu: goto label_27edcc;
        case 0x27edd0u: goto label_27edd0;
        case 0x27edd4u: goto label_27edd4;
        case 0x27edd8u: goto label_27edd8;
        case 0x27eddcu: goto label_27eddc;
        case 0x27ede0u: goto label_27ede0;
        case 0x27ede4u: goto label_27ede4;
        case 0x27ede8u: goto label_27ede8;
        case 0x27edecu: goto label_27edec;
        case 0x27edf0u: goto label_27edf0;
        case 0x27edf4u: goto label_27edf4;
        case 0x27edf8u: goto label_27edf8;
        case 0x27edfcu: goto label_27edfc;
        case 0x27ee00u: goto label_27ee00;
        case 0x27ee04u: goto label_27ee04;
        case 0x27ee08u: goto label_27ee08;
        case 0x27ee0cu: goto label_27ee0c;
        case 0x27ee10u: goto label_27ee10;
        case 0x27ee14u: goto label_27ee14;
        case 0x27ee18u: goto label_27ee18;
        case 0x27ee1cu: goto label_27ee1c;
        case 0x27ee20u: goto label_27ee20;
        case 0x27ee24u: goto label_27ee24;
        case 0x27ee28u: goto label_27ee28;
        case 0x27ee2cu: goto label_27ee2c;
        case 0x27ee30u: goto label_27ee30;
        case 0x27ee34u: goto label_27ee34;
        case 0x27ee38u: goto label_27ee38;
        case 0x27ee3cu: goto label_27ee3c;
        case 0x27ee40u: goto label_27ee40;
        case 0x27ee44u: goto label_27ee44;
        case 0x27ee48u: goto label_27ee48;
        case 0x27ee4cu: goto label_27ee4c;
        case 0x27ee50u: goto label_27ee50;
        case 0x27ee54u: goto label_27ee54;
        case 0x27ee58u: goto label_27ee58;
        case 0x27ee5cu: goto label_27ee5c;
        case 0x27ee60u: goto label_27ee60;
        case 0x27ee64u: goto label_27ee64;
        case 0x27ee68u: goto label_27ee68;
        case 0x27ee6cu: goto label_27ee6c;
        case 0x27ee70u: goto label_27ee70;
        case 0x27ee74u: goto label_27ee74;
        case 0x27ee78u: goto label_27ee78;
        case 0x27ee7cu: goto label_27ee7c;
        case 0x27ee80u: goto label_27ee80;
        case 0x27ee84u: goto label_27ee84;
        default: break;
    }

    ctx->pc = 0x27ebf0u;

label_27ebf0:
    // 0x27ebf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27ebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_27ebf4:
    // 0x27ebf4: 0x8f8287fc  lw          $v0, -0x7804($gp)
    ctx->pc = 0x27ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
label_27ebf8:
    // 0x27ebf8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27ebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27ebfc:
    // 0x27ebfc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x27ebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_27ec00:
    // 0x27ec00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27ec00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27ec04:
    // 0x27ec04: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x27ec04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_27ec08:
    // 0x27ec08: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x27ec08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_27ec0c:
    // 0x27ec0c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x27ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_27ec10:
    // 0x27ec10: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x27ec10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27ec14:
    // 0x27ec14: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x27ec14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_27ec18:
    // 0x27ec18: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x27ec18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_27ec1c:
    // 0x27ec1c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x27ec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_27ec20:
    // 0x27ec20: 0x16c00014  bnez        $s6, . + 4 + (0x14 << 2)
label_27ec24:
    if (ctx->pc == 0x27EC24u) {
        ctx->pc = 0x27EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC20u;
        // 0x27ec24: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EC28u;
        goto label_27ec28;
    }
    ctx->pc = 0x27EC20u;
    {
        const bool branch_taken_0x27ec20 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC20u;
        // 0x27ec24: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec20) {
            ctx->pc = 0x27EC74u;
            goto label_27ec74;
        }
    }
    ctx->pc = 0x27EC28u;
label_27ec28:
    // 0x27ec28: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x27ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_27ec2c:
    // 0x27ec2c: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_27ec30:
    if (ctx->pc == 0x27EC30u) {
        ctx->pc = 0x27EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC2Cu;
        // 0x27ec30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EC34u;
        goto label_27ec34;
    }
    ctx->pc = 0x27EC2Cu;
    {
        const bool branch_taken_0x27ec2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC2Cu;
        // 0x27ec30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec2c) {
            ctx->pc = 0x27EE5Cu;
            goto label_27ee5c;
        }
    }
    ctx->pc = 0x27EC34u;
label_27ec34:
    // 0x27ec34: 0x10000007  b           . + 4 + (0x7 << 2)
label_27ec38:
    if (ctx->pc == 0x27EC38u) {
        ctx->pc = 0x27EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC34u;
        // 0x27ec38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EC3Cu;
        goto label_27ec3c;
    }
    ctx->pc = 0x27EC34u;
    {
        const bool branch_taken_0x27ec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC34u;
        // 0x27ec38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec34) {
            ctx->pc = 0x27EC54u;
            goto label_27ec54;
        }
    }
    ctx->pc = 0x27EC3Cu;
label_27ec3c:
    // 0x27ec3c: 0x0  nop
    ctx->pc = 0x27ec3cu;
    // NOP
label_27ec40:
    // 0x27ec40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27ec40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27ec44:
    // 0x27ec44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x27ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_27ec48:
    // 0x27ec48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_27ec4c:
    // 0x27ec4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_27ec50:
    // 0x27ec50: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x27ec50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_27ec54:
    // 0x27ec54: 0xc09f90a  jal         func_27E428
label_27ec58:
    if (ctx->pc == 0x27EC58u) {
        ctx->pc = 0x27EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC54u;
        // 0x27ec58: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EC5Cu;
        goto label_27ec5c;
    }
    ctx->pc = 0x27EC54u;
    SET_GPR_U32(ctx, 31, 0x27EC5Cu);
    ctx->pc = 0x27EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC54u;
    // 0x27ec58: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x27EC54u, 0x27EC5Cu)) {
        return;
    }
    ctx->pc = 0x27EC5Cu;
label_27ec5c:
    // 0x27ec5c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x27ec5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27ec60:
    // 0x27ec60: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_27ec64:
    if (ctx->pc == 0x27EC64u) {
        ctx->pc = 0x27EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC60u;
        // 0x27ec64: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EC68u;
        goto label_27ec68;
    }
    ctx->pc = 0x27EC60u;
    {
        const bool branch_taken_0x27ec60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ec60) {
            ctx->pc = 0x27EC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EC60u;
            // 0x27ec64: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ec40;
        }
    }
    ctx->pc = 0x27EC68u;
label_27ec68:
    // 0x27ec68: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x27ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_27ec6c:
    // 0x27ec6c: 0x1000007b  b           . + 4 + (0x7B << 2)
label_27ec70:
    if (ctx->pc == 0x27EC70u) {
        ctx->pc = 0x27EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC6Cu;
        // 0x27ec70: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EC74u;
        goto label_27ec74;
    }
    ctx->pc = 0x27EC6Cu;
    {
        const bool branch_taken_0x27ec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC6Cu;
        // 0x27ec70: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec6c) {
            ctx->pc = 0x27EE5Cu;
            goto label_27ee5c;
        }
    }
    ctx->pc = 0x27EC74u;
label_27ec74:
    // 0x27ec74: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x27ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_27ec78:
    // 0x27ec78: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_27ec7c:
    if (ctx->pc == 0x27EC7Cu) {
        ctx->pc = 0x27EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC78u;
        // 0x27ec7c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EC80u;
        goto label_27ec80;
    }
    ctx->pc = 0x27EC78u;
    {
        const bool branch_taken_0x27ec78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ec78) {
            ctx->pc = 0x27EC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EC78u;
            // 0x27ec7c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27ED24u;
            goto label_27ed24;
        }
    }
    ctx->pc = 0x27EC80u;
label_27ec80:
    // 0x27ec80: 0xc09f90a  jal         func_27E428
label_27ec84:
    if (ctx->pc == 0x27EC84u) {
        ctx->pc = 0x27EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC80u;
        // 0x27ec84: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EC88u;
        goto label_27ec88;
    }
    ctx->pc = 0x27EC80u;
    SET_GPR_U32(ctx, 31, 0x27EC88u);
    ctx->pc = 0x27EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EC80u;
    // 0x27ec84: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x27EC80u, 0x27EC88u)) {
        return;
    }
    ctx->pc = 0x27EC88u;
label_27ec88:
    // 0x27ec88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27ec88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ec8c:
    // 0x27ec8c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x27ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_27ec90:
    // 0x27ec90: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x27ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_27ec94:
    // 0x27ec94: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x27ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_27ec98:
    // 0x27ec98: 0x24910018  addiu       $s1, $a0, 0x18
    ctx->pc = 0x27ec98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_27ec9c:
    // 0x27ec9c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27ec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27eca0:
    // 0x27eca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27eca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27eca4:
    // 0x27eca4: 0x40f809  jalr        $v0
label_27eca8:
    if (ctx->pc == 0x27ECA8u) {
        ctx->pc = 0x27ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECA4u;
        // 0x27eca8: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ECACu;
        goto label_27ecac;
    }
    ctx->pc = 0x27ECA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27ECACu);
        ctx->pc = 0x27ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECA4u;
        // 0x27eca8: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ECA4u, 0x27ECACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27ECACu;
label_27ecac:
    // 0x27ecac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27ecacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ecb0:
    // 0x27ecb0: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_27ecb4:
    if (ctx->pc == 0x27ECB4u) {
        ctx->pc = 0x27ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECB0u;
        // 0x27ecb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ECB8u;
        goto label_27ecb8;
    }
    ctx->pc = 0x27ECB0u;
    {
        const bool branch_taken_0x27ecb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECB0u;
        // 0x27ecb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecb0) {
            ctx->pc = 0x27ECE8u;
            goto label_27ece8;
        }
    }
    ctx->pc = 0x27ECB8u;
label_27ecb8:
    // 0x27ecb8: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x27ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_27ecbc:
    // 0x27ecbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27ecc0:
    // 0x27ecc0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_27ecc4:
    // 0x27ecc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ecc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ecc8:
    // 0x27ecc8: 0xc092848  jal         func_24A120
label_27eccc:
    if (ctx->pc == 0x27ECCCu) {
        ctx->pc = 0x27ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECC8u;
        // 0x27eccc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ECD0u;
        goto label_27ecd0;
    }
    ctx->pc = 0x27ECC8u;
    SET_GPR_U32(ctx, 31, 0x27ECD0u);
    ctx->pc = 0x27ECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECC8u;
    // 0x27eccc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27ECC8u, 0x27ECD0u)) {
        return;
    }
    ctx->pc = 0x27ECD0u;
label_27ecd0:
    // 0x27ecd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27ecd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27ecd4:
    // 0x27ecd4: 0xc09281a  jal         func_24A068
label_27ecd8:
    if (ctx->pc == 0x27ECD8u) {
        ctx->pc = 0x27ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECD4u;
        // 0x27ecd8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ECDCu;
        goto label_27ecdc;
    }
    ctx->pc = 0x27ECD4u;
    SET_GPR_U32(ctx, 31, 0x27ECDCu);
    ctx->pc = 0x27ECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECD4u;
    // 0x27ecd8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27ECD4u, 0x27ECDCu)) {
        return;
    }
    ctx->pc = 0x27ECDCu;
label_27ecdc:
    // 0x27ecdc: 0x1000000e  b           . + 4 + (0xE << 2)
label_27ece0:
    if (ctx->pc == 0x27ECE0u) {
        ctx->pc = 0x27ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECDCu;
        // 0x27ece0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ECE4u;
        goto label_27ece4;
    }
    ctx->pc = 0x27ECDCu;
    {
        const bool branch_taken_0x27ecdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECDCu;
        // 0x27ece0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecdc) {
            ctx->pc = 0x27ED18u;
            goto label_27ed18;
        }
    }
    ctx->pc = 0x27ECE4u;
label_27ece4:
    // 0x27ece4: 0x0  nop
    ctx->pc = 0x27ece4u;
    // NOP
label_27ece8:
    // 0x27ece8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ece8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ecec:
    // 0x27ecec: 0xc0c493d  jal         func_3124F4
label_27ecf0:
    if (ctx->pc == 0x27ECF0u) {
        ctx->pc = 0x27ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECECu;
        // 0x27ecf0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ECF4u;
        goto label_27ecf4;
    }
    ctx->pc = 0x27ECECu;
    SET_GPR_U32(ctx, 31, 0x27ECF4u);
    ctx->pc = 0x27ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECECu;
    // 0x27ecf0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27ECECu, 0x27ECF4u)) {
        return;
    }
    ctx->pc = 0x27ECF4u;
label_27ecf4:
    // 0x27ecf4: 0x8f8387fc  lw          $v1, -0x7804($gp)
    ctx->pc = 0x27ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
label_27ecf8:
    // 0x27ecf8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x27ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_27ecfc:
    // 0x27ecfc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x27ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_27ed00:
    // 0x27ed00: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x27ed00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_27ed04:
    // 0x27ed04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27ed08:
    // 0x27ed08: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x27ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_27ed0c:
    // 0x27ed0c: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x27ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_27ed10:
    // 0x27ed10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27ed10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27ed14:
    // 0x27ed14: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_27ed18:
    // 0x27ed18: 0x10a00051  beqz        $a1, . + 4 + (0x51 << 2)
label_27ed1c:
    if (ctx->pc == 0x27ED1Cu) {
        ctx->pc = 0x27ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED18u;
        // 0x27ed1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ED20u;
        goto label_27ed20;
    }
    ctx->pc = 0x27ED18u;
    {
        const bool branch_taken_0x27ed18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED18u;
        // 0x27ed1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed18) {
            ctx->pc = 0x27EE60u;
            goto label_27ee60;
        }
    }
    ctx->pc = 0x27ED20u;
label_27ed20:
    // 0x27ed20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27ed24:
    // 0x27ed24: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_27ed28:
    if (ctx->pc == 0x27ED28u) {
        ctx->pc = 0x27ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED24u;
        // 0x27ed28: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ED2Cu;
        goto label_27ed2c;
    }
    ctx->pc = 0x27ED24u;
    {
        const bool branch_taken_0x27ed24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ed24) {
            ctx->pc = 0x27ED28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27ED24u;
            // 0x27ed28: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EDB4u;
            goto label_27edb4;
        }
    }
    ctx->pc = 0x27ED2Cu;
label_27ed2c:
    // 0x27ed2c: 0x8f9087fc  lw          $s0, -0x7804($gp)
    ctx->pc = 0x27ed2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
label_27ed30:
    // 0x27ed30: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x27ed30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27ed34:
    // 0x27ed34: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x27ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_27ed38:
    // 0x27ed38: 0xc09f90a  jal         func_27E428
label_27ed3c:
    if (ctx->pc == 0x27ED3Cu) {
        ctx->pc = 0x27ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED38u;
        // 0x27ed3c: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ED40u;
        goto label_27ed40;
    }
    ctx->pc = 0x27ED38u;
    SET_GPR_U32(ctx, 31, 0x27ED40u);
    ctx->pc = 0x27ED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED38u;
    // 0x27ed3c: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x27ED38u, 0x27ED40u)) {
        return;
    }
    ctx->pc = 0x27ED40u;
label_27ed40:
    // 0x27ed40: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x27ed40u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27ed44:
    // 0x27ed44: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x27ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_27ed48:
    // 0x27ed48: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x27ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_27ed4c:
    // 0x27ed4c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27ed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27ed50:
    // 0x27ed50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ed50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ed54:
    // 0x27ed54: 0x40f809  jalr        $v0
label_27ed58:
    if (ctx->pc == 0x27ED58u) {
        ctx->pc = 0x27ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED54u;
        // 0x27ed58: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ED5Cu;
        goto label_27ed5c;
    }
    ctx->pc = 0x27ED54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27ED5Cu);
        ctx->pc = 0x27ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED54u;
        // 0x27ed58: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ED54u, 0x27ED5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27ED5Cu;
label_27ed5c:
    // 0x27ed5c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_27ed60:
    if (ctx->pc == 0x27ED60u) {
        ctx->pc = 0x27ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED5Cu;
        // 0x27ed60: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ED64u;
        goto label_27ed64;
    }
    ctx->pc = 0x27ED5Cu;
    {
        const bool branch_taken_0x27ed5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED5Cu;
        // 0x27ed60: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed5c) {
            ctx->pc = 0x27ED90u;
            goto label_27ed90;
        }
    }
    ctx->pc = 0x27ED64u;
label_27ed64:
    // 0x27ed64: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x27ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_27ed68:
    // 0x27ed68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27ed6c:
    // 0x27ed6c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x27ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_27ed70:
    // 0x27ed70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ed70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ed74:
    // 0x27ed74: 0xc092848  jal         func_24A120
label_27ed78:
    if (ctx->pc == 0x27ED78u) {
        ctx->pc = 0x27ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED74u;
        // 0x27ed78: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ED7Cu;
        goto label_27ed7c;
    }
    ctx->pc = 0x27ED74u;
    SET_GPR_U32(ctx, 31, 0x27ED7Cu);
    ctx->pc = 0x27ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED74u;
    // 0x27ed78: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27ED74u, 0x27ED7Cu)) {
        return;
    }
    ctx->pc = 0x27ED7Cu;
label_27ed7c:
    // 0x27ed7c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x27ed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_27ed80:
    // 0x27ed80: 0xc09281a  jal         func_24A068
label_27ed84:
    if (ctx->pc == 0x27ED84u) {
        ctx->pc = 0x27ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED80u;
        // 0x27ed84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ED88u;
        goto label_27ed88;
    }
    ctx->pc = 0x27ED80u;
    SET_GPR_U32(ctx, 31, 0x27ED88u);
    ctx->pc = 0x27ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED80u;
    // 0x27ed84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27ED80u, 0x27ED88u)) {
        return;
    }
    ctx->pc = 0x27ED88u;
label_27ed88:
    // 0x27ed88: 0x10000006  b           . + 4 + (0x6 << 2)
label_27ed8c:
    if (ctx->pc == 0x27ED8Cu) {
        ctx->pc = 0x27ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED88u;
        // 0x27ed8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27ED90u;
        goto label_27ed90;
    }
    ctx->pc = 0x27ED88u;
    {
        const bool branch_taken_0x27ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED88u;
        // 0x27ed8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed88) {
            ctx->pc = 0x27EDA4u;
            goto label_27eda4;
        }
    }
    ctx->pc = 0x27ED90u;
label_27ed90:
    // 0x27ed90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ed94:
    // 0x27ed94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27ed94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ed98:
    // 0x27ed98: 0xc0c493d  jal         func_3124F4
label_27ed9c:
    if (ctx->pc == 0x27ED9Cu) {
        ctx->pc = 0x27ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED98u;
        // 0x27ed9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EDA0u;
        goto label_27eda0;
    }
    ctx->pc = 0x27ED98u;
    SET_GPR_U32(ctx, 31, 0x27EDA0u);
    ctx->pc = 0x27ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED98u;
    // 0x27ed9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27ED98u, 0x27EDA0u)) {
        return;
    }
    ctx->pc = 0x27EDA0u;
label_27eda0:
    // 0x27eda0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x27eda0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27eda4:
    // 0x27eda4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_27eda8:
    if (ctx->pc == 0x27EDA8u) {
        ctx->pc = 0x27EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDA4u;
        // 0x27eda8: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EDACu;
        goto label_27edac;
    }
    ctx->pc = 0x27EDA4u;
    {
        const bool branch_taken_0x27eda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27eda4) {
            ctx->pc = 0x27EDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EDA4u;
            // 0x27eda8: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EDB4u;
            goto label_27edb4;
        }
    }
    ctx->pc = 0x27EDACu;
label_27edac:
    // 0x27edac: 0x1000002c  b           . + 4 + (0x2C << 2)
label_27edb0:
    if (ctx->pc == 0x27EDB0u) {
        ctx->pc = 0x27EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDACu;
        // 0x27edb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EDB4u;
        goto label_27edb4;
    }
    ctx->pc = 0x27EDACu;
    {
        const bool branch_taken_0x27edac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDACu;
        // 0x27edb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27edac) {
            ctx->pc = 0x27EE60u;
            goto label_27ee60;
        }
    }
    ctx->pc = 0x27EDB4u;
label_27edb4:
    // 0x27edb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27edb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27edb8:
    // 0x27edb8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27edbc:
    // 0x27edbc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x27edbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27edc0:
    // 0x27edc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27edc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27edc4:
    // 0x27edc4: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x27edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
label_27edc8:
    // 0x27edc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27edc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27edcc:
    // 0x27edcc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_27edd0:
    if (ctx->pc == 0x27EDD0u) {
        ctx->pc = 0x27EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDCCu;
        // 0x27edd0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EDD4u;
        goto label_27edd4;
    }
    ctx->pc = 0x27EDCCu;
    {
        const bool branch_taken_0x27edcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDCCu;
        // 0x27edd0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27edcc) {
            ctx->pc = 0x27EE48u;
            goto label_27ee48;
        }
    }
    ctx->pc = 0x27EDD4u;
label_27edd4:
    // 0x27edd4: 0x0  nop
    ctx->pc = 0x27edd4u;
    // NOP
label_27edd8:
    // 0x27edd8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x27edd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27eddc:
    // 0x27eddc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_27ede0:
    if (ctx->pc == 0x27EDE0u) {
        ctx->pc = 0x27EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDDCu;
        // 0x27ede0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EDE4u;
        goto label_27ede4;
    }
    ctx->pc = 0x27EDDCu;
    {
        const bool branch_taken_0x27eddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27eddc) {
            ctx->pc = 0x27EDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EDDCu;
            // 0x27ede0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EE20u;
            goto label_27ee20;
        }
    }
    ctx->pc = 0x27EDE4u;
label_27ede4:
    // 0x27ede4: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x27ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_27ede8:
    // 0x27ede8: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x27ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_27edec:
    // 0x27edec: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27edecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27edf0:
    // 0x27edf0: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_27edf4:
    if (ctx->pc == 0x27EDF4u) {
        ctx->pc = 0x27EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDF0u;
        // 0x27edf4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EDF8u;
        goto label_27edf8;
    }
    ctx->pc = 0x27EDF0u;
    {
        const bool branch_taken_0x27edf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27edf0) {
            ctx->pc = 0x27EDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EDF0u;
            // 0x27edf4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EE20u;
            goto label_27ee20;
        }
    }
    ctx->pc = 0x27EDF8u;
label_27edf8:
    // 0x27edf8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27edfc:
    // 0x27edfc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x27edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27ee00:
    // 0x27ee00: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x27ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_27ee04:
    // 0x27ee04: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x27ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_27ee08:
    // 0x27ee08: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x27ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_27ee0c:
    // 0x27ee0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x27ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_27ee10:
    // 0x27ee10: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27ee14:
    // 0x27ee14: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27ee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ee18:
    // 0x27ee18: 0x10000007  b           . + 4 + (0x7 << 2)
label_27ee1c:
    if (ctx->pc == 0x27EE1Cu) {
        ctx->pc = 0x27EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE18u;
        // 0x27ee1c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EE20u;
        goto label_27ee20;
    }
    ctx->pc = 0x27EE18u;
    {
        const bool branch_taken_0x27ee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE18u;
        // 0x27ee1c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee18) {
            ctx->pc = 0x27EE38u;
            goto label_27ee38;
        }
    }
    ctx->pc = 0x27EE20u;
label_27ee20:
    // 0x27ee20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x27ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27ee24:
    // 0x27ee24: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x27ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_27ee28:
    // 0x27ee28: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x27ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_27ee2c:
    // 0x27ee2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_27ee30:
    // 0x27ee30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x27ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_27ee34:
    // 0x27ee34: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x27ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_27ee38:
    // 0x27ee38: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x27ee38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_27ee3c:
    // 0x27ee3c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x27ee3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_27ee40:
    // 0x27ee40: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x27ee40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_27ee44:
    // 0x27ee44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27ee44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_27ee48:
    // 0x27ee48: 0xc09f90a  jal         func_27E428
label_27ee4c:
    if (ctx->pc == 0x27EE4Cu) {
        ctx->pc = 0x27EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE48u;
        // 0x27ee4c: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EE50u;
        goto label_27ee50;
    }
    ctx->pc = 0x27EE48u;
    SET_GPR_U32(ctx, 31, 0x27EE50u);
    ctx->pc = 0x27EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE48u;
    // 0x27ee4c: 0x8e840018  lw          $a0, 0x18($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x27EE48u, 0x27EE50u)) {
        return;
    }
    ctx->pc = 0x27EE50u;
label_27ee50:
    // 0x27ee50: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x27ee50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27ee54:
    // 0x27ee54: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_27ee58:
    if (ctx->pc == 0x27EE58u) {
        ctx->pc = 0x27EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE54u;
        // 0x27ee58: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EE5Cu;
        goto label_27ee5c;
    }
    ctx->pc = 0x27EE54u;
    {
        const bool branch_taken_0x27ee54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ee54) {
            ctx->pc = 0x27EE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EE54u;
            // 0x27ee58: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27edd8;
        }
    }
    ctx->pc = 0x27EE5Cu;
label_27ee5c:
    // 0x27ee5c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x27ee5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27ee60:
    // 0x27ee60: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x27ee60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27ee64:
    // 0x27ee64: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x27ee64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27ee68:
    // 0x27ee68: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x27ee68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27ee6c:
    // 0x27ee6c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x27ee6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27ee70:
    // 0x27ee70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27ee70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27ee74:
    // 0x27ee74: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x27ee74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27ee78:
    // 0x27ee78: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x27ee78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27ee7c:
    // 0x27ee7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27ee7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27ee80:
    // 0x27ee80: 0x3e00008  jr          $ra
label_27ee84:
    if (ctx->pc == 0x27EE84u) {
        ctx->pc = 0x27EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE80u;
        // 0x27ee84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EE88u;
        goto label_fallthrough_0x27ee80;
    }
    ctx->pc = 0x27EE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE80u;
        // 0x27ee84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27ee80:
    ctx->pc = 0x27EE88u;
}
