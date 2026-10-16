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

// Function: sub_001BBD18
// Address: 0x1bbd18 - 0x1bbec0
void sub_001BBD18_0x1bbd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBD18_0x1bbd18");
#endif

    switch (ctx->pc) {
        case 0x1bbd18u: goto label_1bbd18;
        case 0x1bbd1cu: goto label_1bbd1c;
        case 0x1bbd20u: goto label_1bbd20;
        case 0x1bbd24u: goto label_1bbd24;
        case 0x1bbd28u: goto label_1bbd28;
        case 0x1bbd2cu: goto label_1bbd2c;
        case 0x1bbd30u: goto label_1bbd30;
        case 0x1bbd34u: goto label_1bbd34;
        case 0x1bbd38u: goto label_1bbd38;
        case 0x1bbd3cu: goto label_1bbd3c;
        case 0x1bbd40u: goto label_1bbd40;
        case 0x1bbd44u: goto label_1bbd44;
        case 0x1bbd48u: goto label_1bbd48;
        case 0x1bbd4cu: goto label_1bbd4c;
        case 0x1bbd50u: goto label_1bbd50;
        case 0x1bbd54u: goto label_1bbd54;
        case 0x1bbd58u: goto label_1bbd58;
        case 0x1bbd5cu: goto label_1bbd5c;
        case 0x1bbd60u: goto label_1bbd60;
        case 0x1bbd64u: goto label_1bbd64;
        case 0x1bbd68u: goto label_1bbd68;
        case 0x1bbd6cu: goto label_1bbd6c;
        case 0x1bbd70u: goto label_1bbd70;
        case 0x1bbd74u: goto label_1bbd74;
        case 0x1bbd78u: goto label_1bbd78;
        case 0x1bbd7cu: goto label_1bbd7c;
        case 0x1bbd80u: goto label_1bbd80;
        case 0x1bbd84u: goto label_1bbd84;
        case 0x1bbd88u: goto label_1bbd88;
        case 0x1bbd8cu: goto label_1bbd8c;
        case 0x1bbd90u: goto label_1bbd90;
        case 0x1bbd94u: goto label_1bbd94;
        case 0x1bbd98u: goto label_1bbd98;
        case 0x1bbd9cu: goto label_1bbd9c;
        case 0x1bbda0u: goto label_1bbda0;
        case 0x1bbda4u: goto label_1bbda4;
        case 0x1bbda8u: goto label_1bbda8;
        case 0x1bbdacu: goto label_1bbdac;
        case 0x1bbdb0u: goto label_1bbdb0;
        case 0x1bbdb4u: goto label_1bbdb4;
        case 0x1bbdb8u: goto label_1bbdb8;
        case 0x1bbdbcu: goto label_1bbdbc;
        case 0x1bbdc0u: goto label_1bbdc0;
        case 0x1bbdc4u: goto label_1bbdc4;
        case 0x1bbdc8u: goto label_1bbdc8;
        case 0x1bbdccu: goto label_1bbdcc;
        case 0x1bbdd0u: goto label_1bbdd0;
        case 0x1bbdd4u: goto label_1bbdd4;
        case 0x1bbdd8u: goto label_1bbdd8;
        case 0x1bbddcu: goto label_1bbddc;
        case 0x1bbde0u: goto label_1bbde0;
        case 0x1bbde4u: goto label_1bbde4;
        case 0x1bbde8u: goto label_1bbde8;
        case 0x1bbdecu: goto label_1bbdec;
        case 0x1bbdf0u: goto label_1bbdf0;
        case 0x1bbdf4u: goto label_1bbdf4;
        case 0x1bbdf8u: goto label_1bbdf8;
        case 0x1bbdfcu: goto label_1bbdfc;
        case 0x1bbe00u: goto label_1bbe00;
        case 0x1bbe04u: goto label_1bbe04;
        case 0x1bbe08u: goto label_1bbe08;
        case 0x1bbe0cu: goto label_1bbe0c;
        case 0x1bbe10u: goto label_1bbe10;
        case 0x1bbe14u: goto label_1bbe14;
        case 0x1bbe18u: goto label_1bbe18;
        case 0x1bbe1cu: goto label_1bbe1c;
        case 0x1bbe20u: goto label_1bbe20;
        case 0x1bbe24u: goto label_1bbe24;
        case 0x1bbe28u: goto label_1bbe28;
        case 0x1bbe2cu: goto label_1bbe2c;
        case 0x1bbe30u: goto label_1bbe30;
        case 0x1bbe34u: goto label_1bbe34;
        case 0x1bbe38u: goto label_1bbe38;
        case 0x1bbe3cu: goto label_1bbe3c;
        case 0x1bbe40u: goto label_1bbe40;
        case 0x1bbe44u: goto label_1bbe44;
        case 0x1bbe48u: goto label_1bbe48;
        case 0x1bbe4cu: goto label_1bbe4c;
        case 0x1bbe50u: goto label_1bbe50;
        case 0x1bbe54u: goto label_1bbe54;
        case 0x1bbe58u: goto label_1bbe58;
        case 0x1bbe5cu: goto label_1bbe5c;
        case 0x1bbe60u: goto label_1bbe60;
        case 0x1bbe64u: goto label_1bbe64;
        case 0x1bbe68u: goto label_1bbe68;
        case 0x1bbe6cu: goto label_1bbe6c;
        case 0x1bbe70u: goto label_1bbe70;
        case 0x1bbe74u: goto label_1bbe74;
        case 0x1bbe78u: goto label_1bbe78;
        case 0x1bbe7cu: goto label_1bbe7c;
        case 0x1bbe80u: goto label_1bbe80;
        case 0x1bbe84u: goto label_1bbe84;
        case 0x1bbe88u: goto label_1bbe88;
        case 0x1bbe8cu: goto label_1bbe8c;
        case 0x1bbe90u: goto label_1bbe90;
        case 0x1bbe94u: goto label_1bbe94;
        case 0x1bbe98u: goto label_1bbe98;
        case 0x1bbe9cu: goto label_1bbe9c;
        case 0x1bbea0u: goto label_1bbea0;
        case 0x1bbea4u: goto label_1bbea4;
        case 0x1bbea8u: goto label_1bbea8;
        case 0x1bbeacu: goto label_1bbeac;
        case 0x1bbeb0u: goto label_1bbeb0;
        case 0x1bbeb4u: goto label_1bbeb4;
        case 0x1bbeb8u: goto label_1bbeb8;
        case 0x1bbebcu: goto label_1bbebc;
        default: break;
    }

    ctx->pc = 0x1bbd18u;

