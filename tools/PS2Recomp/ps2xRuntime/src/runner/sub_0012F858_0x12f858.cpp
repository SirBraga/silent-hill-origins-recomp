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

// Function: sub_0012F858
// Address: 0x12f858 - 0x130028
void sub_0012F858_0x12f858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F858_0x12f858");
#endif

    switch (ctx->pc) {
        case 0x12f888u: goto label_12f888;
        case 0x12f8a0u: goto label_12f8a0;
        case 0x12f8c8u: goto label_12f8c8;
        case 0x12f8f4u: goto label_12f8f4;
        case 0x12f920u: goto label_12f920;
        case 0x12f9e4u: goto label_12f9e4;
        case 0x12fa44u: goto label_12fa44;
        case 0x12fac8u: goto label_12fac8;
        case 0x12fb28u: goto label_12fb28;
        case 0x12fcbcu: goto label_12fcbc;
        case 0x12fd78u: goto label_12fd78;
        case 0x12fd90u: goto label_12fd90;
        case 0x12fea4u: goto label_12fea4;
        default: break;
    }

    ctx->pc = 0x12f858u;

    // 0x12f858: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x12f858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x12f85c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x12f85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x12f860: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f864: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x12f864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x12f868: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f86c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x12f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x12f870: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12f870u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x12f874: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x12f874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x12f878: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x12f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x12f87c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12f87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12f880: 0xc049764  jal         func_125D90
    ctx->pc = 0x12F880u;
    SET_GPR_U32(ctx, 31, 0x12F888u);
    ctx->pc = 0x12F884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F880u;
    // 0x12f884: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125D90u, 0x12F880u, 0x12F888u)) {
        return;
    }
    ctx->pc = 0x12F888u;
label_12f888:
    // 0x12f888: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x12f888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f88c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x12f88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x12f890: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12f890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x12f894: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12f894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f898: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x12F898u;
    SET_GPR_U32(ctx, 31, 0x12F8A0u);
    ctx->pc = 0x12F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F898u;
    // 0x12f89c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x12F898u, 0x12F8A0u)) {
        return;
    }
    ctx->pc = 0x12F8A0u;
label_12f8a0:
    // 0x12f8a0: 0x0  nop
    ctx->pc = 0x12f8a0u;
    // NOP
    // 0x12f8a4: 0x0  nop
    ctx->pc = 0x12f8a4u;
    // NOP
    // 0x12f8a8: 0x46000044  c1          0x44
    ctx->pc = 0x12f8a8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x12f8ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f8b0: 0x0  nop
    ctx->pc = 0x12f8b0u;
    // NOP
    // 0x12f8b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12f8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f8b8: 0x0  nop
    ctx->pc = 0x12f8b8u;
    // NOP
    // 0x12f8bc: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x12F8BCu;
    {
        const bool branch_taken_0x12f8bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8BCu;
        // 0x12f8c0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8bc) {
            ctx->pc = 0x12F974u;
            goto label_12f974;
        }
    }
    ctx->pc = 0x12F8C4u;
    // 0x12f8c4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x12f8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f8c8:
    // 0x12f8c8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x12f8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f8cc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x12f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f8d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12f8d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x12f8d4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12f8d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12f8d8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12f8d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x12f8dc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x12f8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x12f8e0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x12f8e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x12f8e4: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x12f8e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x12f8e8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f8ec: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x12F8ECu;
    SET_GPR_U32(ctx, 31, 0x12F8F4u);
    ctx->pc = 0x12F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F8ECu;
    // 0x12f8f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x12F8ECu, 0x12F8F4u)) {
        return;
    }
    ctx->pc = 0x12F8F4u;
label_12f8f4:
    // 0x12f8f4: 0x0  nop
    ctx->pc = 0x12f8f4u;
    // NOP
    // 0x12f8f8: 0x0  nop
    ctx->pc = 0x12f8f8u;
    // NOP
    // 0x12f8fc: 0x46000044  c1          0x44
    ctx->pc = 0x12f8fcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x12f900: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f904: 0x0  nop
    ctx->pc = 0x12f904u;
    // NOP
    // 0x12f908: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12f908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f90c: 0x0  nop
    ctx->pc = 0x12f90cu;
    // NOP
    // 0x12f910: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x12F910u;
    {
        const bool branch_taken_0x12f910 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F910u;
        // 0x12f914: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f910) {
            ctx->pc = 0x12F95Cu;
            goto label_12f95c;
        }
    }
    ctx->pc = 0x12F918u;
    // 0x12f918: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x12f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f91c: 0x0  nop
    ctx->pc = 0x12f91cu;
    // NOP
