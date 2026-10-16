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

// Function: sub_001F8150
// Address: 0x1f8150 - 0x1f8190
void sub_001F8150_0x1f8150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8150_0x1f8150");
#endif

    switch (ctx->pc) {
        case 0x1f8168u: goto label_1f8168;
        case 0x1f8184u: goto label_1f8184;
        default: break;
    }

    ctx->pc = 0x1f8150u;

    // 0x1f8150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f8154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f8154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8158: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f8158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f815c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1f815cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f8160: 0xc07dff2  jal         func_1F7FC8
    ctx->pc = 0x1F8160u;
    SET_GPR_U32(ctx, 31, 0x1F8168u);
    ctx->pc = 0x1F8164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8160u;
    // 0x1f8164: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7FC8u, 0x1F8160u, 0x1F8168u)) {
        return;
    }
    ctx->pc = 0x1F8168u;
label_1f8168:
    // 0x1f8168: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x1f8168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1f816c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f816cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8170: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1f8170u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1f8174: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1f8174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f8178: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1f8178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f817c: 0xc07df8c  jal         func_1F7E30
    ctx->pc = 0x1F817Cu;
    SET_GPR_U32(ctx, 31, 0x1F8184u);
    ctx->pc = 0x1F8180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F817Cu;
    // 0x1f8180: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E30u, 0x1F817Cu, 0x1F8184u)) {
        return;
    }
    ctx->pc = 0x1F8184u;
label_1f8184:
    // 0x1f8184: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8188: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8188u;
        // 0x1f818c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8190u;
}
