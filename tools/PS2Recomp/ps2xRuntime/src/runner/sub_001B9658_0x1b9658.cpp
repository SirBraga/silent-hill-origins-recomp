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

// Function: sub_001B9658
// Address: 0x1b9658 - 0x1b97a8
void sub_001B9658_0x1b9658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9658_0x1b9658");
#endif

    switch (ctx->pc) {
        case 0x1b9658u: goto label_1b9658;
        case 0x1b965cu: goto label_1b965c;
        case 0x1b9660u: goto label_1b9660;
        case 0x1b9664u: goto label_1b9664;
        case 0x1b9668u: goto label_1b9668;
        case 0x1b966cu: goto label_1b966c;
        case 0x1b9670u: goto label_1b9670;
        case 0x1b9674u: goto label_1b9674;
        case 0x1b9678u: goto label_1b9678;
        case 0x1b967cu: goto label_1b967c;
        case 0x1b9680u: goto label_1b9680;
        case 0x1b9684u: goto label_1b9684;
        case 0x1b9688u: goto label_1b9688;
        case 0x1b968cu: goto label_1b968c;
        case 0x1b9690u: goto label_1b9690;
        case 0x1b9694u: goto label_1b9694;
        case 0x1b9698u: goto label_1b9698;
        case 0x1b969cu: goto label_1b969c;
        case 0x1b96a0u: goto label_1b96a0;
        case 0x1b96a4u: goto label_1b96a4;
        case 0x1b96a8u: goto label_1b96a8;
        case 0x1b96acu: goto label_1b96ac;
        case 0x1b96b0u: goto label_1b96b0;
        case 0x1b96b4u: goto label_1b96b4;
        case 0x1b96b8u: goto label_1b96b8;
        case 0x1b96bcu: goto label_1b96bc;
        case 0x1b96c0u: goto label_1b96c0;
        case 0x1b96c4u: goto label_1b96c4;
        case 0x1b96c8u: goto label_1b96c8;
        case 0x1b96ccu: goto label_1b96cc;
        case 0x1b96d0u: goto label_1b96d0;
        case 0x1b96d4u: goto label_1b96d4;
        case 0x1b96d8u: goto label_1b96d8;
        case 0x1b96dcu: goto label_1b96dc;
        case 0x1b96e0u: goto label_1b96e0;
        case 0x1b96e4u: goto label_1b96e4;
        case 0x1b96e8u: goto label_1b96e8;
        case 0x1b96ecu: goto label_1b96ec;
        case 0x1b96f0u: goto label_1b96f0;
        case 0x1b96f4u: goto label_1b96f4;
        case 0x1b96f8u: goto label_1b96f8;
        case 0x1b96fcu: goto label_1b96fc;
        case 0x1b9700u: goto label_1b9700;
        case 0x1b9704u: goto label_1b9704;
        case 0x1b9708u: goto label_1b9708;
        case 0x1b970cu: goto label_1b970c;
        case 0x1b9710u: goto label_1b9710;
        case 0x1b9714u: goto label_1b9714;
        case 0x1b9718u: goto label_1b9718;
        case 0x1b971cu: goto label_1b971c;
        case 0x1b9720u: goto label_1b9720;
        case 0x1b9724u: goto label_1b9724;
        case 0x1b9728u: goto label_1b9728;
        case 0x1b972cu: goto label_1b972c;
        case 0x1b9730u: goto label_1b9730;
        case 0x1b9734u: goto label_1b9734;
        case 0x1b9738u: goto label_1b9738;
        case 0x1b973cu: goto label_1b973c;
        case 0x1b9740u: goto label_1b9740;
        case 0x1b9744u: goto label_1b9744;
        case 0x1b9748u: goto label_1b9748;
        case 0x1b974cu: goto label_1b974c;
        case 0x1b9750u: goto label_1b9750;
        case 0x1b9754u: goto label_1b9754;
        case 0x1b9758u: goto label_1b9758;
        case 0x1b975cu: goto label_1b975c;
        case 0x1b9760u: goto label_1b9760;
        case 0x1b9764u: goto label_1b9764;
        case 0x1b9768u: goto label_1b9768;
        case 0x1b976cu: goto label_1b976c;
        case 0x1b9770u: goto label_1b9770;
        case 0x1b9774u: goto label_1b9774;
        case 0x1b9778u: goto label_1b9778;
        case 0x1b977cu: goto label_1b977c;
        case 0x1b9780u: goto label_1b9780;
        case 0x1b9784u: goto label_1b9784;
        case 0x1b9788u: goto label_1b9788;
        case 0x1b978cu: goto label_1b978c;
        case 0x1b9790u: goto label_1b9790;
        case 0x1b9794u: goto label_1b9794;
        case 0x1b9798u: goto label_1b9798;
        case 0x1b979cu: goto label_1b979c;
        case 0x1b97a0u: goto label_1b97a0;
        case 0x1b97a4u: goto label_1b97a4;
        default: break;
    }

    ctx->pc = 0x1b9658u;

