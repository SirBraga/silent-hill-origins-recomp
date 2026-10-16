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

// Function: sub_001296B8
// Address: 0x1296b8 - 0x129880
void sub_001296B8_0x1296b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001296B8_0x1296b8");
#endif

    switch (ctx->pc) {
        case 0x1296b8u: goto label_1296b8;
        case 0x1296bcu: goto label_1296bc;
        case 0x1296c0u: goto label_1296c0;
        case 0x1296c4u: goto label_1296c4;
        case 0x1296c8u: goto label_1296c8;
        case 0x1296ccu: goto label_1296cc;
        case 0x1296d0u: goto label_1296d0;
        case 0x1296d4u: goto label_1296d4;
        case 0x1296d8u: goto label_1296d8;
        case 0x1296dcu: goto label_1296dc;
        case 0x1296e0u: goto label_1296e0;
        case 0x1296e4u: goto label_1296e4;
        case 0x1296e8u: goto label_1296e8;
        case 0x1296ecu: goto label_1296ec;
        case 0x1296f0u: goto label_1296f0;
        case 0x1296f4u: goto label_1296f4;
        case 0x1296f8u: goto label_1296f8;
        case 0x1296fcu: goto label_1296fc;
        case 0x129700u: goto label_129700;
        case 0x129704u: goto label_129704;
        case 0x129708u: goto label_129708;
        case 0x12970cu: goto label_12970c;
        case 0x129710u: goto label_129710;
        case 0x129714u: goto label_129714;
        case 0x129718u: goto label_129718;
        case 0x12971cu: goto label_12971c;
        case 0x129720u: goto label_129720;
        case 0x129724u: goto label_129724;
        case 0x129728u: goto label_129728;
        case 0x12972cu: goto label_12972c;
        case 0x129730u: goto label_129730;
        case 0x129734u: goto label_129734;
        case 0x129738u: goto label_129738;
        case 0x12973cu: goto label_12973c;
        case 0x129740u: goto label_129740;
        case 0x129744u: goto label_129744;
        case 0x129748u: goto label_129748;
        case 0x12974cu: goto label_12974c;
        case 0x129750u: goto label_129750;
        case 0x129754u: goto label_129754;
        case 0x129758u: goto label_129758;
        case 0x12975cu: goto label_12975c;
        case 0x129760u: goto label_129760;
        case 0x129764u: goto label_129764;
        case 0x129768u: goto label_129768;
        case 0x12976cu: goto label_12976c;
        case 0x129770u: goto label_129770;
        case 0x129774u: goto label_129774;
        case 0x129778u: goto label_129778;
        case 0x12977cu: goto label_12977c;
        case 0x129780u: goto label_129780;
        case 0x129784u: goto label_129784;
        case 0x129788u: goto label_129788;
        case 0x12978cu: goto label_12978c;
        case 0x129790u: goto label_129790;
        case 0x129794u: goto label_129794;
        case 0x129798u: goto label_129798;
        case 0x12979cu: goto label_12979c;
        case 0x1297a0u: goto label_1297a0;
        case 0x1297a4u: goto label_1297a4;
        case 0x1297a8u: goto label_1297a8;
        case 0x1297acu: goto label_1297ac;
        case 0x1297b0u: goto label_1297b0;
        case 0x1297b4u: goto label_1297b4;
        case 0x1297b8u: goto label_1297b8;
        case 0x1297bcu: goto label_1297bc;
        case 0x1297c0u: goto label_1297c0;
        case 0x1297c4u: goto label_1297c4;
        case 0x1297c8u: goto label_1297c8;
        case 0x1297ccu: goto label_1297cc;
        case 0x1297d0u: goto label_1297d0;
        case 0x1297d4u: goto label_1297d4;
        case 0x1297d8u: goto label_1297d8;
        case 0x1297dcu: goto label_1297dc;
        case 0x1297e0u: goto label_1297e0;
        case 0x1297e4u: goto label_1297e4;
        case 0x1297e8u: goto label_1297e8;
        case 0x1297ecu: goto label_1297ec;
        case 0x1297f0u: goto label_1297f0;
        case 0x1297f4u: goto label_1297f4;
        case 0x1297f8u: goto label_1297f8;
        case 0x1297fcu: goto label_1297fc;
        case 0x129800u: goto label_129800;
        case 0x129804u: goto label_129804;
        case 0x129808u: goto label_129808;
        case 0x12980cu: goto label_12980c;
        case 0x129810u: goto label_129810;
        case 0x129814u: goto label_129814;
        case 0x129818u: goto label_129818;
        case 0x12981cu: goto label_12981c;
        case 0x129820u: goto label_129820;
        case 0x129824u: goto label_129824;
        case 0x129828u: goto label_129828;
        case 0x12982cu: goto label_12982c;
        case 0x129830u: goto label_129830;
        case 0x129834u: goto label_129834;
        case 0x129838u: goto label_129838;
        case 0x12983cu: goto label_12983c;
        case 0x129840u: goto label_129840;
        case 0x129844u: goto label_129844;
        case 0x129848u: goto label_129848;
        case 0x12984cu: goto label_12984c;
        case 0x129850u: goto label_129850;
        case 0x129854u: goto label_129854;
        case 0x129858u: goto label_129858;
        case 0x12985cu: goto label_12985c;
        case 0x129860u: goto label_129860;
        case 0x129864u: goto label_129864;
        case 0x129868u: goto label_129868;
        case 0x12986cu: goto label_12986c;
        case 0x129870u: goto label_129870;
        case 0x129874u: goto label_129874;
        case 0x129878u: goto label_129878;
        case 0x12987cu: goto label_12987c;
        default: break;
    }

    ctx->pc = 0x1296b8u;

