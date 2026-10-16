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

// Function: sub_002E2430
// Address: 0x2e2430 - 0x2e24a0
void sub_002E2430_0x2e2430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2430_0x2e2430");
#endif

    switch (ctx->pc) {
        case 0x2e246cu: goto label_2e246c;
        default: break;
    }

    ctx->pc = 0x2e2430u;

    // 0x2e2430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e2430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e2434: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e2434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e2438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e2438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e243c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e243cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2444: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2e2444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e2448: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E2448u;
    {
        const bool branch_taken_0x2e2448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2448u;
        // 0x2e244c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2448) {
            ctx->pc = 0x2E2478u;
            goto label_2e2478;
        }
    }
    ctx->pc = 0x2E2450u;
    // 0x2e2450: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2e2450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2e2454: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e2454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e2458: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2458u;
    {
        const bool branch_taken_0x2e2458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2458u;
        // 0x2e245c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2458) {
            ctx->pc = 0x2E2478u;
            goto label_2e2478;
        }
    }
    ctx->pc = 0x2E2460u;
    // 0x2e2460: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e2460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2464: 0xc0b678e  jal         func_2D9E38
    ctx->pc = 0x2E2464u;
    SET_GPR_U32(ctx, 31, 0x2E246Cu);
    ctx->pc = 0x2E2468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2464u;
    // 0x2e2468: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9E38u, 0x2E2464u, 0x2E246Cu)) {
        return;
    }
    ctx->pc = 0x2E246Cu;
label_2e246c:
    // 0x2e246c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E246Cu;
    {
        const bool branch_taken_0x2e246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E246Cu;
        // 0x2e2470: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e246c) {
            ctx->pc = 0x2E247Cu;
            goto label_2e247c;
        }
    }
    ctx->pc = 0x2E2474u;
    // 0x2e2474: 0x0  nop
    ctx->pc = 0x2e2474u;
    // NOP
label_2e2478:
    // 0x2e2478: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2e2478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2e247c:
    // 0x2e247c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2e247cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2e2480: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2484: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2e2484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2e2488: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e2488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e248c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e248cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2494: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2494u;
        // 0x2e2498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E249Cu;
    // 0x2e249c: 0x0  nop
    ctx->pc = 0x2e249cu;
    // NOP
    ctx->pc = 0x2e24a0u;
}
