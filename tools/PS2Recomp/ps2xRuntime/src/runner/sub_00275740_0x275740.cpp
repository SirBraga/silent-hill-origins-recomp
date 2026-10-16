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

// Function: sub_00275740
// Address: 0x275740 - 0x275930
void sub_00275740_0x275740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275740_0x275740");
#endif

    switch (ctx->pc) {
        case 0x275740u: goto label_275740;
        case 0x275744u: goto label_275744;
        case 0x275748u: goto label_275748;
        case 0x27574cu: goto label_27574c;
        case 0x275750u: goto label_275750;
        case 0x275754u: goto label_275754;
        case 0x275758u: goto label_275758;
        case 0x27575cu: goto label_27575c;
        case 0x275760u: goto label_275760;
        case 0x275764u: goto label_275764;
        case 0x275768u: goto label_275768;
        case 0x27576cu: goto label_27576c;
        case 0x275770u: goto label_275770;
        case 0x275774u: goto label_275774;
        case 0x275778u: goto label_275778;
        case 0x27577cu: goto label_27577c;
        case 0x275780u: goto label_275780;
        case 0x275784u: goto label_275784;
        case 0x275788u: goto label_275788;
        case 0x27578cu: goto label_27578c;
        case 0x275790u: goto label_275790;
        case 0x275794u: goto label_275794;
        case 0x275798u: goto label_275798;
        case 0x27579cu: goto label_27579c;
        case 0x2757a0u: goto label_2757a0;
        case 0x2757a4u: goto label_2757a4;
        case 0x2757a8u: goto label_2757a8;
        case 0x2757acu: goto label_2757ac;
        case 0x2757b0u: goto label_2757b0;
        case 0x2757b4u: goto label_2757b4;
        case 0x2757b8u: goto label_2757b8;
        case 0x2757bcu: goto label_2757bc;
        case 0x2757c0u: goto label_2757c0;
        case 0x2757c4u: goto label_2757c4;
        case 0x2757c8u: goto label_2757c8;
        case 0x2757ccu: goto label_2757cc;
        case 0x2757d0u: goto label_2757d0;
        case 0x2757d4u: goto label_2757d4;
        case 0x2757d8u: goto label_2757d8;
        case 0x2757dcu: goto label_2757dc;
        case 0x2757e0u: goto label_2757e0;
        case 0x2757e4u: goto label_2757e4;
        case 0x2757e8u: goto label_2757e8;
        case 0x2757ecu: goto label_2757ec;
        case 0x2757f0u: goto label_2757f0;
        case 0x2757f4u: goto label_2757f4;
        case 0x2757f8u: goto label_2757f8;
        case 0x2757fcu: goto label_2757fc;
        case 0x275800u: goto label_275800;
        case 0x275804u: goto label_275804;
        case 0x275808u: goto label_275808;
        case 0x27580cu: goto label_27580c;
        case 0x275810u: goto label_275810;
        case 0x275814u: goto label_275814;
        case 0x275818u: goto label_275818;
        case 0x27581cu: goto label_27581c;
        case 0x275820u: goto label_275820;
        case 0x275824u: goto label_275824;
        case 0x275828u: goto label_275828;
        case 0x27582cu: goto label_27582c;
        case 0x275830u: goto label_275830;
        case 0x275834u: goto label_275834;
        case 0x275838u: goto label_275838;
        case 0x27583cu: goto label_27583c;
        case 0x275840u: goto label_275840;
        case 0x275844u: goto label_275844;
        case 0x275848u: goto label_275848;
        case 0x27584cu: goto label_27584c;
        case 0x275850u: goto label_275850;
        case 0x275854u: goto label_275854;
        case 0x275858u: goto label_275858;
        case 0x27585cu: goto label_27585c;
        case 0x275860u: goto label_275860;
        case 0x275864u: goto label_275864;
        case 0x275868u: goto label_275868;
        case 0x27586cu: goto label_27586c;
        case 0x275870u: goto label_275870;
        case 0x275874u: goto label_275874;
        case 0x275878u: goto label_275878;
        case 0x27587cu: goto label_27587c;
        case 0x275880u: goto label_275880;
        case 0x275884u: goto label_275884;
        case 0x275888u: goto label_275888;
        case 0x27588cu: goto label_27588c;
        case 0x275890u: goto label_275890;
        case 0x275894u: goto label_275894;
        case 0x275898u: goto label_275898;
        case 0x27589cu: goto label_27589c;
        case 0x2758a0u: goto label_2758a0;
        case 0x2758a4u: goto label_2758a4;
        case 0x2758a8u: goto label_2758a8;
        case 0x2758acu: goto label_2758ac;
        case 0x2758b0u: goto label_2758b0;
        case 0x2758b4u: goto label_2758b4;
        case 0x2758b8u: goto label_2758b8;
        case 0x2758bcu: goto label_2758bc;
        case 0x2758c0u: goto label_2758c0;
        case 0x2758c4u: goto label_2758c4;
        case 0x2758c8u: goto label_2758c8;
        case 0x2758ccu: goto label_2758cc;
        case 0x2758d0u: goto label_2758d0;
        case 0x2758d4u: goto label_2758d4;
        case 0x2758d8u: goto label_2758d8;
        case 0x2758dcu: goto label_2758dc;
        case 0x2758e0u: goto label_2758e0;
        case 0x2758e4u: goto label_2758e4;
        case 0x2758e8u: goto label_2758e8;
        case 0x2758ecu: goto label_2758ec;
        case 0x2758f0u: goto label_2758f0;
        case 0x2758f4u: goto label_2758f4;
        case 0x2758f8u: goto label_2758f8;
        case 0x2758fcu: goto label_2758fc;
        case 0x275900u: goto label_275900;
        case 0x275904u: goto label_275904;
        case 0x275908u: goto label_275908;
        case 0x27590cu: goto label_27590c;
        case 0x275910u: goto label_275910;
        case 0x275914u: goto label_275914;
        case 0x275918u: goto label_275918;
        case 0x27591cu: goto label_27591c;
        case 0x275920u: goto label_275920;
        case 0x275924u: goto label_275924;
        case 0x275928u: goto label_275928;
        case 0x27592cu: goto label_27592c;
        default: break;
    }

    ctx->pc = 0x275740u;

