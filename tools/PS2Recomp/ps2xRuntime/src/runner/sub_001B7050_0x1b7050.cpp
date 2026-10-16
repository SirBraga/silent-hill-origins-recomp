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

// Function: sub_001B7050
// Address: 0x1b7050 - 0x1b70c8
void sub_001B7050_0x1b7050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7050_0x1b7050");
#endif

    ctx->pc = 0x1b7050u;

    // 0x1b7050: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b7050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b7054: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7058: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b7058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b705c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b705cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7060: 0x0  nop
    ctx->pc = 0x1b7060u;
    // NOP
    // 0x1b7064: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B7064u;
    {
        const bool branch_taken_0x1b7064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7064) {
            ctx->pc = 0x1B7068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7064u;
            // 0x1b7068: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B706Cu;
            goto label_1b706c;
        }
    }
    ctx->pc = 0x1B706Cu;
label_1b706c:
    // 0x1b706c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7070: 0x3c0143ff  lui         $at, 0x43FF
    ctx->pc = 0x1b7070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17407 << 16));
    // 0x1b7074: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7078: 0x0  nop
    ctx->pc = 0x1b7078u;
    // NOP
    // 0x1b707c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b707cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7080: 0x0  nop
    ctx->pc = 0x1b7080u;
    // NOP
    // 0x1b7084: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B7084u;
    {
        const bool branch_taken_0x1b7084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7084) {
            ctx->pc = 0x1B7088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7084u;
            // 0x1b7088: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B708Cu;
            goto label_1b708c;
        }
    }
    ctx->pc = 0x1B708Cu;
label_1b708c:
    // 0x1b708c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1b708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7090: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1b7090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7094: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b7094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7098: 0x0  nop
    ctx->pc = 0x1b7098u;
    // NOP
    // 0x1b709c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B709Cu;
    {
        const bool branch_taken_0x1b709c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b709c) {
            ctx->pc = 0x1B70A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B709Cu;
            // 0x1b70a0: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B70A4u;
            goto label_1b70a4;
        }
    }
    ctx->pc = 0x1B70A4u;
label_1b70a4:
    // 0x1b70a4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1b70a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b70a8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1b70a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b70ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b70acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b70b0: 0x0  nop
    ctx->pc = 0x1b70b0u;
    // NOP
    // 0x1b70b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B70B4u;
    {
        const bool branch_taken_0x1b70b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b70b4) {
            ctx->pc = 0x1B70B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B70B4u;
            // 0x1b70b8: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B70BCu;
            goto label_1b70bc;
        }
    }
    ctx->pc = 0x1B70BCu;
label_1b70bc:
    // 0x1b70bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B70BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B70BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B70C4u;
    // 0x1b70c4: 0x0  nop
    ctx->pc = 0x1b70c4u;
    // NOP
    ctx->pc = 0x1b70c8u;
}
