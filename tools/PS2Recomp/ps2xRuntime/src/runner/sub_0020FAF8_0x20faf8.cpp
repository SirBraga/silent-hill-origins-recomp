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

// Function: sub_0020FAF8
// Address: 0x20faf8 - 0x20fce8
void sub_0020FAF8_0x20faf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FAF8_0x20faf8");
#endif

    switch (ctx->pc) {
        case 0x20faf8u: goto label_20faf8;
        case 0x20fafcu: goto label_20fafc;
        case 0x20fb00u: goto label_20fb00;
        case 0x20fb04u: goto label_20fb04;
        case 0x20fb08u: goto label_20fb08;
        case 0x20fb0cu: goto label_20fb0c;
        case 0x20fb10u: goto label_20fb10;
        case 0x20fb14u: goto label_20fb14;
        case 0x20fb18u: goto label_20fb18;
        case 0x20fb1cu: goto label_20fb1c;
        case 0x20fb20u: goto label_20fb20;
        case 0x20fb24u: goto label_20fb24;
        case 0x20fb28u: goto label_20fb28;
        case 0x20fb2cu: goto label_20fb2c;
        case 0x20fb30u: goto label_20fb30;
        case 0x20fb34u: goto label_20fb34;
        case 0x20fb38u: goto label_20fb38;
        case 0x20fb3cu: goto label_20fb3c;
        case 0x20fb40u: goto label_20fb40;
        case 0x20fb44u: goto label_20fb44;
        case 0x20fb48u: goto label_20fb48;
        case 0x20fb4cu: goto label_20fb4c;
        case 0x20fb50u: goto label_20fb50;
        case 0x20fb54u: goto label_20fb54;
        case 0x20fb58u: goto label_20fb58;
        case 0x20fb5cu: goto label_20fb5c;
        case 0x20fb60u: goto label_20fb60;
        case 0x20fb64u: goto label_20fb64;
        case 0x20fb68u: goto label_20fb68;
        case 0x20fb6cu: goto label_20fb6c;
        case 0x20fb70u: goto label_20fb70;
        case 0x20fb74u: goto label_20fb74;
        case 0x20fb78u: goto label_20fb78;
        case 0x20fb7cu: goto label_20fb7c;
        case 0x20fb80u: goto label_20fb80;
        case 0x20fb84u: goto label_20fb84;
        case 0x20fb88u: goto label_20fb88;
        case 0x20fb8cu: goto label_20fb8c;
        case 0x20fb90u: goto label_20fb90;
        case 0x20fb94u: goto label_20fb94;
        case 0x20fb98u: goto label_20fb98;
        case 0x20fb9cu: goto label_20fb9c;
        case 0x20fba0u: goto label_20fba0;
        case 0x20fba4u: goto label_20fba4;
        case 0x20fba8u: goto label_20fba8;
        case 0x20fbacu: goto label_20fbac;
        case 0x20fbb0u: goto label_20fbb0;
        case 0x20fbb4u: goto label_20fbb4;
        case 0x20fbb8u: goto label_20fbb8;
        case 0x20fbbcu: goto label_20fbbc;
        case 0x20fbc0u: goto label_20fbc0;
        case 0x20fbc4u: goto label_20fbc4;
        case 0x20fbc8u: goto label_20fbc8;
        case 0x20fbccu: goto label_20fbcc;
        case 0x20fbd0u: goto label_20fbd0;
        case 0x20fbd4u: goto label_20fbd4;
        case 0x20fbd8u: goto label_20fbd8;
        case 0x20fbdcu: goto label_20fbdc;
        case 0x20fbe0u: goto label_20fbe0;
        case 0x20fbe4u: goto label_20fbe4;
        case 0x20fbe8u: goto label_20fbe8;
        case 0x20fbecu: goto label_20fbec;
        case 0x20fbf0u: goto label_20fbf0;
        case 0x20fbf4u: goto label_20fbf4;
        case 0x20fbf8u: goto label_20fbf8;
        case 0x20fbfcu: goto label_20fbfc;
        case 0x20fc00u: goto label_20fc00;
        case 0x20fc04u: goto label_20fc04;
        case 0x20fc08u: goto label_20fc08;
        case 0x20fc0cu: goto label_20fc0c;
        case 0x20fc10u: goto label_20fc10;
        case 0x20fc14u: goto label_20fc14;
        case 0x20fc18u: goto label_20fc18;
        case 0x20fc1cu: goto label_20fc1c;
        case 0x20fc20u: goto label_20fc20;
        case 0x20fc24u: goto label_20fc24;
        case 0x20fc28u: goto label_20fc28;
        case 0x20fc2cu: goto label_20fc2c;
        case 0x20fc30u: goto label_20fc30;
        case 0x20fc34u: goto label_20fc34;
        case 0x20fc38u: goto label_20fc38;
        case 0x20fc3cu: goto label_20fc3c;
        case 0x20fc40u: goto label_20fc40;
        case 0x20fc44u: goto label_20fc44;
        case 0x20fc48u: goto label_20fc48;
        case 0x20fc4cu: goto label_20fc4c;
        case 0x20fc50u: goto label_20fc50;
        case 0x20fc54u: goto label_20fc54;
        case 0x20fc58u: goto label_20fc58;
        case 0x20fc5cu: goto label_20fc5c;
        case 0x20fc60u: goto label_20fc60;
        case 0x20fc64u: goto label_20fc64;
        case 0x20fc68u: goto label_20fc68;
        case 0x20fc6cu: goto label_20fc6c;
        case 0x20fc70u: goto label_20fc70;
        case 0x20fc74u: goto label_20fc74;
        case 0x20fc78u: goto label_20fc78;
        case 0x20fc7cu: goto label_20fc7c;
        case 0x20fc80u: goto label_20fc80;
        case 0x20fc84u: goto label_20fc84;
        case 0x20fc88u: goto label_20fc88;
        case 0x20fc8cu: goto label_20fc8c;
        case 0x20fc90u: goto label_20fc90;
        case 0x20fc94u: goto label_20fc94;
        case 0x20fc98u: goto label_20fc98;
        case 0x20fc9cu: goto label_20fc9c;
        case 0x20fca0u: goto label_20fca0;
        case 0x20fca4u: goto label_20fca4;
        case 0x20fca8u: goto label_20fca8;
        case 0x20fcacu: goto label_20fcac;
        case 0x20fcb0u: goto label_20fcb0;
        case 0x20fcb4u: goto label_20fcb4;
        case 0x20fcb8u: goto label_20fcb8;
        case 0x20fcbcu: goto label_20fcbc;
        case 0x20fcc0u: goto label_20fcc0;
        case 0x20fcc4u: goto label_20fcc4;
        case 0x20fcc8u: goto label_20fcc8;
        case 0x20fcccu: goto label_20fccc;
        case 0x20fcd0u: goto label_20fcd0;
        case 0x20fcd4u: goto label_20fcd4;
        case 0x20fcd8u: goto label_20fcd8;
        case 0x20fcdcu: goto label_20fcdc;
        case 0x20fce0u: goto label_20fce0;
        case 0x20fce4u: goto label_20fce4;
        default: break;
    }

    ctx->pc = 0x20faf8u;