label_275740:
    // 0x275740: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x275740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_275744:
    // 0x275744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275748:
    // 0x275748: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x275748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_27574c:
    // 0x27574c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x27574cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_275750:
    // 0x275750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_275754:
    // 0x275754: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x275754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_275758:
    // 0x275758: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x275758u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27575c:
    // 0x27575c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x27575cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_275760:
    // 0x275760: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x275760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_275764:
    // 0x275764: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x275764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_275768:
    // 0x275768: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x275768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_27576c:
    // 0x27576c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_275770:
    // 0x275770: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x275770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275774:
    // 0x275774: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x275774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275778:
    // 0x275778: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27577c:
    // 0x27577c: 0x0  nop
    ctx->pc = 0x27577cu;
    // NOP
label_275780:
    // 0x275780: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_275784:
    if (ctx->pc == 0x275784u) {
        ctx->pc = 0x275784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275780u;
        // 0x275784: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275788u;
        goto label_275788;
    }
    ctx->pc = 0x275780u;
    {
        const bool branch_taken_0x275780 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275780u;
        // 0x275784: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275780) {
            ctx->pc = 0x2757A0u;
            goto label_2757a0;
        }
    }
    ctx->pc = 0x275788u;
label_275788:
    // 0x275788: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x275788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_27578c:
    // 0x27578c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27578cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275790:
    // 0x275790: 0x0  nop
    ctx->pc = 0x275790u;
    // NOP
label_275794:
    // 0x275794: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_275798:
    if (ctx->pc == 0x275798u) {
        ctx->pc = 0x275798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275794u;
        // 0x275798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27579Cu;
        goto label_27579c;
    }
    ctx->pc = 0x275794u;
    {
        const bool branch_taken_0x275794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275794) {
            ctx->pc = 0x275798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275794u;
            // 0x275798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27579Cu;
            goto label_27579c;
        }
    }
    ctx->pc = 0x27579Cu;
label_27579c:
    // 0x27579c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x27579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2757a0:
    // 0x2757a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2757a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2757a4:
    // 0x2757a4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2757a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2757a8:
    // 0x2757a8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2757a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2757ac:
    // 0x2757ac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2757acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2757b0:
    // 0x2757b0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2757b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2757b4:
    // 0x2757b4: 0x0  nop
    ctx->pc = 0x2757b4u;
    // NOP
