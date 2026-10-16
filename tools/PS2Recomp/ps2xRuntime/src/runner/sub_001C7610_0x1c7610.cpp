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

// Function: sub_001C7610
// Address: 0x1c7610 - 0x1c77c0
void sub_001C7610_0x1c7610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7610_0x1c7610");
#endif

    switch (ctx->pc) {
        case 0x1c7610u: goto label_1c7610;
        case 0x1c7614u: goto label_1c7614;
        case 0x1c7618u: goto label_1c7618;
        case 0x1c761cu: goto label_1c761c;
        case 0x1c7620u: goto label_1c7620;
        case 0x1c7624u: goto label_1c7624;
        case 0x1c7628u: goto label_1c7628;
        case 0x1c762cu: goto label_1c762c;
        case 0x1c7630u: goto label_1c7630;
        case 0x1c7634u: goto label_1c7634;
        case 0x1c7638u: goto label_1c7638;
        case 0x1c763cu: goto label_1c763c;
        case 0x1c7640u: goto label_1c7640;
        case 0x1c7644u: goto label_1c7644;
        case 0x1c7648u: goto label_1c7648;
        case 0x1c764cu: goto label_1c764c;
        case 0x1c7650u: goto label_1c7650;
        case 0x1c7654u: goto label_1c7654;
        case 0x1c7658u: goto label_1c7658;
        case 0x1c765cu: goto label_1c765c;
        case 0x1c7660u: goto label_1c7660;
        case 0x1c7664u: goto label_1c7664;
        case 0x1c7668u: goto label_1c7668;
        case 0x1c766cu: goto label_1c766c;
        case 0x1c7670u: goto label_1c7670;
        case 0x1c7674u: goto label_1c7674;
        case 0x1c7678u: goto label_1c7678;
        case 0x1c767cu: goto label_1c767c;
        case 0x1c7680u: goto label_1c7680;
        case 0x1c7684u: goto label_1c7684;
        case 0x1c7688u: goto label_1c7688;
        case 0x1c768cu: goto label_1c768c;
        case 0x1c7690u: goto label_1c7690;
        case 0x1c7694u: goto label_1c7694;
        case 0x1c7698u: goto label_1c7698;
        case 0x1c769cu: goto label_1c769c;
        case 0x1c76a0u: goto label_1c76a0;
        case 0x1c76a4u: goto label_1c76a4;
        case 0x1c76a8u: goto label_1c76a8;
        case 0x1c76acu: goto label_1c76ac;
        case 0x1c76b0u: goto label_1c76b0;
        case 0x1c76b4u: goto label_1c76b4;
        case 0x1c76b8u: goto label_1c76b8;
        case 0x1c76bcu: goto label_1c76bc;
        case 0x1c76c0u: goto label_1c76c0;
        case 0x1c76c4u: goto label_1c76c4;
        case 0x1c76c8u: goto label_1c76c8;
        case 0x1c76ccu: goto label_1c76cc;
        case 0x1c76d0u: goto label_1c76d0;
        case 0x1c76d4u: goto label_1c76d4;
        case 0x1c76d8u: goto label_1c76d8;
        case 0x1c76dcu: goto label_1c76dc;
        case 0x1c76e0u: goto label_1c76e0;
        case 0x1c76e4u: goto label_1c76e4;
        case 0x1c76e8u: goto label_1c76e8;
        case 0x1c76ecu: goto label_1c76ec;
        case 0x1c76f0u: goto label_1c76f0;
        case 0x1c76f4u: goto label_1c76f4;
        case 0x1c76f8u: goto label_1c76f8;
        case 0x1c76fcu: goto label_1c76fc;
        case 0x1c7700u: goto label_1c7700;
        case 0x1c7704u: goto label_1c7704;
        case 0x1c7708u: goto label_1c7708;
        case 0x1c770cu: goto label_1c770c;
        case 0x1c7710u: goto label_1c7710;
        case 0x1c7714u: goto label_1c7714;
        case 0x1c7718u: goto label_1c7718;
        case 0x1c771cu: goto label_1c771c;
        case 0x1c7720u: goto label_1c7720;
        case 0x1c7724u: goto label_1c7724;
        case 0x1c7728u: goto label_1c7728;
        case 0x1c772cu: goto label_1c772c;
        case 0x1c7730u: goto label_1c7730;
        case 0x1c7734u: goto label_1c7734;
        case 0x1c7738u: goto label_1c7738;
        case 0x1c773cu: goto label_1c773c;
        case 0x1c7740u: goto label_1c7740;
        case 0x1c7744u: goto label_1c7744;
        case 0x1c7748u: goto label_1c7748;
        case 0x1c774cu: goto label_1c774c;
        case 0x1c7750u: goto label_1c7750;
        case 0x1c7754u: goto label_1c7754;
        case 0x1c7758u: goto label_1c7758;
        case 0x1c775cu: goto label_1c775c;
        case 0x1c7760u: goto label_1c7760;
        case 0x1c7764u: goto label_1c7764;
        case 0x1c7768u: goto label_1c7768;
        case 0x1c776cu: goto label_1c776c;
        case 0x1c7770u: goto label_1c7770;
        case 0x1c7774u: goto label_1c7774;
        case 0x1c7778u: goto label_1c7778;
        case 0x1c777cu: goto label_1c777c;
        case 0x1c7780u: goto label_1c7780;
        case 0x1c7784u: goto label_1c7784;
        case 0x1c7788u: goto label_1c7788;
        case 0x1c778cu: goto label_1c778c;
        case 0x1c7790u: goto label_1c7790;
        case 0x1c7794u: goto label_1c7794;
        case 0x1c7798u: goto label_1c7798;
        case 0x1c779cu: goto label_1c779c;
        case 0x1c77a0u: goto label_1c77a0;
        case 0x1c77a4u: goto label_1c77a4;
        case 0x1c77a8u: goto label_1c77a8;
        case 0x1c77acu: goto label_1c77ac;
        case 0x1c77b0u: goto label_1c77b0;
        case 0x1c77b4u: goto label_1c77b4;
        case 0x1c77b8u: goto label_1c77b8;
        case 0x1c77bcu: goto label_1c77bc;
        default: break;
    }

    ctx->pc = 0x1c7610u;

