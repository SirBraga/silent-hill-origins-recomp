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

// Function: sub_00152698
// Address: 0x152698 - 0x152928
void sub_00152698_0x152698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152698_0x152698");
#endif

    switch (ctx->pc) {
        case 0x152698u: goto label_152698;
        case 0x15269cu: goto label_15269c;
        case 0x1526a0u: goto label_1526a0;
        case 0x1526a4u: goto label_1526a4;
        case 0x1526a8u: goto label_1526a8;
        case 0x1526acu: goto label_1526ac;
        case 0x1526b0u: goto label_1526b0;
        case 0x1526b4u: goto label_1526b4;
        case 0x1526b8u: goto label_1526b8;
        case 0x1526bcu: goto label_1526bc;
        case 0x1526c0u: goto label_1526c0;
        case 0x1526c4u: goto label_1526c4;
        case 0x1526c8u: goto label_1526c8;
        case 0x1526ccu: goto label_1526cc;
        case 0x1526d0u: goto label_1526d0;
        case 0x1526d4u: goto label_1526d4;
        case 0x1526d8u: goto label_1526d8;
        case 0x1526dcu: goto label_1526dc;
        case 0x1526e0u: goto label_1526e0;
        case 0x1526e4u: goto label_1526e4;
        case 0x1526e8u: goto label_1526e8;
        case 0x1526ecu: goto label_1526ec;
        case 0x1526f0u: goto label_1526f0;
        case 0x1526f4u: goto label_1526f4;
        case 0x1526f8u: goto label_1526f8;
        case 0x1526fcu: goto label_1526fc;
        case 0x152700u: goto label_152700;
        case 0x152704u: goto label_152704;
        case 0x152708u: goto label_152708;
        case 0x15270cu: goto label_15270c;
        case 0x152710u: goto label_152710;
        case 0x152714u: goto label_152714;
        case 0x152718u: goto label_152718;
        case 0x15271cu: goto label_15271c;
        case 0x152720u: goto label_152720;
        case 0x152724u: goto label_152724;
        case 0x152728u: goto label_152728;
        case 0x15272cu: goto label_15272c;
        case 0x152730u: goto label_152730;
        case 0x152734u: goto label_152734;
        case 0x152738u: goto label_152738;
        case 0x15273cu: goto label_15273c;
        case 0x152740u: goto label_152740;
        case 0x152744u: goto label_152744;
        case 0x152748u: goto label_152748;
        case 0x15274cu: goto label_15274c;
        case 0x152750u: goto label_152750;
        case 0x152754u: goto label_152754;
        case 0x152758u: goto label_152758;
        case 0x15275cu: goto label_15275c;
        case 0x152760u: goto label_152760;
        case 0x152764u: goto label_152764;
        case 0x152768u: goto label_152768;
        case 0x15276cu: goto label_15276c;
        case 0x152770u: goto label_152770;
        case 0x152774u: goto label_152774;
        case 0x152778u: goto label_152778;
        case 0x15277cu: goto label_15277c;
        case 0x152780u: goto label_152780;
        case 0x152784u: goto label_152784;
        case 0x152788u: goto label_152788;
        case 0x15278cu: goto label_15278c;
        case 0x152790u: goto label_152790;
        case 0x152794u: goto label_152794;
        case 0x152798u: goto label_152798;
        case 0x15279cu: goto label_15279c;
        case 0x1527a0u: goto label_1527a0;
        case 0x1527a4u: goto label_1527a4;
        case 0x1527a8u: goto label_1527a8;
        case 0x1527acu: goto label_1527ac;
        case 0x1527b0u: goto label_1527b0;
        case 0x1527b4u: goto label_1527b4;
        case 0x1527b8u: goto label_1527b8;
        case 0x1527bcu: goto label_1527bc;
        case 0x1527c0u: goto label_1527c0;
        case 0x1527c4u: goto label_1527c4;
        case 0x1527c8u: goto label_1527c8;
        case 0x1527ccu: goto label_1527cc;
        case 0x1527d0u: goto label_1527d0;
        case 0x1527d4u: goto label_1527d4;
        case 0x1527d8u: goto label_1527d8;
        case 0x1527dcu: goto label_1527dc;
        case 0x1527e0u: goto label_1527e0;
        case 0x1527e4u: goto label_1527e4;
        case 0x1527e8u: goto label_1527e8;
        case 0x1527ecu: goto label_1527ec;
        case 0x1527f0u: goto label_1527f0;
        case 0x1527f4u: goto label_1527f4;
        case 0x1527f8u: goto label_1527f8;
        case 0x1527fcu: goto label_1527fc;
        case 0x152800u: goto label_152800;
        case 0x152804u: goto label_152804;
        case 0x152808u: goto label_152808;
        case 0x15280cu: goto label_15280c;
        case 0x152810u: goto label_152810;
        case 0x152814u: goto label_152814;
        case 0x152818u: goto label_152818;
        case 0x15281cu: goto label_15281c;
        case 0x152820u: goto label_152820;
        case 0x152824u: goto label_152824;
        case 0x152828u: goto label_152828;
        case 0x15282cu: goto label_15282c;
        case 0x152830u: goto label_152830;
        case 0x152834u: goto label_152834;
        case 0x152838u: goto label_152838;
        case 0x15283cu: goto label_15283c;
        case 0x152840u: goto label_152840;
        case 0x152844u: goto label_152844;
        case 0x152848u: goto label_152848;
        case 0x15284cu: goto label_15284c;
        case 0x152850u: goto label_152850;
        case 0x152854u: goto label_152854;
        case 0x152858u: goto label_152858;
        case 0x15285cu: goto label_15285c;
        case 0x152860u: goto label_152860;
        case 0x152864u: goto label_152864;
        case 0x152868u: goto label_152868;
        case 0x15286cu: goto label_15286c;
        case 0x152870u: goto label_152870;
        case 0x152874u: goto label_152874;
        case 0x152878u: goto label_152878;
        case 0x15287cu: goto label_15287c;
        case 0x152880u: goto label_152880;
        case 0x152884u: goto label_152884;
        case 0x152888u: goto label_152888;
        case 0x15288cu: goto label_15288c;
        case 0x152890u: goto label_152890;
        case 0x152894u: goto label_152894;
        case 0x152898u: goto label_152898;
        case 0x15289cu: goto label_15289c;
        case 0x1528a0u: goto label_1528a0;
        case 0x1528a4u: goto label_1528a4;
        case 0x1528a8u: goto label_1528a8;
        case 0x1528acu: goto label_1528ac;
        case 0x1528b0u: goto label_1528b0;
        case 0x1528b4u: goto label_1528b4;
        case 0x1528b8u: goto label_1528b8;
        case 0x1528bcu: goto label_1528bc;
        case 0x1528c0u: goto label_1528c0;
        case 0x1528c4u: goto label_1528c4;
        case 0x1528c8u: goto label_1528c8;
        case 0x1528ccu: goto label_1528cc;
        case 0x1528d0u: goto label_1528d0;
        case 0x1528d4u: goto label_1528d4;
        case 0x1528d8u: goto label_1528d8;
        case 0x1528dcu: goto label_1528dc;
        case 0x1528e0u: goto label_1528e0;
        case 0x1528e4u: goto label_1528e4;
        case 0x1528e8u: goto label_1528e8;
        case 0x1528ecu: goto label_1528ec;
        case 0x1528f0u: goto label_1528f0;
        case 0x1528f4u: goto label_1528f4;
        case 0x1528f8u: goto label_1528f8;
        case 0x1528fcu: goto label_1528fc;
        case 0x152900u: goto label_152900;
        case 0x152904u: goto label_152904;
        case 0x152908u: goto label_152908;
        case 0x15290cu: goto label_15290c;
        case 0x152910u: goto label_152910;
        case 0x152914u: goto label_152914;
        case 0x152918u: goto label_152918;
        case 0x15291cu: goto label_15291c;
        case 0x152920u: goto label_152920;
        case 0x152924u: goto label_152924;
        default: break;
    }

    ctx->pc = 0x152698u;

