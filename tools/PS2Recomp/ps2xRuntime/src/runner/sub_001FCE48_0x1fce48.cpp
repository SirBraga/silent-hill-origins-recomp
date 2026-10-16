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

// Function: sub_001FCE48
// Address: 0x1fce48 - 0x1fd040
void sub_001FCE48_0x1fce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCE48_0x1fce48");
#endif

    switch (ctx->pc) {
        case 0x1fce48u: goto label_1fce48;
        case 0x1fce4cu: goto label_1fce4c;
        case 0x1fce50u: goto label_1fce50;
        case 0x1fce54u: goto label_1fce54;
        case 0x1fce58u: goto label_1fce58;
        case 0x1fce5cu: goto label_1fce5c;
        case 0x1fce60u: goto label_1fce60;
        case 0x1fce64u: goto label_1fce64;
        case 0x1fce68u: goto label_1fce68;
        case 0x1fce6cu: goto label_1fce6c;
        case 0x1fce70u: goto label_1fce70;
        case 0x1fce74u: goto label_1fce74;
        case 0x1fce78u: goto label_1fce78;
        case 0x1fce7cu: goto label_1fce7c;
        case 0x1fce80u: goto label_1fce80;
        case 0x1fce84u: goto label_1fce84;
        case 0x1fce88u: goto label_1fce88;
        case 0x1fce8cu: goto label_1fce8c;
        case 0x1fce90u: goto label_1fce90;
        case 0x1fce94u: goto label_1fce94;
        case 0x1fce98u: goto label_1fce98;
        case 0x1fce9cu: goto label_1fce9c;
        case 0x1fcea0u: goto label_1fcea0;
        case 0x1fcea4u: goto label_1fcea4;
        case 0x1fcea8u: goto label_1fcea8;
        case 0x1fceacu: goto label_1fceac;
        case 0x1fceb0u: goto label_1fceb0;
        case 0x1fceb4u: goto label_1fceb4;
        case 0x1fceb8u: goto label_1fceb8;
        case 0x1fcebcu: goto label_1fcebc;
        case 0x1fcec0u: goto label_1fcec0;
        case 0x1fcec4u: goto label_1fcec4;
        case 0x1fcec8u: goto label_1fcec8;
        case 0x1fceccu: goto label_1fcecc;
        case 0x1fced0u: goto label_1fced0;
        case 0x1fced4u: goto label_1fced4;
        case 0x1fced8u: goto label_1fced8;
        case 0x1fcedcu: goto label_1fcedc;
        case 0x1fcee0u: goto label_1fcee0;
        case 0x1fcee4u: goto label_1fcee4;
        case 0x1fcee8u: goto label_1fcee8;
        case 0x1fceecu: goto label_1fceec;
        case 0x1fcef0u: goto label_1fcef0;
        case 0x1fcef4u: goto label_1fcef4;
        case 0x1fcef8u: goto label_1fcef8;
        case 0x1fcefcu: goto label_1fcefc;
        case 0x1fcf00u: goto label_1fcf00;
        case 0x1fcf04u: goto label_1fcf04;
        case 0x1fcf08u: goto label_1fcf08;
        case 0x1fcf0cu: goto label_1fcf0c;
        case 0x1fcf10u: goto label_1fcf10;
        case 0x1fcf14u: goto label_1fcf14;
        case 0x1fcf18u: goto label_1fcf18;
        case 0x1fcf1cu: goto label_1fcf1c;
        case 0x1fcf20u: goto label_1fcf20;
        case 0x1fcf24u: goto label_1fcf24;
        case 0x1fcf28u: goto label_1fcf28;
        case 0x1fcf2cu: goto label_1fcf2c;
        case 0x1fcf30u: goto label_1fcf30;
        case 0x1fcf34u: goto label_1fcf34;
        case 0x1fcf38u: goto label_1fcf38;
        case 0x1fcf3cu: goto label_1fcf3c;
        case 0x1fcf40u: goto label_1fcf40;
        case 0x1fcf44u: goto label_1fcf44;
        case 0x1fcf48u: goto label_1fcf48;
        case 0x1fcf4cu: goto label_1fcf4c;
        case 0x1fcf50u: goto label_1fcf50;
        case 0x1fcf54u: goto label_1fcf54;
        case 0x1fcf58u: goto label_1fcf58;
        case 0x1fcf5cu: goto label_1fcf5c;
        case 0x1fcf60u: goto label_1fcf60;
        case 0x1fcf64u: goto label_1fcf64;
        case 0x1fcf68u: goto label_1fcf68;
        case 0x1fcf6cu: goto label_1fcf6c;
        case 0x1fcf70u: goto label_1fcf70;
        case 0x1fcf74u: goto label_1fcf74;
        case 0x1fcf78u: goto label_1fcf78;
        case 0x1fcf7cu: goto label_1fcf7c;
        case 0x1fcf80u: goto label_1fcf80;
        case 0x1fcf84u: goto label_1fcf84;
        case 0x1fcf88u: goto label_1fcf88;
        case 0x1fcf8cu: goto label_1fcf8c;
        case 0x1fcf90u: goto label_1fcf90;
        case 0x1fcf94u: goto label_1fcf94;
        case 0x1fcf98u: goto label_1fcf98;
        case 0x1fcf9cu: goto label_1fcf9c;
        case 0x1fcfa0u: goto label_1fcfa0;
        case 0x1fcfa4u: goto label_1fcfa4;
        case 0x1fcfa8u: goto label_1fcfa8;
        case 0x1fcfacu: goto label_1fcfac;
        case 0x1fcfb0u: goto label_1fcfb0;
        case 0x1fcfb4u: goto label_1fcfb4;
        case 0x1fcfb8u: goto label_1fcfb8;
        case 0x1fcfbcu: goto label_1fcfbc;
        case 0x1fcfc0u: goto label_1fcfc0;
        case 0x1fcfc4u: goto label_1fcfc4;
        case 0x1fcfc8u: goto label_1fcfc8;
        case 0x1fcfccu: goto label_1fcfcc;
        case 0x1fcfd0u: goto label_1fcfd0;
        case 0x1fcfd4u: goto label_1fcfd4;
        case 0x1fcfd8u: goto label_1fcfd8;
        case 0x1fcfdcu: goto label_1fcfdc;
        case 0x1fcfe0u: goto label_1fcfe0;
        case 0x1fcfe4u: goto label_1fcfe4;
        case 0x1fcfe8u: goto label_1fcfe8;
        case 0x1fcfecu: goto label_1fcfec;
        case 0x1fcff0u: goto label_1fcff0;
        case 0x1fcff4u: goto label_1fcff4;
        case 0x1fcff8u: goto label_1fcff8;
        case 0x1fcffcu: goto label_1fcffc;
        case 0x1fd000u: goto label_1fd000;
        case 0x1fd004u: goto label_1fd004;
        case 0x1fd008u: goto label_1fd008;
        case 0x1fd00cu: goto label_1fd00c;
        case 0x1fd010u: goto label_1fd010;
        case 0x1fd014u: goto label_1fd014;
        case 0x1fd018u: goto label_1fd018;
        case 0x1fd01cu: goto label_1fd01c;
        case 0x1fd020u: goto label_1fd020;
        case 0x1fd024u: goto label_1fd024;
        case 0x1fd028u: goto label_1fd028;
        case 0x1fd02cu: goto label_1fd02c;
        case 0x1fd030u: goto label_1fd030;
        case 0x1fd034u: goto label_1fd034;
        case 0x1fd038u: goto label_1fd038;
        case 0x1fd03cu: goto label_1fd03c;
        default: break;
    }

    ctx->pc = 0x1fce48u;

