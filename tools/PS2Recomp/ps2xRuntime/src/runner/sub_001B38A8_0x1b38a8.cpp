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

// Function: sub_001B38A8
// Address: 0x1b38a8 - 0x1b3b80
void sub_001B38A8_0x1b38a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B38A8_0x1b38a8");
#endif

    switch (ctx->pc) {
        case 0x1b3910u: goto label_1b3910;
        default: break;
    }

    ctx->pc = 0x1b38a8u;

    // 0x1b38a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b38a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b38ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b38acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b38b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b38b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b38b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b38b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38b8: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x1b38b8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1b38bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b38bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38c0: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x1b38c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1b38c4: 0x46008e46  mov.s       $f25, $f17
    ctx->pc = 0x1b38c4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[17]);
    // 0x1b38c8: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x1b38c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b38cc: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x1b38ccu;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x1b38d0: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x1b38d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b38d4: 0x46009dc6  mov.s       $f23, $f19
    ctx->pc = 0x1b38d4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[19]);
    // 0x1b38d8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1b38d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b38dc: 0x46009586  mov.s       $f22, $f18
    ctx->pc = 0x1b38dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[18]);
    // 0x1b38e0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1b38e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b38e4: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x1b38e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x1b38e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b38e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b38ec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b38ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b38f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b38f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b38f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b38f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b38f8: 0xe7ad0000  swc1        $f13, 0x0($sp)
    ctx->pc = 0x1b38f8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b38fc: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B38FCu;
    {
        const bool branch_taken_0x1b38fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38FCu;
        // 0x1b3900: 0xe7af0004  swc1        $f15, 0x4($sp) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b38fc) {
            ctx->pc = 0x1B3978u;
            goto label_1b3978;
        }
    }
    ctx->pc = 0x1B3904u;
    // 0x1b3904: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1b3904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3908: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B3908u;
    SET_GPR_U32(ctx, 31, 0x1B3910u);
    ctx->pc = 0x1B390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3908u;
    // 0x1b390c: 0x27b30004  addiu       $s3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B3908u, 0x1B3910u)) {
        return;
    }
    ctx->pc = 0x1B3910u;
label_1b3910:
    // 0x1b3910: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3910u;
    {
        const bool branch_taken_0x1b3910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3910) {
            ctx->pc = 0x1B3934u;
            goto label_1b3934;
        }
    }
    ctx->pc = 0x1B3918u;
    // 0x1b3918: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x1b3918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x1b391c: 0x34210901  ori         $at, $at, 0x901
    ctx->pc = 0x1b391cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2305);
    // 0x1b3920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3924: 0x0  nop
    ctx->pc = 0x1b3924u;
    // NOP
    // 0x1b3928: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1b3928u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b392c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B392Cu;
    {
        const bool branch_taken_0x1b392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B392Cu;
        // 0x1b3930: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b392c) {
            ctx->pc = 0x1B3954u;
            goto label_1b3954;
        }
    }
    ctx->pc = 0x1B3934u;
