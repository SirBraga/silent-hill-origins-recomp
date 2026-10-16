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

// Function: sub_001EBD48
// Address: 0x1ebd48 - 0x1ebf70
void sub_001EBD48_0x1ebd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBD48_0x1ebd48");
#endif

    switch (ctx->pc) {
        case 0x1ebd48u: goto label_1ebd48;
        case 0x1ebd4cu: goto label_1ebd4c;
        case 0x1ebd50u: goto label_1ebd50;
        case 0x1ebd54u: goto label_1ebd54;
        case 0x1ebd58u: goto label_1ebd58;
        case 0x1ebd5cu: goto label_1ebd5c;
        case 0x1ebd60u: goto label_1ebd60;
        case 0x1ebd64u: goto label_1ebd64;
        case 0x1ebd68u: goto label_1ebd68;
        case 0x1ebd6cu: goto label_1ebd6c;
        case 0x1ebd70u: goto label_1ebd70;
        case 0x1ebd74u: goto label_1ebd74;
        case 0x1ebd78u: goto label_1ebd78;
        case 0x1ebd7cu: goto label_1ebd7c;
        case 0x1ebd80u: goto label_1ebd80;
        case 0x1ebd84u: goto label_1ebd84;
        case 0x1ebd88u: goto label_1ebd88;
        case 0x1ebd8cu: goto label_1ebd8c;
        case 0x1ebd90u: goto label_1ebd90;
        case 0x1ebd94u: goto label_1ebd94;
        case 0x1ebd98u: goto label_1ebd98;
        case 0x1ebd9cu: goto label_1ebd9c;
        case 0x1ebda0u: goto label_1ebda0;
        case 0x1ebda4u: goto label_1ebda4;
        case 0x1ebda8u: goto label_1ebda8;
        case 0x1ebdacu: goto label_1ebdac;
        case 0x1ebdb0u: goto label_1ebdb0;
        case 0x1ebdb4u: goto label_1ebdb4;
        case 0x1ebdb8u: goto label_1ebdb8;
        case 0x1ebdbcu: goto label_1ebdbc;
        case 0x1ebdc0u: goto label_1ebdc0;
        case 0x1ebdc4u: goto label_1ebdc4;
        case 0x1ebdc8u: goto label_1ebdc8;
        case 0x1ebdccu: goto label_1ebdcc;
        case 0x1ebdd0u: goto label_1ebdd0;
        case 0x1ebdd4u: goto label_1ebdd4;
        case 0x1ebdd8u: goto label_1ebdd8;
        case 0x1ebddcu: goto label_1ebddc;
        case 0x1ebde0u: goto label_1ebde0;
        case 0x1ebde4u: goto label_1ebde4;
        case 0x1ebde8u: goto label_1ebde8;
        case 0x1ebdecu: goto label_1ebdec;
        case 0x1ebdf0u: goto label_1ebdf0;
        case 0x1ebdf4u: goto label_1ebdf4;
        case 0x1ebdf8u: goto label_1ebdf8;
        case 0x1ebdfcu: goto label_1ebdfc;
        case 0x1ebe00u: goto label_1ebe00;
        case 0x1ebe04u: goto label_1ebe04;
        case 0x1ebe08u: goto label_1ebe08;
        case 0x1ebe0cu: goto label_1ebe0c;
        case 0x1ebe10u: goto label_1ebe10;
        case 0x1ebe14u: goto label_1ebe14;
        case 0x1ebe18u: goto label_1ebe18;
        case 0x1ebe1cu: goto label_1ebe1c;
        case 0x1ebe20u: goto label_1ebe20;
        case 0x1ebe24u: goto label_1ebe24;
        case 0x1ebe28u: goto label_1ebe28;
        case 0x1ebe2cu: goto label_1ebe2c;
        case 0x1ebe30u: goto label_1ebe30;
        case 0x1ebe34u: goto label_1ebe34;
        case 0x1ebe38u: goto label_1ebe38;
        case 0x1ebe3cu: goto label_1ebe3c;
        case 0x1ebe40u: goto label_1ebe40;
        case 0x1ebe44u: goto label_1ebe44;
        case 0x1ebe48u: goto label_1ebe48;
        case 0x1ebe4cu: goto label_1ebe4c;
        case 0x1ebe50u: goto label_1ebe50;
        case 0x1ebe54u: goto label_1ebe54;
        case 0x1ebe58u: goto label_1ebe58;
        case 0x1ebe5cu: goto label_1ebe5c;
        case 0x1ebe60u: goto label_1ebe60;
        case 0x1ebe64u: goto label_1ebe64;
        case 0x1ebe68u: goto label_1ebe68;
        case 0x1ebe6cu: goto label_1ebe6c;
        case 0x1ebe70u: goto label_1ebe70;
        case 0x1ebe74u: goto label_1ebe74;
        case 0x1ebe78u: goto label_1ebe78;
        case 0x1ebe7cu: goto label_1ebe7c;
        case 0x1ebe80u: goto label_1ebe80;
        case 0x1ebe84u: goto label_1ebe84;
        case 0x1ebe88u: goto label_1ebe88;
        case 0x1ebe8cu: goto label_1ebe8c;
        case 0x1ebe90u: goto label_1ebe90;
        case 0x1ebe94u: goto label_1ebe94;
        case 0x1ebe98u: goto label_1ebe98;
        case 0x1ebe9cu: goto label_1ebe9c;
        case 0x1ebea0u: goto label_1ebea0;
        case 0x1ebea4u: goto label_1ebea4;
        case 0x1ebea8u: goto label_1ebea8;
        case 0x1ebeacu: goto label_1ebeac;
        case 0x1ebeb0u: goto label_1ebeb0;
        case 0x1ebeb4u: goto label_1ebeb4;
        case 0x1ebeb8u: goto label_1ebeb8;
        case 0x1ebebcu: goto label_1ebebc;
        case 0x1ebec0u: goto label_1ebec0;
        case 0x1ebec4u: goto label_1ebec4;
        case 0x1ebec8u: goto label_1ebec8;
        case 0x1ebeccu: goto label_1ebecc;
        case 0x1ebed0u: goto label_1ebed0;
        case 0x1ebed4u: goto label_1ebed4;
        case 0x1ebed8u: goto label_1ebed8;
        case 0x1ebedcu: goto label_1ebedc;
        case 0x1ebee0u: goto label_1ebee0;
        case 0x1ebee4u: goto label_1ebee4;
        case 0x1ebee8u: goto label_1ebee8;
        case 0x1ebeecu: goto label_1ebeec;
        case 0x1ebef0u: goto label_1ebef0;
        case 0x1ebef4u: goto label_1ebef4;
        case 0x1ebef8u: goto label_1ebef8;
        case 0x1ebefcu: goto label_1ebefc;
        case 0x1ebf00u: goto label_1ebf00;
        case 0x1ebf04u: goto label_1ebf04;
        case 0x1ebf08u: goto label_1ebf08;
        case 0x1ebf0cu: goto label_1ebf0c;
        case 0x1ebf10u: goto label_1ebf10;
        case 0x1ebf14u: goto label_1ebf14;
        case 0x1ebf18u: goto label_1ebf18;
        case 0x1ebf1cu: goto label_1ebf1c;
        case 0x1ebf20u: goto label_1ebf20;
        case 0x1ebf24u: goto label_1ebf24;
        case 0x1ebf28u: goto label_1ebf28;
        case 0x1ebf2cu: goto label_1ebf2c;
        case 0x1ebf30u: goto label_1ebf30;
        case 0x1ebf34u: goto label_1ebf34;
        case 0x1ebf38u: goto label_1ebf38;
        case 0x1ebf3cu: goto label_1ebf3c;
        case 0x1ebf40u: goto label_1ebf40;
        case 0x1ebf44u: goto label_1ebf44;
        case 0x1ebf48u: goto label_1ebf48;
        case 0x1ebf4cu: goto label_1ebf4c;
        case 0x1ebf50u: goto label_1ebf50;
        case 0x1ebf54u: goto label_1ebf54;
        case 0x1ebf58u: goto label_1ebf58;
        case 0x1ebf5cu: goto label_1ebf5c;
        case 0x1ebf60u: goto label_1ebf60;
        case 0x1ebf64u: goto label_1ebf64;
        case 0x1ebf68u: goto label_1ebf68;
        case 0x1ebf6cu: goto label_1ebf6c;
        default: break;
    }

    ctx->pc = 0x1ebd48u;

