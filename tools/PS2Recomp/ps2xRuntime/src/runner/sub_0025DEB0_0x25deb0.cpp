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

// Function: sub_0025DEB0
// Address: 0x25deb0 - 0x25def8
void sub_0025DEB0_0x25deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DEB0_0x25deb0");
#endif

    switch (ctx->pc) {
        case 0x25dee4u: goto label_25dee4;
        default: break;
    }

    ctx->pc = 0x25deb0u;

    // 0x25deb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25deb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25deb4: 0x8f8285f8  lw          $v0, -0x7A08($gp)
    ctx->pc = 0x25deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x25deb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25deb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25debc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25debcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25dec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25dec4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25dec8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25DEC8u;
    {
        const bool branch_taken_0x25dec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEC8u;
        // 0x25decc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dec8) {
            ctx->pc = 0x25DEE4u;
            goto label_25dee4;
        }
    }
    ctx->pc = 0x25DED0u;
    // 0x25ded0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x25ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x25ded4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DED4u;
    {
        const bool branch_taken_0x25ded4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DED4u;
        // 0x25ded8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ded4) {
            ctx->pc = 0x25DEE8u;
            goto label_25dee8;
        }
    }
    ctx->pc = 0x25DEDCu;
    // 0x25dedc: 0xc097922  jal         func_25E488
    ctx->pc = 0x25DEDCu;
    SET_GPR_U32(ctx, 31, 0x25DEE4u);
    ctx->pc = 0x25DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DEDCu;
    // 0x25dee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E488u, 0x25DEDCu, 0x25DEE4u)) {
        return;
    }
    ctx->pc = 0x25DEE4u;
label_25dee4:
    // 0x25dee4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25dee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25dee8:
    // 0x25dee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25dee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25deec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25deecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25def0: 0x3e00008  jr          $ra
    ctx->pc = 0x25DEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEF0u;
        // 0x25def4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DEF8u;
}
