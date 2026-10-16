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

// Function: sub_001EBB00
// Address: 0x1ebb00 - 0x1ebd48
void sub_001EBB00_0x1ebb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBB00_0x1ebb00");
#endif

    switch (ctx->pc) {
        case 0x1ebb00u: goto label_1ebb00;
        case 0x1ebb04u: goto label_1ebb04;
        case 0x1ebb08u: goto label_1ebb08;
        case 0x1ebb0cu: goto label_1ebb0c;
        case 0x1ebb10u: goto label_1ebb10;
        case 0x1ebb14u: goto label_1ebb14;
        case 0x1ebb18u: goto label_1ebb18;
        case 0x1ebb1cu: goto label_1ebb1c;
        case 0x1ebb20u: goto label_1ebb20;
        case 0x1ebb24u: goto label_1ebb24;
        case 0x1ebb28u: goto label_1ebb28;
        case 0x1ebb2cu: goto label_1ebb2c;
        case 0x1ebb30u: goto label_1ebb30;
        case 0x1ebb34u: goto label_1ebb34;
        case 0x1ebb38u: goto label_1ebb38;
        case 0x1ebb3cu: goto label_1ebb3c;
        case 0x1ebb40u: goto label_1ebb40;
        case 0x1ebb44u: goto label_1ebb44;
        case 0x1ebb48u: goto label_1ebb48;
        case 0x1ebb4cu: goto label_1ebb4c;
        case 0x1ebb50u: goto label_1ebb50;
        case 0x1ebb54u: goto label_1ebb54;
        case 0x1ebb58u: goto label_1ebb58;
        case 0x1ebb5cu: goto label_1ebb5c;
        case 0x1ebb60u: goto label_1ebb60;
        case 0x1ebb64u: goto label_1ebb64;
        case 0x1ebb68u: goto label_1ebb68;
        case 0x1ebb6cu: goto label_1ebb6c;
        case 0x1ebb70u: goto label_1ebb70;
        case 0x1ebb74u: goto label_1ebb74;
        case 0x1ebb78u: goto label_1ebb78;
        case 0x1ebb7cu: goto label_1ebb7c;
        case 0x1ebb80u: goto label_1ebb80;
        case 0x1ebb84u: goto label_1ebb84;
        case 0x1ebb88u: goto label_1ebb88;
        case 0x1ebb8cu: goto label_1ebb8c;
        case 0x1ebb90u: goto label_1ebb90;
        case 0x1ebb94u: goto label_1ebb94;
        case 0x1ebb98u: goto label_1ebb98;
        case 0x1ebb9cu: goto label_1ebb9c;
        case 0x1ebba0u: goto label_1ebba0;
        case 0x1ebba4u: goto label_1ebba4;
        case 0x1ebba8u: goto label_1ebba8;
        case 0x1ebbacu: goto label_1ebbac;
        case 0x1ebbb0u: goto label_1ebbb0;
        case 0x1ebbb4u: goto label_1ebbb4;
        case 0x1ebbb8u: goto label_1ebbb8;
        case 0x1ebbbcu: goto label_1ebbbc;
        case 0x1ebbc0u: goto label_1ebbc0;
        case 0x1ebbc4u: goto label_1ebbc4;
        case 0x1ebbc8u: goto label_1ebbc8;
        case 0x1ebbccu: goto label_1ebbcc;
        case 0x1ebbd0u: goto label_1ebbd0;
        case 0x1ebbd4u: goto label_1ebbd4;
        case 0x1ebbd8u: goto label_1ebbd8;
        case 0x1ebbdcu: goto label_1ebbdc;
        case 0x1ebbe0u: goto label_1ebbe0;
        case 0x1ebbe4u: goto label_1ebbe4;
        case 0x1ebbe8u: goto label_1ebbe8;
        case 0x1ebbecu: goto label_1ebbec;
        case 0x1ebbf0u: goto label_1ebbf0;
        case 0x1ebbf4u: goto label_1ebbf4;
        case 0x1ebbf8u: goto label_1ebbf8;
        case 0x1ebbfcu: goto label_1ebbfc;
        case 0x1ebc00u: goto label_1ebc00;
        case 0x1ebc04u: goto label_1ebc04;
        case 0x1ebc08u: goto label_1ebc08;
        case 0x1ebc0cu: goto label_1ebc0c;
        case 0x1ebc10u: goto label_1ebc10;
        case 0x1ebc14u: goto label_1ebc14;
        case 0x1ebc18u: goto label_1ebc18;
        case 0x1ebc1cu: goto label_1ebc1c;
        case 0x1ebc20u: goto label_1ebc20;
        case 0x1ebc24u: goto label_1ebc24;
        case 0x1ebc28u: goto label_1ebc28;
        case 0x1ebc2cu: goto label_1ebc2c;
        case 0x1ebc30u: goto label_1ebc30;
        case 0x1ebc34u: goto label_1ebc34;
        case 0x1ebc38u: goto label_1ebc38;
        case 0x1ebc3cu: goto label_1ebc3c;
        case 0x1ebc40u: goto label_1ebc40;
        case 0x1ebc44u: goto label_1ebc44;
        case 0x1ebc48u: goto label_1ebc48;
        case 0x1ebc4cu: goto label_1ebc4c;
        case 0x1ebc50u: goto label_1ebc50;
        case 0x1ebc54u: goto label_1ebc54;
        case 0x1ebc58u: goto label_1ebc58;
        case 0x1ebc5cu: goto label_1ebc5c;
        case 0x1ebc60u: goto label_1ebc60;
        case 0x1ebc64u: goto label_1ebc64;
        case 0x1ebc68u: goto label_1ebc68;
        case 0x1ebc6cu: goto label_1ebc6c;
        case 0x1ebc70u: goto label_1ebc70;
        case 0x1ebc74u: goto label_1ebc74;
        case 0x1ebc78u: goto label_1ebc78;
        case 0x1ebc7cu: goto label_1ebc7c;
        case 0x1ebc80u: goto label_1ebc80;
        case 0x1ebc84u: goto label_1ebc84;
        case 0x1ebc88u: goto label_1ebc88;
        case 0x1ebc8cu: goto label_1ebc8c;
        case 0x1ebc90u: goto label_1ebc90;
        case 0x1ebc94u: goto label_1ebc94;
        case 0x1ebc98u: goto label_1ebc98;
        case 0x1ebc9cu: goto label_1ebc9c;
        case 0x1ebca0u: goto label_1ebca0;
        case 0x1ebca4u: goto label_1ebca4;
        case 0x1ebca8u: goto label_1ebca8;
        case 0x1ebcacu: goto label_1ebcac;
        case 0x1ebcb0u: goto label_1ebcb0;
        case 0x1ebcb4u: goto label_1ebcb4;
        case 0x1ebcb8u: goto label_1ebcb8;
        case 0x1ebcbcu: goto label_1ebcbc;
        case 0x1ebcc0u: goto label_1ebcc0;
        case 0x1ebcc4u: goto label_1ebcc4;
        case 0x1ebcc8u: goto label_1ebcc8;
        case 0x1ebcccu: goto label_1ebccc;
        case 0x1ebcd0u: goto label_1ebcd0;
        case 0x1ebcd4u: goto label_1ebcd4;
        case 0x1ebcd8u: goto label_1ebcd8;
        case 0x1ebcdcu: goto label_1ebcdc;
        case 0x1ebce0u: goto label_1ebce0;
        case 0x1ebce4u: goto label_1ebce4;
        case 0x1ebce8u: goto label_1ebce8;
        case 0x1ebcecu: goto label_1ebcec;
        case 0x1ebcf0u: goto label_1ebcf0;
        case 0x1ebcf4u: goto label_1ebcf4;
        case 0x1ebcf8u: goto label_1ebcf8;
        case 0x1ebcfcu: goto label_1ebcfc;
        case 0x1ebd00u: goto label_1ebd00;
        case 0x1ebd04u: goto label_1ebd04;
        case 0x1ebd08u: goto label_1ebd08;
        case 0x1ebd0cu: goto label_1ebd0c;
        case 0x1ebd10u: goto label_1ebd10;
        case 0x1ebd14u: goto label_1ebd14;
        case 0x1ebd18u: goto label_1ebd18;
        case 0x1ebd1cu: goto label_1ebd1c;
        case 0x1ebd20u: goto label_1ebd20;
        case 0x1ebd24u: goto label_1ebd24;
        case 0x1ebd28u: goto label_1ebd28;
        case 0x1ebd2cu: goto label_1ebd2c;
        case 0x1ebd30u: goto label_1ebd30;
        case 0x1ebd34u: goto label_1ebd34;
        case 0x1ebd38u: goto label_1ebd38;
        case 0x1ebd3cu: goto label_1ebd3c;
        case 0x1ebd40u: goto label_1ebd40;
        case 0x1ebd44u: goto label_1ebd44;
        default: break;
    }

    ctx->pc = 0x1ebb00u;

