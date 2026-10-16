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

// Function: sub_00127718
// Address: 0x127718 - 0x127d80
void sub_00127718_0x127718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127718_0x127718");
#endif

    switch (ctx->pc) {
        case 0x12776cu: goto label_12776c;
        case 0x127780u: goto label_127780;
        case 0x1277e8u: goto label_1277e8;
        case 0x1277f0u: goto label_1277f0;
        case 0x1278b8u: goto label_1278b8;
        case 0x1278c0u: goto label_1278c0;
        case 0x1278c8u: goto label_1278c8;
        case 0x1278d0u: goto label_1278d0;
        case 0x1278d8u: goto label_1278d8;
        case 0x1278e0u: goto label_1278e0;
        case 0x1278e8u: goto label_1278e8;
        case 0x1278f0u: goto label_1278f0;
        case 0x1278f8u: goto label_1278f8;
        case 0x127900u: goto label_127900;
        case 0x127908u: goto label_127908;
        case 0x127910u: goto label_127910;
        case 0x127918u: goto label_127918;
        case 0x127980u: goto label_127980;
        case 0x1279a4u: goto label_1279a4;
        case 0x1279acu: goto label_1279ac;
        case 0x1279b4u: goto label_1279b4;
        case 0x127a34u: goto label_127a34;
        case 0x127a3cu: goto label_127a3c;
        case 0x127a60u: goto label_127a60;
        case 0x127a78u: goto label_127a78;
        case 0x127a84u: goto label_127a84;
        case 0x127a8cu: goto label_127a8c;
        case 0x127aa0u: goto label_127aa0;
        case 0x127ab0u: goto label_127ab0;
        case 0x127c08u: goto label_127c08;
        case 0x127c20u: goto label_127c20;
        case 0x127c38u: goto label_127c38;
        case 0x127c50u: goto label_127c50;
        case 0x127c7cu: goto label_127c7c;
        default: break;
    }

    ctx->pc = 0x127718u;

    // 0x127718: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x127718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x12771c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12771cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127720: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x127720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x127724: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x127724u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127728: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x127728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x12772c: 0x27c20040  addiu       $v0, $fp, 0x40
    ctx->pc = 0x12772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x127730: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x127730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x127734: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x127734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x127738: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x127738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x12773c: 0x27d00078  addiu       $s0, $fp, 0x78
    ctx->pc = 0x12773cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 120));
    // 0x127740: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x127740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x127744: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x127744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127748: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x127748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x12774c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12774cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127750: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x127750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x127754: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x127754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x127758: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x127758u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x12775c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x12775cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x127760: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x127760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x127764: 0xc0620c8  jal         func_188320
    ctx->pc = 0x127764u;
    SET_GPR_U32(ctx, 31, 0x12776Cu);
    ctx->pc = 0x127768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127764u;
    // 0x127768: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188320u, 0x127764u, 0x12776Cu)) {
        return;
    }
    ctx->pc = 0x12776Cu;
label_12776c:
    // 0x12776c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12776cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x127770: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x127770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x127774: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x127774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127778: 0xc047dda  jal         func_11F768
    ctx->pc = 0x127778u;
    SET_GPR_U32(ctx, 31, 0x127780u);
    ctx->pc = 0x12777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127778u;
    // 0x12777c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11F768u, 0x127778u, 0x127780u)) {
        return;
    }
    ctx->pc = 0x127780u;
label_127780:
    // 0x127780: 0x27c32c54  addiu       $v1, $fp, 0x2C54
    ctx->pc = 0x127780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 11348));
    // 0x127784: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x127784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x127788: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x127788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12778c: 0x2442cb88  addiu       $v0, $v0, -0x3478
    ctx->pc = 0x12778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953864));
    // 0x127790: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x127790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x127794: 0xafc01500  sw          $zero, 0x1500($fp)
    ctx->pc = 0x127794u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5376), GPR_U32(ctx, 0));
    // 0x127798: 0x2463ca68  addiu       $v1, $v1, -0x3598
    ctx->pc = 0x127798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953576));
    // 0x12779c: 0xafc01504  sw          $zero, 0x1504($fp)
    ctx->pc = 0x12779cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5380), GPR_U32(ctx, 0));
    // 0x1277a0: 0xafc30088  sw          $v1, 0x88($fp)
    ctx->pc = 0x1277a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 136), GPR_U32(ctx, 3));
    // 0x1277a4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1277a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1277a8: 0xafc2007c  sw          $v0, 0x7C($fp)
    ctx->pc = 0x1277a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 124), GPR_U32(ctx, 2));
    // 0x1277ac: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x1277acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x1277b0: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x1277b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x1277b4: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x1277b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x1277b8: 0xafb0001c  sw          $s0, 0x1C($sp)
    ctx->pc = 0x1277b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
    // 0x1277bc: 0x24e7ca10  addiu       $a3, $a3, -0x35F0
    ctx->pc = 0x1277bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953488));
    // 0x1277c0: 0x2508cba8  addiu       $t0, $t0, -0x3458
    ctx->pc = 0x1277c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953896));
    // 0x1277c4: 0x2529ce68  addiu       $t1, $t1, -0x3198
    ctx->pc = 0x1277c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954600));
    // 0x1277c8: 0x24c6ca28  addiu       $a2, $a2, -0x35D8
    ctx->pc = 0x1277c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953512));
    // 0x1277cc: 0xafc70354  sw          $a3, 0x354($fp)
    ctx->pc = 0x1277ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 852), GPR_U32(ctx, 7));
    // 0x1277d0: 0xafc80074  sw          $t0, 0x74($fp)
    ctx->pc = 0x1277d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 8));
    // 0x1277d4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1277d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277d8: 0xafc90030  sw          $t1, 0x30($fp)
    ctx->pc = 0x1277d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 9));
    // 0x1277dc: 0x27c41510  addiu       $a0, $fp, 0x1510
    ctx->pc = 0x1277dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5392));
    // 0x1277e0: 0xc06850c  jal         func_1A1430
    ctx->pc = 0x1277E0u;
    SET_GPR_U32(ctx, 31, 0x1277E8u);
    ctx->pc = 0x1277E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277E0u;
    // 0x1277e4: 0xafc600c4  sw          $a2, 0xC4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 196), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1430u, 0x1277E0u, 0x1277E8u)) {
        return;
    }
    ctx->pc = 0x1277E8u;