label_1ebd48:
    // 0x1ebd48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ebd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ebd4c:
    // 0x1ebd4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ebd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ebd50:
    // 0x1ebd50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ebd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ebd54:
    // 0x1ebd54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ebd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ebd58:
    // 0x1ebd58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ebd5c:
    // 0x1ebd5c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ebd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ebd60:
    // 0x1ebd60: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1ebd64:
    if (ctx->pc == 0x1EBD64u) {
        ctx->pc = 0x1EBD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD60u;
        // 0x1ebd64: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD68u;
        goto label_1ebd68;
    }
    ctx->pc = 0x1EBD60u;
    {
        const bool branch_taken_0x1ebd60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd60) {
            ctx->pc = 0x1EBD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBD60u;
            // 0x1ebd64: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBD78u;
            goto label_1ebd78;
        }
    }
    ctx->pc = 0x1EBD68u;
label_1ebd68:
    // 0x1ebd68: 0xc078e90  jal         func_1E3A40
label_1ebd6c:
    if (ctx->pc == 0x1EBD6Cu) {
        ctx->pc = 0x1EBD70u;
        goto label_1ebd70;
    }
    ctx->pc = 0x1EBD68u;
    SET_GPR_U32(ctx, 31, 0x1EBD70u);
    ctx->pc = 0x1E3A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3A40u, 0x1EBD68u, 0x1EBD70u)) {
        return;
    }
    ctx->pc = 0x1EBD70u;
