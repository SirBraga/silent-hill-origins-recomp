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

// Function: sub_002E4018
// Address: 0x2e4018 - 0x2e4130
void sub_002E4018_0x2e4018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4018_0x2e4018");
#endif

    switch (ctx->pc) {
        case 0x2e4018u: goto label_2e4018;
        case 0x2e401cu: goto label_2e401c;
        case 0x2e4020u: goto label_2e4020;
        case 0x2e4024u: goto label_2e4024;
        case 0x2e4028u: goto label_2e4028;
        case 0x2e402cu: goto label_2e402c;
        case 0x2e4030u: goto label_2e4030;
        case 0x2e4034u: goto label_2e4034;
        case 0x2e4038u: goto label_2e4038;
        case 0x2e403cu: goto label_2e403c;
        case 0x2e4040u: goto label_2e4040;
        case 0x2e4044u: goto label_2e4044;
        case 0x2e4048u: goto label_2e4048;
        case 0x2e404cu: goto label_2e404c;
        case 0x2e4050u: goto label_2e4050;
        case 0x2e4054u: goto label_2e4054;
        case 0x2e4058u: goto label_2e4058;
        case 0x2e405cu: goto label_2e405c;
        case 0x2e4060u: goto label_2e4060;
        case 0x2e4064u: goto label_2e4064;
        case 0x2e4068u: goto label_2e4068;
        case 0x2e406cu: goto label_2e406c;
        case 0x2e4070u: goto label_2e4070;
        case 0x2e4074u: goto label_2e4074;
        case 0x2e4078u: goto label_2e4078;
        case 0x2e407cu: goto label_2e407c;
        case 0x2e4080u: goto label_2e4080;
        case 0x2e4084u: goto label_2e4084;
        case 0x2e4088u: goto label_2e4088;
        case 0x2e408cu: goto label_2e408c;
        case 0x2e4090u: goto label_2e4090;
        case 0x2e4094u: goto label_2e4094;
        case 0x2e4098u: goto label_2e4098;
        case 0x2e409cu: goto label_2e409c;
        case 0x2e40a0u: goto label_2e40a0;
        case 0x2e40a4u: goto label_2e40a4;
        case 0x2e40a8u: goto label_2e40a8;
        case 0x2e40acu: goto label_2e40ac;
        case 0x2e40b0u: goto label_2e40b0;
        case 0x2e40b4u: goto label_2e40b4;
        case 0x2e40b8u: goto label_2e40b8;
        case 0x2e40bcu: goto label_2e40bc;
        case 0x2e40c0u: goto label_2e40c0;
        case 0x2e40c4u: goto label_2e40c4;
        case 0x2e40c8u: goto label_2e40c8;
        case 0x2e40ccu: goto label_2e40cc;
        case 0x2e40d0u: goto label_2e40d0;
        case 0x2e40d4u: goto label_2e40d4;
        case 0x2e40d8u: goto label_2e40d8;
        case 0x2e40dcu: goto label_2e40dc;
        case 0x2e40e0u: goto label_2e40e0;
        case 0x2e40e4u: goto label_2e40e4;
        case 0x2e40e8u: goto label_2e40e8;
        case 0x2e40ecu: goto label_2e40ec;
        case 0x2e40f0u: goto label_2e40f0;
        case 0x2e40f4u: goto label_2e40f4;
        case 0x2e40f8u: goto label_2e40f8;
        case 0x2e40fcu: goto label_2e40fc;
        case 0x2e4100u: goto label_2e4100;
        case 0x2e4104u: goto label_2e4104;
        case 0x2e4108u: goto label_2e4108;
        case 0x2e410cu: goto label_2e410c;
        case 0x2e4110u: goto label_2e4110;
        case 0x2e4114u: goto label_2e4114;
        case 0x2e4118u: goto label_2e4118;
        case 0x2e411cu: goto label_2e411c;
        case 0x2e4120u: goto label_2e4120;
        case 0x2e4124u: goto label_2e4124;
        case 0x2e4128u: goto label_2e4128;
        case 0x2e412cu: goto label_2e412c;
        default: break;
    }

    ctx->pc = 0x2e4018u;

label_2e4018:
    // 0x2e4018: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e4018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2e401c:
    // 0x2e401c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e401cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4020:
    // 0x2e4020: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2e4020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2e4024:
    // 0x2e4024: 0x8f909068  lw          $s0, -0x6F98($gp)
    ctx->pc = 0x2e4024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_2e4028:
    // 0x2e4028: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2e4028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2e402c:
    // 0x2e402c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2e402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2e4030:
    // 0x2e4030: 0x84800b  movn        $s0, $a0, $a0
    ctx->pc = 0x2e4030u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4));
