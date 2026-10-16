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

// Function: sub_00178A68
// Address: 0x178a68 - 0x178ac8
void sub_00178A68_0x178a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178A68_0x178a68");
#endif

    ctx->pc = 0x178a68u;

    // 0x178a68: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x178a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x178a6c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x178A6Cu;
    {
        const bool branch_taken_0x178a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a6c) {
            ctx->pc = 0x178ABCu;
            goto label_178abc;
        }
    }
    ctx->pc = 0x178A74u;
    // 0x178a74: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x178A74u;
    {
        const bool branch_taken_0x178a74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x178A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A74u;
        // 0x178a78: 0xc481012c  lwc1        $f1, 0x12C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a74) {
            ctx->pc = 0x178A98u;
            goto label_178a98;
        }
    }
    ctx->pc = 0x178A7Cu;
    // 0x178a7c: 0x3c014448  lui         $at, 0x4448
    ctx->pc = 0x178a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17480 << 16));
    // 0x178a80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x178a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178a84: 0x0  nop
    ctx->pc = 0x178a84u;
    // NOP
    // 0x178a88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x178a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178a8c: 0x0  nop
    ctx->pc = 0x178a8cu;
    // NOP
    // 0x178a90: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x178A90u;
    {
        const bool branch_taken_0x178a90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x178A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A90u;
        // 0x178a94: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a90) {
            ctx->pc = 0x178AB4u;
            goto label_178ab4;
        }
    }
    ctx->pc = 0x178A98u;
label_178a98:
    // 0x178a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178a9c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178A9Cu;
    {
        const bool branch_taken_0x178a9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x178AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A9Cu;
        // 0x178aa0: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a9c) {
            ctx->pc = 0x178AB4u;
            goto label_178ab4;
        }
    }
    ctx->pc = 0x178AA4u;
    // 0x178aa4: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x178aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x178aa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x178aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178aac: 0x0  nop
    ctx->pc = 0x178aacu;
    // NOP
    // 0x178ab0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x178ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_178ab4:
    // 0x178ab4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x178ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x178ab8: 0xac62849c  sw          $v0, -0x7B64($v1)
    ctx->pc = 0x178ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935708), GPR_U32(ctx, 2));
label_178abc:
    // 0x178abc: 0x3e00008  jr          $ra
    ctx->pc = 0x178ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178AC4u;
    // 0x178ac4: 0x0  nop
    ctx->pc = 0x178ac4u;
    // NOP
    ctx->pc = 0x178ac8u;
}