label_1ebd70:
    // 0x1ebd70: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1ebd70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1ebd74:
    // 0x1ebd74: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ebd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ebd78:
    // 0x1ebd78: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1ebd7c:
    if (ctx->pc == 0x1EBD7Cu) {
        ctx->pc = 0x1EBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD78u;
        // 0x1ebd7c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD80u;
        goto label_1ebd80;
    }
    ctx->pc = 0x1EBD78u;
    {
        const bool branch_taken_0x1ebd78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd78) {
            ctx->pc = 0x1EBD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBD78u;
            // 0x1ebd7c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBD90u;
            goto label_1ebd90;
        }
    }
    ctx->pc = 0x1EBD80u;
label_1ebd80:
    // 0x1ebd80: 0xc078e90  jal         func_1E3A40
label_1ebd84:
    if (ctx->pc == 0x1EBD84u) {
        ctx->pc = 0x1EBD88u;
        goto label_1ebd88;
    }
    ctx->pc = 0x1EBD80u;
    SET_GPR_U32(ctx, 31, 0x1EBD88u);
    ctx->pc = 0x1E3A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3A40u, 0x1EBD80u, 0x1EBD88u)) {
        return;
    }
    ctx->pc = 0x1EBD88u;
label_1ebd88:
    // 0x1ebd88: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1ebd88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1ebd8c:
    // 0x1ebd8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ebd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebd90:
    // 0x1ebd90: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1ebd90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1ebd94:
    // 0x1ebd94: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_1ebd98:
    if (ctx->pc == 0x1EBD98u) {
        ctx->pc = 0x1EBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD94u;
        // 0x1ebd98: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD9Cu;
        goto label_1ebd9c;
    }
    ctx->pc = 0x1EBD94u;
    {
        const bool branch_taken_0x1ebd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD94u;
        // 0x1ebd98: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd94) {
            ctx->pc = 0x1EBF44u;
            goto label_1ebf44;
        }
    }
    ctx->pc = 0x1EBD9Cu;
label_1ebd9c:
    // 0x1ebd9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ebd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ebda0:
    // 0x1ebda0: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1ebda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1ebda4:
    // 0x1ebda4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ebda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ebda8:
    // 0x1ebda8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ebda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ebdac:
    // 0x1ebdac: 0x800008  jr          $a0
label_1ebdb0:
    if (ctx->pc == 0x1EBDB0u) {
        ctx->pc = 0x1EBDB4u;
        goto label_1ebdb4;
    }
    ctx->pc = 0x1EBDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EBDB4u: goto label_1ebdb4;
            case 0x1EBE4Cu: goto label_1ebe4c;
            case 0x1EBEE4u: goto label_1ebee4;
            case 0x1EBF14u: goto label_1ebf14;
            case 0x1EBF30u: goto label_1ebf30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBDACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EBDB4u;
label_1ebdb4:
    // 0x1ebdb4: 0xc0932d4  jal         func_24CB50
label_1ebdb8:
    if (ctx->pc == 0x1EBDB8u) {
        ctx->pc = 0x1EBDBCu;
        goto label_1ebdbc;
    }
    ctx->pc = 0x1EBDB4u;
    SET_GPR_U32(ctx, 31, 0x1EBDBCu);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBDB4u, 0x1EBDBCu)) {
        return;
    }
    ctx->pc = 0x1EBDBCu;
label_1ebdbc:
    // 0x1ebdbc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebdc0:
    // 0x1ebdc0: 0x60f809  jalr        $v1