label_2757b8:
    // 0x2757b8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_2757bc:
    if (ctx->pc == 0x2757BCu) {
        ctx->pc = 0x2757BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757B8u;
        // 0x2757bc: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2757C0u;
        goto label_2757c0;
    }
    ctx->pc = 0x2757B8u;
    {
        const bool branch_taken_0x2757b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2757BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757B8u;
        // 0x2757bc: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757b8) {
            ctx->pc = 0x275824u;
            goto label_275824;
        }
    }
    ctx->pc = 0x2757C0u;
label_2757c0:
    // 0x2757c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2757c4:
    if (ctx->pc == 0x2757C4u) {
        ctx->pc = 0x2757C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757C0u;
        // 0x2757c4: 0xc4a1000c  lwc1        $f1, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2757C8u;
        goto label_2757c8;
    }
    ctx->pc = 0x2757C0u;
    {
        const bool branch_taken_0x2757c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2757C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757C0u;
        // 0x2757c4: 0xc4a1000c  lwc1        $f1, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757c0) {
            ctx->pc = 0x2757E4u;
            goto label_2757e4;
        }
    }
    ctx->pc = 0x2757C8u;
label_2757c8:
    // 0x2757c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2757c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2757cc:
    // 0x2757cc: 0x0  nop
    ctx->pc = 0x2757ccu;
    // NOP
label_2757d0:
    // 0x2757d0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2757d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2757d4:
    // 0x2757d4: 0x0  nop
    ctx->pc = 0x2757d4u;
    // NOP
label_2757d8:
    // 0x2757d8: 0x4503fffd  bc1tl       . + 4 + (-0x3 << 2)
label_2757dc:
    if (ctx->pc == 0x2757DCu) {
        ctx->pc = 0x2757DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757D8u;
        // 0x2757dc: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2757E0u;
        goto label_2757e0;
    }
    ctx->pc = 0x2757D8u;
    {
        const bool branch_taken_0x2757d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2757d8) {
            ctx->pc = 0x2757DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2757D8u;
            // 0x2757dc: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2757D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2757d0;
        }
    }
    ctx->pc = 0x2757E0u;
label_2757e0:
    // 0x2757e0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2757e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2757e4:
    // 0x2757e4: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x2757e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2757e8:
    // 0x2757e8: 0xc09d55c  jal         func_275570
label_2757ec:
    if (ctx->pc == 0x2757ECu) {
        ctx->pc = 0x2757ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757E8u;
        // 0x2757ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2757F0u;
        goto label_2757f0;
    }
    ctx->pc = 0x2757E8u;
    SET_GPR_U32(ctx, 31, 0x2757F0u);
    ctx->pc = 0x2757ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757E8u;
    // 0x2757ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x2757E8u, 0x2757F0u)) {
        return;
    }
    ctx->pc = 0x2757F0u;
label_2757f0:
    // 0x2757f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2757f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2757f4:
    // 0x2757f4: 0xc09d64c  jal         func_275930
label_2757f8:
    if (ctx->pc == 0x2757F8u) {
        ctx->pc = 0x2757F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757F4u;
        // 0x2757f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2757FCu;
        goto label_2757fc;
    }
    ctx->pc = 0x2757F4u;
    SET_GPR_U32(ctx, 31, 0x2757FCu);
    ctx->pc = 0x2757F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757F4u;
    // 0x2757f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x2757F4u, 0x2757FCu)) {
        return;
    }
    ctx->pc = 0x2757FCu;
label_2757fc:
    // 0x2757fc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2757fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275800:
    // 0x275800: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x275800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275804:
    // 0x275804: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275808:
    // 0x275808: 0x0  nop
    ctx->pc = 0x275808u;
    // NOP
label_27580c:
    // 0x27580c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_275810:
    if (ctx->pc == 0x275810u) {
        ctx->pc = 0x275810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27580Cu;
        // 0x275810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275814u;
        goto label_275814;
    }
    ctx->pc = 0x27580Cu;
    {
        const bool branch_taken_0x27580c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x275810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27580Cu;
        // 0x275810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27580c) {
            ctx->pc = 0x275818u;
            goto label_275818;
        }
    }
    ctx->pc = 0x275814u;
label_275814:
    // 0x275814: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275818:
    // 0x275818: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x275818u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_27581c:
    // 0x27581c: 0x10000025  b           . + 4 + (0x25 << 2)
label_275820:
    if (ctx->pc == 0x275820u) {
        ctx->pc = 0x275820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27581Cu;
        // 0x275820: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275824u;
        goto label_275824;
    }
    ctx->pc = 0x27581Cu;
    {
        const bool branch_taken_0x27581c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27581Cu;
        // 0x275820: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27581c) {
            ctx->pc = 0x2758B4u;
            goto label_2758b4;
        }
    }
    ctx->pc = 0x275824u;
