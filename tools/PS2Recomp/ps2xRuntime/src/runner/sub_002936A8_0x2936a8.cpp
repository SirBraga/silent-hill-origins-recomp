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

// Function: sub_002936A8
// Address: 0x2936a8 - 0x293728
void sub_002936A8_0x2936a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002936A8_0x2936a8");
#endif

    ctx->pc = 0x2936a8u;

    // 0x2936a8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2936a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2936ac: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2936acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2936b0: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2936b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2936b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2936b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2936b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2936b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2936bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2936bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2936c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2936c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2936c4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2936c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2936c8: 0x46000004  c1          0x4
    ctx->pc = 0x2936c8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2936cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2936ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2936d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2936d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2936d4: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x2936d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2936d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2936d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2936dc: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2936dcu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[0]);
    // 0x2936e0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2936e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2936e4: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2936e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2936e8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2936e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2936ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2936ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2936f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2936f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2936f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2936f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2936f8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2936f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2936fc: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2936fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293700: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x293700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293704: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x293704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x293708: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x293708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29370c: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x29370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293710: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x293710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293714: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x293714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x293718: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x293718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29371c: 0x3e00008  jr          $ra
    ctx->pc = 0x29371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29371Cu;
        // 0x293720: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29371Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293724u;
    // 0x293724: 0x0  nop
    ctx->pc = 0x293724u;
    // NOP
    ctx->pc = 0x293728u;
}