label_20faf8:
    // 0x20faf8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20faf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_20fafc:
    // 0x20fafc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20fafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fb00:
    // 0x20fb00: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x20fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_20fb04:
    // 0x20fb04: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20fb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_20fb08:
    // 0x20fb08: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x20fb08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20fb0c:
    // 0x20fb0c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x20fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_20fb10:
    // 0x20fb10: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20fb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_20fb14:
    // 0x20fb14: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20fb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_20fb18:
    // 0x20fb18: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20fb1c:
    // 0x20fb1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20fb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20fb20:
    // 0x20fb20: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x20fb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_20fb24:
    // 0x20fb24: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x20fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_20fb28:
    // 0x20fb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20fb2c:
    // 0x20fb2c: 0x8ee20078  lw          $v0, 0x78($s7)
    ctx->pc = 0x20fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 120)));
label_20fb30:
    // 0x20fb30: 0x18400061  blez        $v0, . + 4 + (0x61 << 2)
label_20fb34:
    if (ctx->pc == 0x20FB34u) {
        ctx->pc = 0x20FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB30u;
        // 0x20fb34: 0x8efe01cc  lw          $fp, 0x1CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB38u;
        goto label_20fb38;
    }
    ctx->pc = 0x20FB30u;
    {
        const bool branch_taken_0x20fb30 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB30u;
        // 0x20fb34: 0x8efe01cc  lw          $fp, 0x1CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb30) {
            ctx->pc = 0x20FCB8u;
            goto label_20fcb8;
        }
    }
    ctx->pc = 0x20FB38u;
label_20fb38:
    // 0x20fb38: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x20fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_20fb3c:
    // 0x20fb3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_20fb40:
    // 0x20fb40: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x20fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20fb44:
    // 0x20fb44: 0x0  nop
    ctx->pc = 0x20fb44u;
    // NOP
