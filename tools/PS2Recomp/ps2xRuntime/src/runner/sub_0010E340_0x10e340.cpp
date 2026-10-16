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

// Function: sub_0010E340
// Address: 0x10e340 - 0x10e398
void sub_0010E340_0x10e340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E340_0x10e340");
#endif

    switch (ctx->pc) {
        case 0x10e364u: goto label_10e364;
        case 0x10e37cu: goto label_10e37c;
        default: break;
    }

    ctx->pc = 0x10e340u;

    // 0x10e340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e344: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10e344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10e348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e34c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10e34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e350: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10e350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10e354: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x10E354u;
    {
        const bool branch_taken_0x10e354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e354) {
            ctx->pc = 0x10E358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E354u;
            // 0x10e358: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E38Cu;
            goto label_10e38c;
        }
    }
    ctx->pc = 0x10E35Cu;
    // 0x10e35c: 0xc076642  jal         func_1D9908
    ctx->pc = 0x10E35Cu;
    SET_GPR_U32(ctx, 31, 0x10E364u);
    ctx->pc = 0x1D9908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9908u, 0x10E35Cu, 0x10E364u)) {
        return;
    }
    ctx->pc = 0x10E364u;
label_10e364:
    // 0x10e364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10e36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10e370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e374: 0xc0ba6e0  jal         func_2E9B80
    ctx->pc = 0x10E374u;
    SET_GPR_U32(ctx, 31, 0x10E37Cu);
    ctx->pc = 0x10E378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E374u;
    // 0x10e378: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9B80u, 0x10E374u, 0x10E37Cu)) {
        return;
    }
    ctx->pc = 0x10E37Cu;
label_10e37c:
    // 0x10e37c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e380: 0xae021244  sw          $v0, 0x1244($s0)
    ctx->pc = 0x10e380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4676), GPR_U32(ctx, 2));
    // 0x10e384: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10e384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10e388: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10e388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10e38c:
    // 0x10e38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e390: 0x3e00008  jr          $ra
    ctx->pc = 0x10E390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E390u;
        // 0x10e394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E398u;
}
