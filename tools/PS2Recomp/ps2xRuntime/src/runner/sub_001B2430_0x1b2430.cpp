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

// Function: sub_001B2430
// Address: 0x1b2430 - 0x1b24a0
void sub_001B2430_0x1b2430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2430_0x1b2430");
#endif

    switch (ctx->pc) {
        case 0x1b2430u: goto label_1b2430;
        case 0x1b2434u: goto label_1b2434;
        case 0x1b2438u: goto label_1b2438;
        case 0x1b243cu: goto label_1b243c;
        case 0x1b2440u: goto label_1b2440;
        case 0x1b2444u: goto label_1b2444;
        case 0x1b2448u: goto label_1b2448;
        case 0x1b244cu: goto label_1b244c;
        case 0x1b2450u: goto label_1b2450;
        case 0x1b2454u: goto label_1b2454;
        case 0x1b2458u: goto label_1b2458;
        case 0x1b245cu: goto label_1b245c;
        case 0x1b2460u: goto label_1b2460;
        case 0x1b2464u: goto label_1b2464;
        case 0x1b2468u: goto label_1b2468;
        case 0x1b246cu: goto label_1b246c;
        case 0x1b2470u: goto label_1b2470;
        case 0x1b2474u: goto label_1b2474;
        case 0x1b2478u: goto label_1b2478;
        case 0x1b247cu: goto label_1b247c;
        case 0x1b2480u: goto label_1b2480;
        case 0x1b2484u: goto label_1b2484;
        case 0x1b2488u: goto label_1b2488;
        case 0x1b248cu: goto label_1b248c;
        case 0x1b2490u: goto label_1b2490;
        case 0x1b2494u: goto label_1b2494;
        case 0x1b2498u: goto label_1b2498;
        case 0x1b249cu: goto label_1b249c;
        default: break;
    }

    ctx->pc = 0x1b2430u;

label_1b2430:
    // 0x1b2430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b2434:
    // 0x1b2434: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b2434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b2438:
    // 0x1b2438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b243c:
    // 0x1b243c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b243cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2440:
    // 0x1b2440: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_1b2444:
    if (ctx->pc == 0x1B2444u) {
        ctx->pc = 0x1B2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2440u;
        // 0x1b2444: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2448u;
        goto label_1b2448;
    }
    ctx->pc = 0x1B2440u;
    {
        const bool branch_taken_0x1b2440 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2440u;
        // 0x1b2444: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2440) {
            ctx->pc = 0x1B2450u;
            goto label_1b2450;
        }
    }
    ctx->pc = 0x1B2448u;
label_1b2448:
    // 0x1b2448: 0xc05fa86  jal         func_17EA18
label_1b244c:
    if (ctx->pc == 0x1B244Cu) {
        ctx->pc = 0x1B2450u;
        goto label_1b2450;
    }
    ctx->pc = 0x1B2448u;
    SET_GPR_U32(ctx, 31, 0x1B2450u);
    ctx->pc = 0x17EA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17EA18u, 0x1B2448u, 0x1B2450u)) {
        return;
    }
    ctx->pc = 0x1B2450u;
label_1b2450:
    // 0x1b2450: 0x2610015c  addiu       $s0, $s0, 0x15C
    ctx->pc = 0x1b2450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
label_1b2454:
    // 0x1b2454: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x1b2454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1b2458:
    // 0x1b2458: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b2458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b245c:
    // 0x1b245c: 0x0  nop
    ctx->pc = 0x1b245cu;
    // NOP
label_1b2460:
    // 0x1b2460: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b2460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b2464:
    // 0x1b2464: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1b2468:
    if (ctx->pc == 0x1B2468u) {
        ctx->pc = 0x1B2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2464u;
        // 0x1b2468: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B246Cu;
        goto label_1b246c;
    }
    ctx->pc = 0x1B2464u;
    {
        const bool branch_taken_0x1b2464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2464u;
        // 0x1b2468: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2464) {
            ctx->pc = 0x1B2480u;
            goto label_1b2480;
        }
    }
    ctx->pc = 0x1B246Cu;
label_1b246c:
    // 0x1b246c: 0x8ca20258  lw          $v0, 0x258($a1)
    ctx->pc = 0x1b246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
label_1b2470:
    // 0x1b2470: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1b2470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_1b2474:
    // 0x1b2474: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x1b2474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1b2478:
    // 0x1b2478: 0x60f809  jalr        $v1
label_1b247c:
    if (ctx->pc == 0x1B247Cu) {
        ctx->pc = 0x1B247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2478u;
        // 0x1b247c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2480u;
        goto label_1b2480;
    }
    ctx->pc = 0x1B2478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B2480u);
        ctx->pc = 0x1B247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2478u;
        // 0x1b247c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2478u, 0x1B2480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2480u;
label_1b2480:
    // 0x1b2480: 0x623fff7  bgezl       $s1, . + 4 + (-0x9 << 2)
label_1b2484:
    if (ctx->pc == 0x1B2484u) {
        ctx->pc = 0x1B2484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2480u;
        // 0x1b2484: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2488u;
        goto label_1b2488;
    }
    ctx->pc = 0x1B2480u;
    {
        const bool branch_taken_0x1b2480 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1b2480) {
            ctx->pc = 0x1B2484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2480u;
            // 0x1b2484: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2460;
        }
    }
    ctx->pc = 0x1B2488u;
label_1b2488:
    // 0x1b2488: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b2488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b248c:
    // 0x1b248c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b248cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2490:
    // 0x1b2490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2494:
    // 0x1b2494: 0x3e00008  jr          $ra
label_1b2498:
    if (ctx->pc == 0x1B2498u) {
        ctx->pc = 0x1B2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2494u;
        // 0x1b2498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B249Cu;
        goto label_1b249c;
    }
    ctx->pc = 0x1B2494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2494u;
        // 0x1b2498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B249Cu;
label_1b249c:
    // 0x1b249c: 0x0  nop
    ctx->pc = 0x1b249cu;
    // NOP
    ctx->pc = 0x1b24a0u;
}
