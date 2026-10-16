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

// Function: sub_002B46A8
// Address: 0x2b46a8 - 0x2b4740
void sub_002B46A8_0x2b46a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B46A8_0x2b46a8");
#endif

    ctx->pc = 0x2b46a8u;

    // 0x2b46a8: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x2b46a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b46ac: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b46acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b46b0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b46b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b46b4: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2b46b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b46b8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b46b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b46bc: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2b46bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b46c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b46c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b46c4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2b46c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b46c8: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2b46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b46cc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b46ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b46d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b46d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b46d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b46d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b46d8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2b46d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b46dc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2b46dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2b46e0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2b46e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2b46e4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2b46e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2b46e8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2b46e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b46ec: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2b46ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b46f0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b46f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b46f4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2b46f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b46f8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2b46f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b46fc: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2b46fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4700: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2b4700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4704: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b4704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b4708: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x2b4708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b470c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2b470cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2b4710: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2b4710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4714: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b4714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b4718: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2b4718u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2b471c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b471cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b4720: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b4720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b4724: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b4724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b4728: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b4728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b472c: 0x46000004  c1          0x4
    ctx->pc = 0x2b472cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b4730: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b4730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b4734: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4734u;
        // 0x2b4738: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B473Cu;
    // 0x2b473c: 0x0  nop
    ctx->pc = 0x2b473cu;
    // NOP
    ctx->pc = 0x2b4740u;
}