label_12f920:
    // 0x12f920: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x12f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f924: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x12f924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f928: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12f928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x12f92c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12f92cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12f930: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12f930u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x12f934: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12f934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12f938: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12f938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12f93c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x12f93cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x12f940: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12f940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x12f944: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x12f944u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33830Cu));
    // 0x12f948: 0x8c6201a8  lw          $v0, 0x1A8($v1)
    ctx->pc = 0x12f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x12f94c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12F94Cu;
    {
        const bool branch_taken_0x12f94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F94Cu;
        // 0x12f950: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f94c) {
            ctx->pc = 0x12F98Cu;
            goto label_12f98c;
        }
    }
    ctx->pc = 0x12F954u;
    // 0x12f954: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12F954u;
    {
        const bool branch_taken_0x12f954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F954u;
        // 0x12f958: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f954) {
            ctx->pc = 0x12F990u;
            goto label_12f990;
        }
    }
    ctx->pc = 0x12F95Cu;
label_12f95c:
    // 0x12f95c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12f960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f964: 0x0  nop
    ctx->pc = 0x12f964u;
    // NOP
    // 0x12f968: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x12f968u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x12f96c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12F96Cu;
    {
        const bool branch_taken_0x12f96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F96Cu;
        // 0x12f970: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f96c) {
            ctx->pc = 0x12F920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f920;
        }
    }
    ctx->pc = 0x12F974u;
label_12f974:
    // 0x12f974: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12f978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f97c: 0x0  nop
    ctx->pc = 0x12f97cu;
    // NOP
    // 0x12f980: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x12f980u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x12f984: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x12F984u;
    {
        const bool branch_taken_0x12f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F984u;
        // 0x12f988: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f984) {
            ctx->pc = 0x12F8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f8c8;
        }
    }
    ctx->pc = 0x12F98Cu;
label_12f98c:
    // 0x12f98c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12f98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f990:
    // 0x12f990: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F990u;
    {
        const bool branch_taken_0x12f990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F990u;
        // 0x12f994: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f990) {
            ctx->pc = 0x12F9A8u;
            goto label_12f9a8;
        }
    }
    ctx->pc = 0x12F998u;
    // 0x12f998: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x12f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12f99c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12f9a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f9a4: 0x8c5200d8  lw          $s2, 0xD8($v0)
    ctx->pc = 0x12f9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_12f9a8:
    // 0x12f9a8: 0x12400197  beqz        $s2, . + 4 + (0x197 << 2)
    ctx->pc = 0x12F9A8u;
    {
        const bool branch_taken_0x12f9a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9A8u;
        // 0x12f9ac: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9a8) {
            ctx->pc = 0x130008u;
            goto label_130008;
        }
    }
    ctx->pc = 0x12F9B0u;
    // 0x12f9b0: 0x8e221924  lw          $v0, 0x1924($s1)
    ctx->pc = 0x12f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6436)));
    // 0x12f9b4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x12F9B4u;
    {
        const bool branch_taken_0x12f9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9b4) {
            ctx->pc = 0x12FAA8u;
            goto label_12faa8;
        }
    }
    ctx->pc = 0x12F9BCu;
    // 0x12f9bc: 0x1242003a  beq         $s2, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x12F9BCu;
    {
        const bool branch_taken_0x12f9bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f9bc) {
            ctx->pc = 0x12FAA8u;
            goto label_12faa8;
        }
    }
    ctx->pc = 0x12F9C4u;
    // 0x12f9c4: 0x6a221917  ldl         $v0, 0x1917($s1)
    ctx->pc = 0x12f9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12f9c8: 0x6e221910  ldr         $v0, 0x1910($s1)
    ctx->pc = 0x12f9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12f9cc: 0x8e231918  lw          $v1, 0x1918($s1)
    ctx->pc = 0x12f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6424)));
    // 0x12f9d0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x12f9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12f9d4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x12f9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12f9d8: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x12f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x12f9dc: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x12F9DCu;
    SET_GPR_U32(ctx, 31, 0x12F9E4u);
    ctx->pc = 0x12F9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F9DCu;
    // 0x12f9e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x12F9DCu, 0x12F9E4u)) {
        return;
    }
    ctx->pc = 0x12F9E4u;
label_12f9e4:
    // 0x12f9e4: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x12f9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12f9e8: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x12f9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12f9ec: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x12f9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12f9f0: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x12f9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12f9f4: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x12f9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12f9f8: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x12f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x12f9fc: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x12f9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x12fa00: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12fa00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x12fa04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12fa04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fa08: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x12fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fa0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12fa0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fa10: 0x0  nop
    ctx->pc = 0x12fa10u;
    // NOP
    // 0x12fa14: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x12FA14u;
    {
        const bool branch_taken_0x12fa14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fa14) {
            ctx->pc = 0x12FA3Cu;
            goto label_12fa3c;
        }
    }
    ctx->pc = 0x12FA1Cu;
    // 0x12fa1c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x12fa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x12fa20: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12fa20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x12fa24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12fa24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fa28: 0x0  nop
    ctx->pc = 0x12fa28u;
    // NOP
    // 0x12fa2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12fa2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fa30: 0x0  nop
    ctx->pc = 0x12fa30u;
    // NOP
    // 0x12fa34: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x12FA34u;
    {
        const bool branch_taken_0x12fa34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA34u;
        // 0x12fa38: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa34) {
            ctx->pc = 0x12FA60u;
            goto label_12fa60;
        }
    }
    ctx->pc = 0x12FA3Cu;
