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

// Function: sub_00311680
// Address: 0x311680 - 0x311ec8
void sub_00311680_0x311680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311680_0x311680");
#endif

    switch (ctx->pc) {
        case 0x311728u: goto label_311728;
        case 0x3117dcu: goto label_3117dc;
        case 0x311838u: goto label_311838;
        case 0x3119e4u: goto label_3119e4;
        case 0x3119f4u: goto label_3119f4;
        case 0x3119fcu: goto label_3119fc;
        case 0x311a08u: goto label_311a08;
        case 0x311a18u: goto label_311a18;
        case 0x311a20u: goto label_311a20;
        case 0x311a2cu: goto label_311a2c;
        case 0x311a3cu: goto label_311a3c;
        case 0x311a44u: goto label_311a44;
        case 0x311a50u: goto label_311a50;
        case 0x311a60u: goto label_311a60;
        case 0x311a68u: goto label_311a68;
        case 0x311a74u: goto label_311a74;
        case 0x311a84u: goto label_311a84;
        case 0x311a8cu: goto label_311a8c;
        case 0x311a98u: goto label_311a98;
        case 0x311aa8u: goto label_311aa8;
        case 0x311ab0u: goto label_311ab0;
        case 0x311abcu: goto label_311abc;
        case 0x311accu: goto label_311acc;
        case 0x311ad4u: goto label_311ad4;
        case 0x311ae0u: goto label_311ae0;
        case 0x311af0u: goto label_311af0;
        case 0x311af8u: goto label_311af8;
        case 0x311b04u: goto label_311b04;
        case 0x311b14u: goto label_311b14;
        case 0x311b1cu: goto label_311b1c;
        case 0x311b28u: goto label_311b28;
        case 0x311b38u: goto label_311b38;
        case 0x311b40u: goto label_311b40;
        default: break;
    }

    ctx->pc = 0x311680u;

    // 0x311680: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x311680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x311684: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311688: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x311688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x31168c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x31168cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x311690: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x311690u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311694: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x311694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x311698: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x311698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31169c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x31169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3116a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3116a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3116a4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3116a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3116a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3116a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3116ac: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3116acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3116b0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3116b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3116b4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3116b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3116b8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3116b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3116bc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3116bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3116c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3116c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3116c4: 0xe7bf0118  swc1        $f31, 0x118($sp)
    ctx->pc = 0x3116c4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x3116c8: 0xe7be0110  swc1        $f30, 0x110($sp)
    ctx->pc = 0x3116c8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x3116cc: 0xe7bd0108  swc1        $f29, 0x108($sp)
    ctx->pc = 0x3116ccu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3116d0: 0xe7bc0100  swc1        $f28, 0x100($sp)
    ctx->pc = 0x3116d0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3116d4: 0xe7bb00f8  swc1        $f27, 0xF8($sp)
    ctx->pc = 0x3116d4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x3116d8: 0xe7ba00f0  swc1        $f26, 0xF0($sp)
    ctx->pc = 0x3116d8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3116dc: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x3116dcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3116e0: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x3116e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3116e4: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x3116e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3116e8: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x3116e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3116ec: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x3116ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3116f0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3116f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3116f4: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x3116f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x3116f8: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x3116f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x3116fc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3116fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x311700: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x311700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x311704: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x311704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x311708: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x311708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x31170c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x31170cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x311710: 0x9642001e  lhu         $v0, 0x1E($s2)
    ctx->pc = 0x311710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x311714: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x311714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x311718: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x311718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x31171c: 0x104001b3  beqz        $v0, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x31171Cu;
    {
        const bool branch_taken_0x31171c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31171Cu;
        // 0x311720: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31171c) {
            ctx->pc = 0x311DECu;
            goto label_311dec;
        }
    }
    ctx->pc = 0x311724u;
    // 0x311724: 0x0  nop
    ctx->pc = 0x311724u;
    // NOP
label_311728:
    // 0x311728: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x311728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x31172c: 0x108840  sll         $s1, $s0, 1
    ctx->pc = 0x31172cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x311730: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x311730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x311734: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x311734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x311738: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x311738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x31173c: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x31173cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x311740: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x311740u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x311744: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x311744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x311748: 0x8e480014  lw          $t0, 0x14($s2)
    ctx->pc = 0x311748u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x31174c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x31174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x311750: 0xe42818  mult        $a1, $a3, $a0
    ctx->pc = 0x311750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x311754: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x311754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x311758: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x311758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31175c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x31175cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x311760: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x311760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x311764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x311764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311768: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x311768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x31176c: 0x8e490004  lw          $t1, 0x4($s2)
    ctx->pc = 0x31176cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x311770: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x311770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x311774: 0x47b823  subu        $s7, $v0, $a3
    ctx->pc = 0x311774u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x311778: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x311778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x31177c: 0x4600ae06  mov.s       $f24, $f21
    ctx->pc = 0x31177cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[21]);
    // 0x311780: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x311780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x311784: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x311784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311788: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x311788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31178c: 0x4600c646  mov.s       $f25, $f24
    ctx->pc = 0x31178cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[24]);
    // 0x311790: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x311790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x311794: 0x4600af86  mov.s       $f30, $f21
    ctx->pc = 0x311794u;
    ctx->f[30] = FPU_MOV_S(ctx->f[21]);
    // 0x311798: 0x4600af06  mov.s       $f28, $f21
    ctx->pc = 0x311798u;
    ctx->f[28] = FPU_MOV_S(ctx->f[21]);
    // 0x31179c: 0x4600aec6  mov.s       $f27, $f21
    ctx->pc = 0x31179cu;
    ctx->f[27] = FPU_MOV_S(ctx->f[21]);
    // 0x3117a0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3117a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3117a4: 0x4600afc6  mov.s       $f31, $f21
    ctx->pc = 0x3117a4u;
    ctx->f[31] = FPU_MOV_S(ctx->f[21]);
    // 0x3117a8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3117a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3117ac: 0x4600c686  mov.s       $f26, $f24
    ctx->pc = 0x3117acu;
    ctx->f[26] = FPU_MOV_S(ctx->f[24]);
    // 0x3117b0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x3117b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3117b4: 0x4600c746  mov.s       $f29, $f24
    ctx->pc = 0x3117b4u;
    ctx->f[29] = FPU_MOV_S(ctx->f[24]);
    // 0x3117b8: 0xe7b90004  swc1        $f25, 0x4($sp)
    ctx->pc = 0x3117b8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3117bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3117bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3117c0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3117c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3117c4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3117c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3117c8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3117c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3117cc: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3117ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3117d0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3117d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3117d4: 0xc0ad1f4  jal         func_2B47D0
    ctx->pc = 0x3117D4u;
    SET_GPR_U32(ctx, 31, 0x3117DCu);
    ctx->pc = 0x3117D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3117D4u;
    // 0x3117d8: 0x46000d07  neg.s       $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_NEG_S(ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B47D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B47D0u, 0x3117D4u, 0x3117DCu)) {
        return;
    }
    ctx->pc = 0x3117DCu;
