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

// Function: sub_0025D038
// Address: 0x25d038 - 0x25d100
void sub_0025D038_0x25d038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D038_0x25d038");
#endif

    switch (ctx->pc) {
        case 0x25d038u: goto label_25d038;
        case 0x25d03cu: goto label_25d03c;
        case 0x25d040u: goto label_25d040;
        case 0x25d044u: goto label_25d044;
        case 0x25d048u: goto label_25d048;
        case 0x25d04cu: goto label_25d04c;
        case 0x25d050u: goto label_25d050;
        case 0x25d054u: goto label_25d054;
        case 0x25d058u: goto label_25d058;
        case 0x25d05cu: goto label_25d05c;
        case 0x25d060u: goto label_25d060;
        case 0x25d064u: goto label_25d064;
        case 0x25d068u: goto label_25d068;
        case 0x25d06cu: goto label_25d06c;
        case 0x25d070u: goto label_25d070;
        case 0x25d074u: goto label_25d074;
        case 0x25d078u: goto label_25d078;
        case 0x25d07cu: goto label_25d07c;
        case 0x25d080u: goto label_25d080;
        case 0x25d084u: goto label_25d084;
        case 0x25d088u: goto label_25d088;
        case 0x25d08cu: goto label_25d08c;
        case 0x25d090u: goto label_25d090;
        case 0x25d094u: goto label_25d094;
        case 0x25d098u: goto label_25d098;
        case 0x25d09cu: goto label_25d09c;
        case 0x25d0a0u: goto label_25d0a0;
        case 0x25d0a4u: goto label_25d0a4;
        case 0x25d0a8u: goto label_25d0a8;
        case 0x25d0acu: goto label_25d0ac;
        case 0x25d0b0u: goto label_25d0b0;
        case 0x25d0b4u: goto label_25d0b4;
        case 0x25d0b8u: goto label_25d0b8;
        case 0x25d0bcu: goto label_25d0bc;
        case 0x25d0c0u: goto label_25d0c0;
        case 0x25d0c4u: goto label_25d0c4;
        case 0x25d0c8u: goto label_25d0c8;
        case 0x25d0ccu: goto label_25d0cc;
        case 0x25d0d0u: goto label_25d0d0;
        case 0x25d0d4u: goto label_25d0d4;
        case 0x25d0d8u: goto label_25d0d8;
        case 0x25d0dcu: goto label_25d0dc;
        case 0x25d0e0u: goto label_25d0e0;
        case 0x25d0e4u: goto label_25d0e4;
        case 0x25d0e8u: goto label_25d0e8;
        case 0x25d0ecu: goto label_25d0ec;
        case 0x25d0f0u: goto label_25d0f0;
        case 0x25d0f4u: goto label_25d0f4;
        case 0x25d0f8u: goto label_25d0f8;
        case 0x25d0fcu: goto label_25d0fc;
        default: break;
    }

    ctx->pc = 0x25d038u;

label_25d038:
    // 0x25d038: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25d038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_25d03c:
    // 0x25d03c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25d03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_25d040:
    // 0x25d040: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25d040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_25d044:
    // 0x25d044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25d044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d048:
    // 0x25d048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25d048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25d04c:
    // 0x25d04c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25d050:
    // 0x25d050: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25d050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25d054:
    // 0x25d054: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25d058:
    // 0x25d058: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25d058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25d05c:
    // 0x25d05c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_25d060:
    // 0x25d060: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_25d064:
    if (ctx->pc == 0x25D064u) {
        ctx->pc = 0x25D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D060u;
        // 0x25d064: 0x28880  sll         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D068u;
        goto label_25d068;
    }
    ctx->pc = 0x25D060u;
    {
        const bool branch_taken_0x25d060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D060u;
        // 0x25d064: 0x28880  sll         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d060) {
            ctx->pc = 0x25D088u;
            goto label_25d088;
        }
    }
    ctx->pc = 0x25D068u;
label_25d068:
    // 0x25d068: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25d068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25d06c:
    // 0x25d06c: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x25d06cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_25d070:
    // 0x25d070: 0x8c6210d8  lw          $v0, 0x10D8($v1)
    ctx->pc = 0x25d070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
label_25d074:
    // 0x25d074: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25d074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d078:
    // 0x25d078: 0x40f809  jalr        $v0
label_25d07c:
    if (ctx->pc == 0x25D07Cu) {
        ctx->pc = 0x25D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D078u;
        // 0x25d07c: 0x34c60507  ori         $a2, $a2, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D080u;
        goto label_25d080;
    }
    ctx->pc = 0x25D078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D080u);
        ctx->pc = 0x25D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D078u;
        // 0x25d07c: 0x34c60507  ori         $a2, $a2, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D078u, 0x25D080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D080u;