label_12fa3c:
    // 0x12fa3c: 0xc04f0e2  jal         func_13C388
    ctx->pc = 0x12FA3Cu;
    SET_GPR_U32(ctx, 31, 0x12FA44u);
    ctx->pc = 0x12FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA3Cu;
    // 0x12fa40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C388u, 0x12FA3Cu, 0x12FA44u)) {
        return;
    }
    ctx->pc = 0x12FA44u;
label_12fa44:
    // 0x12fa44: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x12fa44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12fa48: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x12fa48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12fa4c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x12fa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12fa50: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x12fa50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fa54: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x12fa54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fa58: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x12fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x12fa5c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x12fa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12fa60:
    // 0x12fa60: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x12fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12fa64: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12fa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa68: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x12fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fa6c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12fa6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x12fa70: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x12fa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fa74: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x12fa74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x12fa78: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x12fa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12fa7c: 0xc6241934  lwc1        $f4, 0x1934($s1)
    ctx->pc = 0x12fa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12fa80: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12fa80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12fa84: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12fa84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12fa88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12fa88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12fa8c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x12fa8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fa90: 0x0  nop
    ctx->pc = 0x12fa90u;
    // NOP
    // 0x12fa94: 0x4502003f  bc1fl       . + 4 + (0x3F << 2)
    ctx->pc = 0x12FA94u;
    {
        const bool branch_taken_0x12fa94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fa94) {
            ctx->pc = 0x12FA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FA94u;
            // 0x12fa98: 0x8e2318dc  lw          $v1, 0x18DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FB94u;
            goto label_12fb94;
        }
    }
    ctx->pc = 0x12FA9Cu;
    // 0x12fa9c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12fa9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12faa0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x12FAA0u;
    {
        const bool branch_taken_0x12faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAA0u;
        // 0x12faa4: 0xae201920  sw          $zero, 0x1920($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12faa0) {
            ctx->pc = 0x12FB90u;
            goto label_12fb90;
        }
    }
    ctx->pc = 0x12FAA8u;
label_12faa8:
    // 0x12faa8: 0x6a221917  ldl         $v0, 0x1917($s1)
    ctx->pc = 0x12faa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12faac: 0x6e221910  ldr         $v0, 0x1910($s1)
    ctx->pc = 0x12faacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12fab0: 0x8e231918  lw          $v1, 0x1918($s1)
    ctx->pc = 0x12fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6424)));
    // 0x12fab4: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x12fab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fab8: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x12fab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fabc: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x12fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x12fac0: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x12FAC0u;
    SET_GPR_U32(ctx, 31, 0x12FAC8u);
    ctx->pc = 0x12FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FAC0u;
    // 0x12fac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x12FAC0u, 0x12FAC8u)) {
        return;
    }
    ctx->pc = 0x12FAC8u;
label_12fac8:
    // 0x12fac8: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x12fac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12facc: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x12faccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12fad0: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x12fad0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12fad4: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x12fad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fad8: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x12fad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fadc: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x12fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x12fae0: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x12fae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x12fae4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12fae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x12fae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12fae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12faec: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x12faecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12faf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12faf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12faf4: 0x0  nop
    ctx->pc = 0x12faf4u;
    // NOP
    // 0x12faf8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x12FAF8u;
    {
        const bool branch_taken_0x12faf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12faf8) {
            ctx->pc = 0x12FB20u;
            goto label_12fb20;
        }
    }
    ctx->pc = 0x12FB00u;
    // 0x12fb00: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x12fb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x12fb04: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12fb04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x12fb08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12fb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fb0c: 0x0  nop
    ctx->pc = 0x12fb0cu;
    // NOP
    // 0x12fb10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12fb10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fb14: 0x0  nop
    ctx->pc = 0x12fb14u;
    // NOP
    // 0x12fb18: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x12FB18u;
    {
        const bool branch_taken_0x12fb18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB18u;
        // 0x12fb1c: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb18) {
            ctx->pc = 0x12FB44u;
            goto label_12fb44;
        }
    }
    ctx->pc = 0x12FB20u;
label_12fb20:
    // 0x12fb20: 0xc04f0e2  jal         func_13C388
    ctx->pc = 0x12FB20u;
    SET_GPR_U32(ctx, 31, 0x12FB28u);
    ctx->pc = 0x12FB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB20u;
    // 0x12fb24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C388u, 0x12FB20u, 0x12FB28u)) {
        return;
    }
    ctx->pc = 0x12FB28u;
