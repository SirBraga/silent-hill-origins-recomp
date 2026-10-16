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

// Function: sub_002AE720
// Address: 0x2ae720 - 0x2aeea8
void sub_002AE720_0x2ae720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE720_0x2ae720");
#endif

    switch (ctx->pc) {
        case 0x2ae778u: goto label_2ae778;
        case 0x2ae790u: goto label_2ae790;
        case 0x2ae7a0u: goto label_2ae7a0;
        case 0x2ae7c0u: goto label_2ae7c0;
        case 0x2ae7ccu: goto label_2ae7cc;
        case 0x2ae880u: goto label_2ae880;
        case 0x2ae8c8u: goto label_2ae8c8;
        case 0x2ae90cu: goto label_2ae90c;
        case 0x2ae93cu: goto label_2ae93c;
        case 0x2ae96cu: goto label_2ae96c;
        case 0x2aea60u: goto label_2aea60;
        case 0x2aea9cu: goto label_2aea9c;
        case 0x2aeadcu: goto label_2aeadc;
        case 0x2aeb30u: goto label_2aeb30;
        case 0x2aeb74u: goto label_2aeb74;
        case 0x2aeba4u: goto label_2aeba4;
        case 0x2aec08u: goto label_2aec08;
        case 0x2aec4cu: goto label_2aec4c;
        case 0x2aecccu: goto label_2aeccc;
        case 0x2aecf0u: goto label_2aecf0;
        case 0x2aed48u: goto label_2aed48;
        case 0x2aedf0u: goto label_2aedf0;
        default: break;
    }

    ctx->pc = 0x2ae720u;

    // 0x2ae720: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ae720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ae724: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2ae724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2ae728: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2ae728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2ae72c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ae72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae730: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2ae730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2ae734: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x2ae734u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x2ae738: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ae738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ae73c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ae73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae740: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2ae740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2ae744: 0x26530418  addiu       $s3, $s2, 0x418
    ctx->pc = 0x2ae744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1048));
    // 0x2ae748: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2ae748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2ae74c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2ae74cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae750: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2ae750u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ae754: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ae754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae758: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2ae758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2ae75c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2ae75cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2ae760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae764: 0x3631fff0  ori         $s1, $s1, 0xFFF0
    ctx->pc = 0x2ae764u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65520);
    // 0x2ae768: 0x24160014  addiu       $s6, $zero, 0x14
    ctx->pc = 0x2ae768u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ae76c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2ae76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ae770: 0xc0ab8b0  jal         func_2AE2C0
    ctx->pc = 0x2AE770u;
    SET_GPR_U32(ctx, 31, 0x2AE778u);
    ctx->pc = 0x2AE774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE770u;
    // 0x2ae774: 0xae42006c  sw          $v0, 0x6C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE2C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE2C0u, 0x2AE770u, 0x2AE778u)) {
        return;
    }
    ctx->pc = 0x2AE778u;
label_2ae778:
    // 0x2ae778: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ae778u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2ae77c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ae77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ae780: 0x34c60900  ori         $a2, $a2, 0x900
    ctx->pc = 0x2ae780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
    // 0x2ae784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae788: 0xc0ad2b4  jal         func_2B4AD0
    ctx->pc = 0x2AE788u;
    SET_GPR_U32(ctx, 31, 0x2AE790u);
    ctx->pc = 0x2AE78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE788u;
    // 0x2ae78c: 0xae420410  sw          $v0, 0x410($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1040), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x2AE788u, 0x2AE790u)) {
        return;
    }
    ctx->pc = 0x2AE790u;
label_2ae790:
    // 0x2ae790: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ae790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae794: 0xae420414  sw          $v0, 0x414($s2)
    ctx->pc = 0x2ae794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1044), GPR_U32(ctx, 2));
    // 0x2ae798: 0xc0ab92c  jal         func_2AE4B0
    ctx->pc = 0x2AE798u;
    SET_GPR_U32(ctx, 31, 0x2AE7A0u);
    ctx->pc = 0x2AE79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE798u;
    // 0x2ae79c: 0xae42040c  sw          $v0, 0x40C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE4B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE4B0u, 0x2AE798u, 0x2AE7A0u)) {
        return;
    }
    ctx->pc = 0x2AE7A0u;
label_2ae7a0:
    // 0x2ae7a0: 0x8e430410  lw          $v1, 0x410($s2)
    ctx->pc = 0x2ae7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1040)));
    // 0x2ae7a4: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ae7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2ae7a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ae7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ae7ac: 0x34c60900  ori         $a2, $a2, 0x900
    ctx->pc = 0x2ae7acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
    // 0x2ae7b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ae7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae7b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae7b8: 0xc0ad2b4  jal         func_2B4AD0
    ctx->pc = 0x2AE7B8u;
    SET_GPR_U32(ctx, 31, 0x2AE7C0u);
    ctx->pc = 0x2AE7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE7B8u;
    // 0x2ae7bc: 0xae42041c  sw          $v0, 0x41C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1052), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x2AE7B8u, 0x2AE7C0u)) {
        return;
    }
    ctx->pc = 0x2AE7C0u;