label_1b9658:
    // 0x1b9658: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b9658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b965c:
    // 0x1b965c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1b9660:
    // 0x1b9660: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b9660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1b9664:
    // 0x1b9664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9668:
    // 0x1b9668: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b9668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1b966c:
    // 0x1b966c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1b9670:
    // 0x1b9670: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b9674:
    // 0x1b9674: 0xc06bc10  jal         func_1AF040
label_1b9678:
    if (ctx->pc == 0x1B9678u) {
        ctx->pc = 0x1B9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9674u;
        // 0x1b9678: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B967Cu;
        goto label_1b967c;
    }
    ctx->pc = 0x1B9674u;
    SET_GPR_U32(ctx, 31, 0x1B967Cu);
    ctx->pc = 0x1B9678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9674u;
    // 0x1b9678: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1B9674u, 0x1B967Cu)) {
        return;
    }
    ctx->pc = 0x1B967Cu;
label_1b967c:
    // 0x1b967c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b9680:
    // 0x1b9680: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_1b9684:
    if (ctx->pc == 0x1B9684u) {
        ctx->pc = 0x1B9684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9680u;
        // 0x1b9684: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9688u;
        goto label_1b9688;
    }
    ctx->pc = 0x1B9680u;
    {
        const bool branch_taken_0x1b9680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9680u;
        // 0x1b9684: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9680) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9688u;
label_1b9688:
    // 0x1b9688: 0x8e050268  lw          $a1, 0x268($s0)
    ctx->pc = 0x1b9688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1b968c:
    // 0x1b968c: 0x24530fd8  addiu       $s3, $v0, 0xFD8
    ctx->pc = 0x1b968cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_1b9690:
    // 0x1b9690: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b9690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9694:
    // 0x1b9694: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1b9694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1b9698:
    // 0x1b9698: 0x40f809  jalr        $v0
label_1b969c:
    if (ctx->pc == 0x1B969Cu) {
        ctx->pc = 0x1B969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9698u;
        // 0x1b969c: 0x26110150  addiu       $s1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B96A0u;
        goto label_1b96a0;
    }
    ctx->pc = 0x1B9698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B96A0u);
        ctx->pc = 0x1B969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9698u;
        // 0x1b969c: 0x26110150  addiu       $s1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9698u, 0x1B96A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B96A0u;
label_1b96a0:
    // 0x1b96a0: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x1b96a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b96a4:
    // 0x1b96a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b96a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b96a8:
    // 0x1b96a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b96a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b96ac:
    // 0x1b96ac: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1b96acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_1b96b0:
    // 0x1b96b0: 0x26050250  addiu       $a1, $s0, 0x250
    ctx->pc = 0x1b96b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1b96b4:
    // 0x1b96b4: 0xc6020274  lwc1        $f2, 0x274($s0)
    ctx->pc = 0x1b96b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b96b8:
    // 0x1b96b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b96b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b96bc:
    // 0x1b96bc: 0x46008c43  div.s       $f17, $f17, $f0
    ctx->pc = 0x1b96bcu;
    ctx->f[17] = FPU_DIV_S(ctx, ctx->f[17], ctx->f[0]);
label_1b96c0:
    // 0x1b96c0: 0xc6010278  lwc1        $f1, 0x278($s0)
    ctx->pc = 0x1b96c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b96c4:
    // 0x1b96c4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1b96c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b96c8:
    // 0x1b96c8: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x1b96c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b96cc:
    // 0x1b96cc: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x1b96ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1b96d0:
    // 0x1b96d0: 0xc60f000c  lwc1        $f15, 0xC($s0)
    ctx->pc = 0x1b96d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1b96d4:
    // 0x1b96d4: 0xc6700008  lwc1        $f16, 0x8($s3)
    ctx->pc = 0x1b96d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1b96d8:
    // 0x1b96d8: 0xc612026c  lwc1        $f18, 0x26C($s0)
    ctx->pc = 0x1b96d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_1b96dc:
    // 0x1b96dc: 0xc6130270  lwc1        $f19, 0x270($s0)
    ctx->pc = 0x1b96dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_1b96e0:
    // 0x1b96e0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b96e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b96e4:
    // 0x1b96e4: 0xc06ce2a  jal         func_1B38A8
