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

// Function: sub_002CBFC0
// Address: 0x2cbfc0 - 0x2cc3e8
void sub_002CBFC0_0x2cbfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBFC0_0x2cbfc0");
#endif

    ctx->pc = 0x2cbfc0u;

    // 0x2cbfc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cbfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cbfc4: 0xc4b30000  lwc1        $f19, 0x0($a1)
    ctx->pc = 0x2cbfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2cbfc8: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2cbfc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2cbfcc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2cbfccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2cbfd0: 0x46139842  mul.s       $f1, $f19, $f19
    ctx->pc = 0x2cbfd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[19], ctx->f[19]);
    // 0x2cbfd4: 0xc4eb0000  lwc1        $f11, 0x0($a3)
    ctx->pc = 0x2cbfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2cbfd8: 0xc4b20004  lwc1        $f18, 0x4($a1)
    ctx->pc = 0x2cbfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2cbfdc: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x2cbfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cbfe0: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x2cbfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x2cbfe4: 0x461290c2  mul.s       $f3, $f18, $f18
    ctx->pc = 0x2cbfe4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[18], ctx->f[18]);
    // 0x2cbfe8: 0xc4b50008  lwc1        $f21, 0x8($a1)
    ctx->pc = 0x2cbfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cbfec: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x2cbfecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2cbff0: 0xc4f10008  lwc1        $f17, 0x8($a3)
    ctx->pc = 0x2cbff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2cbff4: 0x4615a902  mul.s       $f4, $f21, $f21
    ctx->pc = 0x2cbff4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2cbff8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2cbff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2cbffc: 0x461188c2  mul.s       $f3, $f17, $f17
    ctx->pc = 0x2cbffcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
    // 0x2cc000: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cc000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cc004: 0x46040c00  add.s       $f16, $f1, $f4
    ctx->pc = 0x2cc004u;
    ctx->f[16] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2cc008: 0x46030280  add.s       $f10, $f0, $f3
    ctx->pc = 0x2cc008u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2cc00c: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x2cc00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cc010: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2cc010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc014: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2cc014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc018: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2cc018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cc01c: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x2cc01cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cc020: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2cc020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cc024: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2cc024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc028: 0x46022181  sub.s       $f6, $f4, $f2
    ctx->pc = 0x2cc028u;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2cc02c: 0x460019c1  sub.s       $f7, $f3, $f0
    ctx->pc = 0x2cc02cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2cc030: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x2cc030u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cc034: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x2cc034u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cc038: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2cc038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2cc03c: 0x46148032  c.eq.s      $f16, $f20
    ctx->pc = 0x2cc03cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[16], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc040: 0x0  nop
    ctx->pc = 0x2cc040u;
    // NOP
    // 0x2cc044: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2CC044u;
    {
        const bool branch_taken_0x2cc044 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC044u;
        // 0x2cc048: 0xe7a70004  swc1        $f7, 0x4($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc044) {
            ctx->pc = 0x2CC0BCu;
            goto label_2cc0bc;
        }
    }
    ctx->pc = 0x2CC04Cu;
    // 0x2cc04c: 0x46145032  c.eq.s      $f10, $f20
    ctx->pc = 0x2cc04cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc050: 0xe50c0000  swc1        $f12, 0x0($t0)
    ctx->pc = 0x2cc050u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2cc054: 0x450100cb  bc1t        . + 4 + (0xCB << 2)
    ctx->pc = 0x2CC054u;
    {
        const bool branch_taken_0x2cc054 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC054u;
        // 0x2cc058: 0xe5540000  swc1        $f20, 0x0($t2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc054) {
            ctx->pc = 0x2CC384u;
            goto label_2cc384;
        }
    }
    ctx->pc = 0x2CC05Cu;
    // 0x2cc05c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2cc05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc060: 0x460a70c2  mul.s       $f3, $f14, $f10
    ctx->pc = 0x2cc060u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x2cc064: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2cc064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cc068: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2cc068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2cc06c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2cc06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc070: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2cc070u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2cc074: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2cc074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2cc078: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cc078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cc07c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cc07cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc080: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2cc080u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2cc084: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x2cc084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc088: 0x0  nop
    ctx->pc = 0x2cc088u;
    // NOP
    // 0x2cc08c: 0x450300d1  bc1tl       . + 4 + (0xD1 << 2)
    ctx->pc = 0x2CC08Cu;
    {
        const bool branch_taken_0x2cc08c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc08c) {
            ctx->pc = 0x2CC090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC08Cu;
            // 0x2cc090: 0xe52e0000  swc1        $f14, 0x0($t1) (Delay Slot)
            { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC3D4u;
            goto label_2cc3d4;
        }
    }
    ctx->pc = 0x2CC094u;
    // 0x2cc094: 0x460a7802  mul.s       $f0, $f15, $f10
    ctx->pc = 0x2cc094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[10]);
    // 0x2cc098: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cc098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc09c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC09Cu;
    {
        const bool branch_taken_0x2cc09c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc09c) {
            ctx->pc = 0x2CC0B0u;
            goto label_2cc0b0;
        }
    }
    ctx->pc = 0x2CC0A4u;
    // 0x2cc0a4: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2CC0A4u;
    {
        const bool branch_taken_0x2cc0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0A4u;
        // 0x2cc0a8: 0xe52f0000  swc1        $f15, 0x0($t1) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc0a4) {
            ctx->pc = 0x2CC3D4u;
            goto label_2cc3d4;
        }
    }
    ctx->pc = 0x2CC0ACu;
    // 0x2cc0ac: 0x0  nop
    ctx->pc = 0x2cc0acu;
    // NOP