label_1fce48:
    // 0x1fce48: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x1fce48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
label_1fce4c:
    // 0x1fce4c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1fce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_1fce50:
    // 0x1fce50: 0x7fb30420  sq          $s3, 0x420($sp)
    ctx->pc = 0x1fce50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 19));
label_1fce54:
    // 0x1fce54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fce54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fce58:
    // 0x1fce58: 0x7fb00450  sq          $s0, 0x450($sp)
    ctx->pc = 0x1fce58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 16));
label_1fce5c:
    // 0x1fce5c: 0x7fb10440  sq          $s1, 0x440($sp)
    ctx->pc = 0x1fce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 17));
label_1fce60:
    // 0x1fce60: 0x27b00400  addiu       $s0, $sp, 0x400
    ctx->pc = 0x1fce60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_1fce64:
    // 0x1fce64: 0x7fb20430  sq          $s2, 0x430($sp)
    ctx->pc = 0x1fce64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 18));
label_1fce68:
    // 0x1fce68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fce68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fce6c:
    // 0x1fce6c: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x1fce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_1fce70:
    // 0x1fce70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fce70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fce74:
    // 0x1fce74: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1fce78:
    if (ctx->pc == 0x1FCE78u) {
        ctx->pc = 0x1FCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE74u;
        // 0x1fce78: 0xffbf0410  sd          $ra, 0x410($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE7Cu;
        goto label_1fce7c;
    }
    ctx->pc = 0x1FCE74u;
    {
        const bool branch_taken_0x1fce74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE74u;
        // 0x1fce78: 0xffbf0410  sd          $ra, 0x410($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce74) {
            ctx->pc = 0x1FCF14u;
            goto label_1fcf14;
        }
    }
    ctx->pc = 0x1FCE7Cu;