label_3117dc:
    // 0x3117dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3117dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3117e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3117e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3117e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3117e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3117e8: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3117e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3117ec: 0x30560003  andi        $s6, $v0, 0x3
    ctx->pc = 0x3117ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3117f0: 0x2c31804  sllv        $v1, $v1, $s6
    ctx->pc = 0x3117f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 22) & 0x1F));
    // 0x3117f4: 0x12e00079  beqz        $s7, . + 4 + (0x79 << 2)
    ctx->pc = 0x3117F4u;
    {
        const bool branch_taken_0x3117f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3117F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117F4u;
        // 0x3117f8: 0x307e0003  andi        $fp, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117f4) {
            ctx->pc = 0x3119DCu;
            goto label_3119dc;
        }
    }
    ctx->pc = 0x3117FCu;
    // 0x3117fc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3117fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x311800: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x311800u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x311804: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x311804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x311808: 0x165880  sll         $t3, $s6, 2
    ctx->pc = 0x311808u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x31180c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x31180cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x311810: 0x8e4a0004  lw          $t2, 0x4($s2)
    ctx->pc = 0x311810u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x311814: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x311814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311818: 0x1e4880  sll         $t1, $fp, 2
    ctx->pc = 0x311818u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x31181c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x31181cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x311820: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x311820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x311824: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x311824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x311828: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x311828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x31182c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x31182cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x311830: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x311830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x311834: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x311834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_311838:
    // 0x311838: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x311838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31183c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31183cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x311840: 0x94e3fffe  lhu         $v1, -0x2($a3)
    ctx->pc = 0x311840u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294967294)));
    // 0x311844: 0x117302b  sltu        $a2, $t0, $s7
    ctx->pc = 0x311844u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x311848: 0x4c2018  mult        $a0, $v0, $t4
    ctx->pc = 0x311848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x31184c: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x31184cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x311850: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x311850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x311854: 0x6c2018  mult        $a0, $v1, $t4
    ctx->pc = 0x311854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x311858: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x311858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x31185c: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x31185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x311860: 0x1232821  addu        $a1, $t1, $v1
    ctx->pc = 0x311860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x311864: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x311864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x311868: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x311868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31186c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x31186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311870: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x311870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x311874: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x311874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x311878: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x311878u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x31187c: 0x460212c2  mul.s       $f11, $f2, $f2
    ctx->pc = 0x31187cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x311880: 0xc46e0000  lwc1        $f14, 0x0($v1)
    ctx->pc = 0x311880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x311884: 0x46021040  add.s       $f1, $f2, $f2
    ctx->pc = 0x311884u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x311888: 0x46174942  mul.s       $f5, $f9, $f23
    ctx->pc = 0x311888u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[23]);
    // 0x31188c: 0x46175a82  mul.s       $f10, $f11, $f23
    ctx->pc = 0x31188cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[23]);
    // 0x311890: 0x460e0842  mul.s       $f1, $f1, $f14
    ctx->pc = 0x311890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x311894: 0x46094902  mul.s       $f4, $f9, $f9
    ctx->pc = 0x311894u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x311898: 0x460019c2  mul.s       $f7, $f3, $f0
    ctx->pc = 0x311898u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x31189c: 0x460e14c0  add.s       $f19, $f2, $f14
    ctx->pc = 0x31189cu;
    ctx->f[19] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
    // 0x3118a0: 0x46031b00  add.s       $f12, $f3, $f3
    ctx->pc = 0x3118a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x3118a4: 0x46090400  add.s       $f16, $f0, $f9
    ctx->pc = 0x3118a4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x3118a8: 0x460e7182  mul.s       $f6, $f14, $f14
    ctx->pc = 0x3118a8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x3118ac: 0x46015bc0  add.s       $f15, $f11, $f1
    ctx->pc = 0x3118acu;
    ctx->f[15] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x3118b0: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x3118b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x3118b4: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x3118b4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x3118b8: 0x46131482  mul.s       $f18, $f2, $f19
    ctx->pc = 0x3118b8u;
    ctx->f[18] = FPU_MUL_S(ctx->f[2], ctx->f[19]);
    // 0x3118bc: 0x46100402  mul.s       $f16, $f0, $f16
    ctx->pc = 0x3118bcu;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x3118c0: 0x46096302  mul.s       $f12, $f12, $f9
    ctx->pc = 0x3118c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
    // 0x3118c4: 0x46172202  mul.s       $f8, $f4, $f23
    ctx->pc = 0x3118c4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
    // 0x3118c8: 0x46163942  mul.s       $f5, $f7, $f22
    ctx->pc = 0x3118c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[22]);
    // 0x3118cc: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x3118ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3118d0: 0x46173342  mul.s       $f13, $f6, $f23
    ctx->pc = 0x3118d0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[6], ctx->f[23]);
    // 0x3118d4: 0x46069480  add.s       $f18, $f18, $f6
    ctx->pc = 0x3118d4u;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[6]);
    // 0x3118d8: 0x46048400  add.s       $f16, $f16, $f4
    ctx->pc = 0x3118d8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[4]);
    // 0x3118dc: 0x46065280  add.s       $f10, $f10, $f6
    ctx->pc = 0x3118dcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x3118e0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3118e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3118e4: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x3118e4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3118e8: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x3118e8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x3118ec: 0x460c39c0  add.s       $f7, $f7, $f12
    ctx->pc = 0x3118ecu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x3118f0: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x3118f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x3118f4: 0x460d7bc0  add.s       $f15, $f15, $f13
    ctx->pc = 0x3118f4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[13]);
    // 0x3118f8: 0x460e3182  mul.s       $f6, $f6, $f14
    ctx->pc = 0x3118f8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[14]);
    // 0x3118fc: 0x46025ac2  mul.s       $f11, $f11, $f2
    ctx->pc = 0x3118fcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x311900: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x311900u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x311904: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x311904u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x311908: 0x461620c2  mul.s       $f3, $f4, $f22
    ctx->pc = 0x311908u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[22]);
    // 0x31190c: 0x46121302  mul.s       $f12, $f2, $f18
    ctx->pc = 0x31190cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[18]);
    // 0x311910: 0x46100342  mul.s       $f13, $f0, $f16
    ctx->pc = 0x311910u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x311914: 0x460f1042  mul.s       $f1, $f2, $f15
    ctx->pc = 0x311914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x311918: 0x46165ac2  mul.s       $f11, $f11, $f22
    ctx->pc = 0x311918u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[22]);
    // 0x31191c: 0x46163442  mul.s       $f17, $f6, $f22
    ctx->pc = 0x31191cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[6], ctx->f[22]);
    // 0x311920: 0x460a7202  mul.s       $f8, $f14, $f10
    ctx->pc = 0x311920u;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
    // 0x311924: 0x46066300  add.s       $f12, $f12, $f6
    ctx->pc = 0x311924u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[6]);
    // 0x311928: 0x46046b40  add.s       $f13, $f13, $f4
    ctx->pc = 0x311928u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[4]);
    // 0x31192c: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x31192cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x311930: 0x460b4200  add.s       $f8, $f8, $f11
    ctx->pc = 0x311930u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[11]);
    // 0x311934: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x311934u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x311938: 0x46110840  add.s       $f1, $f1, $f17
    ctx->pc = 0x311938u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[17]);
    // 0x31193c: 0x460c10c2  mul.s       $f3, $f2, $f12
    ctx->pc = 0x31193cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x311940: 0x460d02c2  mul.s       $f11, $f0, $f13
    ctx->pc = 0x311940u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x311944: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x311944u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x311948: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x311948u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x31194c: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x31194cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x311950: 0x460a0282  mul.s       $f10, $f0, $f10
    ctx->pc = 0x311950u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x311954: 0x460771c2  mul.s       $f7, $f14, $f7
    ctx->pc = 0x311954u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x311958: 0x460e3182  mul.s       $f6, $f6, $f14
    ctx->pc = 0x311958u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[14]);
    // 0x31195c: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x31195cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x311960: 0x460f4bc2  mul.s       $f15, $f9, $f15
    ctx->pc = 0x311960u;
    ctx->f[15] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x311964: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x311964u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x311968: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x311968u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x31196c: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x31196cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x311970: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x311970u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x311974: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x311974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311978: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x311978u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x31197c: 0x461304c2  mul.s       $f19, $f0, $f19
    ctx->pc = 0x31197cu;
    ctx->f[19] = FPU_MUL_S(ctx->f[0], ctx->f[19]);
    // 0x311980: 0x460f5280  add.s       $f10, $f10, $f15
    ctx->pc = 0x311980u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[15]);
    // 0x311984: 0x46045ac0  add.s       $f11, $f11, $f4
    ctx->pc = 0x311984u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x311988: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x311988u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x31198c: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x31198cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x311990: 0x46120482  mul.s       $f18, $f0, $f18
    ctx->pc = 0x311990u;
    ctx->f[18] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x311994: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x311994u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x311998: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x311998u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x31199c: 0x46101402  mul.s       $f16, $f2, $f16
    ctx->pc = 0x31199cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[2], ctx->f[16]);
    // 0x3119a0: 0x460d1342  mul.s       $f13, $f2, $f13
    ctx->pc = 0x3119a0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x3119a4: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x3119a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x3119a8: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x3119a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x3119ac: 0x46130840  add.s       $f1, $f1, $f19
    ctx->pc = 0x3119acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[19]);
    // 0x3119b0: 0x4612ce40  add.s       $f25, $f25, $f18
    ctx->pc = 0x3119b0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[18]);
    // 0x3119b4: 0x460cd680  add.s       $f26, $f26, $f12
    ctx->pc = 0x3119b4u;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[12]);
    // 0x3119b8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3119b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3119bc: 0x4603dec0  add.s       $f27, $f27, $f3
    ctx->pc = 0x3119bcu;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[3]);
    // 0x3119c0: 0x4610ef40  add.s       $f29, $f29, $f16
    ctx->pc = 0x3119c0u;
    ctx->f[29] = FPU_ADD_S(ctx->f[29], ctx->f[16]);
    // 0x3119c4: 0x460dffc0  add.s       $f31, $f31, $f13
    ctx->pc = 0x3119c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[13]);
    // 0x3119c8: 0x4602f780  add.s       $f30, $f30, $f2
    ctx->pc = 0x3119c8u;
    ctx->f[30] = FPU_ADD_S(ctx->f[30], ctx->f[2]);
    // 0x3119cc: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x3119ccu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x3119d0: 0x4608e700  add.s       $f28, $f28, $f8
    ctx->pc = 0x3119d0u;
    ctx->f[28] = FPU_ADD_S(ctx->f[28], ctx->f[8]);
    // 0x3119d4: 0x14c0ff98  bnez        $a2, . + 4 + (-0x68 << 2)
    ctx->pc = 0x3119D4u;
    {
        const bool branch_taken_0x3119d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3119D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119D4u;
        // 0x3119d8: 0x4605ad40  add.s       $f21, $f21, $f5 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119d4) {
            ctx->pc = 0x311838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311838;
        }
    }
    ctx->pc = 0x3119DCu;