label_2e4034:
    // 0x2e4034: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e4034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e4038:
    // 0x2e4038: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e4038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e403c:
    // 0x2e403c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2e403cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2e4040:
    // 0x2e4040: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e4040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e4044:
    // 0x2e4044: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2e4044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_2e4048:
    // 0x2e4048: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e4048u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e404c:
    // 0x2e404c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2e404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2e4050:
    // 0x2e4050: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e4050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2e4054:
    // 0x2e4054: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2e4054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_2e4058:
    // 0x2e4058: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2e4058u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e405c:
    // 0x2e405c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_2e4060:
    if (ctx->pc == 0x2E4060u) {
        ctx->pc = 0x2E4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E405Cu;
        // 0x2e4060: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4064u;
        goto label_2e4064;
    }
    ctx->pc = 0x2E405Cu;
    {
        const bool branch_taken_0x2e405c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E405Cu;
        // 0x2e4060: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e405c) {
            ctx->pc = 0x2E408Cu;
            goto label_2e408c;
        }
    }
    ctx->pc = 0x2E4064u;
label_2e4064:
    // 0x2e4064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4068:
    // 0x2e4068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e406c:
    // 0x2e406c: 0x2a0f809  jalr        $s5
label_2e4070:
    if (ctx->pc == 0x2E4070u) {
        ctx->pc = 0x2E4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E406Cu;
        // 0x2e4070: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4074u;
        goto label_2e4074;
    }
    ctx->pc = 0x2E406Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2E4074u);
        ctx->pc = 0x2E4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E406Cu;
        // 0x2e4070: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E406Cu, 0x2E4074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E4074u;
label_2e4074:
    // 0x2e4074: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
label_2e4078:
    if (ctx->pc == 0x2E4078u) {
        ctx->pc = 0x2E4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4074u;
        // 0x2e4078: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E407Cu;
        goto label_2e407c;
    }
    ctx->pc = 0x2E4074u;
    {
        const bool branch_taken_0x2e4074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2e4074) {
            ctx->pc = 0x2E4078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4074u;
            // 0x2e4078: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4090u;
            goto label_2e4090;
        }
    }
    ctx->pc = 0x2E407Cu;
label_2e407c:
    // 0x2e407c: 0x56400010  bnel        $s2, $zero, . + 4 + (0x10 << 2)
label_2e4080:
    if (ctx->pc == 0x2E4080u) {
        ctx->pc = 0x2E4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E407Cu;
        // 0x2e4080: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4084u;
        goto label_2e4084;
    }
    ctx->pc = 0x2E407Cu;
    {
        const bool branch_taken_0x2e407c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e407c) {
            ctx->pc = 0x2E4080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E407Cu;
            // 0x2e4080: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E40C0u;
            goto label_2e40c0;
        }
    }
    ctx->pc = 0x2E4084u;
label_2e4084:
    // 0x2e4084: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2e4088:
    if (ctx->pc == 0x2E4088u) {
        ctx->pc = 0x2E4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4084u;
        // 0x2e4088: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E408Cu;
        goto label_2e408c;
    }
    ctx->pc = 0x2E4084u;
    {
        const bool branch_taken_0x2e4084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4084u;
        // 0x2e4088: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4084) {
            ctx->pc = 0x2E4100u;
            goto label_2e4100;
        }
    }
    ctx->pc = 0x2E408Cu;
label_2e408c:
    // 0x2e408c: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x2e408cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2e4090:
    // 0x2e4090: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x2e4090u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2e4094:
    // 0x2e4094: 0x12330017  beq         $s1, $s3, . + 4 + (0x17 << 2)
label_2e4098:
    if (ctx->pc == 0x2E4098u) {
        ctx->pc = 0x2E4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4094u;
        // 0x2e4098: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E409Cu;
        goto label_2e409c;
    }
    ctx->pc = 0x2E4094u;
    {
        const bool branch_taken_0x2e4094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x2E4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4094u;
        // 0x2e4098: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4094) {
            ctx->pc = 0x2E40F4u;
            goto label_2e40f4;
        }
    }
    ctx->pc = 0x2E409Cu;
label_2e409c:
    // 0x2e409c: 0x2630ffe8  addiu       $s0, $s1, -0x18
    ctx->pc = 0x2e409cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
label_2e40a0:
    // 0x2e40a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e40a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e40a4:
    // 0x2e40a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e40a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e40a8:
    // 0x2e40a8: 0x2a0f809  jalr        $s5
label_2e40ac:
    if (ctx->pc == 0x2E40ACu) {
        ctx->pc = 0x2E40ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40A8u;
        // 0x2e40ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E40B0u;
        goto label_2e40b0;
    }
    ctx->pc = 0x2E40A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2E40B0u);
        ctx->pc = 0x2E40ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40A8u;
        // 0x2e40ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E40A8u, 0x2E40B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E40B0u;
label_2e40b0:
    // 0x2e40b0: 0x14570005  bne         $v0, $s7, . + 4 + (0x5 << 2)
label_2e40b4:
    if (ctx->pc == 0x2E40B4u) {
        ctx->pc = 0x2E40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40B0u;
        // 0x2e40b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E40B8u;
        goto label_2e40b8;
    }
    ctx->pc = 0x2E40B0u;
    {
        const bool branch_taken_0x2e40b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x2E40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40B0u;
        // 0x2e40b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40b0) {
            ctx->pc = 0x2E40C8u;
            goto label_2e40c8;
        }
    }
    ctx->pc = 0x2E40B8u;