label_1fce7c:
    // 0x1fce7c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1fce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fce80:
    // 0x1fce80: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1fce84:
    if (ctx->pc == 0x1FCE84u) {
        ctx->pc = 0x1FCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE80u;
        // 0x1fce84: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE88u;
        goto label_1fce88;
    }
    ctx->pc = 0x1FCE80u;
    {
        const bool branch_taken_0x1fce80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE80u;
        // 0x1fce84: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce80) {
            ctx->pc = 0x1FCF14u;
            goto label_1fcf14;
        }
    }
    ctx->pc = 0x1FCE88u;
label_1fce88:
    // 0x1fce88: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1fce88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fce8c:
    // 0x1fce8c: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x1fce8cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1fce90:
    // 0x1fce90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fce90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fce94:
    // 0x1fce94: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_1fce98:
    if (ctx->pc == 0x1FCE98u) {
        ctx->pc = 0x1FCE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE94u;
        // 0x1fce98: 0x90650000  lbu         $a1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE9Cu;
        goto label_1fce9c;
    }
    ctx->pc = 0x1FCE94u;
    {
        const bool branch_taken_0x1fce94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE94u;
        // 0x1fce98: 0x90650000  lbu         $a1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce94) {
            ctx->pc = 0x1FCECCu;
            goto label_1fcecc;
        }
    }
    ctx->pc = 0x1FCE9Cu;
label_1fce9c:
    // 0x1fce9c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1fce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1fcea0:
    // 0x1fcea0: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
label_1fcea4:
    if (ctx->pc == 0x1FCEA4u) {
        ctx->pc = 0x1FCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEA0u;
        // 0x1fcea4: 0x2406002e  addiu       $a2, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCEA8u;
        goto label_1fcea8;
    }
    ctx->pc = 0x1FCEA0u;
    {
        const bool branch_taken_0x1fcea0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEA0u;
        // 0x1fcea4: 0x2406002e  addiu       $a2, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcea0) {
            ctx->pc = 0x1FCECCu;
            goto label_1fcecc;
        }
    }
    ctx->pc = 0x1FCEA8u;
label_1fcea8:
    // 0x1fcea8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fcea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_1fceac:
    // 0x1fceac: 0x0  nop
    ctx->pc = 0x1fceacu;
    // NOP
label_1fceb0:
    // 0x1fceb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fceb4:
    // 0x1fceb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1fceb8:
    // 0x1fceb8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1fceb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1fcebc:
    // 0x1fcebc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fcec0:
    if (ctx->pc == 0x1FCEC0u) {
        ctx->pc = 0x1FCEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEBCu;
        // 0x1fcec0: 0x90650000  lbu         $a1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCEC4u;
        goto label_1fcec4;
    }
    ctx->pc = 0x1FCEBCu;
    {
        const bool branch_taken_0x1fcebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEBCu;
        // 0x1fcec0: 0x90650000  lbu         $a1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcebc) {
            ctx->pc = 0x1FCECCu;
            goto label_1fcecc;
        }
    }
    ctx->pc = 0x1FCEC4u;
label_1fcec4:
    // 0x1fcec4: 0x5446fffa  bnel        $v0, $a2, . + 4 + (-0x6 << 2)