label_1ebdc4:
    if (ctx->pc == 0x1EBDC4u) {
        ctx->pc = 0x1EBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDC0u;
        // 0x1ebdc4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBDC8u;
        goto label_1ebdc8;
    }
    ctx->pc = 0x1EBDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBDC8u);
        ctx->pc = 0x1EBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDC0u;
        // 0x1ebdc4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBDC0u, 0x1EBDC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBDC8u;
label_1ebdc8:
    // 0x1ebdc8: 0xc0932d4  jal         func_24CB50
label_1ebdcc:
    if (ctx->pc == 0x1EBDCCu) {
        ctx->pc = 0x1EBDD0u;
        goto label_1ebdd0;
    }
    ctx->pc = 0x1EBDC8u;
    SET_GPR_U32(ctx, 31, 0x1EBDD0u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBDC8u, 0x1EBDD0u)) {
        return;
    }
    ctx->pc = 0x1EBDD0u;
label_1ebdd0:
    // 0x1ebdd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebdd4:
    // 0x1ebdd4: 0x60f809  jalr        $v1
label_1ebdd8:
    if (ctx->pc == 0x1EBDD8u) {
        ctx->pc = 0x1EBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDD4u;
        // 0x1ebdd8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBDDCu;
        goto label_1ebddc;
    }
    ctx->pc = 0x1EBDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBDDCu);
        ctx->pc = 0x1EBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDD4u;
        // 0x1ebdd8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBDD4u, 0x1EBDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBDDCu;
label_1ebddc:
    // 0x1ebddc: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x1ebddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1ebde0:
    // 0x1ebde0: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
label_1ebde4:
    if (ctx->pc == 0x1EBDE4u) {
        ctx->pc = 0x1EBDE8u;
        goto label_1ebde8;
    }
    ctx->pc = 0x1EBDE0u;
    {
        const bool branch_taken_0x1ebde0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebde0) {
            ctx->pc = 0x1EBEF8u;
            goto label_1ebef8;
        }
    }
    ctx->pc = 0x1EBDE8u;
label_1ebde8:
    // 0x1ebde8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ebde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ebdec:
    // 0x1ebdec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1ebdf0:
    if (ctx->pc == 0x1EBDF0u) {
        ctx->pc = 0x1EBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDECu;
        // 0x1ebdf0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBDF4u;
        goto label_1ebdf4;
    }
    ctx->pc = 0x1EBDECu;
    {
        const bool branch_taken_0x1ebdec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebdec) {
            ctx->pc = 0x1EBDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBDECu;
            // 0x1ebdf0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBE00u;
            goto label_1ebe00;
        }
    }
    ctx->pc = 0x1EBDF4u;
label_1ebdf4:
    // 0x1ebdf4: 0xc07b14e  jal         func_1EC538
label_1ebdf8:
    if (ctx->pc == 0x1EBDF8u) {
        ctx->pc = 0x1EBDFCu;
        goto label_1ebdfc;
    }
    ctx->pc = 0x1EBDF4u;
    SET_GPR_U32(ctx, 31, 0x1EBDFCu);
    ctx->pc = 0x1EC538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC538u, 0x1EBDF4u, 0x1EBDFCu)) {
        return;
    }
    ctx->pc = 0x1EBDFCu;
label_1ebdfc:
    // 0x1ebdfc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ebdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ebe00:
    // 0x1ebe00: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1ebe04:
    if (ctx->pc == 0x1EBE04u) {
        ctx->pc = 0x1EBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE00u;
        // 0x1ebe04: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE08u;
        goto label_1ebe08;
    }
    ctx->pc = 0x1EBE00u;
    {
        const bool branch_taken_0x1ebe00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe00) {
            ctx->pc = 0x1EBE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBE00u;
            // 0x1ebe04: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBE14u;
            goto label_1ebe14;
        }
    }
    ctx->pc = 0x1EBE08u;
label_1ebe08:
    // 0x1ebe08: 0xc07b14e  jal         func_1EC538
label_1ebe0c:
    if (ctx->pc == 0x1EBE0Cu) {
        ctx->pc = 0x1EBE10u;
        goto label_1ebe10;
    }
    ctx->pc = 0x1EBE08u;
    SET_GPR_U32(ctx, 31, 0x1EBE10u);
    ctx->pc = 0x1EC538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC538u, 0x1EBE08u, 0x1EBE10u)) {
        return;
    }
    ctx->pc = 0x1EBE10u;