label_1ebb00:
    // 0x1ebb00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ebb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ebb04:
    // 0x1ebb04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebb08:
    // 0x1ebb08: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ebb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1ebb0c:
    // 0x1ebb0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ebb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ebb10:
    // 0x1ebb10: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ebb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1ebb14:
    // 0x1ebb14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ebb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ebb18:
    // 0x1ebb18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ebb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ebb1c:
    // 0x1ebb1c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1ebb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1ebb20:
    // 0x1ebb20: 0xc078ec8  jal         func_1E3B20
label_1ebb24:
    if (ctx->pc == 0x1EBB24u) {
        ctx->pc = 0x1EBB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB20u;
        // 0x1ebb24: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB28u;
        goto label_1ebb28;
    }
    ctx->pc = 0x1EBB20u;
    SET_GPR_U32(ctx, 31, 0x1EBB28u);
    ctx->pc = 0x1EBB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB20u;
    // 0x1ebb24: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EBB20u, 0x1EBB28u)) {
        return;
    }
    ctx->pc = 0x1EBB28u;
label_1ebb28:
    // 0x1ebb28: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1ebb28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ebb2c:
    // 0x1ebb2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ebb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ebb30:
    // 0x1ebb30: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ebb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ebb34:
    // 0x1ebb34: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ebb34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ebb38:
    // 0x1ebb38: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ebb38u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ebb3c:
    // 0x1ebb3c: 0xc078ec8  jal         func_1E3B20