label_1fcec8:
    if (ctx->pc == 0x1FCEC8u) {
        ctx->pc = 0x1FCEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEC4u;
        // 0x1fcec8: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCECCu;
        goto label_1fcecc;
    }
    ctx->pc = 0x1FCEC4u;
    {
        const bool branch_taken_0x1fcec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1fcec4) {
            ctx->pc = 0x1FCEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCEC4u;
            // 0x1fcec8: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fceb0;
        }
    }
    ctx->pc = 0x1FCECCu;
label_1fcecc:
    // 0x1fcecc: 0x14e0000b  bnez        $a3, . + 4 + (0xB << 2)
label_1fced0:
    if (ctx->pc == 0x1FCED0u) {
        ctx->pc = 0x1FCED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCECCu;
        // 0x1fced0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCED4u;
        goto label_1fced4;
    }
    ctx->pc = 0x1FCECCu;
    {
        const bool branch_taken_0x1fcecc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCECCu;
        // 0x1fced0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcecc) {
            ctx->pc = 0x1FCEFCu;
            goto label_1fcefc;
        }
    }
    ctx->pc = 0x1FCED4u;
label_1fced4:
    // 0x1fced4: 0xc0c4ab8  jal         func_312AE0
label_1fced8:
    if (ctx->pc == 0x1FCED8u) {
        ctx->pc = 0x1FCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCED4u;
        // 0x1fced8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCEDCu;
        goto label_1fcedc;
    }
    ctx->pc = 0x1FCED4u;
    SET_GPR_U32(ctx, 31, 0x1FCEDCu);
    ctx->pc = 0x1FCED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCED4u;
    // 0x1fced8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1FCED4u, 0x1FCEDCu)) {
        return;
    }
    ctx->pc = 0x1FCEDCu;
label_1fcedc:
    // 0x1fcedc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1fcedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fcee0:
    // 0x1fcee0: 0xc080924  jal         func_202490
label_1fcee4:
    if (ctx->pc == 0x1FCEE4u) {
        ctx->pc = 0x1FCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEE0u;
        // 0x1fcee4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCEE8u;
        goto label_1fcee8;
    }
    ctx->pc = 0x1FCEE0u;
    SET_GPR_U32(ctx, 31, 0x1FCEE8u);
    ctx->pc = 0x1FCEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCEE0u;
    // 0x1fcee4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1FCEE0u, 0x1FCEE8u)) {
        return;
    }
    ctx->pc = 0x1FCEE8u;
label_1fcee8:
    // 0x1fcee8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fcee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1fceec:
    // 0x1fceec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fceecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcef0:
    // 0x1fcef0: 0x8c621094  lw          $v0, 0x1094($v1)
    ctx->pc = 0x1fcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4244)));
label_1fcef4:
    // 0x1fcef4: 0x40f809  jalr        $v0
label_1fcef8:
    if (ctx->pc == 0x1FCEF8u) {
        ctx->pc = 0x1FCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEF4u;
        // 0x1fcef8: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCEFCu;
        goto label_1fcefc;
    }
    ctx->pc = 0x1FCEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCEFCu);
        ctx->pc = 0x1FCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEF4u;
        // 0x1fcef8: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCEF4u, 0x1FCEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCEFCu;
label_1fcefc:
    // 0x1fcefc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fcefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf00:
    // 0x1fcf00: 0xc0c4a1f  jal         func_31287C
label_1fcf04:
    if (ctx->pc == 0x1FCF04u) {
        ctx->pc = 0x1FCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF00u;
        // 0x1fcf04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF08u;
        goto label_1fcf08;
    }
    ctx->pc = 0x1FCF00u;
    SET_GPR_U32(ctx, 31, 0x1FCF08u);
    ctx->pc = 0x1FCF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF00u;
    // 0x1fcf04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1FCF00u, 0x1FCF08u)) {
        return;
    }
    ctx->pc = 0x1FCF08u;
label_1fcf08:
    // 0x1fcf08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1fcf0c:
    if (ctx->pc == 0x1FCF0Cu) {
        ctx->pc = 0x1FCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF08u;
        // 0x1fcf0c: 0x8e620110  lw          $v0, 0x110($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF10u;
        goto label_1fcf10;
    }
    ctx->pc = 0x1FCF08u;
    {
        const bool branch_taken_0x1fcf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF08u;
        // 0x1fcf0c: 0x8e620110  lw          $v0, 0x110($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf08) {
            ctx->pc = 0x1FCF14u;
            goto label_1fcf14;
        }
    }
    ctx->pc = 0x1FCF10u;