label_20fb48:
    // 0x20fb48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20fb4c:
    // 0x20fb4c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x20fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_20fb50:
    // 0x20fb50: 0x27c40034  addiu       $a0, $fp, 0x34
    ctx->pc = 0x20fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 52));
label_20fb54:
    // 0x20fb54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20fb58:
    // 0x20fb58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20fb58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fb5c:
    // 0x20fb5c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20fb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20fb60:
    // 0x20fb60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fb64:
    // 0x20fb64: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x20fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_20fb68:
    // 0x20fb68: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x20fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_20fb6c:
    // 0x20fb6c: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
label_20fb70:
    if (ctx->pc == 0x20FB70u) {
        ctx->pc = 0x20FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB6Cu;
        // 0x20fb70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB74u;
        goto label_20fb74;
    }
    ctx->pc = 0x20FB6Cu;
    {
        const bool branch_taken_0x20fb6c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x20FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB6Cu;
        // 0x20fb70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb6c) {
            ctx->pc = 0x20FBB4u;
            goto label_20fbb4;
        }
    }
    ctx->pc = 0x20FB74u;
label_20fb74:
    // 0x20fb74: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x20fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_20fb78:
    // 0x20fb78: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
label_20fb7c:
    if (ctx->pc == 0x20FB7Cu) {
        ctx->pc = 0x20FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB78u;
        // 0x20fb7c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB80u;
        goto label_20fb80;
    }
    ctx->pc = 0x20FB78u;
    {
        const bool branch_taken_0x20fb78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20fb78) {
            ctx->pc = 0x20FB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FB78u;
            // 0x20fb7c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FB88u;
            goto label_20fb88;
        }
    }
    ctx->pc = 0x20FB80u;
label_20fb80:
    // 0x20fb80: 0x1000000c  b           . + 4 + (0xC << 2)
label_20fb84:
    if (ctx->pc == 0x20FB84u) {
        ctx->pc = 0x20FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB80u;
        // 0x20fb84: 0x8fc50034  lw          $a1, 0x34($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB88u;
        goto label_20fb88;
    }
    ctx->pc = 0x20FB80u;
    {
        const bool branch_taken_0x20fb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB80u;
        // 0x20fb84: 0x8fc50034  lw          $a1, 0x34($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb80) {
            ctx->pc = 0x20FBB4u;
            goto label_20fbb4;
        }
    }
    ctx->pc = 0x20FB88u;
label_20fb88:
    // 0x20fb88: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x20fb88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20fb8c:
    // 0x20fb8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20fb90:
    if (ctx->pc == 0x20FB90u) {
        ctx->pc = 0x20FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB8Cu;
        // 0x20fb90: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB94u;
        goto label_20fb94;
    }
    ctx->pc = 0x20FB8Cu;
    {
        const bool branch_taken_0x20fb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB8Cu;
        // 0x20fb90: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb8c) {
            ctx->pc = 0x20FBB4u;
            goto label_20fbb4;
        }
    }
    ctx->pc = 0x20FB94u;
label_20fb94:
    // 0x20fb94: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x20fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20fb98:
    // 0x20fb98: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x20fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20fb9c:
    // 0x20fb9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20fba0:
    // 0x20fba0: 0x5603fff9  bnel        $s0, $v1, . + 4 + (-0x7 << 2)
label_20fba4:
    if (ctx->pc == 0x20FBA4u) {
        ctx->pc = 0x20FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBA0u;
        // 0x20fba4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBA8u;
        goto label_20fba8;
    }
    ctx->pc = 0x20FBA0u;
    {
        const bool branch_taken_0x20fba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x20fba0) {
            ctx->pc = 0x20FBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FBA0u;
            // 0x20fba4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fb88;
        }
    }
    ctx->pc = 0x20FBA8u;
label_20fba8:
    // 0x20fba8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x20fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_20fbac:
    // 0x20fbac: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x20fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20fbb0:
    // 0x20fbb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20fbb4:
    // 0x20fbb4: 0x14a00038  bnez        $a1, . + 4 + (0x38 << 2)
label_20fbb8:
    if (ctx->pc == 0x20FBB8u) {
        ctx->pc = 0x20FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBB4u;
        // 0x20fbb8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBBCu;
        goto label_20fbbc;
    }
    ctx->pc = 0x20FBB4u;
    {
        const bool branch_taken_0x20fbb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBB4u;
        // 0x20fbb8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbb4) {
            ctx->pc = 0x20FC98u;
            goto label_20fc98;
        }
    }
    ctx->pc = 0x20FBBCu;