label_12fb28:
    // 0x12fb28: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x12fb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12fb2c: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x12fb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12fb30: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x12fb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12fb34: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x12fb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fb38: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x12fb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fb3c: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x12fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x12fb40: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x12fb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12fb44:
    // 0x12fb44: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x12fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12fb48: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fb4c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x12fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fb50: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12fb50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x12fb54: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x12fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fb58: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x12fb58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x12fb5c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x12fb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12fb60: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x12fb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x12fb64: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12fb64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12fb68: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12fb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12fb6c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12fb6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12fb70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12fb70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12fb74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12fb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12fb78: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x12fb78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fb7c: 0x0  nop
    ctx->pc = 0x12fb7cu;
    // NOP
    // 0x12fb80: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x12FB80u;
    {
        const bool branch_taken_0x12fb80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fb80) {
            ctx->pc = 0x12FB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FB80u;
            // 0x12fb84: 0x8e2318dc  lw          $v1, 0x18DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FB94u;
            goto label_12fb94;
        }
    }
    ctx->pc = 0x12FB88u;
    // 0x12fb88: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12fb88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fb8c: 0xae331920  sw          $s3, 0x1920($s1)
    ctx->pc = 0x12fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6432), GPR_U32(ctx, 19));
label_12fb90:
    // 0x12fb90: 0x8e2318dc  lw          $v1, 0x18DC($s1)
    ctx->pc = 0x12fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6364)));
label_12fb94:
    // 0x12fb94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fb98: 0x10640022  beq         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12FB98u;
    {
        const bool branch_taken_0x12fb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x12FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB98u;
        // 0x12fb9c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb98) {
            ctx->pc = 0x12FC24u;
            goto label_12fc24;
        }
    }
    ctx->pc = 0x12FBA0u;
    // 0x12fba0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FBA0u;
    {
        const bool branch_taken_0x12fba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBA0u;
        // 0x12fba4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fba0) {
            ctx->pc = 0x12FBB8u;
            goto label_12fbb8;
        }
    }
    ctx->pc = 0x12FBA8u;
    // 0x12fba8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12FBA8u;
    {
        const bool branch_taken_0x12fba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fba8) {
            ctx->pc = 0x12FBD0u;
            goto label_12fbd0;
        }
    }
    ctx->pc = 0x12FBB0u;
    // 0x12fbb0: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x12FBB0u;
    {
        const bool branch_taken_0x12fbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBB0u;
        // 0x12fbb4: 0xae321924  sw          $s2, 0x1924($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbb0) {
            ctx->pc = 0x12FFECu;
            goto label_12ffec;
        }
    }
    ctx->pc = 0x12FBB8u;
label_12fbb8:
    // 0x12fbb8: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x12FBB8u;
    {
        const bool branch_taken_0x12fbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBB8u;
        // 0x12fbbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbb8) {
            ctx->pc = 0x12FC64u;
            goto label_12fc64;
        }
    }
    ctx->pc = 0x12FBC0u;
    // 0x12fbc0: 0x5062005d  beql        $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x12FBC0u;
    {
        const bool branch_taken_0x12fbc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12fbc0) {
            ctx->pc = 0x12FBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FBC0u;
            // 0x12fbc4: 0xc6201938  lwc1        $f0, 0x1938($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD38u;
            goto label_12fd38;
        }
    }
    ctx->pc = 0x12FBC8u;
    // 0x12fbc8: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x12FBC8u;
    {
        const bool branch_taken_0x12fbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBC8u;
        // 0x12fbcc: 0xae321924  sw          $s2, 0x1924($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbc8) {
            ctx->pc = 0x12FFECu;
            goto label_12ffec;
        }
    }
    ctx->pc = 0x12FBD0u;
label_12fbd0:
    // 0x12fbd0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x12fbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12fbd4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x12fbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12fbd8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fbdc: 0xb22218f7  sdl         $v0, 0x18F7($s1)
    ctx->pc = 0x12fbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fbe0: 0xb62218f0  sdr         $v0, 0x18F0($s1)
    ctx->pc = 0x12fbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fbe4: 0xae2318f8  sw          $v1, 0x18F8($s1)
    ctx->pc = 0x12fbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6392), GPR_U32(ctx, 3));
    // 0x12fbe8: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x12fbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12fbec: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x12fbecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12fbf0: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x12fbf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fbf4: 0xb2271917  sdl         $a3, 0x1917($s1)
    ctx->pc = 0x12fbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fbf8: 0xb6271910  sdr         $a3, 0x1910($s1)
    ctx->pc = 0x12fbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fbfc: 0xae281918  sw          $t0, 0x1918($s1)
    ctx->pc = 0x12fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6424), GPR_U32(ctx, 8));
    // 0x12fc00: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x12fc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12fc04: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x12fc04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12fc08: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x12fc08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12fc0c: 0xb2251907  sdl         $a1, 0x1907($s1)
    ctx->pc = 0x12fc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc10: 0xb6251900  sdr         $a1, 0x1900($s1)
    ctx->pc = 0x12fc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc14: 0xae261908  sw          $a2, 0x1908($s1)
    ctx->pc = 0x12fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6408), GPR_U32(ctx, 6));
    // 0x12fc18: 0xae2418dc  sw          $a0, 0x18DC($s1)
    ctx->pc = 0x12fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6364), GPR_U32(ctx, 4));
    // 0x12fc1c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x12FC1Cu;
    {
        const bool branch_taken_0x12fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC1Cu;
        // 0x12fc20: 0xae321924  sw          $s2, 0x1924($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc1c) {
            ctx->pc = 0x12FFE8u;
            goto label_12ffe8;
        }
    }
    ctx->pc = 0x12FC24u;