label_1bbd18:
    // 0x1bbd18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bbd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1bbd1c:
    // 0x1bbd1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bbd1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbd20:
    // 0x1bbd20: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1bbd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1bbd24:
    // 0x1bbd24: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1bbd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1bbd28:
    // 0x1bbd28: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1bbd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1bbd2c:
    // 0x1bbd2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bbd2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bbd30:
    // 0x1bbd30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bbd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bbd34:
    // 0x1bbd34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bbd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1bbd38:
    // 0x1bbd38: 0x8e4202dc  lw          $v0, 0x2DC($s2)
    ctx->pc = 0x1bbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 732)));
label_1bbd3c:
    // 0x1bbd3c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1bbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1bbd40:
    // 0x1bbd40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1bbd44:
    if (ctx->pc == 0x1BBD44u) {
        ctx->pc = 0x1BBD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD40u;
        // 0x1bbd44: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD48u;
        goto label_1bbd48;
    }
    ctx->pc = 0x1BBD40u;
    {
        const bool branch_taken_0x1bbd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD40u;
        // 0x1bbd44: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd40) {
            ctx->pc = 0x1BBD68u;
            goto label_1bbd68;
        }
    }
    ctx->pc = 0x1BBD48u;
label_1bbd48:
    // 0x1bbd48: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x1bbd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_1bbd4c:
    // 0x1bbd4c: 0x0  nop
    ctx->pc = 0x1bbd4cu;
    // NOP
label_1bbd50:
    // 0x1bbd50: 0x50640007  beql        $v1, $a0, . + 4 + (0x7 << 2)
label_1bbd54:
    if (ctx->pc == 0x1BBD54u) {
        ctx->pc = 0x1BBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD50u;
        // 0x1bbd54: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD58u;
        goto label_1bbd58;
    }
    ctx->pc = 0x1BBD50u;
    {
        const bool branch_taken_0x1bbd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bbd50) {
            ctx->pc = 0x1BBD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBD50u;
            // 0x1bbd54: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBD70u;
            goto label_1bbd70;
        }
    }
    ctx->pc = 0x1BBD58u;