label_2ae7c0:
    // 0x2ae7c0: 0xae420420  sw          $v0, 0x420($s2)
    ctx->pc = 0x2ae7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1056), GPR_U32(ctx, 2));
    // 0x2ae7c4: 0xc0b03ac  jal         func_2C0EB0
    ctx->pc = 0x2AE7C4u;
    SET_GPR_U32(ctx, 31, 0x2AE7CCu);
    ctx->pc = 0x2AE7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE7C4u;
    // 0x2ae7c8: 0xae420418  sw          $v0, 0x418($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1048), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0EB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0EB0u, 0x2AE7C4u, 0x2AE7CCu)) {
        return;
    }
    ctx->pc = 0x2AE7CCu;
label_2ae7cc:
    // 0x2ae7cc: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x2ae7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2ae7d0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2ae7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ae7d4: 0xc7818104  lwc1        $f1, -0x7EFC($gp)
    ctx->pc = 0x2ae7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae7d8: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x2ae7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2ae7dc: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2ae7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2ae7e0: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x2ae7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2ae7e4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2ae7e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2ae7e8: 0xae450020  sw          $a1, 0x20($s2)
    ctx->pc = 0x2ae7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 5));
    // 0x2ae7ec: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x2ae7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x2ae7f0: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x2ae7f0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x2ae7f4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2ae7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ae7f8: 0x2647004c  addiu       $a3, $s2, 0x4C
    ctx->pc = 0x2ae7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x2ae7fc: 0xae460048  sw          $a2, 0x48($s2)
    ctx->pc = 0x2ae7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 6));
    // 0x2ae800: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ae800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae804: 0xae460044  sw          $a2, 0x44($s2)
    ctx->pc = 0x2ae804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 6));
    // 0x2ae808: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2ae808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2ae80c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae80cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae810: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x2ae810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x2ae814: 0xc7868108  lwc1        $f6, -0x7EF8($gp)
    ctx->pc = 0x2ae814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ae818: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ae818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae81c: 0xc785810c  lwc1        $f5, -0x7EF4($gp)
    ctx->pc = 0x2ae81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ae820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae824: 0xc7828110  lwc1        $f2, -0x7EF0($gp)
    ctx->pc = 0x2ae824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ae828: 0xc7838114  lwc1        $f3, -0x7EEC($gp)
    ctx->pc = 0x2ae828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ae82c: 0xc7848118  lwc1        $f4, -0x7EE8($gp)
    ctx->pc = 0x2ae82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ae830: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x2ae830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2ae834: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2ae834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2ae838: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2ae838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2ae83c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ae83cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ae840: 0xae500070  sw          $s0, 0x70($s2)
    ctx->pc = 0x2ae840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 16));
    // 0x2ae844: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x2ae844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x2ae848: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x2ae848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2ae84c: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x2ae84cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2ae850: 0xe6420010  swc1        $f2, 0x10($s2)
    ctx->pc = 0x2ae850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2ae854: 0xe6430018  swc1        $f3, 0x18($s2)
    ctx->pc = 0x2ae854u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2ae858: 0xe6460024  swc1        $f6, 0x24($s2)
    ctx->pc = 0x2ae858u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x2ae85c: 0xe6440028  swc1        $f4, 0x28($s2)
    ctx->pc = 0x2ae85cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x2ae860: 0xe6450060  swc1        $f5, 0x60($s2)
    ctx->pc = 0x2ae860u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x2ae864: 0xae480068  sw          $t0, 0x68($s2)
    ctx->pc = 0x2ae864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 8));
    // 0x2ae868: 0xe646001c  swc1        $f6, 0x1C($s2)
    ctx->pc = 0x2ae868u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2ae86c: 0xe645005c  swc1        $f5, 0x5C($s2)
    ctx->pc = 0x2ae86cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x2ae870: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x2ae870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x2ae874: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x2ae874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x2ae878: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AE878u;
    SET_GPR_U32(ctx, 31, 0x2AE880u);
    ctx->pc = 0x2AE87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE878u;
    // 0x2ae87c: 0xe6540014  swc1        $f20, 0x14($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AE878u, 0x2AE880u)) {
        return;
    }
    ctx->pc = 0x2AE880u;
