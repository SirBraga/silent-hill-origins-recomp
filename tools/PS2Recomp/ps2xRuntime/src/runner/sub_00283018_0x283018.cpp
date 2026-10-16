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

// Function: sub_00283018
// Address: 0x283018 - 0x283088
void sub_00283018_0x283018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283018_0x283018");
#endif

    switch (ctx->pc) {
        case 0x283018u: goto label_283018;
        case 0x28301cu: goto label_28301c;
        case 0x283020u: goto label_283020;
        case 0x283024u: goto label_283024;
        case 0x283028u: goto label_283028;
        case 0x28302cu: goto label_28302c;
        case 0x283030u: goto label_283030;
        case 0x283034u: goto label_283034;
        case 0x283038u: goto label_283038;
        case 0x28303cu: goto label_28303c;
        case 0x283040u: goto label_283040;
        case 0x283044u: goto label_283044;
        case 0x283048u: goto label_283048;
        case 0x28304cu: goto label_28304c;
        case 0x283050u: goto label_283050;
        case 0x283054u: goto label_283054;
        case 0x283058u: goto label_283058;
        case 0x28305cu: goto label_28305c;
        case 0x283060u: goto label_283060;
        case 0x283064u: goto label_283064;
        case 0x283068u: goto label_283068;
        case 0x28306cu: goto label_28306c;
        case 0x283070u: goto label_283070;
        case 0x283074u: goto label_283074;
        case 0x283078u: goto label_283078;
        case 0x28307cu: goto label_28307c;
        case 0x283080u: goto label_283080;
        case 0x283084u: goto label_283084;
        default: break;
    }

    ctx->pc = 0x283018u;

label_283018:
    // 0x283018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28301c:
    // 0x28301c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x28301cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_283020:
    // 0x283020: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x283020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_283024:
    // 0x283024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_283028:
    // 0x283028: 0x2470e6e0  addiu       $s0, $v1, -0x1920
    ctx->pc = 0x283028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960864));
label_28302c:
    // 0x28302c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28302cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_283030:
    // 0x283030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x283030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_283034:
    // 0x283034: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x283034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_283038:
    // 0x283038: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x283038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28303c:
    // 0x28303c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_283040:
    if (ctx->pc == 0x283040u) {
        ctx->pc = 0x283040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28303Cu;
        // 0x283040: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283044u;
        goto label_283044;
    }
    ctx->pc = 0x28303Cu;
    {
        const bool branch_taken_0x28303c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28303Cu;
        // 0x283040: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28303c) {
            ctx->pc = 0x28306Cu;
            goto label_28306c;
        }
    }
    ctx->pc = 0x283044u;
label_283044:
    // 0x283044: 0xc0a0e68  jal         func_2839A0
label_283048:
    if (ctx->pc == 0x283048u) {
        ctx->pc = 0x28304Cu;
        goto label_28304c;
    }
    ctx->pc = 0x283044u;
    SET_GPR_U32(ctx, 31, 0x28304Cu);
    ctx->pc = 0x2839A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2839A0u, 0x283044u, 0x28304Cu)) {
        return;
    }
    ctx->pc = 0x28304Cu;
label_28304c:
    // 0x28304c: 0xc093106  jal         func_24C418
label_283050:
    if (ctx->pc == 0x283050u) {
        ctx->pc = 0x283050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28304Cu;
        // 0x283050: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283054u;
        goto label_283054;
    }
    ctx->pc = 0x28304Cu;
    SET_GPR_U32(ctx, 31, 0x283054u);
    ctx->pc = 0x283050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28304Cu;
    // 0x283050: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x28304Cu, 0x283054u)) {
        return;
    }
    ctx->pc = 0x283054u;
label_283054:
    // 0x283054: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x283054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_283058:
    // 0x283058: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x283058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_28305c:
    // 0x28305c: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x28305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_283060:
    // 0x283060: 0x40f809  jalr        $v0
label_283064:
    if (ctx->pc == 0x283064u) {
        ctx->pc = 0x283064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283060u;
        // 0x283064: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283068u;
        goto label_283068;
    }
    ctx->pc = 0x283060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283068u);
        ctx->pc = 0x283064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283060u;
        // 0x283064: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283060u, 0x283068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283068u;
label_283068:
    // 0x283068: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x283068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_28306c:
    // 0x28306c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28306cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_283070:
    // 0x283070: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x283070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_283074:
    // 0x283074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_283078:
    // 0x283078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28307c:
    // 0x28307c: 0x3e00008  jr          $ra
label_283080:
    if (ctx->pc == 0x283080u) {
        ctx->pc = 0x283080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28307Cu;
        // 0x283080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283084u;
        goto label_283084;
    }
    ctx->pc = 0x28307Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28307Cu;
        // 0x283080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28307Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283084u;
label_283084:
    // 0x283084: 0x0  nop
    ctx->pc = 0x283084u;
    // NOP
    ctx->pc = 0x283088u;
}
