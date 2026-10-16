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

// Function: sub_0027F400
// Address: 0x27f400 - 0x27f458
void sub_0027F400_0x27f400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F400_0x27f400");
#endif

    switch (ctx->pc) {
        case 0x27f424u: goto label_27f424;
        case 0x27f434u: goto label_27f434;
        case 0x27f444u: goto label_27f444;
        default: break;
    }

    ctx->pc = 0x27f400u;

    // 0x27f400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27f400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f404: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x27f404u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x27f408: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x27f408u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x27f40c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f410: 0x24c6f458  addiu       $a2, $a2, -0xBA8
    ctx->pc = 0x27f410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964312));
    // 0x27f414: 0x24e7f498  addiu       $a3, $a3, -0xB68
    ctx->pc = 0x27f414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964376));
    // 0x27f418: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27f418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f41c: 0xc0895e6  jal         func_225798
    ctx->pc = 0x27F41Cu;
    SET_GPR_U32(ctx, 31, 0x27F424u);
    ctx->pc = 0x27F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F41Cu;
    // 0x27f420: 0x24050122  addiu       $a1, $zero, 0x122 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x27F41Cu, 0x27F424u)) {
        return;
    }
    ctx->pc = 0x27F424u;
label_27f424:
    // 0x27f424: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F424u;
    {
        const bool branch_taken_0x27f424 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F424u;
        // 0x27f428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f424) {
            ctx->pc = 0x27F448u;
            goto label_27f448;
        }
    }
    ctx->pc = 0x27F42Cu;
    // 0x27f42c: 0xc09f860  jal         func_27E180
    ctx->pc = 0x27F42Cu;
    SET_GPR_U32(ctx, 31, 0x27F434u);
    ctx->pc = 0x27E180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E180u, 0x27F42Cu, 0x27F434u)) {
        return;
    }
    ctx->pc = 0x27F434u;
label_27f434:
    // 0x27f434: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F434u;
    {
        const bool branch_taken_0x27f434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f434) {
            ctx->pc = 0x27F438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F434u;
            // 0x27f438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F448u;
            goto label_27f448;
        }
    }
    ctx->pc = 0x27F43Cu;
    // 0x27f43c: 0xc09fc0e  jal         func_27F038
    ctx->pc = 0x27F43Cu;
    SET_GPR_U32(ctx, 31, 0x27F444u);
    ctx->pc = 0x27F038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F038u, 0x27F43Cu, 0x27F444u)) {
        return;
    }
    ctx->pc = 0x27F444u;
label_27f444:
    // 0x27f444: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27f444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27f448:
    // 0x27f448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f44c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F44Cu;
        // 0x27f450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F454u;
    // 0x27f454: 0x0  nop
    ctx->pc = 0x27f454u;
    // NOP
    ctx->pc = 0x27f458u;
}