label_2ae880:
    // 0x2ae880: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2ae880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2ae884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae888: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x2ae888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x2ae88c: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x2ae88cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
    // 0x2ae890: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2ae890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ae894: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ae894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ae898: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x2ae898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2ae89c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ae89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae8a0: 0xd60018  mult        $zero, $a2, $s6
    ctx->pc = 0x2ae8a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ae8a4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae8a8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2ae8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2ae8ac: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae8b0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2ae8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2ae8b4: 0x3012  mflo        $a2
    ctx->pc = 0x2ae8b4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2ae8b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8bc: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2ae8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2ae8c0: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AE8C0u;
    SET_GPR_U32(ctx, 31, 0x2AE8C8u);
    ctx->pc = 0x2AE8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8C0u;
    // 0x2ae8c4: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AE8C0u, 0x2AE8C8u)) {
        return;
    }
    ctx->pc = 0x2AE8C8u;
label_2ae8c8:
    // 0x2ae8c8: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x2ae8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2ae8cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8d0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2ae8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ae8d4: 0x762018  mult        $a0, $v1, $s6
    ctx->pc = 0x2ae8d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ae8d8: 0xae430088  sw          $v1, 0x88($s2)
    ctx->pc = 0x2ae8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
    // 0x2ae8dc: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x2ae8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
    // 0x2ae8e0: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x2ae8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2ae8e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ae8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ae8e8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae8ec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ae8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ae8f0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2ae8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2ae8f4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae8f8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2ae8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2ae8fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae900: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2ae900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2ae904: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AE904u;
    SET_GPR_U32(ctx, 31, 0x2AE90Cu);
    ctx->pc = 0x2AE908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE904u;
    // 0x2ae908: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AE904u, 0x2AE90Cu)) {
        return;
    }
    ctx->pc = 0x2AE90Cu;
label_2ae90c:
    // 0x2ae90c: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x2ae90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2ae910: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ae910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae914: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2ae914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ae918: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ae918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ae91c: 0xae4500bc  sw          $a1, 0xBC($s2)
    ctx->pc = 0x2ae91cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 5));
    // 0x2ae920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ae920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae924: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x2ae924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
    // 0x2ae928: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae92c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2ae92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2ae930: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x2ae930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2ae934: 0xc0b53c8  jal         func_2D4F20
    ctx->pc = 0x2AE934u;
    SET_GPR_U32(ctx, 31, 0x2AE93Cu);
    ctx->pc = 0x2AE938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE934u;
    // 0x2ae938: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4F20u, 0x2AE934u, 0x2AE93Cu)) {
        return;
    }
    ctx->pc = 0x2AE93Cu;
label_2ae93c:
    // 0x2ae93c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ae93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ae940: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2ae940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2ae944: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE944u;
    {
        const bool branch_taken_0x2ae944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE944u;
        // 0x2ae948: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae944) {
            ctx->pc = 0x2AE958u;
            goto label_2ae958;
        }
    }
    ctx->pc = 0x2AE94Cu;
    // 0x2ae94c: 0x8e42040c  lw          $v0, 0x40C($s2)
    ctx->pc = 0x2ae94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1036)));
    // 0x2ae950: 0x2653040c  addiu       $s3, $s2, 0x40C
    ctx->pc = 0x2ae950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x2ae954: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2ae954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2ae958:
    // 0x2ae958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ae958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae95c: 0x2645037c  addiu       $a1, $s2, 0x37C
    ctx->pc = 0x2ae95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 892));
    // 0x2ae960: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ae960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae964: 0xc0b126c  jal         func_2C49B0
    ctx->pc = 0x2AE964u;
    SET_GPR_U32(ctx, 31, 0x2AE96Cu);
    ctx->pc = 0x2AE968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE964u;
    // 0x2ae968: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C49B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C49B0u, 0x2AE964u, 0x2AE96Cu)) {
        return;
    }
    ctx->pc = 0x2AE96Cu;
