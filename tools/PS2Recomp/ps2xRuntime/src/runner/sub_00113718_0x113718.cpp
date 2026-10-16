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

// Function: sub_00113718
// Address: 0x113718 - 0x113900
void sub_00113718_0x113718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113718_0x113718");
#endif

    switch (ctx->pc) {
        case 0x113718u: goto label_113718;
        case 0x11371cu: goto label_11371c;
        case 0x113720u: goto label_113720;
        case 0x113724u: goto label_113724;
        case 0x113728u: goto label_113728;
        case 0x11372cu: goto label_11372c;
        case 0x113730u: goto label_113730;
        case 0x113734u: goto label_113734;
        case 0x113738u: goto label_113738;
        case 0x11373cu: goto label_11373c;
        case 0x113740u: goto label_113740;
        case 0x113744u: goto label_113744;
        case 0x113748u: goto label_113748;
        case 0x11374cu: goto label_11374c;
        case 0x113750u: goto label_113750;
        case 0x113754u: goto label_113754;
        case 0x113758u: goto label_113758;
        case 0x11375cu: goto label_11375c;
        case 0x113760u: goto label_113760;
        case 0x113764u: goto label_113764;
        case 0x113768u: goto label_113768;
        case 0x11376cu: goto label_11376c;
        case 0x113770u: goto label_113770;
        case 0x113774u: goto label_113774;
        case 0x113778u: goto label_113778;
        case 0x11377cu: goto label_11377c;
        case 0x113780u: goto label_113780;
        case 0x113784u: goto label_113784;
        case 0x113788u: goto label_113788;
        case 0x11378cu: goto label_11378c;
        case 0x113790u: goto label_113790;
        case 0x113794u: goto label_113794;
        case 0x113798u: goto label_113798;
        case 0x11379cu: goto label_11379c;
        case 0x1137a0u: goto label_1137a0;
        case 0x1137a4u: goto label_1137a4;
        case 0x1137a8u: goto label_1137a8;
        case 0x1137acu: goto label_1137ac;
        case 0x1137b0u: goto label_1137b0;
        case 0x1137b4u: goto label_1137b4;
        case 0x1137b8u: goto label_1137b8;
        case 0x1137bcu: goto label_1137bc;
        case 0x1137c0u: goto label_1137c0;
        case 0x1137c4u: goto label_1137c4;
        case 0x1137c8u: goto label_1137c8;
        case 0x1137ccu: goto label_1137cc;
        case 0x1137d0u: goto label_1137d0;
        case 0x1137d4u: goto label_1137d4;
        case 0x1137d8u: goto label_1137d8;
        case 0x1137dcu: goto label_1137dc;
        case 0x1137e0u: goto label_1137e0;
        case 0x1137e4u: goto label_1137e4;
        case 0x1137e8u: goto label_1137e8;
        case 0x1137ecu: goto label_1137ec;
        case 0x1137f0u: goto label_1137f0;
        case 0x1137f4u: goto label_1137f4;
        case 0x1137f8u: goto label_1137f8;
        case 0x1137fcu: goto label_1137fc;
        case 0x113800u: goto label_113800;
        case 0x113804u: goto label_113804;
        case 0x113808u: goto label_113808;
        case 0x11380cu: goto label_11380c;
        case 0x113810u: goto label_113810;
        case 0x113814u: goto label_113814;
        case 0x113818u: goto label_113818;
        case 0x11381cu: goto label_11381c;
        case 0x113820u: goto label_113820;
        case 0x113824u: goto label_113824;
        case 0x113828u: goto label_113828;
        case 0x11382cu: goto label_11382c;
        case 0x113830u: goto label_113830;
        case 0x113834u: goto label_113834;
        case 0x113838u: goto label_113838;
        case 0x11383cu: goto label_11383c;
        case 0x113840u: goto label_113840;
        case 0x113844u: goto label_113844;
        case 0x113848u: goto label_113848;
        case 0x11384cu: goto label_11384c;
        case 0x113850u: goto label_113850;
        case 0x113854u: goto label_113854;
        case 0x113858u: goto label_113858;
        case 0x11385cu: goto label_11385c;
        case 0x113860u: goto label_113860;
        case 0x113864u: goto label_113864;
        case 0x113868u: goto label_113868;
        case 0x11386cu: goto label_11386c;
        case 0x113870u: goto label_113870;
        case 0x113874u: goto label_113874;
        case 0x113878u: goto label_113878;
        case 0x11387cu: goto label_11387c;
        case 0x113880u: goto label_113880;
        case 0x113884u: goto label_113884;
        case 0x113888u: goto label_113888;
        case 0x11388cu: goto label_11388c;
        case 0x113890u: goto label_113890;
        case 0x113894u: goto label_113894;
        case 0x113898u: goto label_113898;
        case 0x11389cu: goto label_11389c;
        case 0x1138a0u: goto label_1138a0;
        case 0x1138a4u: goto label_1138a4;
        case 0x1138a8u: goto label_1138a8;
        case 0x1138acu: goto label_1138ac;
        case 0x1138b0u: goto label_1138b0;
        case 0x1138b4u: goto label_1138b4;
        case 0x1138b8u: goto label_1138b8;
        case 0x1138bcu: goto label_1138bc;
        case 0x1138c0u: goto label_1138c0;
        case 0x1138c4u: goto label_1138c4;
        case 0x1138c8u: goto label_1138c8;
        case 0x1138ccu: goto label_1138cc;
        case 0x1138d0u: goto label_1138d0;
        case 0x1138d4u: goto label_1138d4;
        case 0x1138d8u: goto label_1138d8;
        case 0x1138dcu: goto label_1138dc;
        case 0x1138e0u: goto label_1138e0;
        case 0x1138e4u: goto label_1138e4;
        case 0x1138e8u: goto label_1138e8;
        case 0x1138ecu: goto label_1138ec;
        case 0x1138f0u: goto label_1138f0;
        case 0x1138f4u: goto label_1138f4;
        case 0x1138f8u: goto label_1138f8;
        case 0x1138fcu: goto label_1138fc;
        default: break;
    }

    ctx->pc = 0x113718u;