label_1277e8:
    // 0x1277e8: 0xc04ad84  jal         func_12B610
    ctx->pc = 0x1277E8u;
    SET_GPR_U32(ctx, 31, 0x1277F0u);
    ctx->pc = 0x1277ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277E8u;
    // 0x1277ec: 0x27c428cc  addiu       $a0, $fp, 0x28CC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12B610u, 0x1277E8u, 0x1277F0u)) {
        return;
    }
    ctx->pc = 0x1277F0u;
label_1277f0:
    // 0x1277f0: 0xafc028fc  sw          $zero, 0x28FC($fp)
    ctx->pc = 0x1277f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10492), GPR_U32(ctx, 0));
    // 0x1277f4: 0x27c429bc  addiu       $a0, $fp, 0x29BC
    ctx->pc = 0x1277f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10684));
    // 0x1277f8: 0xafc02900  sw          $zero, 0x2900($fp)
    ctx->pc = 0x1277f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10496), GPR_U32(ctx, 0));
    // 0x1277fc: 0xafc02904  sw          $zero, 0x2904($fp)
    ctx->pc = 0x1277fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10500), GPR_U32(ctx, 0));
    // 0x127800: 0xafc02908  sw          $zero, 0x2908($fp)
    ctx->pc = 0x127800u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10504), GPR_U32(ctx, 0));
    // 0x127804: 0xafc0290c  sw          $zero, 0x290C($fp)
    ctx->pc = 0x127804u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10508), GPR_U32(ctx, 0));
    // 0x127808: 0xafc02910  sw          $zero, 0x2910($fp)
    ctx->pc = 0x127808u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10512), GPR_U32(ctx, 0));
    // 0x12780c: 0xafc02914  sw          $zero, 0x2914($fp)
    ctx->pc = 0x12780cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10516), GPR_U32(ctx, 0));
    // 0x127810: 0xafc02918  sw          $zero, 0x2918($fp)
    ctx->pc = 0x127810u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10520), GPR_U32(ctx, 0));
    // 0x127814: 0xafc0291c  sw          $zero, 0x291C($fp)
    ctx->pc = 0x127814u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10524), GPR_U32(ctx, 0));
    // 0x127818: 0xafc02920  sw          $zero, 0x2920($fp)
    ctx->pc = 0x127818u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10528), GPR_U32(ctx, 0));
    // 0x12781c: 0xafc02924  sw          $zero, 0x2924($fp)
    ctx->pc = 0x12781cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10532), GPR_U32(ctx, 0));
    // 0x127820: 0xafc02928  sw          $zero, 0x2928($fp)
    ctx->pc = 0x127820u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10536), GPR_U32(ctx, 0));
    // 0x127824: 0xafc0292c  sw          $zero, 0x292C($fp)
    ctx->pc = 0x127824u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10540), GPR_U32(ctx, 0));
    // 0x127828: 0xafc02930  sw          $zero, 0x2930($fp)
    ctx->pc = 0x127828u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10544), GPR_U32(ctx, 0));
    // 0x12782c: 0xafc02934  sw          $zero, 0x2934($fp)
    ctx->pc = 0x12782cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10548), GPR_U32(ctx, 0));
    // 0x127830: 0xafc02938  sw          $zero, 0x2938($fp)
    ctx->pc = 0x127830u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10552), GPR_U32(ctx, 0));
    // 0x127834: 0xafc0293c  sw          $zero, 0x293C($fp)
    ctx->pc = 0x127834u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10556), GPR_U32(ctx, 0));
    // 0x127838: 0xafc02940  sw          $zero, 0x2940($fp)
    ctx->pc = 0x127838u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10560), GPR_U32(ctx, 0));
    // 0x12783c: 0xafc02944  sw          $zero, 0x2944($fp)
    ctx->pc = 0x12783cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10564), GPR_U32(ctx, 0));
    // 0x127840: 0xafc02948  sw          $zero, 0x2948($fp)
    ctx->pc = 0x127840u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10568), GPR_U32(ctx, 0));
    // 0x127844: 0xafc0294c  sw          $zero, 0x294C($fp)
    ctx->pc = 0x127844u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10572), GPR_U32(ctx, 0));
    // 0x127848: 0xafc02950  sw          $zero, 0x2950($fp)
    ctx->pc = 0x127848u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10576), GPR_U32(ctx, 0));
    // 0x12784c: 0xafc02954  sw          $zero, 0x2954($fp)
    ctx->pc = 0x12784cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10580), GPR_U32(ctx, 0));
    // 0x127850: 0xafc02958  sw          $zero, 0x2958($fp)
    ctx->pc = 0x127850u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10584), GPR_U32(ctx, 0));
    // 0x127854: 0xafc0295c  sw          $zero, 0x295C($fp)
    ctx->pc = 0x127854u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10588), GPR_U32(ctx, 0));
    // 0x127858: 0xafc02960  sw          $zero, 0x2960($fp)
    ctx->pc = 0x127858u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10592), GPR_U32(ctx, 0));
    // 0x12785c: 0xafc02964  sw          $zero, 0x2964($fp)
    ctx->pc = 0x12785cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10596), GPR_U32(ctx, 0));
    // 0x127860: 0xafc02968  sw          $zero, 0x2968($fp)
    ctx->pc = 0x127860u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10600), GPR_U32(ctx, 0));
    // 0x127864: 0xafc0296c  sw          $zero, 0x296C($fp)
    ctx->pc = 0x127864u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10604), GPR_U32(ctx, 0));
    // 0x127868: 0xafc02970  sw          $zero, 0x2970($fp)
    ctx->pc = 0x127868u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10608), GPR_U32(ctx, 0));
    // 0x12786c: 0xafc02974  sw          $zero, 0x2974($fp)
    ctx->pc = 0x12786cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10612), GPR_U32(ctx, 0));
    // 0x127870: 0xafc02978  sw          $zero, 0x2978($fp)
    ctx->pc = 0x127870u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10616), GPR_U32(ctx, 0));
    // 0x127874: 0xafc0297c  sw          $zero, 0x297C($fp)
    ctx->pc = 0x127874u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10620), GPR_U32(ctx, 0));
    // 0x127878: 0xafc02980  sw          $zero, 0x2980($fp)
    ctx->pc = 0x127878u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10624), GPR_U32(ctx, 0));
    // 0x12787c: 0xafc02984  sw          $zero, 0x2984($fp)
    ctx->pc = 0x12787cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10628), GPR_U32(ctx, 0));
    // 0x127880: 0xafc02988  sw          $zero, 0x2988($fp)
    ctx->pc = 0x127880u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10632), GPR_U32(ctx, 0));
    // 0x127884: 0xafc0298c  sw          $zero, 0x298C($fp)
    ctx->pc = 0x127884u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10636), GPR_U32(ctx, 0));
    // 0x127888: 0xafc02990  sw          $zero, 0x2990($fp)
    ctx->pc = 0x127888u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10640), GPR_U32(ctx, 0));
    // 0x12788c: 0xafc02994  sw          $zero, 0x2994($fp)
    ctx->pc = 0x12788cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10644), GPR_U32(ctx, 0));
    // 0x127890: 0xafc02998  sw          $zero, 0x2998($fp)
    ctx->pc = 0x127890u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10648), GPR_U32(ctx, 0));
    // 0x127894: 0xafc0299c  sw          $zero, 0x299C($fp)
    ctx->pc = 0x127894u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10652), GPR_U32(ctx, 0));
    // 0x127898: 0xafc029a0  sw          $zero, 0x29A0($fp)
    ctx->pc = 0x127898u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10656), GPR_U32(ctx, 0));
    // 0x12789c: 0xafc029a4  sw          $zero, 0x29A4($fp)
    ctx->pc = 0x12789cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10660), GPR_U32(ctx, 0));
    // 0x1278a0: 0xafc029a8  sw          $zero, 0x29A8($fp)
    ctx->pc = 0x1278a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10664), GPR_U32(ctx, 0));
    // 0x1278a4: 0xafc029ac  sw          $zero, 0x29AC($fp)
    ctx->pc = 0x1278a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10668), GPR_U32(ctx, 0));
    // 0x1278a8: 0xafc029b0  sw          $zero, 0x29B0($fp)
    ctx->pc = 0x1278a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10672), GPR_U32(ctx, 0));
    // 0x1278ac: 0xafc029b4  sw          $zero, 0x29B4($fp)
    ctx->pc = 0x1278acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10676), GPR_U32(ctx, 0));
    // 0x1278b0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1278B0u;
    SET_GPR_U32(ctx, 31, 0x1278B8u);
    ctx->pc = 0x1278B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278B0u;
    // 0x1278b4: 0xafc029b8  sw          $zero, 0x29B8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 10680), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1278B0u, 0x1278B8u)) {
        return;
    }
    ctx->pc = 0x1278B8u;