label_2ae96c:
    // 0x2ae96c: 0x26530418  addiu       $s3, $s2, 0x418
    ctx->pc = 0x2ae96cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1048));
    // 0x2ae970: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2ae970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2ae974: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x2ae974u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae978: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2ae978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ae97c: 0xae4203e8  sw          $v0, 0x3E8($s2)
    ctx->pc = 0x2ae97cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1000), GPR_U32(ctx, 2));
    // 0x2ae980: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2ae980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2ae984: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2ae984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ae988: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2ae988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2ae98c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x2ae98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x2ae990: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x2ae990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2ae994: 0xae4303e0  sw          $v1, 0x3E0($s2)
    ctx->pc = 0x2ae994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 992), GPR_U32(ctx, 3));
    // 0x2ae998: 0x563018  mult        $a2, $v0, $s6
    ctx->pc = 0x2ae998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2ae99c: 0xae4003e4  sw          $zero, 0x3E4($s2)
    ctx->pc = 0x2ae99cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 996), GPR_U32(ctx, 0));
    // 0x2ae9a0: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x2ae9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ae9a4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae9a8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2ae9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2ae9ac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE9ACu;
    {
        const bool branch_taken_0x2ae9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9ACu;
        // 0x2ae9b0: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae9ac) {
            ctx->pc = 0x2AE9C8u;
            goto label_2ae9c8;
        }
    }
    ctx->pc = 0x2AE9B4u;
    // 0x2ae9b4: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x2ae9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x2ae9b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE9B8u;
    {
        const bool branch_taken_0x2ae9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9B8u;
        // 0x2ae9bc: 0x2653040c  addiu       $s3, $s2, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae9b8) {
            ctx->pc = 0x2AE9C8u;
            goto label_2ae9c8;
        }
    }
    ctx->pc = 0x2AE9C0u;
    // 0x2ae9c0: 0x8e42040c  lw          $v0, 0x40C($s2)
    ctx->pc = 0x2ae9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1036)));
    // 0x2ae9c4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2ae9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2ae9c8:
    // 0x2ae9c8: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2ae9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ae9cc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2ae9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2ae9d0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2ae9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2ae9d4: 0x3610fff0  ori         $s0, $s0, 0xFFF0
    ctx->pc = 0x2ae9d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65520);
    // 0x2ae9d8: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2ae9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2ae9dc: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x2ae9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ae9e0: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x2ae9e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x2ae9e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2ae9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ae9e8: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x2ae9e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ae9ec: 0x24c2003f  addiu       $v0, $a2, 0x3F
    ctx->pc = 0x2ae9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x2ae9f0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2ae9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2ae9f4: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x2ae9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2ae9f8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae9fc: 0xae4600d8  sw          $a2, 0xD8($s2)
    ctx->pc = 0x2ae9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 6));
    // 0x2aea00: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2aea00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2aea04: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2aea04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2aea08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2aea08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2aea0c: 0xae4700e0  sw          $a3, 0xE0($s2)
    ctx->pc = 0x2aea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 7));
    // 0x2aea10: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aea10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aea14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aea14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea18: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2aea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2aea1c: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x2aea1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2aea20: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aea24: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2aea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2aea28: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2aea28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2aea2c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2aea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aea30: 0xae4200dc  sw          $v0, 0xDC($s2)
    ctx->pc = 0x2aea30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
    // 0x2aea34: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2aea34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2aea38: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x2aea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x2aea3c: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x2aea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x2aea40: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2aea40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea44: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2aea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2aea48: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aea4c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2aea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2aea50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea54: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2aea54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2aea58: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AEA58u;
    SET_GPR_U32(ctx, 31, 0x2AEA60u);
    ctx->pc = 0x2AEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA58u;
    // 0x2aea5c: 0xae4200cc  sw          $v0, 0xCC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AEA58u, 0x2AEA60u)) {
        return;
    }
    ctx->pc = 0x2AEA60u;
label_2aea60:
    // 0x2aea60: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2aea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2aea64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aea64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea68: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2aea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2aea6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2aea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aea70: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x2aea70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2aea74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aea74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aea78: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aea7c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2aea7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2aea80: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2aea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2aea84: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aea88: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2aea88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2aea8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea90: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2aea90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2aea94: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AEA94u;
    SET_GPR_U32(ctx, 31, 0x2AEA9Cu);
    ctx->pc = 0x2AEA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA94u;
    // 0x2aea98: 0xae4200d0  sw          $v0, 0xD0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AEA94u, 0x2AEA9Cu)) {
        return;
    }
    ctx->pc = 0x2AEA9Cu;
label_2aea9c:
    // 0x2aea9c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x2aea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2aeaa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aeaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeaa4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2aeaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2aeaa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2aeaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aeaac: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x2aeaacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2aeab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aeab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aeab4: 0xd10018  mult        $zero, $a2, $s1
    ctx->pc = 0x2aeab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2aeab8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aeab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aeabc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2aeabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2aeac0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aeac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aeac4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2aeac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2aeac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aeac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeacc: 0x3012  mflo        $a2
    ctx->pc = 0x2aeaccu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2aead0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2aead0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2aead4: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AEAD4u;
    SET_GPR_U32(ctx, 31, 0x2AEADCu);
    ctx->pc = 0x2AEAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEAD4u;
    // 0x2aead8: 0xae4200d4  sw          $v0, 0xD4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AEAD4u, 0x2AEADCu)) {
        return;
    }
    ctx->pc = 0x2AEADCu;