label_20fbbc:
    // 0x20fbbc: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x20fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_20fbc0:
    // 0x20fbc0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x20fbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20fbc4:
    // 0x20fbc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20fbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fbc8:
    // 0x20fbc8: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x20fbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_20fbcc:
    // 0x20fbcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20fbd0:
    // 0x20fbd0: 0x40f809  jalr        $v0
label_20fbd4:
    if (ctx->pc == 0x20FBD4u) {
        ctx->pc = 0x20FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBD0u;
        // 0x20fbd4: 0x241500ff  addiu       $s5, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBD8u;
        goto label_20fbd8;
    }
    ctx->pc = 0x20FBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20FBD8u);
        ctx->pc = 0x20FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBD0u;
        // 0x20fbd4: 0x241500ff  addiu       $s5, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FBD0u, 0x20FBD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20FBD8u;
label_20fbd8:
    // 0x20fbd8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x20fbd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20fbdc:
    // 0x20fbdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fbe0:
    // 0x20fbe0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x20fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20fbe4:
    // 0x20fbe4: 0x29a78  dsll        $s3, $v0, 9
    ctx->pc = 0x20fbe4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << 9);
label_20fbe8:
    // 0x20fbe8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x20fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20fbec:
    // 0x20fbec: 0x0  nop
    ctx->pc = 0x20fbecu;
    // NOP
label_20fbf0:
    // 0x20fbf0: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x20fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_20fbf4:
    // 0x20fbf4: 0x24940001  addiu       $s4, $a0, 0x1
    ctx->pc = 0x20fbf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20fbf8:
    // 0x20fbf8: 0x568821  addu        $s1, $v0, $s6
    ctx->pc = 0x20fbf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20fbfc:
    // 0x20fbfc: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x20fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_20fc00:
    // 0x20fc00: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x20fc00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_20fc04:
    // 0x20fc04: 0x248455a8  addiu       $a0, $a0, 0x55A8
    ctx->pc = 0x20fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21928));
label_20fc08:
    // 0x20fc08: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x20fc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20fc0c:
    // 0x20fc0c: 0x0  nop
    ctx->pc = 0x20fc0cu;
    // NOP
label_20fc10:
    // 0x20fc10: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x20fc10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_20fc14:
    // 0x20fc14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20fc18:
    // 0x20fc18: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x20fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_20fc1c:
    // 0x20fc1c: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x20fc1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20fc20:
    // 0x20fc20: 0x1812  mflo        $v1
    ctx->pc = 0x20fc20u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_20fc24:
    // 0x20fc24: 0x2010  mfhi        $a0
    ctx->pc = 0x20fc24u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_20fc28:
    // 0x20fc28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20fc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_20fc2c:
    // 0x20fc2c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20fc2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_20fc30:
    // 0x20fc30: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20fc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_20fc34:
    // 0x20fc34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x20fc34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_20fc38:
    // 0x20fc38: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
label_20fc3c:
    if (ctx->pc == 0x20FC3Cu) {
        ctx->pc = 0x20FC40u;
        goto label_20fc40;
    }
    ctx->pc = 0x20FC38u;
    {
        const bool branch_taken_0x20fc38 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x20fc38) {
            ctx->pc = 0x20FC5Cu;
            goto label_20fc5c;
        }
    }
    ctx->pc = 0x20FC40u;
label_20fc40:
    // 0x20fc40: 0x4202f  dsubu       $a0, $zero, $a0
    ctx->pc = 0x20fc40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
label_20fc44:
    // 0x20fc44: 0xc0ca2b8  jal         func_328AE0
label_20fc48:
    if (ctx->pc == 0x20FC48u) {
        ctx->pc = 0x20FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC44u;
        // 0x20fc48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC4Cu;
        goto label_20fc4c;
    }
    ctx->pc = 0x20FC44u;
    SET_GPR_U32(ctx, 31, 0x20FC4Cu);
    ctx->pc = 0x20FC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC44u;
    // 0x20fc48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x20FC44u, 0x20FC4Cu)) {
        return;
    }
    ctx->pc = 0x20FC4Cu;
label_20fc4c:
    // 0x20fc4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20fc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20fc50:
    // 0x20fc50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20fc50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20fc54:
    // 0x20fc54: 0x10000005  b           . + 4 + (0x5 << 2)