label_1278b8:
    // 0x1278b8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1278B8u;
    SET_GPR_U32(ctx, 31, 0x1278C0u);
    ctx->pc = 0x1278BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278B8u;
    // 0x1278bc: 0x27c429c4  addiu       $a0, $fp, 0x29C4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1278B8u, 0x1278C0u)) {
        return;
    }
    ctx->pc = 0x1278C0u;
label_1278c0:
    // 0x1278c0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1278C0u;
    SET_GPR_U32(ctx, 31, 0x1278C8u);
    ctx->pc = 0x1278C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278C0u;
    // 0x1278c4: 0x27c429cc  addiu       $a0, $fp, 0x29CC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10700));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1278C0u, 0x1278C8u)) {
        return;
    }
    ctx->pc = 0x1278C8u;
label_1278c8:
    // 0x1278c8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1278C8u;
    SET_GPR_U32(ctx, 31, 0x1278D0u);
    ctx->pc = 0x1278CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278C8u;
    // 0x1278cc: 0x27c429d4  addiu       $a0, $fp, 0x29D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10708));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1278C8u, 0x1278D0u)) {
        return;
    }
    ctx->pc = 0x1278D0u;
label_1278d0:
    // 0x1278d0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1278D0u;
    SET_GPR_U32(ctx, 31, 0x1278D8u);
    ctx->pc = 0x1278D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278D0u;
    // 0x1278d4: 0x27c429dc  addiu       $a0, $fp, 0x29DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10716));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1278D0u, 0x1278D8u)) {
        return;
    }
    ctx->pc = 0x1278D8u;
label_1278d8:
    // 0x1278d8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1278D8u;
    SET_GPR_U32(ctx, 31, 0x1278E0u);
    ctx->pc = 0x1278DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278D8u;
    // 0x1278dc: 0x27c429e4  addiu       $a0, $fp, 0x29E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10724));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1278D8u, 0x1278E0u)) {
        return;
    }
    ctx->pc = 0x1278E0u;
label_1278e0:
    // 0x1278e0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1278E0u;
    SET_GPR_U32(ctx, 31, 0x1278E8u);
    ctx->pc = 0x1278E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278E0u;
    // 0x1278e4: 0x27c429ec  addiu       $a0, $fp, 0x29EC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10732));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1278E0u, 0x1278E8u)) {
        return;
    }
    ctx->pc = 0x1278E8u;
label_1278e8:
    // 0x1278e8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1278E8u;
    SET_GPR_U32(ctx, 31, 0x1278F0u);
    ctx->pc = 0x1278ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278E8u;
    // 0x1278ec: 0x27c429f4  addiu       $a0, $fp, 0x29F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10740));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1278E8u, 0x1278F0u)) {
        return;
    }
    ctx->pc = 0x1278F0u;
label_1278f0:
    // 0x1278f0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1278F0u;
    SET_GPR_U32(ctx, 31, 0x1278F8u);
    ctx->pc = 0x1278F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278F0u;
    // 0x1278f4: 0x27c429fc  addiu       $a0, $fp, 0x29FC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10748));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1278F0u, 0x1278F8u)) {
        return;
    }
    ctx->pc = 0x1278F8u;
label_1278f8:
    // 0x1278f8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1278F8u;
    SET_GPR_U32(ctx, 31, 0x127900u);
    ctx->pc = 0x1278FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278F8u;
    // 0x1278fc: 0x27c42a04  addiu       $a0, $fp, 0x2A04 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1278F8u, 0x127900u)) {
        return;
    }
    ctx->pc = 0x127900u;
label_127900:
    // 0x127900: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x127900u;
    SET_GPR_U32(ctx, 31, 0x127908u);
    ctx->pc = 0x127904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127900u;
    // 0x127904: 0x27c42a0c  addiu       $a0, $fp, 0x2A0C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10764));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x127900u, 0x127908u)) {
        return;
    }
    ctx->pc = 0x127908u;
label_127908:
    // 0x127908: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x127908u;
    SET_GPR_U32(ctx, 31, 0x127910u);
    ctx->pc = 0x12790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127908u;
    // 0x12790c: 0x27c42a14  addiu       $a0, $fp, 0x2A14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x127908u, 0x127910u)) {
        return;
    }
    ctx->pc = 0x127910u;