label_12fc24:
    // 0x12fc24: 0x16600029  bnez        $s3, . + 4 + (0x29 << 2)
    ctx->pc = 0x12FC24u;
    {
        const bool branch_taken_0x12fc24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fc24) {
            ctx->pc = 0x12FCCCu;
            goto label_12fccc;
        }
    }
    ctx->pc = 0x12FC2Cu;
    // 0x12fc2c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x12fc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12fc30: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x12fc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12fc34: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fc38: 0xb22218f7  sdl         $v0, 0x18F7($s1)
    ctx->pc = 0x12fc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc3c: 0xb62218f0  sdr         $v0, 0x18F0($s1)
    ctx->pc = 0x12fc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc40: 0xae2318f8  sw          $v1, 0x18F8($s1)
    ctx->pc = 0x12fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6392), GPR_U32(ctx, 3));
    // 0x12fc44: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x12fc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12fc48: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x12fc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12fc4c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x12fc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12fc50: 0xb2261907  sdl         $a2, 0x1907($s1)
    ctx->pc = 0x12fc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc54: 0xb6261900  sdr         $a2, 0x1900($s1)
    ctx->pc = 0x12fc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fc58: 0xae271908  sw          $a3, 0x1908($s1)
    ctx->pc = 0x12fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6408), GPR_U32(ctx, 7));
    // 0x12fc5c: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x12FC5Cu;
    {
        const bool branch_taken_0x12fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC5Cu;
        // 0x12fc60: 0xae321924  sw          $s2, 0x1924($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc5c) {
            ctx->pc = 0x12FFECu;
            goto label_12ffec;
        }
    }
    ctx->pc = 0x12FC64u;
label_12fc64:
    // 0x12fc64: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FC64u;
    {
        const bool branch_taken_0x12fc64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC64u;
        // 0x12fc68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc64) {
            ctx->pc = 0x12FC78u;
            goto label_12fc78;
        }
    }
    ctx->pc = 0x12FC6Cu;
    // 0x12fc6c: 0x8e221920  lw          $v0, 0x1920($s1)
    ctx->pc = 0x12fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6432)));
    // 0x12fc70: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12FC70u;
    {
        const bool branch_taken_0x12fc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc70) {
            ctx->pc = 0x12FC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FC70u;
            // 0x12fc74: 0x8e500078  lw          $s0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FC78u;
            goto label_12fc78;
        }
    }
    ctx->pc = 0x12FC78u;
label_12fc78:
    // 0x12fc78: 0xc6201938  lwc1        $f0, 0x1938($s1)
    ctx->pc = 0x12fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fc7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc80: 0xc621193c  lwc1        $f1, 0x193C($s1)
    ctx->pc = 0x12fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fc84: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12fc88: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12fc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12fc8c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12fc8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x12fc90: 0xc62c1940  lwc1        $f12, 0x1940($s1)
    ctx->pc = 0x12fc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12fc94: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x12fc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12fc98: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x12fc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12fc9c: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x12fc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fca0: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x12fca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fca4: 0x6a2318eb  ldl         $v1, 0x18EB($s1)
    ctx->pc = 0x12fca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6379); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12fca8: 0x6e2318e4  ldr         $v1, 0x18E4($s1)
    ctx->pc = 0x12fca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6372); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12fcac: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x12fcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcb0: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x12fcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fcb4: 0xc04dbba  jal         func_136EE8
    ctx->pc = 0x12FCB4u;
    SET_GPR_U32(ctx, 31, 0x12FCBCu);
    ctx->pc = 0x12FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCB4u;
    // 0x12fcb8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136EE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x136EE8u, 0x12FCB4u, 0x12FCBCu)) {
        return;
    }
    ctx->pc = 0x12FCBCu;
label_12fcbc:
    // 0x12fcbc: 0x544000ca  bnel        $v0, $zero, . + 4 + (0xCA << 2)
    ctx->pc = 0x12FCBCu;
    {
        const bool branch_taken_0x12fcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fcbc) {
            ctx->pc = 0x12FCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FCBCu;
            // 0x12fcc0: 0xae2018dc  sw          $zero, 0x18DC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 6364), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FFE8u;
            goto label_12ffe8;
        }
    }
    ctx->pc = 0x12FCC4u;
    // 0x12fcc4: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x12FCC4u;
    {
        const bool branch_taken_0x12fcc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcc4) {
            ctx->pc = 0x12FD04u;
            goto label_12fd04;
        }
    }
    ctx->pc = 0x12FCCCu;