label_1b3934:
    // 0x1b3934: 0x3c0142e4  lui         $at, 0x42E4
    ctx->pc = 0x1b3934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17124 << 16));
    // 0x1b3938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b393c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1b393cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1b3940: 0x3421300c  ori         $at, $at, 0x300C
    ctx->pc = 0x1b3940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12300);
    // 0x1b3944: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3948: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1b3948u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b394c: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x1b394cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b3950: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x1b3950u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1b3954:
    // 0x1b3954: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1b3954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3958: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x1b3958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x1b395c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b395cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3960: 0x0  nop
    ctx->pc = 0x1b3960u;
    // NOP
    // 0x1b3964: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b3964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b3968: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1b3968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1b396c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1b396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3970: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b3970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b3974: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x1b3974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1b3978:
    // 0x1b3978: 0x12000073  beqz        $s0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1B3978u;
    {
        const bool branch_taken_0x1b3978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3978u;
        // 0x1b397c: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3978) {
            ctx->pc = 0x1B3B48u;
            goto label_1b3b48;
        }
    }
    ctx->pc = 0x1B3980u;
    // 0x1b3980: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x1b3980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b3984: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x1b3984u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b3988: 0xe6180008  swc1        $f24, 0x8($s0)
    ctx->pc = 0x1b3988u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b398c: 0xe6190018  swc1        $f25, 0x18($s0)
    ctx->pc = 0x1b398cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1b3990: 0xe6160010  swc1        $f22, 0x10($s0)
    ctx->pc = 0x1b3990u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b3994: 0xe6170014  swc1        $f23, 0x14($s0)
    ctx->pc = 0x1b3994u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1b3998: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b3998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b399c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b399cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b39a0: 0x0  nop
    ctx->pc = 0x1b39a0u;
    // NOP
    // 0x1b39a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b39a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b39a8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b39a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1b39ac: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b39acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b39b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b39b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b39b4: 0x0  nop
    ctx->pc = 0x1b39b4u;
    // NOP
    // 0x1b39b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b39b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b39bc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1b39bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1b39c0: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x1b39c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1b39c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b39c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b39c8: 0x0  nop
    ctx->pc = 0x1b39c8u;
    // NOP
    // 0x1b39cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b39ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b39d0: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1b39d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1b39d4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1b39d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1b39d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b39d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b39dc: 0x0  nop
    ctx->pc = 0x1b39dcu;
    // NOP
    // 0x1b39e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b39e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b39e4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1b39e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1b39e8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1b39e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1b39ec: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1b39ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b39f0: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x1b39f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b39f4: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x1b39f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1b39f8: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x1b39f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b39fc: 0x4603b8c0  add.s       $f3, $f23, $f3
    ctx->pc = 0x1b39fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[3]);
    // 0x1b3a00: 0xe6180008  swc1        $f24, 0x8($s0)
    ctx->pc = 0x1b3a00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b3a04: 0xe6190018  swc1        $f25, 0x18($s0)
    ctx->pc = 0x1b3a04u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1b3a08: 0xe6160010  swc1        $f22, 0x10($s0)
    ctx->pc = 0x1b3a08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b3a0c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1b3a0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b3a10: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x1b3a10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1b3a14: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b3a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b3a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3a1c: 0x0  nop
    ctx->pc = 0x1b3a1cu;
    // NOP
    // 0x1b3a20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3a24: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b3a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1b3a28: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b3a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b3a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3a30: 0x0  nop
    ctx->pc = 0x1b3a30u;
    // NOP
    // 0x1b3a34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3a38: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1b3a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1b3a3c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x1b3a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1b3a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3a44: 0x0  nop
    ctx->pc = 0x1b3a44u;
    // NOP
    // 0x1b3a48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3a4c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1b3a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1b3a50: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1b3a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1b3a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3a58: 0x0  nop
    ctx->pc = 0x1b3a58u;
    // NOP
    // 0x1b3a5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3a60: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1b3a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1b3a64: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1b3a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1b3a68: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x1b3a68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b3a6c: 0x4615a140  add.s       $f5, $f20, $f21
    ctx->pc = 0x1b3a6cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1b3a70: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1b3a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3a74: 0xe6170014  swc1        $f23, 0x14($s0)
    ctx->pc = 0x1b3a74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1b3a78: 0x4601b040  add.s       $f1, $f22, $f1
    ctx->pc = 0x1b3a78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x1b3a7c: 0xe6180008  swc1        $f24, 0x8($s0)
    ctx->pc = 0x1b3a7cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b3a80: 0xe6050000  swc1        $f5, 0x0($s0)
    ctx->pc = 0x1b3a80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b3a84: 0xe6190018  swc1        $f25, 0x18($s0)
    ctx->pc = 0x1b3a84u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1b3a88: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x1b3a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b3a8c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b3a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b3a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3a94: 0x0  nop
    ctx->pc = 0x1b3a94u;
    // NOP
    // 0x1b3a98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3a9c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b3a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1b3aa0: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b3aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b3aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3aa8: 0x0  nop
    ctx->pc = 0x1b3aa8u;
    // NOP
    // 0x1b3aac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3ab0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1b3ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1b3ab4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x1b3ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1b3ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3abc: 0x0  nop
    ctx->pc = 0x1b3abcu;
    // NOP
    // 0x1b3ac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3ac4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1b3ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1b3ac8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1b3ac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1b3acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3ad0: 0x0  nop
    ctx->pc = 0x1b3ad0u;
    // NOP
    // 0x1b3ad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3ad8: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1b3ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1b3adc: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1b3adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1b3ae0: 0xe6050000  swc1        $f5, 0x0($s0)
    ctx->pc = 0x1b3ae0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b3ae4: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1b3ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b3ae8: 0xe6180008  swc1        $f24, 0x8($s0)
    ctx->pc = 0x1b3ae8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b3aec: 0xe6190018  swc1        $f25, 0x18($s0)
    ctx->pc = 0x1b3aecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1b3af0: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x1b3af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b3af4: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x1b3af4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1b3af8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b3af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b3afc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3b00: 0x0  nop
    ctx->pc = 0x1b3b00u;
    // NOP
    // 0x1b3b04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3b08: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b3b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1b3b0c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b3b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b3b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3b14: 0x0  nop
    ctx->pc = 0x1b3b14u;
    // NOP
    // 0x1b3b18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3b1c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1b3b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1b3b20: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x1b3b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1b3b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3b28: 0x0  nop
    ctx->pc = 0x1b3b28u;
    // NOP
    // 0x1b3b2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3b30: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1b3b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1b3b34: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1b3b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1b3b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3b3c: 0x0  nop
    ctx->pc = 0x1b3b3cu;
    // NOP
    // 0x1b3b40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3b44: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1b3b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1b3b48:
    // 0x1b3b48: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b3b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3b4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b3b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3b50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b3b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3b54: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b3b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3b5c: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x1b3b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1b3b60: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x1b3b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1b3b64: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x1b3b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b3b68: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x1b3b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b3b6c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1b3b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b3b70: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1b3b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B74u;
        // 0x1b3b78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3B7Cu;
    // 0x1b3b7c: 0x0  nop
    ctx->pc = 0x1b3b7cu;
    // NOP
    ctx->pc = 0x1b3b80u;
}