label_275824:
    // 0x275824: 0x8e32002c  lw          $s2, 0x2C($s1)
    ctx->pc = 0x275824u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_275828:
    // 0x275828: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x275828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_27582c:
    // 0x27582c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27582cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275830:
    // 0x275830: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_275834:
    if (ctx->pc == 0x275834u) {
        ctx->pc = 0x275834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275830u;
        // 0x275834: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275838u;
        goto label_275838;
    }
    ctx->pc = 0x275830u;
    {
        const bool branch_taken_0x275830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275830u;
        // 0x275834: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275830) {
            ctx->pc = 0x2758B0u;
            goto label_2758b0;
        }
    }
    ctx->pc = 0x275838u;
label_275838:
    // 0x275838: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x275838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27583c:
    // 0x27583c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x27583cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275840:
    // 0x275840: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x275840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275844:
    // 0x275844: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275848:
    // 0x275848: 0x0  nop
    ctx->pc = 0x275848u;
    // NOP
label_27584c:
    // 0x27584c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_275850:
    if (ctx->pc == 0x275850u) {
        ctx->pc = 0x275850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27584Cu;
        // 0x275850: 0x2653ffff  addiu       $s3, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275854u;
        goto label_275854;
    }
    ctx->pc = 0x27584Cu;
    {
        const bool branch_taken_0x27584c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27584Cu;
        // 0x275850: 0x2653ffff  addiu       $s3, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27584c) {
            ctx->pc = 0x27587Cu;
            goto label_27587c;
        }
    }
    ctx->pc = 0x275854u;
label_275854:
    // 0x275854: 0x0  nop
    ctx->pc = 0x275854u;
    // NOP
label_275858:
    // 0x275858: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x275858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27585c:
    // 0x27585c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_275860:
    // 0x275860: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x275860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275864:
    // 0x275864: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275868:
    // 0x275868: 0x0  nop
    ctx->pc = 0x275868u;
    // NOP
label_27586c:
    // 0x27586c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
label_275870:
    if (ctx->pc == 0x275870u) {
        ctx->pc = 0x275870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27586Cu;
        // 0x275870: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275874u;
        goto label_275874;
    }
    ctx->pc = 0x27586Cu;
    {
        const bool branch_taken_0x27586c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x275870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27586Cu;
        // 0x275870: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27586c) {
            ctx->pc = 0x275858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275858;
        }
    }
    ctx->pc = 0x275874u;
label_275874:
    // 0x275874: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x275874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_275878:
    // 0x275878: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x275878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_27587c:
    // 0x27587c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275880:
    // 0x275880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275884:
    // 0x275884: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x275884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_275888:
    // 0x275888: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x275888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27588c:
    // 0x27588c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27588cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_275890:
    // 0x275890: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x275890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_275894:
    // 0x275894: 0x60f809  jalr        $v1
label_275898:
    if (ctx->pc == 0x275898u) {
        ctx->pc = 0x275898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275894u;
        // 0x275898: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27589Cu;
        goto label_27589c;
    }
    ctx->pc = 0x275894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27589Cu);
        ctx->pc = 0x275898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275894u;
        // 0x275898: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275894u, 0x27589Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27589Cu;
label_27589c:
    // 0x27589c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x27589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2758a0:
    // 0x2758a0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2758a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2758a4:
    // 0x2758a4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2758a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2758a8:
    // 0x2758a8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_2758ac:
    if (ctx->pc == 0x2758ACu) {
        ctx->pc = 0x2758ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758A8u;
        // 0x2758ac: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2758B0u;
        goto label_2758b0;
    }
    ctx->pc = 0x2758A8u;
    {
        const bool branch_taken_0x2758a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2758ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758A8u;
        // 0x2758ac: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2758a8) {
            ctx->pc = 0x275838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275838;
        }
    }
    ctx->pc = 0x2758B0u;
label_2758b0:
    // 0x2758b0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2758b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2758b4:
    // 0x2758b4: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2758b8:
    if (ctx->pc == 0x2758B8u) {
        ctx->pc = 0x2758BCu;
        goto label_2758bc;
    }
    ctx->pc = 0x2758B4u;
    {
        const bool branch_taken_0x2758b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2758b4) {
            ctx->pc = 0x2758DCu;
            goto label_2758dc;
        }
    }
    ctx->pc = 0x2758BCu;
