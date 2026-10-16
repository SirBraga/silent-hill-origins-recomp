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

// Function: sub_002BE530
// Address: 0x2be530 - 0x2be8c8
void sub_002BE530_0x2be530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE530_0x2be530");
#endif

    switch (ctx->pc) {
        case 0x2be5a0u: goto label_2be5a0;
        case 0x2be628u: goto label_2be628;
        case 0x2be684u: goto label_2be684;
        case 0x2be87cu: goto label_2be87c;
        default: break;
    }

    ctx->pc = 0x2be530u;

    // 0x2be530: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2be530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2be534: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x2be534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x2be538: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2be538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x2be53c: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x2be53cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2be540: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2be540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be544: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2be544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x2be548: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2be548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x2be54c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2be54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x2be550: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2be550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x2be554: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2be554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x2be558: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2be558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2be55c: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x2be55cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2be560: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x2be560u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2be564: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2be564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2be568: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x2be568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2be56c: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x2be56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x2be570: 0xffa70030  sd          $a3, 0x30($sp)
    ctx->pc = 0x2be570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 7));
    // 0x2be574: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x2be574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x2be578: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2be578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2be57c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2be57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2be580: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2BE580u;
    {
        const bool branch_taken_0x2be580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE580u;
        // 0x2be584: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be580) {
            ctx->pc = 0x2BE890u;
            goto label_2be890;
        }
    }
    ctx->pc = 0x2BE588u;
    // 0x2be588: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2be588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2be58c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2be58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2be590: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x2be590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be598: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2be598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2be59c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2be59cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be5a0:
    // 0x2be5a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2be5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2be5a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2be5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be5a8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2be5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2be5ac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2be5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be5b0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2be5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be5b4: 0x119140  sll         $s2, $s1, 5
    ctx->pc = 0x2be5b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2be5b8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2be5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2be5bc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2be5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2be5c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be5c4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2be5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be5c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2be5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be5cc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2be5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2be5d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2be5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2be5d4: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x2be5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be5d8: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x2be5d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2be5dc: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x2be5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be5e0: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2BE5E0u;
    {
        const bool branch_taken_0x2be5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5E0u;
        // 0x2be5e4: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5e0) {
            ctx->pc = 0x2BE66Cu;
            goto label_2be66c;
        }
    }
    ctx->pc = 0x2BE5E8u;
    // 0x2be5e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2be5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be5ec: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x2be5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2be5f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2be5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be5f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2be5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2be5f8: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2be5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2be5fc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2be5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2be600: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2be600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be608: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x2be608u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2be60c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2be60cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2be610: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2be610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be614: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2be614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2be618: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2be618u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2be61c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2be61cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2be620: 0xc0af7de  jal         func_2BDF78
    ctx->pc = 0x2BE620u;
    SET_GPR_U32(ctx, 31, 0x2BE628u);
    ctx->pc = 0x2BE624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE620u;
    // 0x2be624: 0x4615a302  mul.s       $f12, $f20, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDF78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BDF78u, 0x2BE620u, 0x2BE628u)) {
        return;
    }
    ctx->pc = 0x2BE628u;
label_2be628:
    // 0x2be628: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2be628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be62c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2be62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be630: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2be630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2be634: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2be634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be638: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2be638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be63c: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x2be63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be640: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2be640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2be644: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be648: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2be648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2be64c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2be64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be650: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2be650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2be654: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2be654u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2be658: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2be658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2be65c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2be65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be660: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2be660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2be664: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2be664u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2be668: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2be668u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2be66c:
    // 0x2be66c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2be66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be670: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x2be670u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2be674: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2be674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2be678: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2be678u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2be67c: 0xc0af83e  jal         func_2BE0F8
    ctx->pc = 0x2BE67Cu;
    SET_GPR_U32(ctx, 31, 0x2BE684u);
    ctx->pc = 0x2BE680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE67Cu;
    // 0x2be680: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE0F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE0F8u, 0x2BE67Cu, 0x2BE684u)) {
        return;
    }
    ctx->pc = 0x2BE684u;