label_1296b8:
    // 0x1296b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1296b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1296bc:
    // 0x1296bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1296bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1296c0:
    // 0x1296c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1296c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1296c4:
    // 0x1296c4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1296c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1296c8:
    // 0x1296c8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1296c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1296cc:
    // 0x1296cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1296ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1296d0:
    // 0x1296d0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1296d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1296d4:
    // 0x1296d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1296d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1296d8:
    // 0x1296d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1296d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1296dc:
    // 0x1296dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1296dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1296e0:
    // 0x1296e0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1296e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1296e4:
    // 0x1296e4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1296e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1296e8:
    // 0x1296e8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1296e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1296ec:
    // 0x1296ec: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1296ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_1296f0:
    // 0x1296f0: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x1296f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1296f4:
    // 0x1296f4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1296f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1296f8:
    // 0x1296f8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1296f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1296fc:
    // 0x1296fc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1296fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129700:
    // 0x129700: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x129700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_129704:
    // 0x129704: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x129704u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_129708:
    // 0x129708: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x129708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12970c:
    // 0x12970c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x12970cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_129710:
    // 0x129710: 0x46142142  mul.s       $f5, $f4, $f20
    ctx->pc = 0x129710u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_129714:
    // 0x129714: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x129714u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_129718:
    // 0x129718: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x129718u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12971c:
    // 0x12971c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x12971cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_129720:
    // 0x129720: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x129720u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_129724:
    // 0x129724: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x129724u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_129728:
    // 0x129728: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x129728u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_12972c:
    // 0x12972c: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x12972cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_129730:
    // 0x129730: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x129730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_129734:
    // 0x129734: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x129734u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_129738:
    // 0x129738: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x129738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12973c:
    // 0x12973c: 0xc093a88  jal         func_24EA20
label_129740:
    if (ctx->pc == 0x129740u) {
        ctx->pc = 0x129740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12973Cu;
        // 0x129740: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129744u;
        goto label_129744;
    }
    ctx->pc = 0x12973Cu;
    SET_GPR_U32(ctx, 31, 0x129744u);
    ctx->pc = 0x129740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12973Cu;
    // 0x129740: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x12973Cu, 0x129744u)) {
        return;
    }
    ctx->pc = 0x129744u;
