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

// Function: sub_0029F020
// Address: 0x29f020 - 0x29f08c
void sub_0029F020_0x29f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F020_0x29f020");
#endif

    switch (ctx->pc) {
        case 0x29f040u: goto label_29f040;
        case 0x29f054u: goto label_29f054;
        case 0x29f060u: goto label_29f060;
        case 0x29f068u: goto label_29f068;
        case 0x29f070u: goto label_29f070;
        case 0x29f084u: goto label_29f084;
        default: break;
    }

    ctx->pc = 0x29f020u;

    // 0x29f020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29f020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29f024: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29f028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f02c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29f02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29f030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29f034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29f038: 0xc0a6df0  jal         func_29B7C0
    ctx->pc = 0x29F038u;
    SET_GPR_U32(ctx, 31, 0x29F040u);
    ctx->pc = 0x29F03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F038u;
    // 0x29f03c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B7C0u, 0x29F038u, 0x29F040u)) {
        return;
    }
    ctx->pc = 0x29F040u;
label_29f040:
    // 0x29f040: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x29f040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x29f044: 0x2463d920  addiu       $v1, $v1, -0x26E0
    ctx->pc = 0x29f044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957344));
    // 0x29f048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f04c: 0xc0a8acc  jal         func_2A2B30
    ctx->pc = 0x29F04Cu;
    SET_GPR_U32(ctx, 31, 0x29F054u);
    ctx->pc = 0x29F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F04Cu;
    // 0x29f050: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2B30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2B30u, 0x29F04Cu, 0x29F054u)) {
        return;
    }
    ctx->pc = 0x29F054u;
label_29f054:
    // 0x29f054: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29f054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f058: 0xc0a8b6c  jal         func_2A2DB0
    ctx->pc = 0x29F058u;
    SET_GPR_U32(ctx, 31, 0x29F060u);
    ctx->pc = 0x29F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F058u;
    // 0x29f05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2DB0u, 0x29F058u, 0x29F060u)) {
        return;
    }
    ctx->pc = 0x29F060u;
label_29f060:
    // 0x29f060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29F060u;
    {
        const bool branch_taken_0x29f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F060u;
        // 0x29f064: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f060) {
            ctx->pc = 0x29F070u;
            goto label_29f070;
        }
    }
    ctx->pc = 0x29F068u;
label_29f068:
    // 0x29f068: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x29F068u;
    SET_GPR_U32(ctx, 31, 0x29F070u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x29F068u, 0x29F070u)) {
        return;
    }
    ctx->pc = 0x29F070u;
label_29f070:
    // 0x29f070: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29F070u;
    {
        const bool branch_taken_0x29f070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F070u;
        // 0x29f074: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f070) {
            ctx->pc = 0x29F094u;
            return;
        }
    }
    ctx->pc = 0x29F078u;
    // 0x29f078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f07c: 0xc0a6dfe  jal         func_29B7F8
    ctx->pc = 0x29F07Cu;
    SET_GPR_U32(ctx, 31, 0x29F084u);
    ctx->pc = 0x29F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F07Cu;
    // 0x29f080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B7F8u, 0x29F07Cu, 0x29F084u)) {
        return;
    }
    ctx->pc = 0x29F084u;
label_29f084:
    // 0x29f084: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x29F084u;
    {
        const bool branch_taken_0x29f084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f084) {
            ctx->pc = 0x29F068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f068;
        }
    }
    ctx->pc = 0x29F08Cu;
}