label_127910:
    // 0x127910: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x127910u;
    SET_GPR_U32(ctx, 31, 0x127918u);
    ctx->pc = 0x127914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127910u;
    // 0x127914: 0x27c42a1c  addiu       $a0, $fp, 0x2A1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10780));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x127910u, 0x127918u)) {
        return;
    }
    ctx->pc = 0x127918u;
label_127918:
    // 0x127918: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x127918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x12791c: 0xafc02a64  sw          $zero, 0x2A64($fp)
    ctx->pc = 0x12791cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10852), GPR_U32(ctx, 0));
    // 0x127920: 0x3463face  ori         $v1, $v1, 0xFACE
    ctx->pc = 0x127920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64206);
    // 0x127924: 0xafc02a68  sw          $zero, 0x2A68($fp)
    ctx->pc = 0x127924u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10856), GPR_U32(ctx, 0));
    // 0x127928: 0xafc32a98  sw          $v1, 0x2A98($fp)
    ctx->pc = 0x127928u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10904), GPR_U32(ctx, 3));
    // 0x12792c: 0x27c22c40  addiu       $v0, $fp, 0x2C40
    ctx->pc = 0x12792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 11328));
    // 0x127930: 0xafc02a6c  sw          $zero, 0x2A6C($fp)
    ctx->pc = 0x127930u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10860), GPR_U32(ctx, 0));
    // 0x127934: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x127934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x127938: 0xafc02a70  sw          $zero, 0x2A70($fp)
    ctx->pc = 0x127938u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10864), GPR_U32(ctx, 0));
    // 0x12793c: 0x24a5f740  addiu       $a1, $a1, -0x8C0
    ctx->pc = 0x12793cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965056));
    // 0x127940: 0xafc02a74  sw          $zero, 0x2A74($fp)
    ctx->pc = 0x127940u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10868), GPR_U32(ctx, 0));
    // 0x127944: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x127944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127948: 0xafd22bbc  sw          $s2, 0x2BBC($fp)
    ctx->pc = 0x127948u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11196), GPR_U32(ctx, 18));
    // 0x12794c: 0xafd22bc0  sw          $s2, 0x2BC0($fp)
    ctx->pc = 0x12794cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11200), GPR_U32(ctx, 18));
    // 0x127950: 0xafc02a90  sw          $zero, 0x2A90($fp)
    ctx->pc = 0x127950u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10896), GPR_U32(ctx, 0));
    // 0x127954: 0xafc02a9c  sw          $zero, 0x2A9C($fp)
    ctx->pc = 0x127954u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10908), GPR_U32(ctx, 0));
    // 0x127958: 0xafc02aa0  sw          $zero, 0x2AA0($fp)
    ctx->pc = 0x127958u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10912), GPR_U32(ctx, 0));
    // 0x12795c: 0xafc02aa4  sw          $zero, 0x2AA4($fp)
    ctx->pc = 0x12795cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10916), GPR_U32(ctx, 0));
    // 0x127960: 0xafc02bb0  sw          $zero, 0x2BB0($fp)
    ctx->pc = 0x127960u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11184), GPR_U32(ctx, 0));
    // 0x127964: 0xafc02bb4  sw          $zero, 0x2BB4($fp)
    ctx->pc = 0x127964u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11188), GPR_U32(ctx, 0));
    // 0x127968: 0xafc02bb8  sw          $zero, 0x2BB8($fp)
    ctx->pc = 0x127968u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11192), GPR_U32(ctx, 0));
    // 0x12796c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12796cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x127970: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x127970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x127974: 0xafc02c40  sw          $zero, 0x2C40($fp)
    ctx->pc = 0x127974u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11328), GPR_U32(ctx, 0));
    // 0x127978: 0xc05a2c2  jal         func_168B08
    ctx->pc = 0x127978u;
    SET_GPR_U32(ctx, 31, 0x127980u);
    ctx->pc = 0x12797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127978u;
    // 0x12797c: 0xafc02c50  sw          $zero, 0x2C50($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 11344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168B08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168B08u, 0x127978u, 0x127980u)) {
        return;
    }
    ctx->pc = 0x127980u;
label_127980:
    // 0x127980: 0xafd22cd0  sw          $s2, 0x2CD0($fp)
    ctx->pc = 0x127980u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11472), GPR_U32(ctx, 18));
    // 0x127984: 0x27c42cdc  addiu       $a0, $fp, 0x2CDC
    ctx->pc = 0x127984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 11484));
    // 0x127988: 0xafc02c68  sw          $zero, 0x2C68($fp)
    ctx->pc = 0x127988u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11368), GPR_U32(ctx, 0));
    // 0x12798c: 0xafc02c6c  sw          $zero, 0x2C6C($fp)
    ctx->pc = 0x12798cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11372), GPR_U32(ctx, 0));
    // 0x127990: 0xafc02c70  sw          $zero, 0x2C70($fp)
    ctx->pc = 0x127990u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11376), GPR_U32(ctx, 0));
    // 0x127994: 0xafc02c74  sw          $zero, 0x2C74($fp)
    ctx->pc = 0x127994u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11380), GPR_U32(ctx, 0));
    // 0x127998: 0xafc02cd4  sw          $zero, 0x2CD4($fp)
    ctx->pc = 0x127998u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11476), GPR_U32(ctx, 0));
    // 0x12799c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x12799Cu;
    SET_GPR_U32(ctx, 31, 0x1279A4u);
    ctx->pc = 0x1279A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12799Cu;
    // 0x1279a0: 0xafc02cd8  sw          $zero, 0x2CD8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 11480), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x12799Cu, 0x1279A4u)) {
        return;
    }
    ctx->pc = 0x1279A4u;
label_1279a4:
    // 0x1279a4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1279A4u;
    SET_GPR_U32(ctx, 31, 0x1279ACu);
    ctx->pc = 0x1279A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1279A4u;
    // 0x1279a8: 0x27c42ce4  addiu       $a0, $fp, 0x2CE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 11492));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1279A4u, 0x1279ACu)) {
        return;
    }
    ctx->pc = 0x1279ACu;
label_1279ac:
    // 0x1279ac: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1279ACu;
    SET_GPR_U32(ctx, 31, 0x1279B4u);
    ctx->pc = 0x1279B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1279ACu;
    // 0x1279b0: 0x27c42cec  addiu       $a0, $fp, 0x2CEC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 11500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1279ACu, 0x1279B4u)) {
        return;
    }
    ctx->pc = 0x1279B4u;
