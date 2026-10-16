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

// Function: sub_001EFB30
// Address: 0x1efb30 - 0x1efb90
void sub_001EFB30_0x1efb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFB30_0x1efb30");
#endif

    ctx->pc = 0x1efb30u;

    // 0x1efb30: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1efb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1efb34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1efb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efb38: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1efb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efb3c: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x1efb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efb40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1efb40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1efb44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1efb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1efb48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1efb48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efb4c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1efb4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1efb50: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1efb50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efb54: 0x0  nop
    ctx->pc = 0x1efb54u;
    // NOP
    // 0x1efb58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFB58u;
    {
        const bool branch_taken_0x1efb58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB58u;
        // 0x1efb5c: 0xe482001c  swc1        $f2, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb58) {
            ctx->pc = 0x1EFB64u;
            goto label_1efb64;
        }
    }
    ctx->pc = 0x1EFB60u;
    // 0x1efb60: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1efb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_1efb64:
    // 0x1efb64: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1efb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efb68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1efb68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efb6c: 0x0  nop
    ctx->pc = 0x1efb6cu;
    // NOP
    // 0x1efb70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1efb70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efb74: 0x0  nop
    ctx->pc = 0x1efb74u;
    // NOP
    // 0x1efb78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EFB78u;
    {
        const bool branch_taken_0x1efb78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efb78) {
            ctx->pc = 0x1EFB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFB78u;
            // 0x1efb7c: 0xe481001c  swc1        $f1, 0x1C($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB80u;
            goto label_1efb80;
        }
    }
    ctx->pc = 0x1EFB80u;
label_1efb80:
    // 0x1efb80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efb84: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1efb84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1efb88: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB88u;
        // 0x1efb8c: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFB90u;
}