label_1ebe10:
    // 0x1ebe10: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1ebe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ebe14:
    // 0x1ebe14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ebe18:
    if (ctx->pc == 0x1EBE18u) {
        ctx->pc = 0x1EBE1Cu;
        goto label_1ebe1c;
    }
    ctx->pc = 0x1EBE14u;
    {
        const bool branch_taken_0x1ebe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe14) {
            ctx->pc = 0x1EBE30u;
            goto label_1ebe30;
        }
    }
    ctx->pc = 0x1EBE1Cu;
label_1ebe1c:
    // 0x1ebe1c: 0xc0932d4  jal         func_24CB50
label_1ebe20:
    if (ctx->pc == 0x1EBE20u) {
        ctx->pc = 0x1EBE24u;
        goto label_1ebe24;
    }
    ctx->pc = 0x1EBE1Cu;
    SET_GPR_U32(ctx, 31, 0x1EBE24u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBE1Cu, 0x1EBE24u)) {
        return;
    }
    ctx->pc = 0x1EBE24u;
label_1ebe24:
    // 0x1ebe24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebe28:
    // 0x1ebe28: 0x60f809  jalr        $v1
label_1ebe2c:
    if (ctx->pc == 0x1EBE2Cu) {
        ctx->pc = 0x1EBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE28u;
        // 0x1ebe2c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE30u;
        goto label_1ebe30;
    }
    ctx->pc = 0x1EBE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBE30u);
        ctx->pc = 0x1EBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE28u;
        // 0x1ebe2c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE28u, 0x1EBE30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBE30u;
label_1ebe30:
    // 0x1ebe30: 0xc0932d4  jal         func_24CB50
label_1ebe34:
    if (ctx->pc == 0x1EBE34u) {
        ctx->pc = 0x1EBE38u;
        goto label_1ebe38;
    }
    ctx->pc = 0x1EBE30u;
    SET_GPR_U32(ctx, 31, 0x1EBE38u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBE30u, 0x1EBE38u)) {
        return;
    }
    ctx->pc = 0x1EBE38u;
label_1ebe38:
    // 0x1ebe38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebe3c:
    // 0x1ebe3c: 0x60f809  jalr        $v1
label_1ebe40:
    if (ctx->pc == 0x1EBE40u) {
        ctx->pc = 0x1EBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE3Cu;
        // 0x1ebe40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE44u;
        goto label_1ebe44;
    }
    ctx->pc = 0x1EBE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBE44u);
        ctx->pc = 0x1EBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE3Cu;
        // 0x1ebe40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE3Cu, 0x1EBE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBE44u;
label_1ebe44:
    // 0x1ebe44: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1ebe48:
    if (ctx->pc == 0x1EBE48u) {
        ctx->pc = 0x1EBE4Cu;
        goto label_1ebe4c;
    }
    ctx->pc = 0x1EBE44u;
    {
        const bool branch_taken_0x1ebe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe44) {
            ctx->pc = 0x1EBEF8u;
            goto label_1ebef8;
        }
    }
    ctx->pc = 0x1EBE4Cu;
label_1ebe4c:
    // 0x1ebe4c: 0xc0932d4  jal         func_24CB50
label_1ebe50:
    if (ctx->pc == 0x1EBE50u) {
        ctx->pc = 0x1EBE54u;
        goto label_1ebe54;
    }
    ctx->pc = 0x1EBE4Cu;
    SET_GPR_U32(ctx, 31, 0x1EBE54u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBE4Cu, 0x1EBE54u)) {
        return;
    }
    ctx->pc = 0x1EBE54u;
label_1ebe54:
    // 0x1ebe54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebe58:
    // 0x1ebe58: 0x60f809  jalr        $v1
label_1ebe5c:
    if (ctx->pc == 0x1EBE5Cu) {
        ctx->pc = 0x1EBE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE58u;
        // 0x1ebe5c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE60u;
        goto label_1ebe60;
    }
    ctx->pc = 0x1EBE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBE60u);
        ctx->pc = 0x1EBE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE58u;
        // 0x1ebe5c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE58u, 0x1EBE60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBE60u;
label_1ebe60:
    // 0x1ebe60: 0xc0932d4  jal         func_24CB50
label_1ebe64:
    if (ctx->pc == 0x1EBE64u) {
        ctx->pc = 0x1EBE68u;
        goto label_1ebe68;
    }
    ctx->pc = 0x1EBE60u;
    SET_GPR_U32(ctx, 31, 0x1EBE68u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBE60u, 0x1EBE68u)) {
        return;
    }
    ctx->pc = 0x1EBE68u;
