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

// Function: sub_002D3C50
// Address: 0x2d3c50 - 0x2d3e88
void sub_002D3C50_0x2d3c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3C50_0x2d3c50");
#endif

    switch (ctx->pc) {
        case 0x2d3ce4u: goto label_2d3ce4;
        case 0x2d3d08u: goto label_2d3d08;
        case 0x2d3e38u: goto label_2d3e38;
        default: break;
    }

    ctx->pc = 0x2d3c50u;

    // 0x2d3c50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2d3c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2d3c54: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2d3c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2d3c58: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2d3c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2d3c5c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d3c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c60: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2d3c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2d3c64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d3c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c68: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2d3c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2d3c6c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d3c6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d3c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d3c74: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2d3c74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c78: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2d3c78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2d3c7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d3c7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c80: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2d3c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2d3c84: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2d3c84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2d3c88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d3c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d3c8c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2d3c8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2d3c90: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x2d3c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3c94: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d3c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3c98: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x2d3c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3c9c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d3c9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d3ca0: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x2d3ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3ca4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x2d3ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3ca8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2d3ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3cac: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2d3cacu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2d3cb0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2d3cb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d3cb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d3cb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3cb8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2d3cb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d3cbc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2d3cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d3cc0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2d3cc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2d3cc4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2d3cc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2d3cc8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2d3cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d3ccc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2d3cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d3cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d3cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cd8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2d3cd8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2d3cdc: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2D3CDCu;
    SET_GPR_U32(ctx, 31, 0x2D3CE4u);
    ctx->pc = 0x2D3CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CDCu;
    // 0x2d3ce0: 0x46011d00  add.s       $f20, $f3, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2D3CDCu, 0x2D3CE4u)) {
        return;
    }
    ctx->pc = 0x2D3CE4u;
label_2d3ce4:
    // 0x2d3ce4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2d3ce4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ce8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d3ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d3cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cf0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d3cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cf4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d3cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cf8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2d3cf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2d3cfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d3cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d00: 0xc0aa8d4  jal         func_2AA350
    ctx->pc = 0x2D3D00u;
    SET_GPR_U32(ctx, 31, 0x2D3D08u);
    ctx->pc = 0x2D3D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D00u;
    // 0x2d3d04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA350u, 0x2D3D00u, 0x2D3D08u)) {
        return;
    }
    ctx->pc = 0x2D3D08u;
label_2d3d08:
    // 0x2d3d08: 0x18400051  blez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2D3D08u;
    {
        const bool branch_taken_0x2d3d08 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D08u;
        // 0x2d3d0c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d08) {
            ctx->pc = 0x2D3E50u;
            goto label_2d3e50;
        }
    }
    ctx->pc = 0x2D3D10u;
    // 0x2d3d10: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2d3d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3d14: 0xc6660000  lwc1        $f6, 0x0($s3)
    ctx->pc = 0x2d3d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d3d18: 0x460009c3  div.s       $f7, $f1, $f0
    ctx->pc = 0x2d3d18u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2d3d1c: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2d3d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3d20: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2d3d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3d24: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2d3d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3d28: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x2d3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3d2c: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x2d3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d3d30: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x2d3d30u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2d3d34: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2d3d34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2d3d38: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2d3d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2d3d3c: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2d3d3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2d3d40: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2d3d40u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2d3d44: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2d3d44u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2d3d48: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2d3d48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d3d4c: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x2d3d4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d3d50: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2d3d50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d3d54: 0xc6260000  lwc1        $f6, 0x0($s1)
    ctx->pc = 0x2d3d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d3d58: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2d3d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3d5c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2d3d5cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2d3d60: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2d3d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3d64: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2d3d64u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2d3d68: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2d3d68u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2d3d6c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2d3d6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d3d70: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x2d3d70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d3d74: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x2d3d74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d3d78: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2d3d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3d7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3d80: 0xc7a80014  lwc1        $f8, 0x14($sp)
    ctx->pc = 0x2d3d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d3d84: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2d3d84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d3d88: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2d3d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3d8c: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x2d3d8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x2d3d90: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x2d3d90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2d3d94: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2d3d94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2d3d98: 0x46051900  add.s       $f4, $f3, $f5
    ctx->pc = 0x2d3d98u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2d3d9c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2d3d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3da0: 0x0  nop
    ctx->pc = 0x2d3da0u;
    // NOP
    // 0x2d3da4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3DA4u;
    {
        const bool branch_taken_0x2d3da4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3da4) {
            ctx->pc = 0x2D3DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3DA4u;
            // 0x2d3da8: 0x46042002  mul.s       $f0, $f4, $f4 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3DC8u;
            goto label_2d3dc8;
        }
    }
    ctx->pc = 0x2D3DACu;
    // 0x2d3dac: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2d3dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d3db0: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2d3db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d3db4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d3db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d3db8: 0xb2a20007  sdl         $v0, 0x7($s5)
    ctx->pc = 0x2d3db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3dbc: 0xb6a20000  sdr         $v0, 0x0($s5)
    ctx->pc = 0x2d3dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3dc0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D3DC0u;
    {
        const bool branch_taken_0x2d3dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3DC0u;
        // 0x2d3dc4: 0xaea30008  sw          $v1, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3dc0) {
            ctx->pc = 0x2D3E20u;
            goto label_2d3e20;
        }
    }
    ctx->pc = 0x2D3DC8u;