label_1c7610:
    // 0x1c7610: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c7610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1c7614:
    // 0x1c7614: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c7614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1c7618:
    // 0x1c7618: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c7618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1c761c:
    // 0x1c761c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c761cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7620:
    // 0x1c7620: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c7620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1c7624:
    // 0x1c7624: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c7624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c7628:
    // 0x1c7628: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c7628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1c762c:
    // 0x1c762c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1c7630:
    // 0x1c7630: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c7630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1c7634:
    // 0x1c7634: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c7634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c7638:
    // 0x1c7638: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1c7638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1c763c:
    // 0x1c763c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1c763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1c7640:
    // 0x1c7640: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1c7640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1c7644:
    // 0x1c7644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c7648:
    // 0x1c7648: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x1c7648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_1c764c:
    // 0x1c764c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_1c7650:
    if (ctx->pc == 0x1C7650u) {
        ctx->pc = 0x1C7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C764Cu;
        // 0x1c7650: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7654u;
        goto label_1c7654;
    }
    ctx->pc = 0x1C764Cu;
    {
        const bool branch_taken_0x1c764c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C764Cu;
        // 0x1c7650: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c764c) {
            ctx->pc = 0x1C7788u;
            goto label_1c7788;
        }
    }
    ctx->pc = 0x1C7654u;
label_1c7654:
    // 0x1c7654: 0xc06ba6c  jal         func_1AE9B0
label_1c7658:
    if (ctx->pc == 0x1C7658u) {
        ctx->pc = 0x1C765Cu;
        goto label_1c765c;
    }
    ctx->pc = 0x1C7654u;
    SET_GPR_U32(ctx, 31, 0x1C765Cu);
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C7654u, 0x1C765Cu)) {
        return;
    }
    ctx->pc = 0x1C765Cu;
label_1c765c:
    // 0x1c765c: 0x56600046  bnel        $s3, $zero, . + 4 + (0x46 << 2)
