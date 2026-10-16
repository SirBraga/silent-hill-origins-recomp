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

// Function: sub_001B6CE0
// Address: 0x1b6ce0 - 0x1b6d10
void sub_001B6CE0_0x1b6ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6CE0_0x1b6ce0");
#endif

    ctx->pc = 0x1b6ce0u;

    // 0x1b6ce0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6CE0u;
    {
        const bool branch_taken_0x1b6ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CE0u;
        // 0x1b6ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ce0) {
            ctx->pc = 0x1B6D08u;
            goto label_1b6d08;
        }
    }
    ctx->pc = 0x1B6CE8u;
    // 0x1b6ce8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1b6ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6cec: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1b6cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6cf0: 0xc482029c  lwc1        $f2, 0x29C($a0)
    ctx->pc = 0x1b6cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6cf4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b6cf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b6cf8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1b6cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6cfc: 0x0  nop
    ctx->pc = 0x1b6cfcu;
    // NOP
    // 0x1b6d00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6D00u;
    {
        const bool branch_taken_0x1b6d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6d00) {
            ctx->pc = 0x1B6D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6D00u;
            // 0x1b6d04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6D08u;
            goto label_1b6d08;
        }
    }
    ctx->pc = 0x1B6D08u;
label_1b6d08:
    // 0x1b6d08: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6D10u;
}
