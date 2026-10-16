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

// Function: sub_001883B8
// Address: 0x1883b8 - 0x188410
void sub_001883B8_0x1883b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001883B8_0x1883b8");
#endif

    switch (ctx->pc) {
        case 0x188404u: goto label_188404;
        default: break;
    }

    ctx->pc = 0x1883b8u;

    // 0x1883b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1883b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1883bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1883bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1883c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1883c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1883c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1883c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1883c8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1883c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1883cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1883ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1883d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1883d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1883d4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1883d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1883d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1883d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1883dc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1883dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1883e0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1883e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1883e4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1883e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x1883e8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1883e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1883ec: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1883ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1883f0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1883f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1883f4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1883F4u;
    {
        const bool branch_taken_0x1883f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883F4u;
        // 0x1883f8: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883f4) {
            ctx->pc = 0x188404u;
            goto label_188404;
        }
    }
    ctx->pc = 0x1883FCu;
    // 0x1883fc: 0xc062104  jal         func_188410
    ctx->pc = 0x1883FCu;
    SET_GPR_U32(ctx, 31, 0x188404u);
    ctx->pc = 0x188410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188410u, 0x1883FCu, 0x188404u)) {
        return;
    }
    ctx->pc = 0x188404u;
label_188404:
    // 0x188404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188408: 0x3e00008  jr          $ra
    ctx->pc = 0x188408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188408u;
        // 0x18840c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188410u;
}
