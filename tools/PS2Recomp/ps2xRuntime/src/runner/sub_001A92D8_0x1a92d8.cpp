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

// Function: sub_001A92D8
// Address: 0x1a92d8 - 0x1a9368
void sub_001A92D8_0x1a92d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A92D8_0x1a92d8");
#endif

    switch (ctx->pc) {
        case 0x1a9304u: goto label_1a9304;
        case 0x1a9318u: goto label_1a9318;
        case 0x1a932cu: goto label_1a932c;
        case 0x1a9344u: goto label_1a9344;
        default: break;
    }

    ctx->pc = 0x1a92d8u;

    // 0x1a92d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a92d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a92dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a92dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a92e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a92e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a92e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a92e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a92e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a92e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a92ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a92f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a92f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a92f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a92f8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a92f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92fc: 0xc06a506  jal         func_1A9418
    ctx->pc = 0x1A92FCu;
    SET_GPR_U32(ctx, 31, 0x1A9304u);
    ctx->pc = 0x1A9300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A92FCu;
    // 0x1a9300: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9418u, 0x1A92FCu, 0x1A9304u)) {
        return;
    }
    ctx->pc = 0x1A9304u;
label_1a9304:
    // 0x1a9304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a9304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9308: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A9308u;
    {
        const bool branch_taken_0x1a9308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9308u;
        // 0x1a930c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9308) {
            ctx->pc = 0x1A9348u;
            goto label_1a9348;
        }
    }
    ctx->pc = 0x1A9310u;
    // 0x1a9310: 0xc06a7c4  jal         func_1A9F10
    ctx->pc = 0x1A9310u;
    SET_GPR_U32(ctx, 31, 0x1A9318u);
    ctx->pc = 0x1A9F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9F10u, 0x1A9310u, 0x1A9318u)) {
        return;
    }
    ctx->pc = 0x1A9318u;
label_1a9318:
    // 0x1a9318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a9318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a931c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a931cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9320: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a9320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9324: 0xc06a890  jal         func_1AA240
    ctx->pc = 0x1A9324u;
    SET_GPR_U32(ctx, 31, 0x1A932Cu);
    ctx->pc = 0x1A9328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9324u;
    // 0x1a9328: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA240u, 0x1A9324u, 0x1A932Cu)) {
        return;
    }
    ctx->pc = 0x1A932Cu;
label_1a932c:
    // 0x1a932c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a932cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9330: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9330u;
    {
        const bool branch_taken_0x1a9330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9330u;
        // 0x1a9334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9330) {
            ctx->pc = 0x1A9348u;
            goto label_1a9348;
        }
    }
    ctx->pc = 0x1A9338u;
    // 0x1a9338: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1a9338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a933c: 0xc06a50e  jal         func_1A9438
    ctx->pc = 0x1A933Cu;
    SET_GPR_U32(ctx, 31, 0x1A9344u);
    ctx->pc = 0x1A9340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A933Cu;
    // 0x1a9340: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9438u, 0x1A933Cu, 0x1A9344u)) {
        return;
    }
    ctx->pc = 0x1A9344u;
label_1a9344:
    // 0x1a9344: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9348:
    // 0x1a9348: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a9348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a934c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a934cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a9350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9354: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a9354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a935c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A935Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A935Cu;
        // 0x1a9360: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A935Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9364u;
    // 0x1a9364: 0x0  nop
    ctx->pc = 0x1a9364u;
    // NOP
    ctx->pc = 0x1a9368u;
}