label_152698:
    // 0x152698: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x152698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_15269c:
    // 0x15269c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1526a0:
    // 0x1526a0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1526a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1526a4:
    // 0x1526a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1526a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1526a8:
    // 0x1526a8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1526a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1526ac:
    // 0x1526ac: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1526acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1526b0:
    // 0x1526b0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1526b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1526b4:
    // 0x1526b4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1526b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1526b8:
    // 0x1526b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1526b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1526bc:
    // 0x1526bc: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x1526bcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1526c0:
    // 0x1526c0: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x1526c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1526c4:
    // 0x1526c4: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x1526c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1526c8:
    // 0x1526c8: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1526c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1526cc:
    // 0x1526cc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1526ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1526d0:
    // 0x1526d0: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x1526d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_1526d4:
    // 0x1526d4: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_1526d8:
    if (ctx->pc == 0x1526D8u) {
        ctx->pc = 0x1526D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526D4u;
        // 0x1526d8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1526DCu;
        goto label_1526dc;
    }
    ctx->pc = 0x1526D4u;
    {
        const bool branch_taken_0x1526d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526D4u;
        // 0x1526d8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526d4) {
            ctx->pc = 0x1528F4u;
            goto label_1528f4;
        }
    }
    ctx->pc = 0x1526DCu;
