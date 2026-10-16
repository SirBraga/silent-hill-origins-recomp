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

// Function: sub_002A6D60
// Address: 0x2a6d60 - 0x2a6ec0
void sub_002A6D60_0x2a6d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6D60_0x2a6d60");
#endif

    ctx->pc = 0x2a6d60u;

    // 0x2a6d60: 0xc4880048  lwc1        $f8, 0x48($a0)
    ctx->pc = 0x2a6d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a6d64: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6d68: 0xc485004c  lwc1        $f5, 0x4C($a0)
    ctx->pc = 0x2a6d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a6d6c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2a6d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d70: 0xc4860040  lwc1        $f6, 0x40($a0)
    ctx->pc = 0x2a6d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a6d74: 0xc4870044  lwc1        $f7, 0x44($a0)
    ctx->pc = 0x2a6d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a6d78: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2a6d78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a6d7c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2a6d7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a6d80: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2a6d80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a6d84: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x2a6d84u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a6d88: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x2a6d88u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a6d8c: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A6D8Cu;
    {
        const bool branch_taken_0x2a6d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D8Cu;
        // 0x2a6d90: 0xe7a80018  swc1        $f8, 0x18($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d8c) {
            ctx->pc = 0x2A6E88u;
            goto label_2a6e88;
        }
    }
    ctx->pc = 0x2A6D94u;
    // 0x2a6d94: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2a6d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a6d98: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x2a6d98u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
    // 0x2a6d9c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2a6d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6da0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2a6da0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2a6da4: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2a6da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6da8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2a6da8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2a6dac: 0x46043102  mul.s       $f4, $f6, $f4
    ctx->pc = 0x2a6dacu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2a6db0: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2a6db0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2a6db4: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2a6db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2a6db8: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2a6db8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2a6dbc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a6dbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a6dc0: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x2a6dc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a6dc4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2a6dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6dc8: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x2a6dc8u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x2a6dcc: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2a6dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6dd0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2a6dd0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2a6dd4: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2a6dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6dd8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2a6dd8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2a6ddc: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x2a6ddcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2a6de0: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2a6de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2a6de4: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2a6de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2a6de8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2a6de8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a6dec: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a6decu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a6df0: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x2a6df0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a6df4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2a6df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6df8: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2a6df8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2a6dfc: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2a6dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6e00: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2a6e00u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2a6e04: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2a6e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6e08: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2a6e08u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2a6e0c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2a6e0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2a6e10: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2a6e10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2a6e14: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2a6e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2a6e18: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2a6e18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2a6e1c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2a6e1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a6e20: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2a6e20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2a6e24: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2a6e24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2a6e28: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x2a6e28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a6e2c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2a6e2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2a6e30: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2a6e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a6e34: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x2a6e34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a6e38: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2a6e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6e3c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2a6e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2a6e40: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2a6e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a6e44: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x2a6e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6e48: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a6e48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a6e4c: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x2a6e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a6e50: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2a6e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6e54: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a6e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a6e58: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a6e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a6e5c: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x2a6e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6e60: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2a6e60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2a6e64: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a6e64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a6e68: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2a6e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6e6c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a6e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a6e70: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a6e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a6e74: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x2a6e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6e78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a6e78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a6e7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A6E7Cu;
    {
        const bool branch_taken_0x2a6e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E7Cu;
        // 0x2a6e80: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e7c) {
            ctx->pc = 0x2A6EB8u;
            goto label_2a6eb8;
        }
    }
    ctx->pc = 0x2A6E84u;
    // 0x2a6e84: 0x0  nop
    ctx->pc = 0x2a6e84u;
    // NOP
label_2a6e88:
    // 0x2a6e88: 0x46054000  add.s       $f0, $f8, $f5
    ctx->pc = 0x2a6e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x2a6e8c: 0x46053040  add.s       $f1, $f6, $f5
    ctx->pc = 0x2a6e8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2a6e90: 0x46053880  add.s       $f2, $f7, $f5
    ctx->pc = 0x2a6e90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x2a6e94: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a6e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a6e98: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a6e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a6e9c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2a6e9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a6ea0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a6ea0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2a6ea4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2a6ea4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2a6ea8: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2a6ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a6eac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a6eacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2a6eb0: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x2a6eb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a6eb4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a6eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2a6eb8:
    // 0x2a6eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EB8u;
        // 0x2a6ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6EC0u;
}