label_1bbd58:
    // 0x1bbd58: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1bbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1bbd5c:
    // 0x1bbd5c: 0x0  nop
    ctx->pc = 0x1bbd5cu;
    // NOP
label_1bbd60:
    // 0x1bbd60: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1bbd64:
    if (ctx->pc == 0x1BBD64u) {
        ctx->pc = 0x1BBD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD60u;
        // 0x1bbd64: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD68u;
        goto label_1bbd68;
    }
    ctx->pc = 0x1BBD60u;
    {
        const bool branch_taken_0x1bbd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD60u;
        // 0x1bbd64: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd60) {
            ctx->pc = 0x1BBD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbd50;
        }
    }
    ctx->pc = 0x1BBD68u;
label_1bbd68:
    // 0x1bbd68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bbd68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbd6c:
    // 0x1bbd6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bbd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bbd70:
    // 0x1bbd70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbd74:
    // 0x1bbd74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bbd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bbd78:
    // 0x1bbd78: 0xc081b78  jal         func_206DE0
label_1bbd7c:
    if (ctx->pc == 0x1BBD7Cu) {
        ctx->pc = 0x1BBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD78u;
        // 0x1bbd7c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD80u;
        goto label_1bbd80;
    }
    ctx->pc = 0x1BBD78u;
    SET_GPR_U32(ctx, 31, 0x1BBD80u);
    ctx->pc = 0x1BBD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD78u;
    // 0x1bbd7c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206DE0u, 0x1BBD78u, 0x1BBD80u)) {
        return;
    }
    ctx->pc = 0x1BBD80u;
label_1bbd80:
    // 0x1bbd80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bbd80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bbd84:
    // 0x1bbd84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1bbd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1bbd88:
    // 0x1bbd88: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bbd8c:
    // 0x1bbd8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bbd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bbd90:
    // 0x1bbd90: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x1bbd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_1bbd94:
    // 0x1bbd94: 0x8c710054  lw          $s1, 0x54($v1)
    ctx->pc = 0x1bbd94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1bbd98:
    // 0x1bbd98: 0xc063c4e  jal         func_18F138
label_1bbd9c:
    if (ctx->pc == 0x1BBD9Cu) {
        ctx->pc = 0x1BBD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD98u;
        // 0x1bbd9c: 0x8c700050  lw          $s0, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDA0u;
        goto label_1bbda0;
    }
    ctx->pc = 0x1BBD98u;
    SET_GPR_U32(ctx, 31, 0x1BBDA0u);
    ctx->pc = 0x1BBD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD98u;
    // 0x1bbd9c: 0x8c700050  lw          $s0, 0x50($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F138u, 0x1BBD98u, 0x1BBDA0u)) {
        return;
    }
    ctx->pc = 0x1BBDA0u;
label_1bbda0:
    // 0x1bbda0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1bbda4:
    if (ctx->pc == 0x1BBDA4u) {
        ctx->pc = 0x1BBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDA0u;
        // 0x1bbda4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDA8u;
        goto label_1bbda8;
    }
    ctx->pc = 0x1BBDA0u;
    {
        const bool branch_taken_0x1bbda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDA0u;
        // 0x1bbda4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbda0) {
            ctx->pc = 0x1BBE24u;
            goto label_1bbe24;
        }
    }
    ctx->pc = 0x1BBDA8u;
label_1bbda8:
    // 0x1bbda8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1bbdac:
    if (ctx->pc == 0x1BBDACu) {
        ctx->pc = 0x1BBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDA8u;
        // 0x1bbdac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDB0u;
        goto label_1bbdb0;
    }
    ctx->pc = 0x1BBDA8u;
    {
        const bool branch_taken_0x1bbda8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDA8u;
        // 0x1bbdac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbda8) {
            ctx->pc = 0x1BBDC0u;
            goto label_1bbdc0;
        }
    }
    ctx->pc = 0x1BBDB0u;
label_1bbdb0:
    // 0x1bbdb0: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_1bbdb4:
    if (ctx->pc == 0x1BBDB4u) {
        ctx->pc = 0x1BBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDB0u;
        // 0x1bbdb4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDB8u;
        goto label_1bbdb8;
    }
    ctx->pc = 0x1BBDB0u;
    {
        const bool branch_taken_0x1bbdb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDB0u;
        // 0x1bbdb4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdb0) {
            ctx->pc = 0x1BBDDCu;
            goto label_1bbddc;
        }
    }
    ctx->pc = 0x1BBDB8u;