label_2aeadc:
    // 0x2aeadc: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2aeadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2aeae0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2aeae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2aeae4: 0x718818  mult        $s1, $v1, $s1
    ctx->pc = 0x2aeae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2aeae8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2aeae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aeaec: 0xae4300c4  sw          $v1, 0xC4($s2)
    ctx->pc = 0x2aeaecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
    // 0x2aeaf0: 0x30a40004  andi        $a0, $a1, 0x4
    ctx->pc = 0x2aeaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2aeaf4: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x2aeaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x2aeaf8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2aeaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2aeafc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aeb00: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2aeb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2aeb04: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEB04u;
    {
        const bool branch_taken_0x2aeb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB04u;
        // 0x2aeb08: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb04) {
            ctx->pc = 0x2AEB20u;
            goto label_2aeb20;
        }
    }
    ctx->pc = 0x2AEB0Cu;
    // 0x2aeb0c: 0x30a2000a  andi        $v0, $a1, 0xA
    ctx->pc = 0x2aeb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)10);
    // 0x2aeb10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEB10u;
    {
        const bool branch_taken_0x2aeb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB10u;
        // 0x2aeb14: 0x2653040c  addiu       $s3, $s2, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb10) {
            ctx->pc = 0x2AEB20u;
            goto label_2aeb20;
        }
    }
    ctx->pc = 0x2AEB18u;
    // 0x2aeb18: 0x8e42040c  lw          $v0, 0x40C($s2)
    ctx->pc = 0x2aeb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1036)));
    // 0x2aeb1c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2aeb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2aeb20:
    // 0x2aeb20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2aeb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb24: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x2aeb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2aeb28: 0xc0ab87e  jal         func_2AE1F8
    ctx->pc = 0x2AEB28u;
    SET_GPR_U32(ctx, 31, 0x2AEB30u);
    ctx->pc = 0x2AEB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB28u;
    // 0x2aeb2c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE1F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE1F8u, 0x2AEB28u, 0x2AEB30u)) {
        return;
    }
    ctx->pc = 0x2AEB30u;
label_2aeb30:
    // 0x2aeb30: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2aeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aeb34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aeb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aeb38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEB38u;
    {
        const bool branch_taken_0x2aeb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB38u;
        // 0x2aeb3c: 0x2653040c  addiu       $s3, $s2, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb38) {
            ctx->pc = 0x2AEB4Cu;
            goto label_2aeb4c;
        }
    }
    ctx->pc = 0x2AEB40u;
    // 0x2aeb40: 0x8e42040c  lw          $v0, 0x40C($s2)
    ctx->pc = 0x2aeb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1036)));
    // 0x2aeb44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AEB44u;
    {
        const bool branch_taken_0x2aeb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB44u;
        // 0x2aeb48: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb44) {
            ctx->pc = 0x2AEB50u;
            goto label_2aeb50;
        }
    }
    ctx->pc = 0x2AEB4Cu;
label_2aeb4c:
    // 0x2aeb4c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2aeb4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aeb50:
    // 0x2aeb50: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x2aeb50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2aeb54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2aeb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb58: 0x8e87000c  lw          $a3, 0xC($s4)
    ctx->pc = 0x2aeb58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2aeb5c: 0x264500e4  addiu       $a1, $s2, 0xE4
    ctx->pc = 0x2aeb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 228));
    // 0x2aeb60: 0x8e880014  lw          $t0, 0x14($s4)
    ctx->pc = 0x2aeb60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2aeb64: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2aeb64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb68: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x2aeb68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x2aeb6c: 0xc0b122c  jal         func_2C48B0
    ctx->pc = 0x2AEB6Cu;
    SET_GPR_U32(ctx, 31, 0x2AEB74u);
    ctx->pc = 0x2AEB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB6Cu;
    // 0x2aeb70: 0x241000e0  addiu       $s0, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C48B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C48B0u, 0x2AEB6Cu, 0x2AEB74u)) {
        return;
    }
    ctx->pc = 0x2AEB74u;
label_2aeb74:
    // 0x2aeb74: 0x3631fff0  ori         $s1, $s1, 0xFFF0
    ctx->pc = 0x2aeb74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65520);
    // 0x2aeb78: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x2aeb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2aeb7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aeb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb80: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2aeb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2aeb84: 0xd00018  mult        $zero, $a2, $s0
    ctx->pc = 0x2aeb84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2aeb88: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aeb8c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2aeb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2aeb90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aeb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb94: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2aeb94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2aeb98: 0x3012  mflo        $a2
    ctx->pc = 0x2aeb98u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2aeb9c: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AEB9Cu;
    SET_GPR_U32(ctx, 31, 0x2AEBA4u);
    ctx->pc = 0x2AEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB9Cu;
    // 0x2aeba0: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AEB9Cu, 0x2AEBA4u)) {
        return;
    }
    ctx->pc = 0x2AEBA4u;