label_129744:
    // 0x129744: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x129744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_129748:
    // 0x129748: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x129748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12974c:
    // 0x12974c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x12974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_129750:
    // 0x129750: 0xc6070008  lwc1        $f7, 0x8($s0)
    ctx->pc = 0x129750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_129754:
    // 0x129754: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x129754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129758:
    // 0x129758: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x129758u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_12975c:
    // 0x12975c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x12975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_129760:
    // 0x129760: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x129760u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_129764:
    // 0x129764: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x129764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_129768:
    // 0x129768: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x129768u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_12976c:
    // 0x12976c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12976cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_129770:
    // 0x129770: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x129770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_129774:
    // 0x129774: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x129774u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_129778:
    // 0x129778: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x129778u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_12977c:
    // 0x12977c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x12977cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_129780:
    // 0x129780: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x129780u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_129784:
    // 0x129784: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x129784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_129788:
    // 0x129788: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x129788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12978c:
    // 0x12978c: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x12978cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_129790:
    // 0x129790: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x129790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_129794:
    // 0x129794: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x129794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_129798:
    // 0x129798: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x129798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12979c:
    // 0x12979c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x12979cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1297a0:
    // 0x1297a0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1297a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_1297a4:
    // 0x1297a4: 0x6a460007  ldl         $a2, 0x7($s2)
    ctx->pc = 0x1297a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1297a8:
    // 0x1297a8: 0x6e460000  ldr         $a2, 0x0($s2)
    ctx->pc = 0x1297a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1297ac:
    // 0x1297ac: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x1297acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1297b0:
    // 0x1297b0: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x1297b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1297b4:
    // 0x1297b4: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x1297b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1297b8:
    // 0x1297b8: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x1297b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_1297bc:
    // 0x1297bc: 0xc092d94  jal         func_24B650
label_1297c0:
    if (ctx->pc == 0x1297C0u) {
        ctx->pc = 0x1297C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297BCu;
        // 0x1297c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1297C4u;
        goto label_1297c4;
    }
    ctx->pc = 0x1297BCu;
    SET_GPR_U32(ctx, 31, 0x1297C4u);
    ctx->pc = 0x1297C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1297BCu;
    // 0x1297c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x1297BCu, 0x1297C4u)) {
        return;
    }
    ctx->pc = 0x1297C4u;
label_1297c4:
    // 0x1297c4: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x1297c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1297c8:
    // 0x1297c8: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x1297c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1297cc:
    // 0x1297cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1297ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1297d0:
    // 0x1297d0: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1297d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1297d4:
    // 0x1297d4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1297d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1297d8:
    // 0x1297d8: 0x40f809  jalr        $v0
label_1297dc:
    if (ctx->pc == 0x1297DCu) {
        ctx->pc = 0x1297DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297D8u;
        // 0x1297dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1297E0u;
        goto label_1297e0;
    }
    ctx->pc = 0x1297D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1297E0u);
        ctx->pc = 0x1297DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297D8u;
        // 0x1297dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1297D8u, 0x1297E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1297E0u;
label_1297e0:
    // 0x1297e0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1297e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1297e4:
    // 0x1297e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1297e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1297e8:
    // 0x1297e8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1297e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1297ec:
    // 0x1297ec: 0x26242730  addiu       $a0, $s1, 0x2730
    ctx->pc = 0x1297ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10032));
label_1297f0:
    // 0x1297f0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1297f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1297f4:
    // 0x1297f4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1297f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1297f8:
    // 0x1297f8: 0x8e222aa8  lw          $v0, 0x2AA8($s1)
    ctx->pc = 0x1297f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10920)));