label_113718:
    // 0x113718: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x113718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_11371c:
    // 0x11371c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x11371cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_113720:
    // 0x113720: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x113720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_113724:
    // 0x113724: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x113724u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_113728:
    // 0x113728: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x113728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_11372c:
    // 0x11372c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11372cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113730:
    // 0x113730: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x113730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_113734:
    // 0x113734: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x113734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_113738:
    // 0x113738: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x113738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_11373c:
    // 0x11373c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_113740:
    // 0x113740: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x113740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_113744:
    // 0x113744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_113748:
    // 0x113748: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x113748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_11374c:
    // 0x11374c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_113750:
    if (ctx->pc == 0x113750u) {
        ctx->pc = 0x113750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11374Cu;
        // 0x113750: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x113754u;
        goto label_113754;
    }
    ctx->pc = 0x11374Cu;
    {
        const bool branch_taken_0x11374c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11374Cu;
        // 0x113750: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11374c) {
            ctx->pc = 0x113780u;
            goto label_113780;
        }
    }
    ctx->pc = 0x113754u;
label_113754:
    // 0x113754: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x113754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_113758:
    // 0x113758: 0x5682000a  bnel        $s4, $v0, . + 4 + (0xA << 2)
label_11375c:
    if (ctx->pc == 0x11375Cu) {
        ctx->pc = 0x11375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113758u;
        // 0x11375c: 0x8e02009c  lw          $v0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113760u;
        goto label_113760;
    }
    ctx->pc = 0x113758u;
    {
        const bool branch_taken_0x113758 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x113758) {
            ctx->pc = 0x11375Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113758u;
            // 0x11375c: 0x8e02009c  lw          $v0, 0x9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113784u;
            goto label_113784;
        }
    }
    ctx->pc = 0x113760u;
label_113760:
    // 0x113760: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x113760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_113764:
    // 0x113764: 0x10a0005d  beqz        $a1, . + 4 + (0x5D << 2)
label_113768:
    if (ctx->pc == 0x113768u) {
        ctx->pc = 0x113768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113764u;
        // 0x113768: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11376Cu;
        goto label_11376c;
    }
    ctx->pc = 0x113764u;
    {
        const bool branch_taken_0x113764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x113768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113764u;
        // 0x113768: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113764) {
            ctx->pc = 0x1138DCu;
            goto label_1138dc;
        }
    }
    ctx->pc = 0x11376Cu;
label_11376c:
    // 0x11376c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x11376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_113770:
    // 0x113770: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x113770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_113774:
    // 0x113774: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x113774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_113778:
    // 0x113778: 0x60f809  jalr        $v1
label_11377c:
    if (ctx->pc == 0x11377Cu) {
        ctx->pc = 0x11377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113778u;
        // 0x11377c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113780u;
        goto label_113780;
    }
    ctx->pc = 0x113778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113780u);
        ctx->pc = 0x11377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113778u;
        // 0x11377c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113778u, 0x113780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113780u;
