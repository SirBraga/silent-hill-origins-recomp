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

// Function: sub_0024AE78
// Address: 0x24ae78 - 0x24b0b8
void sub_0024AE78_0x24ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AE78_0x24ae78");
#endif

    ctx->pc = 0x24ae78u;

    // 0x24ae78: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x24ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ae7c: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x24ae7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ae80: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x24ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ae84: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x24ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ae88: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x24ae88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x24ae8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24ae8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24ae90: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x24ae90u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x24ae94: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x24ae94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24ae98: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x24ae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ae9c: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x24ae9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aea0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x24aea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24aea4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aea8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x24aea8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x24aeac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24aeacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24aeb0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x24aeb0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x24aeb4: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x24aeb4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x24aeb8: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x24aeb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24aebc: 0xc4a50018  lwc1        $f5, 0x18($a1)
    ctx->pc = 0x24aebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24aec0: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x24aec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24aec4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x24aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aec8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24aec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aecc: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x24aeccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x24aed0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24aed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24aed4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24aed4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24aed8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x24aed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24aedc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24aedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aee0: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x24aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24aee4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x24aee4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24aee8: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x24aee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24aeec: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x24aeecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x24aef0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24aef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24aef4: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x24aef4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x24aef8: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x24aef8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x24aefc: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x24aefcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24af00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AF00u;
    {
        const bool branch_taken_0x24af00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF00u;
        // 0x24af04: 0xc4890000  lwc1        $f9, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af00) {
            ctx->pc = 0x24AF20u;
            goto label_24af20;
        }
    }
    ctx->pc = 0x24AF08u;
    // 0x24af08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24af08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24af0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24af0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24af10: 0x0  nop
    ctx->pc = 0x24af10u;
    // NOP
    // 0x24af14: 0x46040303  div.s       $f12, $f0, $f4
    ctx->pc = 0x24af14u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x24af18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24AF18u;
    {
        const bool branch_taken_0x24af18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF18u;
        // 0x24af1c: 0xc48a0004  lwc1        $f10, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af18) {
            ctx->pc = 0x24AF2Cu;
            goto label_24af2c;
        }
    }
    ctx->pc = 0x24AF20u;
label_24af20:
    // 0x24af20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24af20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24af24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24af24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24af28: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x24af28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_24af2c:
    // 0x24af2c: 0xc48b0008  lwc1        $f11, 0x8($a0)
    ctx->pc = 0x24af2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x24af30: 0x460c4a42  mul.s       $f9, $f9, $f12
    ctx->pc = 0x24af30u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x24af34: 0x460c5282  mul.s       $f10, $f10, $f12
    ctx->pc = 0x24af34u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x24af38: 0x460c5ac2  mul.s       $f11, $f11, $f12
    ctx->pc = 0x24af38u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x24af3c: 0xe4890000  swc1        $f9, 0x0($a0)
    ctx->pc = 0x24af3cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24af40: 0xe48a0004  swc1        $f10, 0x4($a0)
    ctx->pc = 0x24af40u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24af44: 0xe48b0008  swc1        $f11, 0x8($a0)
    ctx->pc = 0x24af44u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24af48: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x24af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24af4c: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x24af4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24af50: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x24af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24af54: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x24af54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24af58: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x24af58u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24af5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24af5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24af60: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x24af60u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x24af64: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x24af64u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x24af68: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x24af68u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x24af6c: 0xe4860010  swc1        $f6, 0x10($a0)
    ctx->pc = 0x24af6cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x24af70: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x24af70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24af74: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x24af74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24af78: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x24af78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24af7c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24af7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24af80: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x24af80u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x24af84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24af84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24af88: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x24af88u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x24af8c: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x24af8cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x24af90: 0xe4880014  swc1        $f8, 0x14($a0)
    ctx->pc = 0x24af90u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x24af94: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x24af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24af98: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x24af98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24af9c: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x24af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24afa0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24afa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24afa4: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x24afa4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x24afa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24afa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24afac: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x24afacu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x24afb0: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x24afb0u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x24afb4: 0x460c39c2  mul.s       $f7, $f7, $f12
    ctx->pc = 0x24afb4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x24afb8: 0xe4870018  swc1        $f7, 0x18($a0)
    ctx->pc = 0x24afb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x24afbc: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x24afbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24afc0: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x24afc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24afc4: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x24afc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24afc8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x24afc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24afcc: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x24afccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x24afd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24afd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24afd4: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x24afd4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x24afd8: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x24afd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x24afdc: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x24afdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x24afe0: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x24afe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24afe4: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x24afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24afe8: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x24afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24afec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aff0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x24aff0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x24aff4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24aff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24aff8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x24aff8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x24affc: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x24affcu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x24b000: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x24b000u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x24b004: 0xe4830024  swc1        $f3, 0x24($a0)
    ctx->pc = 0x24b004u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x24b008: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x24b008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24b00c: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x24b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b010: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b014: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x24b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b018: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x24b018u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x24b01c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24b01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b020: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x24b020u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x24b024: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x24b024u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x24b028: 0xe4850028  swc1        $f5, 0x28($a0)
    ctx->pc = 0x24b028u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x24b02c: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x24b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b030: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x24b030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b034: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x24b034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x24b038: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x24b038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b03c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24b03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b040: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x24b040u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x24b044: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24b044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24b048: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24b048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24b04c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24b04cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b050: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x24b050u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x24b054: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x24b054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x24b058: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x24b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b05c: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x24b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b060: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x24b060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x24b064: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x24b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b068: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x24b068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x24b06c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x24b06cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x24b070: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24b070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24b074: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24b074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24b078: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24b078u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24b07c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x24b07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x24b080: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x24b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b084: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x24b084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b088: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x24b088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x24b08c: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x24b08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b090: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x24b090u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x24b094: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x24b094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x24b098: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x24b098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x24b09c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24b09cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24b0a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24b0a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b0a4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x24b0a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x24b0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x24B0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0A8u;
        // 0x24b0ac: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B0B0u;
    // 0x24b0b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x24b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24b0b4: 0x0  nop
    ctx->pc = 0x24b0b4u;
    // NOP
    ctx->pc = 0x24b0b8u;
}
