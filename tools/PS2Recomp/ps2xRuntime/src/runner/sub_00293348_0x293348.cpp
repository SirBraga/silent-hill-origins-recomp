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

// Function: sub_00293348
// Address: 0x293348 - 0x293450
void sub_00293348_0x293348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293348_0x293348");
#endif

    switch (ctx->pc) {
        case 0x293348u: goto label_293348;
        case 0x29334cu: goto label_29334c;
        case 0x293350u: goto label_293350;
        case 0x293354u: goto label_293354;
        case 0x293358u: goto label_293358;
        case 0x29335cu: goto label_29335c;
        case 0x293360u: goto label_293360;
        case 0x293364u: goto label_293364;
        case 0x293368u: goto label_293368;
        case 0x29336cu: goto label_29336c;
        case 0x293370u: goto label_293370;
        case 0x293374u: goto label_293374;
        case 0x293378u: goto label_293378;
        case 0x29337cu: goto label_29337c;
        case 0x293380u: goto label_293380;
        case 0x293384u: goto label_293384;
        case 0x293388u: goto label_293388;
        case 0x29338cu: goto label_29338c;
        case 0x293390u: goto label_293390;
        case 0x293394u: goto label_293394;
        case 0x293398u: goto label_293398;
        case 0x29339cu: goto label_29339c;
        case 0x2933a0u: goto label_2933a0;
        case 0x2933a4u: goto label_2933a4;
        case 0x2933a8u: goto label_2933a8;
        case 0x2933acu: goto label_2933ac;
        case 0x2933b0u: goto label_2933b0;
        case 0x2933b4u: goto label_2933b4;
        case 0x2933b8u: goto label_2933b8;
        case 0x2933bcu: goto label_2933bc;
        case 0x2933c0u: goto label_2933c0;
        case 0x2933c4u: goto label_2933c4;
        case 0x2933c8u: goto label_2933c8;
        case 0x2933ccu: goto label_2933cc;
        case 0x2933d0u: goto label_2933d0;
        case 0x2933d4u: goto label_2933d4;
        case 0x2933d8u: goto label_2933d8;
        case 0x2933dcu: goto label_2933dc;
        case 0x2933e0u: goto label_2933e0;
        case 0x2933e4u: goto label_2933e4;
        case 0x2933e8u: goto label_2933e8;
        case 0x2933ecu: goto label_2933ec;
        case 0x2933f0u: goto label_2933f0;
        case 0x2933f4u: goto label_2933f4;
        case 0x2933f8u: goto label_2933f8;
        case 0x2933fcu: goto label_2933fc;
        case 0x293400u: goto label_293400;
        case 0x293404u: goto label_293404;
        case 0x293408u: goto label_293408;
        case 0x29340cu: goto label_29340c;
        case 0x293410u: goto label_293410;
        case 0x293414u: goto label_293414;
        case 0x293418u: goto label_293418;
        case 0x29341cu: goto label_29341c;
        case 0x293420u: goto label_293420;
        case 0x293424u: goto label_293424;
        case 0x293428u: goto label_293428;
        case 0x29342cu: goto label_29342c;
        case 0x293430u: goto label_293430;
        case 0x293434u: goto label_293434;
        case 0x293438u: goto label_293438;
        case 0x29343cu: goto label_29343c;
        case 0x293440u: goto label_293440;
        case 0x293444u: goto label_293444;
        case 0x293448u: goto label_293448;
        case 0x29344cu: goto label_29344c;
        default: break;
    }

    ctx->pc = 0x293348u;

label_293348:
    // 0x293348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x293348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29334c:
    // 0x29334c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_293350:
    // 0x293350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_293354:
    // 0x293354: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_293358:
    if (ctx->pc == 0x293358u) {
        ctx->pc = 0x293358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293354u;
        // 0x293358: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29335Cu;
        goto label_29335c;
    }
    ctx->pc = 0x293354u;
    {
        const bool branch_taken_0x293354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x293358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293354u;
        // 0x293358: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293354) {
            ctx->pc = 0x293360u;
            goto label_293360;
        }
    }
    ctx->pc = 0x29335Cu;
label_29335c:
    // 0x29335c: 0x5802b  sltu        $s0, $zero, $a1
    ctx->pc = 0x29335cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_293360:
    // 0x293360: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_293364:
    if (ctx->pc == 0x293364u) {
        ctx->pc = 0x293364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293360u;
        // 0x293364: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293368u;
        goto label_293368;
    }
    ctx->pc = 0x293360u;
    {
        const bool branch_taken_0x293360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x293364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293360u;
        // 0x293364: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293360) {
            ctx->pc = 0x293440u;
            goto label_293440;
        }
    }
    ctx->pc = 0x293368u;
label_293368:
    // 0x293368: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x293368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_29336c:
    // 0x29336c: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x29336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_293370:
    // 0x293370: 0xc4a30028  lwc1        $f3, 0x28($a1)
    ctx->pc = 0x293370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_293374:
    // 0x293374: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x293374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_293378:
    // 0x293378: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x293378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29337c:
    // 0x29337c: 0x46030140  add.s       $f5, $f0, $f3
    ctx->pc = 0x29337cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_293380:
    // 0x293380: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x293380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_293384:
    // 0x293384: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_293388:
    if (ctx->pc == 0x293388u) {
        ctx->pc = 0x29338Cu;
        goto label_29338c;
    }
    ctx->pc = 0x293384u;
    {
        const bool branch_taken_0x293384 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x293384) {
            ctx->pc = 0x2933F0u;
            goto label_2933f0;
        }
    }
    ctx->pc = 0x29338Cu;
