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

// Function: sub_001B5D10
// Address: 0x1b5d10 - 0x1b5de0
void sub_001B5D10_0x1b5d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5D10_0x1b5d10");
#endif

    switch (ctx->pc) {
        case 0x1b5d10u: goto label_1b5d10;
        case 0x1b5d14u: goto label_1b5d14;
        case 0x1b5d18u: goto label_1b5d18;
        case 0x1b5d1cu: goto label_1b5d1c;
        case 0x1b5d20u: goto label_1b5d20;
        case 0x1b5d24u: goto label_1b5d24;
        case 0x1b5d28u: goto label_1b5d28;
        case 0x1b5d2cu: goto label_1b5d2c;
        case 0x1b5d30u: goto label_1b5d30;
        case 0x1b5d34u: goto label_1b5d34;
        case 0x1b5d38u: goto label_1b5d38;
        case 0x1b5d3cu: goto label_1b5d3c;
        case 0x1b5d40u: goto label_1b5d40;
        case 0x1b5d44u: goto label_1b5d44;
        case 0x1b5d48u: goto label_1b5d48;
        case 0x1b5d4cu: goto label_1b5d4c;
        case 0x1b5d50u: goto label_1b5d50;
        case 0x1b5d54u: goto label_1b5d54;
        case 0x1b5d58u: goto label_1b5d58;
        case 0x1b5d5cu: goto label_1b5d5c;
        case 0x1b5d60u: goto label_1b5d60;
        case 0x1b5d64u: goto label_1b5d64;
        case 0x1b5d68u: goto label_1b5d68;
        case 0x1b5d6cu: goto label_1b5d6c;
        case 0x1b5d70u: goto label_1b5d70;
        case 0x1b5d74u: goto label_1b5d74;
        case 0x1b5d78u: goto label_1b5d78;
        case 0x1b5d7cu: goto label_1b5d7c;
        case 0x1b5d80u: goto label_1b5d80;
        case 0x1b5d84u: goto label_1b5d84;
        case 0x1b5d88u: goto label_1b5d88;
        case 0x1b5d8cu: goto label_1b5d8c;
        case 0x1b5d90u: goto label_1b5d90;
        case 0x1b5d94u: goto label_1b5d94;
        case 0x1b5d98u: goto label_1b5d98;
        case 0x1b5d9cu: goto label_1b5d9c;
        case 0x1b5da0u: goto label_1b5da0;
        case 0x1b5da4u: goto label_1b5da4;
        case 0x1b5da8u: goto label_1b5da8;
        case 0x1b5dacu: goto label_1b5dac;
        case 0x1b5db0u: goto label_1b5db0;
        case 0x1b5db4u: goto label_1b5db4;
        case 0x1b5db8u: goto label_1b5db8;
        case 0x1b5dbcu: goto label_1b5dbc;
        case 0x1b5dc0u: goto label_1b5dc0;
        case 0x1b5dc4u: goto label_1b5dc4;
        case 0x1b5dc8u: goto label_1b5dc8;
        case 0x1b5dccu: goto label_1b5dcc;
        case 0x1b5dd0u: goto label_1b5dd0;
        case 0x1b5dd4u: goto label_1b5dd4;
        case 0x1b5dd8u: goto label_1b5dd8;
        case 0x1b5ddcu: goto label_1b5ddc;
        default: break;
    }

    ctx->pc = 0x1b5d10u;

label_1b5d10:
    // 0x1b5d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b5d14:
    // 0x1b5d14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b5d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b5d18:
    // 0x1b5d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5d1c:
    // 0x1b5d1c: 0xc06bbe0  jal         func_1AEF80
label_1b5d20:
    if (ctx->pc == 0x1B5D20u) {
        ctx->pc = 0x1B5D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D1Cu;
        // 0x1b5d20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D24u;
        goto label_1b5d24;
    }
    ctx->pc = 0x1B5D1Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D24u);
    ctx->pc = 0x1B5D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D1Cu;
    // 0x1b5d20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1B5D1Cu, 0x1B5D24u)) {
        return;
    }
    ctx->pc = 0x1B5D24u;