label_1bbdb8:
    // 0x1bbdb8: 0x10000031  b           . + 4 + (0x31 << 2)
label_1bbdbc:
    if (ctx->pc == 0x1BBDBCu) {
        ctx->pc = 0x1BBDC0u;
        goto label_1bbdc0;
    }
    ctx->pc = 0x1BBDB8u;
    {
        const bool branch_taken_0x1bbdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbdb8) {
            ctx->pc = 0x1BBE80u;
            goto label_1bbe80;
        }
    }
    ctx->pc = 0x1BBDC0u;
label_1bbdc0:
    // 0x1bbdc0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bbdc4:
    // 0x1bbdc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbdc8:
    // 0x1bbdc8: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1bbdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
label_1bbdcc:
    // 0x1bbdcc: 0xc06bede  jal         func_1AFB78
label_1bbdd0:
    if (ctx->pc == 0x1BBDD0u) {
        ctx->pc = 0x1BBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDCCu;
        // 0x1bbdd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDD4u;
        goto label_1bbdd4;
    }
    ctx->pc = 0x1BBDCCu;
    SET_GPR_U32(ctx, 31, 0x1BBDD4u);
    ctx->pc = 0x1BBDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDCCu;
    // 0x1bbdd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1BBDCCu, 0x1BBDD4u)) {
        return;
    }
    ctx->pc = 0x1BBDD4u;
label_1bbdd4:
    // 0x1bbdd4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1bbdd8:
    if (ctx->pc == 0x1BBDD8u) {
        ctx->pc = 0x1BBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDD4u;
        // 0x1bbdd8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDDCu;
        goto label_1bbddc;
    }
    ctx->pc = 0x1BBDD4u;
    {
        const bool branch_taken_0x1bbdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDD4u;
        // 0x1bbdd8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdd4) {
            ctx->pc = 0x1BBE80u;
            goto label_1bbe80;
        }
    }
    ctx->pc = 0x1BBDDCu;
label_1bbddc:
    // 0x1bbddc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bbde0:
    // 0x1bbde0: 0x16220027  bne         $s1, $v0, . + 4 + (0x27 << 2)
label_1bbde4:
    if (ctx->pc == 0x1BBDE4u) {
        ctx->pc = 0x1BBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDE0u;
        // 0x1bbde4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDE8u;
        goto label_1bbde8;
    }
    ctx->pc = 0x1BBDE0u;
    {
        const bool branch_taken_0x1bbde0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDE0u;
        // 0x1bbde4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbde0) {
            ctx->pc = 0x1BBE80u;
            goto label_1bbe80;
        }
    }
    ctx->pc = 0x1BBDE8u;
label_1bbde8:
    // 0x1bbde8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1bbdec:
    // 0x1bbdec: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bbdecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1bbdf0:
    // 0x1bbdf0: 0x8c454470  lw          $a1, 0x4470($v0)
    ctx->pc = 0x1bbdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17520)));
label_1bbdf4:
    // 0x1bbdf4: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bbdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1bbdf8:
    // 0x1bbdf8: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
label_1bbdfc:
    if (ctx->pc == 0x1BBDFCu) {
        ctx->pc = 0x1BBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDF8u;
        // 0x1bbdfc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE00u;
        goto label_1bbe00;
    }
    ctx->pc = 0x1BBDF8u;
    {
        const bool branch_taken_0x1bbdf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDF8u;
        // 0x1bbdfc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdf8) {
            ctx->pc = 0x1BBE80u;
            goto label_1bbe80;
        }
    }
    ctx->pc = 0x1BBE00u;
label_1bbe00:
    // 0x1bbe00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bbe04:
    // 0x1bbe04: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1bbe08:
    if (ctx->pc == 0x1BBE08u) {
        ctx->pc = 0x1BBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE04u;
        // 0x1bbe08: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE0Cu;
        goto label_1bbe0c;
    }
    ctx->pc = 0x1BBE04u;
    {
        const bool branch_taken_0x1bbe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE04u;
        // 0x1bbe08: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe04) {
            ctx->pc = 0x1BBE80u;
            goto label_1bbe80;
        }
    }
    ctx->pc = 0x1BBE0Cu;