label_3119dc:
    // 0x3119dc: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x3119DCu;
    SET_GPR_U32(ctx, 31, 0x3119E4u);
    ctx->pc = 0x3119E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119DCu;
    // 0x3119e0: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x3119DCu, 0x3119E4u)) {
        return;
    }
    ctx->pc = 0x3119E4u;
label_3119e4:
    // 0x3119e4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3119e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3119e8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3119e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3119ec: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x3119ECu;
    SET_GPR_U32(ctx, 31, 0x3119F4u);
    ctx->pc = 0x3119F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119ECu;
    // 0x3119f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x3119ECu, 0x3119F4u)) {
        return;
    }
    ctx->pc = 0x3119F4u;
label_3119f4:
    // 0x3119f4: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x3119F4u;
    SET_GPR_U32(ctx, 31, 0x3119FCu);
    ctx->pc = 0x3119F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119F4u;
    // 0x3119f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x3119F4u, 0x3119FCu)) {
        return;
    }
    ctx->pc = 0x3119FCu;
label_3119fc:
    // 0x3119fc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3119fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x311a00: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x311A00u;
    SET_GPR_U32(ctx, 31, 0x311A08u);
    ctx->pc = 0x311A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A00u;
    // 0x311a04: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x311A00u, 0x311A08u)) {
        return;
    }
    ctx->pc = 0x311A08u;