label_1526dc:
    // 0x1526dc: 0x8cb50004  lw          $s5, 0x4($a1)
    ctx->pc = 0x1526dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1526e0:
    // 0x1526e0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1526e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1526e4:
    // 0x1526e4: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_1526e8:
    if (ctx->pc == 0x1526E8u) {
        ctx->pc = 0x1526E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526E4u;
        // 0x1526e8: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1526ECu;
        goto label_1526ec;
    }
    ctx->pc = 0x1526E4u;
    {
        const bool branch_taken_0x1526e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526E4u;
        // 0x1526e8: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526e4) {
            ctx->pc = 0x1528F0u;
            goto label_1528f0;
        }
    }
    ctx->pc = 0x1526ECu;
label_1526ec:
    // 0x1526ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1526ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1526f0:
    // 0x1526f0: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1526f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1526f4:
    // 0x1526f4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1526f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1526f8:
    // 0x1526f8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1526f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1526fc:
    // 0x1526fc: 0x2612fff0  addiu       $s2, $s0, -0x10
    ctx->pc = 0x1526fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_152700:
    // 0x152700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x152700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_152704:
    // 0x152704: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x152704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_152708:
    // 0x152708: 0x40f809  jalr        $v0
label_15270c:
    if (ctx->pc == 0x15270Cu) {
        ctx->pc = 0x15270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152708u;
        // 0x15270c: 0x26910050  addiu       $s1, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152710u;
        goto label_152710;
    }
    ctx->pc = 0x152708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152710u);
        ctx->pc = 0x15270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152708u;
        // 0x15270c: 0x26910050  addiu       $s1, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152708u, 0x152710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152710u;
label_152710:
    // 0x152710: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x152710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_152714:
    // 0x152714: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x152714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_152718:
    // 0x152718: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x152718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_15271c:
    // 0x15271c: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x15271cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_152720:
    // 0x152720: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x152720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_152724:
    // 0x152724: 0x40f809  jalr        $v0
label_152728:
    if (ctx->pc == 0x152728u) {
        ctx->pc = 0x152728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152724u;
        // 0x152728: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15272Cu;
        goto label_15272c;
    }
    ctx->pc = 0x152724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15272Cu);
        ctx->pc = 0x152728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152724u;
        // 0x152728: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152724u, 0x15272Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15272Cu;
label_15272c:
    // 0x15272c: 0x2693004c  addiu       $s3, $s4, 0x4C
    ctx->pc = 0x15272cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
label_152730:
    // 0x152730: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x152730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_152734:
    // 0x152734: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x152734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_152738:
    // 0x152738: 0x40f809  jalr        $v0
label_15273c:
    if (ctx->pc == 0x15273Cu) {
        ctx->pc = 0x15273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152738u;
        // 0x15273c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152740u;
        goto label_152740;
    }
    ctx->pc = 0x152738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152740u);
        ctx->pc = 0x15273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152738u;
        // 0x15273c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152738u, 0x152740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152740u;
label_152740:
    // 0x152740: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x152740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_152744:
    // 0x152744: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x152744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_152748:
    // 0x152748: 0x40f809  jalr        $v0
label_15274c:
    if (ctx->pc == 0x15274Cu) {
        ctx->pc = 0x15274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152748u;
        // 0x15274c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152750u;
        goto label_152750;
    }
    ctx->pc = 0x152748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152750u);
        ctx->pc = 0x15274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152748u;
        // 0x15274c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152748u, 0x152750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152750u;
label_152750:
    // 0x152750: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x152750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_152754:
    // 0x152754: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x152754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_152758:
    // 0x152758: 0x40f809  jalr        $v0
label_15275c:
    if (ctx->pc == 0x15275Cu) {
        ctx->pc = 0x15275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152758u;
        // 0x15275c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152760u;
        goto label_152760;
    }
    ctx->pc = 0x152758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152760u);
        ctx->pc = 0x15275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152758u;
        // 0x15275c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152758u, 0x152760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152760u;