label_1b5d24:
    // 0x1b5d24: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x1b5d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1b5d28:
    // 0x1b5d28: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1b5d2c:
    if (ctx->pc == 0x1B5D2Cu) {
        ctx->pc = 0x1B5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D28u;
        // 0x1b5d2c: 0x8e040268  lw          $a0, 0x268($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D30u;
        goto label_1b5d30;
    }
    ctx->pc = 0x1B5D28u;
    {
        const bool branch_taken_0x1b5d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d28) {
            ctx->pc = 0x1B5D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5D28u;
            // 0x1b5d2c: 0x8e040268  lw          $a0, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D40u;
            goto label_1b5d40;
        }
    }
    ctx->pc = 0x1B5D30u;
label_1b5d30:
    // 0x1b5d30: 0xc07cd92  jal         func_1F3648
label_1b5d34:
    if (ctx->pc == 0x1B5D34u) {
        ctx->pc = 0x1B5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D30u;
        // 0x1b5d34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D38u;
        goto label_1b5d38;
    }
    ctx->pc = 0x1B5D30u;
    SET_GPR_U32(ctx, 31, 0x1B5D38u);
    ctx->pc = 0x1B5D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D30u;
    // 0x1b5d34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1B5D30u, 0x1B5D38u)) {
        return;
    }
    ctx->pc = 0x1B5D38u;
label_1b5d38:
    // 0x1b5d38: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x1b5d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
label_1b5d3c:
    // 0x1b5d3c: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1b5d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1b5d40:
    // 0x1b5d40: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1b5d44:
    if (ctx->pc == 0x1B5D44u) {
        ctx->pc = 0x1B5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D40u;
        // 0x1b5d44: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D48u;
        goto label_1b5d48;
    }
    ctx->pc = 0x1B5D40u;
    {
        const bool branch_taken_0x1b5d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d40) {
            ctx->pc = 0x1B5D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5D40u;
            // 0x1b5d44: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D58u;
            goto label_1b5d58;
        }
    }
    ctx->pc = 0x1B5D48u;
label_1b5d48:
    // 0x1b5d48: 0xc06d134  jal         func_1B44D0
label_1b5d4c:
    if (ctx->pc == 0x1B5D4Cu) {
        ctx->pc = 0x1B5D50u;
        goto label_1b5d50;
    }
    ctx->pc = 0x1B5D48u;
    SET_GPR_U32(ctx, 31, 0x1B5D50u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1B5D48u, 0x1B5D50u)) {
        return;
    }
    ctx->pc = 0x1B5D50u;
label_1b5d50:
    // 0x1b5d50: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x1b5d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
label_1b5d54:
    // 0x1b5d54: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x1b5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1b5d58:
    // 0x1b5d58: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1b5d5c:
    if (ctx->pc == 0x1B5D5Cu) {
        ctx->pc = 0x1B5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D58u;
        // 0x1b5d5c: 0x8e0502c0  lw          $a1, 0x2C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D60u;
        goto label_1b5d60;
    }
    ctx->pc = 0x1B5D58u;
    {
        const bool branch_taken_0x1b5d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d58) {
            ctx->pc = 0x1B5D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5D58u;
            // 0x1b5d5c: 0x8e0502c0  lw          $a1, 0x2C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D70u;
            goto label_1b5d70;
        }
    }
    ctx->pc = 0x1B5D60u;
label_1b5d60:
    // 0x1b5d60: 0xc06d134  jal         func_1B44D0
label_1b5d64:
    if (ctx->pc == 0x1B5D64u) {
        ctx->pc = 0x1B5D68u;
        goto label_1b5d68;
    }
    ctx->pc = 0x1B5D60u;
    SET_GPR_U32(ctx, 31, 0x1B5D68u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1B5D60u, 0x1B5D68u)) {
        return;
    }
    ctx->pc = 0x1B5D68u;
label_1b5d68:
    // 0x1b5d68: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x1b5d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
label_1b5d6c:
    // 0x1b5d6c: 0x8e0502c0  lw          $a1, 0x2C0($s0)
    ctx->pc = 0x1b5d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_1b5d70:
    // 0x1b5d70: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x1b5d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
label_1b5d74:
    // 0x1b5d74: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1b5d78:
    if (ctx->pc == 0x1B5D78u) {
        ctx->pc = 0x1B5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D74u;
        // 0x1b5d78: 0xae0002b8  sw          $zero, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D7Cu;
        goto label_1b5d7c;
    }
    ctx->pc = 0x1B5D74u;
    {
        const bool branch_taken_0x1b5d74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D74u;
        // 0x1b5d78: 0xae0002b8  sw          $zero, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d74) {
            ctx->pc = 0x1B5DA0u;
            goto label_1b5da0;
        }
    }
    ctx->pc = 0x1B5D7Cu;
