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

// Function: sub_0024B2C8
// Address: 0x24b2c8 - 0x24b378
void sub_0024B2C8_0x24b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B2C8_0x24b2c8");
#endif

    ctx->pc = 0x24b2c8u;

    // 0x24b2c8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x24b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24b2cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24b2d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x24b2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24b2d4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24b2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b2d8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x24b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x24b2dc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x24b2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b2e0: 0x46031141  sub.s       $f5, $f2, $f3
    ctx->pc = 0x24b2e0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x24b2e4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x24b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b2e8: 0x46030a41  sub.s       $f9, $f1, $f3
    ctx->pc = 0x24b2e8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x24b2ec: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x24b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24b2f0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24b2f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24b2f4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x24b2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b2f8: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x24b2f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x24b2fc: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x24b2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24b300: 0x46094a42  mul.s       $f9, $f9, $f9
    ctx->pc = 0x24b300u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x24b304: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x24b304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24b308: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x24b308u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x24b30c: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x24b30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b310: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x24b310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24b314: 0x46030a81  sub.s       $f10, $f1, $f3
    ctx->pc = 0x24b314u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x24b318: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x24b318u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x24b31c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x24b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x24b320: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x24b320u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x24b324: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x24b324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b328: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x24b328u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24b32c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24b330: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x24b330u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x24b334: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x24b334u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x24b338: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x24b338u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x24b33c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x24b33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24b340: 0x46054a40  add.s       $f9, $f9, $f5
    ctx->pc = 0x24b340u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x24b344: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x24b344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x24b348: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x24b348u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x24b34c: 0x46083140  add.s       $f5, $f6, $f8
    ctx->pc = 0x24b34cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x24b350: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24b350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24b354: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x24b354u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x24b358: 0x46001280  add.s       $f10, $f2, $f0
    ctx->pc = 0x24b358u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24b35c: 0x46054800  add.s       $f0, $f9, $f5
    ctx->pc = 0x24b35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x24b360: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x24b360u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x24b364: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x24b364u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x24b368: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x24b368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x24b36c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x24b36cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x24b370: 0x3e00008  jr          $ra
    ctx->pc = 0x24B370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B370u;
        // 0x24b374: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B378u;
}
