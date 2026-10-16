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

// Function: sub_0024EA20
// Address: 0x24ea20 - 0x24eaa0
void sub_0024EA20_0x24ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EA20_0x24ea20");
#endif

    ctx->pc = 0x24ea20u;

    // 0x24ea20: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24ea20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24ea24: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ea28: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x24ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ea2c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24ea2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24ea30: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x24ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ea34: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x24ea34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24ea38: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24ea38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24ea3c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24ea3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24ea40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24ea40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24ea44: 0x46000104  c1          0x104
    ctx->pc = 0x24ea44u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x24ea48: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x24ea48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ea4c: 0x0  nop
    ctx->pc = 0x24ea4cu;
    // NOP
    // 0x24ea50: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24EA50u;
    {
        const bool branch_taken_0x24ea50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA50u;
        // 0x24ea54: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea50) {
            ctx->pc = 0x24EA70u;
            goto label_24ea70;
        }
    }
    ctx->pc = 0x24EA58u;
    // 0x24ea58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ea58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ea5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ea5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ea60: 0x0  nop
    ctx->pc = 0x24ea60u;
    // NOP
    // 0x24ea64: 0x46040083  div.s       $f2, $f0, $f4
    ctx->pc = 0x24ea64u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x24ea68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24EA68u;
    {
        const bool branch_taken_0x24ea68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA68u;
        // 0x24ea6c: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea68) {
            ctx->pc = 0x24EA78u;
            goto label_24ea78;
        }
    }
    ctx->pc = 0x24EA70u;
label_24ea70:
    // 0x24ea70: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24ea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ea74: 0x0  nop
    ctx->pc = 0x24ea74u;
    // NOP
label_24ea78:
    // 0x24ea78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24ea78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24ea7c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24ea7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24ea80: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x24ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ea84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24ea84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24ea88: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x24ea88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24ea8c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ea90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24ea90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24ea94: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x24ea94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24ea98: 0x3e00008  jr          $ra
    ctx->pc = 0x24EA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA98u;
        // 0x24ea9c: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EAA0u;
}