label_1b5d7c:
    // 0x1b5d7c: 0xc06c97c  jal         func_1B25F0
label_1b5d80:
    if (ctx->pc == 0x1B5D80u) {
        ctx->pc = 0x1B5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D7Cu;
        // 0x1b5d80: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D84u;
        goto label_1b5d84;
    }
    ctx->pc = 0x1B5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D84u);
    ctx->pc = 0x1B5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D7Cu;
    // 0x1b5d80: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B5D7Cu, 0x1B5D84u)) {
        return;
    }
    ctx->pc = 0x1B5D84u;
label_1b5d84:
    // 0x1b5d84: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x1b5d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
label_1b5d88:
    // 0x1b5d88: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1b5d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b5d8c:
    // 0x1b5d8c: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1b5d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1b5d90:
    // 0x1b5d90: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1b5d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1b5d94:
    // 0x1b5d94: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1b5d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1b5d98:
    // 0x1b5d98: 0xc0f809  jalr        $a2
label_1b5d9c:
    if (ctx->pc == 0x1B5D9Cu) {
        ctx->pc = 0x1B5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D98u;
        // 0x1b5d9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5DA0u;
        goto label_1b5da0;
    }
    ctx->pc = 0x1B5D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B5DA0u);
        ctx->pc = 0x1B5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D98u;
        // 0x1b5d9c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5D98u, 0x1B5DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5DA0u;
label_1b5da0:
    // 0x1b5da0: 0x8e0502c4  lw          $a1, 0x2C4($s0)
    ctx->pc = 0x1b5da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
label_1b5da4:
    // 0x1b5da4: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_1b5da8:
    if (ctx->pc == 0x1B5DA8u) {
        ctx->pc = 0x1B5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DA4u;
        // 0x1b5da8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5DACu;
        goto label_1b5dac;
    }
    ctx->pc = 0x1B5DA4u;
    {
        const bool branch_taken_0x1b5da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5da4) {
            ctx->pc = 0x1B5DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5DA4u;
            // 0x1b5da8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5DD4u;
            goto label_1b5dd4;
        }
    }
    ctx->pc = 0x1B5DACu;
label_1b5dac:
    // 0x1b5dac: 0xc06c97c  jal         func_1B25F0
label_1b5db0:
    if (ctx->pc == 0x1B5DB0u) {
        ctx->pc = 0x1B5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DACu;
        // 0x1b5db0: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5DB4u;
        goto label_1b5db4;
    }
    ctx->pc = 0x1B5DACu;
    SET_GPR_U32(ctx, 31, 0x1B5DB4u);
    ctx->pc = 0x1B5DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5DACu;
    // 0x1b5db0: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B5DACu, 0x1B5DB4u)) {
        return;
    }
    ctx->pc = 0x1B5DB4u;
label_1b5db4:
    // 0x1b5db4: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x1b5db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
label_1b5db8:
    // 0x1b5db8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1b5db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b5dbc:
    // 0x1b5dbc: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1b5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1b5dc0:
    // 0x1b5dc0: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1b5dc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1b5dc4:
    // 0x1b5dc4: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1b5dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1b5dc8:
    // 0x1b5dc8: 0xc0f809  jalr        $a2
label_1b5dcc:
    if (ctx->pc == 0x1B5DCCu) {
        ctx->pc = 0x1B5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DC8u;
        // 0x1b5dcc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5DD0u;
        goto label_1b5dd0;
    }
    ctx->pc = 0x1B5DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B5DD0u);
        ctx->pc = 0x1B5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DC8u;
        // 0x1b5dcc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5DC8u, 0x1B5DD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5DD0u;
label_1b5dd0:
    // 0x1b5dd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b5dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5dd4:
    // 0x1b5dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5dd8:
    // 0x1b5dd8: 0x3e00008  jr          $ra
label_1b5ddc:
    if (ctx->pc == 0x1B5DDCu) {
        ctx->pc = 0x1B5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DD8u;
        // 0x1b5ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5DE0u;
        goto label_fallthrough_0x1b5dd8;
    }
    ctx->pc = 0x1B5DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DD8u;
        // 0x1b5ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5dd8:
    ctx->pc = 0x1B5DE0u;
}
