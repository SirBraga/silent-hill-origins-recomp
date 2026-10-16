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

// Function: sub_0024B188
// Address: 0x24b188 - 0x24b220
void sub_0024B188_0x24b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B188_0x24b188");
#endif

    ctx->pc = 0x24b188u;

    // 0x24b188: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x24b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24b18c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x24b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x24b190: 0xc4890010  lwc1        $f9, 0x10($a0)
    ctx->pc = 0x24b190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x24b194: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b198: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x24b198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b19c: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x24b19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x24b1a0: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x24b1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24b1a4: 0x46004882  mul.s       $f2, $f9, $f0
    ctx->pc = 0x24b1a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x24b1a8: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x24b1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24b1ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x24b1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b1b0: 0x460451c2  mul.s       $f7, $f10, $f4
    ctx->pc = 0x24b1b0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x24b1b4: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x24b1b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24b1b8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x24b1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24b1bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24b1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b1c0: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x24b1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24b1c4: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x24b1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24b1c8: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x24b1c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x24b1cc: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x24b1ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x24b1d0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x24b1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x24b1d4: 0x46061902  mul.s       $f4, $f3, $f6
    ctx->pc = 0x24b1d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x24b1d8: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x24b1d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x24b1dc: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x24b1dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x24b1e0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x24b1e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x24b1e4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x24b1e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x24b1e8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x24b1e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x24b1ec: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x24b1ecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x24b1f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x24b1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24b1f4: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x24b1f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24b1f8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x24b1f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24b1fc: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x24b1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24b200: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x24b200u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x24b204: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x24b204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x24b208: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x24b208u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24b20c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x24b20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24b210: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24b210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24b214: 0x3e00008  jr          $ra
    ctx->pc = 0x24B214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B214u;
        // 0x24b218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B21Cu;
    // 0x24b21c: 0x0  nop
    ctx->pc = 0x24b21cu;
    // NOP
    ctx->pc = 0x24b220u;
}