label_113780:
    // 0x113780: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x113780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_113784:
    // 0x113784: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_113788:
    if (ctx->pc == 0x113788u) {
        ctx->pc = 0x113788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113784u;
        // 0x113788: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11378Cu;
        goto label_11378c;
    }
    ctx->pc = 0x113784u;
    {
        const bool branch_taken_0x113784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113784u;
        // 0x113788: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113784) {
            ctx->pc = 0x1137E0u;
            goto label_1137e0;
        }
    }
    ctx->pc = 0x11378Cu;
label_11378c:
    // 0x11378c: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x11378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_113790:
    // 0x113790: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x113790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_113794:
    // 0x113794: 0x9202018c  lbu         $v0, 0x18C($s0)
    ctx->pc = 0x113794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 396)));
label_113798:
    // 0x113798: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x113798u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11379c:
    // 0x11379c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x11379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1137a0:
    // 0x1137a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1137a4:
    if (ctx->pc == 0x1137A4u) {
        ctx->pc = 0x1137A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137A0u;
        // 0x1137a4: 0xa202018c  sb          $v0, 0x18C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 396), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1137A8u;
        goto label_1137a8;
    }
    ctx->pc = 0x1137A0u;
    {
        const bool branch_taken_0x1137a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1137A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137A0u;
        // 0x1137a4: 0xa202018c  sb          $v0, 0x18C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 396), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137a0) {
            ctx->pc = 0x1137ACu;
            goto label_1137ac;
        }
    }
    ctx->pc = 0x1137A8u;
label_1137a8:
    // 0x1137a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1137a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1137ac:
    // 0x1137ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1137b0:
    if (ctx->pc == 0x1137B0u) {
        ctx->pc = 0x1137B4u;
        goto label_1137b4;
    }
    ctx->pc = 0x1137ACu;
    {
        const bool branch_taken_0x1137ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1137ac) {
            ctx->pc = 0x1137D0u;
            goto label_1137d0;
        }
    }
    ctx->pc = 0x1137B4u;
label_1137b4:
    // 0x1137b4: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x1137b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1137b8:
    // 0x1137b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1137b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1137bc:
    // 0x1137bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1137bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1137c0:
    // 0x1137c0: 0x0  nop
    ctx->pc = 0x1137c0u;
    // NOP
label_1137c4:
    // 0x1137c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1137c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1137c8:
    // 0x1137c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1137cc:
    if (ctx->pc == 0x1137CCu) {
        ctx->pc = 0x1137CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137C8u;
        // 0x1137cc: 0xe6000190  swc1        $f0, 0x190($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1137D0u;
        goto label_1137d0;
    }
    ctx->pc = 0x1137C8u;
    {
        const bool branch_taken_0x1137c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137C8u;
        // 0x1137cc: 0xe6000190  swc1        $f0, 0x190($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137c8) {
            ctx->pc = 0x1137F0u;
            goto label_1137f0;
        }
    }
    ctx->pc = 0x1137D0u;
label_1137d0:
    // 0x1137d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1137d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1137d4:
    // 0x1137d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1137d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1137d8:
    // 0x1137d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1137dc:
    if (ctx->pc == 0x1137DCu) {
        ctx->pc = 0x1137DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137D8u;
        // 0x1137dc: 0xe6000190  swc1        $f0, 0x190($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1137E0u;
        goto label_1137e0;
    }
    ctx->pc = 0x1137D8u;
    {
        const bool branch_taken_0x1137d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137D8u;
        // 0x1137dc: 0xe6000190  swc1        $f0, 0x190($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137d8) {
            ctx->pc = 0x1137F0u;
            goto label_1137f0;
        }
    }
    ctx->pc = 0x1137E0u;
label_1137e0:
    // 0x1137e0: 0x9202018c  lbu         $v0, 0x18C($s0)
    ctx->pc = 0x1137e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 396)));
label_1137e4:
    // 0x1137e4: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x1137e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
label_1137e8:
    // 0x1137e8: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x1137e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_1137ec:
    // 0x1137ec: 0xa202018c  sb          $v0, 0x18C($s0)
    ctx->pc = 0x1137ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 396), (uint8_t)GPR_U32(ctx, 2));
label_1137f0:
    // 0x1137f0: 0xc07600c  jal         func_1D8030
label_1137f4:
    if (ctx->pc == 0x1137F4u) {
        ctx->pc = 0x1137F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137F0u;
        // 0x1137f4: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1137F8u;
        goto label_1137f8;
    }
    ctx->pc = 0x1137F0u;
    SET_GPR_U32(ctx, 31, 0x1137F8u);
    ctx->pc = 0x1137F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137F0u;
    // 0x1137f4: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1137F0u, 0x1137F8u)) {
        return;
    }
    ctx->pc = 0x1137F8u;