label_152760:
    // 0x152760: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x152760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_152764:
    // 0x152764: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x152764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_152768:
    // 0x152768: 0x40f809  jalr        $v0
label_15276c:
    if (ctx->pc == 0x15276Cu) {
        ctx->pc = 0x15276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152768u;
        // 0x15276c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152770u;
        goto label_152770;
    }
    ctx->pc = 0x152768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152770u);
        ctx->pc = 0x15276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152768u;
        // 0x15276c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152768u, 0x152770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152770u;
label_152770:
    // 0x152770: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x152770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_152774:
    // 0x152774: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x152774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_152778:
    // 0x152778: 0x40f809  jalr        $v0
label_15277c:
    if (ctx->pc == 0x15277Cu) {
        ctx->pc = 0x15277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152778u;
        // 0x15277c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152780u;
        goto label_152780;
    }
    ctx->pc = 0x152778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152780u);
        ctx->pc = 0x15277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152778u;
        // 0x15277c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152778u, 0x152780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152780u;
label_152780:
    // 0x152780: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x152780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_152784:
    // 0x152784: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x152784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_152788:
    // 0x152788: 0x40f809  jalr        $v0
label_15278c:
    if (ctx->pc == 0x15278Cu) {
        ctx->pc = 0x15278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152788u;
        // 0x15278c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152790u;
        goto label_152790;
    }
    ctx->pc = 0x152788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152790u);
        ctx->pc = 0x15278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152788u;
        // 0x15278c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152788u, 0x152790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152790u;
label_152790:
    // 0x152790: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x152790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_152794:
    // 0x152794: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x152794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_152798:
    // 0x152798: 0x40f809  jalr        $v0
label_15279c:
    if (ctx->pc == 0x15279Cu) {
        ctx->pc = 0x15279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152798u;
        // 0x15279c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1527A0u;
        goto label_1527a0;
    }
    ctx->pc = 0x152798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1527A0u);
        ctx->pc = 0x15279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152798u;
        // 0x15279c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152798u, 0x1527A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1527A0u;
label_1527a0:
    // 0x1527a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1527a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1527a4:
    // 0x1527a4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1527a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1527a8:
    // 0x1527a8: 0x40f809  jalr        $v0
label_1527ac:
    if (ctx->pc == 0x1527ACu) {
        ctx->pc = 0x1527ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527A8u;
        // 0x1527ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1527B0u;
        goto label_1527b0;
    }
    ctx->pc = 0x1527A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1527B0u);
        ctx->pc = 0x1527ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527A8u;
        // 0x1527ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1527A8u, 0x1527B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1527B0u;
label_1527b0:
    // 0x1527b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1527b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1527b4:
    // 0x1527b4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1527b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1527b8:
    // 0x1527b8: 0x40f809  jalr        $v0
label_1527bc:
    if (ctx->pc == 0x1527BCu) {
        ctx->pc = 0x1527BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527B8u;
        // 0x1527bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1527C0u;
        goto label_1527c0;
    }
    ctx->pc = 0x1527B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1527C0u);
        ctx->pc = 0x1527BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527B8u;
        // 0x1527bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1527B8u, 0x1527C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1527C0u;
label_1527c0:
    // 0x1527c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1527c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1527c4:
    // 0x1527c4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1527c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1527c8:
    // 0x1527c8: 0x40f809  jalr        $v0
label_1527cc:
    if (ctx->pc == 0x1527CCu) {
        ctx->pc = 0x1527CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527C8u;
        // 0x1527cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1527D0u;
        goto label_1527d0;
    }
    ctx->pc = 0x1527C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1527D0u);
        ctx->pc = 0x1527CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527C8u;
        // 0x1527cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1527C8u, 0x1527D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1527D0u;
label_1527d0:
    // 0x1527d0: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1527d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1527d4:
    // 0x1527d4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1527d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_1527d8:
    // 0x1527d8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1527d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1527dc:
    // 0x1527dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1527dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1527e0:
    // 0x1527e0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1527e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1527e4:
    // 0x1527e4: 0xc4750080  lwc1        $f21, 0x80($v1)
    ctx->pc = 0x1527e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1527e8:
    // 0x1527e8: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x1527e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_1527ec:
    // 0x1527ec: 0xc6940048  lwc1        $f20, 0x48($s4)
    ctx->pc = 0x1527ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1527f0:
    // 0x1527f0: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x1527f0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
label_1527f4:
    // 0x1527f4: 0x0  nop
    ctx->pc = 0x1527f4u;
    // NOP