label_1279b4:
    // 0x1279b4: 0xafc02cf4  sw          $zero, 0x2CF4($fp)
    ctx->pc = 0x1279b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11508), GPR_U32(ctx, 0));
    // 0x1279b8: 0x27c22d00  addiu       $v0, $fp, 0x2D00
    ctx->pc = 0x1279b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 11520));
    // 0x1279bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1279bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1279c0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1279c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1279c4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1279c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1279c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1279c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1279cc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1279ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1279d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1279d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1279d4: 0x27c42d48  addiu       $a0, $fp, 0x2D48
    ctx->pc = 0x1279d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 11592));
    // 0x1279d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1279d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1279dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1279dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1279e0: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1279e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1279e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1279e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1279e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1279e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1279ec: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1279ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1279f0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1279f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1279f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1279f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1279f8: 0xafd32d1c  sw          $s3, 0x2D1C($fp)
    ctx->pc = 0x1279f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11548), GPR_U32(ctx, 19));
    // 0x1279fc: 0xafc02d00  sw          $zero, 0x2D00($fp)
    ctx->pc = 0x1279fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11520), GPR_U32(ctx, 0));
    // 0x127a00: 0xafc02d10  sw          $zero, 0x2D10($fp)
    ctx->pc = 0x127a00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11536), GPR_U32(ctx, 0));
    // 0x127a04: 0xafc02d14  sw          $zero, 0x2D14($fp)
    ctx->pc = 0x127a04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11540), GPR_U32(ctx, 0));
    // 0x127a08: 0xafc02d20  sw          $zero, 0x2D20($fp)
    ctx->pc = 0x127a08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11552), GPR_U32(ctx, 0));
    // 0x127a0c: 0xafc02d28  sw          $zero, 0x2D28($fp)
    ctx->pc = 0x127a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11560), GPR_U32(ctx, 0));
    // 0x127a10: 0xafc02d30  sw          $zero, 0x2D30($fp)
    ctx->pc = 0x127a10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11568), GPR_U32(ctx, 0));
    // 0x127a14: 0xe7d42d3c  swc1        $f20, 0x2D3C($fp)
    ctx->pc = 0x127a14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 11580), bits); }
    // 0x127a18: 0xe7c32d34  swc1        $f3, 0x2D34($fp)
    ctx->pc = 0x127a18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 11572), bits); }
    // 0x127a1c: 0xe7c02d38  swc1        $f0, 0x2D38($fp)
    ctx->pc = 0x127a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 11576), bits); }
    // 0x127a20: 0xe7c12d40  swc1        $f1, 0x2D40($fp)
    ctx->pc = 0x127a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 11584), bits); }
    // 0x127a24: 0xe7c22d44  swc1        $f2, 0x2D44($fp)
    ctx->pc = 0x127a24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 11588), bits); }
    // 0x127a28: 0xafc32d2c  sw          $v1, 0x2D2C($fp)
    ctx->pc = 0x127a28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11564), GPR_U32(ctx, 3));
    // 0x127a2c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x127A2Cu;
    SET_GPR_U32(ctx, 31, 0x127A34u);
    ctx->pc = 0x127A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A2Cu;
    // 0x127a30: 0xafc52d24  sw          $a1, 0x2D24($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 11556), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x127A2Cu, 0x127A34u)) {
        return;
    }
    ctx->pc = 0x127A34u;
label_127a34:
    // 0x127a34: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x127A34u;
    SET_GPR_U32(ctx, 31, 0x127A3Cu);
    ctx->pc = 0x127A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A34u;
    // 0x127a38: 0x27c42d50  addiu       $a0, $fp, 0x2D50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 11600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x127A34u, 0x127A3Cu)) {
        return;
    }
    ctx->pc = 0x127A3Cu;
label_127a3c:
    // 0x127a3c: 0xe7d42d58  swc1        $f20, 0x2D58($fp)
    ctx->pc = 0x127a3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 11608), bits); }
    // 0x127a40: 0x27c42d74  addiu       $a0, $fp, 0x2D74
    ctx->pc = 0x127a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 11636));
    // 0x127a44: 0xafc02d5c  sw          $zero, 0x2D5C($fp)
    ctx->pc = 0x127a44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11612), GPR_U32(ctx, 0));
    // 0x127a48: 0xafc02d60  sw          $zero, 0x2D60($fp)
    ctx->pc = 0x127a48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11616), GPR_U32(ctx, 0));
    // 0x127a4c: 0xe7d42d64  swc1        $f20, 0x2D64($fp)
    ctx->pc = 0x127a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 11620), bits); }
    // 0x127a50: 0xafc02d68  sw          $zero, 0x2D68($fp)
    ctx->pc = 0x127a50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11624), GPR_U32(ctx, 0));
    // 0x127a54: 0xe7d42d6c  swc1        $f20, 0x2D6C($fp)
    ctx->pc = 0x127a54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 11628), bits); }
    // 0x127a58: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x127A58u;
    SET_GPR_U32(ctx, 31, 0x127A60u);
    ctx->pc = 0x127A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A58u;
    // 0x127a5c: 0xe7d42d70  swc1        $f20, 0x2D70($fp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 11632), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x127A58u, 0x127A60u)) {
        return;
    }
    ctx->pc = 0x127A60u;
label_127a60:
    // 0x127a60: 0xafd32d84  sw          $s3, 0x2D84($fp)
    ctx->pc = 0x127a60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11652), GPR_U32(ctx, 19));
    // 0x127a64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x127a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a68: 0xafc02d7c  sw          $zero, 0x2D7C($fp)
    ctx->pc = 0x127a68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11644), GPR_U32(ctx, 0));
    // 0x127a6c: 0xafc02d80  sw          $zero, 0x2D80($fp)
    ctx->pc = 0x127a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11648), GPR_U32(ctx, 0));
    // 0x127a70: 0xc04ae46  jal         func_12B918
    ctx->pc = 0x127A70u;
    SET_GPR_U32(ctx, 31, 0x127A78u);
    ctx->pc = 0x127A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A70u;
    // 0x127a74: 0xafc02d88  sw          $zero, 0x2D88($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 11656), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12B918u, 0x127A70u, 0x127A78u)) {
        return;
    }
    ctx->pc = 0x127A78u;
label_127a78:
    // 0x127a78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x127a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127a7c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x127A7Cu;
    SET_GPR_U32(ctx, 31, 0x127A84u);
    ctx->pc = 0x127A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A7Cu;
    // 0x127a80: 0x24040138  addiu       $a0, $zero, 0x138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x127A7Cu, 0x127A84u)) {
        return;
    }
    ctx->pc = 0x127A84u;
