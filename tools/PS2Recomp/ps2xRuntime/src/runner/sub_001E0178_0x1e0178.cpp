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

// Function: sub_001E0178
// Address: 0x1e0178 - 0x1e0208
void sub_001E0178_0x1e0178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0178_0x1e0178");
#endif

    ctx->pc = 0x1e0178u;

    // 0x1e0178: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1e0178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e017c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0180: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1e0180u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1e0184: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x1e0184u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e0188: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1e0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e018c: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x1e018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0190: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e0190u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e0194: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1e0194u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e0198: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1e0198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e019c: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x1e019cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e01a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e01a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e01a4: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1e01a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1e01a8: 0xc4c30014  lwc1        $f3, 0x14($a2)
    ctx->pc = 0x1e01a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e01ac: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1e01acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e01b0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1e01b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1e01b4: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x1e01b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x1e01b8: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x1e01b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x1e01bc: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x1e01bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e01c0: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x1e01c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x1e01c4: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1e01c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e01c8: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x1e01c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1e01cc: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1e01ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e01d0: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1e01d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1e01d4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e01d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e01d8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1e01d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1e01dc: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x1e01dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e01e0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1e01e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e01e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e01e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e01e8: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1e01e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e01ec: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1e01ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e01f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e01f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e01f4: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1e01f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1e01f8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1e01f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e01fc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e01fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e0200: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0200u;
        // 0x1e0204: 0xe4830014  swc1        $f3, 0x14($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0208u;
}