label_311a08:
    // 0x311a08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x311a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x311a0c: 0xdc251188  ld          $a1, 0x1188($at)
    ctx->pc = 0x311a0cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B1188u));
    // 0x311a10: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x311A10u;
    SET_GPR_U32(ctx, 31, 0x311A18u);
    ctx->pc = 0x311A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A10u;
    // 0x311a14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x311A10u, 0x311A18u)) {
        return;
    }
    ctx->pc = 0x311A18u;
label_311a18:
    // 0x311a18: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x311A18u;
    SET_GPR_U32(ctx, 31, 0x311A20u);
    ctx->pc = 0x311A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A18u;
    // 0x311a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x311A18u, 0x311A20u)) {
        return;
    }
    ctx->pc = 0x311A20u;
label_311a20:
    // 0x311a20: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x311a20u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x311a24: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x311A24u;
    SET_GPR_U32(ctx, 31, 0x311A2Cu);
    ctx->pc = 0x311A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A24u;
    // 0x311a28: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x311A24u, 0x311A2Cu)) {
        return;
    }
    ctx->pc = 0x311A2Cu;
label_311a2c:
    // 0x311a2c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x311a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x311a30: 0xdc251190  ld          $a1, 0x1190($at)
    ctx->pc = 0x311a30u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B1190u));
    // 0x311a34: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x311A34u;
    SET_GPR_U32(ctx, 31, 0x311A3Cu);
    ctx->pc = 0x311A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A34u;
    // 0x311a38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x311A34u, 0x311A3Cu)) {
        return;
    }
    ctx->pc = 0x311A3Cu;
label_311a3c:
    // 0x311a3c: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x311A3Cu;
    SET_GPR_U32(ctx, 31, 0x311A44u);
    ctx->pc = 0x311A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A3Cu;
    // 0x311a40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x311A3Cu, 0x311A44u)) {
        return;
    }
    ctx->pc = 0x311A44u;
label_311a44:
    // 0x311a44: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x311a44u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x311a48: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x311A48u;
    SET_GPR_U32(ctx, 31, 0x311A50u);
    ctx->pc = 0x311A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A48u;
    // 0x311a4c: 0x4600db06  mov.s       $f12, $f27 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x311A48u, 0x311A50u)) {
        return;
    }
    ctx->pc = 0x311A50u;
label_311a50:
    // 0x311a50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x311a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x311a54: 0xdc251198  ld          $a1, 0x1198($at)
    ctx->pc = 0x311a54u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B1198u));
    // 0x311a58: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x311A58u;
    SET_GPR_U32(ctx, 31, 0x311A60u);
    ctx->pc = 0x311A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A58u;
    // 0x311a5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x311A58u, 0x311A60u)) {
        return;
    }
    ctx->pc = 0x311A60u;
label_311a60:
    // 0x311a60: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x311A60u;
    SET_GPR_U32(ctx, 31, 0x311A68u);
    ctx->pc = 0x311A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A60u;
    // 0x311a64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x311A60u, 0x311A68u)) {
        return;
    }
    ctx->pc = 0x311A68u;