label_1137f8:
    // 0x1137f8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1137f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1137fc:
    // 0x1137fc: 0x261100d8  addiu       $s1, $s0, 0xD8
    ctx->pc = 0x1137fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_113800:
    // 0x113800: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
label_113804:
    if (ctx->pc == 0x113804u) {
        ctx->pc = 0x113804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113800u;
        // 0x113804: 0x26120158  addiu       $s2, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113808u;
        goto label_113808;
    }
    ctx->pc = 0x113800u;
    {
        const bool branch_taken_0x113800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113800u;
        // 0x113804: 0x26120158  addiu       $s2, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113800) {
            ctx->pc = 0x1138B8u;
            goto label_1138b8;
        }
    }
    ctx->pc = 0x113808u;
label_113808:
    // 0x113808: 0xc04de98  jal         func_137A60
label_11380c:
    if (ctx->pc == 0x11380Cu) {
        ctx->pc = 0x113810u;
        goto label_113810;
    }
    ctx->pc = 0x113808u;
    SET_GPR_U32(ctx, 31, 0x113810u);
    ctx->pc = 0x137A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137A60u, 0x113808u, 0x113810u)) {
        return;
    }
    ctx->pc = 0x113810u;
label_113810:
    // 0x113810: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_113814:
    if (ctx->pc == 0x113814u) {
        ctx->pc = 0x113814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113810u;
        // 0x113814: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113818u;
        goto label_113818;
    }
    ctx->pc = 0x113810u;
    {
        const bool branch_taken_0x113810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113810u;
        // 0x113814: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113810) {
            ctx->pc = 0x1138B8u;
            goto label_1138b8;
        }
    }
    ctx->pc = 0x113818u;
label_113818:
    // 0x113818: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x113818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
label_11381c:
    // 0x11381c: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x11381cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_113820:
    // 0x113820: 0x3863001b  xori        $v1, $v1, 0x1B
    ctx->pc = 0x113820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)27);
label_113824:
    // 0x113824: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_113828:
    if (ctx->pc == 0x113828u) {
        ctx->pc = 0x113828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113824u;
        // 0x113828: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11382Cu;
        goto label_11382c;
    }
    ctx->pc = 0x113824u;
    {
        const bool branch_taken_0x113824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113824u;
        // 0x113828: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113824) {
            ctx->pc = 0x1138BCu;
            goto label_1138bc;
        }
    }
    ctx->pc = 0x11382Cu;
label_11382c:
    // 0x11382c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x11382cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_113830:
    // 0x113830: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x113830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_113834:
    // 0x113834: 0x8c42bda8  lw          $v0, -0x4258($v0)
    ctx->pc = 0x113834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950312)));
label_113838:
    // 0x113838: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x113838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_11383c:
    // 0x11383c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11383cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_113840:
    // 0x113840: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_113844:
    if (ctx->pc == 0x113844u) {
        ctx->pc = 0x113844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113840u;
        // 0x113844: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113848u;
        goto label_113848;
    }
    ctx->pc = 0x113840u;
    {
        const bool branch_taken_0x113840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x113844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113840u;
        // 0x113844: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113840) {
            ctx->pc = 0x11385Cu;
            goto label_11385c;
        }
    }
    ctx->pc = 0x113848u;
label_113848:
    // 0x113848: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11384c:
    // 0x11384c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_113850:
    if (ctx->pc == 0x113850u) {
        ctx->pc = 0x113850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11384Cu;
        // 0x113850: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113854u;
        goto label_113854;
    }
    ctx->pc = 0x11384Cu;
    {
        const bool branch_taken_0x11384c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11384Cu;
        // 0x113850: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11384c) {
            ctx->pc = 0x113860u;
            goto label_113860;
        }
    }
    ctx->pc = 0x113854u;
label_113854:
    // 0x113854: 0xc07fd18  jal         func_1FF460
label_113858:
    if (ctx->pc == 0x113858u) {
        ctx->pc = 0x113858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113854u;
        // 0x113858: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11385Cu;
        goto label_11385c;
    }
    ctx->pc = 0x113854u;
    SET_GPR_U32(ctx, 31, 0x11385Cu);
    ctx->pc = 0x113858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113854u;
    // 0x113858: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x113854u, 0x11385Cu)) {
        return;
    }
    ctx->pc = 0x11385Cu;