label_2e40b8:
    // 0x2e40b8: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
label_2e40bc:
    if (ctx->pc == 0x2E40BCu) {
        ctx->pc = 0x2E40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40B8u;
        // 0x2e40bc: 0xae560000  sw          $s6, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E40C0u;
        goto label_2e40c0;
    }
    ctx->pc = 0x2E40B8u;
    {
        const bool branch_taken_0x2e40b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e40b8) {
            ctx->pc = 0x2E40BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E40B8u;
            // 0x2e40bc: 0xae560000  sw          $s6, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E40C0u;
            goto label_2e40c0;
        }
    }
    ctx->pc = 0x2E40C0u;
label_2e40c0:
    // 0x2e40c0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2e40c4:
    if (ctx->pc == 0x2E40C4u) {
        ctx->pc = 0x2E40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40C0u;
        // 0x2e40c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E40C8u;
        goto label_2e40c8;
    }
    ctx->pc = 0x2E40C0u;
    {
        const bool branch_taken_0x2e40c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40C0u;
        // 0x2e40c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40c0) {
            ctx->pc = 0x2E4100u;
            goto label_2e4100;
        }
    }
    ctx->pc = 0x2E40C8u;
label_2e40c8:
    // 0x2e40c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e40c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e40cc:
    // 0x2e40cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e40ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e40d0:
    // 0x2e40d0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e40d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e40d4:
    // 0x2e40d4: 0xc0b9006  jal         func_2E4018
label_2e40d8:
    if (ctx->pc == 0x2E40D8u) {
        ctx->pc = 0x2E40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40D4u;
        // 0x2e40d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E40DCu;
        goto label_2e40dc;
    }
    ctx->pc = 0x2E40D4u;
    SET_GPR_U32(ctx, 31, 0x2E40DCu);
    ctx->pc = 0x2E40D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E40D4u;
    // 0x2e40d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4018u;
    goto label_2e4018;
    ctx->pc = 0x2E40DCu;
label_2e40dc:
    // 0x2e40dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e40dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e40e0:
    // 0x2e40e0: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_2e40e4:
    if (ctx->pc == 0x2E40E4u) {
        ctx->pc = 0x2E40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40E0u;
        // 0x2e40e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E40E8u;
        goto label_2e40e8;
    }
    ctx->pc = 0x2E40E0u;
    {
        const bool branch_taken_0x2e40e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e40e0) {
            ctx->pc = 0x2E40E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E40E0u;
            // 0x2e40e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4100u;
            goto label_2e4100;
        }
    }
    ctx->pc = 0x2E40E8u;
label_2e40e8:
    // 0x2e40e8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x2e40e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e40ec:
    // 0x2e40ec: 0x1633ffec  bne         $s1, $s3, . + 4 + (-0x14 << 2)
label_2e40f0:
    if (ctx->pc == 0x2E40F0u) {
        ctx->pc = 0x2E40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40ECu;
        // 0x2e40f0: 0x2630ffe8  addiu       $s0, $s1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E40F4u;
        goto label_2e40f4;
    }
    ctx->pc = 0x2E40ECu;
    {
        const bool branch_taken_0x2e40ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2E40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40ECu;
        // 0x2e40f0: 0x2630ffe8  addiu       $s0, $s1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40ec) {
            ctx->pc = 0x2E40A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e40a0;
        }
    }
    ctx->pc = 0x2E40F4u;
label_2e40f4:
    // 0x2e40f4: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
label_2e40f8:
    if (ctx->pc == 0x2E40F8u) {
        ctx->pc = 0x2E40F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40F4u;
        // 0x2e40f8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E40FCu;
        goto label_2e40fc;
    }
    ctx->pc = 0x2E40F4u;
    {
        const bool branch_taken_0x2e40f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e40f4) {
            ctx->pc = 0x2E40F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E40F4u;
            // 0x2e40f8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E40FCu;
            goto label_2e40fc;
        }
    }
    ctx->pc = 0x2E40FCu;
label_2e40fc:
    // 0x2e40fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e40fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4100:
    // 0x2e4100: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2e4100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e4104:
    // 0x2e4104: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2e4104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e4108:
    // 0x2e4108: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2e4108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e410c:
    // 0x2e410c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2e410cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e4110:
    // 0x2e4110: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e4110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e4114:
    // 0x2e4114: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2e4114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e4118:
    // 0x2e4118: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2e4118u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e411c:
    // 0x2e411c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2e411cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4120:
    // 0x2e4120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4124:
    // 0x2e4124: 0x3e00008  jr          $ra
label_2e4128:
    if (ctx->pc == 0x2E4128u) {
        ctx->pc = 0x2E4128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4124u;
        // 0x2e4128: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E412Cu;
        goto label_2e412c;
    }
    ctx->pc = 0x2E4124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4124u;
        // 0x2e4128: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E412Cu;
label_2e412c:
    // 0x2e412c: 0x0  nop
    ctx->pc = 0x2e412cu;
    // NOP
    ctx->pc = 0x2e4130u;
}