label_2cc0b0:
    // 0x2cc0b0: 0x460a0803  div.s       $f0, $f1, $f10
    ctx->pc = 0x2cc0b0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[10]);
    // 0x2cc0b4: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2CC0B4u;
    {
        const bool branch_taken_0x2cc0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0B4u;
        // 0x2cc0b8: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc0b4) {
            ctx->pc = 0x2CC3D4u;
            goto label_2cc3d4;
        }
    }
    ctx->pc = 0x2CC0BCu;
label_2cc0bc:
    // 0x2cc0bc: 0x46145032  c.eq.s      $f10, $f20
    ctx->pc = 0x2cc0bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc0c0: 0x0  nop
    ctx->pc = 0x2cc0c0u;
    // NOP
    // 0x2cc0c4: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x2CC0C4u;
    {
        const bool branch_taken_0x2cc0c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc0c4) {
            ctx->pc = 0x2CC0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC0C4u;
            // 0x2cc0c8: 0x46059042  mul.s       $f1, $f18, $f5 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[18], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC130u;
            goto label_2cc130;
        }
    }
    ctx->pc = 0x2CC0CCu;
    // 0x2cc0cc: 0xe52e0000  swc1        $f14, 0x0($t1)
    ctx->pc = 0x2cc0ccu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2cc0d0: 0x461060c2  mul.s       $f3, $f12, $f16
    ctx->pc = 0x2cc0d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[16]);
    // 0x2cc0d4: 0xe5540000  swc1        $f20, 0x0($t2)
    ctx->pc = 0x2cc0d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2cc0d8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2cc0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc0dc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2cc0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cc0e0: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2cc0e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2cc0e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2cc0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0e8: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2cc0e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2cc0ec: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2cc0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2cc0f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2cc0f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cc0f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cc0f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cc0f8: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x2cc0f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc0fc: 0x0  nop
    ctx->pc = 0x2cc0fcu;
    // NOP
    // 0x2cc100: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC100u;
    {
        const bool branch_taken_0x2cc100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc100) {
            ctx->pc = 0x2CC104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC100u;
            // 0x2cc104: 0x46106802  mul.s       $f0, $f13, $f16 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[16]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC110u;
            goto label_2cc110;
        }
    }
    ctx->pc = 0x2CC108u;
    // 0x2cc108: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x2CC108u;
    {
        const bool branch_taken_0x2cc108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC108u;
        // 0x2cc10c: 0xe50c0000  swc1        $f12, 0x0($t0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc108) {
            ctx->pc = 0x2CC3D4u;
            goto label_2cc3d4;
        }
    }
    ctx->pc = 0x2CC110u;