label_25d080:
    // 0x25d080: 0x10000008  b           . + 4 + (0x8 << 2)
label_25d084:
    if (ctx->pc == 0x25D084u) {
        ctx->pc = 0x25D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D080u;
        // 0x25d084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D088u;
        goto label_25d088;
    }
    ctx->pc = 0x25D080u;
    {
        const bool branch_taken_0x25d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D080u;
        // 0x25d084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d080) {
            ctx->pc = 0x25D0A4u;
            goto label_25d0a4;
        }
    }
    ctx->pc = 0x25D088u;
label_25d088:
    // 0x25d088: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25d088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25d08c:
    // 0x25d08c: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x25d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_25d090:
    // 0x25d090: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x25d090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_25d094:
    // 0x25d094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d098:
    // 0x25d098: 0x40f809  jalr        $v0
label_25d09c:
    if (ctx->pc == 0x25D09Cu) {
        ctx->pc = 0x25D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D098u;
        // 0x25d09c: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0A0u;
        goto label_25d0a0;
    }
    ctx->pc = 0x25D098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D0A0u);
        ctx->pc = 0x25D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D098u;
        // 0x25d09c: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D098u, 0x25D0A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D0A0u;
label_25d0a0:
    // 0x25d0a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25d0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d0a4:
    // 0x25d0a4: 0x5480000c  bnel        $a0, $zero, . + 4 + (0xC << 2)
label_25d0a8:
    if (ctx->pc == 0x25D0A8u) {
        ctx->pc = 0x25D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0A4u;
        // 0x25d0a8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0ACu;
        goto label_25d0ac;
    }
    ctx->pc = 0x25D0A4u;
    {
        const bool branch_taken_0x25d0a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d0a4) {
            ctx->pc = 0x25D0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D0A4u;
            // 0x25d0a8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D0D8u;
            goto label_25d0d8;
        }
    }
    ctx->pc = 0x25D0ACu;
label_25d0ac:
    // 0x25d0ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25d0b0:
    // 0x25d0b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25d0b4:
    // 0x25d0b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_25d0b8:
    // 0x25d0b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25d0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d0bc:
    // 0x25d0bc: 0xc092848  jal         func_24A120
label_25d0c0:
    if (ctx->pc == 0x25D0C0u) {
        ctx->pc = 0x25D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0BCu;
        // 0x25d0c0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0C4u;
        goto label_25d0c4;
    }
    ctx->pc = 0x25D0BCu;
    SET_GPR_U32(ctx, 31, 0x25D0C4u);
    ctx->pc = 0x25D0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0BCu;
    // 0x25d0c0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25D0BCu, 0x25D0C4u)) {
        return;
    }
    ctx->pc = 0x25D0C4u;
label_25d0c4:
    // 0x25d0c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25d0c8:
    // 0x25d0c8: 0xc09281a  jal         func_24A068
label_25d0cc:
    if (ctx->pc == 0x25D0CCu) {
        ctx->pc = 0x25D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0C8u;
        // 0x25d0cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0D0u;
        goto label_25d0d0;
    }
    ctx->pc = 0x25D0C8u;
    SET_GPR_U32(ctx, 31, 0x25D0D0u);
    ctx->pc = 0x25D0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0C8u;
    // 0x25d0cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25D0C8u, 0x25D0D0u)) {
        return;
    }
    ctx->pc = 0x25D0D0u;
label_25d0d0:
    // 0x25d0d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_25d0d4:
    if (ctx->pc == 0x25D0D4u) {
        ctx->pc = 0x25D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0D0u;
        // 0x25d0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0D8u;
        goto label_25d0d8;
    }
    ctx->pc = 0x25D0D0u;
    {
        const bool branch_taken_0x25d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0D0u;
        // 0x25d0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d0d0) {
            ctx->pc = 0x25D0E8u;
            goto label_25d0e8;
        }
    }
    ctx->pc = 0x25D0D8u;
label_25d0d8:
    // 0x25d0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d0dc:
    // 0x25d0dc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x25d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_25d0e0:
    // 0x25d0e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x25d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_25d0e4:
    // 0x25d0e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x25d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_25d0e8:
    // 0x25d0e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25d0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25d0ec:
    // 0x25d0ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25d0ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25d0f0:
    // 0x25d0f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25d0f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25d0f4:
    // 0x25d0f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25d0f8:
    // 0x25d0f8: 0x3e00008  jr          $ra
label_25d0fc:
    if (ctx->pc == 0x25D0FCu) {
        ctx->pc = 0x25D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0F8u;
        // 0x25d0fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D100u;
        goto label_fallthrough_0x25d0f8;
    }
    ctx->pc = 0x25D0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0F8u;
        // 0x25d0fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25d0f8:
    ctx->pc = 0x25D100u;
}