label_1fcf10:
    // 0x1fcf10: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1fcf10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fcf14:
    // 0x1fcf14: 0xc07f2f2  jal         func_1FCBC8
label_1fcf18:
    if (ctx->pc == 0x1FCF18u) {
        ctx->pc = 0x1FCF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF14u;
        // 0x1fcf18: 0xafb10400  sw          $s1, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF1Cu;
        goto label_1fcf1c;
    }
    ctx->pc = 0x1FCF14u;
    SET_GPR_U32(ctx, 31, 0x1FCF1Cu);
    ctx->pc = 0x1FCF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF14u;
    // 0x1fcf18: 0xafb10400  sw          $s1, 0x400($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FCF14u, 0x1FCF1Cu)) {
        return;
    }
    ctx->pc = 0x1FCF1Cu;
label_1fcf1c:
    // 0x1fcf1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fcf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf20:
    // 0x1fcf20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fcf20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf24:
    // 0x1fcf24: 0xc07f622  jal         func_1FD888
label_1fcf28:
    if (ctx->pc == 0x1FCF28u) {
        ctx->pc = 0x1FCF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF24u;
        // 0x1fcf28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF2Cu;
        goto label_1fcf2c;
    }
    ctx->pc = 0x1FCF24u;
    SET_GPR_U32(ctx, 31, 0x1FCF2Cu);
    ctx->pc = 0x1FCF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF24u;
    // 0x1fcf28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD888u, 0x1FCF24u, 0x1FCF2Cu)) {
        return;
    }
    ctx->pc = 0x1FCF2Cu;
label_1fcf2c:
    // 0x1fcf2c: 0xc07f2f2  jal         func_1FCBC8
label_1fcf30:
    if (ctx->pc == 0x1FCF30u) {
        ctx->pc = 0x1FCF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF2Cu;
        // 0x1fcf30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF34u;
        goto label_1fcf34;
    }
    ctx->pc = 0x1FCF2Cu;
    SET_GPR_U32(ctx, 31, 0x1FCF34u);
    ctx->pc = 0x1FCF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF2Cu;
    // 0x1fcf30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FCF2Cu, 0x1FCF34u)) {
        return;
    }
    ctx->pc = 0x1FCF34u;
label_1fcf34:
    // 0x1fcf34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fcf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fcf38:
    // 0x1fcf38: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fcf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fcf3c:
    // 0x1fcf3c: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
label_1fcf40:
    if (ctx->pc == 0x1FCF40u) {
        ctx->pc = 0x1FCF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF3Cu;
        // 0x1fcf40: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF44u;
        goto label_1fcf44;
    }
    ctx->pc = 0x1FCF3Cu;
    {
        const bool branch_taken_0x1fcf3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FCF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF3Cu;
        // 0x1fcf40: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf3c) {
            ctx->pc = 0x1FCF48u;
            goto label_1fcf48;
        }
    }
    ctx->pc = 0x1FCF44u;
label_1fcf44:
    // 0x1fcf44: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x1fcf44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1fcf48:
    // 0x1fcf48: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_1fcf4c:
    if (ctx->pc == 0x1FCF4Cu) {
        ctx->pc = 0x1FCF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF48u;
        // 0x1fcf4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF50u;
        goto label_1fcf50;
    }
    ctx->pc = 0x1FCF48u;
    {
        const bool branch_taken_0x1fcf48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF48u;
        // 0x1fcf4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf48) {
            ctx->pc = 0x1FD020u;
            goto label_1fd020;
        }
    }
    ctx->pc = 0x1FCF50u;
label_1fcf50:
    // 0x1fcf50: 0xc081816  jal         func_206058
label_1fcf54:
    if (ctx->pc == 0x1FCF54u) {
        ctx->pc = 0x1FCF58u;
        goto label_1fcf58;
    }
    ctx->pc = 0x1FCF50u;
    SET_GPR_U32(ctx, 31, 0x1FCF58u);
    ctx->pc = 0x206058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206058u, 0x1FCF50u, 0x1FCF58u)) {
        return;
    }
    ctx->pc = 0x1FCF58u;
