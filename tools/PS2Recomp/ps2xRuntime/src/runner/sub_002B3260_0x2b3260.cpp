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

// Function: sub_002B3260
// Address: 0x2b3260 - 0x2b3310
void sub_002B3260_0x2b3260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3260_0x2b3260");
#endif

    ctx->pc = 0x2b3260u;

    // 0x2b3260: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b3260u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b3264: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2b3264u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b3268: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2b3268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b326c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2b326cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b3270: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2b3270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3274: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3278: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2b3278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b327c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2b327cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3280: 0x46016182  mul.s       $f6, $f12, $f1
    ctx->pc = 0x2b3280u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2b3284: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2b3284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b3288: 0x46036ac2  mul.s       $f11, $f13, $f3
    ctx->pc = 0x2b3288u;
    ctx->f[11] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
    // 0x2b328c: 0xc4a9000c  lwc1        $f9, 0xC($a1)
    ctx->pc = 0x2b328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2b3290: 0x46006102  mul.s       $f4, $f12, $f0
    ctx->pc = 0x2b3290u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b3294: 0xc4c8000c  lwc1        $f8, 0xC($a2)
    ctx->pc = 0x2b3294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b3298: 0x460269c2  mul.s       $f7, $f13, $f2
    ctx->pc = 0x2b3298u;
    ctx->f[7] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x2b329c: 0x46096142  mul.s       $f5, $f12, $f9
    ctx->pc = 0x2b329cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
    // 0x2b32a0: 0x46086a82  mul.s       $f10, $f13, $f8
    ctx->pc = 0x2b32a0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[13], ctx->f[8]);
    // 0x2b32a4: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2b32a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2b32a8: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x2b32a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2b32ac: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2b32acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2b32b0: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x2b32b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2b32b4: 0x46096b42  mul.s       $f13, $f13, $f9
    ctx->pc = 0x2b32b4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x2b32b8: 0x46086302  mul.s       $f12, $f12, $f8
    ctx->pc = 0x2b32b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x2b32bc: 0x460b3181  sub.s       $f6, $f6, $f11
    ctx->pc = 0x2b32bcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[11]);
    // 0x2b32c0: 0x460a2941  sub.s       $f5, $f5, $f10
    ctx->pc = 0x2b32c0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[10]);
    // 0x2b32c4: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x2b32c4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x2b32c8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b32c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b32cc: 0xe4a60000  swc1        $f6, 0x0($a1)
    ctx->pc = 0x2b32ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2b32d0: 0x460c6b40  add.s       $f13, $f13, $f12
    ctx->pc = 0x2b32d0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x2b32d4: 0xe4a5000c  swc1        $f5, 0xC($a1)
    ctx->pc = 0x2b32d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2b32d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b32d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b32dc: 0xe4a40018  swc1        $f4, 0x18($a1)
    ctx->pc = 0x2b32dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2b32e0: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2b32e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2b32e4: 0xe4cd000c  swc1        $f13, 0xC($a2)
    ctx->pc = 0x2b32e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2b32e8: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x2b32e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x2b32ec: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x2b32ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b32f0: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2b32f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b32f4: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x2b32f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b32f8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2b32f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b32fc: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x2b32fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b3300: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2b3300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b3304: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3304u;
        // 0x2b3308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B330Cu;
    // 0x2b330c: 0x0  nop
    ctx->pc = 0x2b330cu;
    // NOP
    ctx->pc = 0x2b3310u;
}