label_1c7660:
    if (ctx->pc == 0x1C7660u) {
        ctx->pc = 0x1C7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C765Cu;
        // 0x1c7660: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7664u;
        goto label_1c7664;
    }
    ctx->pc = 0x1C765Cu;
    {
        const bool branch_taken_0x1c765c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c765c) {
            ctx->pc = 0x1C7660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C765Cu;
            // 0x1c7660: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7778u;
            goto label_1c7778;
        }
    }
    ctx->pc = 0x1C7664u;
label_1c7664:
    // 0x1c7664: 0x8e0202a4  lw          $v0, 0x2A4($s0)
    ctx->pc = 0x1c7664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
label_1c7668:
    // 0x1c7668: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
label_1c766c:
    if (ctx->pc == 0x1C766Cu) {
        ctx->pc = 0x1C766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7668u;
        // 0x1c766c: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7670u;
        goto label_1c7670;
    }
    ctx->pc = 0x1C7668u;
    {
        const bool branch_taken_0x1c7668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7668) {
            ctx->pc = 0x1C766Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7668u;
            // 0x1c766c: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7778u;
            goto label_1c7778;
        }
    }
    ctx->pc = 0x1C7670u;
label_1c7670:
    // 0x1c7670: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c7670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1c7674:
    // 0x1c7674: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7678:
    // 0x1c7678: 0x2452f430  addiu       $s2, $v0, -0xBD0
    ctx->pc = 0x1c7678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964272));
label_1c767c:
    // 0x1c767c: 0x27b70004  addiu       $s7, $sp, 0x4
    ctx->pc = 0x1c767cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1c7680:
    // 0x1c7680: 0x265e000c  addiu       $fp, $s2, 0xC
    ctx->pc = 0x1c7680u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1c7684:
    // 0x1c7684: 0x27b60008  addiu       $s6, $sp, 0x8
    ctx->pc = 0x1c7684u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1c7688:
    // 0x1c7688: 0x27b4000c  addiu       $s4, $sp, 0xC
    ctx->pc = 0x1c7688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1c768c:
    // 0x1c768c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1c768cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7690:
    // 0x1c7690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c7690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c7694:
    // 0x1c7694: 0x0  nop
    ctx->pc = 0x1c7694u;
    // NOP
label_1c7698:
    // 0x1c7698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c769c:
    // 0x1c769c: 0xc0c493d  jal         func_3124F4
label_1c76a0:
    if (ctx->pc == 0x1C76A0u) {
        ctx->pc = 0x1C76A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C769Cu;
        // 0x1c76a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76A4u;
        goto label_1c76a4;
    }
    ctx->pc = 0x1C769Cu;
    SET_GPR_U32(ctx, 31, 0x1C76A4u);
    ctx->pc = 0x1C76A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C769Cu;
    // 0x1c76a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C769Cu, 0x1C76A4u)) {
        return;
    }
    ctx->pc = 0x1C76A4u;
label_1c76a4:
    // 0x1c76a4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c76a8:
    // 0x1c76a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c76a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c76ac:
    // 0x1c76ac: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1c76acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c76b0:
    // 0x1c76b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c76b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c76b4:
    // 0x1c76b4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1c76b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c76b8:
    // 0x1c76b8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1c76b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c76bc:
    // 0x1c76bc: 0x5e4821  addu        $t1, $v0, $fp
    ctx->pc = 0x1c76bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1c76c0:
    // 0x1c76c0: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1c76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c76c4:
    // 0x1c76c4: 0x2424021  addu        $t0, $s2, $v0
    ctx->pc = 0x1c76c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1c76c8:
    // 0x1c76c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1c76c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c76cc:
    // 0x1c76cc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1c76ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c76d0:
    // 0x1c76d0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x1c76d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c76d4:
    // 0x1c76d4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1c76d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c76d8:
    // 0x1c76d8: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x1c76d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c76dc:
    // 0x1c76dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c76dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c76e0:
    // 0x1c76e0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c76e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c76e4:
    // 0x1c76e4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c76e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c76e8:
    // 0x1c76e8: 0xc06cda0  jal         func_1B3680
label_1c76ec:
    if (ctx->pc == 0x1C76ECu) {
        ctx->pc = 0x1C76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76E8u;
        // 0x1c76ec: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76F0u;
        goto label_1c76f0;
    }
    ctx->pc = 0x1C76E8u;
    SET_GPR_U32(ctx, 31, 0x1C76F0u);
    ctx->pc = 0x1C76ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76E8u;
    // 0x1c76ec: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1C76E8u, 0x1C76F0u)) {
        return;
    }
    ctx->pc = 0x1C76F0u;
