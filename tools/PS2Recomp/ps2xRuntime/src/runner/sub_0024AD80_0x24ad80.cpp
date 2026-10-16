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

// Function: sub_0024AD80
// Address: 0x24ad80 - 0x24ae78
void sub_0024AD80_0x24ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AD80_0x24ad80");
#endif

    ctx->pc = 0x24ad80u;

    // 0x24ad80: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ad84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ad88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24ad88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad8c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x24ad8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24ad90: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x24ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ad94: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x24ad94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24ad98: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x24ad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ad9c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x24ad9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24ada0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ada4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x24ada4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x24ada8: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x24ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24adac: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x24adacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x24adb0: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x24adb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24adb4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x24adb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x24adb8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x24adb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24adbc: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x24adbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x24adc0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x24adc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24adc4: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x24adc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x24adc8: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x24adc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24adcc: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x24adccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x24add0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24add0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24add4: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x24add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24add8: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x24add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24addc: 0xc4a30034  lwc1        $f3, 0x34($a1)
    ctx->pc = 0x24addcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ade0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24ade0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24ade4: 0xc4a20038  lwc1        $f2, 0x38($a1)
    ctx->pc = 0x24ade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ade8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x24ade8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24adec: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x24adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24adf0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x24adf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24adf4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x24adf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x24adf8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24adf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24adfc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24adfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24ae00: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x24ae00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x24ae04: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x24ae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ae08: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x24ae08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ae0c: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x24ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ae10: 0xc4a30034  lwc1        $f3, 0x34($a1)
    ctx->pc = 0x24ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ae14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24ae14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24ae18: 0xc4a20038  lwc1        $f2, 0x38($a1)
    ctx->pc = 0x24ae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ae1c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x24ae1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24ae20: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x24ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ae24: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24ae24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24ae28: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x24ae28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x24ae2c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24ae2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24ae30: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x24ae30u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x24ae34: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x24ae34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x24ae38: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x24ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ae3c: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x24ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ae40: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x24ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ae44: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x24ae44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ae48: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24ae48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24ae4c: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x24ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ae50: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x24ae50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x24ae54: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x24ae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ae58: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24ae58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24ae5c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x24ae5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24ae60: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x24ae60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24ae64: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x24ae64u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x24ae68: 0xe4820038  swc1        $f2, 0x38($a0)
    ctx->pc = 0x24ae68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x24ae6c: 0x3e00008  jr          $ra
    ctx->pc = 0x24AE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE6Cu;
        // 0x24ae70: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AE74u;
    // 0x24ae74: 0x0  nop
    ctx->pc = 0x24ae74u;
    // NOP
    ctx->pc = 0x24ae78u;
}