label_311a68:
    // 0x311a68: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x311a68u;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
    // 0x311a6c: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x311A6Cu;
    SET_GPR_U32(ctx, 31, 0x311A74u);
    ctx->pc = 0x311A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A6Cu;
    // 0x311a70: 0x4600eb06  mov.s       $f12, $f29 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x311A6Cu, 0x311A74u)) {
        return;
    }
    ctx->pc = 0x311A74u;
label_311a74:
    // 0x311a74: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x311a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x311a78: 0xdc2511a0  ld          $a1, 0x11A0($at)
    ctx->pc = 0x311a78u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B11A0u));
    // 0x311a7c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x311A7Cu;
    SET_GPR_U32(ctx, 31, 0x311A84u);
    ctx->pc = 0x311A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A7Cu;
    // 0x311a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x311A7Cu, 0x311A84u)) {
        return;
    }
    ctx->pc = 0x311A84u;
label_311a84:
    // 0x311a84: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x311A84u;
    SET_GPR_U32(ctx, 31, 0x311A8Cu);
    ctx->pc = 0x311A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A84u;
    // 0x311a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x311A84u, 0x311A8Cu)) {
        return;
    }
    ctx->pc = 0x311A8Cu;
label_311a8c:
    // 0x311a8c: 0x46000746  mov.s       $f29, $f0
    ctx->pc = 0x311a8cu;
    ctx->f[29] = FPU_MOV_S(ctx->f[0]);
    // 0x311a90: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x311A90u;
    SET_GPR_U32(ctx, 31, 0x311A98u);
    ctx->pc = 0x311A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A90u;
    // 0x311a94: 0x4600fb06  mov.s       $f12, $f31 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[31]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x311A90u, 0x311A98u)) {
        return;
    }
    ctx->pc = 0x311A98u;
label_311a98:
    // 0x311a98: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x311a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x311a9c: 0xdc2511a8  ld          $a1, 0x11A8($at)
    ctx->pc = 0x311a9cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B11A8u));
    // 0x311aa0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x311AA0u;
    SET_GPR_U32(ctx, 31, 0x311AA8u);
    ctx->pc = 0x311AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AA0u;
    // 0x311aa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x311AA0u, 0x311AA8u)) {
        return;
    }
    ctx->pc = 0x311AA8u;
label_311aa8:
    // 0x311aa8: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x311AA8u;
    SET_GPR_U32(ctx, 31, 0x311AB0u);
    ctx->pc = 0x311AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AA8u;
    // 0x311aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x311AA8u, 0x311AB0u)) {
        return;
    }
    ctx->pc = 0x311AB0u;
label_311ab0:
    // 0x311ab0: 0x460007c6  mov.s       $f31, $f0
    ctx->pc = 0x311ab0u;
    ctx->f[31] = FPU_MOV_S(ctx->f[0]);
    // 0x311ab4: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x311AB4u;
    SET_GPR_U32(ctx, 31, 0x311ABCu);
    ctx->pc = 0x311AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AB4u;
    // 0x311ab8: 0x4600f306  mov.s       $f12, $f30 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x311AB4u, 0x311ABCu)) {
        return;
    }
    ctx->pc = 0x311ABCu;
label_311abc:
    // 0x311abc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x311abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x311ac0: 0xdc2511b0  ld          $a1, 0x11B0($at)
    ctx->pc = 0x311ac0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B11B0u));
    // 0x311ac4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x311AC4u;
    SET_GPR_U32(ctx, 31, 0x311ACCu);
    ctx->pc = 0x311AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AC4u;
    // 0x311ac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x311AC4u, 0x311ACCu)) {
        return;
    }
    ctx->pc = 0x311ACCu;
label_311acc:
    // 0x311acc: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x311ACCu;
    SET_GPR_U32(ctx, 31, 0x311AD4u);
    ctx->pc = 0x311AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311ACCu;
    // 0x311ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x311ACCu, 0x311AD4u)) {
        return;
    }
    ctx->pc = 0x311AD4u;
label_311ad4:
    // 0x311ad4: 0x46000786  mov.s       $f30, $f0
    ctx->pc = 0x311ad4u;
    ctx->f[30] = FPU_MOV_S(ctx->f[0]);
    // 0x311ad8: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x311AD8u;
    SET_GPR_U32(ctx, 31, 0x311AE0u);
    ctx->pc = 0x311ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AD8u;
    // 0x311adc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x311AD8u, 0x311AE0u)) {
        return;
    }
    ctx->pc = 0x311AE0u;
label_311ae0:
    // 0x311ae0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x311ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x311ae4: 0xdc2511b8  ld          $a1, 0x11B8($at)
    ctx->pc = 0x311ae4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B11B8u));
    // 0x311ae8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x311AE8u;
    SET_GPR_U32(ctx, 31, 0x311AF0u);
    ctx->pc = 0x311AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AE8u;
    // 0x311aec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x311AE8u, 0x311AF0u)) {
        return;
    }
    ctx->pc = 0x311AF0u;
label_311af0:
    // 0x311af0: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x311AF0u;
    SET_GPR_U32(ctx, 31, 0x311AF8u);
    ctx->pc = 0x311AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AF0u;
    // 0x311af4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x311AF0u, 0x311AF8u)) {
        return;
    }
    ctx->pc = 0x311AF8u;
label_311af8:
    // 0x311af8: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x311af8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x311afc: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x311AFCu;
    SET_GPR_U32(ctx, 31, 0x311B04u);
    ctx->pc = 0x311B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AFCu;
    // 0x311b00: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x311AFCu, 0x311B04u)) {
        return;
    }
    ctx->pc = 0x311B04u;
label_311b04:
    // 0x311b04: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x311b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x311b08: 0xdc2511c0  ld          $a1, 0x11C0($at)
    ctx->pc = 0x311b08u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B11C0u));
    // 0x311b0c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x311B0Cu;
    SET_GPR_U32(ctx, 31, 0x311B14u);
    ctx->pc = 0x311B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B0Cu;
    // 0x311b10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x311B0Cu, 0x311B14u)) {
        return;
    }
    ctx->pc = 0x311B14u;