label_20fc58:
    if (ctx->pc == 0x20FC58u) {
        ctx->pc = 0x20FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC54u;
        // 0x20fc58: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC5Cu;
        goto label_20fc5c;
    }
    ctx->pc = 0x20FC54u;
    {
        const bool branch_taken_0x20fc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC54u;
        // 0x20fc58: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc54) {
            ctx->pc = 0x20FC6Cu;
            goto label_20fc6c;
        }
    }
    ctx->pc = 0x20FC5Cu;
label_20fc5c:
    // 0x20fc5c: 0xc0ca2b8  jal         func_328AE0
label_20fc60:
    if (ctx->pc == 0x20FC60u) {
        ctx->pc = 0x20FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC5Cu;
        // 0x20fc60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC64u;
        goto label_20fc64;
    }
    ctx->pc = 0x20FC5Cu;
    SET_GPR_U32(ctx, 31, 0x20FC64u);
    ctx->pc = 0x20FC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC5Cu;
    // 0x20fc60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x20FC5Cu, 0x20FC64u)) {
        return;
    }
    ctx->pc = 0x20FC64u;
label_20fc64:
    // 0x20fc64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20fc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20fc68:
    // 0x20fc68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20fc68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20fc6c:
    // 0x20fc6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20fc70:
    // 0x20fc70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20fc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20fc74:
    // 0x20fc74: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x20fc74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_20fc78:
    // 0x20fc78: 0x641ffe5  bgez        $s2, . + 4 + (-0x1B << 2)
label_20fc7c:
    if (ctx->pc == 0x20FC7Cu) {
        ctx->pc = 0x20FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC78u;
        // 0x20fc7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC80u;
        goto label_20fc80;
    }
    ctx->pc = 0x20FC78u;
    {
        const bool branch_taken_0x20fc78 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x20FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC78u;
        // 0x20fc7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc78) {
            ctx->pc = 0x20FC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fc10;
        }
    }
    ctx->pc = 0x20FC80u;
label_20fc80:
    // 0x20fc80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20fc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20fc84:
    // 0x20fc84: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x20fc84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
label_20fc88:
    // 0x20fc88: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_20fc8c:
    if (ctx->pc == 0x20FC8Cu) {
        ctx->pc = 0x20FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC88u;
        // 0x20fc8c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC90u;
        goto label_20fc90;
    }
    ctx->pc = 0x20FC88u;
    {
        const bool branch_taken_0x20fc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC88u;
        // 0x20fc8c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc88) {
            ctx->pc = 0x20FBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fbf0;
        }
    }
    ctx->pc = 0x20FC90u;
label_20fc90:
    // 0x20fc90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x20fc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20fc94:
    // 0x20fc94: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x20fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_20fc98:
    // 0x20fc98: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x20fc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_20fc9c:
    // 0x20fc9c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x20fc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20fca0:
    // 0x20fca0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x20fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20fca4:
    // 0x20fca4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x20fca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_20fca8:
    // 0x20fca8: 0x8ee20078  lw          $v0, 0x78($s7)
    ctx->pc = 0x20fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 120)));
label_20fcac:
    // 0x20fcac: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x20fcacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20fcb0:
    // 0x20fcb0: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
label_20fcb4:
    if (ctx->pc == 0x20FCB4u) {
        ctx->pc = 0x20FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCB0u;
        // 0x20fcb4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FCB8u;
        goto label_20fcb8;
    }
    ctx->pc = 0x20FCB0u;
    {
        const bool branch_taken_0x20fcb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCB0u;
        // 0x20fcb4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcb0) {
            ctx->pc = 0x20FB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fb48;
        }
    }
    ctx->pc = 0x20FCB8u;
label_20fcb8:
    // 0x20fcb8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x20fcb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20fcbc:
    // 0x20fcbc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20fcbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20fcc0:
    // 0x20fcc0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20fcc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20fcc4:
    // 0x20fcc4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20fcc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20fcc8:
    // 0x20fcc8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20fcc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20fccc:
    // 0x20fccc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20fcccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20fcd0:
    // 0x20fcd0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x20fcd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20fcd4:
    // 0x20fcd4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x20fcd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20fcd8:
    // 0x20fcd8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x20fcd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20fcdc:
    // 0x20fcdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20fcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20fce0:
    // 0x20fce0: 0x3e00008  jr          $ra
label_20fce4:
    if (ctx->pc == 0x20FCE4u) {
        ctx->pc = 0x20FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCE0u;
        // 0x20fce4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FCE8u;
        goto label_fallthrough_0x20fce0;
    }
    ctx->pc = 0x20FCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCE0u;
        // 0x20fce4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20fce0:
    ctx->pc = 0x20FCE8u;
}