label_1b96e8:
    if (ctx->pc == 0x1B96E8u) {
        ctx->pc = 0x1B96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96E4u;
        // 0x1b96e8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B96ECu;
        goto label_1b96ec;
    }
    ctx->pc = 0x1B96E4u;
    SET_GPR_U32(ctx, 31, 0x1B96ECu);
    ctx->pc = 0x1B96E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B96E4u;
    // 0x1b96e8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B96E4u, 0x1B96ECu)) {
        return;
    }
    ctx->pc = 0x1B96ECu;
label_1b96ec:
    // 0x1b96ec: 0xc60c027c  lwc1        $f12, 0x27C($s0)
    ctx->pc = 0x1b96ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b96f0:
    // 0x1b96f0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b96f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b96f4:
    // 0x1b96f4: 0x0  nop
    ctx->pc = 0x1b96f4u;
    // NOP
label_1b96f8:
    // 0x1b96f8: 0x460d6032  c.eq.s      $f12, $f13
    ctx->pc = 0x1b96f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b96fc:
    // 0x1b96fc: 0x0  nop
    ctx->pc = 0x1b96fcu;
    // NOP
label_1b9700:
    // 0x1b9700: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_1b9704:
    if (ctx->pc == 0x1B9704u) {
        ctx->pc = 0x1B9704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9700u;
        // 0x1b9704: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9708u;
        goto label_1b9708;
    }
    ctx->pc = 0x1B9700u;
    {
        const bool branch_taken_0x1b9700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9700) {
            ctx->pc = 0x1B9704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9700u;
            // 0x1b9704: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B971Cu;
            goto label_1b971c;
        }
    }
    ctx->pc = 0x1B9708u;
label_1b9708:
    // 0x1b9708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b970c:
    // 0x1b970c: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1b970cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_1b9710:
    // 0x1b9710: 0xc06cd24  jal         func_1B3490
label_1b9714:
    if (ctx->pc == 0x1B9714u) {
        ctx->pc = 0x1B9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9710u;
        // 0x1b9714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9718u;
        goto label_1b9718;
    }
    ctx->pc = 0x1B9710u;
    SET_GPR_U32(ctx, 31, 0x1B9718u);
    ctx->pc = 0x1B9714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9710u;
    // 0x1b9714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3490u, 0x1B9710u, 0x1B9718u)) {
        return;
    }
    ctx->pc = 0x1B9718u;
label_1b9718:
    // 0x1b9718: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1b9718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1b971c:
    // 0x1b971c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b9720:
    if (ctx->pc == 0x1B9720u) {
        ctx->pc = 0x1B9720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B971Cu;
        // 0x1b9720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9724u;
        goto label_1b9724;
    }
    ctx->pc = 0x1B971Cu;
    {
        const bool branch_taken_0x1b971c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B971Cu;
        // 0x1b9720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b971c) {
            ctx->pc = 0x1B9730u;
            goto label_1b9730;
        }
    }
    ctx->pc = 0x1B9724u;
label_1b9724:
    // 0x1b9724: 0xc06cfb8  jal         func_1B3EE0
label_1b9728:
    if (ctx->pc == 0x1B9728u) {
        ctx->pc = 0x1B9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9724u;
        // 0x1b9728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B972Cu;
        goto label_1b972c;
    }
    ctx->pc = 0x1B9724u;
    SET_GPR_U32(ctx, 31, 0x1B972Cu);
    ctx->pc = 0x1B9728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9724u;
    // 0x1b9728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3EE0u, 0x1B9724u, 0x1B972Cu)) {
        return;
    }
    ctx->pc = 0x1B972Cu;
label_1b972c:
    // 0x1b972c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b9730:
    // 0x1b9730: 0xc06cff8  jal         func_1B3FE0
label_1b9734:
    if (ctx->pc == 0x1B9734u) {
        ctx->pc = 0x1B9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9730u;
        // 0x1b9734: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9738u;
        goto label_1b9738;
    }
    ctx->pc = 0x1B9730u;
    SET_GPR_U32(ctx, 31, 0x1B9738u);
    ctx->pc = 0x1B9734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9730u;
    // 0x1b9734: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B9730u, 0x1B9738u)) {
        return;
    }
    ctx->pc = 0x1B9738u;