label_127a84:
    // 0x127a84: 0xc0651ec  jal         func_1947B0
    ctx->pc = 0x127A84u;
    SET_GPR_U32(ctx, 31, 0x127A8Cu);
    ctx->pc = 0x127A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A84u;
    // 0x127a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1947B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1947B0u, 0x127A84u, 0x127A8Cu)) {
        return;
    }
    ctx->pc = 0x127A8Cu;
label_127a8c:
    // 0x127a8c: 0x27c42a24  addiu       $a0, $fp, 0x2A24
    ctx->pc = 0x127a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10788));
    // 0x127a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a94: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x127a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x127a98: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x127A98u;
    SET_GPR_U32(ctx, 31, 0x127AA0u);
    ctx->pc = 0x127A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A98u;
    // 0x127a9c: 0xafc22aa8  sw          $v0, 0x2AA8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 10920), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x127A98u, 0x127AA0u)) {
        return;
    }
    ctx->pc = 0x127AA0u;
label_127aa0:
    // 0x127aa0: 0x27c42a80  addiu       $a0, $fp, 0x2A80
    ctx->pc = 0x127aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10880));
    // 0x127aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127aa8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x127AA8u;
    SET_GPR_U32(ctx, 31, 0x127AB0u);
    ctx->pc = 0x127AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127AA8u;
    // 0x127aac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x127AA8u, 0x127AB0u)) {
        return;
    }
    ctx->pc = 0x127AB0u;
label_127ab0:
    // 0x127ab0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x127ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127ab4: 0xafc00c10  sw          $zero, 0xC10($fp)
    ctx->pc = 0x127ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3088), GPR_U32(ctx, 0));
    // 0x127ab8: 0xafc30084  sw          $v1, 0x84($fp)
    ctx->pc = 0x127ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 3));
    // 0x127abc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x127abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x127ac0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x127ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x127ac4: 0x2491c790  addiu       $s1, $a0, -0x3870
    ctx->pc = 0x127ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952848));
    // 0x127ac8: 0x8fb00018  lw          $s0, 0x18($sp)
    ctx->pc = 0x127ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127acc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x127accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x127ad0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x127ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x127ad4: 0x2442c5f8  addiu       $v0, $v0, -0x3A08
    ctx->pc = 0x127ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952440));
    // 0x127ad8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x127ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x127adc: 0x2463c608  addiu       $v1, $v1, -0x39F8
    ctx->pc = 0x127adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952456));
    // 0x127ae0: 0x24b0c7a0  addiu       $s0, $a1, -0x3860
    ctx->pc = 0x127ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952864));
    // 0x127ae4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x127ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x127ae8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x127ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x127aec: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x127aecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x127af0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x127af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127af4: 0x24c6c618  addiu       $a2, $a2, -0x39E8
    ctx->pc = 0x127af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952472));
    // 0x127af8: 0x24e7c628  addiu       $a3, $a3, -0x39D8
    ctx->pc = 0x127af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952488));
    // 0x127afc: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x127afcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x127b00: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x127b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x127b04: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x127b04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x127b08: 0xafc228fc  sw          $v0, 0x28FC($fp)
    ctx->pc = 0x127b08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10492), GPR_U32(ctx, 2));
    // 0x127b0c: 0x3c0a0069  lui         $t2, 0x69
    ctx->pc = 0x127b0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)105 << 16));
    // 0x127b10: 0xafc32904  sw          $v1, 0x2904($fp)
    ctx->pc = 0x127b10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10500), GPR_U32(ctx, 3));
    // 0x127b14: 0x3c0b0069  lui         $t3, 0x69
    ctx->pc = 0x127b14u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)105 << 16));
    // 0x127b18: 0x3c0c0069  lui         $t4, 0x69
    ctx->pc = 0x127b18u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)105 << 16));
    // 0x127b1c: 0x3c0d0069  lui         $t5, 0x69
    ctx->pc = 0x127b1cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)105 << 16));
    // 0x127b20: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x127b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x127b24: 0x3c0e0069  lui         $t6, 0x69
    ctx->pc = 0x127b24u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)105 << 16));
    // 0x127b28: 0x3c0f0069  lui         $t7, 0x69
    ctx->pc = 0x127b28u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)105 << 16));
    // 0x127b2c: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x127b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x127b30: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x127b30u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
    // 0x127b34: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x127b34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x127b38: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x127b38u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x127b3c: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x127b3cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x127b40: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x127b40u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x127b44: 0x3c180069  lui         $t8, 0x69
    ctx->pc = 0x127b44u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)105 << 16));
    // 0x127b48: 0x3c190069  lui         $t9, 0x69
    ctx->pc = 0x127b48u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)105 << 16));
    // 0x127b4c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x127b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x127b50: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x127b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x127b54: 0x2442c6d0  addiu       $v0, $v0, -0x3930
    ctx->pc = 0x127b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952656));
    // 0x127b58: 0x2463c6e8  addiu       $v1, $v1, -0x3918
    ctx->pc = 0x127b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952680));
    // 0x127b5c: 0x2508c638  addiu       $t0, $t0, -0x39C8
    ctx->pc = 0x127b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952504));
    // 0x127b60: 0x2529c640  addiu       $t1, $t1, -0x39C0
    ctx->pc = 0x127b60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952512));
    // 0x127b64: 0x254ac658  addiu       $t2, $t2, -0x39A8
    ctx->pc = 0x127b64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952536));
    // 0x127b68: 0x256bc670  addiu       $t3, $t3, -0x3990
    ctx->pc = 0x127b68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952560));
    // 0x127b6c: 0x258cc680  addiu       $t4, $t4, -0x3980
    ctx->pc = 0x127b6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952576));
    // 0x127b70: 0x25adc690  addiu       $t5, $t5, -0x3970
    ctx->pc = 0x127b70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294952592));
    // 0x127b74: 0x25cec6a0  addiu       $t6, $t6, -0x3960
    ctx->pc = 0x127b74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294952608));
    // 0x127b78: 0x25efc6b8  addiu       $t7, $t7, -0x3948
    ctx->pc = 0x127b78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294952632));
    // 0x127b7c: 0x2718c770  addiu       $t8, $t8, -0x3890
    ctx->pc = 0x127b7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294952816));
    // 0x127b80: 0x2739c780  addiu       $t9, $t9, -0x3880
    ctx->pc = 0x127b80u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294952832));
    // 0x127b84: 0x2652c6f8  addiu       $s2, $s2, -0x3908
    ctx->pc = 0x127b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952696));
    // 0x127b88: 0x2673c710  addiu       $s3, $s3, -0x38F0
    ctx->pc = 0x127b88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952720));
    // 0x127b8c: 0x2694c730  addiu       $s4, $s4, -0x38D0
    ctx->pc = 0x127b8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952752));
    // 0x127b90: 0x26b5c748  addiu       $s5, $s5, -0x38B8
    ctx->pc = 0x127b90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952776));
    // 0x127b94: 0x26d6c758  addiu       $s6, $s6, -0x38A8
    ctx->pc = 0x127b94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952792));
    // 0x127b98: 0x26f7c768  addiu       $s7, $s7, -0x3898
    ctx->pc = 0x127b98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952808));
    // 0x127b9c: 0xafc6290c  sw          $a2, 0x290C($fp)
    ctx->pc = 0x127b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10508), GPR_U32(ctx, 6));
    // 0x127ba0: 0xafc72914  sw          $a3, 0x2914($fp)
    ctx->pc = 0x127ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10516), GPR_U32(ctx, 7));
    // 0x127ba4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x127ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x127ba8: 0xafc2295c  sw          $v0, 0x295C($fp)
    ctx->pc = 0x127ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10588), GPR_U32(ctx, 2));
    // 0x127bac: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x127bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x127bb0: 0xafc32964  sw          $v1, 0x2964($fp)
    ctx->pc = 0x127bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10596), GPR_U32(ctx, 3));
    // 0x127bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bb8: 0xafc8291c  sw          $t0, 0x291C($fp)
    ctx->pc = 0x127bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10524), GPR_U32(ctx, 8));
    // 0x127bbc: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x127bbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127bc0: 0xafc92924  sw          $t1, 0x2924($fp)
    ctx->pc = 0x127bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10532), GPR_U32(ctx, 9));
    // 0x127bc4: 0xafca292c  sw          $t2, 0x292C($fp)
    ctx->pc = 0x127bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10540), GPR_U32(ctx, 10));
    // 0x127bc8: 0xafcb2934  sw          $t3, 0x2934($fp)
    ctx->pc = 0x127bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10548), GPR_U32(ctx, 11));
    // 0x127bcc: 0xafcc293c  sw          $t4, 0x293C($fp)
    ctx->pc = 0x127bccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10556), GPR_U32(ctx, 12));
    // 0x127bd0: 0xafcd2944  sw          $t5, 0x2944($fp)
    ctx->pc = 0x127bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10564), GPR_U32(ctx, 13));
    // 0x127bd4: 0xafce294c  sw          $t6, 0x294C($fp)
    ctx->pc = 0x127bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10572), GPR_U32(ctx, 14));
    // 0x127bd8: 0xafcf2954  sw          $t7, 0x2954($fp)
    ctx->pc = 0x127bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10580), GPR_U32(ctx, 15));
    // 0x127bdc: 0xafd8299c  sw          $t8, 0x299C($fp)
    ctx->pc = 0x127bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10652), GPR_U32(ctx, 24));
    // 0x127be0: 0xafd929a4  sw          $t9, 0x29A4($fp)
    ctx->pc = 0x127be0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10660), GPR_U32(ctx, 25));
    // 0x127be4: 0xafd2296c  sw          $s2, 0x296C($fp)
    ctx->pc = 0x127be4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10604), GPR_U32(ctx, 18));
    // 0x127be8: 0xafd32974  sw          $s3, 0x2974($fp)
    ctx->pc = 0x127be8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10612), GPR_U32(ctx, 19));
    // 0x127bec: 0xafd4297c  sw          $s4, 0x297C($fp)
    ctx->pc = 0x127becu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10620), GPR_U32(ctx, 20));
    // 0x127bf0: 0xafd52984  sw          $s5, 0x2984($fp)
    ctx->pc = 0x127bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10628), GPR_U32(ctx, 21));
    // 0x127bf4: 0xafd6298c  sw          $s6, 0x298C($fp)
    ctx->pc = 0x127bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10636), GPR_U32(ctx, 22));
    // 0x127bf8: 0xafd72994  sw          $s7, 0x2994($fp)
    ctx->pc = 0x127bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10644), GPR_U32(ctx, 23));
    // 0x127bfc: 0xafd129ac  sw          $s1, 0x29AC($fp)
    ctx->pc = 0x127bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10668), GPR_U32(ctx, 17));
    // 0x127c00: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x127C00u;
    SET_GPR_U32(ctx, 31, 0x127C08u);
    ctx->pc = 0x127C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C00u;
    // 0x127c04: 0xafd029b4  sw          $s0, 0x29B4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 10676), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x127C00u, 0x127C08u)) {
        return;
    }
    ctx->pc = 0x127C08u;