label_2aeba4:
    // 0x2aeba4: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x2aeba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2aeba8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2aeba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2aebac: 0x908018  mult        $s0, $a0, $s0
    ctx->pc = 0x2aebacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2aebb0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2aebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aebb4: 0xae440094  sw          $a0, 0x94($s2)
    ctx->pc = 0x2aebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 4));
    // 0x2aebb8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2aebb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2aebbc: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x2aebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    // 0x2aebc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2aebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2aebc4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aebc8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2aebc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2aebcc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEBCCu;
    {
        const bool branch_taken_0x2aebcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEBCCu;
        // 0x2aebd0: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aebcc) {
            ctx->pc = 0x2AEBE0u;
            goto label_2aebe0;
        }
    }
    ctx->pc = 0x2AEBD4u;
    // 0x2aebd4: 0x8e42040c  lw          $v0, 0x40C($s2)
    ctx->pc = 0x2aebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1036)));
    // 0x2aebd8: 0x2653040c  addiu       $s3, $s2, 0x40C
    ctx->pc = 0x2aebd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x2aebdc: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2aebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2aebe0:
    // 0x2aebe0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2aebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2aebe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aebe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aebe8: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x2aebe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2aebec: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aebf0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2aebf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2aebf4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2aebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2aebf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aebf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aebfc: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2aebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2aec00: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AEC00u;
    SET_GPR_U32(ctx, 31, 0x2AEC08u);
    ctx->pc = 0x2AEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC00u;
    // 0x2aec04: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AEC00u, 0x2AEC08u)) {
        return;
    }
    ctx->pc = 0x2AEC08u;
label_2aec08:
    // 0x2aec08: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x2aec08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2aec0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aec0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec10: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2aec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2aec14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aec14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aec18: 0xae4400a4  sw          $a0, 0xA4($s2)
    ctx->pc = 0x2aec18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 4));
    // 0x2aec1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aec20: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x2aec20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x2aec24: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aec28: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2aec28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2aec2c: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x2aec2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2aec30: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aec34: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2aec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2aec38: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2aec38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2aec3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aec3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec40: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2aec40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2aec44: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AEC44u;
    SET_GPR_U32(ctx, 31, 0x2AEC4Cu);
    ctx->pc = 0x2AEC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC44u;
    // 0x2aec48: 0xae4200a8  sw          $v0, 0xA8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AEC44u, 0x2AEC4Cu)) {
        return;
    }
    ctx->pc = 0x2AEC4Cu;
label_2aec4c:
    // 0x2aec4c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2aec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2aec50: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2aec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2aec54: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2aec54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2aec58: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2aec58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aec5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2aec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2aec60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2aec60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aec64: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aec68: 0x30c50010  andi        $a1, $a2, 0x10
    ctx->pc = 0x2aec68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x2aec6c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2aec6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2aec70: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x2aec70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
    // 0x2aec74: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x2aec74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    // 0x2aec78: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AEC78u;
    {
        const bool branch_taken_0x2aec78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC78u;
        // 0x2aec7c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec78) {
            ctx->pc = 0x2AEC98u;
            goto label_2aec98;
        }
    }
    ctx->pc = 0x2AEC80u;
    // 0x2aec80: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x2aec80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x2aec84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEC84u;
    {
        const bool branch_taken_0x2aec84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC84u;
        // 0x2aec88: 0x2653040c  addiu       $s3, $s2, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec84) {
            ctx->pc = 0x2AEC9Cu;
            goto label_2aec9c;
        }
    }
    ctx->pc = 0x2AEC8Cu;
    // 0x2aec8c: 0x8e42040c  lw          $v0, 0x40C($s2)
    ctx->pc = 0x2aec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1036)));
    // 0x2aec90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AEC90u;
    {
        const bool branch_taken_0x2aec90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC90u;
        // 0x2aec94: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec90) {
            ctx->pc = 0x2AEC9Cu;
            goto label_2aec9c;
        }
    }
    ctx->pc = 0x2AEC98u;
label_2aec98:
    // 0x2aec98: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2aec98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aec9c:
    // 0x2aec9c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2aec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2aeca0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2aeca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeca4: 0x8e880028  lw          $t0, 0x28($s4)
    ctx->pc = 0x2aeca4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x2aeca8: 0x264500fc  addiu       $a1, $s2, 0xFC
    ctx->pc = 0x2aeca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 252));
    // 0x2aecac: 0x8e8a0018  lw          $t2, 0x18($s4)
    ctx->pc = 0x2aecacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2aecb0: 0x26460168  addiu       $a2, $s2, 0x168
    ctx->pc = 0x2aecb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 360));
    // 0x2aecb4: 0x8e890014  lw          $t1, 0x14($s4)
    ctx->pc = 0x2aecb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2aecb8: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2aecb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2aecbc: 0x8e8b0010  lw          $t3, 0x10($s4)
    ctx->pc = 0x2aecbcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2aecc0: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x2aecc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2aecc4: 0xc0b0220  jal         func_2C0880
    ctx->pc = 0x2AECC4u;
    SET_GPR_U32(ctx, 31, 0x2AECCCu);
    ctx->pc = 0x2AECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECC4u;
    // 0x2aecc8: 0x26470400  addiu       $a3, $s2, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0880u, 0x2AECC4u, 0x2AECCCu)) {
        return;
    }
    ctx->pc = 0x2AECCCu;
