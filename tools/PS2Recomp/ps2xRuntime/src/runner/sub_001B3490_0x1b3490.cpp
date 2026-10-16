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

// Function: sub_001B3490
// Address: 0x1b3490 - 0x1b3680
void sub_001B3490_0x1b3490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3490_0x1b3490");
#endif

    switch (ctx->pc) {
        case 0x1b3568u: goto label_1b3568;
        case 0x1b3584u: goto label_1b3584;
        case 0x1b3594u: goto label_1b3594;
        case 0x1b35acu: goto label_1b35ac;
        case 0x1b35b8u: goto label_1b35b8;
        case 0x1b35dcu: goto label_1b35dc;
        default: break;
    }

    ctx->pc = 0x1b3490u;

    // 0x1b3490: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b3490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1b3494: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x1b3494u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1b3498: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1b3498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1b349c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b349cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b34a0: 0x460db834  c.lt.s      $f23, $f13
    ctx->pc = 0x1b34a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b34a4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1b34a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1b34a8: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1b34a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1b34ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b34acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b34b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b34b4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1b34b4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1b34b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b34b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b34bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b34bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b34c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b34c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b34c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b34c8: 0xe7bc00b0  swc1        $f28, 0xB0($sp)
    ctx->pc = 0x1b34c8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1b34cc: 0xe7bb00a8  swc1        $f27, 0xA8($sp)
    ctx->pc = 0x1b34ccu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1b34d0: 0xe7ba00a0  swc1        $f26, 0xA0($sp)
    ctx->pc = 0x1b34d0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1b34d4: 0xe7b90098  swc1        $f25, 0x98($sp)
    ctx->pc = 0x1b34d4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1b34d8: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x1b34d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1b34dc: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1b34dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b34e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B34E0u;
    {
        const bool branch_taken_0x1b34e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34E0u;
        // 0x1b34e4: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34e0) {
            ctx->pc = 0x1B34F0u;
            goto label_1b34f0;
        }
    }
    ctx->pc = 0x1B34E8u;
    // 0x1b34e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B34E8u;
    {
        const bool branch_taken_0x1b34e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34E8u;
        // 0x1b34ec: 0x46006e06  mov.s       $f24, $f13 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34e8) {
            ctx->pc = 0x1B3508u;
            goto label_1b3508;
        }
    }
    ctx->pc = 0x1B34F0u;
label_1b34f0:
    // 0x1b34f0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1b34f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b34f4: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x1b34f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b34f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b34f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b34fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b34fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3500: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3504: 0x46020602  mul.s       $f24, $f0, $f2
    ctx->pc = 0x1b3504u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b3508:
    // 0x1b3508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b350c: 0x0  nop
    ctx->pc = 0x1b350cu;
    // NOP
    // 0x1b3510: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x1b3510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3514: 0x0  nop
    ctx->pc = 0x1b3514u;
    // NOP
    // 0x1b3518: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3518u;
    {
        const bool branch_taken_0x1b3518 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3518u;
        // 0x1b351c: 0x460075c6  mov.s       $f23, $f14 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3518) {
            ctx->pc = 0x1B3538u;
            goto label_1b3538;
        }
    }
    ctx->pc = 0x1B3520u;
    // 0x1b3520: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1b3520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3524: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x1b3524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3528: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b352c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b352cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3530: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3534: 0x460205c2  mul.s       $f23, $f0, $f2
    ctx->pc = 0x1b3534u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b3538:
    // 0x1b3538: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b353c: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x1b353cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x1b3540: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1b3540u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3544: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x1b3544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x1b3548: 0x34210901  ori         $at, $at, 0x901
    ctx->pc = 0x1b3548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2305);
    // 0x1b354c: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1b354cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1b3550: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1b3550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1b3554: 0x3421300c  ori         $at, $at, 0x300C
    ctx->pc = 0x1b3554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12300);
    // 0x1b3558: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1b3558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1b355c: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x1b355cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x1b3560: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1b3560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1b3564: 0x0  nop
    ctx->pc = 0x1b3564u;
    // NOP
label_1b3568:
    // 0x1b3568: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1b3568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b356c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1b356cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1b3570: 0xc6350000  lwc1        $f21, 0x0($s1)
    ctx->pc = 0x1b3570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b3574: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x1b3574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x1b3578: 0x4618ad41  sub.s       $f21, $f21, $f24
    ctx->pc = 0x1b3578u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[24]);
    // 0x1b357c: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x1B357Cu;
    SET_GPR_U32(ctx, 31, 0x1B3584u);
    ctx->pc = 0x1B3580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B357Cu;
    // 0x1b3580: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1B357Cu, 0x1B3584u)) {
        return;
    }
    ctx->pc = 0x1B3584u;
