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

// Function: sub_002723C0
// Address: 0x2723c0 - 0x272660
void sub_002723C0_0x2723c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002723C0_0x2723c0");
#endif

    switch (ctx->pc) {
        case 0x272418u: goto label_272418;
        default: break;
    }

    ctx->pc = 0x2723c0u;

    // 0x2723c0: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2723c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2723c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2723c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2723c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2723c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723cc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2723ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2723d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2723d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2723d4: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x2723d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x2723d8: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x2723d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2723dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2723dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2723e0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2723e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2723e4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2723E4u;
    {
        const bool branch_taken_0x2723e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2723E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723E4u;
        // 0x2723e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723e4) {
            ctx->pc = 0x272464u;
            goto label_272464;
        }
    }
    ctx->pc = 0x2723ECu;
    // 0x2723ec: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2723ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2723f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2723f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2723f4: 0x0  nop
    ctx->pc = 0x2723f4u;
    // NOP
    // 0x2723f8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2723F8u;
    {
        const bool branch_taken_0x2723f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2723FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723F8u;
        // 0x2723fc: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723f8) {
            ctx->pc = 0x272468u;
            goto label_272468;
        }
    }
    ctx->pc = 0x272400u;
    // 0x272400: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x272400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x272404: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x272404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x272408: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x272408u;
    {
        const bool branch_taken_0x272408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272408u;
        // 0x27240c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272408) {
            ctx->pc = 0x272438u;
            goto label_272438;
        }
    }
    ctx->pc = 0x272410u;
    // 0x272410: 0xc09b122  jal         func_26C488
    ctx->pc = 0x272410u;
    SET_GPR_U32(ctx, 31, 0x272418u);
    ctx->pc = 0x26C488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C488u, 0x272410u, 0x272418u)) {
        return;
    }
    ctx->pc = 0x272418u;
label_272418:
    // 0x272418: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x272418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27241c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27241cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272420: 0x0  nop
    ctx->pc = 0x272420u;
    // NOP
    // 0x272424: 0x0  nop
    ctx->pc = 0x272424u;
    // NOP
    // 0x272428: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x272428u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x27242c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x27242Cu;
    {
        const bool branch_taken_0x27242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27242Cu;
        // 0x272430: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27242c) {
            ctx->pc = 0x27264Cu;
            goto label_27264c;
        }
    }
    ctx->pc = 0x272434u;
    // 0x272434: 0x0  nop
    ctx->pc = 0x272434u;
    // NOP
label_272438:
    // 0x272438: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x272438u;
    {
        const bool branch_taken_0x272438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272438u;
        // 0x27243c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272438) {
            ctx->pc = 0x27245Cu;
            goto label_27245c;
        }
    }
    ctx->pc = 0x272440u;
    // 0x272440: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x272440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x272444: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272448: 0x0  nop
    ctx->pc = 0x272448u;
    // NOP
    // 0x27244c: 0x0  nop
    ctx->pc = 0x27244cu;
    // NOP
    // 0x272450: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x272450u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x272454: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x272454u;
    {
        const bool branch_taken_0x272454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272454) {
            ctx->pc = 0x27264Cu;
            goto label_27264c;
        }
    }
    ctx->pc = 0x27245Cu;
label_27245c:
    // 0x27245c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x27245Cu;
    {
        const bool branch_taken_0x27245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27245Cu;
        // 0x272460: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27245c) {
            ctx->pc = 0x272648u;
            goto label_272648;
        }
    }
    ctx->pc = 0x272464u;
