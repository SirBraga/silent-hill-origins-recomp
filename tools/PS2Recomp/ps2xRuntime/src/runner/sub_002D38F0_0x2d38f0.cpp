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

// Function: sub_002D38F0
// Address: 0x2d38f0 - 0x2d3c50
void sub_002D38F0_0x2d38f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D38F0_0x2d38f0");
#endif

    switch (ctx->pc) {
        case 0x2d3c20u: goto label_2d3c20;
        case 0x2d3c2cu: goto label_2d3c2c;
        case 0x2d3c38u: goto label_2d3c38;
        default: break;
    }

    ctx->pc = 0x2d38f0u;

    // 0x2d38f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d38f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d38f4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d38f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2d38f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d38f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d38fc: 0x10a40098  beq         $a1, $a0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2D38FCu;
    {
        const bool branch_taken_0x2d38fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2D3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38FCu;
        // 0x2d3900: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38fc) {
            ctx->pc = 0x2D3B60u;
            goto label_2d3b60;
        }
    }
    ctx->pc = 0x2D3904u;
    // 0x2d3904: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3904u;
    {
        const bool branch_taken_0x2d3904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3904) {
            ctx->pc = 0x2D3908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3904u;
            // 0x2d3908: 0xc4830000  lwc1        $f3, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3914u;
            goto label_2d3914;
        }
    }
    ctx->pc = 0x2D390Cu;
    // 0x2d390c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2D390Cu;
    {
        const bool branch_taken_0x2d390c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D390Cu;
        // 0x2d3910: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d390c) {
            ctx->pc = 0x2D3B60u;
            goto label_2d3b60;
        }
    }
    ctx->pc = 0x2D3914u;