label_12fccc:
    // 0x12fccc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12fcccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12fcd0: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FCD0u;
    {
        const bool branch_taken_0x12fcd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcd0) {
            ctx->pc = 0x12FCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FCD0u;
            // 0x12fcd4: 0xc6201938  lwc1        $f0, 0x1938($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FCE8u;
            goto label_12fce8;
        }
    }
    ctx->pc = 0x12FCD8u;
    // 0x12fcd8: 0x8e221920  lw          $v0, 0x1920($s1)
    ctx->pc = 0x12fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6432)));
    // 0x12fcdc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12FCDCu;
    {
        const bool branch_taken_0x12fcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcdc) {
            ctx->pc = 0x12FCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FCDCu;
            // 0x12fce0: 0xc642007c  lwc1        $f2, 0x7C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FCE4u;
            goto label_12fce4;
        }
    }
    ctx->pc = 0x12FCE4u;
label_12fce4:
    // 0x12fce4: 0xc6201938  lwc1        $f0, 0x1938($s1)
    ctx->pc = 0x12fce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12fce8:
    // 0x12fce8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fcec: 0xc621193c  lwc1        $f1, 0x193C($s1)
    ctx->pc = 0x12fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fcf0: 0xe62218e0  swc1        $f2, 0x18E0($s1)
    ctx->pc = 0x12fcf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6368), bits); }
    // 0x12fcf4: 0xe62018e4  swc1        $f0, 0x18E4($s1)
    ctx->pc = 0x12fcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6372), bits); }
    // 0x12fcf8: 0xe62118e8  swc1        $f1, 0x18E8($s1)
    ctx->pc = 0x12fcf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6376), bits); }
    // 0x12fcfc: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x12FCFCu;
    {
        const bool branch_taken_0x12fcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCFCu;
        // 0x12fd00: 0xae2218dc  sw          $v0, 0x18DC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcfc) {
            ctx->pc = 0x12FFE8u;
            goto label_12ffe8;
        }
    }
    ctx->pc = 0x12FD04u;
label_12fd04:
    // 0x12fd04: 0x520000b9  beql        $s0, $zero, . + 4 + (0xB9 << 2)
    ctx->pc = 0x12FD04u;
    {
        const bool branch_taken_0x12fd04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd04) {
            ctx->pc = 0x12FD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FD04u;
            // 0x12fd08: 0xae321924  sw          $s2, 0x1924($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 6436), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FFECu;
            goto label_12ffec;
        }
    }
    ctx->pc = 0x12FD0Cu;
    // 0x12fd0c: 0xc62018e0  lwc1        $f0, 0x18E0($s1)
    ctx->pc = 0x12fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fd10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12fd10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fd14: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x12fd14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x12fd18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12fd18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fd1c: 0x0  nop
    ctx->pc = 0x12fd1cu;
    // NOP
    // 0x12fd20: 0x450000b1  bc1f        . + 4 + (0xB1 << 2)
    ctx->pc = 0x12FD20u;
    {
        const bool branch_taken_0x12fd20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD20u;
        // 0x12fd24: 0xe62018e0  swc1        $f0, 0x18E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd20) {
            ctx->pc = 0x12FFE8u;
            goto label_12ffe8;
        }
    }
    ctx->pc = 0x12FD28u;
    // 0x12fd28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12fd2c: 0xe62118e0  swc1        $f1, 0x18E0($s1)
    ctx->pc = 0x12fd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6368), bits); }
    // 0x12fd30: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x12FD30u;
    {
        const bool branch_taken_0x12fd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD30u;
        // 0x12fd34: 0xae2218dc  sw          $v0, 0x18DC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd30) {
            ctx->pc = 0x12FFE8u;
            goto label_12ffe8;
        }
    }
    ctx->pc = 0x12FD38u;
label_12fd38:
    // 0x12fd38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd3c: 0xc621193c  lwc1        $f1, 0x193C($s1)
    ctx->pc = 0x12fd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fd40: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12fd44: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12fd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12fd48: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12fd48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x12fd4c: 0xc62c1940  lwc1        $f12, 0x1940($s1)
    ctx->pc = 0x12fd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12fd50: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x12fd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12fd54: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x12fd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12fd58: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x12fd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fd5c: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x12fd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fd60: 0x6a2318eb  ldl         $v1, 0x18EB($s1)
    ctx->pc = 0x12fd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6379); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12fd64: 0x6e2318e4  ldr         $v1, 0x18E4($s1)
    ctx->pc = 0x12fd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6372); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12fd68: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x12fd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fd6c: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x12fd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fd70: 0xc04dbba  jal         func_136EE8
    ctx->pc = 0x12FD70u;
    SET_GPR_U32(ctx, 31, 0x12FD78u);
    ctx->pc = 0x12FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD70u;
    // 0x12fd74: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136EE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x136EE8u, 0x12FD70u, 0x12FD78u)) {
        return;
    }
    ctx->pc = 0x12FD78u;