label_1297fc:
    // 0x1297fc: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x1297fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_129800:
    // 0x129800: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x129800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_129804:
    // 0x129804: 0xb3a30067  sdl         $v1, 0x67($sp)
    ctx->pc = 0x129804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129808:
    // 0x129808: 0xb7a30060  sdr         $v1, 0x60($sp)
    ctx->pc = 0x129808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12980c:
    // 0x12980c: 0x6ba30067  ldl         $v1, 0x67($sp)
    ctx->pc = 0x12980cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_129810:
    // 0x129810: 0x6fa30060  ldr         $v1, 0x60($sp)
    ctx->pc = 0x129810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_129814:
    // 0x129814: 0xb0430043  sdl         $v1, 0x43($v0)
    ctx->pc = 0x129814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129818:
    // 0x129818: 0xb443003c  sdr         $v1, 0x3C($v0)
    ctx->pc = 0x129818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12981c:
    // 0x12981c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x12981cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_129820:
    // 0x129820: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x129820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_129824:
    // 0x129824: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x129824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_129828:
    // 0x129828: 0xb2222c07  sdl         $v0, 0x2C07($s1)
    ctx->pc = 0x129828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12982c:
    // 0x12982c: 0xb6222c00  sdr         $v0, 0x2C00($s1)
    ctx->pc = 0x12982cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_129830:
    // 0x129830: 0xae232c08  sw          $v1, 0x2C08($s1)
    ctx->pc = 0x129830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11272), GPR_U32(ctx, 3));
label_129834:
    // 0x129834: 0xe6342bfc  swc1        $f20, 0x2BFC($s1)
    ctx->pc = 0x129834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11260), bits); }
label_129838:
    // 0x129838: 0x6a490007  ldl         $t1, 0x7($s2)
    ctx->pc = 0x129838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_12983c:
    // 0x12983c: 0x6e490000  ldr         $t1, 0x0($s2)
    ctx->pc = 0x12983cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_129840:
    // 0x129840: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x129840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_129844:
    // 0x129844: 0xb2292a87  sdl         $t1, 0x2A87($s1)
    ctx->pc = 0x129844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10887); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129848:
    // 0x129848: 0xb6292a80  sdr         $t1, 0x2A80($s1)
    ctx->pc = 0x129848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10880); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12984c:
    // 0x12984c: 0xae222a88  sw          $v0, 0x2A88($s1)
    ctx->pc = 0x12984cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10888), GPR_U32(ctx, 2));
label_129850:
    // 0x129850: 0xc06b344  jal         func_1ACD10
label_129854:
    if (ctx->pc == 0x129854u) {
        ctx->pc = 0x129854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129850u;
        // 0x129854: 0x26252740  addiu       $a1, $s1, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129858u;
        goto label_129858;
    }
    ctx->pc = 0x129850u;
    SET_GPR_U32(ctx, 31, 0x129858u);
    ctx->pc = 0x129854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129850u;
    // 0x129854: 0x26252740  addiu       $a1, $s1, 0x2740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ACD10u, 0x129850u, 0x129858u)) {
        return;
    }
    ctx->pc = 0x129858u;
label_129858:
    // 0x129858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12985c:
    // 0x12985c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x12985cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_129860:
    // 0x129860: 0xae222c68  sw          $v0, 0x2C68($s1)
    ctx->pc = 0x129860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11368), GPR_U32(ctx, 2));
label_129864:
    // 0x129864: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x129864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_129868:
    // 0x129868: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x129868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12986c:
    // 0x12986c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12986cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_129870:
    // 0x129870: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x129870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_129874:
    // 0x129874: 0x3e00008  jr          $ra
label_129878:
    if (ctx->pc == 0x129878u) {
        ctx->pc = 0x129878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129874u;
        // 0x129878: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12987Cu;
        goto label_12987c;
    }
    ctx->pc = 0x129874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129874u;
        // 0x129878: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12987Cu;
label_12987c:
    // 0x12987c: 0x0  nop
    ctx->pc = 0x12987cu;
    // NOP
    ctx->pc = 0x129880u;
}