label_1bbe0c:
    // 0x1bbe0c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bbe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1bbe10:
    // 0x1bbe10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bbe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bbe14:
    // 0x1bbe14: 0xc07fd18  jal         func_1FF460
label_1bbe18:
    if (ctx->pc == 0x1BBE18u) {
        ctx->pc = 0x1BBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE14u;
        // 0x1bbe18: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE1Cu;
        goto label_1bbe1c;
    }
    ctx->pc = 0x1BBE14u;
    SET_GPR_U32(ctx, 31, 0x1BBE1Cu);
    ctx->pc = 0x1BBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE14u;
    // 0x1bbe18: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BBE14u, 0x1BBE1Cu)) {
        return;
    }
    ctx->pc = 0x1BBE1Cu;
label_1bbe1c:
    // 0x1bbe1c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1bbe20:
    if (ctx->pc == 0x1BBE20u) {
        ctx->pc = 0x1BBE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE1Cu;
        // 0x1bbe20: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE24u;
        goto label_1bbe24;
    }
    ctx->pc = 0x1BBE1Cu;
    {
        const bool branch_taken_0x1bbe1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE1Cu;
        // 0x1bbe20: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe1c) {
            ctx->pc = 0x1BBE80u;
            goto label_1bbe80;
        }
    }
    ctx->pc = 0x1BBE24u;
label_1bbe24:
    // 0x1bbe24: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bbe24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1bbe28:
    // 0x1bbe28: 0x8c4543c0  lw          $a1, 0x43C0($v0)
    ctx->pc = 0x1bbe28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17344)));
label_1bbe2c:
    // 0x1bbe2c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bbe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1bbe30:
    // 0x1bbe30: 0x50a30009  beql        $a1, $v1, . + 4 + (0x9 << 2)
label_1bbe34:
    if (ctx->pc == 0x1BBE34u) {
        ctx->pc = 0x1BBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE30u;
        // 0x1bbe34: 0x8e470280  lw          $a3, 0x280($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE38u;
        goto label_1bbe38;
    }
    ctx->pc = 0x1BBE30u;
    {
        const bool branch_taken_0x1bbe30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bbe30) {
            ctx->pc = 0x1BBE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBE30u;
            // 0x1bbe34: 0x8e470280  lw          $a3, 0x280($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBE58u;
            goto label_1bbe58;
        }
    }
    ctx->pc = 0x1BBE38u;
label_1bbe38:
    // 0x1bbe38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bbe3c:
    // 0x1bbe3c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1bbe40:
    if (ctx->pc == 0x1BBE40u) {
        ctx->pc = 0x1BBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE3Cu;
        // 0x1bbe40: 0x8e470280  lw          $a3, 0x280($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE44u;
        goto label_1bbe44;
    }
    ctx->pc = 0x1BBE3Cu;
    {
        const bool branch_taken_0x1bbe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe3c) {
            ctx->pc = 0x1BBE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBE3Cu;
            // 0x1bbe40: 0x8e470280  lw          $a3, 0x280($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBE58u;
            goto label_1bbe58;
        }
    }
    ctx->pc = 0x1BBE44u;
label_1bbe44:
    // 0x1bbe44: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bbe44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1bbe48:
    // 0x1bbe48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bbe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bbe4c:
    // 0x1bbe4c: 0xc07fd18  jal         func_1FF460
label_1bbe50:
    if (ctx->pc == 0x1BBE50u) {
        ctx->pc = 0x1BBE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE4Cu;
        // 0x1bbe50: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE54u;
        goto label_1bbe54;
    }
    ctx->pc = 0x1BBE4Cu;
    SET_GPR_U32(ctx, 31, 0x1BBE54u);
    ctx->pc = 0x1BBE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE4Cu;
    // 0x1bbe50: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BBE4Cu, 0x1BBE54u)) {
        return;
    }
    ctx->pc = 0x1BBE54u;
label_1bbe54:
    // 0x1bbe54: 0x8e470280  lw          $a3, 0x280($s2)
    ctx->pc = 0x1bbe54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
label_1bbe58:
    // 0x1bbe58: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bbe58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bbe5c:
    // 0x1bbe5c: 0x8c459318  lw          $a1, -0x6CE8($v0)
    ctx->pc = 0x1bbe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939416)));