label_2d3914:
    // 0x2d3914: 0xc4870004  lwc1        $f7, 0x4($a0)
    ctx->pc = 0x2d3914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d3918: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2d3918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d391c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2d391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3920: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x2d3920u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2d3924: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x2d3924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d3928: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d3928u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d392c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2d392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3930: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d3930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d3934: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2d3934u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2d3938: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d3938u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d393c: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2d393cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d3940: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d3940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3944: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2d3944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3948: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2d3948u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d394c: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2d394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3950: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d3950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d3954: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d3954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d3958: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2d3958u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d395c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d395cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d3960: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2d3960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d3964: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d3964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3968: 0xc4a50018  lwc1        $f5, 0x18($a1)
    ctx->pc = 0x2d3968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d396c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2d396cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d3970: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x2d3970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3974: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x2d3974u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x2d3978: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2d3978u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2d397c: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2d397cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x2d3980: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2d3980u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2d3984: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x2d3984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d3988: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2d3988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d398c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d398cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d3990: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2d3990u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d3994: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2d3994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3998: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d3998u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d399c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2d399cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d39a0: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2d39a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d39a4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d39a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d39a8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2d39a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d39ac: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x2d39acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d39b0: 0xc4870014  lwc1        $f7, 0x14($a0)
    ctx->pc = 0x2d39b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d39b4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d39b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d39b8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2d39b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d39bc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2d39bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2d39c0: 0xc4860018  lwc1        $f6, 0x18($a0)
    ctx->pc = 0x2d39c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d39c4: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d39c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d39c8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2d39c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d39cc: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d39ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d39d0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2d39d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2d39d4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d39d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d39d8: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2d39d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d39dc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d39dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d39e0: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2d39e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d39e4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2d39e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2d39e8: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2d39e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d39ec: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d39ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d39f0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d39f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d39f4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2d39f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d39f8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d39f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d39fc: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2d39fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2d3a00: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d3a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a04: 0xc4a50018  lwc1        $f5, 0x18($a1)
    ctx->pc = 0x2d3a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d3a08: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2d3a08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2d3a0c: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x2d3a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3a10: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x2d3a10u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x2d3a14: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2d3a14u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2d3a18: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x2d3a18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x2d3a1c: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x2d3a1cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2d3a20: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x2d3a20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d3a24: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2d3a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a28: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d3a28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d3a2c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2d3a2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d3a30: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2d3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a34: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d3a34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d3a38: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2d3a38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d3a3c: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2d3a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a40: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d3a40u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d3a44: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2d3a44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d3a48: 0xc4850020  lwc1        $f5, 0x20($a0)
    ctx->pc = 0x2d3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d3a4c: 0xc4870024  lwc1        $f7, 0x24($a0)
    ctx->pc = 0x2d3a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d3a50: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d3a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3a54: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2d3a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3a58: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x2d3a58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2d3a5c: 0xc4860028  lwc1        $f6, 0x28($a0)
    ctx->pc = 0x2d3a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d3a60: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d3a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d3a64: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2d3a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a68: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d3a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d3a6c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2d3a6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2d3a70: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d3a70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d3a74: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2d3a74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d3a78: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d3a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3a7c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2d3a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3a80: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2d3a80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2d3a84: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2d3a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3a88: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d3a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d3a8c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2d3a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d3a90: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2d3a90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d3a94: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d3a94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d3a98: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2d3a98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2d3a9c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d3a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3aa0: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x2d3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3aa4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2d3aa4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2d3aa8: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x2d3aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3aac: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x2d3aacu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2d3ab0: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2d3ab0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2d3ab4: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x2d3ab4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x2d3ab8: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x2d3ab8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x2d3abc: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x2d3abcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d3ac0: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2d3ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3ac4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d3ac4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d3ac8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2d3ac8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d3acc: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2d3accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3ad0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d3ad0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d3ad4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2d3ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d3ad8: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2d3ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3adc: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2d3adcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2d3ae0: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2d3ae0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d3ae4: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x2d3ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3ae8: 0xc4850034  lwc1        $f5, 0x34($a0)
    ctx->pc = 0x2d3ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d3aec: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2d3aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3af0: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x2d3af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3af4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2d3af4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2d3af8: 0xc4840038  lwc1        $f4, 0x38($a0)
    ctx->pc = 0x2d3af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3afc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2d3afcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2d3b00: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2d3b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b04: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2d3b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2d3b08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d3b08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d3b0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d3b0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d3b10: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2d3b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d3b14: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2d3b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b18: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2d3b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3b1c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2d3b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d3b20: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2d3b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3b24: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2d3b24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2d3b28: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2d3b28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d3b2c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d3b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d3b30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d3b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d3b34: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2d3b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d3b38: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d3b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3b3c: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x2d3b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3b40: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2d3b40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2d3b44: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2d3b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b48: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2d3b48u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2d3b4c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2d3b4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2d3b50: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2d3b50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2d3b54: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2d3b54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2d3b58: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2d3b58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d3b5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d3b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d3b60:
    // 0x2d3b60: 0x68a20037  ldl         $v0, 0x37($a1)
    ctx->pc = 0x2d3b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d3b64: 0x6ca20030  ldr         $v0, 0x30($a1)
    ctx->pc = 0x2d3b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d3b68: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x2d3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2d3b6c: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x2d3b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3b70: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x2d3b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3b74: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2d3b74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2d3b78: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x2d3b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3b7c: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x2d3b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2d3b80: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x2d3b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2d3b84: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2d3b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b88: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2d3b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3b8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d3b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d3b90: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2d3b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d3b94: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2d3b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b98: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2d3b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3b9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d3b9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3ba0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2d3ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d3ba4: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2d3ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3ba8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d3ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3bac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d3bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d3bb0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2d3bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d3bb4: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2d3bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3bb8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2d3bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3bbc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d3bbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3bc0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2d3bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d3bc4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2d3bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3bc8: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2d3bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3bcc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d3bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d3bd0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2d3bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2d3bd4: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x2d3bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3bd8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d3bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3bdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d3bdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3be0: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2d3be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2d3be4: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2d3be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3be8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2d3be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3bec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d3becu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d3bf0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2d3bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2d3bf4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2d3bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3bf8: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2d3bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3bfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d3bfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3c00: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x2d3c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2d3c04: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x2d3c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3c08: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2d3c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3c0c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2d3c0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2d3c10: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2d3c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2d3c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c18: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2D3C18u;
    SET_GPR_U32(ctx, 31, 0x2D3C20u);
    ctx->pc = 0x2D3C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C18u;
    // 0x2d3c1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2D3C18u, 0x2D3C20u)) {
        return;
    }
    ctx->pc = 0x2D3C20u;
label_2d3c20:
    // 0x2d3c20: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2d3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2d3c24: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2D3C24u;
    SET_GPR_U32(ctx, 31, 0x2D3C2Cu);
    ctx->pc = 0x2D3C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C24u;
    // 0x2d3c28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2D3C24u, 0x2D3C2Cu)) {
        return;
    }
    ctx->pc = 0x2D3C2Cu;
label_2d3c2c:
    // 0x2d3c2c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2d3c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2d3c30: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2D3C30u;
    SET_GPR_U32(ctx, 31, 0x2D3C38u);
    ctx->pc = 0x2D3C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C30u;
    // 0x2d3c34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2D3C30u, 0x2D3C38u)) {
        return;
    }
    ctx->pc = 0x2D3C38u;
label_2d3c38:
    // 0x2d3c38: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d3c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d3c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3c40: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d3c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d3c44: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C44u;
        // 0x2d3c48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3C4Cu;
    // 0x2d3c4c: 0x0  nop
    ctx->pc = 0x2d3c4cu;
    // NOP
    ctx->pc = 0x2d3c50u;
}
