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

// Function: sub_001FB740
// Address: 0x1fb740 - 0x1fb790
void sub_001FB740_0x1fb740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB740_0x1fb740");
#endif

    switch (ctx->pc) {
        case 0x1fb780u: goto label_1fb780;
        default: break;
    }

    ctx->pc = 0x1fb740u;

    // 0x1fb740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fb740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fb744: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fb744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fb74c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FB74Cu;
    {
        const bool branch_taken_0x1fb74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB74Cu;
        // 0x1fb750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb74c) {
            ctx->pc = 0x1FB780u;
            goto label_1fb780;
        }
    }
    ctx->pc = 0x1FB754u;
    // 0x1fb754: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fb754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fb758: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1fb75c: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fb75cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x1fb760: 0x24a5bf60  addiu       $a1, $a1, -0x40A0
    ctx->pc = 0x1fb760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950752));
    // 0x1fb764: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1fb764u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fb768: 0x2508b210  addiu       $t0, $t0, -0x4DF0
    ctx->pc = 0x1fb768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947344));
    // 0x1fb76c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fb76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fb770: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1fb770u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb774: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1fb774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1fb778: 0xc07ee16  jal         func_1FB858
    ctx->pc = 0x1FB778u;
    SET_GPR_U32(ctx, 31, 0x1FB780u);
    ctx->pc = 0x1FB77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB778u;
    // 0x1fb77c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB858u, 0x1FB778u, 0x1FB780u)) {
        return;
    }
    ctx->pc = 0x1FB780u;
label_1fb780:
    // 0x1fb780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb784: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1fb784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fb788: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB788u;
        // 0x1fb78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB790u;
}