label_1ebb40:
    if (ctx->pc == 0x1EBB40u) {
        ctx->pc = 0x1EBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB3Cu;
        // 0x1ebb40: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB44u;
        goto label_1ebb44;
    }
    ctx->pc = 0x1EBB3Cu;
    SET_GPR_U32(ctx, 31, 0x1EBB44u);
    ctx->pc = 0x1EBB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB3Cu;
    // 0x1ebb40: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EBB3Cu, 0x1EBB44u)) {
        return;
    }
    ctx->pc = 0x1EBB44u;
label_1ebb44:
    // 0x1ebb44: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1ebb44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ebb48:
    // 0x1ebb48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ebb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ebb4c:
    // 0x1ebb4c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ebb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ebb50:
    // 0x1ebb50: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ebb50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ebb54:
    // 0x1ebb54: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ebb54u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ebb58:
    // 0x1ebb58: 0xc078ec8  jal         func_1E3B20
label_1ebb5c:
    if (ctx->pc == 0x1EBB5Cu) {
        ctx->pc = 0x1EBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB58u;
        // 0x1ebb5c: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB60u;
        goto label_1ebb60;
    }
    ctx->pc = 0x1EBB58u;
    SET_GPR_U32(ctx, 31, 0x1EBB60u);
    ctx->pc = 0x1EBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB58u;
    // 0x1ebb5c: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EBB58u, 0x1EBB60u)) {
        return;
    }
    ctx->pc = 0x1EBB60u;
label_1ebb60:
    // 0x1ebb60: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1ebb60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ebb64:
    // 0x1ebb64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ebb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ebb68:
    // 0x1ebb68: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ebb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ebb6c:
    // 0x1ebb6c: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ebb6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ebb70:
    // 0x1ebb70: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ebb70u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ebb74:
    // 0x1ebb74: 0xc078ec8  jal         func_1E3B20
label_1ebb78:
    if (ctx->pc == 0x1EBB78u) {
        ctx->pc = 0x1EBB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB74u;
        // 0x1ebb78: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB7Cu;
        goto label_1ebb7c;
    }
    ctx->pc = 0x1EBB74u;
    SET_GPR_U32(ctx, 31, 0x1EBB7Cu);
    ctx->pc = 0x1EBB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB74u;
    // 0x1ebb78: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EBB74u, 0x1EBB7Cu)) {
        return;
    }
    ctx->pc = 0x1EBB7Cu;
