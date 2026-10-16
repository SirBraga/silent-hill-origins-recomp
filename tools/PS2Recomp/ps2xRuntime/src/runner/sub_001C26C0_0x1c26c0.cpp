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

// Function: sub_001C26C0
// Address: 0x1c26c0 - 0x1c26f8
void sub_001C26C0_0x1c26c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C26C0_0x1c26c0");
#endif

    ctx->pc = 0x1c26c0u;

    // 0x1c26c0: 0x8c820264  lw          $v0, 0x264($a0)
    ctx->pc = 0x1c26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
    // 0x1c26c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C26C4u;
    {
        const bool branch_taken_0x1c26c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26C4u;
        // 0x1c26c8: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26c4) {
            ctx->pc = 0x1C26D8u;
            goto label_1c26d8;
        }
    }
    ctx->pc = 0x1C26CCu;
    // 0x1c26cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c26d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C26D0u;
    {
        const bool branch_taken_0x1c26d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26D0u;
        // 0x1c26d4: 0xac820268  sw          $v0, 0x268($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26d0) {
            ctx->pc = 0x1C26DCu;
            goto label_1c26dc;
        }
    }
    ctx->pc = 0x1C26D8u;
label_1c26d8:
    // 0x1c26d8: 0xac800268  sw          $zero, 0x268($a0)
    ctx->pc = 0x1c26d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 0));
label_1c26dc:
    // 0x1c26dc: 0x8c8202b4  lw          $v0, 0x2B4($a0)
    ctx->pc = 0x1c26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1c26e0: 0xc48002d8  lwc1        $f0, 0x2D8($a0)
    ctx->pc = 0x1c26e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c26e4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1c26e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c26e8: 0xc48102dc  lwc1        $f1, 0x2DC($a0)
    ctx->pc = 0x1c26e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c26ec: 0x8c8202b8  lw          $v0, 0x2B8($a0)
    ctx->pc = 0x1c26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 696)));
    // 0x1c26f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C26F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26F0u;
        // 0x1c26f4: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C26F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C26F8u;
}