label_1ebe68:
    // 0x1ebe68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebe6c:
    // 0x1ebe6c: 0x60f809  jalr        $v1
label_1ebe70:
    if (ctx->pc == 0x1EBE70u) {
        ctx->pc = 0x1EBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE6Cu;
        // 0x1ebe70: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE74u;
        goto label_1ebe74;
    }
    ctx->pc = 0x1EBE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBE74u);
        ctx->pc = 0x1EBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE6Cu;
        // 0x1ebe70: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE6Cu, 0x1EBE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBE74u;
label_1ebe74:
    // 0x1ebe74: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x1ebe74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1ebe78:
    // 0x1ebe78: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_1ebe7c:
    if (ctx->pc == 0x1EBE7Cu) {
        ctx->pc = 0x1EBE80u;
        goto label_1ebe80;
    }
    ctx->pc = 0x1EBE78u;
    {
        const bool branch_taken_0x1ebe78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe78) {
            ctx->pc = 0x1EBF44u;
            goto label_1ebf44;
        }
    }
    ctx->pc = 0x1EBE80u;
label_1ebe80:
    // 0x1ebe80: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ebe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ebe84:
    // 0x1ebe84: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1ebe88:
    if (ctx->pc == 0x1EBE88u) {
        ctx->pc = 0x1EBE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE84u;
        // 0x1ebe88: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE8Cu;
        goto label_1ebe8c;
    }
    ctx->pc = 0x1EBE84u;
    {
        const bool branch_taken_0x1ebe84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe84) {
            ctx->pc = 0x1EBE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBE84u;
            // 0x1ebe88: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBE98u;
            goto label_1ebe98;
        }
    }
    ctx->pc = 0x1EBE8Cu;
label_1ebe8c:
    // 0x1ebe8c: 0xc07b14e  jal         func_1EC538
label_1ebe90:
    if (ctx->pc == 0x1EBE90u) {
        ctx->pc = 0x1EBE94u;
        goto label_1ebe94;
    }
    ctx->pc = 0x1EBE8Cu;
    SET_GPR_U32(ctx, 31, 0x1EBE94u);
    ctx->pc = 0x1EC538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC538u, 0x1EBE8Cu, 0x1EBE94u)) {
        return;
    }
    ctx->pc = 0x1EBE94u;
label_1ebe94:
    // 0x1ebe94: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ebe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ebe98:
    // 0x1ebe98: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1ebe9c:
    if (ctx->pc == 0x1EBE9Cu) {
        ctx->pc = 0x1EBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE98u;
        // 0x1ebe9c: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBEA0u;
        goto label_1ebea0;
    }
    ctx->pc = 0x1EBE98u;
    {
        const bool branch_taken_0x1ebe98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe98) {
            ctx->pc = 0x1EBE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBE98u;
            // 0x1ebe9c: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBEACu;
            goto label_1ebeac;
        }
    }
    ctx->pc = 0x1EBEA0u;
label_1ebea0:
    // 0x1ebea0: 0xc07b14e  jal         func_1EC538
label_1ebea4:
    if (ctx->pc == 0x1EBEA4u) {
        ctx->pc = 0x1EBEA8u;
        goto label_1ebea8;
    }
    ctx->pc = 0x1EBEA0u;
    SET_GPR_U32(ctx, 31, 0x1EBEA8u);
    ctx->pc = 0x1EC538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC538u, 0x1EBEA0u, 0x1EBEA8u)) {
        return;
    }
    ctx->pc = 0x1EBEA8u;
label_1ebea8:
    // 0x1ebea8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1ebea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ebeac:
    // 0x1ebeac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ebeb0:
    if (ctx->pc == 0x1EBEB0u) {
        ctx->pc = 0x1EBEB4u;
        goto label_1ebeb4;
    }
    ctx->pc = 0x1EBEACu;
    {
        const bool branch_taken_0x1ebeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebeac) {
            ctx->pc = 0x1EBEC8u;
            goto label_1ebec8;
        }
    }
    ctx->pc = 0x1EBEB4u;
label_1ebeb4:
    // 0x1ebeb4: 0xc0932d4  jal         func_24CB50
label_1ebeb8:
    if (ctx->pc == 0x1EBEB8u) {
        ctx->pc = 0x1EBEBCu;
        goto label_1ebebc;
    }
    ctx->pc = 0x1EBEB4u;
    SET_GPR_U32(ctx, 31, 0x1EBEBCu);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBEB4u, 0x1EBEBCu)) {
        return;
    }
    ctx->pc = 0x1EBEBCu;