label_311b14:
    // 0x311b14: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x311B14u;
    SET_GPR_U32(ctx, 31, 0x311B1Cu);
    ctx->pc = 0x311B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B14u;
    // 0x311b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x311B14u, 0x311B1Cu)) {
        return;
    }
    ctx->pc = 0x311B1Cu;
label_311b1c:
    // 0x311b1c: 0x46000706  mov.s       $f28, $f0
    ctx->pc = 0x311b1cu;
    ctx->f[28] = FPU_MOV_S(ctx->f[0]);
    // 0x311b20: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x311B20u;
    SET_GPR_U32(ctx, 31, 0x311B28u);
    ctx->pc = 0x311B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B20u;
    // 0x311b24: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x311B20u, 0x311B28u)) {
        return;
    }
    ctx->pc = 0x311B28u;
label_311b28:
    // 0x311b28: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x311b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x311b2c: 0xdc2511c8  ld          $a1, 0x11C8($at)
    ctx->pc = 0x311b2cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B11C8u));
    // 0x311b30: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x311B30u;
    SET_GPR_U32(ctx, 31, 0x311B38u);
    ctx->pc = 0x311B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B30u;
    // 0x311b34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x311B30u, 0x311B38u)) {
        return;
    }
    ctx->pc = 0x311B38u;
label_311b38:
    // 0x311b38: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x311B38u;
    SET_GPR_U32(ctx, 31, 0x311B40u);
    ctx->pc = 0x311B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B38u;
    // 0x311b3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x311B38u, 0x311B40u)) {
        return;
    }
    ctx->pc = 0x311B40u;
