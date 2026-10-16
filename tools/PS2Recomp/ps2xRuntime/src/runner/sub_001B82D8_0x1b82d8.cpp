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

// Function: sub_001B82D8
// Address: 0x1b82d8 - 0x1b8310
void sub_001B82D8_0x1b82d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B82D8_0x1b82d8");
#endif

    switch (ctx->pc) {
        case 0x1b8304u: goto label_1b8304;
        default: break;
    }

    ctx->pc = 0x1b82d8u;

    // 0x1b82d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b82d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b82dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b82dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b82e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b82e4: 0x8c4402b4  lw          $a0, 0x2B4($v0)
    ctx->pc = 0x1b82e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x1b82e8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B82E8u;
    {
        const bool branch_taken_0x1b82e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82E8u;
        // 0x1b82ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82e8) {
            ctx->pc = 0x1B8304u;
            goto label_1b8304;
        }
    }
    ctx->pc = 0x1B82F0u;
    // 0x1b82f0: 0xc44d02e4  lwc1        $f13, 0x2E4($v0)
    ctx->pc = 0x1b82f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b82f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b82f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b82f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b82f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b82fc: 0xc06d1c6  jal         func_1B4718
    ctx->pc = 0x1B82FCu;
    SET_GPR_U32(ctx, 31, 0x1B8304u);
    ctx->pc = 0x1B8300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82FCu;
    // 0x1b8300: 0x8c4502b0  lw          $a1, 0x2B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4718u, 0x1B82FCu, 0x1B8304u)) {
        return;
    }
    ctx->pc = 0x1B8304u;
label_1b8304:
    // 0x1b8304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8308: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8308u;
        // 0x1b830c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8310u;
}