label_127c08:
    // 0x127c08: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x127c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x127c0c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x127c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x127c10: 0x24a58888  addiu       $a1, $a1, -0x7778
    ctx->pc = 0x127c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    // 0x127c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c18: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x127C18u;
    SET_GPR_U32(ctx, 31, 0x127C20u);
    ctx->pc = 0x127C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C18u;
    // 0x127c1c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x127C18u, 0x127C20u)) {
        return;
    }
    ctx->pc = 0x127C20u;
label_127c20:
    // 0x127c20: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x127c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x127c24: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x127c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x127c28: 0x24a58188  addiu       $a1, $a1, -0x7E78
    ctx->pc = 0x127c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
    // 0x127c2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c30: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x127C30u;
    SET_GPR_U32(ctx, 31, 0x127C38u);
    ctx->pc = 0x127C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C30u;
    // 0x127c34: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x127C30u, 0x127C38u)) {
        return;
    }
    ctx->pc = 0x127C38u;
label_127c38:
    // 0x127c38: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x127c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x127c3c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x127c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x127c40: 0x24a545f8  addiu       $a1, $a1, 0x45F8
    ctx->pc = 0x127c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17912));
    // 0x127c44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x127c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c48: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x127C48u;
    SET_GPR_U32(ctx, 31, 0x127C50u);
    ctx->pc = 0x127C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C48u;
    // 0x127c4c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x127C48u, 0x127C50u)) {
        return;
    }
    ctx->pc = 0x127C50u;
label_127c50:
    // 0x127c50: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x127c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x127c54: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x127c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x127c58: 0x8ca38348  lw          $v1, -0x7CB8($a1)
    ctx->pc = 0x127c58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338348u));
    // 0x127c5c: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x127c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x127c60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x127c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x127c64: 0xaca38348  sw          $v1, -0x7CB8($a1)
    ctx->pc = 0x127c64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x338348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338348u, _value); } while (0);
    // 0x127c68: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x127c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x127c6c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x127C6Cu;
    {
        const bool branch_taken_0x127c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127c6c) {
            ctx->pc = 0x127C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127C6Cu;
            // 0x127c70: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x127C80u;
            goto label_127c80;
        }
    }
    ctx->pc = 0x127C74u;
    // 0x127c74: 0xc05e29a  jal         func_178A68
    ctx->pc = 0x127C74u;
    SET_GPR_U32(ctx, 31, 0x127C7Cu);
    ctx->pc = 0x127C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C74u;
    // 0x127c78: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178A68u, 0x127C74u, 0x127C7Cu)) {
        return;
    }
    ctx->pc = 0x127C7Cu;