label_311b40:
    // 0x311b40: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x311b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x311b44: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x311b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x311b48: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x311b48u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b4c: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x311b4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x311b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x311b54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x311b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x311b58: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x311b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311b5c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x311b5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x311b60: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x311b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x311b64: 0x46031b00  add.s       $f12, $f3, $f3
    ctx->pc = 0x311b64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x311b68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x311b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311b6c: 0x460319c2  mul.s       $f7, $f3, $f3
    ctx->pc = 0x311b6cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x311b70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x311b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x311b74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x311b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311b78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311b7c: 0x460843c2  mul.s       $f15, $f8, $f8
    ctx->pc = 0x311b7cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x311b80: 0x46086302  mul.s       $f12, $f12, $f8
    ctx->pc = 0x311b80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x311b84: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x311b84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b88: 0x461a3b82  mul.s       $f14, $f7, $f26
    ctx->pc = 0x311b88u;
    ctx->f[14] = FPU_MUL_S(ctx->f[7], ctx->f[26]);
    // 0x311b8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x311b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x311b90: 0x46014182  mul.s       $f6, $f8, $f1
    ctx->pc = 0x311b90u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x311b94: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x311b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x311b98: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x311b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x311b9c: 0x46186002  mul.s       $f0, $f12, $f24
    ctx->pc = 0x311b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x311ba0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x311ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311ba4: 0x46033902  mul.s       $f4, $f7, $f3
    ctx->pc = 0x311ba4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x311ba8: 0xc6110000  lwc1        $f17, 0x0($s0)
    ctx->pc = 0x311ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x311bac: 0x46057882  mul.s       $f2, $f15, $f5
    ctx->pc = 0x311bacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[5]);
    // 0x311bb0: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x311bb0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x311bb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x311bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x311bb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311bbc: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x311bbcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x311bc0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x311bc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x311bc4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x311bc4u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x311bc8: 0x461c3182  mul.s       $f6, $f6, $f28
    ctx->pc = 0x311bc8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[28]);
    // 0x311bcc: 0x461b2102  mul.s       $f4, $f4, $f27
    ctx->pc = 0x311bccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[27]);
    // 0x311bd0: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x311bd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x311bd4: 0x461d4242  mul.s       $f9, $f8, $f29
    ctx->pc = 0x311bd4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[29]);
    // 0x311bd8: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x311bd8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x311bdc: 0x461c0802  mul.s       $f0, $f1, $f28
    ctx->pc = 0x311bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
    // 0x311be0: 0x46191ac2  mul.s       $f11, $f3, $f25
    ctx->pc = 0x311be0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[25]);
    // 0x311be4: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x311be4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x311be8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x311be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x311bec: 0x46184282  mul.s       $f10, $f8, $f24
    ctx->pc = 0x311becu;
    ctx->f[10] = FPU_MUL_S(ctx->f[8], ctx->f[24]);
    // 0x311bf0: 0x461f7802  mul.s       $f0, $f15, $f31
    ctx->pc = 0x311bf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[31]);
    // 0x311bf4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x311bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311bf8: 0x461a1942  mul.s       $f5, $f3, $f26
    ctx->pc = 0x311bf8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[26]);
    // 0x311bfc: 0x46095ac0  add.s       $f11, $f11, $f9
    ctx->pc = 0x311bfcu;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
    // 0x311c00: 0x4602a402  mul.s       $f16, $f20, $f2
    ctx->pc = 0x311c00u;
    ctx->f[16] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x311c04: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x311c04u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x311c08: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x311c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x311c0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x311c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x311c10: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->pc = 0x311c10u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x311c14: 0x46087802  mul.s       $f0, $f15, $f8
    ctx->pc = 0x311c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[8]);
    // 0x311c18: 0x46027242  mul.s       $f9, $f14, $f2
    ctx->pc = 0x311c18u;
    ctx->f[9] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x311c1c: 0x46025a82  mul.s       $f10, $f11, $f2
    ctx->pc = 0x311c1cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x311c20: 0x461c6302  mul.s       $f12, $f12, $f28
    ctx->pc = 0x311c20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
    // 0x311c24: 0x4619a082  mul.s       $f2, $f20, $f25
    ctx->pc = 0x311c24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x311c28: 0x461b39c2  mul.s       $f7, $f7, $f27
    ctx->pc = 0x311c28u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[27]);
    // 0x311c2c: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x311c2cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x311c30: 0x46010b42  mul.s       $f13, $f1, $f1
    ctx->pc = 0x311c30u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x311c34: 0x461e0002  mul.s       $f0, $f0, $f30
    ctx->pc = 0x311c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[30]);
    // 0x311c38: 0x460b5980  add.s       $f6, $f11, $f11
    ctx->pc = 0x311c38u;
    ctx->f[6] = FPU_ADD_S(ctx->f[11], ctx->f[11]);
    // 0x311c3c: 0x460c39c0  add.s       $f7, $f7, $f12
    ctx->pc = 0x311c3cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x311c40: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x311c40u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x311c44: 0x46157bc2  mul.s       $f15, $f15, $f21
    ctx->pc = 0x311c44u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[21]);
    // 0x311c48: 0x461e4202  mul.s       $f8, $f8, $f30
    ctx->pc = 0x311c48u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[30]);
    // 0x311c4c: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x311c4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x311c50: 0x46016b02  mul.s       $f12, $f13, $f1
    ctx->pc = 0x311c50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x311c54: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x311c54u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x311c58: 0x46105280  add.s       $f10, $f10, $f16
    ctx->pc = 0x311c58u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[16]);
    // 0x311c5c: 0x46103180  add.s       $f6, $f6, $f16
    ctx->pc = 0x311c5cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[16]);
    // 0x311c60: 0x4609a242  mul.s       $f9, $f20, $f9
    ctx->pc = 0x311c60u;
    ctx->f[9] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x311c64: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x311c64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x311c68: 0x461a0d82  mul.s       $f22, $f1, $f26
    ctx->pc = 0x311c68u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
    // 0x311c6c: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x311c6cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x311c70: 0x461fa002  mul.s       $f0, $f20, $f31
    ctx->pc = 0x311c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[31]);
    // 0x311c74: 0x46190c82  mul.s       $f18, $f1, $f25
    ctx->pc = 0x311c74u;
    ctx->f[18] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    // 0x311c78: 0x461d0cc2  mul.s       $f19, $f1, $f29
    ctx->pc = 0x311c78u;
    ctx->f[19] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x311c7c: 0x461f0dc2  mul.s       $f23, $f1, $f31
    ctx->pc = 0x311c7cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[31]);
    // 0x311c80: 0x461b0e02  mul.s       $f24, $f1, $f27
    ctx->pc = 0x311c80u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[27]);
    // 0x311c84: 0x461e0e82  mul.s       $f26, $f1, $f30
    ctx->pc = 0x311c84u;
    ctx->f[26] = FPU_MUL_S(ctx->f[1], ctx->f[30]);
    // 0x311c88: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x311c88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x311c8c: 0x460f39c0  add.s       $f7, $f7, $f15
    ctx->pc = 0x311c8cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[15]);
    // 0x311c90: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x311c90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x311c94: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x311c94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x311c98: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x311c98u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
    // 0x311c9c: 0x4606a182  mul.s       $f6, $f20, $f6
    ctx->pc = 0x311c9cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[6]);
    // 0x311ca0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x311ca0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x311ca4: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x311ca4u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x311ca8: 0x460539c0  add.s       $f7, $f7, $f5
    ctx->pc = 0x311ca8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x311cac: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x311cacu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x311cb0: 0x46067380  add.s       $f14, $f14, $f6
    ctx->pc = 0x311cb0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[6]);
    // 0x311cb4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x311cb4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x311cb8: 0x46105ac0  add.s       $f11, $f11, $f16
    ctx->pc = 0x311cb8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[16]);
    // 0x311cbc: 0x46076142  mul.s       $f5, $f12, $f7
    ctx->pc = 0x311cbcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x311cc0: 0x46036882  mul.s       $f2, $f13, $f3
    ctx->pc = 0x311cc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
    // 0x311cc4: 0x460e6302  mul.s       $f12, $f12, $f14
    ctx->pc = 0x311cc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
    // 0x311cc8: 0x460408c2  mul.s       $f3, $f1, $f4
    ctx->pc = 0x311cc8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x311ccc: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x311CCCu;
    {
        const bool branch_taken_0x311ccc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CCCu;
        // 0x311cd0: 0x460b6802  mul.s       $f0, $f13, $f11 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ccc) {
            ctx->pc = 0x311CE4u;
            goto label_311ce4;
        }
    }
    ctx->pc = 0x311CD4u;
    // 0x311cd4: 0x57c00004  bnel        $fp, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x311CD4u;
    {
        const bool branch_taken_0x311cd4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x311cd4) {
            ctx->pc = 0x311CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311CD4u;
            // 0x311cd8: 0x46008802  mul.s       $f0, $f17, $f0 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311CE8u;
            goto label_311ce8;
        }
    }
    ctx->pc = 0x311CDCu;
    // 0x311cdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x311CDCu;
    {
        const bool branch_taken_0x311cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CDCu;
        // 0x311ce0: 0x46138802  mul.s       $f0, $f17, $f19 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[19]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311cdc) {
            ctx->pc = 0x311CE8u;
            goto label_311ce8;
        }
    }
    ctx->pc = 0x311CE4u;
label_311ce4:
    // 0x311ce4: 0x46128802  mul.s       $f0, $f17, $f18
    ctx->pc = 0x311ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[18]);