label_272464:
    // 0x272464: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x272464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_272468:
    // 0x272468: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x272468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x27246c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x27246cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x272470: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x272470u;
    {
        const bool branch_taken_0x272470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272470) {
            ctx->pc = 0x272474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272470u;
            // 0x272474: 0x460c6382  mul.s       $f14, $f12, $f12 (Delay Slot)
            ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2724B4u;
            goto label_2724b4;
        }
    }
    ctx->pc = 0x272478u;
    // 0x272478: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x272478u;
    {
        const bool branch_taken_0x272478 = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x272478) {
            ctx->pc = 0x272488u;
            goto label_272488;
        }
    }
    ctx->pc = 0x272480u;
    // 0x272480: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x272480u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x272484: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x272484u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_272488:
    // 0x272488: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x272488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x27248c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x27248cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x272490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272494: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x272494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x272498: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x272498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x27249c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27249cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2724a0: 0x460c0381  sub.s       $f14, $f0, $f12
    ctx->pc = 0x2724a0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2724a4: 0x460d0ac1  sub.s       $f11, $f1, $f13
    ctx->pc = 0x2724a4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x2724a8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2724a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2724ac: 0x460b7300  add.s       $f12, $f14, $f11
    ctx->pc = 0x2724acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x2724b0: 0x460c6382  mul.s       $f14, $f12, $f12
    ctx->pc = 0x2724b0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2724b4:
    // 0x2724b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2724b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2724b8: 0x2462ca58  addiu       $v0, $v1, -0x35A8
    ctx->pc = 0x2724b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953560));
    // 0x2724bc: 0xc469ca58  lwc1        $f9, -0x35A8($v1)
    ctx->pc = 0x2724bcu;
    { uint32_t bits = FAST_READ32(0x6ACA58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2724c0: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x2724c0u;
    { uint32_t bits = FAST_READ32(0x6ACA88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2724c4: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x2724c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x2724c8: 0x460e72c2  mul.s       $f11, $f14, $f14
    ctx->pc = 0x2724c8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x2724cc: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x2724ccu;
    { uint32_t bits = FAST_READ32(0x6ACA84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2724d0: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x2724d0u;
    { uint32_t bits = FAST_READ32(0x6ACA80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2724d4: 0x460c73c2  mul.s       $f15, $f14, $f12
    ctx->pc = 0x2724d4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x2724d8: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x2724d8u;
    { uint32_t bits = FAST_READ32(0x6ACA7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2724dc: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x2724dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x2724e0: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x2724e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x2724e4: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x2724e4u;
    { uint32_t bits = FAST_READ32(0x6ACA78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2724e8: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x2724e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x2724ec: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2724ecu;
    { uint32_t bits = FAST_READ32(0x6ACA74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2724f0: 0xc4470018  lwc1        $f7, 0x18($v0)
    ctx->pc = 0x2724f0u;
    { uint32_t bits = FAST_READ32(0x6ACA70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2724f4: 0x460f4a42  mul.s       $f9, $f9, $f15
    ctx->pc = 0x2724f4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x2724f8: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x2724f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x2724fc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2724fcu;
    { uint32_t bits = FAST_READ32(0x6ACA6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272500: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x272500u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x272504: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x272504u;
    { uint32_t bits = FAST_READ32(0x6ACA68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x272508: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x272508u;
    { uint32_t bits = FAST_READ32(0x6ACA64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27250c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x27250cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x272510: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x272510u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x272514: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x272514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x272518: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x272518u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x27251c: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x27251cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x272520: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x272520u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x272524: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x272524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x272528: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x272528u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x27252c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x27252cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x272530: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x272530u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x272534: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x272534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x272538: 0x460759c2  mul.s       $f7, $f11, $f7
    ctx->pc = 0x272538u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x27253c: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x27253cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x272540: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x272540u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x272544: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x272544u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x272548: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x272548u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x27254c: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x27254cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x272550: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x272550u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x272554: 0x460550c0  add.s       $f3, $f10, $f5
    ctx->pc = 0x272554u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x272558: 0x46087102  mul.s       $f4, $f14, $f8
    ctx->pc = 0x272558u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x27255c: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x27255cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x272560: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x272560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x272564: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x272564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x272568: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x272568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x27256c: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x27256cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x272570: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x272570u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x272574: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x272574u;
    {
        const bool branch_taken_0x272574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272574u;
        // 0x272578: 0x460362c0  add.s       $f11, $f12, $f3 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272574) {
            ctx->pc = 0x2725C8u;
            goto label_2725c8;
        }
    }
    ctx->pc = 0x27257Cu;
    // 0x27257c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x27257cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x272580: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x272580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x272584: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x272584u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x272588: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x272588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x27258c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x27258cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x272590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272594: 0x46045840  add.s       $f1, $f11, $f4
    ctx->pc = 0x272594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x272598: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x272598u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27259c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x27259cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2725a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2725a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2725a4: 0x0  nop
    ctx->pc = 0x2725a4u;
    // NOP
    // 0x2725a8: 0x0  nop
    ctx->pc = 0x2725a8u;
    // NOP
    // 0x2725ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2725acu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2725b0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2725b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2725b4: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x2725b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2725b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2725b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2725bc: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2725bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2725c0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2725C0u;
    {
        const bool branch_taken_0x2725c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725C0u;
        // 0x2725c4: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725c0) {
            ctx->pc = 0x272648u;
            goto label_272648;
        }
    }
    ctx->pc = 0x2725C8u;
label_2725c8:
    // 0x2725c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2725c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2725cc: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2725CCu;
    {
        const bool branch_taken_0x2725cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2725D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725CCu;
        // 0x2725d0: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725cc) {
            ctx->pc = 0x272648u;
            goto label_272648;
        }
    }
    ctx->pc = 0x2725D4u;
    // 0x2725d4: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x2725d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2725d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2725d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2725dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2725dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2725e0: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x2725e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x2725e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2725e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2725e8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2725e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2725ec: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x2725ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x2725f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2725f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2725f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2725f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2725f8: 0x0  nop
    ctx->pc = 0x2725f8u;
    // NOP
    // 0x2725fc: 0x0  nop
    ctx->pc = 0x2725fcu;
    // NOP
    // 0x272600: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x272600u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[11]);
    // 0x272604: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x272604u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x272608: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x272608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x27260c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x27260cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272610: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x272610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x272614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272618: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x272618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x27261c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27261cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x272620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272624: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x272624u;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x272628: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x272628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27262c: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x27262cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x272630: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x272630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272634: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x272634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x272638: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x272638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27263c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27263cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272640: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x272640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x272644: 0x0  nop
    ctx->pc = 0x272644u;
    // NOP
label_272648:
    // 0x272648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27264c:
    // 0x27264c: 0x3e00008  jr          $ra
    ctx->pc = 0x27264Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27264Cu;
        // 0x272650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27264Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272654u;
    // 0x272654: 0x0  nop
    ctx->pc = 0x272654u;
    // NOP
    // 0x272658: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x272658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27265c: 0x0  nop
    ctx->pc = 0x27265cu;
    // NOP
    ctx->pc = 0x272660u;
}
