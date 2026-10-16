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

// Function: sub_001E3788
// Address: 0x1e3788 - 0x1e3880
void sub_001E3788_0x1e3788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3788_0x1e3788");
#endif

    switch (ctx->pc) {
        case 0x1e3788u: goto label_1e3788;
        case 0x1e378cu: goto label_1e378c;
        case 0x1e3790u: goto label_1e3790;
        case 0x1e3794u: goto label_1e3794;
        case 0x1e3798u: goto label_1e3798;
        case 0x1e379cu: goto label_1e379c;
        case 0x1e37a0u: goto label_1e37a0;
        case 0x1e37a4u: goto label_1e37a4;
        case 0x1e37a8u: goto label_1e37a8;
        case 0x1e37acu: goto label_1e37ac;
        case 0x1e37b0u: goto label_1e37b0;
        case 0x1e37b4u: goto label_1e37b4;
        case 0x1e37b8u: goto label_1e37b8;
        case 0x1e37bcu: goto label_1e37bc;
        case 0x1e37c0u: goto label_1e37c0;
        case 0x1e37c4u: goto label_1e37c4;
        case 0x1e37c8u: goto label_1e37c8;
        case 0x1e37ccu: goto label_1e37cc;
        case 0x1e37d0u: goto label_1e37d0;
        case 0x1e37d4u: goto label_1e37d4;
        case 0x1e37d8u: goto label_1e37d8;
        case 0x1e37dcu: goto label_1e37dc;
        case 0x1e37e0u: goto label_1e37e0;
        case 0x1e37e4u: goto label_1e37e4;
        case 0x1e37e8u: goto label_1e37e8;
        case 0x1e37ecu: goto label_1e37ec;
        case 0x1e37f0u: goto label_1e37f0;
        case 0x1e37f4u: goto label_1e37f4;
        case 0x1e37f8u: goto label_1e37f8;
        case 0x1e37fcu: goto label_1e37fc;
        case 0x1e3800u: goto label_1e3800;
        case 0x1e3804u: goto label_1e3804;
        case 0x1e3808u: goto label_1e3808;
        case 0x1e380cu: goto label_1e380c;
        case 0x1e3810u: goto label_1e3810;
        case 0x1e3814u: goto label_1e3814;
        case 0x1e3818u: goto label_1e3818;
        case 0x1e381cu: goto label_1e381c;
        case 0x1e3820u: goto label_1e3820;
        case 0x1e3824u: goto label_1e3824;
        case 0x1e3828u: goto label_1e3828;
        case 0x1e382cu: goto label_1e382c;
        case 0x1e3830u: goto label_1e3830;
        case 0x1e3834u: goto label_1e3834;
        case 0x1e3838u: goto label_1e3838;
        case 0x1e383cu: goto label_1e383c;
        case 0x1e3840u: goto label_1e3840;
        case 0x1e3844u: goto label_1e3844;
        case 0x1e3848u: goto label_1e3848;
        case 0x1e384cu: goto label_1e384c;
        case 0x1e3850u: goto label_1e3850;
        case 0x1e3854u: goto label_1e3854;
        case 0x1e3858u: goto label_1e3858;
        case 0x1e385cu: goto label_1e385c;
        case 0x1e3860u: goto label_1e3860;
        case 0x1e3864u: goto label_1e3864;
        case 0x1e3868u: goto label_1e3868;
        case 0x1e386cu: goto label_1e386c;
        case 0x1e3870u: goto label_1e3870;
        case 0x1e3874u: goto label_1e3874;
        case 0x1e3878u: goto label_1e3878;
        case 0x1e387cu: goto label_1e387c;
        default: break;
    }

    ctx->pc = 0x1e3788u;

label_1e3788:
    // 0x1e3788: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e378c:
    // 0x1e378c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1e3790:
    // 0x1e3790: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e3790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e3794:
    // 0x1e3794: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1e3794u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3798:
    // 0x1e3798: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e3798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e379c:
    // 0x1e379c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1e379cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e37a0:
    // 0x1e37a0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1e37a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1e37a4:
    // 0x1e37a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e37a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e37a8:
    // 0x1e37a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e37a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e37ac:
    // 0x1e37ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1e37acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1e37b0:
    // 0x1e37b0: 0x8c428a30  lw          $v0, -0x75D0($v0)
    ctx->pc = 0x1e37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937136)));
label_1e37b4:
    // 0x1e37b4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e37b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e37b8:
    // 0x1e37b8: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x1e37b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e37bc:
    // 0x1e37bc: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1e37bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1e37c0:
    // 0x1e37c0: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1e37c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_1e37c4:
    // 0x1e37c4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1e37c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1e37c8:
    // 0x1e37c8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e37c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e37cc:
    // 0x1e37cc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1e37d0:
    if (ctx->pc == 0x1E37D0u) {
        ctx->pc = 0x1E37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37CCu;
        // 0x1e37d0: 0x8c660008  lw          $a2, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37D4u;
        goto label_1e37d4;
    }
    ctx->pc = 0x1E37CCu;
    {
        const bool branch_taken_0x1e37cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37CCu;
        // 0x1e37d0: 0x8c660008  lw          $a2, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37cc) {
            ctx->pc = 0x1E3834u;
            goto label_1e3834;
        }
    }
    ctx->pc = 0x1E37D4u;
label_1e37d4:
    // 0x1e37d4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1e37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1e37d8:
    // 0x1e37d8: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x1e37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1e37dc:
    // 0x1e37dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e37dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e37e0:
    // 0x1e37e0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1e37e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e37e4:
    // 0x1e37e4: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
