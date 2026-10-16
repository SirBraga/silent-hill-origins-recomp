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

// Function: sub_00255FF8
// Address: 0x255ff8 - 0x256090
void sub_00255FF8_0x255ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255FF8_0x255ff8");
#endif

    switch (ctx->pc) {
        case 0x255ff8u: goto label_255ff8;
        case 0x255ffcu: goto label_255ffc;
        case 0x256000u: goto label_256000;
        case 0x256004u: goto label_256004;
        case 0x256008u: goto label_256008;
        case 0x25600cu: goto label_25600c;
        case 0x256010u: goto label_256010;
        case 0x256014u: goto label_256014;
        case 0x256018u: goto label_256018;
        case 0x25601cu: goto label_25601c;
        case 0x256020u: goto label_256020;
        case 0x256024u: goto label_256024;
        case 0x256028u: goto label_256028;
        case 0x25602cu: goto label_25602c;
        case 0x256030u: goto label_256030;
        case 0x256034u: goto label_256034;
        case 0x256038u: goto label_256038;
        case 0x25603cu: goto label_25603c;
        case 0x256040u: goto label_256040;
        case 0x256044u: goto label_256044;
        case 0x256048u: goto label_256048;
        case 0x25604cu: goto label_25604c;
        case 0x256050u: goto label_256050;
        case 0x256054u: goto label_256054;
        case 0x256058u: goto label_256058;
        case 0x25605cu: goto label_25605c;
        case 0x256060u: goto label_256060;
        case 0x256064u: goto label_256064;
        case 0x256068u: goto label_256068;
        case 0x25606cu: goto label_25606c;
        case 0x256070u: goto label_256070;
        case 0x256074u: goto label_256074;
        case 0x256078u: goto label_256078;
        case 0x25607cu: goto label_25607c;
        case 0x256080u: goto label_256080;
        case 0x256084u: goto label_256084;
        case 0x256088u: goto label_256088;
        case 0x25608cu: goto label_25608c;
        default: break;
    }

    ctx->pc = 0x255ff8u;

label_255ff8:
    // 0x255ff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x255ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_255ffc:
    // 0x255ffc: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x255ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
label_256000:
    // 0x256000: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x256000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_256004:
    // 0x256004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_256008:
    // 0x256008: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25600c:
    // 0x25600c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25600cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_256010:
    // 0x256010: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x256010u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_256014:
    // 0x256014: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x256014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_256018:
    // 0x256018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x256018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25601c:
    // 0x25601c: 0xc095988  jal         func_256620
label_256020:
    if (ctx->pc == 0x256020u) {
        ctx->pc = 0x256020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25601Cu;
        // 0x256020: 0xa602000e  sh          $v0, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256024u;
        goto label_256024;
    }
    ctx->pc = 0x25601Cu;
    SET_GPR_U32(ctx, 31, 0x256024u);
    ctx->pc = 0x256020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25601Cu;
    // 0x256020: 0xa602000e  sh          $v0, 0xE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256620u, 0x25601Cu, 0x256024u)) {
        return;
    }
    ctx->pc = 0x256024u;
label_256024:
    // 0x256024: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x256024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_256028:
    // 0x256028: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x256028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25602c:
    // 0x25602c: 0xc09397e  jal         func_24E5F8
label_256030:
    if (ctx->pc == 0x256030u) {
        ctx->pc = 0x256030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25602Cu;
        // 0x256030: 0x24841210  addiu       $a0, $a0, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256034u;
        goto label_256034;
    }
    ctx->pc = 0x25602Cu;
    SET_GPR_U32(ctx, 31, 0x256034u);
    ctx->pc = 0x256030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25602Cu;
    // 0x256030: 0x24841210  addiu       $a0, $a0, 0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x25602Cu, 0x256034u)) {
        return;
    }
    ctx->pc = 0x256034u;
label_256034:
    // 0x256034: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x256034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_256038:
    // 0x256038: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_25603c:
    if (ctx->pc == 0x25603Cu) {
        ctx->pc = 0x25603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256038u;
        // 0x25603c: 0x26220fc8  addiu       $v0, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256040u;
        goto label_256040;
    }
    ctx->pc = 0x256038u;
    {
        const bool branch_taken_0x256038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256038u;
        // 0x25603c: 0x26220fc8  addiu       $v0, $s1, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256038) {
            ctx->pc = 0x256050u;
            goto label_256050;
        }
    }
    ctx->pc = 0x256040u;
label_256040:
    // 0x256040: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x256040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_256044:
    // 0x256044: 0x60f809  jalr        $v1
label_256048:
    if (ctx->pc == 0x256048u) {
        ctx->pc = 0x25604Cu;
        goto label_25604c;
    }
    ctx->pc = 0x256044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25604Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256044u, 0x25604Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25604Cu;
label_25604c:
    // 0x25604c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x25604cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_256050:
    // 0x256050: 0xc096032  jal         func_2580C8
label_256054:
    if (ctx->pc == 0x256054u) {
        ctx->pc = 0x256054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256050u;
        // 0x256054: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256058u;
        goto label_256058;
    }
    ctx->pc = 0x256050u;
    SET_GPR_U32(ctx, 31, 0x256058u);
    ctx->pc = 0x256054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256050u;
    // 0x256054: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2580C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2580C8u, 0x256050u, 0x256058u)) {
        return;
    }
    ctx->pc = 0x256058u;
label_256058:
    // 0x256058: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x256058u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_25605c:
    // 0x25605c: 0x26250fc8  addiu       $a1, $s1, 0xFC8
    ctx->pc = 0x25605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_256060:
    // 0x256060: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x256060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_256064:
    // 0x256064: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x256064u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_256068:
    // 0x256068: 0x8ca2010c  lw          $v0, 0x10C($a1)
    ctx->pc = 0x256068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_25606c:
    // 0x25606c: 0x40f809  jalr        $v0
label_256070:
    if (ctx->pc == 0x256070u) {
        ctx->pc = 0x256070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25606Cu;
        // 0x256070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256074u;
        goto label_256074;
    }
    ctx->pc = 0x25606Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256074u);
        ctx->pc = 0x256070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25606Cu;
        // 0x256070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25606Cu, 0x256074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256074u;
label_256074:
    // 0x256074: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x256074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_256078:
    // 0x256078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25607c:
    // 0x25607c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25607cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_256080:
    // 0x256080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_256084:
    // 0x256084: 0x3e00008  jr          $ra
label_256088:
    if (ctx->pc == 0x256088u) {
        ctx->pc = 0x256088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256084u;
        // 0x256088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25608Cu;
        goto label_25608c;
    }
    ctx->pc = 0x256084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256084u;
        // 0x256088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25608Cu;
label_25608c:
    // 0x25608c: 0x0  nop
    ctx->pc = 0x25608cu;
    // NOP
    ctx->pc = 0x256090u;
}
