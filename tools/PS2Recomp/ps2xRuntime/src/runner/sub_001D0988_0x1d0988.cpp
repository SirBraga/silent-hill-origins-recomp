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

// Function: sub_001D0988
// Address: 0x1d0988 - 0x1d09e0
void sub_001D0988_0x1d0988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0988_0x1d0988");
#endif

    switch (ctx->pc) {
        case 0x1d09a8u: goto label_1d09a8;
        case 0x1d09c0u: goto label_1d09c0;
        default: break;
    }

    ctx->pc = 0x1d0988u;

    // 0x1d0988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d098c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0994: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0994u;
    {
        const bool branch_taken_0x1d0994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0994u;
        // 0x1d0998: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0994) {
            ctx->pc = 0x1D09C8u;
            goto label_1d09c8;
        }
    }
    ctx->pc = 0x1D099Cu;
    // 0x1d099c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d099cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d09a0: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D09A0u;
    SET_GPR_U32(ctx, 31, 0x1D09A8u);
    ctx->pc = 0x1D09A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D09A0u;
    // 0x1d09a4: 0x24a50a38  addiu       $a1, $a1, 0xA38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D09A0u, 0x1D09A8u)) {
        return;
    }
    ctx->pc = 0x1D09A8u;
label_1d09a8:
    // 0x1d09a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D09A8u;
    {
        const bool branch_taken_0x1d09a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09A8u;
        // 0x1d09ac: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09a8) {
            ctx->pc = 0x1D09CCu;
            goto label_1d09cc;
        }
    }
    ctx->pc = 0x1D09B0u;
    // 0x1d09b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d09b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09b4: 0x24c609e0  addiu       $a2, $a2, 0x9E0
    ctx->pc = 0x1d09b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2528));
    // 0x1d09b8: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D09B8u;
    SET_GPR_U32(ctx, 31, 0x1D09C0u);
    ctx->pc = 0x1D09BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D09B8u;
    // 0x1d09bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D09B8u, 0x1D09C0u)) {
        return;
    }
    ctx->pc = 0x1D09C0u;
label_1d09c0:
    // 0x1d09c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D09C0u;
    {
        const bool branch_taken_0x1d09c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09C0u;
        // 0x1d09c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09c0) {
            ctx->pc = 0x1D09D0u;
            goto label_1d09d0;
        }
    }
    ctx->pc = 0x1D09C8u;
label_1d09c8:
    // 0x1d09c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d09c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d09cc:
    // 0x1d09cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d09ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d09d0:
    // 0x1d09d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d09d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d09d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d09d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d09d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D09D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D09DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09D8u;
        // 0x1d09dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D09D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D09E0u;
}