label_1ebb7c:
    // 0x1ebb7c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1ebb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ebb80:
    // 0x1ebb80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ebb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ebb84:
    // 0x1ebb84: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ebb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ebb88:
    // 0x1ebb88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ebb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ebb8c:
    // 0x1ebb8c: 0x43382a  slt         $a3, $v0, $v1
    ctx->pc = 0x1ebb8cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ebb90:
    // 0x1ebb90: 0x47180a  movz        $v1, $v0, $a3
    ctx->pc = 0x1ebb90u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
label_1ebb94:
    // 0x1ebb94: 0xc078ee6  jal         func_1E3B98
label_1ebb98:
    if (ctx->pc == 0x1EBB98u) {
        ctx->pc = 0x1EBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB94u;
        // 0x1ebb98: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB9Cu;
        goto label_1ebb9c;
    }
    ctx->pc = 0x1EBB94u;
    SET_GPR_U32(ctx, 31, 0x1EBB9Cu);
    ctx->pc = 0x1EBB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB94u;
    // 0x1ebb98: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EBB94u, 0x1EBB9Cu)) {
        return;
    }
    ctx->pc = 0x1EBB9Cu;
label_1ebb9c:
    // 0x1ebb9c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ebb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ebba0:
    // 0x1ebba0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1ebba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ebba4:
    // 0x1ebba4: 0xc078ee6  jal         func_1E3B98
label_1ebba8:
    if (ctx->pc == 0x1EBBA8u) {
        ctx->pc = 0x1EBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBA4u;
        // 0x1ebba8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBACu;
        goto label_1ebbac;
    }
    ctx->pc = 0x1EBBA4u;
    SET_GPR_U32(ctx, 31, 0x1EBBACu);
    ctx->pc = 0x1EBBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBBA4u;
    // 0x1ebba8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EBBA4u, 0x1EBBACu)) {
        return;
    }
    ctx->pc = 0x1EBBACu;
label_1ebbac:
    // 0x1ebbac: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ebbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ebbb0:
    // 0x1ebbb0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1ebbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ebbb4:
    // 0x1ebbb4: 0xc078ee6  jal         func_1E3B98
label_1ebbb8:
    if (ctx->pc == 0x1EBBB8u) {
        ctx->pc = 0x1EBBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBB4u;
        // 0x1ebbb8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBBCu;
        goto label_1ebbbc;
    }
    ctx->pc = 0x1EBBB4u;
    SET_GPR_U32(ctx, 31, 0x1EBBBCu);
    ctx->pc = 0x1EBBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBBB4u;
    // 0x1ebbb8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EBBB4u, 0x1EBBBCu)) {
        return;
    }
    ctx->pc = 0x1EBBBCu;
label_1ebbbc:
    // 0x1ebbbc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ebbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ebbc0:
    // 0x1ebbc0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1ebbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ebbc4:
    // 0x1ebbc4: 0xc078ee6  jal         func_1E3B98
label_1ebbc8:
    if (ctx->pc == 0x1EBBC8u) {
        ctx->pc = 0x1EBBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBC4u;
        // 0x1ebbc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBCCu;
        goto label_1ebbcc;
    }
    ctx->pc = 0x1EBBC4u;
    SET_GPR_U32(ctx, 31, 0x1EBBCCu);
    ctx->pc = 0x1EBBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBBC4u;
    // 0x1ebbc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EBBC4u, 0x1EBBCCu)) {
        return;
    }
    ctx->pc = 0x1EBBCCu;
label_1ebbcc:
    // 0x1ebbcc: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x1ebbccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ebbd0:
    // 0x1ebbd0: 0xc0932d4  jal         func_24CB50
label_1ebbd4:
    if (ctx->pc == 0x1EBBD4u) {
        ctx->pc = 0x1EBBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBD0u;
        // 0x1ebbd4: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBD8u;
        goto label_1ebbd8;
    }
    ctx->pc = 0x1EBBD0u;
    SET_GPR_U32(ctx, 31, 0x1EBBD8u);
    ctx->pc = 0x1EBBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBBD0u;
    // 0x1ebbd4: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBBD0u, 0x1EBBD8u)) {
        return;
    }
    ctx->pc = 0x1EBBD8u;
label_1ebbd8:
    // 0x1ebbd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ebbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ebbdc:
    // 0x1ebbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ebbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ebbe0:
    // 0x1ebbe0: 0x40f809  jalr        $v0