label_12fd78:
    // 0x12fd78: 0x5440009b  bnel        $v0, $zero, . + 4 + (0x9B << 2)
    ctx->pc = 0x12FD78u;
    {
        const bool branch_taken_0x12fd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fd78) {
            ctx->pc = 0x12FD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FD78u;
            // 0x12fd7c: 0xae2018dc  sw          $zero, 0x18DC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 6364), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FFE8u;
            goto label_12ffe8;
        }
    }
    ctx->pc = 0x12FD80u;
    // 0x12fd80: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x12FD80u;
    {
        const bool branch_taken_0x12fd80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd80) {
            ctx->pc = 0x12FDA4u;
            goto label_12fda4;
        }
    }
    ctx->pc = 0x12FD88u;
    // 0x12fd88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12FD88u;
    {
        const bool branch_taken_0x12fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD88u;
        // 0x12fd8c: 0xc6430080  lwc1        $f3, 0x80($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd88) {
            ctx->pc = 0x12FDACu;
            goto label_12fdac;
        }
    }
    ctx->pc = 0x12FD90u;
label_12fd90:
    // 0x12fd90: 0x0  nop
    ctx->pc = 0x12fd90u;
    // NOP
    // 0x12fd94: 0x0  nop
    ctx->pc = 0x12fd94u;
    // NOP
    // 0x12fd98: 0x4602a0c3  div.s       $f3, $f20, $f2
    ctx->pc = 0x12fd98u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[2]);
    // 0x12fd9c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x12FD9Cu;
    {
        const bool branch_taken_0x12fd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD9Cu;
        // 0x12fda0: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd9c) {
            ctx->pc = 0x12FED0u;
            goto label_12fed0;
        }
    }
    ctx->pc = 0x12FDA4u;
label_12fda4:
    // 0x12fda4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12fda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12fda8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12fda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12fdac:
    // 0x12fdac: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x12fdacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12fdb0: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x12fdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12fdb4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x12fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fdb8: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x12fdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fdbc: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x12fdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fdc0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x12fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x12fdc4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x12fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fdc8: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x12fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fdcc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12fdccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12fdd0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12fdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fdd4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12fdd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x12fdd8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12fdd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x12fddc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x12fddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x12fde0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x12fde0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x12fde4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12fde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x12fde8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12fde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12fdec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12fdecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12fdf0: 0x0  nop
    ctx->pc = 0x12fdf0u;
    // NOP
    // 0x12fdf4: 0x4603a081  sub.s       $f2, $f20, $f3
    ctx->pc = 0x12fdf4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x12fdf8: 0x262218f0  addiu       $v0, $s1, 0x18F0
    ctx->pc = 0x12fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6384));
    // 0x12fdfc: 0xc62018f0  lwc1        $f0, 0x18F0($s1)
    ctx->pc = 0x12fdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fe00: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12fe00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12fe04: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x12fe04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12fe08: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fe0c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12fe0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12fe10: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x12fe10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x12fe14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12fe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fe18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12fe18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12fe1c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x12fe1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x12fe20: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x12fe20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12fe24: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x12fe24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12fe28: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x12fe28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12fe2c: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x12fe2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fe30: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x12fe30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fe34: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x12fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
    // 0x12fe38: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12fe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fe3c: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x12fe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12fe40: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x12fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12fe44: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x12fe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fe48: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x12fe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fe4c: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x12fe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12fe50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12fe50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12fe54: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x12fe54u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x12fe58: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x12fe58u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x12fe5c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x12fe5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x12fe60: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x12fe60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x12fe64: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x12fe64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x12fe68: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12fe68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x12fe6c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x12fe6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x12fe70: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x12fe70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x12fe74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12fe74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fe78: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x12fe78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x12fe7c: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x12fe7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x12fe80: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x12fe80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x12fe84: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x12fe84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x12fe88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12fe88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fe8c: 0x0  nop
    ctx->pc = 0x12fe8cu;
    // NOP
    // 0x12fe90: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x12FE90u;
    {
        const bool branch_taken_0x12fe90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE90u;
        // 0x12fe94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe90) {
            ctx->pc = 0x12FEF4u;
            goto label_12fef4;
        }
    }
    ctx->pc = 0x12FE98u;
    // 0x12fe98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12fe9c: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x12FE9Cu;
    SET_GPR_U32(ctx, 31, 0x12FEA4u);
    ctx->pc = 0x12FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE9Cu;
    // 0x12fea0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x12FE9Cu, 0x12FEA4u)) {
        return;
    }
    ctx->pc = 0x12FEA4u;
label_12fea4:
    // 0x12fea4: 0x0  nop
    ctx->pc = 0x12fea4u;
    // NOP
    // 0x12fea8: 0x0  nop
    ctx->pc = 0x12fea8u;
    // NOP
    // 0x12feac: 0x46000084  c1          0x84
    ctx->pc = 0x12feacu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x12feb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12feb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12feb4: 0x0  nop
    ctx->pc = 0x12feb4u;
    // NOP
    // 0x12feb8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12feb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12febc: 0x0  nop
    ctx->pc = 0x12febcu;
    // NOP
    // 0x12fec0: 0x4501ffb3  bc1t        . + 4 + (-0x4D << 2)
    ctx->pc = 0x12FEC0u;
    {
        const bool branch_taken_0x12fec0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEC0u;
        // 0x12fec4: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fec0) {
            ctx->pc = 0x12FD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fd90;
        }
    }
    ctx->pc = 0x12FEC8u;
    // 0x12fec8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fecc: 0x0  nop
    ctx->pc = 0x12feccu;
    // NOP