label_2cc110:
    // 0x2cc110: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cc110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc114: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC114u;
    {
        const bool branch_taken_0x2cc114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc114) {
            ctx->pc = 0x2CC124u;
            goto label_2cc124;
        }
    }
    ctx->pc = 0x2CC11Cu;
    // 0x2cc11c: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x2CC11Cu;
    {
        const bool branch_taken_0x2cc11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC11Cu;
        // 0x2cc120: 0xe50d0000  swc1        $f13, 0x0($t0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc11c) {
            ctx->pc = 0x2CC3D4u;
            goto label_2cc3d4;
        }
    }
    ctx->pc = 0x2CC124u;
label_2cc124:
    // 0x2cc124: 0x46100803  div.s       $f0, $f1, $f16
    ctx->pc = 0x2cc124u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[16]);
    // 0x2cc128: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2CC128u;
    {
        const bool branch_taken_0x2cc128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC128u;
        // 0x2cc12c: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc128) {
            ctx->pc = 0x2CC3D4u;
            goto label_2cc3d4;
        }
    }
    ctx->pc = 0x2CC130u;
label_2cc130:
    // 0x2cc130: 0xc784822c  lwc1        $f4, -0x7DD4($gp)
    ctx->pc = 0x2cc130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cc134: 0x460b9802  mul.s       $f0, $f19, $f11
    ctx->pc = 0x2cc134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[19], ctx->f[11]);
    // 0x2cc138: 0x4611a882  mul.s       $f2, $f21, $f17
    ctx->pc = 0x2cc138u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[17]);
    // 0x2cc13c: 0x460658c2  mul.s       $f3, $f11, $f6
    ctx->pc = 0x2cc13cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x2cc140: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cc140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc144: 0x460a8242  mul.s       $f9, $f16, $f10
    ctx->pc = 0x2cc144u;
    ctx->f[9] = FPU_MUL_S(ctx->f[16], ctx->f[10]);
    // 0x2cc148: 0x46069842  mul.s       $f1, $f19, $f6
    ctx->pc = 0x2cc148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[19], ctx->f[6]);
    // 0x2cc14c: 0x460202c0  add.s       $f11, $f0, $f2
    ctx->pc = 0x2cc14cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cc150: 0x46079002  mul.s       $f0, $f18, $f7
    ctx->pc = 0x2cc150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[7]);
    // 0x2cc154: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x2cc154u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x2cc158: 0x460b5882  mul.s       $f2, $f11, $f11
    ctx->pc = 0x2cc158u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x2cc15c: 0x46044902  mul.s       $f4, $f9, $f4
    ctx->pc = 0x2cc15cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x2cc160: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cc160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cc164: 0x46024981  sub.s       $f6, $f9, $f2
    ctx->pc = 0x2cc164u;
    ctx->f[6] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x2cc168: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2cc168u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2cc16c: 0x46088802  mul.s       $f0, $f17, $f8
    ctx->pc = 0x2cc16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[8]);
    // 0x2cc170: 0x4608a882  mul.s       $f2, $f21, $f8
    ctx->pc = 0x2cc170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[8]);
    // 0x2cc174: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x2cc174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc178: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2cc178u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2cc17c: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x2CC17Cu;
    {
        const bool branch_taken_0x2cc17c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC17Cu;
        // 0x2cc180: 0x46020900  add.s       $f4, $f1, $f2 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc17c) {
            ctx->pc = 0x2CC32Cu;
            goto label_2cc32c;
        }
    }
    ctx->pc = 0x2CC184u;
    // 0x2cc184: 0x460a2002  mul.s       $f0, $f4, $f10
    ctx->pc = 0x2cc184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x2cc188: 0x460b1842  mul.s       $f1, $f3, $f11
    ctx->pc = 0x2cc188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x2cc18c: 0x46066082  mul.s       $f2, $f12, $f6
    ctx->pc = 0x2cc18cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2cc190: 0x460101c1  sub.s       $f7, $f0, $f1
    ctx->pc = 0x2cc190u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cc194: 0x46023834  c.lt.s      $f7, $f2
    ctx->pc = 0x2cc194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc198: 0x0  nop
    ctx->pc = 0x2cc198u;
    // NOP
    // 0x2cc19c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC19Cu;
    {
        const bool branch_taken_0x2cc19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc19c) {
            ctx->pc = 0x2CC1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC19Cu;
            // 0x2cc1a0: 0x46066802  mul.s       $f0, $f13, $f6 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC1ACu;
            goto label_2cc1ac;
        }
    }
    ctx->pc = 0x2CC1A4u;
    // 0x2cc1a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC1A4u;
    {
        const bool branch_taken_0x2cc1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1A4u;
        // 0x2cc1a8: 0xe50c0000  swc1        $f12, 0x0($t0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1a4) {
            ctx->pc = 0x2CC1C4u;
            goto label_2cc1c4;
        }
    }
    ctx->pc = 0x2CC1ACu;
