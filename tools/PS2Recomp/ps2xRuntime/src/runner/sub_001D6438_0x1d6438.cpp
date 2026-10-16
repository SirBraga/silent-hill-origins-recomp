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

// Function: sub_001D6438
// Address: 0x1d6438 - 0x1d6478
void sub_001D6438_0x1d6438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6438_0x1d6438");
#endif

    switch (ctx->pc) {
        case 0x1d6464u: goto label_1d6464;
        default: break;
    }

    ctx->pc = 0x1d6438u;

    // 0x1d6438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d643c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d643cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d6440: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d6444: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d6444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d6448: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d6448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d644c: 0x8c679b80  lw          $a3, -0x6480($v1)
    ctx->pc = 0x1d644cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x339B80u));
    // 0x1d6450: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d6450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d645c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D645Cu;
    SET_GPR_U32(ctx, 31, 0x1D6464u);
    ctx->pc = 0x1D6460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D645Cu;
    // 0x1d6460: 0x24451098  addiu       $a1, $v0, 0x1098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D645Cu, 0x1D6464u)) {
        return;
    }
    ctx->pc = 0x1D6464u;
label_1d6464:
    // 0x1d6464: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d6464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d646c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d646cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6470: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6470u;
        // 0x1d6474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6478u;
}