label_2758bc:
    // 0x2758bc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2758bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2758c0:
    // 0x2758c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2758c4:
    if (ctx->pc == 0x2758C4u) {
        ctx->pc = 0x2758C8u;
        goto label_2758c8;
    }
    ctx->pc = 0x2758C0u;
    {
        const bool branch_taken_0x2758c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2758c0) {
            ctx->pc = 0x2758DCu;
            goto label_2758dc;
        }
    }
    ctx->pc = 0x2758C8u;
label_2758c8:
    // 0x2758c8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2758c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2758cc:
    // 0x2758cc: 0x40f809  jalr        $v0
label_2758d0:
    if (ctx->pc == 0x2758D0u) {
        ctx->pc = 0x2758D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758CCu;
        // 0x2758d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2758D4u;
        goto label_2758d4;
    }
    ctx->pc = 0x2758CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2758D4u);
        ctx->pc = 0x2758D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758CCu;
        // 0x2758d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2758CCu, 0x2758D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2758D4u;
label_2758d4:
    // 0x2758d4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2758d8:
    if (ctx->pc == 0x2758D8u) {
        ctx->pc = 0x2758D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758D4u;
        // 0x2758d8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2758DCu;
        goto label_2758dc;
    }
    ctx->pc = 0x2758D4u;
    {
        const bool branch_taken_0x2758d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2758d4) {
            ctx->pc = 0x2758D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2758D4u;
            // 0x2758d8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2758DCu;
            goto label_2758dc;
        }
    }
    ctx->pc = 0x2758DCu;
label_2758dc:
    // 0x2758dc: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
label_2758e0:
    if (ctx->pc == 0x2758E0u) {
        ctx->pc = 0x2758E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758DCu;
        // 0x2758e0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2758E4u;
        goto label_2758e4;
    }
    ctx->pc = 0x2758DCu;
    {
        const bool branch_taken_0x2758dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2758E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758DCu;
        // 0x2758e0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2758dc) {
            ctx->pc = 0x275908u;
            goto label_275908;
        }
    }
    ctx->pc = 0x2758E4u;
label_2758e4:
    // 0x2758e4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2758e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2758e8:
    // 0x2758e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2758ec:
    if (ctx->pc == 0x2758ECu) {
        ctx->pc = 0x2758ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758E8u;
        // 0x2758ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2758F0u;
        goto label_2758f0;
    }
    ctx->pc = 0x2758E8u;
    {
        const bool branch_taken_0x2758e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2758e8) {
            ctx->pc = 0x2758ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2758E8u;
            // 0x2758ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27590Cu;
            goto label_27590c;
        }
    }
    ctx->pc = 0x2758F0u;
label_2758f0:
    // 0x2758f0: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2758f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2758f4:
    // 0x2758f4: 0x40f809  jalr        $v0
label_2758f8:
    if (ctx->pc == 0x2758F8u) {
        ctx->pc = 0x2758F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758F4u;
        // 0x2758f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2758FCu;
        goto label_2758fc;
    }
    ctx->pc = 0x2758F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2758FCu);
        ctx->pc = 0x2758F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758F4u;
        // 0x2758f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2758F4u, 0x2758FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2758FCu;
label_2758fc:
    // 0x2758fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_275900:
    if (ctx->pc == 0x275900u) {
        ctx->pc = 0x275900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758FCu;
        // 0x275900: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275904u;
        goto label_275904;
    }
    ctx->pc = 0x2758FCu;
    {
        const bool branch_taken_0x2758fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2758fc) {
            ctx->pc = 0x275900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2758FCu;
            // 0x275900: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275904u;
            goto label_275904;
        }
    }
    ctx->pc = 0x275904u;
label_275904:
    // 0x275904: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x275904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_275908:
    // 0x275908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27590c:
    // 0x27590c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x27590cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_275910:
    // 0x275910: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x275910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_275914:
    // 0x275914: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x275914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_275918:
    // 0x275918: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x275918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27591c:
    // 0x27591c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x27591cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_275920:
    // 0x275920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_275924:
    // 0x275924: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x275924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_275928:
    // 0x275928: 0x3e00008  jr          $ra
label_27592c:
    if (ctx->pc == 0x27592Cu) {
        ctx->pc = 0x27592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275928u;
        // 0x27592c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275930u;
        goto label_fallthrough_0x275928;
    }
    ctx->pc = 0x275928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275928u;
        // 0x27592c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x275928:
    ctx->pc = 0x275930u;
}