label_2cc1ac:
    // 0x2cc1ac: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x2cc1acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc1b0: 0x0  nop
    ctx->pc = 0x2cc1b0u;
    // NOP
    // 0x2cc1b4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC1B4u;
    {
        const bool branch_taken_0x2cc1b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc1b4) {
            ctx->pc = 0x2CC1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC1B4u;
            // 0x2cc1b8: 0xe50d0000  swc1        $f13, 0x0($t0) (Delay Slot)
            { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC1C4u;
            goto label_2cc1c4;
        }
    }
    ctx->pc = 0x2CC1BCu;
    // 0x2cc1bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC1BCu;
    {
        const bool branch_taken_0x2cc1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1BCu;
        // 0x2cc1c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1bc) {
            ctx->pc = 0x2CC1C8u;
            goto label_2cc1c8;
        }
    }
    ctx->pc = 0x2CC1C4u;
label_2cc1c4:
    // 0x2cc1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cc1c8:
    // 0x2cc1c8: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CC1C8u;
    {
        const bool branch_taken_0x2cc1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc1c8) {
            ctx->pc = 0x2CC1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC1C8u;
            // 0x2cc1cc: 0x46101802  mul.s       $f0, $f3, $f16 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[16]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC264u;
            goto label_2cc264;
        }
    }
    ctx->pc = 0x2CC1D0u;
    // 0x2cc1d0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2cc1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc1d4: 0x460a7042  mul.s       $f1, $f14, $f10
    ctx->pc = 0x2cc1d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x2cc1d8: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2cc1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2cc1dc: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x2cc1dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2cc1e0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2cc1e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc1e4: 0x0  nop
    ctx->pc = 0x2cc1e4u;
    // NOP
    // 0x2cc1e8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC1E8u;
    {
        const bool branch_taken_0x2cc1e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc1e8) {
            ctx->pc = 0x2CC1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC1E8u;
            // 0x2cc1ec: 0x460a7802  mul.s       $f0, $f15, $f10 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC1F8u;
            goto label_2cc1f8;
        }
    }
    ctx->pc = 0x2CC1F0u;
    // 0x2cc1f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC1F0u;
    {
        const bool branch_taken_0x2cc1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1F0u;
        // 0x2cc1f4: 0xe52e0000  swc1        $f14, 0x0($t1) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1f0) {
            ctx->pc = 0x2CC210u;
            goto label_2cc210;
        }
    }
    ctx->pc = 0x2CC1F8u;
label_2cc1f8:
    // 0x2cc1f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2cc1f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc1fc: 0x0  nop
    ctx->pc = 0x2cc1fcu;
    // NOP
    // 0x2cc200: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC200u;
    {
        const bool branch_taken_0x2cc200 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc200) {
            ctx->pc = 0x2CC204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC200u;
            // 0x2cc204: 0xe52f0000  swc1        $f15, 0x0($t1) (Delay Slot)
            { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC210u;
            goto label_2cc210;
        }
    }
    ctx->pc = 0x2CC208u;
    // 0x2cc208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC208u;
    {
        const bool branch_taken_0x2cc208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC208u;
        // 0x2cc20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc208) {
            ctx->pc = 0x2CC214u;
            goto label_2cc214;
        }
    }
    ctx->pc = 0x2CC210u;