label_1ebbe4:
    if (ctx->pc == 0x1EBBE4u) {
        ctx->pc = 0x1EBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBE0u;
        // 0x1ebbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBE8u;
        goto label_1ebbe8;
    }
    ctx->pc = 0x1EBBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBBE8u);
        ctx->pc = 0x1EBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBE0u;
        // 0x1ebbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBBE0u, 0x1EBBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBBE8u;
label_1ebbe8:
    // 0x1ebbe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ebbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebbec:
    // 0x1ebbec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ebbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ebbf0:
    // 0x1ebbf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ebbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ebbf4:
    // 0x1ebbf4: 0xc0c493d  jal         func_3124F4
label_1ebbf8:
    if (ctx->pc == 0x1EBBF8u) {
        ctx->pc = 0x1EBBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBF4u;
        // 0x1ebbf8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBFCu;
        goto label_1ebbfc;
    }
    ctx->pc = 0x1EBBF4u;
    SET_GPR_U32(ctx, 31, 0x1EBBFCu);
    ctx->pc = 0x1EBBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBBF4u;
    // 0x1ebbf8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1EBBF4u, 0x1EBBFCu)) {
        return;
    }
    ctx->pc = 0x1EBBFCu;
label_1ebbfc:
    // 0x1ebbfc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1ebbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ebc00:
    // 0x1ebc00: 0x1860004b  blez        $v1, . + 4 + (0x4B << 2)
label_1ebc04:
    if (ctx->pc == 0x1EBC04u) {
        ctx->pc = 0x1EBC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC00u;
        // 0x1ebc04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC08u;
        goto label_1ebc08;
    }
    ctx->pc = 0x1EBC00u;
    {
        const bool branch_taken_0x1ebc00 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1EBC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC00u;
        // 0x1ebc04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc00) {
            ctx->pc = 0x1EBD30u;
            goto label_1ebd30;
        }
    }
    ctx->pc = 0x1EBC08u;
label_1ebc08:
    // 0x1ebc08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ebc08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebc0c:
    // 0x1ebc0c: 0x0  nop
    ctx->pc = 0x1ebc0cu;
    // NOP
label_1ebc10:
    // 0x1ebc10: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1ebc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1ebc14:
    // 0x1ebc14: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1ebc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ebc18:
    // 0x1ebc18: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
label_1ebc1c:
    if (ctx->pc == 0x1EBC1Cu) {
        ctx->pc = 0x1EBC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC18u;
        // 0x1ebc1c: 0xe23021  addu        $a2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC20u;
        goto label_1ebc20;
    }
    ctx->pc = 0x1EBC18u;
    {
        const bool branch_taken_0x1ebc18 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1EBC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC18u;
        // 0x1ebc1c: 0xe23021  addu        $a2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc18) {
            ctx->pc = 0x1EBC3Cu;
            goto label_1ebc3c;
        }
    }
    ctx->pc = 0x1EBC20u;
label_1ebc20:
    // 0x1ebc20: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1ebc20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1ebc24:
    // 0x1ebc24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ebc28:
    if (ctx->pc == 0x1EBC28u) {
        ctx->pc = 0x1EBC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC24u;
        // 0x1ebc28: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC2Cu;
        goto label_1ebc2c;
    }
    ctx->pc = 0x1EBC24u;
    {
        const bool branch_taken_0x1ebc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC24u;
        // 0x1ebc28: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc24) {
            ctx->pc = 0x1EBC3Cu;
            goto label_1ebc3c;
        }
    }
    ctx->pc = 0x1EBC2Cu;
label_1ebc2c:
    // 0x1ebc2c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ebc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ebc30:
    // 0x1ebc30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebc34:
    // 0x1ebc34: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ebc38:
    if (ctx->pc == 0x1EBC38u) {
        ctx->pc = 0x1EBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC34u;
        // 0x1ebc38: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC3Cu;
        goto label_1ebc3c;
    }
    ctx->pc = 0x1EBC34u;
    {
        const bool branch_taken_0x1ebc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC34u;
        // 0x1ebc38: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc34) {
            ctx->pc = 0x1EBC4Cu;
            goto label_1ebc4c;
        }
    }
    ctx->pc = 0x1EBC3Cu;
