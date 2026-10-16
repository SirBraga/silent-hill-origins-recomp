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

// Function: sub_001484E8
// Address: 0x1484e8 - 0x148630
void sub_001484E8_0x1484e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001484E8_0x1484e8");
#endif

    switch (ctx->pc) {
        case 0x148550u: goto label_148550;
        case 0x14855cu: goto label_14855c;
        case 0x148574u: goto label_148574;
        case 0x148580u: goto label_148580;
        case 0x148598u: goto label_148598;
        case 0x1485a4u: goto label_1485a4;
        case 0x1485f0u: goto label_1485f0;
        default: break;
    }

    ctx->pc = 0x1484e8u;

    // 0x1484e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1484e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1484ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1484ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1484f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1484f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1484f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1484f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1484f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1484fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1484fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148504: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x148504u;
    {
        const bool branch_taken_0x148504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x148508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148504u;
        // 0x148508: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148504) {
            ctx->pc = 0x148540u;
            goto label_148540;
        }
    }
    ctx->pc = 0x14850Cu;
    // 0x14850c: 0x8e220134  lw          $v0, 0x134($s1)
    ctx->pc = 0x14850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x148510: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x148510u;
    {
        const bool branch_taken_0x148510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148510) {
            ctx->pc = 0x148514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148510u;
            // 0x148514: 0xc6340138  lwc1        $f20, 0x138($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x148548u;
            goto label_148548;
        }
    }
    ctx->pc = 0x148518u;
    // 0x148518: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x148518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x14851c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14851Cu;
    {
        const bool branch_taken_0x14851c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14851c) {
            ctx->pc = 0x148520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14851Cu;
            // 0x148520: 0xc4b40058  lwc1        $f20, 0x58($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x148528u;
            goto label_148528;
        }
    }
    ctx->pc = 0x148524u;
    // 0x148524: 0xc4b4005c  lwc1        $f20, 0x5C($a1)
    ctx->pc = 0x148524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_148528:
    // 0x148528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x148528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14852c: 0x0  nop
    ctx->pc = 0x14852cu;
    // NOP
    // 0x148530: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x148530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148534: 0x0  nop
    ctx->pc = 0x148534u;
    // NOP
    // 0x148538: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x148538u;
    {
        const bool branch_taken_0x148538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148538) {
            ctx->pc = 0x148548u;
            goto label_148548;
        }
    }
    ctx->pc = 0x148540u;
label_148540:
    // 0x148540: 0xc6340138  lwc1        $f20, 0x138($s1)
    ctx->pc = 0x148540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x148544: 0x0  nop
    ctx->pc = 0x148544u;
    // NOP
label_148548:
    // 0x148548: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148548u;
    SET_GPR_U32(ctx, 31, 0x148550u);
    ctx->pc = 0x14854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148548u;
    // 0x14854c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148548u, 0x148550u)) {
        return;
    }
    ctx->pc = 0x148550u;
label_148550:
    // 0x148550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148554: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148554u;
    SET_GPR_U32(ctx, 31, 0x14855Cu);
    ctx->pc = 0x148558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148554u;
    // 0x148558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148554u, 0x14855Cu)) {
        return;
    }
    ctx->pc = 0x14855Cu;
label_14855c:
    // 0x14855c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148564: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x148564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148568: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x148568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14856c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x14856Cu;
    SET_GPR_U32(ctx, 31, 0x148574u);
    ctx->pc = 0x148570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14856Cu;
    // 0x148570: 0xe6210148  swc1        $f1, 0x148($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x14856Cu, 0x148574u)) {
        return;
    }
    ctx->pc = 0x148574u;
label_148574:
    // 0x148574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148578: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148578u;
    SET_GPR_U32(ctx, 31, 0x148580u);
    ctx->pc = 0x14857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148578u;
    // 0x14857c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148578u, 0x148580u)) {
        return;
    }
    ctx->pc = 0x148580u;
label_148580:
    // 0x148580: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x148580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148588: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x148588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14858c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14858cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x148590: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148590u;
    SET_GPR_U32(ctx, 31, 0x148598u);
    ctx->pc = 0x148594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148590u;
    // 0x148594: 0xe621014c  swc1        $f1, 0x14C($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148590u, 0x148598u)) {
        return;
    }
    ctx->pc = 0x148598u;
label_148598:
    // 0x148598: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14859c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x14859Cu;
    SET_GPR_U32(ctx, 31, 0x1485A4u);
    ctx->pc = 0x1485A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14859Cu;
    // 0x1485a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x14859Cu, 0x1485A4u)) {
        return;
    }
    ctx->pc = 0x1485A4u;
label_1485a4:
    // 0x1485a4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1485a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1485a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1485a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1485ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1485acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1485b0: 0xe6210150  swc1        $f1, 0x150($s1)
    ctx->pc = 0x1485b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x1485b4: 0xc6200148  lwc1        $f0, 0x148($s1)
    ctx->pc = 0x1485b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1485b8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1485b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1485bc: 0xc622014c  lwc1        $f2, 0x14C($s1)
    ctx->pc = 0x1485bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1485c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1485c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1485c4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1485c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1485c8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1485c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1485cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1485ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1485d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1485d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1485d4: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x1485d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1485d8: 0x0  nop
    ctx->pc = 0x1485d8u;
    // NOP
    // 0x1485dc: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1485DCu;
    {
        const bool branch_taken_0x1485dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1485E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1485DCu;
        // 0x1485e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1485dc) {
            ctx->pc = 0x148618u;
            goto label_148618;
        }
    }
    ctx->pc = 0x1485E4u;
    // 0x1485e4: 0x26240148  addiu       $a0, $s1, 0x148
    ctx->pc = 0x1485e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
    // 0x1485e8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1485E8u;
    SET_GPR_U32(ctx, 31, 0x1485F0u);
    ctx->pc = 0x1485ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1485E8u;
    // 0x1485ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1485E8u, 0x1485F0u)) {
        return;
    }
    ctx->pc = 0x1485F0u;
label_1485f0:
    // 0x1485f0: 0xc6210148  lwc1        $f1, 0x148($s1)
    ctx->pc = 0x1485f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1485f4: 0xc622014c  lwc1        $f2, 0x14C($s1)
    ctx->pc = 0x1485f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1485f8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1485f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1485fc: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x1485fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148600: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x148600u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x148604: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x148604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x148608: 0xe6210148  swc1        $f1, 0x148($s1)
    ctx->pc = 0x148608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x14860c: 0xe622014c  swc1        $f2, 0x14C($s1)
    ctx->pc = 0x14860cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 332), bits); }
    // 0x148610: 0xe6200150  swc1        $f0, 0x150($s1)
    ctx->pc = 0x148610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x148614: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x148614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_148618:
    // 0x148618: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x148618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14861c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14861cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148624: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x148624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x148628: 0x3e00008  jr          $ra
    ctx->pc = 0x148628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148628u;
        // 0x14862c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148630u;
}