label_1bbe60:
    // 0x1bbe60: 0x8ce30258  lw          $v1, 0x258($a3)
    ctx->pc = 0x1bbe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 600)));
label_1bbe64:
    // 0x1bbe64: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1bbe64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1bbe68:
    // 0x1bbe68: 0x8c6600bc  lw          $a2, 0xBC($v1)
    ctx->pc = 0x1bbe68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1bbe6c:
    // 0x1bbe6c: 0xc0f809  jalr        $a2
label_1bbe70:
    if (ctx->pc == 0x1BBE70u) {
        ctx->pc = 0x1BBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE6Cu;
        // 0x1bbe70: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE74u;
        goto label_1bbe74;
    }
    ctx->pc = 0x1BBE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BBE74u);
        ctx->pc = 0x1BBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE6Cu;
        // 0x1bbe70: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBE6Cu, 0x1BBE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BBE74u;
label_1bbe74:
    // 0x1bbe74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbe78:
    // 0x1bbe78: 0xae420328  sw          $v0, 0x328($s2)
    ctx->pc = 0x1bbe78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 2));
label_1bbe7c:
    // 0x1bbe7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1bbe80:
    // 0x1bbe80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1bbe84:
    if (ctx->pc == 0x1BBE84u) {
        ctx->pc = 0x1BBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE80u;
        // 0x1bbe84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE88u;
        goto label_1bbe88;
    }
    ctx->pc = 0x1BBE80u;
    {
        const bool branch_taken_0x1bbe80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE80u;
        // 0x1bbe84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe80) {
            ctx->pc = 0x1BBE90u;
            goto label_1bbe90;
        }
    }
    ctx->pc = 0x1BBE88u;
label_1bbe88:
    // 0x1bbe88: 0xc06ef00  jal         func_1BBC00
label_1bbe8c:
    if (ctx->pc == 0x1BBE8Cu) {
        ctx->pc = 0x1BBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE88u;
        // 0x1bbe8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE90u;
        goto label_1bbe90;
    }
    ctx->pc = 0x1BBE88u;
    SET_GPR_U32(ctx, 31, 0x1BBE90u);
    ctx->pc = 0x1BBE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE88u;
    // 0x1bbe8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBC00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBC00u, 0x1BBE88u, 0x1BBE90u)) {
        return;
    }
    ctx->pc = 0x1BBE90u;
label_1bbe90:
    // 0x1bbe90: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_1bbe94:
    if (ctx->pc == 0x1BBE94u) {
        ctx->pc = 0x1BBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE90u;
        // 0x1bbe94: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE98u;
        goto label_1bbe98;
    }
    ctx->pc = 0x1BBE90u;
    {
        const bool branch_taken_0x1bbe90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE90u;
        // 0x1bbe94: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe90) {
            ctx->pc = 0x1BBEA4u;
            goto label_1bbea4;
        }
    }
    ctx->pc = 0x1BBE98u;
label_1bbe98:
    // 0x1bbe98: 0xc0808b8  jal         func_2022E0
label_1bbe9c:
    if (ctx->pc == 0x1BBE9Cu) {
        ctx->pc = 0x1BBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE98u;
        // 0x1bbe9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBEA0u;
        goto label_1bbea0;
    }
    ctx->pc = 0x1BBE98u;
    SET_GPR_U32(ctx, 31, 0x1BBEA0u);
    ctx->pc = 0x1BBE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE98u;
    // 0x1bbe9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BBE98u, 0x1BBEA0u)) {
        return;
    }
    ctx->pc = 0x1BBEA0u;
label_1bbea0:
    // 0x1bbea0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1bbea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bbea4:
    // 0x1bbea4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1bbea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bbea8:
    // 0x1bbea8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1bbea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bbeac:
    // 0x1bbeac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bbeacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bbeb0:
    // 0x1bbeb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bbeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bbeb4:
    // 0x1bbeb4: 0x3e00008  jr          $ra
label_1bbeb8:
    if (ctx->pc == 0x1BBEB8u) {
        ctx->pc = 0x1BBEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEB4u;
        // 0x1bbeb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBEBCu;
        goto label_1bbebc;
    }
    ctx->pc = 0x1BBEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEB4u;
        // 0x1bbeb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBEBCu;
label_1bbebc:
    // 0x1bbebc: 0x0  nop
    ctx->pc = 0x1bbebcu;
    // NOP
    ctx->pc = 0x1bbec0u;
}