label_1c76f0:
    // 0x1c76f0: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c76f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c76f4:
    // 0x1c76f4: 0xc06dc32  jal         func_1B70C8
label_1c76f8:
    if (ctx->pc == 0x1C76F8u) {
        ctx->pc = 0x1C76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76F4u;
        // 0x1c76f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76FCu;
        goto label_1c76fc;
    }
    ctx->pc = 0x1C76F4u;
    SET_GPR_U32(ctx, 31, 0x1C76FCu);
    ctx->pc = 0x1C76F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76F4u;
    // 0x1c76f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B70C8u, 0x1C76F4u, 0x1C76FCu)) {
        return;
    }
    ctx->pc = 0x1C76FCu;
label_1c76fc:
    // 0x1c76fc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1c7700:
    if (ctx->pc == 0x1C7700u) {
        ctx->pc = 0x1C7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76FCu;
        // 0x1c7700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7704u;
        goto label_1c7704;
    }
    ctx->pc = 0x1C76FCu;
    {
        const bool branch_taken_0x1c76fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76FCu;
        // 0x1c7700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76fc) {
            ctx->pc = 0x1C7764u;
            goto label_1c7764;
        }
    }
    ctx->pc = 0x1C7704u;
label_1c7704:
    // 0x1c7704: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7708:
    // 0x1c7708: 0xc071df0  jal         func_1C77C0
label_1c770c:
    if (ctx->pc == 0x1C770Cu) {
        ctx->pc = 0x1C770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7708u;
        // 0x1c770c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7710u;
        goto label_1c7710;
    }
    ctx->pc = 0x1C7708u;
    SET_GPR_U32(ctx, 31, 0x1C7710u);
    ctx->pc = 0x1C770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7708u;
    // 0x1c770c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C77C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C77C0u, 0x1C7708u, 0x1C7710u)) {
        return;
    }
    ctx->pc = 0x1C7710u;
label_1c7710:
    // 0x1c7710: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1c7710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c7714:
    // 0x1c7714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7718:
    // 0x1c7718: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c7718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c771c:
    // 0x1c771c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c771cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c7720:
    // 0x1c7720: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c7720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c7724:
    // 0x1c7724: 0x60f809  jalr        $v1
label_1c7728:
    if (ctx->pc == 0x1C7728u) {
        ctx->pc = 0x1C7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7724u;
        // 0x1c7728: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C772Cu;
        goto label_1c772c;
    }
    ctx->pc = 0x1C7724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C772Cu);
        ctx->pc = 0x1C7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7724u;
        // 0x1c7728: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7724u, 0x1C772Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C772Cu;
label_1c772c:
    // 0x1c772c: 0xc071efc  jal         func_1C7BF0
label_1c7730:
    if (ctx->pc == 0x1C7730u) {
        ctx->pc = 0x1C7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C772Cu;
        // 0x1c7730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7734u;
        goto label_1c7734;
    }
    ctx->pc = 0x1C772Cu;
    SET_GPR_U32(ctx, 31, 0x1C7734u);
    ctx->pc = 0x1C7730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C772Cu;
    // 0x1c7730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C7BF0u, 0x1C772Cu, 0x1C7734u)) {
        return;
    }
    ctx->pc = 0x1C7734u;
label_1c7734:
    // 0x1c7734: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1c7738:
    if (ctx->pc == 0x1C7738u) {
        ctx->pc = 0x1C7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7734u;
        // 0x1c7738: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C773Cu;
        goto label_1c773c;
    }
    ctx->pc = 0x1C7734u;
    {
        const bool branch_taken_0x1c7734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7734u;
        // 0x1c7738: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7734) {
            ctx->pc = 0x1C7788u;
            goto label_1c7788;
        }
    }
    ctx->pc = 0x1C773Cu;
label_1c773c:
    // 0x1c773c: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1c773cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c7740:
    // 0x1c7740: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c7740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c7744:
    // 0x1c7744: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c7744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c7748:
    // 0x1c7748: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c774c:
    // 0x1c774c: 0x60f809  jalr        $v1