label_1ebc3c:
    // 0x1ebc3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ebc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebc40:
    // 0x1ebc40: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ebc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ebc44:
    // 0x1ebc44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebc48:
    // 0x1ebc48: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1ebc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebc4c:
    // 0x1ebc4c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1ebc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1ebc50:
    // 0x1ebc50: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1ebc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1ebc54:
    // 0x1ebc54: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_1ebc58:
    if (ctx->pc == 0x1EBC58u) {
        ctx->pc = 0x1EBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC54u;
        // 0x1ebc58: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC5Cu;
        goto label_1ebc5c;
    }
    ctx->pc = 0x1EBC54u;
    {
        const bool branch_taken_0x1ebc54 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1EBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC54u;
        // 0x1ebc58: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc54) {
            ctx->pc = 0x1EBC7Cu;
            goto label_1ebc7c;
        }
    }
    ctx->pc = 0x1EBC5Cu;
label_1ebc5c:
    // 0x1ebc5c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ebc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1ebc60:
    // 0x1ebc60: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ebc60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ebc64:
    // 0x1ebc64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ebc68:
    if (ctx->pc == 0x1EBC68u) {
        ctx->pc = 0x1EBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC64u;
        // 0x1ebc68: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC6Cu;
        goto label_1ebc6c;
    }
    ctx->pc = 0x1EBC64u;
    {
        const bool branch_taken_0x1ebc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC64u;
        // 0x1ebc68: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc64) {
            ctx->pc = 0x1EBC7Cu;
            goto label_1ebc7c;
        }
    }
    ctx->pc = 0x1EBC6Cu;
label_1ebc6c:
    // 0x1ebc6c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ebc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ebc70:
    // 0x1ebc70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebc74:
    // 0x1ebc74: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ebc78:
    if (ctx->pc == 0x1EBC78u) {
        ctx->pc = 0x1EBC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC74u;
        // 0x1ebc78: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC7Cu;
        goto label_1ebc7c;
    }
    ctx->pc = 0x1EBC74u;
    {
        const bool branch_taken_0x1ebc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC74u;
        // 0x1ebc78: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc74) {
            ctx->pc = 0x1EBC90u;
            goto label_1ebc90;
        }
    }
    ctx->pc = 0x1EBC7Cu;
label_1ebc7c:
    // 0x1ebc7c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ebc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1ebc80:
    // 0x1ebc80: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ebc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebc84:
    // 0x1ebc84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ebc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ebc88:
    // 0x1ebc88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebc8c:
    // 0x1ebc8c: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1ebc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebc90:
    // 0x1ebc90: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1ebc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1ebc94:
    // 0x1ebc94: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1ebc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1ebc98:
    // 0x1ebc98: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_1ebc9c:
    if (ctx->pc == 0x1EBC9Cu) {
        ctx->pc = 0x1EBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC98u;
        // 0x1ebc9c: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCA0u;
        goto label_1ebca0;
    }
    ctx->pc = 0x1EBC98u;
    {
        const bool branch_taken_0x1ebc98 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1EBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC98u;
        // 0x1ebc9c: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc98) {
            ctx->pc = 0x1EBCC0u;
            goto label_1ebcc0;
        }
    }
    ctx->pc = 0x1EBCA0u;
label_1ebca0:
    // 0x1ebca0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1ebca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1ebca4:
    // 0x1ebca4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ebca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ebca8:
    // 0x1ebca8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ebcac:
    if (ctx->pc == 0x1EBCACu) {
        ctx->pc = 0x1EBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCA8u;
        // 0x1ebcac: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCB0u;
        goto label_1ebcb0;
    }
    ctx->pc = 0x1EBCA8u;
    {
        const bool branch_taken_0x1ebca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCA8u;
        // 0x1ebcac: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebca8) {
            ctx->pc = 0x1EBCC0u;
            goto label_1ebcc0;
        }
    }
    ctx->pc = 0x1EBCB0u;
label_1ebcb0:
    // 0x1ebcb0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ebcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ebcb4:
    // 0x1ebcb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebcb8:
    // 0x1ebcb8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ebcbc:
    if (ctx->pc == 0x1EBCBCu) {
        ctx->pc = 0x1EBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCB8u;
        // 0x1ebcbc: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCC0u;
        goto label_1ebcc0;
    }
    ctx->pc = 0x1EBCB8u;
    {
        const bool branch_taken_0x1ebcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCB8u;
        // 0x1ebcbc: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcb8) {
            ctx->pc = 0x1EBCD4u;
            goto label_1ebcd4;
        }
    }
    ctx->pc = 0x1EBCC0u;