label_1ebebc:
    // 0x1ebebc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebec0:
    // 0x1ebec0: 0x60f809  jalr        $v1
label_1ebec4:
    if (ctx->pc == 0x1EBEC4u) {
        ctx->pc = 0x1EBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEC0u;
        // 0x1ebec4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBEC8u;
        goto label_1ebec8;
    }
    ctx->pc = 0x1EBEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBEC8u);
        ctx->pc = 0x1EBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEC0u;
        // 0x1ebec4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBEC0u, 0x1EBEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBEC8u;
label_1ebec8:
    // 0x1ebec8: 0xc0932d4  jal         func_24CB50
label_1ebecc:
    if (ctx->pc == 0x1EBECCu) {
        ctx->pc = 0x1EBED0u;
        goto label_1ebed0;
    }
    ctx->pc = 0x1EBEC8u;
    SET_GPR_U32(ctx, 31, 0x1EBED0u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBEC8u, 0x1EBED0u)) {
        return;
    }
    ctx->pc = 0x1EBED0u;
label_1ebed0:
    // 0x1ebed0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebed4:
    // 0x1ebed4: 0x60f809  jalr        $v1
label_1ebed8:
    if (ctx->pc == 0x1EBED8u) {
        ctx->pc = 0x1EBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBED4u;
        // 0x1ebed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBEDCu;
        goto label_1ebedc;
    }
    ctx->pc = 0x1EBED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBEDCu);
        ctx->pc = 0x1EBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBED4u;
        // 0x1ebed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBED4u, 0x1EBEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBEDCu;
label_1ebedc:
    // 0x1ebedc: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ebee0:
    if (ctx->pc == 0x1EBEE0u) {
        ctx->pc = 0x1EBEE4u;
        goto label_1ebee4;
    }
    ctx->pc = 0x1EBEDCu;
    {
        const bool branch_taken_0x1ebedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebedc) {
            ctx->pc = 0x1EBF44u;
            goto label_1ebf44;
        }
    }
    ctx->pc = 0x1EBEE4u;
label_1ebee4:
    // 0x1ebee4: 0xc0932d4  jal         func_24CB50
label_1ebee8:
    if (ctx->pc == 0x1EBEE8u) {
        ctx->pc = 0x1EBEECu;
        goto label_1ebeec;
    }
    ctx->pc = 0x1EBEE4u;
    SET_GPR_U32(ctx, 31, 0x1EBEECu);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBEE4u, 0x1EBEECu)) {
        return;
    }
    ctx->pc = 0x1EBEECu;
label_1ebeec:
    // 0x1ebeec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebef0:
    // 0x1ebef0: 0x60f809  jalr        $v1
label_1ebef4:
    if (ctx->pc == 0x1EBEF4u) {
        ctx->pc = 0x1EBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEF0u;
        // 0x1ebef4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBEF8u;
        goto label_1ebef8;
    }
    ctx->pc = 0x1EBEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBEF8u);
        ctx->pc = 0x1EBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEF0u;
        // 0x1ebef4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBEF0u, 0x1EBEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBEF8u;
label_1ebef8:
    // 0x1ebef8: 0xc0932d4  jal         func_24CB50
label_1ebefc:
    if (ctx->pc == 0x1EBEFCu) {
        ctx->pc = 0x1EBF00u;
        goto label_1ebf00;
    }
    ctx->pc = 0x1EBEF8u;
    SET_GPR_U32(ctx, 31, 0x1EBF00u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBEF8u, 0x1EBF00u)) {
        return;
    }
    ctx->pc = 0x1EBF00u;
label_1ebf00:
    // 0x1ebf00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebf04:
    // 0x1ebf04: 0x60f809  jalr        $v1
label_1ebf08:
    if (ctx->pc == 0x1EBF08u) {
        ctx->pc = 0x1EBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF04u;
        // 0x1ebf08: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF0Cu;
        goto label_1ebf0c;
    }
    ctx->pc = 0x1EBF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBF0Cu);
        ctx->pc = 0x1EBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF04u;
        // 0x1ebf08: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF04u, 0x1EBF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBF0Cu;
label_1ebf0c:
    // 0x1ebf0c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ebf10:
    if (ctx->pc == 0x1EBF10u) {
        ctx->pc = 0x1EBF14u;
        goto label_1ebf14;
    }
    ctx->pc = 0x1EBF0Cu;
    {
        const bool branch_taken_0x1ebf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf0c) {
            ctx->pc = 0x1EBF44u;
            goto label_1ebf44;
        }
    }
    ctx->pc = 0x1EBF14u;
