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

// Function: sub_001D5FF0
// Address: 0x1d5ff0 - 0x1d6100
void sub_001D5FF0_0x1d5ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5FF0_0x1d5ff0");
#endif

    switch (ctx->pc) {
        case 0x1d600cu: goto label_1d600c;
        case 0x1d6020u: goto label_1d6020;
        case 0x1d602cu: goto label_1d602c;
        case 0x1d6038u: goto label_1d6038;
        case 0x1d6058u: goto label_1d6058;
        case 0x1d6074u: goto label_1d6074;
        case 0x1d6090u: goto label_1d6090;
        case 0x1d60acu: goto label_1d60ac;
        case 0x1d60c8u: goto label_1d60c8;
        case 0x1d60e8u: goto label_1d60e8;
        default: break;
    }

    ctx->pc = 0x1d5ff0u;

    // 0x1d5ff0: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x1d5ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x1d5ff4: 0x7fb00420  sq          $s0, 0x420($sp)
    ctx->pc = 0x1d5ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 16));
    // 0x1d5ff8: 0x7fb10410  sq          $s1, 0x410($sp)
    ctx->pc = 0x1d5ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 17));
    // 0x1d5ffc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d5ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6000: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x1d6000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x1d6004: 0xc07cdd4  jal         func_1F3750
    ctx->pc = 0x1D6004u;
    SET_GPR_U32(ctx, 31, 0x1D600Cu);
    ctx->pc = 0x1D6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6004u;
    // 0x1d6008: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3750u, 0x1D6004u, 0x1D600Cu)) {
        return;
    }
    ctx->pc = 0x1D600Cu;
label_1d600c:
    // 0x1d600c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d600cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d6010: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6014: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d6014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6018: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D6018u;
    SET_GPR_U32(ctx, 31, 0x1D6020u);
    ctx->pc = 0x1D601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6018u;
    // 0x1d601c: 0x24a51070  addiu       $a1, $a1, 0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D6018u, 0x1D6020u)) {
        return;
    }
    ctx->pc = 0x1D6020u;
label_1d6020:
    // 0x1d6020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6024: 0xc07596a  jal         func_1D65A8
    ctx->pc = 0x1D6024u;
    SET_GPR_U32(ctx, 31, 0x1D602Cu);
    ctx->pc = 0x1D6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6024u;
    // 0x1d6028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D6024u, 0x1D602Cu)) {
        return;
    }
    ctx->pc = 0x1D602Cu;
label_1d602c:
    // 0x1d602c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d602cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6030: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D6030u;
    SET_GPR_U32(ctx, 31, 0x1D6038u);
    ctx->pc = 0x1D6034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6030u;
    // 0x1d6034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D6030u, 0x1D6038u)) {
        return;
    }
    ctx->pc = 0x1D6038u;
label_1d6038:
    // 0x1d6038: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d6038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1d603c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d603cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6040: 0x24c60f50  addiu       $a2, $a2, 0xF50
    ctx->pc = 0x1d6040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3920));
    // 0x1d6044: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d6044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d6048: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d6048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d604c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d604cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6050: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D6050u;
    SET_GPR_U32(ctx, 31, 0x1D6058u);
    ctx->pc = 0x1D6054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6050u;
    // 0x1d6054: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D6050u, 0x1D6058u)) {
        return;
    }
    ctx->pc = 0x1D6058u;
label_1d6058:
    // 0x1d6058: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d6058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d605c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d605cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6060: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d6060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6064: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d6064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6068: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d6068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d606c: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D606Cu;
    SET_GPR_U32(ctx, 31, 0x1D6074u);
    ctx->pc = 0x1D6070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D606Cu;
    // 0x1d6070: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D606Cu, 0x1D6074u)) {
        return;
    }
    ctx->pc = 0x1D6074u;
label_1d6074:
    // 0x1d6074: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d6074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d607c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d607cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d6080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6084: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d6084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6088: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D6088u;
    SET_GPR_U32(ctx, 31, 0x1D6090u);
    ctx->pc = 0x1D608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6088u;
    // 0x1d608c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D6088u, 0x1D6090u)) {
        return;
    }
    ctx->pc = 0x1D6090u;
label_1d6090:
    // 0x1d6090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6094: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d6094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d6098: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d6098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d609c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d609cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d60a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60a4: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D60A4u;
    SET_GPR_U32(ctx, 31, 0x1D60ACu);
    ctx->pc = 0x1D60A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60A4u;
    // 0x1d60a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D60A4u, 0x1D60ACu)) {
        return;
    }
    ctx->pc = 0x1D60ACu;
label_1d60ac:
    // 0x1d60ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d60acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60b0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d60b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d60b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d60b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d60bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60c0: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D60C0u;
    SET_GPR_U32(ctx, 31, 0x1D60C8u);
    ctx->pc = 0x1D60C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60C0u;
    // 0x1d60c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D60C0u, 0x1D60C8u)) {
        return;
    }
    ctx->pc = 0x1D60C8u;
label_1d60c8:
    // 0x1d60c8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D60C8u;
    {
        const bool branch_taken_0x1d60c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60C8u;
        // 0x1d60cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60c8) {
            ctx->pc = 0x1D60E8u;
            goto label_1d60e8;
        }
    }
    ctx->pc = 0x1D60D0u;
    // 0x1d60d0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1d60d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d60d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d60d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d60d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d60dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60e0: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D60E0u;
    SET_GPR_U32(ctx, 31, 0x1D60E8u);
    ctx->pc = 0x1D60E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60E0u;
    // 0x1d60e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D60E0u, 0x1D60E8u)) {
        return;
    }
    ctx->pc = 0x1D60E8u;
label_1d60e8:
    // 0x1d60e8: 0x7bb00420  lq          $s0, 0x420($sp)
    ctx->pc = 0x1d60e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1d60ec: 0x7bb10410  lq          $s1, 0x410($sp)
    ctx->pc = 0x1d60ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1d60f0: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x1d60f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1d60f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D60F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60F4u;
        // 0x1d60f8: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D60F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D60FCu;
    // 0x1d60fc: 0x0  nop
    ctx->pc = 0x1d60fcu;
    // NOP
    ctx->pc = 0x1d6100u;
}
