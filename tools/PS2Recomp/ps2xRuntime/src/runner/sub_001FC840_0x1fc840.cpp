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

// Function: sub_001FC840
// Address: 0x1fc840 - 0x1fc8a0
void sub_001FC840_0x1fc840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC840_0x1fc840");
#endif

    switch (ctx->pc) {
        case 0x1fc880u: goto label_1fc880;
        case 0x1fc888u: goto label_1fc888;
        default: break;
    }

    ctx->pc = 0x1fc840u;

    // 0x1fc840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc844: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1fc844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1fc848: 0x8c451a90  lw          $a1, 0x1A90($v0)
    ctx->pc = 0x1fc848u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x701A90u));
    // 0x1fc84c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1fc84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1fc850: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fc850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fc854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc858: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1fc858u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1fc85c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fc860: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1fc860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1fc864: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC864u;
    {
        const bool branch_taken_0x1fc864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC864u;
        // 0x1fc868: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc864) {
            ctx->pc = 0x1FC880u;
            goto label_1fc880;
        }
    }
    ctx->pc = 0x1FC86Cu;
    // 0x1fc86c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fc870: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC870u;
    {
        const bool branch_taken_0x1fc870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc870) {
            ctx->pc = 0x1FC880u;
            goto label_1fc880;
        }
    }
    ctx->pc = 0x1FC878u;
    // 0x1fc878: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1FC878u;
    SET_GPR_U32(ctx, 31, 0x1FC880u);
    ctx->pc = 0x1FC87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC878u;
    // 0x1fc87c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1FC878u, 0x1FC880u)) {
        return;
    }
    ctx->pc = 0x1FC880u;
label_1fc880:
    // 0x1fc880: 0xc0810bc  jal         func_2042F0
    ctx->pc = 0x1FC880u;
    SET_GPR_U32(ctx, 31, 0x1FC888u);
    ctx->pc = 0x1FC884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC880u;
    // 0x1fc884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2042F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2042F0u, 0x1FC880u, 0x1FC888u)) {
        return;
    }
    ctx->pc = 0x1FC888u;
label_1fc888:
    // 0x1fc888: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fc888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc88c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc890: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC890u;
        // 0x1fc894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC898u;
    // 0x1fc898: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1fc898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fc89c: 0x0  nop
    ctx->pc = 0x1fc89cu;
    // NOP
    ctx->pc = 0x1fc8a0u;
}