label_1527f8:
    // 0x1527f8: 0x0  nop
    ctx->pc = 0x1527f8u;
    // NOP
label_1527fc:
    // 0x1527fc: 0x4615bd43  div.s       $f21, $f23, $f21
    ctx->pc = 0x1527fcu;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[23], ctx->f[21]);
label_152800:
    // 0x152800: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x152800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_152804:
    // 0x152804: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x152804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_152808:
    // 0x152808: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x152808u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_15280c:
    // 0x15280c: 0xc6500018  lwc1        $f16, 0x18($s2)
    ctx->pc = 0x15280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_152810:
    // 0x152810: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x152810u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_152814:
    // 0x152814: 0x4600b4c6  mov.s       $f19, $f22
    ctx->pc = 0x152814u;
    ctx->f[19] = FPU_MOV_S(ctx->f[22]);
label_152818:
    // 0x152818: 0xe7b70008  swc1        $f23, 0x8($sp)
    ctx->pc = 0x152818u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_15281c:
    // 0x15281c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15281cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152820:
    // 0x152820: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x152820u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_152824:
    // 0x152824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_152828:
    // 0x152828: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15282c:
    // 0x15282c: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x15282cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
label_152830:
    // 0x152830: 0xc06ce2a  jal         func_1B38A8
label_152834:
    if (ctx->pc == 0x152834u) {
        ctx->pc = 0x152834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152830u;
        // 0x152834: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x152838u;
        goto label_152838;
    }
    ctx->pc = 0x152830u;
    SET_GPR_U32(ctx, 31, 0x152838u);
    ctx->pc = 0x152834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152830u;
    // 0x152834: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x152830u, 0x152838u)) {
        return;
    }
    ctx->pc = 0x152838u;
label_152838:
    // 0x152838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15283c:
    // 0x15283c: 0xc06cff8  jal         func_1B3FE0
label_152840:
    if (ctx->pc == 0x152840u) {
        ctx->pc = 0x152840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15283Cu;
        // 0x152840: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152844u;
        goto label_152844;
    }
    ctx->pc = 0x15283Cu;
    SET_GPR_U32(ctx, 31, 0x152844u);
    ctx->pc = 0x152840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15283Cu;
    // 0x152840: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x15283Cu, 0x152844u)) {
        return;
    }
    ctx->pc = 0x152844u;
label_152844:
    // 0x152844: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x152844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
label_152848:
    // 0x152848: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x152848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15284c:
    // 0x15284c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x15284cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_152850:
    // 0x152850: 0xc6500018  lwc1        $f16, 0x18($s2)
    ctx->pc = 0x152850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_152854:
    // 0x152854: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x152854u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_152858:
    // 0x152858: 0x46146b41  sub.s       $f13, $f13, $f20
    ctx->pc = 0x152858u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
label_15285c:
    // 0x15285c: 0xe7b70008  swc1        $f23, 0x8($sp)
    ctx->pc = 0x15285cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_152860:
    // 0x152860: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x152860u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_152864:
    // 0x152864: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x152864u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
label_152868:
    // 0x152868: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x152868u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15286c:
    // 0x15286c: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x15286cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
label_152870:
    // 0x152870: 0x460064c6  mov.s       $f19, $f12
    ctx->pc = 0x152870u;
    ctx->f[19] = FPU_MOV_S(ctx->f[12]);
label_152874:
    // 0x152874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152878:
    // 0x152878: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15287c:
    // 0x15287c: 0xc06ce2a  jal         func_1B38A8
label_152880:
    if (ctx->pc == 0x152880u) {
        ctx->pc = 0x152880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15287Cu;
        // 0x152880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152884u;
        goto label_152884;
    }
    ctx->pc = 0x15287Cu;
    SET_GPR_U32(ctx, 31, 0x152884u);
    ctx->pc = 0x152880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15287Cu;
    // 0x152880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x15287Cu, 0x152884u)) {
        return;
    }
    ctx->pc = 0x152884u;
label_152884:
    // 0x152884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_152888:
    // 0x152888: 0xc06cff8  jal         func_1B3FE0
label_15288c:
    if (ctx->pc == 0x15288Cu) {
        ctx->pc = 0x15288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152888u;
        // 0x15288c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152890u;
        goto label_152890;
    }
    ctx->pc = 0x152888u;
    SET_GPR_U32(ctx, 31, 0x152890u);
    ctx->pc = 0x15288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152888u;
    // 0x15288c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x152888u, 0x152890u)) {
        return;
    }
    ctx->pc = 0x152890u;