label_311ce8:
    // 0x311ce8: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x311ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311cec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311cecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311cf0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x311cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x311cf4: 0x1903021  addu        $a2, $t4, $s0
    ctx->pc = 0x311cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x311cf8: 0x1931021  addu        $v0, $t4, $s3
    ctx->pc = 0x311cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 19)));
    // 0x311cfc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x311cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d00: 0x1b03821  addu        $a3, $t5, $s0
    ctx->pc = 0x311d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x311d04: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x311d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311d08: 0x1d04021  addu        $t0, $t6, $s0
    ctx->pc = 0x311d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x311d0c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x311d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x311d10: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x311d10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311d14: 0x1b31821  addu        $v1, $t5, $s3
    ctx->pc = 0x311d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x311d18: 0x1d32021  addu        $a0, $t6, $s3
    ctx->pc = 0x311d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x311d1c: 0x1944821  addu        $t1, $t4, $s4
    ctx->pc = 0x311d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 20)));
    // 0x311d20: 0x1b45021  addu        $t2, $t5, $s4
    ctx->pc = 0x311d20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 20)));
    // 0x311d24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311d24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311d28: 0x1d45821  addu        $t3, $t6, $s4
    ctx->pc = 0x311d28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 20)));
    // 0x311d2c: 0x1956021  addu        $t4, $t4, $s5
    ctx->pc = 0x311d2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 21)));
    // 0x311d30: 0x1b56821  addu        $t5, $t5, $s5
    ctx->pc = 0x311d30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 21)));
    // 0x311d34: 0x1d57021  addu        $t6, $t6, $s5
    ctx->pc = 0x311d34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
    // 0x311d38: 0x9645001e  lhu         $a1, 0x1E($s2)
    ctx->pc = 0x311d38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x311d3c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x311d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x311d40: 0x205282b  sltu        $a1, $s0, $a1
    ctx->pc = 0x311d40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x311d44: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x311d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d48: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x311d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311d4c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x311d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x311d50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311d50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311d54: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x311d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x311d58: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x311d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d5c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x311d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311d60: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x311d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x311d64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311d64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311d68: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x311d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x311d6c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x311d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d70: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x311d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311d74: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x311d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x311d78: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311d78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311d7c: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x311d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x311d80: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x311d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d84: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x311d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311d88: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x311d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x311d8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311d8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311d90: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x311d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x311d94: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x311d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d98: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x311d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311d9c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x311d9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x311da0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311da0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311da4: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x311da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x311da8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x311da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311dac: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x311dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311db0: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x311db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311db4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x311db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x311db8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311db8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311dbc: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x311dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x311dc0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x311dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311dc4: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x311dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311dc8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x311dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x311dcc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311dccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311dd0: 0xe5a10000  swc1        $f1, 0x0($t5)
    ctx->pc = 0x311dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x311dd4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x311dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311dd8: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x311dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311ddc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x311ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x311de0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311de0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311de4: 0x14a0fe50  bnez        $a1, . + 4 + (-0x1B0 << 2)
    ctx->pc = 0x311DE4u;
    {
        const bool branch_taken_0x311de4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x311DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DE4u;
        // 0x311de8: 0xe5c10000  swc1        $f1, 0x0($t6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311de4) {
            ctx->pc = 0x311728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311728;
        }
    }
    ctx->pc = 0x311DECu;
label_311dec:
    // 0x311dec: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x311decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311df0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x311df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311df4: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x311df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311df8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x311df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x311dfc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x311dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x311e00: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x311e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311e04: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x311e04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x311e08: 0xc7848370  lwc1        $f4, -0x7C90($gp)
    ctx->pc = 0x311e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x311e0c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x311e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x311e10: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x311e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x311e14: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x311e14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x311e18: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x311e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x311e1c: 0xe6630000  swc1        $f3, 0x0($s3)
    ctx->pc = 0x311e1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x311e20: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x311e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x311e24: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x311e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x311e28: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x311e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x311e2c: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x311e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311e30: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x311e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311e34: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x311e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311e38: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x311e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x311e3c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x311e3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x311e40: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x311e40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311e44: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x311e44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x311e48: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x311e48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311e4c: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x311e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x311e50: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x311e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x311e54: 0xe6830008  swc1        $f3, 0x8($s4)
    ctx->pc = 0x311e54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x311e58: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x311e58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x311e5c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x311e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311e60: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x311e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311e64: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x311e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311e68: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x311e68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x311e6c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x311e6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x311e70: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x311e70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311e74: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x311e74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x311e78: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x311e78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311e7c: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x311e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x311e80: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x311e80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x311e84: 0xe6a30008  swc1        $f3, 0x8($s5)
    ctx->pc = 0x311e84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x311e88: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x311e88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x311e8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x311e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311e90: 0xc7bf0118  lwc1        $f31, 0x118($sp)
    ctx->pc = 0x311e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x311e94: 0xc7be0110  lwc1        $f30, 0x110($sp)
    ctx->pc = 0x311e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x311e98: 0xc7bd0108  lwc1        $f29, 0x108($sp)
    ctx->pc = 0x311e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x311e9c: 0xc7bc0100  lwc1        $f28, 0x100($sp)
    ctx->pc = 0x311e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x311ea0: 0xc7bb00f8  lwc1        $f27, 0xF8($sp)
    ctx->pc = 0x311ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x311ea4: 0xc7ba00f0  lwc1        $f26, 0xF0($sp)
    ctx->pc = 0x311ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x311ea8: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x311ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x311eac: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x311eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x311eb0: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x311eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x311eb4: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x311eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x311eb8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x311eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x311ebc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x311ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x311ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x311EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EC0u;
        // 0x311ec4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311EC8u;
}
