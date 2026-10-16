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

// Function: sub_002E2380
// Address: 0x2e2380 - 0x2e23d0
void sub_002E2380_0x2e2380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2380_0x2e2380");
#endif

    switch (ctx->pc) {
        case 0x2e23a4u: goto label_2e23a4;
        case 0x2e23bcu: goto label_2e23bc;
        default: break;
    }

    ctx->pc = 0x2e2380u;

    // 0x2e2380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2384: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e2384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e2388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e238c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e2390: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2390u;
    {
        const bool branch_taken_0x2e2390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2390u;
        // 0x2e2394: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2390) {
            ctx->pc = 0x2E23B0u;
            goto label_2e23b0;
        }
    }
    ctx->pc = 0x2E2398u;
    // 0x2e2398: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2e2398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2e239c: 0xc0b807c  jal         func_2E01F0
    ctx->pc = 0x2E239Cu;
    SET_GPR_U32(ctx, 31, 0x2E23A4u);
    ctx->pc = 0x2E23A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E239Cu;
    // 0x2e23a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E01F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E01F0u, 0x2E239Cu, 0x2E23A4u)) {
        return;
    }
    ctx->pc = 0x2E23A4u;
label_2e23a4:
    // 0x2e23a4: 0x8f828c24  lw          $v0, -0x73DC($gp)
    ctx->pc = 0x2e23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937636)));
    // 0x2e23a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E23A8u;
    {
        const bool branch_taken_0x2e23a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E23ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23A8u;
        // 0x2e23ac: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e23a8) {
            ctx->pc = 0x2E23BCu;
            goto label_2e23bc;
        }
    }
    ctx->pc = 0x2E23B0u;
label_2e23b0:
    // 0x2e23b0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2e23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2e23b4: 0xc0b807c  jal         func_2E01F0
    ctx->pc = 0x2E23B4u;
    SET_GPR_U32(ctx, 31, 0x2E23BCu);
    ctx->pc = 0x2E23B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E23B4u;
    // 0x2e23b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E01F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E01F0u, 0x2E23B4u, 0x2E23BCu)) {
        return;
    }
    ctx->pc = 0x2E23BCu;
label_2e23bc:
    // 0x2e23bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e23bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e23c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e23c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e23c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e23c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e23c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E23C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E23C8u;
        // 0x2e23cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E23C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E23D0u;
}