label_2aeccc:
    // 0x2aeccc: 0x8e880028  lw          $t0, 0x28($s4)
    ctx->pc = 0x2aecccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x2aecd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2aecd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aecd4: 0x8e890014  lw          $t1, 0x14($s4)
    ctx->pc = 0x2aecd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2aecd8: 0x26450364  addiu       $a1, $s2, 0x364
    ctx->pc = 0x2aecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 868));
    // 0x2aecdc: 0x8e8a0010  lw          $t2, 0x10($s4)
    ctx->pc = 0x2aecdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2aece0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2aece0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2aece4: 0x264602c4  addiu       $a2, $s2, 0x2C4
    ctx->pc = 0x2aece4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 708));
    // 0x2aece8: 0xc0b010c  jal         func_2C0430
    ctx->pc = 0x2AECE8u;
    SET_GPR_U32(ctx, 31, 0x2AECF0u);
    ctx->pc = 0x2AECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECE8u;
    // 0x2aecec: 0x264703fc  addiu       $a3, $s2, 0x3FC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1020));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0430u, 0x2AECE8u, 0x2AECF0u)) {
        return;
    }
    ctx->pc = 0x2AECF0u;
label_2aecf0:
    // 0x2aecf0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2aecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aecf4: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2aecf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2aecf8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AECF8u;
    {
        const bool branch_taken_0x2aecf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECF8u;
        // 0x2aecfc: 0x30620030  andi        $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aecf8) {
            ctx->pc = 0x2AED14u;
            goto label_2aed14;
        }
    }
    ctx->pc = 0x2AED00u;
    // 0x2aed00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AED00u;
    {
        const bool branch_taken_0x2aed00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED00u;
        // 0x2aed04: 0x2653040c  addiu       $s3, $s2, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed00) {
            ctx->pc = 0x2AED18u;
            goto label_2aed18;
        }
    }
    ctx->pc = 0x2AED08u;
    // 0x2aed08: 0x8e42040c  lw          $v0, 0x40C($s2)
    ctx->pc = 0x2aed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1036)));
    // 0x2aed0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AED0Cu;
    {
        const bool branch_taken_0x2aed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED0Cu;
        // 0x2aed10: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed0c) {
            ctx->pc = 0x2AED18u;
            goto label_2aed18;
        }
    }
    ctx->pc = 0x2AED14u;
label_2aed14:
    // 0x2aed14: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2aed14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aed18:
    // 0x2aed18: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2aed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2aed1c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2aed1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2aed20: 0x3610fff0  ori         $s0, $s0, 0xFFF0
    ctx->pc = 0x2aed20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65520);
    // 0x2aed24: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x2aed24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2aed28: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aed28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aed2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aed2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed30: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2aed30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2aed34: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2aed34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2aed38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aed38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed3c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2aed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2aed40: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AED40u;
    SET_GPR_U32(ctx, 31, 0x2AED48u);
    ctx->pc = 0x2AED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED40u;
    // 0x2aed44: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AED40u, 0x2AED48u)) {
        return;
    }
    ctx->pc = 0x2AED48u;
label_2aed48:
    // 0x2aed48: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x2aed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2aed4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2aed4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed50: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2aed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2aed54: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x2aed54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2aed58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aed58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aed5c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2aed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2aed60: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2aed60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2aed64: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2AED64u;
    {
        const bool branch_taken_0x2aed64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED64u;
        // 0x2aed68: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed64) {
            ctx->pc = 0x2AEE40u;
            goto label_2aee40;
        }
    }
    ctx->pc = 0x2AED6Cu;
    // 0x2aed6c: 0x8e45008c  lw          $a1, 0x8C($s2)
    ctx->pc = 0x2aed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2aed70: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2aed70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed74: 0x31440003  andi        $a0, $t2, 0x3
    ctx->pc = 0x2aed74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x2aed78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aed78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed7c: 0x19400012  blez        $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AED7Cu;
    {
        const bool branch_taken_0x2aed7c = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x2AED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED7Cu;
        // 0x2aed80: 0x24a300b0  addiu       $v1, $a1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed7c) {
            ctx->pc = 0x2AEDC8u;
            goto label_2aedc8;
        }
    }
    ctx->pc = 0x2AED84u;
    // 0x2aed84: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AED84u;
    {
        const bool branch_taken_0x2aed84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED84u;
        // 0x2aed88: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed84) {
            ctx->pc = 0x2AEDE8u;
            goto label_2aede8;
        }
    }
    ctx->pc = 0x2AED8Cu;
    // 0x2aed8c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2AED8Cu;
    {
        const bool branch_taken_0x2aed8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aed8c) {
            ctx->pc = 0x2AED90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AED8Cu;
            // 0x2aed90: 0x8e420098  lw          $v0, 0x98($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEDCCu;
            goto label_2aedcc;
        }
    }
    ctx->pc = 0x2AED94u;
    // 0x2aed94: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2aed94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2aed98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AED98u;
    {
        const bool branch_taken_0x2aed98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED98u;
        // 0x2aed9c: 0x8e420098  lw          $v0, 0x98($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed98) {
            ctx->pc = 0x2AEDB4u;
            goto label_2aedb4;
        }
    }
    ctx->pc = 0x2AEDA0u;
    // 0x2aeda0: 0x24a30190  addiu       $v1, $a1, 0x190
    ctx->pc = 0x2aeda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2aeda4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2aeda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2aeda8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2aeda8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aedac: 0xaca200b0  sw          $v0, 0xB0($a1)
    ctx->pc = 0x2aedacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 2));
    // 0x2aedb0: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x2aedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_2aedb4:
    // 0x2aedb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2aedb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2aedb8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2aedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2aedbc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2aedbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2aedc0: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x2aedc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x2aedc4: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x2aedc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_2aedc8:
    // 0x2aedc8: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x2aedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_2aedcc:
    // 0x2aedcc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2aedccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2aedd0: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x2aedd0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2aedd4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2aedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2aedd8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2aedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2aeddc: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x2aeddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x2aede0: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2AEDE0u;
    {
        const bool branch_taken_0x2aede0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDE0u;
        // 0x2aede4: 0x246300e0  addiu       $v1, $v1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aede0) {
            ctx->pc = 0x2AEE40u;
            goto label_2aee40;
        }
    }
    ctx->pc = 0x2AEDE8u;
