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

// Function: sub_001EF368
// Address: 0x1ef368 - 0x1ef3a0
void sub_001EF368_0x1ef368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF368_0x1ef368");
#endif

    ctx->pc = 0x1ef368u;

    // 0x1ef368: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1ef368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef36c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef36cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef370: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1ef370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef374: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1ef374u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1ef378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef37c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ef37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ef380: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1ef380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1ef384: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ef384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef388: 0x0  nop
    ctx->pc = 0x1ef388u;
    // NOP
    // 0x1ef38c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF38Cu;
    {
        const bool branch_taken_0x1ef38c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF38Cu;
        // 0x1ef390: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef38c) {
            ctx->pc = 0x1EF398u;
            goto label_1ef398;
        }
    }
    ctx->pc = 0x1EF394u;
    // 0x1ef394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef398:
    // 0x1ef398: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF3A0u;
}
