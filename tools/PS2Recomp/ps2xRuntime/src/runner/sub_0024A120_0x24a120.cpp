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

// Function: sub_0024A120
// Address: 0x24a120 - 0x24a160
void sub_0024A120_0x24a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A120_0x24a120");
#endif

    ctx->pc = 0x24a120u;

    // 0x24a120: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24a120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24a124: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24a124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a128: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x24a128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x24a12c: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x24a12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x24a130: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x24a130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x24a134: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x24a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x24a138: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x24a138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x24a13c: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x24a13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x24a140: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x24a140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x24a144: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x24a144u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24a148: 0xe7ae003c  swc1        $f14, 0x3C($sp)
    ctx->pc = 0x24a148u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x24a14c: 0xe7b00040  swc1        $f16, 0x40($sp)
    ctx->pc = 0x24a14cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24a150: 0xe7b20044  swc1        $f18, 0x44($sp)
    ctx->pc = 0x24a150u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24a154: 0x3e00008  jr          $ra
    ctx->pc = 0x24A154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A154u;
        // 0x24a158: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A15Cu;
    // 0x24a15c: 0x0  nop
    ctx->pc = 0x24a15cu;
    // NOP
    ctx->pc = 0x24a160u;
}