label_2aede8:
    // 0x2aede8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2aede8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aedec: 0x0  nop
    ctx->pc = 0x2aedecu;
    // NOP
label_2aedf0:
    // 0x2aedf0: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x2aedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2aedf4: 0x24e30040  addiu       $v1, $a3, 0x40
    ctx->pc = 0x2aedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x2aedf8: 0x24e40080  addiu       $a0, $a3, 0x80
    ctx->pc = 0x2aedf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x2aedfc: 0x24e500c0  addiu       $a1, $a3, 0xC0
    ctx->pc = 0x2aedfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 192));
    // 0x2aee00: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2aee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2aee04: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2aee04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2aee08: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2aee08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2aee0c: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x2aee0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x2aee10: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x2aee10u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2aee14: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x2aee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2aee18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aee1c: 0xacc200e0  sw          $v0, 0xE0($a2)
    ctx->pc = 0x2aee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 2));
    // 0x2aee20: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x2aee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2aee24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aee28: 0xacc301c0  sw          $v1, 0x1C0($a2)
    ctx->pc = 0x2aee28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 448), GPR_U32(ctx, 3));
    // 0x2aee2c: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x2aee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2aee30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2aee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aee34: 0xacc202a0  sw          $v0, 0x2A0($a2)
    ctx->pc = 0x2aee34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 672), GPR_U32(ctx, 2));
    // 0x2aee38: 0x1520ffed  bnez        $t1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2AEE38u;
    {
        const bool branch_taken_0x2aee38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE38u;
        // 0x2aee3c: 0x24c60380  addiu       $a2, $a2, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee38) {
            ctx->pc = 0x2AEDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aedf0;
        }
    }
    ctx->pc = 0x2AEE40u;
label_2aee40:
    // 0x2aee40: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x2aee40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x2aee44: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2aee44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x2aee48: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2aee48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2aee4c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2aee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2aee50: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x2aee50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x2aee54: 0x24634b68  addiu       $v1, $v1, 0x4B68
    ctx->pc = 0x2aee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19304));
    // 0x2aee58: 0x24846338  addiu       $a0, $a0, 0x6338
    ctx->pc = 0x2aee58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25400));
    // 0x2aee5c: 0x24a559a8  addiu       $a1, $a1, 0x59A8
    ctx->pc = 0x2aee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22952));
    // 0x2aee60: 0x8e860028  lw          $a2, 0x28($s4)
    ctx->pc = 0x2aee60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x2aee64: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2aee64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee68: 0xae430404  sw          $v1, 0x404($s2)
    ctx->pc = 0x2aee68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1028), GPR_U32(ctx, 3));
    // 0x2aee6c: 0xae4400f4  sw          $a0, 0xF4($s2)
    ctx->pc = 0x2aee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 4));
    // 0x2aee70: 0xae460048  sw          $a2, 0x48($s2)
    ctx->pc = 0x2aee70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 6));
    // 0x2aee74: 0xae4500f8  sw          $a1, 0xF8($s2)
    ctx->pc = 0x2aee74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 5));
    // 0x2aee78: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x2aee78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x2aee7c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2aee7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aee80: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2aee80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aee84: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2aee84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aee88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2aee88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aee8c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2aee8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aee90: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2aee90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aee94: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2aee94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aee98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aee98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aee9c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2aee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aeea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEA0u;
        // 0x2aeea4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEEA8u;
}