label_1c7750:
    if (ctx->pc == 0x1C7750u) {
        ctx->pc = 0x1C7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C774Cu;
        // 0x1c7750: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7754u;
        goto label_1c7754;
    }
    ctx->pc = 0x1C774Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C7754u);
        ctx->pc = 0x1C7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C774Cu;
        // 0x1c7750: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C774Cu, 0x1C7754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7754u;
label_1c7754:
    // 0x1c7754: 0xae15029c  sw          $s5, 0x29C($s0)
    ctx->pc = 0x1c7754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 21));
label_1c7758:
    // 0x1c7758: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1c7758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
label_1c775c:
    // 0x1c775c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c7760:
    if (ctx->pc == 0x1C7760u) {
        ctx->pc = 0x1C7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C775Cu;
        // 0x1c7760: 0xae150298  sw          $s5, 0x298($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7764u;
        goto label_1c7764;
    }
    ctx->pc = 0x1C775Cu;
    {
        const bool branch_taken_0x1c775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C775Cu;
        // 0x1c7760: 0xae150298  sw          $s5, 0x298($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c775c) {
            ctx->pc = 0x1C7788u;
            goto label_1c7788;
        }
    }
    ctx->pc = 0x1C7764u;
label_1c7764:
    // 0x1c7764: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c7764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c7768:
    // 0x1c7768: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1c7768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c776c:
    // 0x1c776c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_1c7770:
    if (ctx->pc == 0x1C7770u) {
        ctx->pc = 0x1C7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C776Cu;
        // 0x1c7770: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7774u;
        goto label_1c7774;
    }
    ctx->pc = 0x1C776Cu;
    {
        const bool branch_taken_0x1c776c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C776Cu;
        // 0x1c7770: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c776c) {
            ctx->pc = 0x1C7698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7698;
        }
    }
    ctx->pc = 0x1C7774u;
label_1c7774:
    // 0x1c7774: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c7774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c7778:
    // 0x1c7778: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c777c:
    if (ctx->pc == 0x1C777Cu) {
        ctx->pc = 0x1C777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7778u;
        // 0x1c777c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7780u;
        goto label_1c7780;
    }
    ctx->pc = 0x1C7778u;
    {
        const bool branch_taken_0x1c7778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7778u;
        // 0x1c777c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7778) {
            ctx->pc = 0x1C7788u;
            goto label_1c7788;
        }
    }
    ctx->pc = 0x1C7780u;
label_1c7780:
    // 0x1c7780: 0xc06dbc8  jal         func_1B6F20
label_1c7784:
    if (ctx->pc == 0x1C7784u) {
        ctx->pc = 0x1C7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7780u;
        // 0x1c7784: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7788u;
        goto label_1c7788;
    }
    ctx->pc = 0x1C7780u;
    SET_GPR_U32(ctx, 31, 0x1C7788u);
    ctx->pc = 0x1C7784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7780u;
    // 0x1c7784: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6F20u, 0x1C7780u, 0x1C7788u)) {
        return;
    }
    ctx->pc = 0x1C7788u;
label_1c7788:
    // 0x1c7788: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c7788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c778c:
    // 0x1c778c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c778cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c7790:
    // 0x1c7790: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c7790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c7794:
    // 0x1c7794: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c7794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c7798:
    // 0x1c7798: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c7798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c779c:
    // 0x1c779c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c779cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c77a0:
    // 0x1c77a0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1c77a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c77a4:
    // 0x1c77a4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1c77a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c77a8:
    // 0x1c77a8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1c77a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c77ac:
    // 0x1c77ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c77acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c77b0:
    // 0x1c77b0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c77b4:
    // 0x1c77b4: 0x3e00008  jr          $ra
label_1c77b8:
    if (ctx->pc == 0x1C77B8u) {
        ctx->pc = 0x1C77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77B4u;
        // 0x1c77b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C77BCu;
        goto label_1c77bc;
    }
    ctx->pc = 0x1C77B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77B4u;
        // 0x1c77b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77BCu;
label_1c77bc:
    // 0x1c77bc: 0x0  nop
    ctx->pc = 0x1c77bcu;
    // NOP
    ctx->pc = 0x1c77c0u;
}