label_1b3584:
    // 0x1b3584: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x1b3584u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x1b3588: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x1b3588u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b358c: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1B358Cu;
    SET_GPR_U32(ctx, 31, 0x1B3594u);
    ctx->pc = 0x1B3590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B358Cu;
    // 0x1b3590: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1B358Cu, 0x1B3594u)) {
        return;
    }
    ctx->pc = 0x1B3594u;
label_1b3594:
    // 0x1b3594: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b3594u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b3598: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1b3598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b359c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1b359cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1b35a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b35a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b35a4: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1B35A4u;
    SET_GPR_U32(ctx, 31, 0x1B35ACu);
    ctx->pc = 0x1B35A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35A4u;
    // 0x1b35a8: 0x4601ad40  add.s       $f21, $f21, $f1 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1B35A4u, 0x1B35ACu)) {
        return;
    }
    ctx->pc = 0x1B35ACu;
label_1b35ac:
    // 0x1b35ac: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1b35acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b35b0: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x1B35B0u;
    SET_GPR_U32(ctx, 31, 0x1B35B8u);
    ctx->pc = 0x1B35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35B0u;
    // 0x1b35b4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1B35B0u, 0x1B35B8u)) {
        return;
    }
    ctx->pc = 0x1B35B8u;
label_1b35b8:
    // 0x1b35b8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1b35b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b35bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b35bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b35c0: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1b35c0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1b35c4: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B35C4u;
    {
        const bool branch_taken_0x1b35c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B35C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B35C4u;
        // 0x1b35c8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b35c4) {
            ctx->pc = 0x1B3618u;
            goto label_1b3618;
        }
    }
    ctx->pc = 0x1B35CCu;
    // 0x1b35cc: 0xe7bc0004  swc1        $f28, 0x4($sp)
    ctx->pc = 0x1b35ccu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b35d0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1b35d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35d4: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B35D4u;
    SET_GPR_U32(ctx, 31, 0x1B35DCu);
    ctx->pc = 0x1B35D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35D4u;
    // 0x1b35d8: 0x27b20004  addiu       $s2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B35D4u, 0x1B35DCu)) {
        return;
    }
    ctx->pc = 0x1B35DCu;
label_1b35dc:
    // 0x1b35dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B35DCu;
    {
        const bool branch_taken_0x1b35dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b35dc) {
            ctx->pc = 0x1B35ECu;
            goto label_1b35ec;
        }
    }
    ctx->pc = 0x1B35E4u;
    // 0x1b35e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B35E4u;
    {
        const bool branch_taken_0x1b35e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B35E4u;
        // 0x1b35e8: 0x461bad42  mul.s       $f21, $f21, $f27 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[27]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b35e4) {
            ctx->pc = 0x1B3600u;
            goto label_1b3600;
        }
    }
    ctx->pc = 0x1B35ECu;
label_1b35ec:
    // 0x1b35ec: 0x3c0142e4  lui         $at, 0x42E4
    ctx->pc = 0x1b35ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17124 << 16));
    // 0x1b35f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b35f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b35f4: 0x0  nop
    ctx->pc = 0x1b35f4u;
    // NOP
    // 0x1b35f8: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x1b35f8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1b35fc: 0x461aad42  mul.s       $f21, $f21, $f26
    ctx->pc = 0x1b35fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[26]);
label_1b3600:
    // 0x1b3600: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b3600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3604: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x1b3604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x1b3608: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b3608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b360c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1b360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3610: 0x46190842  mul.s       $f1, $f1, $f25
    ctx->pc = 0x1b3610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    // 0x1b3614: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x1b3614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1b3618:
    // 0x1b3618: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1b3618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b361c: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x1b361cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x1b3620: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1b3620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1b3624: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x1b3624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x1b3628: 0xe6350000  swc1        $f21, 0x0($s1)
    ctx->pc = 0x1b3628u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1b362c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1b362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1b3630: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b3630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b3634: 0x661ffcc  bgez        $s3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1B3634u;
    {
        const bool branch_taken_0x1b3634 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1B3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3634u;
        // 0x1b3638: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3634) {
            ctx->pc = 0x1B3568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3568;
        }
    }
    ctx->pc = 0x1B363Cu;
    // 0x1b363c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b363cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b3640: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b3640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3644: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b3644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b3648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b364c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1b364cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3650: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3654: 0xc7bc00b0  lwc1        $f28, 0xB0($sp)
    ctx->pc = 0x1b3654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1b3658: 0xc7bb00a8  lwc1        $f27, 0xA8($sp)
    ctx->pc = 0x1b3658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1b365c: 0xc7ba00a0  lwc1        $f26, 0xA0($sp)
    ctx->pc = 0x1b365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1b3660: 0xc7b90098  lwc1        $f25, 0x98($sp)
    ctx->pc = 0x1b3660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1b3664: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x1b3664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1b3668: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x1b3668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b366c: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1b366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b3670: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1b3670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b3674: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1b3674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3678: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3678u;
        // 0x1b367c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3680u;
}