label_1fcf58:
    // 0x1fcf58: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1fcf5c:
    if (ctx->pc == 0x1FCF5Cu) {
        ctx->pc = 0x1FCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF58u;
        // 0x1fcf5c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF60u;
        goto label_1fcf60;
    }
    ctx->pc = 0x1FCF58u;
    {
        const bool branch_taken_0x1fcf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF58u;
        // 0x1fcf5c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf58) {
            ctx->pc = 0x1FCFC8u;
            goto label_1fcfc8;
        }
    }
    ctx->pc = 0x1FCF60u;
label_1fcf60:
    // 0x1fcf60: 0xc0808f0  jal         func_2023C0
label_1fcf64:
    if (ctx->pc == 0x1FCF64u) {
        ctx->pc = 0x1FCF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF60u;
        // 0x1fcf64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF68u;
        goto label_1fcf68;
    }
    ctx->pc = 0x1FCF60u;
    SET_GPR_U32(ctx, 31, 0x1FCF68u);
    ctx->pc = 0x1FCF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF60u;
    // 0x1fcf64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1FCF60u, 0x1FCF68u)) {
        return;
    }
    ctx->pc = 0x1FCF68u;
label_1fcf68:
    // 0x1fcf68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fcf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fcf6c:
    // 0x1fcf6c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1fcf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_1fcf70:
    // 0x1fcf70: 0x246332d0  addiu       $v1, $v1, 0x32D0
    ctx->pc = 0x1fcf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13008));
label_1fcf74:
    // 0x1fcf74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fcf74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1fcf78:
    // 0x1fcf78: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1fcf78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_1fcf7c:
    // 0x1fcf7c: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x1fcf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
label_1fcf80:
    // 0x1fcf80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fcf80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1fcf84:
    // 0x1fcf84: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1fcf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1fcf88:
    // 0x1fcf88: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1fcf88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1fcf8c:
    // 0x1fcf8c: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x1fcf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1fcf90:
    // 0x1fcf90: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1fcf90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1fcf94:
    // 0x1fcf94: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fcf94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1fcf98:
    // 0x1fcf98: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1fcf98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_1fcf9c:
    // 0x1fcf9c: 0x24a534e0  addiu       $a1, $a1, 0x34E0
    ctx->pc = 0x1fcf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13536));
label_1fcfa0:
    // 0x1fcfa0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1fcfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1fcfa4:
    // 0x1fcfa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fcfa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcfa8:
    // 0x1fcfa8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1fcfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1fcfac:
    // 0x1fcfac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fcfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1fcfb0:
    // 0x1fcfb0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1fcfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_1fcfb4:
    // 0x1fcfb4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1fcfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1fcfb8:
    // 0x1fcfb8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1fcfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1fcfbc:
    // 0x1fcfbc: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1fcfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_1fcfc0:
    // 0x1fcfc0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1fcfc4:
    if (ctx->pc == 0x1FCFC4u) {
        ctx->pc = 0x1FCFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFC0u;
        // 0x1fcfc4: 0xac450030  sw          $a1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFC8u;
        goto label_1fcfc8;
    }
    ctx->pc = 0x1FCFC0u;
    {
        const bool branch_taken_0x1fcfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFC0u;
        // 0x1fcfc4: 0xac450030  sw          $a1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfc0) {
            ctx->pc = 0x1FD01Cu;
            goto label_1fd01c;
        }
    }
    ctx->pc = 0x1FCFC8u;
label_1fcfc8:
    // 0x1fcfc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fcfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fcfcc:
    // 0x1fcfcc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1fcfd0:
    if (ctx->pc == 0x1FCFD0u) {
        ctx->pc = 0x1FCFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFCCu;
        // 0x1fcfd0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFD4u;
        goto label_1fcfd4;
    }
    ctx->pc = 0x1FCFCCu;
    {
        const bool branch_taken_0x1fcfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcfcc) {
            ctx->pc = 0x1FCFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCFCCu;
            // 0x1fcfd0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD020u;
            goto label_1fd020;
        }
    }
    ctx->pc = 0x1FCFD4u;
label_1fcfd4:
    // 0x1fcfd4: 0x40f809  jalr        $v0