label_127c7c:
    // 0x127c7c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x127c7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_127c80:
    // 0x127c80: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x127c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x127c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x127c88: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x127c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x127c8c: 0xafc02bc4  sw          $zero, 0x2BC4($fp)
    ctx->pc = 0x127c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11204), GPR_U32(ctx, 0));
    // 0x127c90: 0xafc02bc8  sw          $zero, 0x2BC8($fp)
    ctx->pc = 0x127c90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11208), GPR_U32(ctx, 0));
    // 0x127c94: 0xafc02bcc  sw          $zero, 0x2BCC($fp)
    ctx->pc = 0x127c94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11212), GPR_U32(ctx, 0));
    // 0x127c98: 0xafc02bd0  sw          $zero, 0x2BD0($fp)
    ctx->pc = 0x127c98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11216), GPR_U32(ctx, 0));
    // 0x127c9c: 0xafc02bd4  sw          $zero, 0x2BD4($fp)
    ctx->pc = 0x127c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11220), GPR_U32(ctx, 0));
    // 0x127ca0: 0xafc02bd8  sw          $zero, 0x2BD8($fp)
    ctx->pc = 0x127ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11224), GPR_U32(ctx, 0));
    // 0x127ca4: 0xafc02bdc  sw          $zero, 0x2BDC($fp)
    ctx->pc = 0x127ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11228), GPR_U32(ctx, 0));
    // 0x127ca8: 0xafc02be0  sw          $zero, 0x2BE0($fp)
    ctx->pc = 0x127ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11232), GPR_U32(ctx, 0));
    // 0x127cac: 0xafc02be4  sw          $zero, 0x2BE4($fp)
    ctx->pc = 0x127cacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11236), GPR_U32(ctx, 0));
    // 0x127cb0: 0xafc02be8  sw          $zero, 0x2BE8($fp)
    ctx->pc = 0x127cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11240), GPR_U32(ctx, 0));
    // 0x127cb4: 0xafc02bec  sw          $zero, 0x2BEC($fp)
    ctx->pc = 0x127cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11244), GPR_U32(ctx, 0));
    // 0x127cb8: 0xafc028c0  sw          $zero, 0x28C0($fp)
    ctx->pc = 0x127cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10432), GPR_U32(ctx, 0));
    // 0x127cbc: 0xafc02bf0  sw          $zero, 0x2BF0($fp)
    ctx->pc = 0x127cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11248), GPR_U32(ctx, 0));
    // 0x127cc0: 0xafc02bf4  sw          $zero, 0x2BF4($fp)
    ctx->pc = 0x127cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11252), GPR_U32(ctx, 0));
    // 0x127cc4: 0xafc02bf8  sw          $zero, 0x2BF8($fp)
    ctx->pc = 0x127cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11256), GPR_U32(ctx, 0));
    // 0x127cc8: 0xafc02bfc  sw          $zero, 0x2BFC($fp)
    ctx->pc = 0x127cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11260), GPR_U32(ctx, 0));
    // 0x127ccc: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x127cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x127cd0: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x127cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x127cd4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x127cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127cd8: 0xb3c42c07  sdl         $a0, 0x2C07($fp)
    ctx->pc = 0x127cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 11271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x127cdc: 0xb7c42c00  sdr         $a0, 0x2C00($fp)
    ctx->pc = 0x127cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 11264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x127ce0: 0xafc52c08  sw          $a1, 0x2C08($fp)
    ctx->pc = 0x127ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11272), GPR_U32(ctx, 5));
    // 0x127ce4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x127ce4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x127ce8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x127ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x127cec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x127cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x127cf0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x127cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x127cf4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x127cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x127cf8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x127cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127cfc: 0xb3c32c17  sdl         $v1, 0x2C17($fp)
    ctx->pc = 0x127cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 11287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x127d00: 0xb7c32c10  sdr         $v1, 0x2C10($fp)
    ctx->pc = 0x127d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 11280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x127d04: 0xafc42c18  sw          $a0, 0x2C18($fp)
    ctx->pc = 0x127d04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11288), GPR_U32(ctx, 4));
    // 0x127d08: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x127d08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x127d0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x127d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x127d10: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x127d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x127d14: 0x6bb00007  ldl         $s0, 0x7($sp)
    ctx->pc = 0x127d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x127d18: 0x6fb00000  ldr         $s0, 0x0($sp)
    ctx->pc = 0x127d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x127d1c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x127d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127d20: 0xb3d02c27  sdl         $s0, 0x2C27($fp)
    ctx->pc = 0x127d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 11303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x127d24: 0xb7d02c20  sdr         $s0, 0x2C20($fp)
    ctx->pc = 0x127d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 11296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x127d28: 0xafc32c28  sw          $v1, 0x2C28($fp)
    ctx->pc = 0x127d28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 11304), GPR_U32(ctx, 3));
    // 0x127d2c: 0xafc028c4  sw          $zero, 0x28C4($fp)
    ctx->pc = 0x127d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10436), GPR_U32(ctx, 0));
    // 0x127d30: 0xafc028c8  sw          $zero, 0x28C8($fp)
    ctx->pc = 0x127d30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10440), GPR_U32(ctx, 0));
    // 0x127d34: 0xafde28f4  sw          $fp, 0x28F4($fp)
    ctx->pc = 0x127d34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10484), GPR_U32(ctx, 30));
    // 0x127d38: 0xafc028f0  sw          $zero, 0x28F0($fp)
    ctx->pc = 0x127d38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 10480), GPR_U32(ctx, 0));
    // 0x127d3c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x127d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x127d40: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x127d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x127d44: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x127d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x127d48: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x127d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x127d4c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x127d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x127d50: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x127d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x127d54: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x127d54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127d58: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x127d58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x127d5c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x127d5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127d60: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x127d60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127d64: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x127d64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127d68: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x127d68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127d6c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x127d6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127d70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x127d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127d74: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x127d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x127d78: 0x3e00008  jr          $ra
    ctx->pc = 0x127D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D78u;
        // 0x127d7c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127D80u;
}