label_1ebcc0:
    // 0x1ebcc0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1ebcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1ebcc4:
    // 0x1ebcc4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ebcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebcc8:
    // 0x1ebcc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ebcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ebccc:
    // 0x1ebccc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebcd0:
    // 0x1ebcd0: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1ebcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebcd4:
    // 0x1ebcd4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1ebcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1ebcd8:
    // 0x1ebcd8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1ebcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1ebcdc:
    // 0x1ebcdc: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_1ebce0:
    if (ctx->pc == 0x1EBCE0u) {
        ctx->pc = 0x1EBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCDCu;
        // 0x1ebce0: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCE4u;
        goto label_1ebce4;
    }
    ctx->pc = 0x1EBCDCu;
    {
        const bool branch_taken_0x1ebcdc = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1EBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCDCu;
        // 0x1ebce0: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcdc) {
            ctx->pc = 0x1EBD04u;
            goto label_1ebd04;
        }
    }
    ctx->pc = 0x1EBCE4u;
label_1ebce4:
    // 0x1ebce4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1ebce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1ebce8:
    // 0x1ebce8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ebce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ebcec:
    // 0x1ebcec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ebcf0:
    if (ctx->pc == 0x1EBCF0u) {
        ctx->pc = 0x1EBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCECu;
        // 0x1ebcf0: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCF4u;
        goto label_1ebcf4;
    }
    ctx->pc = 0x1EBCECu;
    {
        const bool branch_taken_0x1ebcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCECu;
        // 0x1ebcf0: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcec) {
            ctx->pc = 0x1EBD04u;
            goto label_1ebd04;
        }
    }
    ctx->pc = 0x1EBCF4u;
label_1ebcf4:
    // 0x1ebcf4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ebcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ebcf8:
    // 0x1ebcf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebcfc:
    // 0x1ebcfc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ebd00:
    if (ctx->pc == 0x1EBD00u) {
        ctx->pc = 0x1EBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCFCu;
        // 0x1ebd00: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD04u;
        goto label_1ebd04;
    }
    ctx->pc = 0x1EBCFCu;
    {
        const bool branch_taken_0x1ebcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCFCu;
        // 0x1ebd00: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcfc) {
            ctx->pc = 0x1EBD18u;
            goto label_1ebd18;
        }
    }
    ctx->pc = 0x1EBD04u;
label_1ebd04:
    // 0x1ebd04: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1ebd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1ebd08:
    // 0x1ebd08: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ebd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1ebd0c:
    // 0x1ebd0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ebd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ebd10:
    // 0x1ebd10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebd14:
    // 0x1ebd14: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1ebd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebd18:
    // 0x1ebd18: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ebd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1ebd1c:
    // 0x1ebd1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ebd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ebd20:
    // 0x1ebd20: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ebd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ebd24:
    // 0x1ebd24: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ebd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ebd28:
    // 0x1ebd28: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_1ebd2c:
    if (ctx->pc == 0x1EBD2Cu) {
        ctx->pc = 0x1EBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD28u;
        // 0x1ebd2c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD30u;
        goto label_1ebd30;
    }
    ctx->pc = 0x1EBD28u;
    {
        const bool branch_taken_0x1ebd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD28u;
        // 0x1ebd2c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd28) {
            ctx->pc = 0x1EBC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebc10;
        }
    }
    ctx->pc = 0x1EBD30u;
label_1ebd30:
    // 0x1ebd30: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ebd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ebd34:
    // 0x1ebd34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ebd34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ebd38:
    // 0x1ebd38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ebd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ebd3c:
    // 0x1ebd3c: 0x3e00008  jr          $ra
label_1ebd40:
    if (ctx->pc == 0x1EBD40u) {
        ctx->pc = 0x1EBD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD3Cu;
        // 0x1ebd40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD44u;
        goto label_1ebd44;
    }
    ctx->pc = 0x1EBD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD3Cu;
        // 0x1ebd40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBD44u;
label_1ebd44:
    // 0x1ebd44: 0x0  nop
    ctx->pc = 0x1ebd44u;
    // NOP
    ctx->pc = 0x1ebd48u;
}