label_2cc210:
    // 0x2cc210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cc214:
    // 0x2cc214: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CC214u;
    {
        const bool branch_taken_0x2cc214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc214) {
            ctx->pc = 0x2CC258u;
            goto label_2cc258;
        }
    }
    ctx->pc = 0x2CC21Cu;
    // 0x2cc21c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2cc21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc220: 0x46106042  mul.s       $f1, $f12, $f16
    ctx->pc = 0x2cc220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[16]);
    // 0x2cc224: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2cc224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2cc228: 0x46040080  add.s       $f2, $f0, $f4
    ctx->pc = 0x2cc228u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2cc22c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2cc22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc230: 0x0  nop
    ctx->pc = 0x2cc230u;
    // NOP
    // 0x2cc234: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
    ctx->pc = 0x2CC234u;
    {
        const bool branch_taken_0x2cc234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc234) {
            ctx->pc = 0x2CC238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC234u;
            // 0x2cc238: 0xe50c0000  swc1        $f12, 0x0($t0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC2ECu;
            goto label_2cc2ec;
        }
    }
    ctx->pc = 0x2CC23Cu;
    // 0x2cc23c: 0x46106802  mul.s       $f0, $f13, $f16
    ctx->pc = 0x2cc23cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[16]);
    // 0x2cc240: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2cc240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc244: 0x0  nop
    ctx->pc = 0x2cc244u;
    // NOP
    // 0x2cc248: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x2CC248u;
    {
        const bool branch_taken_0x2cc248 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC248u;
        // 0x2cc24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc248) {
            ctx->pc = 0x2CC2F0u;
            goto label_2cc2f0;
        }
    }
    ctx->pc = 0x2CC250u;
    // 0x2cc250: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2CC250u;
    {
        const bool branch_taken_0x2cc250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC250u;
        // 0x2cc254: 0xe50d0000  swc1        $f13, 0x0($t0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc250) {
            ctx->pc = 0x2CC2ECu;
            goto label_2cc2ec;
        }
    }
    ctx->pc = 0x2CC258u;
label_2cc258:
    // 0x2cc258: 0x460a1003  div.s       $f0, $f2, $f10
    ctx->pc = 0x2cc258u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[10]);
    // 0x2cc25c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2CC25Cu;
    {
        const bool branch_taken_0x2cc25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC25Cu;
        // 0x2cc260: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc25c) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CC264u;
label_2cc264:
    // 0x2cc264: 0x460b2042  mul.s       $f1, $f4, $f11
    ctx->pc = 0x2cc264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x2cc268: 0x46067082  mul.s       $f2, $f14, $f6
    ctx->pc = 0x2cc268u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x2cc26c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2cc26cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cc270: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2cc270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc274: 0x0  nop
    ctx->pc = 0x2cc274u;
    // NOP
    // 0x2cc278: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC278u;
    {
        const bool branch_taken_0x2cc278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc278) {
            ctx->pc = 0x2CC27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC278u;
            // 0x2cc27c: 0x46067802  mul.s       $f0, $f15, $f6 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC288u;
            goto label_2cc288;
        }
    }
    ctx->pc = 0x2CC280u;
    // 0x2cc280: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC280u;
    {
        const bool branch_taken_0x2cc280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC280u;
        // 0x2cc284: 0xe52e0000  swc1        $f14, 0x0($t1) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc280) {
            ctx->pc = 0x2CC2A0u;
            goto label_2cc2a0;
        }
    }
    ctx->pc = 0x2CC288u;
label_2cc288:
    // 0x2cc288: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2cc288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc28c: 0x0  nop
    ctx->pc = 0x2cc28cu;
    // NOP
    // 0x2cc290: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC290u;
    {
        const bool branch_taken_0x2cc290 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc290) {
            ctx->pc = 0x2CC294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC290u;
            // 0x2cc294: 0xe52f0000  swc1        $f15, 0x0($t1) (Delay Slot)
            { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC2A0u;
            goto label_2cc2a0;
        }
    }
    ctx->pc = 0x2CC298u;
    // 0x2cc298: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC298u;
    {
        const bool branch_taken_0x2cc298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC298u;
        // 0x2cc29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc298) {
            ctx->pc = 0x2CC2A4u;
            goto label_2cc2a4;
        }
    }
    ctx->pc = 0x2CC2A0u;