label_1ebf14:
    // 0x1ebf14: 0xc0932d4  jal         func_24CB50
label_1ebf18:
    if (ctx->pc == 0x1EBF18u) {
        ctx->pc = 0x1EBF1Cu;
        goto label_1ebf1c;
    }
    ctx->pc = 0x1EBF14u;
    SET_GPR_U32(ctx, 31, 0x1EBF1Cu);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBF14u, 0x1EBF1Cu)) {
        return;
    }
    ctx->pc = 0x1EBF1Cu;
label_1ebf1c:
    // 0x1ebf1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebf20:
    // 0x1ebf20: 0x60f809  jalr        $v1
label_1ebf24:
    if (ctx->pc == 0x1EBF24u) {
        ctx->pc = 0x1EBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF20u;
        // 0x1ebf24: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF28u;
        goto label_1ebf28;
    }
    ctx->pc = 0x1EBF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBF28u);
        ctx->pc = 0x1EBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF20u;
        // 0x1ebf24: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF20u, 0x1EBF28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBF28u;
label_1ebf28:
    // 0x1ebf28: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ebf2c:
    if (ctx->pc == 0x1EBF2Cu) {
        ctx->pc = 0x1EBF30u;
        goto label_1ebf30;
    }
    ctx->pc = 0x1EBF28u;
    {
        const bool branch_taken_0x1ebf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf28) {
            ctx->pc = 0x1EBF44u;
            goto label_1ebf44;
        }
    }
    ctx->pc = 0x1EBF30u;
label_1ebf30:
    // 0x1ebf30: 0xc0932d4  jal         func_24CB50
label_1ebf34:
    if (ctx->pc == 0x1EBF34u) {
        ctx->pc = 0x1EBF38u;
        goto label_1ebf38;
    }
    ctx->pc = 0x1EBF30u;
    SET_GPR_U32(ctx, 31, 0x1EBF38u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBF30u, 0x1EBF38u)) {
        return;
    }
    ctx->pc = 0x1EBF38u;
label_1ebf38:
    // 0x1ebf38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebf3c:
    // 0x1ebf3c: 0x60f809  jalr        $v1
label_1ebf40:
    if (ctx->pc == 0x1EBF40u) {
        ctx->pc = 0x1EBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF3Cu;
        // 0x1ebf40: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF44u;
        goto label_1ebf44;
    }
    ctx->pc = 0x1EBF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBF44u);
        ctx->pc = 0x1EBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF3Cu;
        // 0x1ebf40: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF3Cu, 0x1EBF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBF44u;
label_1ebf44:
    // 0x1ebf44: 0xc0932d4  jal         func_24CB50
label_1ebf48:
    if (ctx->pc == 0x1EBF48u) {
        ctx->pc = 0x1EBF4Cu;
        goto label_1ebf4c;
    }
    ctx->pc = 0x1EBF44u;
    SET_GPR_U32(ctx, 31, 0x1EBF4Cu);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBF44u, 0x1EBF4Cu)) {
        return;
    }
    ctx->pc = 0x1EBF4Cu;
label_1ebf4c:
    // 0x1ebf4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ebf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ebf50:
    // 0x1ebf50: 0x60f809  jalr        $v1
label_1ebf54:
    if (ctx->pc == 0x1EBF54u) {
        ctx->pc = 0x1EBF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF50u;
        // 0x1ebf54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF58u;
        goto label_1ebf58;
    }
    ctx->pc = 0x1EBF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBF58u);
        ctx->pc = 0x1EBF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF50u;
        // 0x1ebf54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF50u, 0x1EBF58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBF58u;
label_1ebf58:
    // 0x1ebf58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ebf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebf5c:
    // 0x1ebf5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ebf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebf60:
    // 0x1ebf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebf64:
    // 0x1ebf64: 0x3e00008  jr          $ra
label_1ebf68:
    if (ctx->pc == 0x1EBF68u) {
        ctx->pc = 0x1EBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF64u;
        // 0x1ebf68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF6Cu;
        goto label_1ebf6c;
    }
    ctx->pc = 0x1EBF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF64u;
        // 0x1ebf68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBF6Cu;
label_1ebf6c:
    // 0x1ebf6c: 0x0  nop
    ctx->pc = 0x1ebf6cu;
    // NOP
    ctx->pc = 0x1ebf70u;
}
