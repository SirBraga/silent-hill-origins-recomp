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

// Function: sub_001E0090
// Address: 0x1e0090 - 0x1e0178
void sub_001E0090_0x1e0090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0090_0x1e0090");
#endif

    ctx->pc = 0x1e0090u;

    // 0x1e0090: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1e0090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0094: 0x460060c6  mov.s       $f3, $f12
    ctx->pc = 0x1e0094u;
    ctx->f[3] = FPU_MOV_S(ctx->f[12]);
    // 0x1e0098: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1e0098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e009c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e009cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e00a0: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x1e00a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e00a4: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1e00a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e00a8: 0x0  nop
    ctx->pc = 0x1e00a8u;
    // NOP
    // 0x1e00ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E00ACu;
    {
        const bool branch_taken_0x1e00ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e00ac) {
            ctx->pc = 0x1E00B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E00ACu;
            // 0x1e00b0: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E00B4u;
            goto label_1e00b4;
        }
    }
    ctx->pc = 0x1E00B4u;
label_1e00b4:
    // 0x1e00b4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1e00b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1e00b8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e00b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e00bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e00bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e00c0: 0x0  nop
    ctx->pc = 0x1e00c0u;
    // NOP
    // 0x1e00c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e00c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e00c8: 0x0  nop
    ctx->pc = 0x1e00c8u;
    // NOP
    // 0x1e00cc: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1E00CCu;
    {
        const bool branch_taken_0x1e00cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e00cc) {
            ctx->pc = 0x1E00D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E00CCu;
            // 0x1e00d0: 0xc4a00008  lwc1        $f0, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E00E8u;
            goto label_1e00e8;
        }
    }
    ctx->pc = 0x1E00D4u;
    // 0x1e00d4: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1e00d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1e00d8: 0x0  nop
    ctx->pc = 0x1e00d8u;
    // NOP
    // 0x1e00dc: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1e00dcu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1e00e0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e00e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e00e4: 0x0  nop
    ctx->pc = 0x1e00e4u;
    // NOP
label_1e00e8:
    // 0x1e00e8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1e00e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e00ec: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1e00ecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1e00f0: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x1e00f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e00f4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1e00f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e00f8: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x1e00f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e00fc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e00fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e0100: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1e0100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e0104: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1e0104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0108: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x1e0108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e010c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e010cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e0110: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1e0110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1e0114: 0xc4c30014  lwc1        $f3, 0x14($a2)
    ctx->pc = 0x1e0114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0118: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1e0118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e011c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1e011cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1e0120: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x1e0120u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x1e0124: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x1e0124u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x1e0128: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x1e0128u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e012c: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x1e012cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x1e0130: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1e0130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e0134: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x1e0134u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1e0138: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1e0138u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e013c: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1e013cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1e0140: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e0140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0144: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1e0144u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1e0148: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x1e0148u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e014c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1e014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0150: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e0150u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e0154: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1e0154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e0158: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1e0158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e015c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e015cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0160: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1e0160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1e0164: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1e0164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0168: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e0168u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e016c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E016Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E016Cu;
        // 0x1e0170: 0xe4830014  swc1        $f3, 0x14($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E016Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0174u;
    // 0x1e0174: 0x0  nop
    ctx->pc = 0x1e0174u;
    // NOP
    ctx->pc = 0x1e0178u;
}
