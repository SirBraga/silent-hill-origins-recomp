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

// Function: sub_0015CEB8
// Address: 0x15ceb8 - 0x15cf80
void sub_0015CEB8_0x15ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CEB8_0x15ceb8");
#endif

    switch (ctx->pc) {
        case 0x15cee8u: goto label_15cee8;
        case 0x15cf1cu: goto label_15cf1c;
        case 0x15cf24u: goto label_15cf24;
        case 0x15cf2cu: goto label_15cf2c;
        case 0x15cf34u: goto label_15cf34;
        case 0x15cf44u: goto label_15cf44;
        case 0x15cf4cu: goto label_15cf4c;
        case 0x15cf58u: goto label_15cf58;
        case 0x15cf64u: goto label_15cf64;
        default: break;
    }

    ctx->pc = 0x15ceb8u;

    // 0x15ceb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15cebc: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x15cebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x15cec0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15cec4: 0x24a5cde8  addiu       $a1, $a1, -0x3218
    ctx->pc = 0x15cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954472));
    // 0x15cec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15cec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cecc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15ced0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15ced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ced4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ced4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15ced8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15cedc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15cedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cee0: 0xc09545a  jal         func_255168
    ctx->pc = 0x15CEE0u;
    SET_GPR_U32(ctx, 31, 0x15CEE8u);
    ctx->pc = 0x15CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CEE0u;
    // 0x15cee4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x15CEE0u, 0x15CEE8u)) {
        return;
    }
    ctx->pc = 0x15CEE8u;
label_15cee8:
    // 0x15cee8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ceec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15CEECu;
    {
        const bool branch_taken_0x15ceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ceec) {
            ctx->pc = 0x15CF14u;
            goto label_15cf14;
        }
    }
    ctx->pc = 0x15CEF4u;
    // 0x15cef4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15cef8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x15cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15cefc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15cf00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15cf04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CF04u;
    {
        const bool branch_taken_0x15cf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cf04) {
            ctx->pc = 0x15CF14u;
            goto label_15cf14;
        }
    }
    ctx->pc = 0x15CF0Cu;
    // 0x15cf0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15cf10: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x15cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_15cf14:
    // 0x15cf14: 0xc0955ca  jal         func_255728
    ctx->pc = 0x15CF14u;
    SET_GPR_U32(ctx, 31, 0x15CF1Cu);
    ctx->pc = 0x255728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255728u, 0x15CF14u, 0x15CF1Cu)) {
        return;
    }
    ctx->pc = 0x15CF1Cu;
label_15cf1c:
    // 0x15cf1c: 0xc089892  jal         func_226248
    ctx->pc = 0x15CF1Cu;
    SET_GPR_U32(ctx, 31, 0x15CF24u);
    ctx->pc = 0x15CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF1Cu;
    // 0x15cf20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x15CF1Cu, 0x15CF24u)) {
        return;
    }
    ctx->pc = 0x15CF24u;
label_15cf24:
    // 0x15cf24: 0xc0954b8  jal         func_2552E0
    ctx->pc = 0x15CF24u;
    SET_GPR_U32(ctx, 31, 0x15CF2Cu);
    ctx->pc = 0x15CF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF24u;
    // 0x15cf28: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2552E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2552E0u, 0x15CF24u, 0x15CF2Cu)) {
        return;
    }
    ctx->pc = 0x15CF2Cu;
label_15cf2c:
    // 0x15cf2c: 0xc089892  jal         func_226248
    ctx->pc = 0x15CF2Cu;
    SET_GPR_U32(ctx, 31, 0x15CF34u);
    ctx->pc = 0x15CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF2Cu;
    // 0x15cf30: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x15CF2Cu, 0x15CF34u)) {
        return;
    }
    ctx->pc = 0x15CF34u;
label_15cf34:
    // 0x15cf34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15cf34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15cf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf3c: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x15CF3Cu;
    SET_GPR_U32(ctx, 31, 0x15CF44u);
    ctx->pc = 0x15CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF3Cu;
    // 0x15cf40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x15CF3Cu, 0x15CF44u)) {
        return;
    }
    ctx->pc = 0x15CF44u;
label_15cf44:
    // 0x15cf44: 0xc07700a  jal         func_1DC028
    ctx->pc = 0x15CF44u;
    SET_GPR_U32(ctx, 31, 0x15CF4Cu);
    ctx->pc = 0x15CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF44u;
    // 0x15cf48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DC028u, 0x15CF44u, 0x15CF4Cu)) {
        return;
    }
    ctx->pc = 0x15CF4Cu;
label_15cf4c:
    // 0x15cf4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15cf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf50: 0xc095622  jal         func_255888
    ctx->pc = 0x15CF50u;
    SET_GPR_U32(ctx, 31, 0x15CF58u);
    ctx->pc = 0x15CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF50u;
    // 0x15cf54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255888u, 0x15CF50u, 0x15CF58u)) {
        return;
    }
    ctx->pc = 0x15CF58u;
label_15cf58:
    // 0x15cf58: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15cf5c: 0xc089974  jal         func_2265D0
    ctx->pc = 0x15CF5Cu;
    SET_GPR_U32(ctx, 31, 0x15CF64u);
    ctx->pc = 0x15CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF5Cu;
    // 0x15cf60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2265D0u, 0x15CF5Cu, 0x15CF64u)) {
        return;
    }
    ctx->pc = 0x15CF64u;
label_15cf64:
    // 0x15cf64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15cf64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15cf68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15cf6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15cf6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15cf70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15cf70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cf74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15cf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cf78: 0x3e00008  jr          $ra
    ctx->pc = 0x15CF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF78u;
        // 0x15cf7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CF80u;
}