label_2cc2a0:
    // 0x2cc2a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cc2a4:
    // 0x2cc2a4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CC2A4u;
    {
        const bool branch_taken_0x2cc2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc2a4) {
            ctx->pc = 0x2CC304u;
            goto label_2cc304;
        }
    }
    ctx->pc = 0x2CC2ACu;
    // 0x2cc2ac: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2cc2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc2b0: 0x46106042  mul.s       $f1, $f12, $f16
    ctx->pc = 0x2cc2b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[16]);
    // 0x2cc2b4: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2cc2b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2cc2b8: 0x46040080  add.s       $f2, $f0, $f4
    ctx->pc = 0x2cc2b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2cc2bc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2cc2bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc2c0: 0x0  nop
    ctx->pc = 0x2cc2c0u;
    // NOP
    // 0x2cc2c4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC2C4u;
    {
        const bool branch_taken_0x2cc2c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc2c4) {
            ctx->pc = 0x2CC2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC2C4u;
            // 0x2cc2c8: 0x46106802  mul.s       $f0, $f13, $f16 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[16]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC2D4u;
            goto label_2cc2d4;
        }
    }
    ctx->pc = 0x2CC2CCu;
    // 0x2cc2cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC2CCu;
    {
        const bool branch_taken_0x2cc2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2CCu;
        // 0x2cc2d0: 0xe50c0000  swc1        $f12, 0x0($t0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2cc) {
            ctx->pc = 0x2CC2ECu;
            goto label_2cc2ec;
        }
    }
    ctx->pc = 0x2CC2D4u;
label_2cc2d4:
    // 0x2cc2d4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2cc2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc2d8: 0x0  nop
    ctx->pc = 0x2cc2d8u;
    // NOP
    // 0x2cc2dc: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC2DCu;
    {
        const bool branch_taken_0x2cc2dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc2dc) {
            ctx->pc = 0x2CC2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC2DCu;
            // 0x2cc2e0: 0xe50d0000  swc1        $f13, 0x0($t0) (Delay Slot)
            { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC2ECu;
            goto label_2cc2ec;
        }
    }
    ctx->pc = 0x2CC2E4u;
    // 0x2cc2e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC2E4u;
    {
        const bool branch_taken_0x2cc2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2E4u;
        // 0x2cc2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2e4) {
            ctx->pc = 0x2CC2F0u;
            goto label_2cc2f0;
        }
    }
    ctx->pc = 0x2CC2ECu;
label_2cc2ec:
    // 0x2cc2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cc2f0:
    // 0x2cc2f0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CC2F0u;
    {
        const bool branch_taken_0x2cc2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc2f0) {
            ctx->pc = 0x2CC2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC2F0u;
            // 0x2cc2f4: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC324u;
            goto label_2cc324;
        }
    }
    ctx->pc = 0x2CC2F8u;
    // 0x2cc2f8: 0x46101003  div.s       $f0, $f2, $f16
    ctx->pc = 0x2cc2f8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[16]);
    // 0x2cc2fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC2FCu;
    {
        const bool branch_taken_0x2cc2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2FCu;
        // 0x2cc300: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2fc) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CC304u;
label_2cc304:
    // 0x2cc304: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cc304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cc308: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cc308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc30c: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x2cc30cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[6]);
    // 0x2cc310: 0x46003842  mul.s       $f1, $f7, $f0
    ctx->pc = 0x2cc310u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cc314: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2cc314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cc318: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2cc318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2cc31c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2cc31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_2cc320:
    // 0x2cc320: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x2cc320u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
label_2cc324:
    // 0x2cc324: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2CC324u;
    {
        const bool branch_taken_0x2cc324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC324u;
        // 0x2cc328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc324) {
            ctx->pc = 0x2CC3D8u;
            goto label_2cc3d8;
        }
    }
    ctx->pc = 0x2CC32Cu;