label_29338c:
    // 0x29338c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29338cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_293390:
    // 0x293390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293394:
    // 0x293394: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x293394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_293398:
    // 0x293398: 0x46000004  c1          0x4
    ctx->pc = 0x293398u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_29339c:
    // 0x29339c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29339cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2933a0:
    // 0x2933a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2933a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2933a4:
    // 0x2933a4: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x2933a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2933a8:
    // 0x2933a8: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2933a8u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[0]);
label_2933ac:
    // 0x2933ac: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2933acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2933b0:
    // 0x2933b0: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2933b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2933b4:
    // 0x2933b4: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2933b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2933b8:
    // 0x2933b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2933b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2933bc:
    // 0x2933bc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2933bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2933c0:
    // 0x2933c0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2933c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2933c4:
    // 0x2933c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2933c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2933c8:
    // 0x2933c8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2933c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2933cc:
    // 0x2933cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2933ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2933d0:
    // 0x2933d0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2933d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2933d4:
    // 0x2933d4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2933d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2933d8:
    // 0x2933d8: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x2933d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2933dc:
    // 0x2933dc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2933dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2933e0:
    // 0x2933e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2933e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2933e4:
    // 0x2933e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2933e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2933e8:
    // 0x2933e8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2933ec:
    if (ctx->pc == 0x2933ECu) {
        ctx->pc = 0x2933ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933E8u;
        // 0x2933ec: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2933F0u;
        goto label_2933f0;
    }
    ctx->pc = 0x2933E8u;
    {
        const bool branch_taken_0x2933e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2933ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933E8u;
        // 0x2933ec: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933e8) {
            ctx->pc = 0x293440u;
            goto label_293440;
        }
    }
    ctx->pc = 0x2933F0u;
label_2933f0:
    // 0x2933f0: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x2933f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2933f4:
    // 0x2933f4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2933f8:
    if (ctx->pc == 0x2933F8u) {
        ctx->pc = 0x2933FCu;
        goto label_2933fc;
    }
    ctx->pc = 0x2933F4u;
    {
        const bool branch_taken_0x2933f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2933f4) {
            ctx->pc = 0x293414u;
            goto label_293414;
        }
    }
    ctx->pc = 0x2933FCu;
label_2933fc:
    // 0x2933fc: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2933fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_293400:
    // 0x293400: 0x0  nop
    ctx->pc = 0x293400u;
    // NOP
label_293404:
    // 0x293404: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_293408:
    if (ctx->pc == 0x293408u) {
        ctx->pc = 0x293408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293404u;
        // 0x293408: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29340Cu;
        goto label_29340c;
    }
    ctx->pc = 0x293404u;
    {
        const bool branch_taken_0x293404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293404u;
        // 0x293408: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293404) {
            ctx->pc = 0x29342Cu;
            goto label_29342c;
        }
    }
    ctx->pc = 0x29340Cu;
label_29340c:
    // 0x29340c: 0x10000009  b           . + 4 + (0x9 << 2)
label_293410:
    if (ctx->pc == 0x293410u) {
        ctx->pc = 0x293410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29340Cu;
        // 0x293410: 0x244235a8  addiu       $v0, $v0, 0x35A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293414u;
        goto label_293414;
    }
    ctx->pc = 0x29340Cu;
    {
        const bool branch_taken_0x29340c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29340Cu;
        // 0x293410: 0x244235a8  addiu       $v0, $v0, 0x35A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29340c) {
            ctx->pc = 0x293434u;
            goto label_293434;
        }
    }
    ctx->pc = 0x293414u;
label_293414:
    // 0x293414: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x293414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_293418:
    // 0x293418: 0x0  nop
    ctx->pc = 0x293418u;
    // NOP
label_29341c:
    // 0x29341c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_293420:
    if (ctx->pc == 0x293420u) {
        ctx->pc = 0x293420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29341Cu;
        // 0x293420: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293424u;
        goto label_293424;
    }
    ctx->pc = 0x29341Cu;
    {
        const bool branch_taken_0x29341c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29341Cu;
        // 0x293420: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29341c) {
            ctx->pc = 0x29342Cu;
            goto label_29342c;
        }
    }
    ctx->pc = 0x293424u;
label_293424:
    // 0x293424: 0x10000003  b           . + 4 + (0x3 << 2)
label_293428:
    if (ctx->pc == 0x293428u) {
        ctx->pc = 0x293428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293424u;
        // 0x293428: 0x24423628  addiu       $v0, $v0, 0x3628 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29342Cu;
        goto label_29342c;
    }
    ctx->pc = 0x293424u;
    {
        const bool branch_taken_0x293424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293424u;
        // 0x293428: 0x24423628  addiu       $v0, $v0, 0x3628 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293424) {
            ctx->pc = 0x293434u;
            goto label_293434;
        }
    }
    ctx->pc = 0x29342Cu;
label_29342c:
    // 0x29342c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x29342cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_293430:
    // 0x293430: 0x244236a8  addiu       $v0, $v0, 0x36A8
    ctx->pc = 0x293430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13992));
label_293434:
    // 0x293434: 0x40f809  jalr        $v0
label_293438:
    if (ctx->pc == 0x293438u) {
        ctx->pc = 0x29343Cu;
        goto label_29343c;
    }
    ctx->pc = 0x293434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29343Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293434u, 0x29343Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29343Cu;
label_29343c:
    // 0x29343c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29343cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_293440:
    // 0x293440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_293444:
    // 0x293444: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x293444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_293448:
    // 0x293448: 0x3e00008  jr          $ra
label_29344c:
    if (ctx->pc == 0x29344Cu) {
        ctx->pc = 0x29344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293448u;
        // 0x29344c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293450u;
        goto label_fallthrough_0x293448;
    }
    ctx->pc = 0x293448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293448u;
        // 0x29344c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x293448:
    ctx->pc = 0x293450u;
}