label_1fcfd8:
    if (ctx->pc == 0x1FCFD8u) {
        ctx->pc = 0x1FCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFD4u;
        // 0x1fcfd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFDCu;
        goto label_1fcfdc;
    }
    ctx->pc = 0x1FCFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCFDCu);
        ctx->pc = 0x1FCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFD4u;
        // 0x1fcfd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCFD4u, 0x1FCFDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCFDCu;
label_1fcfdc:
    // 0x1fcfdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fcfdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcfe0:
    // 0x1fcfe0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_1fcfe4:
    if (ctx->pc == 0x1FCFE4u) {
        ctx->pc = 0x1FCFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFE0u;
        // 0x1fcfe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFE8u;
        goto label_1fcfe8;
    }
    ctx->pc = 0x1FCFE0u;
    {
        const bool branch_taken_0x1fcfe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFE0u;
        // 0x1fcfe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfe0) {
            ctx->pc = 0x1FD01Cu;
            goto label_1fd01c;
        }
    }
    ctx->pc = 0x1FCFE8u;
label_1fcfe8:
    // 0x1fcfe8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1fcfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fcfec:
    // 0x1fcfec: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fcfecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fcff0:
    // 0x1fcff0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fcff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fcff4:
    // 0x1fcff4: 0x60f809  jalr        $v1
label_1fcff8:
    if (ctx->pc == 0x1FCFF8u) {
        ctx->pc = 0x1FCFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFF4u;
        // 0x1fcff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFFCu;
        goto label_1fcffc;
    }
    ctx->pc = 0x1FCFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FCFFCu);
        ctx->pc = 0x1FCFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFF4u;
        // 0x1fcff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCFF4u, 0x1FCFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCFFCu;
label_1fcffc:
    // 0x1fcffc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1fcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fd000:
    // 0x1fd000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fd000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fd004:
    // 0x1fd004: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1fd004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1fd008:
    // 0x1fd008: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1fd008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1fd00c:
    // 0x1fd00c: 0x60f809  jalr        $v1
label_1fd010:
    if (ctx->pc == 0x1FD010u) {
        ctx->pc = 0x1FD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD00Cu;
        // 0x1fd010: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD014u;
        goto label_1fd014;
    }
    ctx->pc = 0x1FD00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD014u);
        ctx->pc = 0x1FD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD00Cu;
        // 0x1fd010: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD00Cu, 0x1FD014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD014u;
label_1fd014:
    // 0x1fd014: 0xc07f850  jal         func_1FE140
label_1fd018:
    if (ctx->pc == 0x1FD018u) {
        ctx->pc = 0x1FD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD014u;
        // 0x1fd018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD01Cu;
        goto label_1fd01c;
    }
    ctx->pc = 0x1FD014u;
    SET_GPR_U32(ctx, 31, 0x1FD01Cu);
    ctx->pc = 0x1FD018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD014u;
    // 0x1fd018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE140u, 0x1FD014u, 0x1FD01Cu)) {
        return;
    }
    ctx->pc = 0x1FD01Cu;
label_1fd01c:
    // 0x1fd01c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1fd01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_1fd020:
    // 0x1fd020: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fd020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd024:
    // 0x1fd024: 0x7bb10440  lq          $s1, 0x440($sp)
    ctx->pc = 0x1fd024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_1fd028:
    // 0x1fd028: 0x7bb00450  lq          $s0, 0x450($sp)
    ctx->pc = 0x1fd028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_1fd02c:
    // 0x1fd02c: 0x7bb20430  lq          $s2, 0x430($sp)
    ctx->pc = 0x1fd02cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_1fd030:
    // 0x1fd030: 0x7bb30420  lq          $s3, 0x420($sp)
    ctx->pc = 0x1fd030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_1fd034:
    // 0x1fd034: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x1fd034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_1fd038:
    // 0x1fd038: 0x3e00008  jr          $ra
label_1fd03c:
    if (ctx->pc == 0x1FD03Cu) {
        ctx->pc = 0x1FD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD038u;
        // 0x1fd03c: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD040u;
        goto label_fallthrough_0x1fd038;
    }
    ctx->pc = 0x1FD038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD038u;
        // 0x1fd03c: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fd038:
    ctx->pc = 0x1FD040u;
}