label_2cc32c:
    // 0x2cc32c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cc32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cc330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cc330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc334: 0x46090143  div.s       $f5, $f0, $f9
    ctx->pc = 0x2cc334u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[9]);
    // 0x2cc338: 0x46055042  mul.s       $f1, $f10, $f5
    ctx->pc = 0x2cc338u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x2cc33c: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x2cc33cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2cc340: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x2cc340u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2cc344: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2cc344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc348: 0x0  nop
    ctx->pc = 0x2cc348u;
    // NOP
    // 0x2cc34c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC34Cu;
    {
        const bool branch_taken_0x2cc34c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC34Cu;
        // 0x2cc350: 0x460071c6  mov.s       $f7, $f14 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc34c) {
            ctx->pc = 0x2CC35Cu;
            goto label_2cc35c;
        }
    }
    ctx->pc = 0x2CC354u;
    // 0x2cc354: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC354u;
    {
        const bool branch_taken_0x2cc354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC354u;
        // 0x2cc358: 0x46007b86  mov.s       $f14, $f15 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc354) {
            ctx->pc = 0x2CC360u;
            goto label_2cc360;
        }
    }
    ctx->pc = 0x2CC35Cu;
label_2cc35c:
    // 0x2cc35c: 0x460079c6  mov.s       $f7, $f15
    ctx->pc = 0x2cc35cu;
    ctx->f[7] = FPU_MOV_S(ctx->f[15]);
label_2cc360:
    // 0x2cc360: 0x46017002  mul.s       $f0, $f14, $f1
    ctx->pc = 0x2cc360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x2cc364: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2cc364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2cc368: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x2cc368u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2cc36c: 0x460c3036  c.le.s      $f6, $f12
    ctx->pc = 0x2cc36cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc370: 0x0  nop
    ctx->pc = 0x2cc370u;
    // NOP
    // 0x2cc374: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC374u;
    {
        const bool branch_taken_0x2cc374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC374u;
        // 0x2cc378: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc374) {
            ctx->pc = 0x2CC38Cu;
            goto label_2cc38c;
        }
    }
    ctx->pc = 0x2CC37Cu;
    // 0x2cc37c: 0xe50c0000  swc1        $f12, 0x0($t0)
    ctx->pc = 0x2cc37cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2cc380: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x2cc380u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
label_2cc384:
    // 0x2cc384: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2CC384u;
    {
        const bool branch_taken_0x2cc384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC384u;
        // 0x2cc388: 0xe52e0000  swc1        $f14, 0x0($t1) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc384) {
            ctx->pc = 0x2CC3D4u;
            goto label_2cc3d4;
        }
    }
    ctx->pc = 0x2CC38Cu;
label_2cc38c:
    // 0x2cc38c: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x2cc38cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc390: 0x0  nop
    ctx->pc = 0x2cc390u;
    // NOP
    // 0x2cc394: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC394u;
    {
        const bool branch_taken_0x2cc394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc394) {
            ctx->pc = 0x2CC398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC394u;
            // 0x2cc398: 0x460c0028  max.s       $f0, $f0, $f12 (Delay Slot)
            ctx->f[0] = std::max(ctx->f[0], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC3ACu;
            goto label_2cc3ac;
        }
    }
    ctx->pc = 0x2CC39Cu;
    // 0x2cc39c: 0xe50d0000  swc1        $f13, 0x0($t0)
    ctx->pc = 0x2cc39cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2cc3a0: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x2cc3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x2cc3a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CC3A4u;
    {
        const bool branch_taken_0x2cc3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC3A4u;
        // 0x2cc3a8: 0xe5270000  swc1        $f7, 0x0($t1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc3a4) {
            ctx->pc = 0x2CC3D4u;
            goto label_2cc3d4;
        }
    }
    ctx->pc = 0x2CC3ACu;
label_2cc3ac:
    // 0x2cc3ac: 0x460d3069  min.s       $f1, $f6, $f13
    ctx->pc = 0x2cc3acu;
    ctx->f[1] = std::min(ctx->f[6], ctx->f[13]);
    // 0x2cc3b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cc3b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cc3b4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2cc3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2cc3b8: 0x46058082  mul.s       $f2, $f16, $f5
    ctx->pc = 0x2cc3b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[16], ctx->f[5]);
    // 0x2cc3bc: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x2cc3bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2cc3c0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2cc3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc3c4: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2cc3c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2cc3c8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2cc3c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2cc3cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cc3ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cc3d0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2cc3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_2cc3d4:
    // 0x2cc3d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cc3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc3d8:
    // 0x2cc3d8: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2cc3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cc3dc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2cc3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cc3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC3E0u;
        // 0x2cc3e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC3E8u;
}
