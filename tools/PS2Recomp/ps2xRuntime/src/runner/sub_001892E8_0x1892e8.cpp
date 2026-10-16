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

// Function: sub_001892E8
// Address: 0x1892e8 - 0x189328
void sub_001892E8_0x1892e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001892E8_0x1892e8");
#endif

    switch (ctx->pc) {
        case 0x189308u: goto label_189308;
        case 0x189318u: goto label_189318;
        default: break;
    }

    ctx->pc = 0x1892e8u;

    // 0x1892e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1892e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1892ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1892ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1892f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1892f4: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x1892f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1892f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1892F8u;
    {
        const bool branch_taken_0x1892f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1892FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892F8u;
        // 0x1892fc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1892f8) {
            ctx->pc = 0x189310u;
            goto label_189310;
        }
    }
    ctx->pc = 0x189300u;
    // 0x189300: 0xc04d304  jal         func_134C10
    ctx->pc = 0x189300u;
    SET_GPR_U32(ctx, 31, 0x189308u);
    ctx->pc = 0x189304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189300u;
    // 0x189304: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134C10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x134C10u, 0x189300u, 0x189308u)) {
        return;
    }
    ctx->pc = 0x189308u;
label_189308:
    // 0x189308: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189308u;
    {
        const bool branch_taken_0x189308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189308u;
        // 0x18930c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189308) {
            ctx->pc = 0x18931Cu;
            goto label_18931c;
        }
    }
    ctx->pc = 0x189310u;
label_189310:
    // 0x189310: 0xc0623b4  jal         func_188ED0
    ctx->pc = 0x189310u;
    SET_GPR_U32(ctx, 31, 0x189318u);
    ctx->pc = 0x189314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189310u;
    // 0x189314: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188ED0u, 0x189310u, 0x189318u)) {
        return;
    }
    ctx->pc = 0x189318u;
label_189318:
    // 0x189318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18931c:
    // 0x18931c: 0x3e00008  jr          $ra
    ctx->pc = 0x18931Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18931Cu;
        // 0x189320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18931Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189324u;
    // 0x189324: 0x0  nop
    ctx->pc = 0x189324u;
    // NOP
    ctx->pc = 0x189328u;
}
