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

// Function: sub_001E7CB8
// Address: 0x1e7cb8 - 0x1e7ec8
void sub_001E7CB8_0x1e7cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7CB8_0x1e7cb8");
#endif

    switch (ctx->pc) {
        case 0x1e7de4u: goto label_1e7de4;
        case 0x1e7e50u: goto label_1e7e50;
        default: break;
    }

    ctx->pc = 0x1e7cb8u;

    // 0x1e7cb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e7cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e7cbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e7cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e7cc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e7cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e7cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7cc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e7cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e7ccc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e7cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7cd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e7cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7cd8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e7cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e7cdc: 0x24621d18  addiu       $v0, $v1, 0x1D18
    ctx->pc = 0x1e7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7448));
    // 0x1e7ce0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1e7ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7ce4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1e7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7ce8: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x1e7ce8u;
    { uint32_t bits = FAST_READ32(0x6A1D1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e7cec: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1e7cecu;
    { uint32_t bits = FAST_READ32(0x6A1D20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7cf0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e7cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e7cf4: 0xc4641d18  lwc1        $f4, 0x1D18($v1)
    ctx->pc = 0x1e7cf4u;
    { uint32_t bits = FAST_READ32(0x6A1D18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e7cf8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1e7cf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1e7cfc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e7cfcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e7d00: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x1e7d00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1e7d04: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1e7d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7d08: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1e7d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7d0c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1e7d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1e7d10: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e7d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e7d14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e7d14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e7d18: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1e7d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1e7d1c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1e7d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7d20: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1e7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7d24: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1e7d24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1e7d28: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e7d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e7d2c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e7d2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e7d30: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1e7d30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1e7d34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e7d38: 0x24621d28  addiu       $v0, $v1, 0x1D28
    ctx->pc = 0x1e7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7464));
    // 0x1e7d3c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1e7d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7d40: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1e7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7d44: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1e7d44u;
    { uint32_t bits = FAST_READ32(0x6A1D30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7d48: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x1e7d48u;
    { uint32_t bits = FAST_READ32(0x6A1D2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e7d4c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1e7d4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e7d50: 0xc4641d28  lwc1        $f4, 0x1D28($v1)
    ctx->pc = 0x1e7d50u;
    { uint32_t bits = FAST_READ32(0x6A1D28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e7d54: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e7d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e7d58: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1e7d58u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1e7d5c: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x1e7d5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1e7d60: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1e7d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7d64: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1e7d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7d68: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1e7d68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1e7d6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e7d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e7d70: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e7d70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e7d74: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1e7d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1e7d78: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1e7d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7d7c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1e7d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7d80: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1e7d80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1e7d84: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e7d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e7d88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e7d88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e7d8c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1e7d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1e7d90: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e7d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7d94: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x1e7d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e7d98: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e7d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e7d9c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x1e7d9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1e7da0: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x1e7da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e7da4: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x1e7da4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1e7da8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1e7da8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1e7dac: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x1e7dacu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1e7db0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1e7db0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1e7db4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1e7db4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1e7db8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1e7db8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1e7dbc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1e7dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1e7dc0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1e7dc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1e7dc4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e7dc4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e7dc8: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x1e7dc8u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x1e7dcc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1e7dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7dd0: 0x0  nop
    ctx->pc = 0x1e7dd0u;
    // NOP
    // 0x1e7dd4: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1E7DD4u;
    {
        const bool branch_taken_0x1e7dd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DD4u;
        // 0x1e7dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dd4) {
            ctx->pc = 0x1E7E48u;
            goto label_1e7e48;
        }
    }
    ctx->pc = 0x1E7DDCu;
    // 0x1e7ddc: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1E7DDCu;
    SET_GPR_U32(ctx, 31, 0x1E7DE4u);
    ctx->pc = 0x1E7DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DDCu;
    // 0x1e7de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1E7DDCu, 0x1E7DE4u)) {
        return;
    }
    ctx->pc = 0x1E7DE4u;
label_1e7de4:
    // 0x1e7de4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1e7de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7de8: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1e7de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7dec: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1e7decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7df0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1e7df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7df4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e7df4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e7df8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e7df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e7dfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e7dfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e7e00: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1e7e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1e7e04: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1e7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7e08: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1e7e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7e0c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1e7e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7e10: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1e7e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7e14: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1e7e14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1e7e18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e7e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e7e1c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e7e1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e7e20: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x1e7e20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1e7e24: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1e7e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7e28: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1e7e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7e2c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1e7e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7e30: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1e7e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7e34: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e7e34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e7e38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e7e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e7e3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e7e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e7e40: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E7E40u;
    {
        const bool branch_taken_0x1e7e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E40u;
        // 0x1e7e44: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e40) {
            ctx->pc = 0x1E7EB0u;
            goto label_1e7eb0;
        }
    }
    ctx->pc = 0x1E7E48u;
label_1e7e48:
    // 0x1e7e48: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1E7E48u;
    SET_GPR_U32(ctx, 31, 0x1E7E50u);
    ctx->pc = 0x1E7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E48u;
    // 0x1e7e4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1E7E48u, 0x1E7E50u)) {
        return;
    }
    ctx->pc = 0x1E7E50u;
label_1e7e50:
    // 0x1e7e50: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1e7e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7e54: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1e7e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7e58: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1e7e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7e5c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e7e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7e60: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e7e60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e7e64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e7e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e7e68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e7e68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e7e6c: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x1e7e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1e7e70: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1e7e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7e74: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1e7e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7e78: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1e7e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7e7c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e7e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7e80: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1e7e80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1e7e84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e7e84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e7e88: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e7e88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e7e8c: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1e7e8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1e7e90: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1e7e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7e94: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1e7e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7e98: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e7e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7e9c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1e7e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7ea0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e7ea0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e7ea4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e7ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e7ea8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e7ea8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e7eac: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1e7eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1e7eb0:
    // 0x1e7eb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e7eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7eb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e7eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7eb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e7eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7EC0u;
        // 0x1e7ec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7EC8u;
}