label_11385c:
    // 0x11385c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_113860:
    // 0x113860: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x113860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_113864:
    // 0x113864: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_113868:
    if (ctx->pc == 0x113868u) {
        ctx->pc = 0x113868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113864u;
        // 0x113868: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11386Cu;
        goto label_11386c;
    }
    ctx->pc = 0x113864u;
    {
        const bool branch_taken_0x113864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113864u;
        // 0x113868: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113864) {
            ctx->pc = 0x1138ACu;
            goto label_1138ac;
        }
    }
    ctx->pc = 0x11386Cu;
label_11386c:
    // 0x11386c: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x11386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_113870:
    // 0x113870: 0x261100d8  addiu       $s1, $s0, 0xD8
    ctx->pc = 0x113870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_113874:
    // 0x113874: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_113878:
    if (ctx->pc == 0x113878u) {
        ctx->pc = 0x113878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113874u;
        // 0x113878: 0x26120158  addiu       $s2, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11387Cu;
        goto label_11387c;
    }
    ctx->pc = 0x113874u;
    {
        const bool branch_taken_0x113874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113874u;
        // 0x113878: 0x26120158  addiu       $s2, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113874) {
            ctx->pc = 0x1138B8u;
            goto label_1138b8;
        }
    }
    ctx->pc = 0x11387Cu;
label_11387c:
    // 0x11387c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x11387cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_113880:
    // 0x113880: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x113880u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_113884:
    // 0x113884: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x113884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_113888:
    // 0x113888: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x113888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11388c:
    // 0x11388c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x11388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_113890:
    // 0x113890: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x113890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_113894:
    // 0x113894: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x113894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_113898:
    // 0x113898: 0x60f809  jalr        $v1
label_11389c:
    if (ctx->pc == 0x11389Cu) {
        ctx->pc = 0x11389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113898u;
        // 0x11389c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1138A0u;
        goto label_1138a0;
    }
    ctx->pc = 0x113898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1138A0u);
        ctx->pc = 0x11389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113898u;
        // 0x11389c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113898u, 0x1138A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1138A0u;
label_1138a0:
    // 0x1138a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1138a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1138a4:
    // 0x1138a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1138a8:
    if (ctx->pc == 0x1138A8u) {
        ctx->pc = 0x1138A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138A4u;
        // 0x1138a8: 0xae0201a4  sw          $v0, 0x1A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1138ACu;
        goto label_1138ac;
    }
    ctx->pc = 0x1138A4u;
    {
        const bool branch_taken_0x1138a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1138A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138A4u;
        // 0x1138a8: 0xae0201a4  sw          $v0, 0x1A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138a4) {
            ctx->pc = 0x1138B8u;
            goto label_1138b8;
        }
    }
    ctx->pc = 0x1138ACu;
label_1138ac:
    // 0x1138ac: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x1138acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
label_1138b0:
    // 0x1138b0: 0x26120158  addiu       $s2, $s0, 0x158
    ctx->pc = 0x1138b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
label_1138b4:
    // 0x1138b4: 0x261100d8  addiu       $s1, $s0, 0xD8
    ctx->pc = 0x1138b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_1138b8:
    // 0x1138b8: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1138b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1138bc:
    // 0x1138bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1138bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1138c0:
    // 0x1138c0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1138c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1138c4:
    // 0x1138c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1138c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1138c8:
    // 0x1138c8: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1138c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1138cc:
    // 0x1138cc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1138ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1138d0:
    // 0x1138d0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1138d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1138d4:
    // 0x1138d4: 0x60f809  jalr        $v1
label_1138d8:
    if (ctx->pc == 0x1138D8u) {
        ctx->pc = 0x1138D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138D4u;
        // 0x1138d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1138DCu;
        goto label_1138dc;
    }
    ctx->pc = 0x1138D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1138DCu);
        ctx->pc = 0x1138D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138D4u;
        // 0x1138d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1138D4u, 0x1138DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1138DCu;
label_1138dc:
    // 0x1138dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1138dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1138e0:
    // 0x1138e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1138e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1138e4:
    // 0x1138e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1138e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1138e8:
    // 0x1138e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1138e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1138ec:
    // 0x1138ec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1138ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1138f0:
    // 0x1138f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1138f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1138f4:
    // 0x1138f4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1138f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1138f8:
    // 0x1138f8: 0x3e00008  jr          $ra
label_1138fc:
    if (ctx->pc == 0x1138FCu) {
        ctx->pc = 0x1138FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138F8u;
        // 0x1138fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113900u;
        goto label_fallthrough_0x1138f8;
    }
    ctx->pc = 0x1138F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1138FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138F8u;
        // 0x1138fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1138F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1138f8:
    ctx->pc = 0x113900u;
}