label_152890:
    // 0x152890: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x152890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_152894:
    // 0x152894: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x152894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_152898:
    // 0x152898: 0x40f809  jalr        $v0
label_15289c:
    if (ctx->pc == 0x15289Cu) {
        ctx->pc = 0x15289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152898u;
        // 0x15289c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528A0u;
        goto label_1528a0;
    }
    ctx->pc = 0x152898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1528A0u);
        ctx->pc = 0x15289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152898u;
        // 0x15289c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152898u, 0x1528A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1528A0u;
label_1528a0:
    // 0x1528a0: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1528a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1528a4:
    // 0x1528a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1528a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1528a8:
    // 0x1528a8: 0x40f809  jalr        $v0
label_1528ac:
    if (ctx->pc == 0x1528ACu) {
        ctx->pc = 0x1528ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528A8u;
        // 0x1528ac: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528B0u;
        goto label_1528b0;
    }
    ctx->pc = 0x1528A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1528B0u);
        ctx->pc = 0x1528ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528A8u;
        // 0x1528ac: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1528A8u, 0x1528B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1528B0u;
label_1528b0:
    // 0x1528b0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1528b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1528b4:
    // 0x1528b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1528b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1528b8:
    // 0x1528b8: 0x40f809  jalr        $v0
label_1528bc:
    if (ctx->pc == 0x1528BCu) {
        ctx->pc = 0x1528BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528B8u;
        // 0x1528bc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528C0u;
        goto label_1528c0;
    }
    ctx->pc = 0x1528B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1528C0u);
        ctx->pc = 0x1528BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528B8u;
        // 0x1528bc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1528B8u, 0x1528C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1528C0u;
label_1528c0:
    // 0x1528c0: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x1528c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1528c4:
    // 0x1528c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1528c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1528c8:
    // 0x1528c8: 0x40f809  jalr        $v0
label_1528cc:
    if (ctx->pc == 0x1528CCu) {
        ctx->pc = 0x1528CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528C8u;
        // 0x1528cc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528D0u;
        goto label_1528d0;
    }
    ctx->pc = 0x1528C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1528D0u);
        ctx->pc = 0x1528CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528C8u;
        // 0x1528cc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1528C8u, 0x1528D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1528D0u;
label_1528d0:
    // 0x1528d0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1528d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1528d4:
    // 0x1528d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1528d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1528d8:
    // 0x1528d8: 0x40f809  jalr        $v0
label_1528dc:
    if (ctx->pc == 0x1528DCu) {
        ctx->pc = 0x1528DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528D8u;
        // 0x1528dc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528E0u;
        goto label_1528e0;
    }
    ctx->pc = 0x1528D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1528E0u);
        ctx->pc = 0x1528DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528D8u;
        // 0x1528dc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1528D8u, 0x1528E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1528E0u;
label_1528e0:
    // 0x1528e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1528e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1528e4:
    // 0x1528e4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1528e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1528e8:
    // 0x1528e8: 0x40f809  jalr        $v0
label_1528ec:
    if (ctx->pc == 0x1528ECu) {
        ctx->pc = 0x1528ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528E8u;
        // 0x1528ec: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528F0u;
        goto label_1528f0;
    }
    ctx->pc = 0x1528E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1528F0u);
        ctx->pc = 0x1528ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528E8u;
        // 0x1528ec: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1528E8u, 0x1528F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1528F0u;
label_1528f0:
    // 0x1528f0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1528f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1528f4:
    // 0x1528f4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1528f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1528f8:
    // 0x1528f8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1528f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1528fc:
    // 0x1528fc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1528fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_152900:
    // 0x152900: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x152900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_152904:
    // 0x152904: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x152904u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_152908:
    // 0x152908: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x152908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15290c:
    // 0x15290c: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x15290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_152910:
    // 0x152910: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x152910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_152914:
    // 0x152914: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x152914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_152918:
    // 0x152918: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x152918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_15291c:
    // 0x15291c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x15291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_152920:
    // 0x152920: 0x3e00008  jr          $ra
label_152924:
    if (ctx->pc == 0x152924u) {
        ctx->pc = 0x152924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152920u;
        // 0x152924: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152928u;
        goto label_fallthrough_0x152920;
    }
    ctx->pc = 0x152920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152920u;
        // 0x152924: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x152920:
    ctx->pc = 0x152928u;
}