label_2d3dc8:
    // 0x2d3dc8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2d3dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3dcc: 0x0  nop
    ctx->pc = 0x2d3dccu;
    // NOP
    // 0x2d3dd0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2D3DD0u;
    {
        const bool branch_taken_0x2d3dd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3DD0u;
        // 0x2d3dd4: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3dd0) {
            ctx->pc = 0x2D3E08u;
            goto label_2d3e08;
        }
    }
    ctx->pc = 0x2D3DD8u;
    // 0x2d3dd8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2d3dd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2d3ddc: 0x460440c2  mul.s       $f3, $f8, $f4
    ctx->pc = 0x2d3ddcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x2d3de0: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x2d3de0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2d3de4: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x2d3de4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2d3de8: 0xe6a20000  swc1        $f2, 0x0($s5)
    ctx->pc = 0x2d3de8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2d3dec: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2d3decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3df0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d3df0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d3df4: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x2d3df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x2d3df8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2d3df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3dfc: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2d3dfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2d3e00: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D3E00u;
    {
        const bool branch_taken_0x2d3e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E00u;
        // 0x2d3e04: 0xe6a20008  swc1        $f2, 0x8($s5) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e00) {
            ctx->pc = 0x2D3E58u;
            goto label_2d3e58;
        }
    }
    ctx->pc = 0x2D3E08u;
label_2d3e08:
    // 0x2d3e08: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x2d3e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d3e0c: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x2d3e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d3e10: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2d3e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2d3e14: 0xb2a20007  sdl         $v0, 0x7($s5)
    ctx->pc = 0x2d3e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3e18: 0xb6a20000  sdr         $v0, 0x0($s5)
    ctx->pc = 0x2d3e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3e1c: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x2d3e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_2d3e20:
    // 0x2d3e20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d3e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d3e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e28: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d3e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e2c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2d3e2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2d3e30: 0xc0aaa6e  jal         func_2AA9B8
    ctx->pc = 0x2D3E30u;
    SET_GPR_U32(ctx, 31, 0x2D3E38u);
    ctx->pc = 0x2D3E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E30u;
    // 0x2d3e34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA9B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA9B8u, 0x2D3E30u, 0x2D3E38u)) {
        return;
    }
    ctx->pc = 0x2D3E38u;
label_2d3e38:
    // 0x2d3e38: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3E38u;
    {
        const bool branch_taken_0x2d3e38 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E38u;
        // 0x2d3e3c: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e38) {
            ctx->pc = 0x2D3E50u;
            goto label_2d3e50;
        }
    }
    ctx->pc = 0x2D3E40u;
    // 0x2d3e40: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2d3e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3e44: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2d3e44u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2d3e48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3E48u;
    {
        const bool branch_taken_0x2d3e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E48u;
        // 0x2d3e4c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e48) {
            ctx->pc = 0x2D3E5Cu;
            goto label_2d3e5c;
        }
    }
    ctx->pc = 0x2D3E50u;
label_2d3e50:
    // 0x2d3e50: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2d3e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2d3e54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d3e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d3e58:
    // 0x2d3e58: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2d3e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2d3e5c:
    // 0x2d3e5c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2d3e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d3e60: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2d3e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d3e64: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2d3e64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d3e68: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2d3e68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3e6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d3e6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3e70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d3e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3e74: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2d3e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d3e78: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2d3e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d3e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E7Cu;
        // 0x2d3e80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3E84u;
    // 0x2d3e84: 0x0  nop
    ctx->pc = 0x2d3e84u;
    // NOP
    ctx->pc = 0x2d3e88u;
}
