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

// Function: sub_001D1050
// Address: 0x1d1050 - 0x1d10a8
void sub_001D1050_0x1d1050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1050_0x1d1050");
#endif

    switch (ctx->pc) {
        case 0x1d1070u: goto label_1d1070;
        case 0x1d1088u: goto label_1d1088;
        default: break;
    }

    ctx->pc = 0x1d1050u;

    // 0x1d1050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1054: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d1054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d1058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d105c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D105Cu;
    {
        const bool branch_taken_0x1d105c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D105Cu;
        // 0x1d1060: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d105c) {
            ctx->pc = 0x1D1090u;
            goto label_1d1090;
        }
    }
    ctx->pc = 0x1D1064u;
    // 0x1d1064: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d1064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d1068: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D1068u;
    SET_GPR_U32(ctx, 31, 0x1D1070u);
    ctx->pc = 0x1D106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1068u;
    // 0x1d106c: 0x24a50bc8  addiu       $a1, $a1, 0xBC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D1068u, 0x1D1070u)) {
        return;
    }
    ctx->pc = 0x1D1070u;
label_1d1070:
    // 0x1d1070: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1070u;
    {
        const bool branch_taken_0x1d1070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1070u;
        // 0x1d1074: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1070) {
            ctx->pc = 0x1D1094u;
            goto label_1d1094;
        }
    }
    ctx->pc = 0x1D1078u;
    // 0x1d1078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d107c: 0x24c610a8  addiu       $a2, $a2, 0x10A8
    ctx->pc = 0x1d107cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4264));
    // 0x1d1080: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D1080u;
    SET_GPR_U32(ctx, 31, 0x1D1088u);
    ctx->pc = 0x1D1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1080u;
    // 0x1d1084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D1080u, 0x1D1088u)) {
        return;
    }
    ctx->pc = 0x1D1088u;
label_1d1088:
    // 0x1d1088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1088u;
    {
        const bool branch_taken_0x1d1088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1088u;
        // 0x1d108c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1088) {
            ctx->pc = 0x1D1098u;
            goto label_1d1098;
        }
    }
    ctx->pc = 0x1D1090u;
label_1d1090:
    // 0x1d1090: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1094:
    // 0x1d1094: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1098:
    // 0x1d1098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d109c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d109cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d10a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D10A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10A0u;
        // 0x1d10a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D10A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D10A8u;
}