label_1b9738:
    // 0x1b9738: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1b9738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1b973c:
    // 0x1b973c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1b9740:
    if (ctx->pc == 0x1B9740u) {
        ctx->pc = 0x1B9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B973Cu;
        // 0x1b9740: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9744u;
        goto label_1b9744;
    }
    ctx->pc = 0x1B973Cu;
    {
        const bool branch_taken_0x1b973c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B973Cu;
        // 0x1b9740: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b973c) {
            ctx->pc = 0x1B978Cu;
            goto label_1b978c;
        }
    }
    ctx->pc = 0x1B9744u;
label_1b9744:
    // 0x1b9744: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1b9744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1b9748:
    // 0x1b9748: 0x40f809  jalr        $v0
label_1b974c:
    if (ctx->pc == 0x1B974Cu) {
        ctx->pc = 0x1B974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9748u;
        // 0x1b974c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9750u;
        goto label_1b9750;
    }
    ctx->pc = 0x1B9748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9750u);
        ctx->pc = 0x1B974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9748u;
        // 0x1b974c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9748u, 0x1B9750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9750u;
label_1b9750:
    // 0x1b9750: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1b9750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1b9754:
    // 0x1b9754: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1b9754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b9758:
    // 0x1b9758: 0x40f809  jalr        $v0
label_1b975c:
    if (ctx->pc == 0x1B975Cu) {
        ctx->pc = 0x1B975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9758u;
        // 0x1b975c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9760u;
        goto label_1b9760;
    }
    ctx->pc = 0x1B9758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9760u);
        ctx->pc = 0x1B975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9758u;
        // 0x1b975c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9758u, 0x1B9760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9760u;
label_1b9760:
    // 0x1b9760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b9764:
    // 0x1b9764: 0xc06cff8  jal         func_1B3FE0
label_1b9768:
    if (ctx->pc == 0x1B9768u) {
        ctx->pc = 0x1B9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9764u;
        // 0x1b9768: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B976Cu;
        goto label_1b976c;
    }
    ctx->pc = 0x1B9764u;
    SET_GPR_U32(ctx, 31, 0x1B976Cu);
    ctx->pc = 0x1B9768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9764u;
    // 0x1b9768: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B9764u, 0x1B976Cu)) {
        return;
    }
    ctx->pc = 0x1B976Cu;
label_1b976c:
    // 0x1b976c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1b976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1b9770:
    // 0x1b9770: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b9770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b9774:
    // 0x1b9774: 0x40f809  jalr        $v0
label_1b9778:
    if (ctx->pc == 0x1B9778u) {
        ctx->pc = 0x1B9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9774u;
        // 0x1b9778: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B977Cu;
        goto label_1b977c;
    }
    ctx->pc = 0x1B9774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B977Cu);
        ctx->pc = 0x1B9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9774u;
        // 0x1b9778: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9774u, 0x1B977Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B977Cu;
label_1b977c:
    // 0x1b977c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1b977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1b9780:
    // 0x1b9780: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1b9780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b9784:
    // 0x1b9784: 0x40f809  jalr        $v0
label_1b9788:
    if (ctx->pc == 0x1B9788u) {
        ctx->pc = 0x1B9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9784u;
        // 0x1b9788: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B978Cu;
        goto label_1b978c;
    }
    ctx->pc = 0x1B9784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B978Cu);
        ctx->pc = 0x1B9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9784u;
        // 0x1b9788: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9784u, 0x1B978Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B978Cu;
label_1b978c:
    // 0x1b978c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b978cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b9790:
    // 0x1b9790: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b9790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b9794:
    // 0x1b9794: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b9794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b9798:
    // 0x1b9798: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b9798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b979c:
    // 0x1b979c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b979cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b97a0:
    // 0x1b97a0: 0x3e00008  jr          $ra
label_1b97a4:
    if (ctx->pc == 0x1B97A4u) {
        ctx->pc = 0x1B97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97A0u;
        // 0x1b97a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B97A8u;
        goto label_fallthrough_0x1b97a0;
    }
    ctx->pc = 0x1B97A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97A0u;
        // 0x1b97a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B97A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b97a0:
    ctx->pc = 0x1B97A8u;
}
