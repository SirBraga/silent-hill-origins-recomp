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

// Function: sub_00171290
// Address: 0x171290 - 0x1712c8
void sub_00171290_0x171290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171290_0x171290");
#endif

    switch (ctx->pc) {
        case 0x1712a4u: goto label_1712a4;
        case 0x1712b8u: goto label_1712b8;
        default: break;
    }

    ctx->pc = 0x171290u;

    // 0x171290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171294: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x171298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17129c: 0xc05c57a  jal         func_1715E8
    ctx->pc = 0x17129Cu;
    SET_GPR_U32(ctx, 31, 0x1712A4u);
    ctx->pc = 0x1712A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17129Cu;
    // 0x1712a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1715E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1715E8u, 0x17129Cu, 0x1712A4u)) {
        return;
    }
    ctx->pc = 0x1712A4u;
label_1712a4:
    // 0x1712a4: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x1712a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x1712a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1712A8u;
    {
        const bool branch_taken_0x1712a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1712a8) {
            ctx->pc = 0x1712ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1712A8u;
            // 0x1712ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1712BCu;
            goto label_1712bc;
        }
    }
    ctx->pc = 0x1712B0u;
    // 0x1712b0: 0xc05c3bc  jal         func_170EF0
    ctx->pc = 0x1712B0u;
    SET_GPR_U32(ctx, 31, 0x1712B8u);
    ctx->pc = 0x1712B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712B0u;
    // 0x1712b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170EF0u, 0x1712B0u, 0x1712B8u)) {
        return;
    }
    ctx->pc = 0x1712B8u;
label_1712b8:
    // 0x1712b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1712b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1712bc:
    // 0x1712bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1712bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1712c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1712C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1712C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712C0u;
        // 0x1712c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1712C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1712C8u;
}
