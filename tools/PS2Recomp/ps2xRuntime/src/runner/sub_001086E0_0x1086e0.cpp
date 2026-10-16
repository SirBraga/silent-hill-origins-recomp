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

// Function: sub_001086E0
// Address: 0x1086e0 - 0x108720
void sub_001086E0_0x1086e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001086E0_0x1086e0");
#endif

    ctx->pc = 0x1086e0u;

    // 0x1086e0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1086e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1086e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1086E4u;
    {
        const bool branch_taken_0x1086e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1086e4) {
            ctx->pc = 0x1086F8u;
            goto label_1086f8;
        }
    }
    ctx->pc = 0x1086ECu;
    // 0x1086ec: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1086ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1086f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1086F0u;
    {
        const bool branch_taken_0x1086f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1086f0) {
            ctx->pc = 0x1086F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1086F0u;
            // 0x1086f4: 0xc4810040  lwc1        $f1, 0x40($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x108704u;
            goto label_108704;
        }
    }
    ctx->pc = 0x1086F8u;
label_1086f8:
    // 0x1086f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1086f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1086fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1086FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1086FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108704u;
label_108704:
    // 0x108704: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x108704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108708: 0x0  nop
    ctx->pc = 0x108708u;
    // NOP
    // 0x10870c: 0x0  nop
    ctx->pc = 0x10870cu;
    // NOP
    // 0x108710: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x108710u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x108714: 0x3e00008  jr          $ra
    ctx->pc = 0x108714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10871Cu;
    // 0x10871c: 0x0  nop
    ctx->pc = 0x10871cu;
    // NOP
    ctx->pc = 0x108720u;
}
