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

// Function: sub_00168968
// Address: 0x168968 - 0x1689f0
void sub_00168968_0x168968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168968_0x168968");
#endif

    ctx->pc = 0x168968u;

    // 0x168968: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x168968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x16896c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x16896Cu;
    {
        const bool branch_taken_0x16896c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16896c) {
            ctx->pc = 0x168970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16896Cu;
            // 0x168970: 0xc4800064  lwc1        $f0, 0x64($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x168998u;
            goto label_168998;
        }
    }
    ctx->pc = 0x168974u;
    // 0x168974: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x168974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168978: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x168978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16897c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x16897cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x168980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x168980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x168984: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x168984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x168988: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x168988u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16898c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x16898cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168990: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x168990u;
    {
        const bool branch_taken_0x168990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168990u;
        // 0x168994: 0xe481005c  swc1        $f1, 0x5C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168990) {
            ctx->pc = 0x1689B0u;
            goto label_1689b0;
        }
    }
    ctx->pc = 0x168998u;
label_168998:
    // 0x168998: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x168998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16899c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x16899cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1689a0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1689a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1689a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1689a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1689a8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1689a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1689ac: 0xe481005c  swc1        $f1, 0x5C($a0)
    ctx->pc = 0x1689acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_1689b0:
    // 0x1689b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1689B0u;
    {
        const bool branch_taken_0x1689b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1689b0) {
            ctx->pc = 0x1689B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1689B0u;
            // 0x1689b4: 0xe482005c  swc1        $f2, 0x5C($a0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1689B8u;
            goto label_1689b8;
        }
    }
    ctx->pc = 0x1689B8u;
label_1689b8:
    // 0x1689b8: 0xc483005c  lwc1        $f3, 0x5C($a0)
    ctx->pc = 0x1689b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1689bc: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x1689bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1689c0: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x1689c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1689c4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1689c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1689c8: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x1689c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x1689cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1689ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1689d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1689d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1689d4: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1689d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1689d8: 0xe481006c  swc1        $f1, 0x6C($a0)
    ctx->pc = 0x1689d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x1689dc: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x1689dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x1689e0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1689e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1689e4: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x1689e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x1689e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1689E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1689E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1689F0u;
}