label_2be684:
    // 0x2be684: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2be684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be688: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x2be688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2be68c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2be68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2be690: 0x68620037  ldl         $v0, 0x37($v1)
    ctx->pc = 0x2be690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2be694: 0x6c620030  ldr         $v0, 0x30($v1)
    ctx->pc = 0x2be694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2be698: 0x8c650038  lw          $a1, 0x38($v1)
    ctx->pc = 0x2be698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2be69c: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x2be69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be6a0: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x2be6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be6a4: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x2be6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x2be6a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2be6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be6ac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2be6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2be6b0: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x2be6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2be6b4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2be6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be6b8: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2be6b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2be6bc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2be6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be6c0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2be6c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2be6c4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2be6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be6c8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2be6c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2be6cc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2be6ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2be6d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2be6d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2be6d4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2be6d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2be6d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be6dc: 0x4600b803  div.s       $f0, $f23, $f0
    ctx->pc = 0x2be6dcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[23], ctx->f[0]);
    // 0x2be6e0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2be6e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2be6e4: 0xe7a50070  swc1        $f5, 0x70($sp)
    ctx->pc = 0x2be6e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2be6e8: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2be6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2be6ec: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2be6ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2be6f0: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x2be6f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2be6f4: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2be6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be6f8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2be6f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2be6fc: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x2be6fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2be700: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2be700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be704: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2be704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2be708: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2be708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2be70c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2be70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be710: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2be710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2be714: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2be714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2be718: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2be718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be71c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2be71cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2be720: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2be720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2be724: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2be724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be728: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2be728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2be72c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2be72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be730: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2be730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2be734: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2be734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2be738: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2be738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be73c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2be73cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2be740: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x2be740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2be744: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2be744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be748: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2be748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2be74c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2be74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2be750: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2be750u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2be754: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2be754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be758: 0x4602b081  sub.s       $f2, $f22, $f2
    ctx->pc = 0x2be758u;
    ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x2be75c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2be75cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2be760: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2be760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2be764: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2be764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be768: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2be768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2be76c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2be76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2be770: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2be770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be774: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2be774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2be778: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x2be778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2be77c: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2be77cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2be780: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2be780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be784: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2be784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be788: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be78c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2be78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2be790: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2be790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be794: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2be794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be798: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be798u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be79c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2be79cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2be7a0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2be7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be7a4: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2be7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be7a8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2be7a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2be7ac: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2be7acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2be7b0: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2be7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be7b4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2be7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be7b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be7bc: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x2be7bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x2be7c0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2be7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2be7c4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2be7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be7c8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2be7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be7cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2be7ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2be7d0: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2be7d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2be7d4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2be7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be7d8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2be7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be7dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be7dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be7e0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2be7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2be7e4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2be7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be7e8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2be7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be7ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be7ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be7f0: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x2be7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2be7f4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2be7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be7f8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2be7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be7fc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2be7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2be800: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be804: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2be804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2be808: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2be808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2be80c: 0xac95000c  sw          $s5, 0xC($a0)
    ctx->pc = 0x2be80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 21));
    // 0x2be810: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x2be810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x2be814: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2be814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2be818: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2be818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2be81c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2be81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be820: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2be820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2be824: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2be824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be828: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2be828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2be82c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2be82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2be830: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2be830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be834: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2be834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2be838: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2be838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2be83c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2be83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be840: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2be840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2be844: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2be844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2be848: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x2be848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be84c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2be84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be850: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2be850u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2be854: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x2be854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2be858: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2be858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be85c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2be85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be860: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2be860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be864: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2be864u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2be868: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2be868u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2be86c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2be86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be870: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2be870u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2be874: 0xc092d94  jal         func_24B650
    ctx->pc = 0x2BE874u;
    SET_GPR_U32(ctx, 31, 0x2BE87Cu);
    ctx->pc = 0x2BE878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE874u;
    // 0x2be878: 0xe4610008  swc1        $f1, 0x8($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x2BE874u, 0x2BE87Cu)) {
        return;
    }
    ctx->pc = 0x2BE87Cu;
label_2be87c:
    // 0x2be87c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2be87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2be880: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2be880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2be884: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2be884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2be888: 0x1682ff45  bne         $s4, $v0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x2BE888u;
    {
        const bool branch_taken_0x2be888 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE888u;
        // 0x2be88c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be888) {
            ctx->pc = 0x2BE5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be5a0;
        }
    }
    ctx->pc = 0x2BE890u;
label_2be890:
    // 0x2be890: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2be890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2be894: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2be894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2be898: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2be898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2be89c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2be89cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2be8a0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2be8a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2be8a4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2be8a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2be8a8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2be8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2be8ac: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x2be8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2be8b0: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x2be8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2be8b4: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x2be8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2be8b8: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2be8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2be8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8BCu;
        // 0x2be8c0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE8C4u;
    // 0x2be8c4: 0x0  nop
    ctx->pc = 0x2be8c4u;
    // NOP
    ctx->pc = 0x2be8c8u;
}