label_1e37e8:
    if (ctx->pc == 0x1E37E8u) {
        ctx->pc = 0x1E37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37E4u;
        // 0x1e37e8: 0x8d448a30  lw          $a0, -0x75D0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294937136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37ECu;
        goto label_1e37ec;
    }
    ctx->pc = 0x1E37E4u;
    {
        const bool branch_taken_0x1e37e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e37e4) {
            ctx->pc = 0x1E37E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E37E4u;
            // 0x1e37e8: 0x8d448a30  lw          $a0, -0x75D0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294937136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3828u;
            goto label_1e3828;
        }
    }
    ctx->pc = 0x1E37ECu;
label_1e37ec:
    // 0x1e37ec: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1e37ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e37f0:
    // 0x1e37f0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1e37f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e37f4:
    // 0x1e37f4: 0x0  nop
    ctx->pc = 0x1e37f4u;
    // NOP
label_1e37f8:
    // 0x1e37f8: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_1e37fc:
    if (ctx->pc == 0x1E37FCu) {
        ctx->pc = 0x1E37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37F8u;
        // 0x1e37fc: 0x8d448a30  lw          $a0, -0x75D0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294937136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3800u;
        goto label_1e3800;
    }
    ctx->pc = 0x1E37F8u;
    {
        const bool branch_taken_0x1e37f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e37f8) {
            ctx->pc = 0x1E37FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E37F8u;
            // 0x1e37fc: 0x8d448a30  lw          $a0, -0x75D0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294937136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3828u;
            goto label_1e3828;
        }
    }
    ctx->pc = 0x1E3800u;
label_1e3800:
    // 0x1e3800: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e3800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e3804:
    // 0x1e3804: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e3804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3808:
    // 0x1e3808: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1e3808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e380c:
    // 0x1e380c: 0x0  nop
    ctx->pc = 0x1e380cu;
    // NOP
label_1e3810:
    // 0x1e3810: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_1e3814:
    if (ctx->pc == 0x1E3814u) {
        ctx->pc = 0x1E3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3810u;
        // 0x1e3814: 0x8d448a30  lw          $a0, -0x75D0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294937136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3818u;
        goto label_1e3818;
    }
    ctx->pc = 0x1E3810u;
    {
        const bool branch_taken_0x1e3810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3810) {
            ctx->pc = 0x1E3814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3810u;
            // 0x1e3814: 0x8d448a30  lw          $a0, -0x75D0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294937136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3828u;
            goto label_1e3828;
        }
    }
    ctx->pc = 0x1E3818u;
label_1e3818:
    // 0x1e3818: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e3818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1e381c:
    // 0x1e381c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e3820:
    // 0x1e3820: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e3824:
    if (ctx->pc == 0x1E3824u) {
        ctx->pc = 0x1E3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3820u;
        // 0x1e3824: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3828u;
        goto label_1e3828;
    }
    ctx->pc = 0x1E3820u;
    {
        const bool branch_taken_0x1e3820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3820u;
        // 0x1e3824: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3820) {
            ctx->pc = 0x1E3834u;
            goto label_1e3834;
        }
    }
    ctx->pc = 0x1E3828u;
label_1e3828:
    // 0x1e3828: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e3828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1e382c:
    // 0x1e382c: 0xc061394  jal         func_184E50
label_1e3830:
    if (ctx->pc == 0x1E3830u) {
        ctx->pc = 0x1E3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E382Cu;
        // 0x1e3830: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3834u;
        goto label_1e3834;
    }
    ctx->pc = 0x1E382Cu;
    SET_GPR_U32(ctx, 31, 0x1E3834u);
    ctx->pc = 0x1E3830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E382Cu;
    // 0x1e3830: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x184E50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x184E50u, 0x1E382Cu, 0x1E3834u)) {
        return;
    }
    ctx->pc = 0x1E3834u;
label_1e3834:
    // 0x1e3834: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e3834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e3838:
    // 0x1e3838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e383c:
    // 0x1e383c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1e383cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e3840:
    // 0x1e3840: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e3840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e3844:
    // 0x1e3844: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1e3844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1e3848:
    // 0x1e3848: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e3848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e384c:
    // 0x1e384c: 0x60f809  jalr        $v1
label_1e3850:
    if (ctx->pc == 0x1E3850u) {
        ctx->pc = 0x1E3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E384Cu;
        // 0x1e3850: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3854u;
        goto label_1e3854;
    }
    ctx->pc = 0x1E384Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3854u);
        ctx->pc = 0x1E3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E384Cu;
        // 0x1e3850: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E384Cu, 0x1E3854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3854u;
label_1e3854:
    // 0x1e3854: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e3854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3858:
    // 0x1e3858: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e3858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e385c:
    // 0x1e385c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e385cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3860:
    // 0x1e3860: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1e3860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e3864:
    // 0x1e3864: 0x3e00008  jr          $ra
label_1e3868:
    if (ctx->pc == 0x1E3868u) {
        ctx->pc = 0x1E3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3864u;
        // 0x1e3868: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E386Cu;
        goto label_1e386c;
    }
    ctx->pc = 0x1E3864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3864u;
        // 0x1e3868: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E386Cu;
label_1e386c:
    // 0x1e386c: 0x0  nop
    ctx->pc = 0x1e386cu;
    // NOP
label_1e3870:
    // 0x1e3870: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e3870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e3874:
    // 0x1e3874: 0x0  nop
    ctx->pc = 0x1e3874u;
    // NOP
label_1e3878:
    // 0x1e3878: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e3878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e387c:
    // 0x1e387c: 0x0  nop
    ctx->pc = 0x1e387cu;
    // NOP
    ctx->pc = 0x1e3880u;
}