label_12fed0:
    // 0x12fed0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x12fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fed4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x12fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fed8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12fed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x12fedc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12fedcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12fee0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12fee0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x12fee4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x12fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x12fee8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x12fee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x12feec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FEECu;
    {
        const bool branch_taken_0x12feec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEECu;
        // 0x12fef0: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12feec) {
            ctx->pc = 0x12FF0Cu;
            goto label_12ff0c;
        }
    }
    ctx->pc = 0x12FEF4u;
label_12fef4:
    // 0x12fef4: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x12fef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12fef8: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x12fef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12fefc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x12fefcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ff00: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x12ff00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ff04: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x12ff04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ff08: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x12ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
label_12ff0c:
    // 0x12ff0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12ff0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12ff10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ff10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ff14: 0x26231900  addiu       $v1, $s1, 0x1900
    ctx->pc = 0x12ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6400));
    // 0x12ff18: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x12ff18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12ff1c: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x12ff1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12ff20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12ff24: 0xb22218f7  sdl         $v0, 0x18F7($s1)
    ctx->pc = 0x12ff24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ff28: 0xb62218f0  sdr         $v0, 0x18F0($s1)
    ctx->pc = 0x12ff28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ff2c: 0xae2418f8  sw          $a0, 0x18F8($s1)
    ctx->pc = 0x12ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6392), GPR_U32(ctx, 4));
    // 0x12ff30: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x12ff30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x12ff34: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x12ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x12ff38: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x12ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x12ff3c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x12ff3cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x12ff40: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x12ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ff44: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x12ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12ff48: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x12ff48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ff4c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x12ff4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x12ff50: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x12ff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ff54: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x12ff54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x12ff58: 0xc62118f0  lwc1        $f1, 0x18F0($s1)
    ctx->pc = 0x12ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ff5c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x12ff5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x12ff60: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x12ff60u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x12ff64: 0xe6231900  swc1        $f3, 0x1900($s1)
    ctx->pc = 0x12ff64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6400), bits); }
    // 0x12ff68: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x12ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ff6c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x12ff6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12ff70: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x12ff70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x12ff74: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x12ff74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12ff78: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x12ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ff7c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x12ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ff80: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x12ff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ff84: 0xc62218f0  lwc1        $f2, 0x18F0($s1)
    ctx->pc = 0x12ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ff88: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12ff88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x12ff8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12ff8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12ff90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12ff90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12ff94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x12ff94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12ff98: 0x262218f0  addiu       $v0, $s1, 0x18F0
    ctx->pc = 0x12ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6384));
    // 0x12ff9c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x12ff9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ffa0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x12ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12ffa4: 0xc62018f0  lwc1        $f0, 0x18F0($s1)
    ctx->pc = 0x12ffa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ffa8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x12ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ffac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12ffacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x12ffb0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x12ffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ffb4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x12ffb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x12ffb8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x12ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ffbc: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x12ffbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x12ffc0: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x12ffc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x12ffc4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12ffc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12ffc8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12ffc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12ffcc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12ffccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12ffd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12ffd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12ffd4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x12ffd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ffd8: 0x0  nop
    ctx->pc = 0x12ffd8u;
    // NOP
    // 0x12ffdc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x12FFDCu;
    {
        const bool branch_taken_0x12ffdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ffdc) {
            ctx->pc = 0x12FFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FFDCu;
            // 0x12ffe0: 0xae321924  sw          $s2, 0x1924($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 6436), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FFECu;
            goto label_12ffec;
        }
    }
    ctx->pc = 0x12FFE4u;
    // 0x12ffe4: 0xae2018dc  sw          $zero, 0x18DC($s1)
    ctx->pc = 0x12ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6364), GPR_U32(ctx, 0));
label_12ffe8:
    // 0x12ffe8: 0xae321924  sw          $s2, 0x1924($s1)
    ctx->pc = 0x12ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6436), GPR_U32(ctx, 18));
label_12ffec:
    // 0x12ffec: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x12ffecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12fff0: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x12fff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12fff4: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x12fff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fff8: 0xb2271917  sdl         $a3, 0x1917($s1)
    ctx->pc = 0x12fff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fffc: 0xb6271910  sdr         $a3, 0x1910($s1)
    ctx->pc = 0x12fffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x130000: 0xae281918  sw          $t0, 0x1918($s1)
    ctx->pc = 0x130000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6424), GPR_U32(ctx, 8));
    // 0x130004: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x130004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_130008:
    // 0x130008: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x130008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13000c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x13000cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x130010: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x130010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x130014: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x130014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x130018: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x130018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13001c: 0x3e00008  jr          $ra
    ctx->pc = 0x13001Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13001Cu;
        // 0x130020: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13001Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130024u;
    // 0x130024: 0x0  nop
    ctx->pc = 0x130024u;
    // NOP
    ctx->pc = 0x130028u;
}
