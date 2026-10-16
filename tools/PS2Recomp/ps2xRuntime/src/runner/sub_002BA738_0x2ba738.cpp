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

// Function: sub_002BA738
// Address: 0x2ba738 - 0x2bd540
void sub_002BA738_0x2ba738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA738_0x2ba738");
#endif

    switch (ctx->pc) {
        case 0x2ba7d4u: goto label_2ba7d4;
        case 0x2ba7fcu: goto label_2ba7fc;
        case 0x2ba904u: goto label_2ba904;
        case 0x2baa90u: goto label_2baa90;
        case 0x2baac8u: goto label_2baac8;
        case 0x2bab2cu: goto label_2bab2c;
        case 0x2bace4u: goto label_2bace4;
        case 0x2bad28u: goto label_2bad28;
        case 0x2bad8cu: goto label_2bad8c;
        case 0x2bae58u: goto label_2bae58;
        case 0x2baeb8u: goto label_2baeb8;
        case 0x2baf1cu: goto label_2baf1c;
        case 0x2bafacu: goto label_2bafac;
        case 0x2bb010u: goto label_2bb010;
        case 0x2bb120u: goto label_2bb120;
        case 0x2bb150u: goto label_2bb150;
        case 0x2bb1b8u: goto label_2bb1b8;
        case 0x2bb210u: goto label_2bb210;
        case 0x2bb268u: goto label_2bb268;
        case 0x2bb39cu: goto label_2bb39c;
        case 0x2bb3a8u: goto label_2bb3a8;
        case 0x2bb3b4u: goto label_2bb3b4;
        case 0x2bb434u: goto label_2bb434;
        case 0x2bb494u: goto label_2bb494;
        case 0x2bb6d0u: goto label_2bb6d0;
        case 0x2bb6f0u: goto label_2bb6f0;
        case 0x2bb728u: goto label_2bb728;
        case 0x2bb774u: goto label_2bb774;
        case 0x2bb7d4u: goto label_2bb7d4;
        case 0x2bb9f4u: goto label_2bb9f4;
        case 0x2bbd60u: goto label_2bbd60;
        case 0x2bbdc0u: goto label_2bbdc0;
        case 0x2bbe18u: goto label_2bbe18;
        case 0x2bbe70u: goto label_2bbe70;
        case 0x2bbec8u: goto label_2bbec8;
        case 0x2bbf20u: goto label_2bbf20;
        case 0x2bc1a8u: goto label_2bc1a8;
        case 0x2bc1b4u: goto label_2bc1b4;
        case 0x2bc1c0u: goto label_2bc1c0;
        case 0x2bc264u: goto label_2bc264;
        case 0x2bc2c4u: goto label_2bc2c4;
        case 0x2bc4e4u: goto label_2bc4e4;
        case 0x2bc7c8u: goto label_2bc7c8;
        case 0x2bc820u: goto label_2bc820;
        case 0x2bca18u: goto label_2bca18;
        case 0x2bca48u: goto label_2bca48;
        case 0x2bcaa0u: goto label_2bcaa0;
        case 0x2bcc98u: goto label_2bcc98;
        case 0x2bcd84u: goto label_2bcd84;
        case 0x2bcde4u: goto label_2bcde4;
        case 0x2bcf78u: goto label_2bcf78;
        case 0x2bcfa0u: goto label_2bcfa0;
        case 0x2bd230u: goto label_2bd230;
        case 0x2bd294u: goto label_2bd294;
        case 0x2bd3bcu: goto label_2bd3bc;
        case 0x2bd3e4u: goto label_2bd3e4;
        case 0x2bd408u: goto label_2bd408;
        case 0x2bd468u: goto label_2bd468;
        case 0x2bd4d4u: goto label_2bd4d4;
        case 0x2bd4dcu: goto label_2bd4dc;
        default: break;
    }

    ctx->pc = 0x2ba738u;

    // 0x2ba738: 0x27bdfaa0  addiu       $sp, $sp, -0x560
    ctx->pc = 0x2ba738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965920));
    // 0x2ba73c: 0x7fb004f0  sq          $s0, 0x4F0($sp)
    ctx->pc = 0x2ba73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 16));
    // 0x2ba740: 0x27a70440  addiu       $a3, $sp, 0x440
    ctx->pc = 0x2ba740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x2ba744: 0x7fb104e0  sq          $s1, 0x4E0($sp)
    ctx->pc = 0x2ba744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 17));
    // 0x2ba748: 0x27a80150  addiu       $t0, $sp, 0x150
    ctx->pc = 0x2ba748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2ba74c: 0x7fb204d0  sq          $s2, 0x4D0($sp)
    ctx->pc = 0x2ba74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 18));
    // 0x2ba750: 0x27b10210  addiu       $s1, $sp, 0x210
    ctx->pc = 0x2ba750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2ba754: 0x7fb404b0  sq          $s4, 0x4B0($sp)
    ctx->pc = 0x2ba754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 20));
    // 0x2ba758: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ba758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba75c: 0x7fb504a0  sq          $s5, 0x4A0($sp)
    ctx->pc = 0x2ba75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 21));
    // 0x2ba760: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ba760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba764: 0x7fb60490  sq          $s6, 0x490($sp)
    ctx->pc = 0x2ba764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 22));
    // 0x2ba768: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x2ba768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2ba76c: 0x7fb70480  sq          $s7, 0x480($sp)
    ctx->pc = 0x2ba76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 23));
    // 0x2ba770: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ba770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba774: 0xe7bf0558  swc1        $f31, 0x558($sp)
    ctx->pc = 0x2ba774u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
    // 0x2ba778: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ba778u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba77c: 0xe7be0550  swc1        $f30, 0x550($sp)
    ctx->pc = 0x2ba77cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
    // 0x2ba780: 0xe7bd0548  swc1        $f29, 0x548($sp)
    ctx->pc = 0x2ba780u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1352), bits); }
    // 0x2ba784: 0xe7bc0540  swc1        $f28, 0x540($sp)
    ctx->pc = 0x2ba784u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
    // 0x2ba788: 0x46006f46  mov.s       $f29, $f13
    ctx->pc = 0x2ba788u;
    ctx->f[29] = FPU_MOV_S(ctx->f[13]);
    // 0x2ba78c: 0xe7b70518  swc1        $f23, 0x518($sp)
    ctx->pc = 0x2ba78cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1304), bits); }
    // 0x2ba790: 0x460cef02  mul.s       $f28, $f29, $f12
    ctx->pc = 0x2ba790u;
    ctx->f[28] = FPU_MUL_S(ctx->f[29], ctx->f[12]);
    // 0x2ba794: 0x7fb304c0  sq          $s3, 0x4C0($sp)
    ctx->pc = 0x2ba794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 19));
    // 0x2ba798: 0x7fbe0470  sq          $fp, 0x470($sp)
    ctx->pc = 0x2ba798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 30));
    // 0x2ba79c: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x2ba79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
    // 0x2ba7a0: 0xe7bb0538  swc1        $f27, 0x538($sp)
    ctx->pc = 0x2ba7a0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
    // 0x2ba7a4: 0xe7ba0530  swc1        $f26, 0x530($sp)
    ctx->pc = 0x2ba7a4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
    // 0x2ba7a8: 0xe7b90528  swc1        $f25, 0x528($sp)
    ctx->pc = 0x2ba7a8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
    // 0x2ba7ac: 0xe7b80520  swc1        $f24, 0x520($sp)
    ctx->pc = 0x2ba7acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
    // 0x2ba7b0: 0xe7b60510  swc1        $f22, 0x510($sp)
    ctx->pc = 0x2ba7b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
    // 0x2ba7b4: 0xe7b50508  swc1        $f21, 0x508($sp)
    ctx->pc = 0x2ba7b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1288), bits); }
    // 0x2ba7b8: 0xe7b40500  swc1        $f20, 0x500($sp)
    ctx->pc = 0x2ba7b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1280), bits); }
    // 0x2ba7bc: 0x4480f000  mtc1        $zero, $f30
    ctx->pc = 0x2ba7bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x2ba7c0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x2ba7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2ba7c4: 0x4600f7c6  mov.s       $f31, $f30
    ctx->pc = 0x2ba7c4u;
    ctx->f[31] = FPU_MOV_S(ctx->f[30]);
    // 0x2ba7c8: 0x4600f5c6  mov.s       $f23, $f30
    ctx->pc = 0x2ba7c8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[30]);
    // 0x2ba7cc: 0xc0ae84e  jal         func_2BA138
    ctx->pc = 0x2BA7CCu;
    SET_GPR_U32(ctx, 31, 0x2BA7D4u);
    ctx->pc = 0x2BA7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7CCu;
    // 0x2ba7d0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BA138u, 0x2BA7CCu, 0x2BA7D4u)) {
        return;
    }
    ctx->pc = 0x2BA7D4u;
label_2ba7d4:
    // 0x2ba7d4: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x2ba7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2ba7d8: 0x27b00220  addiu       $s0, $sp, 0x220
    ctx->pc = 0x2ba7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2ba7dc: 0xe7bf044c  swc1        $f31, 0x44C($sp)
    ctx->pc = 0x2ba7dcu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1100), bits); }
    // 0x2ba7e0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2ba7e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba7e4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2ba7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2ba7e8: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x2ba7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x2ba7ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ba7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba7f0: 0x27a70444  addiu       $a3, $sp, 0x444
    ctx->pc = 0x2ba7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1092));
    // 0x2ba7f4: 0xc0ae84e  jal         func_2BA138
    ctx->pc = 0x2BA7F4u;
    SET_GPR_U32(ctx, 31, 0x2BA7FCu);
    ctx->pc = 0x2BA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7F4u;
    // 0x2ba7f8: 0x27a80190  addiu       $t0, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BA138u, 0x2BA7F4u, 0x2BA7FCu)) {
        return;
    }
    ctx->pc = 0x2BA7FCu;
label_2ba7fc:
    // 0x2ba7fc: 0xe7bf0448  swc1        $f31, 0x448($sp)
    ctx->pc = 0x2ba7fcu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
    // 0x2ba800: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ba800u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba804: 0xc7bf044c  lwc1        $f31, 0x44C($sp)
    ctx->pc = 0x2ba804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2ba808: 0xe7bf0450  swc1        $f31, 0x450($sp)
    ctx->pc = 0x2ba808u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
    // 0x2ba80c: 0xe7bf0454  swc1        $f31, 0x454($sp)
    ctx->pc = 0x2ba80cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
    // 0x2ba810: 0x8fa20440  lw          $v0, 0x440($sp)
    ctx->pc = 0x2ba810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x2ba814: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2ba814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba818: 0xc7a40180  lwc1        $f4, 0x180($sp)
    ctx->pc = 0x2ba818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ba81c: 0xc7a50184  lwc1        $f5, 0x184($sp)
    ctx->pc = 0x2ba81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ba820: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2ba820u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ba824: 0xc7a30188  lwc1        $f3, 0x188($sp)
    ctx->pc = 0x2ba824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ba828: 0xe7a10280  swc1        $f1, 0x280($sp)
    ctx->pc = 0x2ba828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x2ba82c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2ba82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba830: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2ba830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2ba834: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x2ba834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
    // 0x2ba838: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2ba838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba83c: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2ba83cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2ba840: 0xe7a10288  swc1        $f1, 0x288($sp)
    ctx->pc = 0x2ba840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x2ba844: 0x8fa20444  lw          $v0, 0x444($sp)
    ctx->pc = 0x2ba844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
    // 0x2ba848: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ba848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba84c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2ba84cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2ba850: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x2ba850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x2ba854: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ba854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba858: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x2ba858u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2ba85c: 0xe7a10294  swc1        $f1, 0x294($sp)
    ctx->pc = 0x2ba85cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
    // 0x2ba860: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ba860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba864: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2ba864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ba868: 0xe7a00298  swc1        $f0, 0x298($sp)
    ctx->pc = 0x2ba868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x2ba86c: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x2ba86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba870: 0xc7a201c4  lwc1        $f2, 0x1C4($sp)
    ctx->pc = 0x2ba870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba874: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2ba874u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ba878: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2ba878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba87c: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x2ba87cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x2ba880: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2ba880u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ba884: 0xe7a40270  swc1        $f4, 0x270($sp)
    ctx->pc = 0x2ba884u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x2ba888: 0xe7a50274  swc1        $f5, 0x274($sp)
    ctx->pc = 0x2ba888u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x2ba88c: 0xe7a30278  swc1        $f3, 0x278($sp)
    ctx->pc = 0x2ba88cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x2ba890: 0x8e8300f8  lw          $v1, 0xF8($s4)
    ctx->pc = 0x2ba890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
    // 0x2ba894: 0x8e8200b8  lw          $v0, 0xB8($s4)
    ctx->pc = 0x2ba894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x2ba898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ba898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ba89c: 0x8e8400ac  lw          $a0, 0xAC($s4)
    ctx->pc = 0x2ba89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x2ba8a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ba8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba8a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ba8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ba8a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ba8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ba8ac: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x2ba8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x2ba8b0: 0x8e8300f8  lw          $v1, 0xF8($s4)
    ctx->pc = 0x2ba8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
    // 0x2ba8b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ba8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ba8b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ba8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ba8bc: 0xae8200bc  sw          $v0, 0xBC($s4)
    ctx->pc = 0x2ba8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 2));
    // 0x2ba8c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ba8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ba8c4: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA8C4u;
    {
        const bool branch_taken_0x2ba8c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8C4u;
        // 0x2ba8c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8c4) {
            ctx->pc = 0x2BA8D0u;
            goto label_2ba8d0;
        }
    }
    ctx->pc = 0x2BA8CCu;
    // 0x2ba8cc: 0x86e20020  lh          $v0, 0x20($s7)
    ctx->pc = 0x2ba8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 32)));
label_2ba8d0:
    // 0x2ba8d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ba8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ba8d4: 0x8e8300ac  lw          $v1, 0xAC($s4)
    ctx->pc = 0x2ba8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x2ba8d8: 0x8e8200f8  lw          $v0, 0xF8($s4)
    ctx->pc = 0x2ba8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
    // 0x2ba8dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ba8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ba8e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba8e4: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA8E4u;
    {
        const bool branch_taken_0x2ba8e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8E4u;
        // 0x2ba8e8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8e4) {
            ctx->pc = 0x2BA8F0u;
            goto label_2ba8f0;
        }
    }
    ctx->pc = 0x2BA8ECu;
    // 0x2ba8ec: 0x86c30020  lh          $v1, 0x20($s6)
    ctx->pc = 0x2ba8ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 32)));
label_2ba8f0:
    // 0x2ba8f0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2ba8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2ba8f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ba8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba8f8: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x2ba8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2ba8fc: 0xc0ae948  jal         func_2BA520
    ctx->pc = 0x2BA8FCu;
    SET_GPR_U32(ctx, 31, 0x2BA904u);
    ctx->pc = 0x2BA900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA8FCu;
    // 0x2ba900: 0x27a70240  addiu       $a3, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BA520u, 0x2BA8FCu, 0x2BA904u)) {
        return;
    }
    ctx->pc = 0x2BA904u;
label_2ba904:
    // 0x2ba904: 0xc7a10230  lwc1        $f1, 0x230($sp)
    ctx->pc = 0x2ba904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ba908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ba90c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ba90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ba910: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ba910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ba914: 0xc7a50234  lwc1        $f5, 0x234($sp)
    ctx->pc = 0x2ba914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ba918: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x2ba918u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ba91c: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2ba91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba920: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x2ba920u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2ba924: 0xc7a3023c  lwc1        $f3, 0x23C($sp)
    ctx->pc = 0x2ba924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ba928: 0x460001c2  mul.s       $f7, $f0, $f0
    ctx->pc = 0x2ba928u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ba92c: 0xe7a602c0  swc1        $f6, 0x2C0($sp)
    ctx->pc = 0x2ba92cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
    // 0x2ba930: 0x46001ac2  mul.s       $f11, $f3, $f0
    ctx->pc = 0x2ba930u;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ba934: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x2ba934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x2ba938: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2ba938u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2ba93c: 0xe7a202c4  swc1        $f2, 0x2C4($sp)
    ctx->pc = 0x2ba93cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
    // 0x2ba940: 0x46011a82  mul.s       $f10, $f3, $f1
    ctx->pc = 0x2ba940u;
    ctx->f[10] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ba944: 0xe7a702c8  swc1        $f7, 0x2C8($sp)
    ctx->pc = 0x2ba944u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
    // 0x2ba948: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ba948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ba94c: 0xe7ab02e8  swc1        $f11, 0x2E8($sp)
    ctx->pc = 0x2ba94cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
    // 0x2ba950: 0x46023200  add.s       $f8, $f6, $f2
    ctx->pc = 0x2ba950u;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2ba954: 0xe7a402d0  swc1        $f4, 0x2D0($sp)
    ctx->pc = 0x2ba954u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x2ba958: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2ba958u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2ba95c: 0xe7aa02e0  swc1        $f10, 0x2E0($sp)
    ctx->pc = 0x2ba95cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x2ba960: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2ba960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2ba964: 0xe7a002d4  swc1        $f0, 0x2D4($sp)
    ctx->pc = 0x2ba964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
    // 0x2ba968: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2ba968u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x2ba96c: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x2ba96cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x2ba970: 0xe7a302e4  swc1        $f3, 0x2E4($sp)
    ctx->pc = 0x2ba970u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
    // 0x2ba974: 0x46030240  add.s       $f9, $f0, $f3
    ctx->pc = 0x2ba974u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ba978: 0xe7a102d8  swc1        $f1, 0x2D8($sp)
    ctx->pc = 0x2ba978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
    // 0x2ba97c: 0x460b0941  sub.s       $f5, $f1, $f11
    ctx->pc = 0x2ba97cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x2ba980: 0x460a21c1  sub.s       $f7, $f4, $f10
    ctx->pc = 0x2ba980u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x2ba984: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2ba984u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2ba988: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x2ba988u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x2ba98c: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x2ba98cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x2ba990: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x2ba990u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x2ba994: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2ba994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2ba998: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x2ba998u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x2ba99c: 0x46086201  sub.s       $f8, $f12, $f8
    ctx->pc = 0x2ba99cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x2ba9a0: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x2ba9a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2ba9a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ba9a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2ba9a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ba9a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2ba9ac: 0xe7a801f8  swc1        $f8, 0x1F8($sp)
    ctx->pc = 0x2ba9acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x2ba9b0: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x2ba9b0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x2ba9b4: 0xe7a201d0  swc1        $f2, 0x1D0($sp)
    ctx->pc = 0x2ba9b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2ba9b8: 0x46066301  sub.s       $f12, $f12, $f6
    ctx->pc = 0x2ba9b8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x2ba9bc: 0xe7a101d4  swc1        $f1, 0x1D4($sp)
    ctx->pc = 0x2ba9bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x2ba9c0: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2ba9c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2ba9c4: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2ba9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2ba9c8: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x2ba9c8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x2ba9cc: 0xe7a501e0  swc1        $f5, 0x1E0($sp)
    ctx->pc = 0x2ba9ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2ba9d0: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x2ba9d0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x2ba9d4: 0xe7ac01e4  swc1        $f12, 0x1E4($sp)
    ctx->pc = 0x2ba9d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x2ba9d8: 0xe7a401e8  swc1        $f4, 0x1E8($sp)
    ctx->pc = 0x2ba9d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2ba9dc: 0xe7a901f0  swc1        $f9, 0x1F0($sp)
    ctx->pc = 0x2ba9dcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x2ba9e0: 0xe7a701f4  swc1        $f7, 0x1F4($sp)
    ctx->pc = 0x2ba9e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x2ba9e4: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x2ba9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba9e8: 0xc7a40190  lwc1        $f4, 0x190($sp)
    ctx->pc = 0x2ba9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ba9ec: 0xc7a301a0  lwc1        $f3, 0x1A0($sp)
    ctx->pc = 0x2ba9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ba9f0: 0xc7a70274  lwc1        $f7, 0x274($sp)
    ctx->pc = 0x2ba9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ba9f4: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x2ba9f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2ba9f8: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2ba9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba9fc: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2ba9fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2baa00: 0xc7a90194  lwc1        $f9, 0x194($sp)
    ctx->pc = 0x2baa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2baa04: 0xc7a801a4  lwc1        $f8, 0x1A4($sp)
    ctx->pc = 0x2baa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2baa08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2baa08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2baa0c: 0xc7a601b4  lwc1        $f6, 0x1B4($sp)
    ctx->pc = 0x2baa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2baa10: 0x46093a42  mul.s       $f9, $f7, $f9
    ctx->pc = 0x2baa10u;
    ctx->f[9] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x2baa14: 0x46083a02  mul.s       $f8, $f7, $f8
    ctx->pc = 0x2baa14u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x2baa18: 0xc7a20278  lwc1        $f2, 0x278($sp)
    ctx->pc = 0x2baa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2baa1c: 0x460639c2  mul.s       $f7, $f7, $f6
    ctx->pc = 0x2baa1cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x2baa20: 0xc7a50198  lwc1        $f5, 0x198($sp)
    ctx->pc = 0x2baa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2baa24: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2baa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2baa28: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x2baa28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
    // 0x2baa2c: 0xc7a601a8  lwc1        $f6, 0x1A8($sp)
    ctx->pc = 0x2baa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2baa30: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x2baa30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2baa34: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2baa34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2baa38: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2baa38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2baa3c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x2baa3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x2baa40: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2baa40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2baa44: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2baa44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2baa48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2baa48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2baa4c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2baa4cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2baa50: 0xe7a40200  swc1        $f4, 0x200($sp)
    ctx->pc = 0x2baa50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2baa54: 0xe7a10208  swc1        $f1, 0x208($sp)
    ctx->pc = 0x2baa54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x2baa58: 0xe7a30204  swc1        $f3, 0x204($sp)
    ctx->pc = 0x2baa58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x2baa5c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2baa5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2baa60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2baa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2baa64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2baa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2baa68: 0xc4553a6c  lwc1        $f21, 0x3A6C($v0)
    ctx->pc = 0x2baa68u;
    { uint32_t bits = FAST_READ32(0x6B3A6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2baa6c: 0x3c1e006b  lui         $fp, 0x6B
    ctx->pc = 0x2baa6cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)107 << 16));
    // 0x2baa70: 0xc4743a70  lwc1        $f20, 0x3A70($v1)
    ctx->pc = 0x2baa70u;
    { uint32_t bits = FAST_READ32(0x6B3A70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2baa74: 0x27a202b0  addiu       $v0, $sp, 0x2B0
    ctx->pc = 0x2baa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x2baa78: 0x27a30270  addiu       $v1, $sp, 0x270
    ctx->pc = 0x2baa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2baa7c: 0xafa2045c  sw          $v0, 0x45C($sp)
    ctx->pc = 0x2baa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 2));
    // 0x2baa80: 0xafa30458  sw          $v1, 0x458($sp)
    ctx->pc = 0x2baa80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1112), GPR_U32(ctx, 3));
    // 0x2baa84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2baa84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baa88: 0xc7968170  lwc1        $f22, -0x7E90($gp)
    ctx->pc = 0x2baa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2baa8c: 0x0  nop
    ctx->pc = 0x2baa8cu;
    // NOP
label_2baa90:
    // 0x2baa90: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2baa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2baa94: 0x98840  sll         $s1, $t1, 1
    ctx->pc = 0x2baa94u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2baa98: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2baa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2baa9c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2baa9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2baaa0: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x2BAAA0u;
    {
        const bool branch_taken_0x2baaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAA0u;
        // 0x2baaa4: 0x24f30001  addiu       $s3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baaa0) {
            ctx->pc = 0x2BACE4u;
            goto label_2bace4;
        }
    }
    ctx->pc = 0x2BAAA8u;
    // 0x2baaa8: 0x27c4e668  addiu       $a0, $fp, -0x1998
    ctx->pc = 0x2baaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960744));
    // 0x2baaac: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x2baaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2baab0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BAAB0u;
    {
        const bool branch_taken_0x2baab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAB0u;
        // 0x2baab4: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baab0) {
            ctx->pc = 0x2BAB1Cu;
            goto label_2bab1c;
        }
    }
    ctx->pc = 0x2BAAB8u;
    // 0x2baab8: 0x26b00001  addiu       $s0, $s5, 0x1
    ctx->pc = 0x2baab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2baabc: 0x24860060  addiu       $a2, $a0, 0x60
    ctx->pc = 0x2baabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2baac0: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x2baac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2baac4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2baac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2baac8:
    // 0x2baac8: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x2baac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2baacc: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x2baaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2baad0: 0x6889000f  ldl         $t1, 0xF($a0)
    ctx->pc = 0x2baad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2baad4: 0x6c890008  ldr         $t1, 0x8($a0)
    ctx->pc = 0x2baad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2baad8: 0x688a0017  ldl         $t2, 0x17($a0)
    ctx->pc = 0x2baad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2baadc: 0x6c8a0010  ldr         $t2, 0x10($a0)
    ctx->pc = 0x2baadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2baae0: 0x688b001f  ldl         $t3, 0x1F($a0)
    ctx->pc = 0x2baae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2baae4: 0x6c8b0018  ldr         $t3, 0x18($a0)
    ctx->pc = 0x2baae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2baae8: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x2baae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baaec: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x2baaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baaf0: 0xb069000f  sdl         $t1, 0xF($v1)
    ctx->pc = 0x2baaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baaf4: 0xb4690008  sdr         $t1, 0x8($v1)
    ctx->pc = 0x2baaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baaf8: 0xb06a0017  sdl         $t2, 0x17($v1)
    ctx->pc = 0x2baaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baafc: 0xb46a0010  sdr         $t2, 0x10($v1)
    ctx->pc = 0x2baafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bab00: 0xb06b001f  sdl         $t3, 0x1F($v1)
    ctx->pc = 0x2bab00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bab04: 0xb46b0018  sdr         $t3, 0x18($v1)
    ctx->pc = 0x2bab04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bab08: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2bab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bab0c: 0x1486ffee  bne         $a0, $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BAB0Cu;
    {
        const bool branch_taken_0x2bab0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BAB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB0Cu;
        // 0x2bab10: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab0c) {
            ctx->pc = 0x2BAAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2baac8;
        }
    }
    ctx->pc = 0x2BAB14u;
    // 0x2bab14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BAB14u;
    {
        const bool branch_taken_0x2bab14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bab14) {
            ctx->pc = 0x2BAB58u;
            goto label_2bab58;
        }
    }
    ctx->pc = 0x2BAB1Cu;
label_2bab1c:
    // 0x2bab1c: 0x26b00001  addiu       $s0, $s5, 0x1
    ctx->pc = 0x2bab1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bab20: 0x24860060  addiu       $a2, $a0, 0x60
    ctx->pc = 0x2bab20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2bab24: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x2bab24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2bab28: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2bab28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2bab2c:
    // 0x2bab2c: 0xdc8c0000  ld          $t4, 0x0($a0)
    ctx->pc = 0x2bab2cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bab30: 0xdc8d0008  ld          $t5, 0x8($a0)
    ctx->pc = 0x2bab30u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bab34: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x2bab34u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bab38: 0xdc890018  ld          $t1, 0x18($a0)
    ctx->pc = 0x2bab38u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2bab3c: 0xfc6c0000  sd          $t4, 0x0($v1)
    ctx->pc = 0x2bab3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 12));
    // 0x2bab40: 0xfc6d0008  sd          $t5, 0x8($v1)
    ctx->pc = 0x2bab40u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 13));
    // 0x2bab44: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x2bab44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x2bab48: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x2bab48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x2bab4c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2bab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bab50: 0x1486fff6  bne         $a0, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BAB50u;
    {
        const bool branch_taken_0x2bab50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB50u;
        // 0x2bab54: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab50) {
            ctx->pc = 0x2BAB2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bab2c;
        }
    }
    ctx->pc = 0x2BAB58u;
label_2bab58:
    // 0x2bab58: 0x688a0007  ldl         $t2, 0x7($a0)
    ctx->pc = 0x2bab58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bab5c: 0x6c8a0000  ldr         $t2, 0x0($a0)
    ctx->pc = 0x2bab5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bab60: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x2bab60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bab64: 0xb06a0007  sdl         $t2, 0x7($v1)
    ctx->pc = 0x2bab64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bab68: 0xb46a0000  sdr         $t2, 0x0($v1)
    ctx->pc = 0x2bab68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bab6c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2bab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bab70: 0xac6b0008  sw          $t3, 0x8($v1)
    ctx->pc = 0x2bab70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 11));
    // 0x2bab74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2bab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bab78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bab78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bab7c: 0x12e00028  beqz        $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BAB7Cu;
    {
        const bool branch_taken_0x2bab7c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB7Cu;
        // 0x2bab80: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab7c) {
            ctx->pc = 0x2BAC20u;
            goto label_2bac20;
        }
    }
    ctx->pc = 0x2BAB84u;
    // 0x2bab84: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2bab84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2bab88: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2bab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2bab8c: 0xc4610190  lwc1        $f1, 0x190($v1)
    ctx->pc = 0x2bab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bab90: 0x24620190  addiu       $v0, $v1, 0x190
    ctx->pc = 0x2bab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x2bab94: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bab94u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bab98: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2bab98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bab9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2bab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2baba0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2baba0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2baba4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2baba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2baba8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2baba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2babac: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2babacu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2babb0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2babb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2babb4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2babb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2babb8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2babb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2babbc: 0xc7a30288  lwc1        $f3, 0x288($sp)
    ctx->pc = 0x2babbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2babc0: 0xc7a50284  lwc1        $f5, 0x284($sp)
    ctx->pc = 0x2babc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2babc4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2babc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2babc8: 0xc7a40280  lwc1        $f4, 0x280($sp)
    ctx->pc = 0x2babc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2babcc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2babccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2babd0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2babd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2babd4: 0xe7a202a0  swc1        $f2, 0x2A0($sp)
    ctx->pc = 0x2babd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2babd8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2babd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2babdc: 0xc4610190  lwc1        $f1, 0x190($v1)
    ctx->pc = 0x2babdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2babe0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2babe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2babe4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2babe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2babe8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2babe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2babec: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x2babecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
    // 0x2babf0: 0xc4610190  lwc1        $f1, 0x190($v1)
    ctx->pc = 0x2babf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2babf4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2babf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2babf8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2babf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2babfc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2babfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2bac00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bac00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bac04: 0xe7a102a8  swc1        $f1, 0x2A8($sp)
    ctx->pc = 0x2bac04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2bac08: 0x6ba202a7  ldl         $v0, 0x2A7($sp)
    ctx->pc = 0x2bac08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2bac0c: 0x6fa202a0  ldr         $v0, 0x2A0($sp)
    ctx->pc = 0x2bac0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2bac10: 0x8fa302a8  lw          $v1, 0x2A8($sp)
    ctx->pc = 0x2bac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x2bac14: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2bac14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bac18: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2bac18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bac1c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2bac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2bac20:
    // 0x2bac20: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BAC20u;
    {
        const bool branch_taken_0x2bac20 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC20u;
        // 0x2bac24: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac20) {
            ctx->pc = 0x2BACB8u;
            goto label_2bacb8;
        }
    }
    ctx->pc = 0x2BAC28u;
    // 0x2bac28: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2bac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2bac2c: 0x68460197  ldl         $a2, 0x197($v0)
    ctx->pc = 0x2bac2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bac30: 0x6c460190  ldr         $a2, 0x190($v0)
    ctx->pc = 0x2bac30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bac34: 0x8c470198  lw          $a3, 0x198($v0)
    ctx->pc = 0x2bac34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x2bac38: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x2bac38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bac3c: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x2bac3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bac40: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x2bac40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x2bac44: 0x24430190  addiu       $v1, $v0, 0x190
    ctx->pc = 0x2bac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2bac48: 0xc7a40294  lwc1        $f4, 0x294($sp)
    ctx->pc = 0x2bac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bac4c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bac50: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2bac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bac54: 0xc7a10298  lwc1        $f1, 0x298($sp)
    ctx->pc = 0x2bac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bac58: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2bac58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2bac5c: 0xc7a30290  lwc1        $f3, 0x290($sp)
    ctx->pc = 0x2bac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bac60: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2bac60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bac64: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bac64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bac68: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2bac68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2bac6c: 0xc4420190  lwc1        $f2, 0x190($v0)
    ctx->pc = 0x2bac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bac70: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bac74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bac74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bac78: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2bac78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bac7c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bac7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bac80: 0xe7a102a4  swc1        $f1, 0x2A4($sp)
    ctx->pc = 0x2bac80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
    // 0x2bac84: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2bac84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bac88: 0xc4410190  lwc1        $f1, 0x190($v0)
    ctx->pc = 0x2bac88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bac8c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2bac8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bac90: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2bac90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2bac94: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2bac94u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2bac98: 0xe7a302a8  swc1        $f3, 0x2A8($sp)
    ctx->pc = 0x2bac98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2bac9c: 0x6baa02a7  ldl         $t2, 0x2A7($sp)
    ctx->pc = 0x2bac9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2baca0: 0x6faa02a0  ldr         $t2, 0x2A0($sp)
    ctx->pc = 0x2baca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2baca4: 0x8fab02a8  lw          $t3, 0x2A8($sp)
    ctx->pc = 0x2baca4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x2baca8: 0xb3aa0037  sdl         $t2, 0x37($sp)
    ctx->pc = 0x2baca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bacac: 0xb7aa0030  sdr         $t2, 0x30($sp)
    ctx->pc = 0x2bacacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bacb0: 0xafab0038  sw          $t3, 0x38($sp)
    ctx->pc = 0x2bacb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 11));
    // 0x2bacb4: 0x0  nop
    ctx->pc = 0x2bacb4u;
    // NOP
label_2bacb8:
    // 0x2bacb8: 0xe7b5005c  swc1        $f21, 0x5C($sp)
    ctx->pc = 0x2bacb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2bacbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bacbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bacc0: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x2bacc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bacc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bacc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bacc8: 0xe7b50054  swc1        $f21, 0x54($sp)
    ctx->pc = 0x2bacc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2baccc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2bacccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bacd0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2bacd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bacd4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2bacd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2bacd8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2bacd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2bacdc: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BACDCu;
    SET_GPR_U32(ctx, 31, 0x2BACE4u);
    ctx->pc = 0x2BACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACDCu;
    // 0x2bace0: 0xe7b60060  swc1        $f22, 0x60($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BACDCu, 0x2BACE4u)) {
        return;
    }
    ctx->pc = 0x2BACE4u;
label_2bace4:
    // 0x2bace4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2bace4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bace8: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x2bace8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2bacec: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x2BACECu;
    {
        const bool branch_taken_0x2bacec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACECu;
        // 0x2bacf0: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacec) {
            ctx->pc = 0x2BAA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2baa90;
        }
    }
    ctx->pc = 0x2BACF4u;
    // 0x2bacf4: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bacf8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2bacf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2bacfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bacfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bad00: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2BAD00u;
    {
        const bool branch_taken_0x2bad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD00u;
        // 0x2bad04: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad00) {
            ctx->pc = 0x2BAE58u;
            goto label_2bae58;
        }
    }
    ctx->pc = 0x2BAD08u;
    // 0x2bad08: 0x2463e668  addiu       $v1, $v1, -0x1998
    ctx->pc = 0x2bad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
    // 0x2bad0c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2bad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2bad10: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BAD10u;
    {
        const bool branch_taken_0x2bad10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD10u;
        // 0x2bad14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad10) {
            ctx->pc = 0x2BAD7Cu;
            goto label_2bad7c;
        }
    }
    ctx->pc = 0x2BAD18u;
    // 0x2bad18: 0x26b00001  addiu       $s0, $s5, 0x1
    ctx->pc = 0x2bad18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bad1c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2bad20: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bad20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2bad24: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2bad24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2bad28:
    // 0x2bad28: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2bad28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bad2c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2bad2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bad30: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2bad30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bad34: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2bad34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bad38: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x2bad38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bad3c: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x2bad3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bad40: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x2bad40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bad44: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x2bad44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bad48: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2bad48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bad4c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2bad4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bad50: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2bad50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bad54: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2bad54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bad58: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x2bad58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bad5c: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x2bad5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bad60: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x2bad60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bad64: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x2bad64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bad68: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bad68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bad6c: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BAD6Cu;
    {
        const bool branch_taken_0x2bad6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BAD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD6Cu;
        // 0x2bad70: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad6c) {
            ctx->pc = 0x2BAD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bad28;
        }
    }
    ctx->pc = 0x2BAD74u;
    // 0x2bad74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BAD74u;
    {
        const bool branch_taken_0x2bad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bad74) {
            ctx->pc = 0x2BADB8u;
            goto label_2badb8;
        }
    }
    ctx->pc = 0x2BAD7Cu;
label_2bad7c:
    // 0x2bad7c: 0x26b00001  addiu       $s0, $s5, 0x1
    ctx->pc = 0x2bad7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bad80: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2bad84: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bad84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2bad88: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2bad88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2bad8c:
    // 0x2bad8c: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x2bad8cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bad90: 0xdc6c0008  ld          $t4, 0x8($v1)
    ctx->pc = 0x2bad90u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bad94: 0xdc6d0010  ld          $t5, 0x10($v1)
    ctx->pc = 0x2bad94u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bad98: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x2bad98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bad9c: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x2bad9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x2bada0: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x2bada0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x2bada4: 0xfc8d0010  sd          $t5, 0x10($a0)
    ctx->pc = 0x2bada4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 13));
    // 0x2bada8: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x2bada8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x2badac: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2badacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2badb0: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BADB0u;
    {
        const bool branch_taken_0x2badb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADB0u;
        // 0x2badb4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badb0) {
            ctx->pc = 0x2BAD8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bad8c;
        }
    }
    ctx->pc = 0x2BADB8u;
label_2badb8:
    // 0x2badb8: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2badb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2badbc: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2badbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2badc0: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x2badc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2badc4: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x2badc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2badc8: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x2badc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2badcc: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x2badccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x2badd0: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x2badd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2badd4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2badd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2badd8: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BADD8u;
    {
        const bool branch_taken_0x2badd8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADD8u;
        // 0x2baddc: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badd8) {
            ctx->pc = 0x2BADF8u;
            goto label_2badf8;
        }
    }
    ctx->pc = 0x2BADE0u;
    // 0x2bade0: 0x6bac0253  ldl         $t4, 0x253($sp)
    ctx->pc = 0x2bade0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bade4: 0x6fac024c  ldr         $t4, 0x24C($sp)
    ctx->pc = 0x2bade4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bade8: 0x8fad0254  lw          $t5, 0x254($sp)
    ctx->pc = 0x2bade8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x2badec: 0xb3ac0017  sdl         $t4, 0x17($sp)
    ctx->pc = 0x2badecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2badf0: 0xb7ac0010  sdr         $t4, 0x10($sp)
    ctx->pc = 0x2badf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2badf4: 0xafad0018  sw          $t5, 0x18($sp)
    ctx->pc = 0x2badf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 13));
label_2badf8:
    // 0x2badf8: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BADF8u;
    {
        const bool branch_taken_0x2badf8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADF8u;
        // 0x2badfc: 0xc7a0024c  lwc1        $f0, 0x24C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badf8) {
            ctx->pc = 0x2BAE20u;
            goto label_2bae20;
        }
    }
    ctx->pc = 0x2BAE00u;
    // 0x2bae00: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x2bae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bae04: 0xc7a20254  lwc1        $f2, 0x254($sp)
    ctx->pc = 0x2bae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bae08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bae08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bae0c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bae0cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bae10: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bae10u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bae14: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bae18: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bae18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bae1c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2bae1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2bae20:
    // 0x2bae20: 0xc4e23a6c  lwc1        $f2, 0x3A6C($a3)
    ctx->pc = 0x2bae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 14956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bae24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae28: 0xc5013a70  lwc1        $f1, 0x3A70($t0)
    ctx->pc = 0x2bae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 14960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bae2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bae2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae30: 0xc7808174  lwc1        $f0, -0x7E8C($gp)
    ctx->pc = 0x2bae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bae34: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2bae34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae38: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2bae38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bae3c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2bae3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bae40: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2bae40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bae44: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x2bae44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2bae48: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2bae48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bae4c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2bae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2bae50: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BAE50u;
    SET_GPR_U32(ctx, 31, 0x2BAE58u);
    ctx->pc = 0x2BAE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE50u;
    // 0x2bae54: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BAE50u, 0x2BAE58u)) {
        return;
    }
    ctx->pc = 0x2BAE58u;
label_2bae58:
    // 0x2bae58: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bae5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2bae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bae60: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2bae60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2bae64: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x2bae64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x2bae68: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BAE68u;
    {
        const bool branch_taken_0x2bae68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BAE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE68u;
        // 0x2bae6c: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae68) {
            ctx->pc = 0x2BAE94u;
            goto label_2bae94;
        }
    }
    ctx->pc = 0x2BAE70u;
    // 0x2bae70: 0x5440014e  bnel        $v0, $zero, . + 4 + (0x14E << 2)
    ctx->pc = 0x2BAE70u;
    {
        const bool branch_taken_0x2bae70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bae70) {
            ctx->pc = 0x2BAE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAE70u;
            // 0x2bae74: 0x8fa4045c  lw          $a0, 0x45C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB3ACu;
            goto label_2bb3ac;
        }
    }
    ctx->pc = 0x2BAE78u;
    // 0x2bae78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bae7c: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2BAE7Cu;
    {
        const bool branch_taken_0x2bae7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE7Cu;
        // 0x2bae80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae7c) {
            ctx->pc = 0x2BAF88u;
            goto label_2baf88;
        }
    }
    ctx->pc = 0x2BAE84u;
    // 0x2bae84: 0x106200a8  beq         $v1, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2BAE84u;
    {
        const bool branch_taken_0x2bae84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE84u;
        // 0x2bae88: 0x8fa4045c  lw          $a0, 0x45C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae84) {
            ctx->pc = 0x2BB128u;
            goto label_2bb128;
        }
    }
    ctx->pc = 0x2BAE8Cu;
    // 0x2bae8c: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x2BAE8Cu;
    {
        const bool branch_taken_0x2bae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae8c) {
            ctx->pc = 0x2BB3ACu;
            goto label_2bb3ac;
        }
    }
    ctx->pc = 0x2BAE94u;
label_2bae94:
    // 0x2bae94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bae94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2bae98: 0x2463e668  addiu       $v1, $v1, -0x1998
    ctx->pc = 0x2bae98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
    // 0x2bae9c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2bae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2baea0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BAEA0u;
    {
        const bool branch_taken_0x2baea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEA0u;
        // 0x2baea4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baea0) {
            ctx->pc = 0x2BAF0Cu;
            goto label_2baf0c;
        }
    }
    ctx->pc = 0x2BAEA8u;
    // 0x2baea8: 0x26b00001  addiu       $s0, $s5, 0x1
    ctx->pc = 0x2baea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2baeac: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2baeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2baeb0: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2baeb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2baeb4: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2baeb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2baeb8:
    // 0x2baeb8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2baeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2baebc: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2baebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2baec0: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2baec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2baec4: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2baec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2baec8: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x2baec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2baecc: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x2baeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2baed0: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x2baed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2baed4: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x2baed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2baed8: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2baed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baedc: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2baedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baee0: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2baee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baee4: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2baee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baee8: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x2baee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baeec: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x2baeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baef0: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x2baef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baef4: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x2baef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baef8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2baef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2baefc: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BAEFCu;
    {
        const bool branch_taken_0x2baefc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEFCu;
        // 0x2baf00: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baefc) {
            ctx->pc = 0x2BAEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2baeb8;
        }
    }
    ctx->pc = 0x2BAF04u;
    // 0x2baf04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BAF04u;
    {
        const bool branch_taken_0x2baf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baf04) {
            ctx->pc = 0x2BAF48u;
            goto label_2baf48;
        }
    }
    ctx->pc = 0x2BAF0Cu;
label_2baf0c:
    // 0x2baf0c: 0x26b00001  addiu       $s0, $s5, 0x1
    ctx->pc = 0x2baf0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2baf10: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2baf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2baf14: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2baf14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2baf18: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2baf18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2baf1c:
    // 0x2baf1c: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x2baf1cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2baf20: 0xdc6c0008  ld          $t4, 0x8($v1)
    ctx->pc = 0x2baf20u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2baf24: 0xdc6d0010  ld          $t5, 0x10($v1)
    ctx->pc = 0x2baf24u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2baf28: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x2baf28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2baf2c: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x2baf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x2baf30: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x2baf30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x2baf34: 0xfc8d0010  sd          $t5, 0x10($a0)
    ctx->pc = 0x2baf34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 13));
    // 0x2baf38: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x2baf38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x2baf3c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2baf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2baf40: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BAF40u;
    {
        const bool branch_taken_0x2baf40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF40u;
        // 0x2baf44: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf40) {
            ctx->pc = 0x2BAF1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2baf1c;
        }
    }
    ctx->pc = 0x2BAF48u;
label_2baf48:
    // 0x2baf48: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2baf48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2baf4c: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2baf4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2baf50: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x2baf50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2baf54: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x2baf54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baf58: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x2baf58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2baf5c: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x2baf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x2baf60: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2baf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2baf64: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2baf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2baf68: 0xc7a40154  lwc1        $f4, 0x154($sp)
    ctx->pc = 0x2baf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2baf6c: 0xc7a20158  lwc1        $f2, 0x158($sp)
    ctx->pc = 0x2baf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2baf70: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x2baf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2baf74: 0xc7a701a8  lwc1        $f7, 0x1A8($sp)
    ctx->pc = 0x2baf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2baf78: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2baf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2baf7c: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x2baf7cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2baf80: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2BAF80u;
    {
        const bool branch_taken_0x2baf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF80u;
        // 0x2baf84: 0xc7a301a0  lwc1        $f3, 0x1A0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf80) {
            ctx->pc = 0x2BB078u;
            goto label_2bb078;
        }
    }
    ctx->pc = 0x2BAF88u;
label_2baf88:
    // 0x2baf88: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2baf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2baf8c: 0x2463e668  addiu       $v1, $v1, -0x1998
    ctx->pc = 0x2baf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
    // 0x2baf90: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2baf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2baf94: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BAF94u;
    {
        const bool branch_taken_0x2baf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF94u;
        // 0x2baf98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf94) {
            ctx->pc = 0x2BB000u;
            goto label_2bb000;
        }
    }
    ctx->pc = 0x2BAF9Cu;
    // 0x2baf9c: 0x26b00001  addiu       $s0, $s5, 0x1
    ctx->pc = 0x2baf9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bafa0: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2bafa4: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bafa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2bafa8: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2bafa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2bafac:
    // 0x2bafac: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2bafacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bafb0: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2bafb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bafb4: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2bafb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bafb8: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2bafb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bafbc: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x2bafbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bafc0: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x2bafc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bafc4: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x2bafc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bafc8: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x2bafc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bafcc: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2bafccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bafd0: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2bafd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bafd4: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2bafd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bafd8: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2bafd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bafdc: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x2bafdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bafe0: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x2bafe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bafe4: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x2bafe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bafe8: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x2bafe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bafec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bafecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2baff0: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BAFF0u;
    {
        const bool branch_taken_0x2baff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFF0u;
        // 0x2baff4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baff0) {
            ctx->pc = 0x2BAFACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bafac;
        }
    }
    ctx->pc = 0x2BAFF8u;
    // 0x2baff8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BAFF8u;
    {
        const bool branch_taken_0x2baff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baff8) {
            ctx->pc = 0x2BB03Cu;
            goto label_2bb03c;
        }
    }
    ctx->pc = 0x2BB000u;
label_2bb000:
    // 0x2bb000: 0x26b00001  addiu       $s0, $s5, 0x1
    ctx->pc = 0x2bb000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bb004: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bb004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2bb008: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bb008u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2bb00c: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2bb00cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2bb010:
    // 0x2bb010: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x2bb010u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb014: 0xdc6c0008  ld          $t4, 0x8($v1)
    ctx->pc = 0x2bb014u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bb018: 0xdc6d0010  ld          $t5, 0x10($v1)
    ctx->pc = 0x2bb018u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bb01c: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x2bb01cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bb020: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x2bb020u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x2bb024: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x2bb024u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x2bb028: 0xfc8d0010  sd          $t5, 0x10($a0)
    ctx->pc = 0x2bb028u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 13));
    // 0x2bb02c: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x2bb02cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x2bb030: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bb030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bb034: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BB034u;
    {
        const bool branch_taken_0x2bb034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB034u;
        // 0x2bb038: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb034) {
            ctx->pc = 0x2BB010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb010;
        }
    }
    ctx->pc = 0x2BB03Cu;
label_2bb03c:
    // 0x2bb03c: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2bb03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bb040: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2bb040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bb044: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x2bb044u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bb048: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x2bb048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb04c: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x2bb04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb050: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x2bb050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x2bb054: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2bb054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb058: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bb058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bb05c: 0xc7a40154  lwc1        $f4, 0x154($sp)
    ctx->pc = 0x2bb05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bb060: 0xc7a20158  lwc1        $f2, 0x158($sp)
    ctx->pc = 0x2bb060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb064: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x2bb064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb068: 0xc7a701b8  lwc1        $f7, 0x1B8($sp)
    ctx->pc = 0x2bb068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bb06c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2bb06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb070: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x2bb070u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bb074: 0xc7a301b0  lwc1        $f3, 0x1B0($sp)
    ctx->pc = 0x2bb074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2bb078:
    // 0x2bb078: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x2bb078u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2bb07c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2bb07cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bb080: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2bb080u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2bb084: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2bb084u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2bb088: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2bb088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2bb08c: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x2bb08cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x2bb090: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2bb090u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2bb094: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2bb094u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bb098: 0xe7a502a0  swc1        $f5, 0x2A0($sp)
    ctx->pc = 0x2bb098u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2bb09c: 0xe7a102a8  swc1        $f1, 0x2A8($sp)
    ctx->pc = 0x2bb09cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2bb0a0: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB0A0u;
    {
        const bool branch_taken_0x2bb0a0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0A0u;
        // 0x2bb0a4: 0xe7a202a4  swc1        $f2, 0x2A4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0a0) {
            ctx->pc = 0x2BB0C0u;
            goto label_2bb0c0;
        }
    }
    ctx->pc = 0x2BB0A8u;
    // 0x2bb0a8: 0x6bac02a7  ldl         $t4, 0x2A7($sp)
    ctx->pc = 0x2bb0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bb0ac: 0x6fac02a0  ldr         $t4, 0x2A0($sp)
    ctx->pc = 0x2bb0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bb0b0: 0x8fad02a8  lw          $t5, 0x2A8($sp)
    ctx->pc = 0x2bb0b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x2bb0b4: 0xb3ac0017  sdl         $t4, 0x17($sp)
    ctx->pc = 0x2bb0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb0b8: 0xb7ac0010  sdr         $t4, 0x10($sp)
    ctx->pc = 0x2bb0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb0bc: 0xafad0018  sw          $t5, 0x18($sp)
    ctx->pc = 0x2bb0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 13));
label_2bb0c0:
    // 0x2bb0c0: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BB0C0u;
    {
        const bool branch_taken_0x2bb0c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0C0u;
        // 0x2bb0c4: 0xc7a002a0  lwc1        $f0, 0x2A0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0c0) {
            ctx->pc = 0x2BB0E8u;
            goto label_2bb0e8;
        }
    }
    ctx->pc = 0x2BB0C8u;
    // 0x2bb0c8: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x2bb0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb0cc: 0xc7a202a8  lwc1        $f2, 0x2A8($sp)
    ctx->pc = 0x2bb0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb0d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bb0d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bb0d4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bb0d4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bb0d8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bb0d8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bb0dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bb0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bb0e0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bb0e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bb0e4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2bb0e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2bb0e8:
    // 0x2bb0e8: 0xc4e23a6c  lwc1        $f2, 0x3A6C($a3)
    ctx->pc = 0x2bb0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 14956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb0ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb0f0: 0xc5013a70  lwc1        $f1, 0x3A70($t0)
    ctx->pc = 0x2bb0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 14960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb0f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb0f8: 0xc7808178  lwc1        $f0, -0x7E88($gp)
    ctx->pc = 0x2bb0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb0fc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2bb0fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb100: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2bb100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bb104: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2bb104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bb108: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2bb108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bb10c: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x2bb10cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2bb110: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2bb110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bb114: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2bb114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2bb118: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BB118u;
    SET_GPR_U32(ctx, 31, 0x2BB120u);
    ctx->pc = 0x2BB11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB118u;
    // 0x2bb11c: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BB118u, 0x2BB120u)) {
        return;
    }
    ctx->pc = 0x2BB120u;
label_2bb120:
    // 0x2bb120: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2BB120u;
    {
        const bool branch_taken_0x2bb120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB120u;
        // 0x2bb124: 0x8fa4045c  lw          $a0, 0x45C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb120) {
            ctx->pc = 0x2BB3ACu;
            goto label_2bb3ac;
        }
    }
    ctx->pc = 0x2BB128u;
label_2bb128:
    // 0x2bb128: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bb128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2bb12c: 0x2466e668  addiu       $a2, $v1, -0x1998
    ctx->pc = 0x2bb12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
    // 0x2bb130: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x2bb130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2bb134: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BB134u;
    {
        const bool branch_taken_0x2bb134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB134u;
        // 0x2bb138: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb134) {
            ctx->pc = 0x2BB1A4u;
            goto label_2bb1a4;
        }
    }
    ctx->pc = 0x2BB13Cu;
    // 0x2bb13c: 0x26b10002  addiu       $s1, $s5, 0x2
    ctx->pc = 0x2bb13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x2bb140: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x2bb140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x2bb144: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bb144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2bb148: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2bb148u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x2bb14c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2bb14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bb150:
    // 0x2bb150: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x2bb150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2bb154: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x2bb154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2bb158: 0x68c9000f  ldl         $t1, 0xF($a2)
    ctx->pc = 0x2bb158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bb15c: 0x6cc90008  ldr         $t1, 0x8($a2)
    ctx->pc = 0x2bb15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bb160: 0x68ca0017  ldl         $t2, 0x17($a2)
    ctx->pc = 0x2bb160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bb164: 0x6cca0010  ldr         $t2, 0x10($a2)
    ctx->pc = 0x2bb164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bb168: 0x68cb001f  ldl         $t3, 0x1F($a2)
    ctx->pc = 0x2bb168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2bb16c: 0x6ccb0018  ldr         $t3, 0x18($a2)
    ctx->pc = 0x2bb16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2bb170: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x2bb170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb174: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x2bb174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb178: 0xb0a9000f  sdl         $t1, 0xF($a1)
    ctx->pc = 0x2bb178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb17c: 0xb4a90008  sdr         $t1, 0x8($a1)
    ctx->pc = 0x2bb17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb180: 0xb0aa0017  sdl         $t2, 0x17($a1)
    ctx->pc = 0x2bb180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb184: 0xb4aa0010  sdr         $t2, 0x10($a1)
    ctx->pc = 0x2bb184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb188: 0xb0ab001f  sdl         $t3, 0x1F($a1)
    ctx->pc = 0x2bb188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb18c: 0xb4ab0018  sdr         $t3, 0x18($a1)
    ctx->pc = 0x2bb18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb190: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2bb190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2bb194: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BB194u;
    {
        const bool branch_taken_0x2bb194 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB194u;
        // 0x2bb198: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb194) {
            ctx->pc = 0x2BB150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb150;
        }
    }
    ctx->pc = 0x2BB19Cu;
    // 0x2bb19c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BB19Cu;
    {
        const bool branch_taken_0x2bb19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB19Cu;
        // 0x2bb1a0: 0x2463e668  addiu       $v1, $v1, -0x1998 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb19c) {
            ctx->pc = 0x2BB1E8u;
            goto label_2bb1e8;
        }
    }
    ctx->pc = 0x2BB1A4u;
label_2bb1a4:
    // 0x2bb1a4: 0x26b10002  addiu       $s1, $s5, 0x2
    ctx->pc = 0x2bb1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x2bb1a8: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x2bb1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x2bb1ac: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bb1acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2bb1b0: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2bb1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x2bb1b4: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2bb1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2bb1b8:
    // 0x2bb1b8: 0xdccc0000  ld          $t4, 0x0($a2)
    ctx->pc = 0x2bb1b8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bb1bc: 0xdccd0008  ld          $t5, 0x8($a2)
    ctx->pc = 0x2bb1bcu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2bb1c0: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x2bb1c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2bb1c4: 0xdcc90018  ld          $t1, 0x18($a2)
    ctx->pc = 0x2bb1c4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2bb1c8: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x2bb1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x2bb1cc: 0xfcad0008  sd          $t5, 0x8($a1)
    ctx->pc = 0x2bb1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 13));
    // 0x2bb1d0: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x2bb1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x2bb1d4: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x2bb1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x2bb1d8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2bb1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2bb1dc: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BB1DCu;
    {
        const bool branch_taken_0x2bb1dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1DCu;
        // 0x2bb1e0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1dc) {
            ctx->pc = 0x2BB1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb1b8;
        }
    }
    ctx->pc = 0x2BB1E4u;
    // 0x2bb1e4: 0x2463e668  addiu       $v1, $v1, -0x1998
    ctx->pc = 0x2bb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
label_2bb1e8:
    // 0x2bb1e8: 0x68ca0007  ldl         $t2, 0x7($a2)
    ctx->pc = 0x2bb1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bb1ec: 0x6cca0000  ldr         $t2, 0x0($a2)
    ctx->pc = 0x2bb1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bb1f0: 0x8ccb0008  lw          $t3, 0x8($a2)
    ctx->pc = 0x2bb1f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2bb1f4: 0xb0aa0007  sdl         $t2, 0x7($a1)
    ctx->pc = 0x2bb1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb1f8: 0xb4aa0000  sdr         $t2, 0x0($a1)
    ctx->pc = 0x2bb1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb200: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2bb200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2bb204: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BB204u;
    {
        const bool branch_taken_0x2bb204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB204u;
        // 0x2bb208: 0xacab0008  sw          $t3, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb204) {
            ctx->pc = 0x2BB264u;
            goto label_2bb264;
        }
    }
    ctx->pc = 0x2BB20Cu;
    // 0x2bb20c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bb20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2bb210:
    // 0x2bb210: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2bb210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bb214: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2bb214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bb218: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2bb218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bb21c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2bb21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bb220: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x2bb220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bb224: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x2bb224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bb228: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x2bb228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bb22c: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x2bb22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bb230: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2bb230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb234: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2bb234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb238: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2bb238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb23c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2bb23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb240: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x2bb240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb244: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x2bb244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb248: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x2bb248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb24c: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x2bb24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb250: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bb250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bb254: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BB254u;
    {
        const bool branch_taken_0x2bb254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB254u;
        // 0x2bb258: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb254) {
            ctx->pc = 0x2BB210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb210;
        }
    }
    ctx->pc = 0x2BB25Cu;
    // 0x2bb25c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BB25Cu;
    {
        const bool branch_taken_0x2bb25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb25c) {
            ctx->pc = 0x2BB294u;
            goto label_2bb294;
        }
    }
    ctx->pc = 0x2BB264u;
label_2bb264:
    // 0x2bb264: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bb264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2bb268:
    // 0x2bb268: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x2bb268u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb26c: 0xdc6c0008  ld          $t4, 0x8($v1)
    ctx->pc = 0x2bb26cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bb270: 0xdc6d0010  ld          $t5, 0x10($v1)
    ctx->pc = 0x2bb270u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bb274: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x2bb274u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bb278: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x2bb278u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x2bb27c: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x2bb27cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x2bb280: 0xfc8d0010  sd          $t5, 0x10($a0)
    ctx->pc = 0x2bb280u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 13));
    // 0x2bb284: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x2bb284u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x2bb288: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bb288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bb28c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BB28Cu;
    {
        const bool branch_taken_0x2bb28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB28Cu;
        // 0x2bb290: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb28c) {
            ctx->pc = 0x2BB268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb268;
        }
    }
    ctx->pc = 0x2BB294u;
label_2bb294:
    // 0x2bb294: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2bb294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bb298: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2bb298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bb29c: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x2bb29cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bb2a0: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x2bb2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb2a4: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x2bb2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb2a8: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x2bb2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x2bb2ac: 0xc7a00234  lwc1        $f0, 0x234($sp)
    ctx->pc = 0x2bb2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb2b0: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x2bb2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb2b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bb2b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bb2b8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bb2b8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bb2bc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bb2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bb2c0: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x2BB2C0u;
    {
        const bool branch_taken_0x2bb2c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2C0u;
        // 0x2bb2c4: 0xe7a100b0  swc1        $f1, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2c0) {
            ctx->pc = 0x2BB2F8u;
            goto label_2bb2f8;
        }
    }
    ctx->pc = 0x2BB2C8u;
    // 0x2bb2c8: 0x6bac025f  ldl         $t4, 0x25F($sp)
    ctx->pc = 0x2bb2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bb2cc: 0x6fac0258  ldr         $t4, 0x258($sp)
    ctx->pc = 0x2bb2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bb2d0: 0x8fad0260  lw          $t5, 0x260($sp)
    ctx->pc = 0x2bb2d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2bb2d4: 0xb3ac0017  sdl         $t4, 0x17($sp)
    ctx->pc = 0x2bb2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb2d8: 0xb7ac0010  sdr         $t4, 0x10($sp)
    ctx->pc = 0x2bb2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb2dc: 0xafad0018  sw          $t5, 0x18($sp)
    ctx->pc = 0x2bb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 13));
    // 0x2bb2e0: 0x6ba4026b  ldl         $a0, 0x26B($sp)
    ctx->pc = 0x2bb2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 619); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2bb2e4: 0x6fa40264  ldr         $a0, 0x264($sp)
    ctx->pc = 0x2bb2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 612); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2bb2e8: 0x8fa5026c  lw          $a1, 0x26C($sp)
    ctx->pc = 0x2bb2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x2bb2ec: 0xb3a40087  sdl         $a0, 0x87($sp)
    ctx->pc = 0x2bb2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb2f0: 0xb7a40080  sdr         $a0, 0x80($sp)
    ctx->pc = 0x2bb2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb2f4: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x2bb2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
label_2bb2f8:
    // 0x2bb2f8: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BB2F8u;
    {
        const bool branch_taken_0x2bb2f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2F8u;
        // 0x2bb2fc: 0xc7a00258  lwc1        $f0, 0x258($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2f8) {
            ctx->pc = 0x2BB348u;
            goto label_2bb348;
        }
    }
    ctx->pc = 0x2BB300u;
    // 0x2bb300: 0xc7a1025c  lwc1        $f1, 0x25C($sp)
    ctx->pc = 0x2bb300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb304: 0xc7a20260  lwc1        $f2, 0x260($sp)
    ctx->pc = 0x2bb304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb308: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bb308u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bb30c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bb30cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bb310: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bb310u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bb314: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bb314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bb318: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bb318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bb31c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2bb31cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2bb320: 0xc7a10264  lwc1        $f1, 0x264($sp)
    ctx->pc = 0x2bb320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb324: 0xc7a20268  lwc1        $f2, 0x268($sp)
    ctx->pc = 0x2bb324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb328: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bb328u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bb32c: 0xc7a0026c  lwc1        $f0, 0x26C($sp)
    ctx->pc = 0x2bb32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb330: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bb330u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bb334: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bb334u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bb338: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2bb338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2bb33c: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x2bb33cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2bb340: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2bb340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2bb344: 0x0  nop
    ctx->pc = 0x2bb344u;
    // NOP
label_2bb348:
    // 0x2bb348: 0xc4e03a6c  lwc1        $f0, 0x3A6C($a3)
    ctx->pc = 0x2bb348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 14956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb34c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb350: 0xc5013a70  lwc1        $f1, 0x3A70($t0)
    ctx->pc = 0x2bb350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 14960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb354: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb358: 0xc782817c  lwc1        $f2, -0x7E84($gp)
    ctx->pc = 0x2bb358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb35c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2bb35cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb360: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2bb360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2bb364: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x2bb364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2bb368: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x2bb368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2bb36c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2bb36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2bb370: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2bb370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bb374: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2bb374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bb378: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2bb378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bb37c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2bb37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2bb380: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2bb380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2bb384: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2bb384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2bb388: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2bb388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2bb38c: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x2bb38cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bb390: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x2bb390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x2bb394: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BB394u;
    SET_GPR_U32(ctx, 31, 0x2BB39Cu);
    ctx->pc = 0x2BB398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB394u;
    // 0x2bb398: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BB394u, 0x2BB39Cu)) {
        return;
    }
    ctx->pc = 0x2BB39Cu;
label_2bb39c:
    // 0x2bb39c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bb39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb3a0: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BB3A0u;
    SET_GPR_U32(ctx, 31, 0x2BB3A8u);
    ctx->pc = 0x2BB3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3A0u;
    // 0x2bb3a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BB3A0u, 0x2BB3A8u)) {
        return;
    }
    ctx->pc = 0x2BB3A8u;
label_2bb3a8:
    // 0x2bb3a8: 0x8fa4045c  lw          $a0, 0x45C($sp)
    ctx->pc = 0x2bb3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1116)));
label_2bb3ac:
    // 0x2bb3ac: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2BB3ACu;
    SET_GPR_U32(ctx, 31, 0x2BB3B4u);
    ctx->pc = 0x2BB3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3ACu;
    // 0x2bb3b0: 0x8fa50458  lw          $a1, 0x458($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2BB3ACu, 0x2BB3B4u)) {
        return;
    }
    ctx->pc = 0x2BB3B4u;
label_2bb3b4:
    // 0x2bb3b4: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bb3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bb3b8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2bb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2bb3bc: 0x30420038  andi        $v0, $v0, 0x38
    ctx->pc = 0x2bb3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
    // 0x2bb3c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB3C0u;
    {
        const bool branch_taken_0x2bb3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3C0u;
        // 0x2bb3c4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3c0) {
            ctx->pc = 0x2BB3E4u;
            goto label_2bb3e4;
        }
    }
    ctx->pc = 0x2BB3C8u;
    // 0x2bb3c8: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x2bb3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb3cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bb3ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb3d0: 0x460065c1  sub.s       $f23, $f12, $f0
    ctx->pc = 0x2bb3d0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2bb3d4: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x2bb3d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb3d8: 0x0  nop
    ctx->pc = 0x2bb3d8u;
    // NOP
    // 0x2bb3dc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2BB3DCu;
    {
        const bool branch_taken_0x2bb3dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3DCu;
        // 0x2bb3e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3dc) {
            ctx->pc = 0x2BB410u;
            goto label_2bb410;
        }
    }
    ctx->pc = 0x2BB3E4u;
label_2bb3e4:
    // 0x2bb3e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2bb3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2bb3e8: 0x30420038  andi        $v0, $v0, 0x38
    ctx->pc = 0x2bb3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
    // 0x2bb3ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB3ECu;
    {
        const bool branch_taken_0x2bb3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3ECu;
        // 0x2bb3f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3ec) {
            ctx->pc = 0x2BB410u;
            goto label_2bb410;
        }
    }
    ctx->pc = 0x2BB3F4u;
    // 0x2bb3f4: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x2bb3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb3f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bb3f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb3fc: 0x460065c1  sub.s       $f23, $f12, $f0
    ctx->pc = 0x2bb3fcu;
    ctx->f[23] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2bb400: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x2bb400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb404: 0x0  nop
    ctx->pc = 0x2bb404u;
    // NOP
    // 0x2bb408: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BB408u;
    {
        const bool branch_taken_0x2bb408 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb408) {
            ctx->pc = 0x2BB40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB408u;
            // 0x2bb40c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB410u;
            goto label_2bb410;
        }
    }
    ctx->pc = 0x2BB410u;
label_2bb410:
    // 0x2bb410: 0x10a000b7  beqz        $a1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2BB410u;
    {
        const bool branch_taken_0x2bb410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB410u;
        // 0x2bb414: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb410) {
            ctx->pc = 0x2BB6F0u;
            goto label_2bb6f0;
        }
    }
    ctx->pc = 0x2BB418u;
    // 0x2bb418: 0x2463e668  addiu       $v1, $v1, -0x1998
    ctx->pc = 0x2bb418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
    // 0x2bb41c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2bb41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2bb420: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BB420u;
    {
        const bool branch_taken_0x2bb420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB420u;
        // 0x2bb424: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb420) {
            ctx->pc = 0x2BB488u;
            goto label_2bb488;
        }
    }
    ctx->pc = 0x2BB428u;
    // 0x2bb428: 0x4600b807  neg.s       $f0, $f23
    ctx->pc = 0x2bb428u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x2bb42c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bb42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2bb430: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bb430u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
label_2bb434:
    // 0x2bb434: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x2bb434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bb438: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x2bb438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bb43c: 0x686b000f  ldl         $t3, 0xF($v1)
    ctx->pc = 0x2bb43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2bb440: 0x6c6b0008  ldr         $t3, 0x8($v1)
    ctx->pc = 0x2bb440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2bb444: 0x686c0017  ldl         $t4, 0x17($v1)
    ctx->pc = 0x2bb444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bb448: 0x6c6c0010  ldr         $t4, 0x10($v1)
    ctx->pc = 0x2bb448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bb44c: 0x686d001f  ldl         $t5, 0x1F($v1)
    ctx->pc = 0x2bb44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2bb450: 0x6c6d0018  ldr         $t5, 0x18($v1)
    ctx->pc = 0x2bb450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2bb454: 0xb08a0007  sdl         $t2, 0x7($a0)
    ctx->pc = 0x2bb454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb458: 0xb48a0000  sdr         $t2, 0x0($a0)
    ctx->pc = 0x2bb458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb45c: 0xb08b000f  sdl         $t3, 0xF($a0)
    ctx->pc = 0x2bb45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb460: 0xb48b0008  sdr         $t3, 0x8($a0)
    ctx->pc = 0x2bb460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb464: 0xb08c0017  sdl         $t4, 0x17($a0)
    ctx->pc = 0x2bb464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb468: 0xb48c0010  sdr         $t4, 0x10($a0)
    ctx->pc = 0x2bb468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb46c: 0xb08d001f  sdl         $t5, 0x1F($a0)
    ctx->pc = 0x2bb46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb470: 0xb48d0018  sdr         $t5, 0x18($a0)
    ctx->pc = 0x2bb470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb474: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bb474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bb478: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BB478u;
    {
        const bool branch_taken_0x2bb478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB478u;
        // 0x2bb47c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb478) {
            ctx->pc = 0x2BB434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb434;
        }
    }
    ctx->pc = 0x2BB480u;
    // 0x2bb480: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BB480u;
    {
        const bool branch_taken_0x2bb480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb480) {
            ctx->pc = 0x2BB4C0u;
            goto label_2bb4c0;
        }
    }
    ctx->pc = 0x2BB488u;
label_2bb488:
    // 0x2bb488: 0x4600b807  neg.s       $f0, $f23
    ctx->pc = 0x2bb488u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x2bb48c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bb48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2bb490: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bb490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
label_2bb494:
    // 0x2bb494: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x2bb494u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb498: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x2bb498u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bb49c: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x2bb49cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bb4a0: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x2bb4a0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bb4a4: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x2bb4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x2bb4a8: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x2bb4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x2bb4ac: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x2bb4acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x2bb4b0: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x2bb4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x2bb4b4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bb4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bb4b8: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BB4B8u;
    {
        const bool branch_taken_0x2bb4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4B8u;
        // 0x2bb4bc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb4b8) {
            ctx->pc = 0x2BB494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb494;
        }
    }
    ctx->pc = 0x2BB4C0u;
label_2bb4c0:
    // 0x2bb4c0: 0x686b0007  ldl         $t3, 0x7($v1)
    ctx->pc = 0x2bb4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2bb4c4: 0x6c6b0000  ldr         $t3, 0x0($v1)
    ctx->pc = 0x2bb4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2bb4c8: 0x8c6c0008  lw          $t4, 0x8($v1)
    ctx->pc = 0x2bb4c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bb4cc: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x2bb4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb4d0: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x2bb4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb4d4: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x2bb4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x2bb4d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bb4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bb4dc: 0xc7a30284  lwc1        $f3, 0x284($sp)
    ctx->pc = 0x2bb4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb4e0: 0xc7a802b8  lwc1        $f8, 0x2B8($sp)
    ctx->pc = 0x2bb4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2bb4e4: 0xc7a20288  lwc1        $f2, 0x288($sp)
    ctx->pc = 0x2bb4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb4e8: 0xc7a702b4  lwc1        $f7, 0x2B4($sp)
    ctx->pc = 0x2bb4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bb4ec: 0x46081942  mul.s       $f5, $f3, $f8
    ctx->pc = 0x2bb4ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x2bb4f0: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x2bb4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb4f4: 0xc7a602b0  lwc1        $f6, 0x2B0($sp)
    ctx->pc = 0x2bb4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bb4f8: 0x46071042  mul.s       $f1, $f2, $f7
    ctx->pc = 0x2bb4f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2bb4fc: 0x46070102  mul.s       $f4, $f0, $f7
    ctx->pc = 0x2bb4fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2bb500: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2bb500u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2bb504: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2bb504u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2bb508: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2bb508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2bb50c: 0x46012ac1  sub.s       $f11, $f5, $f1
    ctx->pc = 0x2bb50cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2bb510: 0x46032281  sub.s       $f10, $f4, $f3
    ctx->pc = 0x2bb510u;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2bb514: 0x46001241  sub.s       $f9, $f2, $f0
    ctx->pc = 0x2bb514u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bb518: 0xe7ab02f0  swc1        $f11, 0x2F0($sp)
    ctx->pc = 0x2bb518u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x2bb51c: 0xe7aa02f8  swc1        $f10, 0x2F8($sp)
    ctx->pc = 0x2bb51cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x2bb520: 0xe7a902f4  swc1        $f9, 0x2F4($sp)
    ctx->pc = 0x2bb520u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 756), bits); }
    // 0x2bb524: 0xc7a30294  lwc1        $f3, 0x294($sp)
    ctx->pc = 0x2bb524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb528: 0xc7a20298  lwc1        $f2, 0x298($sp)
    ctx->pc = 0x2bb528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb52c: 0x46061942  mul.s       $f5, $f3, $f6
    ctx->pc = 0x2bb52cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2bb530: 0xc7a10290  lwc1        $f1, 0x290($sp)
    ctx->pc = 0x2bb530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb534: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x2bb534u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x2bb538: 0x46061102  mul.s       $f4, $f2, $f6
    ctx->pc = 0x2bb538u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2bb53c: 0x46070802  mul.s       $f0, $f1, $f7
    ctx->pc = 0x2bb53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2bb540: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2bb540u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2bb544: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2bb544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2bb548: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2bb548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2bb54c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2bb54cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2bb550: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2bb550u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2bb554: 0xe7a00308  swc1        $f0, 0x308($sp)
    ctx->pc = 0x2bb554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
    // 0x2bb558: 0xe7a30300  swc1        $f3, 0x300($sp)
    ctx->pc = 0x2bb558u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x2bb55c: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x2BB55Cu;
    {
        const bool branch_taken_0x2bb55c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB55Cu;
        // 0x2bb560: 0xe7a40304  swc1        $f4, 0x304($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 772), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb55c) {
            ctx->pc = 0x2BB598u;
            goto label_2bb598;
        }
    }
    ctx->pc = 0x2BB564u;
    // 0x2bb564: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x2bb564u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x2bb568: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x2bb568u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x2bb56c: 0x46004087  neg.s       $f2, $f8
    ctx->pc = 0x2bb56cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[8]);
    // 0x2bb570: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2bb570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bb574: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2bb574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bb578: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2bb578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bb57c: 0x46005807  neg.s       $f0, $f11
    ctx->pc = 0x2bb57cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[11]);
    // 0x2bb580: 0x46004887  neg.s       $f2, $f9
    ctx->pc = 0x2bb580u;
    ctx->f[2] = FPU_NEG_S(ctx->f[9]);
    // 0x2bb584: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2bb584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bb588: 0x46005047  neg.s       $f1, $f10
    ctx->pc = 0x2bb588u;
    ctx->f[1] = FPU_NEG_S(ctx->f[10]);
    // 0x2bb58c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2bb58cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bb590: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2bb590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bb594: 0x0  nop
    ctx->pc = 0x2bb594u;
    // NOP
label_2bb598:
    // 0x2bb598: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x2BB598u;
    {
        const bool branch_taken_0x2bb598 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB598u;
        // 0x2bb59c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb598) {
            ctx->pc = 0x2BB5D0u;
            goto label_2bb5d0;
        }
    }
    ctx->pc = 0x2BB5A0u;
    // 0x2bb5a0: 0x6ba302b7  ldl         $v1, 0x2B7($sp)
    ctx->pc = 0x2bb5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2bb5a4: 0x6fa302b0  ldr         $v1, 0x2B0($sp)
    ctx->pc = 0x2bb5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 688); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2bb5a8: 0x8fa402b8  lw          $a0, 0x2B8($sp)
    ctx->pc = 0x2bb5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2bb5ac: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x2bb5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb5b0: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x2bb5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb5b4: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2bb5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2bb5b8: 0x6ba90307  ldl         $t1, 0x307($sp)
    ctx->pc = 0x2bb5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 775); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bb5bc: 0x6fa90300  ldr         $t1, 0x300($sp)
    ctx->pc = 0x2bb5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 768); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bb5c0: 0x8faa0308  lw          $t2, 0x308($sp)
    ctx->pc = 0x2bb5c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
    // 0x2bb5c4: 0xb3a90037  sdl         $t1, 0x37($sp)
    ctx->pc = 0x2bb5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb5c8: 0xb7a90030  sdr         $t1, 0x30($sp)
    ctx->pc = 0x2bb5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb5cc: 0xafaa0038  sw          $t2, 0x38($sp)
    ctx->pc = 0x2bb5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 10));
label_2bb5d0:
    // 0x2bb5d0: 0x54a20018  bnel        $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BB5D0u;
    {
        const bool branch_taken_0x2bb5d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bb5d0) {
            ctx->pc = 0x2BB5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB5D0u;
            // 0x2bb5d4: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB634u;
            goto label_2bb634;
        }
    }
    ctx->pc = 0x2BB5D8u;
    // 0x2bb5d8: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bb5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bb5dc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2bb5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2bb5e0: 0x30420038  andi        $v0, $v0, 0x38
    ctx->pc = 0x2bb5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
    // 0x2bb5e4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BB5E4u;
    {
        const bool branch_taken_0x2bb5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5e4) {
            ctx->pc = 0x2BB5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB5E4u;
            // 0x2bb5e8: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB634u;
            goto label_2bb634;
        }
    }
    ctx->pc = 0x2BB5ECu;
    // 0x2bb5ec: 0xc4620058  lwc1        $f2, 0x58($v1)
    ctx->pc = 0x2bb5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb5f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bb5f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb5f4: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x2bb5f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2bb5f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bb5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb5fc: 0x0  nop
    ctx->pc = 0x2bb5fcu;
    // NOP
    // 0x2bb600: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2BB600u;
    {
        const bool branch_taken_0x2bb600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB600u;
        // 0x2bb604: 0xc4e03a6c  lwc1        $f0, 0x3A6C($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 14956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb600) {
            ctx->pc = 0x2BB630u;
            goto label_2bb630;
        }
    }
    ctx->pc = 0x2BB608u;
    // 0x2bb608: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x2bb608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb60c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2bb60cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb610: 0x0  nop
    ctx->pc = 0x2bb610u;
    // NOP
    // 0x2bb614: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB614u;
    {
        const bool branch_taken_0x2bb614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb614) {
            ctx->pc = 0x2BB618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB614u;
            // 0x2bb618: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB638u;
            goto label_2bb638;
        }
    }
    ctx->pc = 0x2BB61Cu;
    // 0x2bb61c: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x2bb61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb620: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bb620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bb624: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bb624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb628: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB628u;
    {
        const bool branch_taken_0x2bb628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB628u;
        // 0x2bb62c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb628) {
            ctx->pc = 0x2BB634u;
            goto label_2bb634;
        }
    }
    ctx->pc = 0x2BB630u;
label_2bb630:
    // 0x2bb630: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2bb630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_2bb634:
    // 0x2bb634: 0xc4e03a6c  lwc1        $f0, 0x3A6C($a3)
    ctx->pc = 0x2bb634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 14956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bb638:
    // 0x2bb638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb63c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2bb63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2bb640: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2bb640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bb644: 0x14a20024  bne         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2BB644u;
    {
        const bool branch_taken_0x2bb644 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB644u;
        // 0x2bb648: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb644) {
            ctx->pc = 0x2BB6D8u;
            goto label_2bb6d8;
        }
    }
    ctx->pc = 0x2BB64Cu;
    // 0x2bb64c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bb64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bb650: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x2bb650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb654: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x2bb654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb658: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x2bb658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb65c: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x2bb65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x2bb660: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x2bb660u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb664: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2bb664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb668: 0x0  nop
    ctx->pc = 0x2bb668u;
    // NOP
    // 0x2bb66c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2BB66Cu;
    {
        const bool branch_taken_0x2bb66c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB66Cu;
        // 0x2bb670: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb66c) {
            ctx->pc = 0x2BB6F4u;
            goto label_2bb6f4;
        }
    }
    ctx->pc = 0x2BB674u;
    // 0x2bb674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bb674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bb678: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bb678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb67c: 0xc7808180  lwc1        $f0, -0x7E80($gp)
    ctx->pc = 0x2bb67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb680: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2bb680u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2bb684: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bb684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x2bb688: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bb688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb68c: 0x0  nop
    ctx->pc = 0x2bb68cu;
    // NOP
    // 0x2bb690: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB690u;
    {
        const bool branch_taken_0x2bb690 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb690) {
            ctx->pc = 0x2BB694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB690u;
            // 0x2bb694: 0x461c0801  sub.s       $f0, $f1, $f28 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB6A0u;
            goto label_2bb6a0;
        }
    }
    ctx->pc = 0x2BB698u;
    // 0x2bb698: 0xc7808184  lwc1        $f0, -0x7E7C($gp)
    ctx->pc = 0x2bb698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb69c: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bb69cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
label_2bb6a0:
    // 0x2bb6a0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2bb6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bb6a4: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bb6a8: 0x461d0802  mul.s       $f0, $f1, $f29
    ctx->pc = 0x2bb6a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x2bb6ac: 0xc7818188  lwc1        $f1, -0x7E78($gp)
    ctx->pc = 0x2bb6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb6b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6b4: 0xc4420068  lwc1        $f2, 0x68($v0)
    ctx->pc = 0x2bb6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb6b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6bc: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2bb6bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bb6c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bb6c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bb6c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bb6c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bb6c8: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BB6C8u;
    SET_GPR_U32(ctx, 31, 0x2BB6D0u);
    ctx->pc = 0x2BB6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6C8u;
    // 0x2bb6cc: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BB6C8u, 0x2BB6D0u)) {
        return;
    }
    ctx->pc = 0x2BB6D0u;
label_2bb6d0:
    // 0x2bb6d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB6D0u;
    {
        const bool branch_taken_0x2bb6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6D0u;
        // 0x2bb6d4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6d0) {
            ctx->pc = 0x2BB6F4u;
            goto label_2bb6f4;
        }
    }
    ctx->pc = 0x2BB6D8u;
label_2bb6d8:
    // 0x2bb6d8: 0xc780818c  lwc1        $f0, -0x7E74($gp)
    ctx->pc = 0x2bb6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb6dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6e4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bb6e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bb6e8: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BB6E8u;
    SET_GPR_U32(ctx, 31, 0x2BB6F0u);
    ctx->pc = 0x2BB6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6E8u;
    // 0x2bb6ec: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BB6E8u, 0x2BB6F0u)) {
        return;
    }
    ctx->pc = 0x2BB6F0u;
label_2bb6f0:
    // 0x2bb6f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bb6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2bb6f4:
    // 0x2bb6f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bb6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2bb6f8: 0xc45a3a6c  lwc1        $f26, 0x3A6C($v0)
    ctx->pc = 0x2bb6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2bb6fc: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2bb6fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bb700: 0xc4793a70  lwc1        $f25, 0x3A70($v1)
    ctx->pc = 0x2bb700u;
    { uint32_t bits = FAST_READ32(0x6B3A70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2bb704: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bb704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb708: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x2bb708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2bb70c: 0x3c1e006b  lui         $fp, 0x6B
    ctx->pc = 0x2bb70cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)107 << 16));
    // 0x2bb710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bb710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bb714: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2bb714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2bb718: 0x27b30200  addiu       $s3, $sp, 0x200
    ctx->pc = 0x2bb718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2bb71c: 0xc7968190  lwc1        $f22, -0x7E70($gp)
    ctx->pc = 0x2bb71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bb720: 0xc7948194  lwc1        $f20, -0x7E6C($gp)
    ctx->pc = 0x2bb720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bb724: 0xc7958198  lwc1        $f21, -0x7E68($gp)
    ctx->pc = 0x2bb724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2bb728:
    // 0x2bb728: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bb728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bb72c: 0x98840  sll         $s1, $t1, 1
    ctx->pc = 0x2bb72cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2bb730: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2bb730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2bb734: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2bb734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2bb738: 0x144000ae  bnez        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x2BB738u;
    {
        const bool branch_taken_0x2bb738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB738u;
        // 0x2bb73c: 0x25100001  addiu       $s0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb738) {
            ctx->pc = 0x2BB9F4u;
            goto label_2bb9f4;
        }
    }
    ctx->pc = 0x2BB740u;
    // 0x2bb740: 0x91200  sll         $v0, $t1, 8
    ctx->pc = 0x2bb740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x2bb744: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x2bb744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bb748: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2bb748u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb74c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2bb74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2bb750: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2bb750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2bb754: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2BB754u;
    {
        const bool branch_taken_0x2bb754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB754u;
        // 0x2bb758: 0x27c4e668  addiu       $a0, $fp, -0x1998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb754) {
            ctx->pc = 0x2BB9F4u;
            goto label_2bb9f4;
        }
    }
    ctx->pc = 0x2BB75Cu;
    // 0x2bb75c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x2bb75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2bb760: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BB760u;
    {
        const bool branch_taken_0x2bb760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB760u;
        // 0x2bb764: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb760) {
            ctx->pc = 0x2BB7C8u;
            goto label_2bb7c8;
        }
    }
    ctx->pc = 0x2BB768u;
    // 0x2bb768: 0x93c00  sll         $a3, $t1, 16
    ctx->pc = 0x2bb768u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2bb76c: 0x24860060  addiu       $a2, $a0, 0x60
    ctx->pc = 0x2bb76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2bb770: 0xa91024  and         $v0, $a1, $t1
    ctx->pc = 0x2bb770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
label_2bb774:
    // 0x2bb774: 0x688d0007  ldl         $t5, 0x7($a0)
    ctx->pc = 0x2bb774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2bb778: 0x6c8d0000  ldr         $t5, 0x0($a0)
    ctx->pc = 0x2bb778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2bb77c: 0x6889000f  ldl         $t1, 0xF($a0)
    ctx->pc = 0x2bb77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bb780: 0x6c890008  ldr         $t1, 0x8($a0)
    ctx->pc = 0x2bb780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bb784: 0x688b0017  ldl         $t3, 0x17($a0)
    ctx->pc = 0x2bb784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2bb788: 0x6c8b0010  ldr         $t3, 0x10($a0)
    ctx->pc = 0x2bb788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2bb78c: 0x688c001f  ldl         $t4, 0x1F($a0)
    ctx->pc = 0x2bb78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bb790: 0x6c8c0018  ldr         $t4, 0x18($a0)
    ctx->pc = 0x2bb790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bb794: 0xb06d0007  sdl         $t5, 0x7($v1)
    ctx->pc = 0x2bb794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb798: 0xb46d0000  sdr         $t5, 0x0($v1)
    ctx->pc = 0x2bb798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb79c: 0xb069000f  sdl         $t1, 0xF($v1)
    ctx->pc = 0x2bb79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb7a0: 0xb4690008  sdr         $t1, 0x8($v1)
    ctx->pc = 0x2bb7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb7a4: 0xb06b0017  sdl         $t3, 0x17($v1)
    ctx->pc = 0x2bb7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb7a8: 0xb46b0010  sdr         $t3, 0x10($v1)
    ctx->pc = 0x2bb7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb7ac: 0xb06c001f  sdl         $t4, 0x1F($v1)
    ctx->pc = 0x2bb7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb7b0: 0xb46c0018  sdr         $t4, 0x18($v1)
    ctx->pc = 0x2bb7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb7b4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2bb7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bb7b8: 0x1486ffee  bne         $a0, $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BB7B8u;
    {
        const bool branch_taken_0x2bb7b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7B8u;
        // 0x2bb7bc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7b8) {
            ctx->pc = 0x2BB774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb774;
        }
    }
    ctx->pc = 0x2BB7C0u;
    // 0x2bb7c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BB7C0u;
    {
        const bool branch_taken_0x2bb7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb7c0) {
            ctx->pc = 0x2BB800u;
            goto label_2bb800;
        }
    }
    ctx->pc = 0x2BB7C8u;
label_2bb7c8:
    // 0x2bb7c8: 0x93c00  sll         $a3, $t1, 16
    ctx->pc = 0x2bb7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2bb7cc: 0x24860060  addiu       $a2, $a0, 0x60
    ctx->pc = 0x2bb7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2bb7d0: 0xa91024  and         $v0, $a1, $t1
    ctx->pc = 0x2bb7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
label_2bb7d4:
    // 0x2bb7d4: 0xdc8d0000  ld          $t5, 0x0($a0)
    ctx->pc = 0x2bb7d4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb7d8: 0xdc890008  ld          $t1, 0x8($a0)
    ctx->pc = 0x2bb7d8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bb7dc: 0xdc8b0010  ld          $t3, 0x10($a0)
    ctx->pc = 0x2bb7dcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bb7e0: 0xdc8c0018  ld          $t4, 0x18($a0)
    ctx->pc = 0x2bb7e0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2bb7e4: 0xfc6d0000  sd          $t5, 0x0($v1)
    ctx->pc = 0x2bb7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 13));
    // 0x2bb7e8: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x2bb7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x2bb7ec: 0xfc6b0010  sd          $t3, 0x10($v1)
    ctx->pc = 0x2bb7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 11));
    // 0x2bb7f0: 0xfc6c0018  sd          $t4, 0x18($v1)
    ctx->pc = 0x2bb7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 12));
    // 0x2bb7f4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2bb7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bb7f8: 0x1486fff6  bne         $a0, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BB7F8u;
    {
        const bool branch_taken_0x2bb7f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7F8u;
        // 0x2bb7fc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7f8) {
            ctx->pc = 0x2BB7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb7d4;
        }
    }
    ctx->pc = 0x2BB800u;
label_2bb800:
    // 0x2bb800: 0x688d0007  ldl         $t5, 0x7($a0)
    ctx->pc = 0x2bb800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2bb804: 0x6c8d0000  ldr         $t5, 0x0($a0)
    ctx->pc = 0x2bb804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2bb808: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2bb808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bb80c: 0xb06d0007  sdl         $t5, 0x7($v1)
    ctx->pc = 0x2bb80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb810: 0xb46d0000  sdr         $t5, 0x0($v1)
    ctx->pc = 0x2bb810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb814: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB814u;
    {
        const bool branch_taken_0x2bb814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB814u;
        // 0x2bb818: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb814) {
            ctx->pc = 0x2BB838u;
            goto label_2bb838;
        }
    }
    ctx->pc = 0x2BB81Cu;
    // 0x2bb81c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2bb81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2bb820: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x2bb820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2bb824: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2bb824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bb828: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x2bb828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb82c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2bb82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb830: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bb830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bb834: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bb834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2bb838:
    // 0x2bb838: 0xaa1024  and         $v0, $a1, $t2
    ctx->pc = 0x2bb838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x2bb83c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB83Cu;
    {
        const bool branch_taken_0x2bb83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB83Cu;
        // 0x2bb840: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb83c) {
            ctx->pc = 0x2BB854u;
            goto label_2bb854;
        }
    }
    ctx->pc = 0x2BB844u;
    // 0x2bb844: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2bb844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2bb848: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x2bb848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb84c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bb84cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bb850: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2bb850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2bb854:
    // 0x2bb854: 0xa71024  and         $v0, $a1, $a3
    ctx->pc = 0x2bb854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x2bb858: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB858u;
    {
        const bool branch_taken_0x2bb858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb858) {
            ctx->pc = 0x2BB85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB858u;
            // 0x2bb85c: 0xe7ba005c  swc1        $f26, 0x5C($sp) (Delay Slot)
            { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB87Cu;
            goto label_2bb87c;
        }
    }
    ctx->pc = 0x2BB860u;
    // 0x2bb860: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bb860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bb864: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x2bb864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb868: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x2bb868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2bb86c: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x2bb86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb870: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bb870u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bb874: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB874u;
    {
        const bool branch_taken_0x2bb874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB874u;
        // 0x2bb878: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb874) {
            ctx->pc = 0x2BB880u;
            goto label_2bb880;
        }
    }
    ctx->pc = 0x2BB87Cu;
label_2bb87c:
    // 0x2bb87c: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x2bb87cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2bb880:
    // 0x2bb880: 0x12e00021  beqz        $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x2BB880u;
    {
        const bool branch_taken_0x2bb880 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB880u;
        // 0x2bb884: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb880) {
            ctx->pc = 0x2BB908u;
            goto label_2bb908;
        }
    }
    ctx->pc = 0x2BB888u;
    // 0x2bb888: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2bb888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2bb88c: 0xc4610190  lwc1        $f1, 0x190($v1)
    ctx->pc = 0x2bb88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb890: 0x24620190  addiu       $v0, $v1, 0x190
    ctx->pc = 0x2bb890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x2bb894: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bb894u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bb898: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2bb898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bb89c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2bb89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb8a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bb8a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bb8a4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2bb8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bb8a8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2bb8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb8ac: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bb8acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bb8b0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2bb8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bb8b4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2bb8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb8b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bb8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb8bc: 0xc7a30288  lwc1        $f3, 0x288($sp)
    ctx->pc = 0x2bb8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb8c0: 0xc7a50284  lwc1        $f5, 0x284($sp)
    ctx->pc = 0x2bb8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bb8c4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2bb8c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2bb8c8: 0xc7a40280  lwc1        $f4, 0x280($sp)
    ctx->pc = 0x2bb8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bb8cc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2bb8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2bb8d0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2bb8d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bb8d4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2bb8d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bb8d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bb8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb8dc: 0xc4610190  lwc1        $f1, 0x190($v1)
    ctx->pc = 0x2bb8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb8e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2bb8e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2bb8e4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2bb8e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2bb8e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bb8e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bb8ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2bb8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bb8f0: 0xc4610190  lwc1        $f1, 0x190($v1)
    ctx->pc = 0x2bb8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb8f4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2bb8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb8f8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2bb8f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2bb8fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2bb8fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2bb900: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bb900u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bb904: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2bb904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2bb908:
    // 0x2bb908: 0x12c0001f  beqz        $s6, . + 4 + (0x1F << 2)
    ctx->pc = 0x2BB908u;
    {
        const bool branch_taken_0x2bb908 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB908u;
        // 0x2bb90c: 0x81100  sll         $v0, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb908) {
            ctx->pc = 0x2BB988u;
            goto label_2bb988;
        }
    }
    ctx->pc = 0x2BB910u;
    // 0x2bb910: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2bb910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2bb914: 0x684c0197  ldl         $t4, 0x197($v0)
    ctx->pc = 0x2bb914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bb918: 0x6c4c0190  ldr         $t4, 0x190($v0)
    ctx->pc = 0x2bb918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bb91c: 0x8c4d0198  lw          $t5, 0x198($v0)
    ctx->pc = 0x2bb91cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x2bb920: 0xb3ac0027  sdl         $t4, 0x27($sp)
    ctx->pc = 0x2bb920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb924: 0xb7ac0020  sdr         $t4, 0x20($sp)
    ctx->pc = 0x2bb924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bb928: 0xafad0028  sw          $t5, 0x28($sp)
    ctx->pc = 0x2bb928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 13));
    // 0x2bb92c: 0x24430190  addiu       $v1, $v0, 0x190
    ctx->pc = 0x2bb92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2bb930: 0xc7a40294  lwc1        $f4, 0x294($sp)
    ctx->pc = 0x2bb930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bb934: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bb934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb938: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2bb938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb93c: 0xc7a10298  lwc1        $f1, 0x298($sp)
    ctx->pc = 0x2bb93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb940: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2bb940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2bb944: 0xc7a30290  lwc1        $f3, 0x290($sp)
    ctx->pc = 0x2bb944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb948: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2bb948u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bb94c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bb94cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bb950: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bb950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bb954: 0xc4420190  lwc1        $f2, 0x190($v0)
    ctx->pc = 0x2bb954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb958: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bb958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb95c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bb95cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bb960: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2bb960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bb964: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bb964u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bb968: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bb968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bb96c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2bb96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb970: 0xc4410190  lwc1        $f1, 0x190($v0)
    ctx->pc = 0x2bb970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb974: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2bb974u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bb978: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2bb978u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2bb97c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2bb97cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2bb980: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2bb980u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2bb984: 0x0  nop
    ctx->pc = 0x2bb984u;
    // NOP
label_2bb988:
    // 0x2bb988: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bb988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bb98c: 0xc4400090  lwc1        $f0, 0x90($v0)
    ctx->pc = 0x2bb98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb990: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x2bb990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb994: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x2bb994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x2bb998: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x2bb998u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb99c: 0x4603c034  c.lt.s      $f24, $f3
    ctx->pc = 0x2bb99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb9a0: 0x0  nop
    ctx->pc = 0x2bb9a0u;
    // NOP
    // 0x2bb9a4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2BB9A4u;
    {
        const bool branch_taken_0x2bb9a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9A4u;
        // 0x2bb9a8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb9a4) {
            ctx->pc = 0x2BB9F8u;
            goto label_2bb9f8;
        }
    }
    ctx->pc = 0x2BB9ACu;
    // 0x2bb9ac: 0x4603b843  div.s       $f1, $f23, $f3
    ctx->pc = 0x2bb9acu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[23], ctx->f[3]);
    // 0x2bb9b0: 0x4616e002  mul.s       $f0, $f28, $f22
    ctx->pc = 0x2bb9b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[22]);
    // 0x2bb9b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bb9b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb9b8: 0x0  nop
    ctx->pc = 0x2bb9b8u;
    // NOP
    // 0x2bb9bc: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB9BCu;
    {
        const bool branch_taken_0x2bb9bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb9bc) {
            ctx->pc = 0x2BB9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB9BCu;
            // 0x2bb9c0: 0x461c0801  sub.s       $f0, $f1, $f28 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB9C8u;
            goto label_2bb9c8;
        }
    }
    ctx->pc = 0x2BB9C4u;
    // 0x2bb9c4: 0x4614e002  mul.s       $f0, $f28, $f20
    ctx->pc = 0x2bb9c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[20]);
label_2bb9c8:
    // 0x2bb9c8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2bb9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bb9cc: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bb9d0: 0x461d0802  mul.s       $f0, $f1, $f29
    ctx->pc = 0x2bb9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x2bb9d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb9d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb9dc: 0xc4410090  lwc1        $f1, 0x90($v0)
    ctx->pc = 0x2bb9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb9e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bb9e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bb9e4: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x2bb9e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bb9e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bb9e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bb9ec: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BB9ECu;
    SET_GPR_U32(ctx, 31, 0x2BB9F4u);
    ctx->pc = 0x2BB9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9ECu;
    // 0x2bb9f0: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BB9ECu, 0x2BB9F4u)) {
        return;
    }
    ctx->pc = 0x2BB9F4u;
label_2bb9f4:
    // 0x2bb9f4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2bb9f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb9f8:
    // 0x2bb9f8: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x2bb9f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2bb9fc: 0x1440ff4a  bnez        $v0, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x2BB9FCu;
    {
        const bool branch_taken_0x2bb9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9FCu;
        // 0x2bba00: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb9fc) {
            ctx->pc = 0x2BB728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb728;
        }
    }
    ctx->pc = 0x2BBA04u;
    // 0x2bba04: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bba04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bba08: 0x8c64008c  lw          $a0, 0x8C($v1)
    ctx->pc = 0x2bba08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bba0c: 0x30820707  andi        $v0, $a0, 0x707
    ctx->pc = 0x2bba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1799);
    // 0x2bba10: 0x504004a2  beql        $v0, $zero, . + 4 + (0x4A2 << 2)
    ctx->pc = 0x2BBA10u;
    {
        const bool branch_taken_0x2bba10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bba10) {
            ctx->pc = 0x2BBA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBA10u;
            // 0x2bba14: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCC9Cu;
            goto label_2bcc9c;
        }
    }
    ctx->pc = 0x2BBA18u;
    // 0x2bba18: 0xc65b0060  lwc1        $f27, 0x60($s2)
    ctx->pc = 0x2bba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2bba1c: 0xc64b0068  lwc1        $f11, 0x68($s2)
    ctx->pc = 0x2bba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2bba20: 0x4600d887  neg.s       $f2, $f27
    ctx->pc = 0x2bba20u;
    ctx->f[2] = FPU_NEG_S(ctx->f[27]);
    // 0x2bba24: 0xc640008c  lwc1        $f0, 0x8C($s2)
    ctx->pc = 0x2bba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bba28: 0x460058c7  neg.s       $f3, $f11
    ctx->pc = 0x2bba28u;
    ctx->f[3] = FPU_NEG_S(ctx->f[11]);
    // 0x2bba2c: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x2bba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bba30: 0xc64a0064  lwc1        $f10, 0x64($s2)
    ctx->pc = 0x2bba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2bba34: 0xc65a006c  lwc1        $f26, 0x6C($s2)
    ctx->pc = 0x2bba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2bba38: 0x46015942  mul.s       $f5, $f11, $f1
    ctx->pc = 0x2bba38u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2bba3c: 0x46015202  mul.s       $f8, $f10, $f1
    ctx->pc = 0x2bba3cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2bba40: 0xc6440094  lwc1        $f4, 0x94($s2)
    ctx->pc = 0x2bba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bba44: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bba44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bba48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bba48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bba4c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2bba4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2bba50: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2bba50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bba54: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2bba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2bba58: 0x46005182  mul.s       $f6, $f10, $f0
    ctx->pc = 0x2bba58u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2bba5c: 0x4601da42  mul.s       $f9, $f27, $f1
    ctx->pc = 0x2bba5cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[27], ctx->f[1]);
    // 0x2bba60: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2bba60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2bba64: 0x4601d042  mul.s       $f1, $f26, $f1
    ctx->pc = 0x2bba64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[26], ctx->f[1]);
    // 0x2bba68: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x2bba68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x2bba6c: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x2bba6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x2bba70: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2bba70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2bba74: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2bba74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2bba78: 0x4604d202  mul.s       $f8, $f26, $f4
    ctx->pc = 0x2bba78u;
    ctx->f[8] = FPU_MUL_S(ctx->f[26], ctx->f[4]);
    // 0x2bba7c: 0x46045842  mul.s       $f1, $f11, $f4
    ctx->pc = 0x2bba7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x2bba80: 0x46045142  mul.s       $f5, $f10, $f4
    ctx->pc = 0x2bba80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x2bba84: 0x46093181  sub.s       $f6, $f6, $f9
    ctx->pc = 0x2bba84u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
    // 0x2bba88: 0x4604d902  mul.s       $f4, $f27, $f4
    ctx->pc = 0x2bba88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[27], ctx->f[4]);
    // 0x2bba8c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2bba8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2bba90: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2bba90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2bba94: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2bba94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2bba98: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x2bba98u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x2bba9c: 0x460713c2  mul.s       $f15, $f2, $f7
    ctx->pc = 0x2bba9cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2bbaa0: 0x46070302  mul.s       $f12, $f0, $f7
    ctx->pc = 0x2bbaa0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2bbaa4: 0x46073382  mul.s       $f14, $f6, $f7
    ctx->pc = 0x2bbaa4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2bbaa8: 0x46071b42  mul.s       $f13, $f3, $f7
    ctx->pc = 0x2bbaa8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2bbaac: 0xe7af031c  swc1        $f15, 0x31C($sp)
    ctx->pc = 0x2bbaacu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 796), bits); }
    // 0x2bbab0: 0xe7ac0310  swc1        $f12, 0x310($sp)
    ctx->pc = 0x2bbab0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x2bbab4: 0xe7ae0318  swc1        $f14, 0x318($sp)
    ctx->pc = 0x2bbab4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
    // 0x2bbab8: 0x144001c3  bnez        $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x2BBAB8u;
    {
        const bool branch_taken_0x2bbab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAB8u;
        // 0x2bbabc: 0xe7ad0314  swc1        $f13, 0x314($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 788), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbab8) {
            ctx->pc = 0x2BC1C8u;
            goto label_2bc1c8;
        }
    }
    ctx->pc = 0x2BBAC0u;
    // 0x2bbac0: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x2bbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
    // 0x2bbac4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2bbac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2bbac8: 0x104001bf  beqz        $v0, . + 4 + (0x1BF << 2)
    ctx->pc = 0x2BBAC8u;
    {
        const bool branch_taken_0x2bbac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAC8u;
        // 0x2bbacc: 0x26430060  addiu       $v1, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbac8) {
            ctx->pc = 0x2BC1C8u;
            goto label_2bc1c8;
        }
    }
    ctx->pc = 0x2BBAD0u;
    // 0x2bbad0: 0xc7a6023c  lwc1        $f6, 0x23C($sp)
    ctx->pc = 0x2bbad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bbad4: 0xc7a80230  lwc1        $f8, 0x230($sp)
    ctx->pc = 0x2bbad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2bbad8: 0x461a30c2  mul.s       $f3, $f6, $f26
    ctx->pc = 0x2bbad8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[26]);
    // 0x2bbadc: 0xc7a90234  lwc1        $f9, 0x234($sp)
    ctx->pc = 0x2bbadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2bbae0: 0x461b4002  mul.s       $f0, $f8, $f27
    ctx->pc = 0x2bbae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[27]);
    // 0x2bbae4: 0xc7a70238  lwc1        $f7, 0x238($sp)
    ctx->pc = 0x2bbae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bbae8: 0x460a4842  mul.s       $f1, $f9, $f10
    ctx->pc = 0x2bbae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x2bbaec: 0x460b3882  mul.s       $f2, $f7, $f11
    ctx->pc = 0x2bbaecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x2bbaf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbaf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbaf4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bbaf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bbaf8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2bbaf8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2bbafc: 0xe7a3032c  swc1        $f3, 0x32C($sp)
    ctx->pc = 0x2bbafcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 812), bits); }
    // 0x2bbb00: 0x460b4882  mul.s       $f2, $f9, $f11
    ctx->pc = 0x2bbb00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x2bbb04: 0x460a3942  mul.s       $f5, $f7, $f10
    ctx->pc = 0x2bbb04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x2bbb08: 0x461b3842  mul.s       $f1, $f7, $f27
    ctx->pc = 0x2bbb08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[27]);
    // 0x2bbb0c: 0x460b4102  mul.s       $f4, $f8, $f11
    ctx->pc = 0x2bbb0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x2bbb10: 0x460a4002  mul.s       $f0, $f8, $f10
    ctx->pc = 0x2bbb10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x2bbb14: 0x461b48c2  mul.s       $f3, $f9, $f27
    ctx->pc = 0x2bbb14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[27]);
    // 0x2bbb18: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2bbb18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2bbb1c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2bbb1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2bbb20: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bbb20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bbb24: 0x4606d902  mul.s       $f4, $f27, $f6
    ctx->pc = 0x2bbb24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[27], ctx->f[6]);
    // 0x2bbb28: 0x460650c2  mul.s       $f3, $f10, $f6
    ctx->pc = 0x2bbb28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x2bbb2c: 0x46065942  mul.s       $f5, $f11, $f6
    ctx->pc = 0x2bbb2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x2bbb30: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2bbb30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2bbb34: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2bbb34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2bbb38: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2bbb38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2bbb3c: 0x461a40c2  mul.s       $f3, $f8, $f26
    ctx->pc = 0x2bbb3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[26]);
    // 0x2bbb40: 0x461a4902  mul.s       $f4, $f9, $f26
    ctx->pc = 0x2bbb40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[26]);
    // 0x2bbb44: 0x461a3942  mul.s       $f5, $f7, $f26
    ctx->pc = 0x2bbb44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[26]);
    // 0x2bbb48: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2bbb48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2bbb4c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2bbb4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2bbb50: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2bbb50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2bbb54: 0xe7a20320  swc1        $f2, 0x320($sp)
    ctx->pc = 0x2bbb54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x2bbb58: 0xe7a10324  swc1        $f1, 0x324($sp)
    ctx->pc = 0x2bbb58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 804), bits); }
    // 0x2bbb5c: 0xe7a00328  swc1        $f0, 0x328($sp)
    ctx->pc = 0x2bbb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
    // 0x2bbb60: 0x460f30c2  mul.s       $f3, $f6, $f15
    ctx->pc = 0x2bbb60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[15]);
    // 0x2bbb64: 0x460c4002  mul.s       $f0, $f8, $f12
    ctx->pc = 0x2bbb64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x2bbb68: 0x460d4842  mul.s       $f1, $f9, $f13
    ctx->pc = 0x2bbb68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x2bbb6c: 0x460e3882  mul.s       $f2, $f7, $f14
    ctx->pc = 0x2bbb6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[14]);
    // 0x2bbb70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbb70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbb74: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bbb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bbb78: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2bbb78u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2bbb7c: 0xe7a3036c  swc1        $f3, 0x36C($sp)
    ctx->pc = 0x2bbb7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 876), bits); }
    // 0x2bbb80: 0x460e4842  mul.s       $f1, $f9, $f14
    ctx->pc = 0x2bbb80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[14]);
    // 0x2bbb84: 0x460d3942  mul.s       $f5, $f7, $f13
    ctx->pc = 0x2bbb84u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
    // 0x2bbb88: 0x460c3882  mul.s       $f2, $f7, $f12
    ctx->pc = 0x2bbb88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x2bbb8c: 0x460e4102  mul.s       $f4, $f8, $f14
    ctx->pc = 0x2bbb8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[14]);
    // 0x2bbb90: 0x460d4002  mul.s       $f0, $f8, $f13
    ctx->pc = 0x2bbb90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x2bbb94: 0x460c48c2  mul.s       $f3, $f9, $f12
    ctx->pc = 0x2bbb94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x2bbb98: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2bbb98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2bbb9c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2bbb9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2bbba0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bbba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bbba4: 0x46066102  mul.s       $f4, $f12, $f6
    ctx->pc = 0x2bbba4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2bbba8: 0x460670c2  mul.s       $f3, $f14, $f6
    ctx->pc = 0x2bbba8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x2bbbac: 0x46066982  mul.s       $f6, $f13, $f6
    ctx->pc = 0x2bbbacu;
    ctx->f[6] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
    // 0x2bbbb0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2bbbb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2bbbb4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2bbbb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2bbbb8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2bbbb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2bbbbc: 0x460f4202  mul.s       $f8, $f8, $f15
    ctx->pc = 0x2bbbbcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[15]);
    // 0x2bbbc0: 0x460f39c2  mul.s       $f7, $f7, $f15
    ctx->pc = 0x2bbbc0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[15]);
    // 0x2bbbc4: 0x460f4a42  mul.s       $f9, $f9, $f15
    ctx->pc = 0x2bbbc4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x2bbbc8: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x2bbbc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x2bbbcc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2bbbccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2bbbd0: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x2bbbd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x2bbbd4: 0xe7a10360  swc1        $f1, 0x360($sp)
    ctx->pc = 0x2bbbd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
    // 0x2bbbd8: 0xe7a00368  swc1        $f0, 0x368($sp)
    ctx->pc = 0x2bbbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
    // 0x2bbbdc: 0xe7a20364  swc1        $f2, 0x364($sp)
    ctx->pc = 0x2bbbdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 868), bits); }
    // 0x2bbbe0: 0xc7a70240  lwc1        $f7, 0x240($sp)
    ctx->pc = 0x2bbbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bbbe4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bbbe8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2bbbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbbec: 0x4607da82  mul.s       $f10, $f27, $f7
    ctx->pc = 0x2bbbecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[27], ctx->f[7]);
    // 0x2bbbf0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bbbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbbf4: 0x2447e668  addiu       $a3, $v0, -0x1998
    ctx->pc = 0x2bbbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960744));
    // 0x2bbbf8: 0xc7a30244  lwc1        $f3, 0x244($sp)
    ctx->pc = 0x2bbbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bbbfc: 0x46070b02  mul.s       $f12, $f1, $f7
    ctx->pc = 0x2bbbfcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2bbc00: 0xc7a80250  lwc1        $f8, 0x250($sp)
    ctx->pc = 0x2bbc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2bbc04: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x2bbc04u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2bbc08: 0xc7a20248  lwc1        $f2, 0x248($sp)
    ctx->pc = 0x2bbc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbc0c: 0x46030342  mul.s       $f13, $f0, $f3
    ctx->pc = 0x2bbc0cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bbc10: 0xc7a50254  lwc1        $f5, 0x254($sp)
    ctx->pc = 0x2bbc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bbc14: 0x46080e02  mul.s       $f24, $f1, $f8
    ctx->pc = 0x2bbc14u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2bbc18: 0xc7a9024c  lwc1        $f9, 0x24C($sp)
    ctx->pc = 0x2bbc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2bbc1c: 0x460202c2  mul.s       $f11, $f0, $f2
    ctx->pc = 0x2bbc1cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bbc20: 0x46050dc2  mul.s       $f23, $f1, $f5
    ctx->pc = 0x2bbc20u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2bbc24: 0xc7b00258  lwc1        $f16, 0x258($sp)
    ctx->pc = 0x2bbc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2bbc28: 0x4608d542  mul.s       $f21, $f26, $f8
    ctx->pc = 0x2bbc28u;
    ctx->f[21] = FPU_MUL_S(ctx->f[26], ctx->f[8]);
    // 0x2bbc2c: 0xc7af025c  lwc1        $f15, 0x25C($sp)
    ctx->pc = 0x2bbc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2bbc30: 0x4605d502  mul.s       $f20, $f26, $f5
    ctx->pc = 0x2bbc30u;
    ctx->f[20] = FPU_MUL_S(ctx->f[26], ctx->f[5]);
    // 0x2bbc34: 0xc7ae0260  lwc1        $f14, 0x260($sp)
    ctx->pc = 0x2bbc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2bbc38: 0x4603d982  mul.s       $f6, $f27, $f3
    ctx->pc = 0x2bbc38u;
    ctx->f[6] = FPU_MUL_S(ctx->f[27], ctx->f[3]);
    // 0x2bbc3c: 0xc7b10264  lwc1        $f17, 0x264($sp)
    ctx->pc = 0x2bbc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2bbc40: 0x4602d902  mul.s       $f4, $f27, $f2
    ctx->pc = 0x2bbc40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
    // 0x2bbc44: 0xc7b20268  lwc1        $f18, 0x268($sp)
    ctx->pc = 0x2bbc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2bbc48: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x2bbc48u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2bbc4c: 0xc7b3026c  lwc1        $f19, 0x26C($sp)
    ctx->pc = 0x2bbc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2bbc50: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x2bbc50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2bbc54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bbc54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc58: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2bbc58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2bbc5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bbc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc60: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2bbc60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bbc64: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x2bbc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x2bbc68: 0x46090e42  mul.s       $f25, $f1, $f9
    ctx->pc = 0x2bbc68u;
    ctx->f[25] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2bbc6c: 0x4609d582  mul.s       $f22, $f26, $f9
    ctx->pc = 0x2bbc6cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[26], ctx->f[9]);
    // 0x2bbc70: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x2bbc70u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2bbc74: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x2bbc74u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x2bbc78: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2bbc78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2bbc7c: 0x46100142  mul.s       $f5, $f0, $f16
    ctx->pc = 0x2bbc7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x2bbc80: 0x460f0202  mul.s       $f8, $f0, $f15
    ctx->pc = 0x2bbc80u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x2bbc84: 0x46153180  add.s       $f6, $f6, $f21
    ctx->pc = 0x2bbc84u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[21]);
    // 0x2bbc88: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x2bbc88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x2bbc8c: 0x46142100  add.s       $f4, $f4, $f20
    ctx->pc = 0x2bbc8cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[20]);
    // 0x2bbc90: 0x46096301  sub.s       $f12, $f12, $f9
    ctx->pc = 0x2bbc90u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[9]);
    // 0x2bbc94: 0x460edd42  mul.s       $f21, $f27, $f14
    ctx->pc = 0x2bbc94u;
    ctx->f[21] = FPU_MUL_S(ctx->f[27], ctx->f[14]);
    // 0x2bbc98: 0x46165280  add.s       $f10, $f10, $f22
    ctx->pc = 0x2bbc98u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[22]);
    // 0x2bbc9c: 0x4610da42  mul.s       $f9, $f27, $f16
    ctx->pc = 0x2bbc9cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[27], ctx->f[16]);
    // 0x2bbca0: 0x460ed382  mul.s       $f14, $f26, $f14
    ctx->pc = 0x2bbca0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[26], ctx->f[14]);
    // 0x2bbca4: 0x461939c0  add.s       $f7, $f7, $f25
    ctx->pc = 0x2bbca4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[25]);
    // 0x2bbca8: 0x460fdd02  mul.s       $f20, $f27, $f15
    ctx->pc = 0x2bbca8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[27], ctx->f[15]);
    // 0x2bbcac: 0x46055280  add.s       $f10, $f10, $f5
    ctx->pc = 0x2bbcacu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x2bbcb0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2bbcb0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2bbcb4: 0x46186b40  add.s       $f13, $f13, $f24
    ctx->pc = 0x2bbcb4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[24]);
    // 0x2bbcb8: 0x46175ac0  add.s       $f11, $f11, $f23
    ctx->pc = 0x2bbcb8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[23]);
    // 0x2bbcbc: 0x4610d402  mul.s       $f16, $f26, $f16
    ctx->pc = 0x2bbcbcu;
    ctx->f[16] = FPU_MUL_S(ctx->f[26], ctx->f[16]);
    // 0x2bbcc0: 0x460fd3c2  mul.s       $f15, $f26, $f15
    ctx->pc = 0x2bbcc0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[26], ctx->f[15]);
    // 0x2bbcc4: 0x46110802  mul.s       $f0, $f1, $f17
    ctx->pc = 0x2bbcc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x2bbcc8: 0x46120942  mul.s       $f5, $f1, $f18
    ctx->pc = 0x2bbcc8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
    // 0x2bbccc: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x2bbcccu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x2bbcd0: 0x460e1080  add.s       $f2, $f2, $f14
    ctx->pc = 0x2bbcd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
    // 0x2bbcd4: 0x460939c1  sub.s       $f7, $f7, $f9
    ctx->pc = 0x2bbcd4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[9]);
    // 0x2bbcd8: 0x4613d382  mul.s       $f14, $f26, $f19
    ctx->pc = 0x2bbcd8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[26], ctx->f[19]);
    // 0x2bbcdc: 0x4611d202  mul.s       $f8, $f26, $f17
    ctx->pc = 0x2bbcdcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[26], ctx->f[17]);
    // 0x2bbce0: 0x4612d242  mul.s       $f9, $f26, $f18
    ctx->pc = 0x2bbce0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[26], ctx->f[18]);
    // 0x2bbce4: 0x46130842  mul.s       $f1, $f1, $f19
    ctx->pc = 0x2bbce4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
    // 0x2bbce8: 0x46106300  add.s       $f12, $f12, $f16
    ctx->pc = 0x2bbce8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[16]);
    // 0x2bbcec: 0x460f18c0  add.s       $f3, $f3, $f15
    ctx->pc = 0x2bbcecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[15]);
    // 0x2bbcf0: 0x46146b41  sub.s       $f13, $f13, $f20
    ctx->pc = 0x2bbcf0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
    // 0x2bbcf4: 0x46155ac1  sub.s       $f11, $f11, $f21
    ctx->pc = 0x2bbcf4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[21]);
    // 0x2bbcf8: 0x4611dc42  mul.s       $f17, $f27, $f17
    ctx->pc = 0x2bbcf8u;
    ctx->f[17] = FPU_MUL_S(ctx->f[27], ctx->f[17]);
    // 0x2bbcfc: 0x4612dc82  mul.s       $f18, $f27, $f18
    ctx->pc = 0x2bbcfcu;
    ctx->f[18] = FPU_MUL_S(ctx->f[27], ctx->f[18]);
    // 0x2bbd00: 0x4613dcc2  mul.s       $f19, $f27, $f19
    ctx->pc = 0x2bbd00u;
    ctx->f[19] = FPU_MUL_S(ctx->f[27], ctx->f[19]);
    // 0x2bbd04: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x2bbd04u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x2bbd08: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x2bbd08u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x2bbd0c: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2bbd0cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2bbd10: 0x46116300  add.s       $f12, $f12, $f17
    ctx->pc = 0x2bbd10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[17]);
    // 0x2bbd14: 0xe7aa0330  swc1        $f10, 0x330($sp)
    ctx->pc = 0x2bbd14u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    // 0x2bbd18: 0x461218c0  add.s       $f3, $f3, $f18
    ctx->pc = 0x2bbd18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[18]);
    // 0x2bbd1c: 0xe7a60334  swc1        $f6, 0x334($sp)
    ctx->pc = 0x2bbd1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 820), bits); }
    // 0x2bbd20: 0x46131080  add.s       $f2, $f2, $f19
    ctx->pc = 0x2bbd20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[19]);
    // 0x2bbd24: 0xe7a40338  swc1        $f4, 0x338($sp)
    ctx->pc = 0x2bbd24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 824), bits); }
    // 0x2bbd28: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x2bbd28u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x2bbd2c: 0xe7ac033c  swc1        $f12, 0x33C($sp)
    ctx->pc = 0x2bbd2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 828), bits); }
    // 0x2bbd30: 0x46096b40  add.s       $f13, $f13, $f9
    ctx->pc = 0x2bbd30u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[9]);
    // 0x2bbd34: 0xe7a30340  swc1        $f3, 0x340($sp)
    ctx->pc = 0x2bbd34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
    // 0x2bbd38: 0x460e5ac0  add.s       $f11, $f11, $f14
    ctx->pc = 0x2bbd38u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[14]);
    // 0x2bbd3c: 0xe7a20344  swc1        $f2, 0x344($sp)
    ctx->pc = 0x2bbd3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 836), bits); }
    // 0x2bbd40: 0xe7a70348  swc1        $f7, 0x348($sp)
    ctx->pc = 0x2bbd40u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
    // 0x2bbd44: 0xe7ad034c  swc1        $f13, 0x34C($sp)
    ctx->pc = 0x2bbd44u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 844), bits); }
    // 0x2bbd48: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BBD48u;
    {
        const bool branch_taken_0x2bbd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD48u;
        // 0x2bbd4c: 0xe7ab0350  swc1        $f11, 0x350($sp) (Delay Slot)
        { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd48) {
            ctx->pc = 0x2BBDB4u;
            goto label_2bbdb4;
        }
    }
    ctx->pc = 0x2BBD50u;
    // 0x2bbd50: 0x24e20060  addiu       $v0, $a3, 0x60
    ctx->pc = 0x2bbd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x2bbd54: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2bbd54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bbd58: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x2bbd58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bbd5c: 0x0  nop
    ctx->pc = 0x2bbd5cu;
    // NOP
label_2bbd60:
    // 0x2bbd60: 0x68e50007  ldl         $a1, 0x7($a3)
    ctx->pc = 0x2bbd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bbd64: 0x6ce50000  ldr         $a1, 0x0($a3)
    ctx->pc = 0x2bbd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bbd68: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x2bbd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bbd6c: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x2bbd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bbd70: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x2bbd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bbd74: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x2bbd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bbd78: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x2bbd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bbd7c: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x2bbd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bbd80: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2bbd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbd84: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2bbd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbd88: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2bbd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbd8c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2bbd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbd90: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x2bbd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbd94: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x2bbd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbd98: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x2bbd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbd9c: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x2bbd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbda0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2bbda0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2bbda4: 0x14e2ffee  bne         $a3, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BBDA4u;
    {
        const bool branch_taken_0x2bbda4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BBDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBDA4u;
        // 0x2bbda8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbda4) {
            ctx->pc = 0x2BBD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbd60;
        }
    }
    ctx->pc = 0x2BBDACu;
    // 0x2bbdac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BBDACu;
    {
        const bool branch_taken_0x2bbdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBDACu;
        // 0x2bbdb0: 0x2466e668  addiu       $a2, $v1, -0x1998 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbdac) {
            ctx->pc = 0x2BBDF0u;
            goto label_2bbdf0;
        }
    }
    ctx->pc = 0x2BBDB4u;
label_2bbdb4:
    // 0x2bbdb4: 0x24e20060  addiu       $v0, $a3, 0x60
    ctx->pc = 0x2bbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x2bbdb8: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2bbdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bbdbc: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x2bbdbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2bbdc0:
    // 0x2bbdc0: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x2bbdc0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2bbdc4: 0xdceb0008  ld          $t3, 0x8($a3)
    ctx->pc = 0x2bbdc4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2bbdc8: 0xdcec0010  ld          $t4, 0x10($a3)
    ctx->pc = 0x2bbdc8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2bbdcc: 0xdced0018  ld          $t5, 0x18($a3)
    ctx->pc = 0x2bbdccu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2bbdd0: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x2bbdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x2bbdd4: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x2bbdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x2bbdd8: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x2bbdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x2bbddc: 0xfc8d0018  sd          $t5, 0x18($a0)
    ctx->pc = 0x2bbddcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 13));
    // 0x2bbde0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2bbde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2bbde4: 0x14e2fff6  bne         $a3, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BBDE4u;
    {
        const bool branch_taken_0x2bbde4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBDE4u;
        // 0x2bbde8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbde4) {
            ctx->pc = 0x2BBDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbdc0;
        }
    }
    ctx->pc = 0x2BBDECu;
    // 0x2bbdec: 0x2466e668  addiu       $a2, $v1, -0x1998
    ctx->pc = 0x2bbdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
label_2bbdf0:
    // 0x2bbdf0: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x2bbdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bbdf4: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x2bbdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bbdf8: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x2bbdf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2bbdfc: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x2bbdfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbe00: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x2bbe00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbe04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bbe04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe08: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x2bbe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2bbe0c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BBE0Cu;
    {
        const bool branch_taken_0x2bbe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE0Cu;
        // 0x2bbe10: 0xac890008  sw          $t1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe0c) {
            ctx->pc = 0x2BBE6Cu;
            goto label_2bbe6c;
        }
    }
    ctx->pc = 0x2BBE14u;
    // 0x2bbe14: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x2bbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_2bbe18:
    // 0x2bbe18: 0x68cc0007  ldl         $t4, 0x7($a2)
    ctx->pc = 0x2bbe18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bbe1c: 0x6ccc0000  ldr         $t4, 0x0($a2)
    ctx->pc = 0x2bbe1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bbe20: 0x68cd000f  ldl         $t5, 0xF($a2)
    ctx->pc = 0x2bbe20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2bbe24: 0x6ccd0008  ldr         $t5, 0x8($a2)
    ctx->pc = 0x2bbe24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2bbe28: 0x68c40017  ldl         $a0, 0x17($a2)
    ctx->pc = 0x2bbe28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2bbe2c: 0x6cc40010  ldr         $a0, 0x10($a2)
    ctx->pc = 0x2bbe2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2bbe30: 0x68c7001f  ldl         $a3, 0x1F($a2)
    ctx->pc = 0x2bbe30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bbe34: 0x6cc70018  ldr         $a3, 0x18($a2)
    ctx->pc = 0x2bbe34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bbe38: 0xb0ac0007  sdl         $t4, 0x7($a1)
    ctx->pc = 0x2bbe38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbe3c: 0xb4ac0000  sdr         $t4, 0x0($a1)
    ctx->pc = 0x2bbe3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbe40: 0xb0ad000f  sdl         $t5, 0xF($a1)
    ctx->pc = 0x2bbe40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbe44: 0xb4ad0008  sdr         $t5, 0x8($a1)
    ctx->pc = 0x2bbe44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbe48: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x2bbe48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbe4c: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x2bbe4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbe50: 0xb0a7001f  sdl         $a3, 0x1F($a1)
    ctx->pc = 0x2bbe50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbe54: 0xb4a70018  sdr         $a3, 0x18($a1)
    ctx->pc = 0x2bbe54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbe58: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2bbe58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2bbe5c: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BBE5Cu;
    {
        const bool branch_taken_0x2bbe5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE5Cu;
        // 0x2bbe60: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe5c) {
            ctx->pc = 0x2BBE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbe18;
        }
    }
    ctx->pc = 0x2BBE64u;
    // 0x2bbe64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2BBE64u;
    {
        const bool branch_taken_0x2bbe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE64u;
        // 0x2bbe68: 0x2463e668  addiu       $v1, $v1, -0x1998 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe64) {
            ctx->pc = 0x2BBEA0u;
            goto label_2bbea0;
        }
    }
    ctx->pc = 0x2BBE6Cu;
label_2bbe6c:
    // 0x2bbe6c: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x2bbe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_2bbe70:
    // 0x2bbe70: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x2bbe70u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bbe74: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x2bbe74u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2bbe78: 0xdcca0010  ld          $t2, 0x10($a2)
    ctx->pc = 0x2bbe78u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2bbe7c: 0xdccb0018  ld          $t3, 0x18($a2)
    ctx->pc = 0x2bbe7cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2bbe80: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x2bbe80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x2bbe84: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x2bbe84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x2bbe88: 0xfcaa0010  sd          $t2, 0x10($a1)
    ctx->pc = 0x2bbe88u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 10));
    // 0x2bbe8c: 0xfcab0018  sd          $t3, 0x18($a1)
    ctx->pc = 0x2bbe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 11));
    // 0x2bbe90: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2bbe90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2bbe94: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BBE94u;
    {
        const bool branch_taken_0x2bbe94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE94u;
        // 0x2bbe98: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe94) {
            ctx->pc = 0x2BBE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbe70;
        }
    }
    ctx->pc = 0x2BBE9Cu;
    // 0x2bbe9c: 0x2463e668  addiu       $v1, $v1, -0x1998
    ctx->pc = 0x2bbe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
label_2bbea0:
    // 0x2bbea0: 0x68cc0007  ldl         $t4, 0x7($a2)
    ctx->pc = 0x2bbea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bbea4: 0x6ccc0000  ldr         $t4, 0x0($a2)
    ctx->pc = 0x2bbea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bbea8: 0x8ccd0008  lw          $t5, 0x8($a2)
    ctx->pc = 0x2bbea8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2bbeac: 0xb0ac0007  sdl         $t4, 0x7($a1)
    ctx->pc = 0x2bbeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbeb0: 0xb4ac0000  sdr         $t4, 0x0($a1)
    ctx->pc = 0x2bbeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbeb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bbeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbeb8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2bbeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2bbebc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BBEBCu;
    {
        const bool branch_taken_0x2bbebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEBCu;
        // 0x2bbec0: 0xacad0008  sw          $t5, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbebc) {
            ctx->pc = 0x2BBF1Cu;
            goto label_2bbf1c;
        }
    }
    ctx->pc = 0x2BBEC4u;
    // 0x2bbec4: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2bbec8:
    // 0x2bbec8: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x2bbec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bbecc: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x2bbeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bbed0: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x2bbed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bbed4: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x2bbed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bbed8: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x2bbed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2bbedc: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x2bbedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2bbee0: 0x686c001f  ldl         $t4, 0x1F($v1)
    ctx->pc = 0x2bbee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bbee4: 0x6c6c0018  ldr         $t4, 0x18($v1)
    ctx->pc = 0x2bbee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bbee8: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x2bbee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbeec: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x2bbeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbef0: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x2bbef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbef4: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x2bbef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbef8: 0xb08b0017  sdl         $t3, 0x17($a0)
    ctx->pc = 0x2bbef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbefc: 0xb48b0010  sdr         $t3, 0x10($a0)
    ctx->pc = 0x2bbefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbf00: 0xb08c001f  sdl         $t4, 0x1F($a0)
    ctx->pc = 0x2bbf00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbf04: 0xb48c0018  sdr         $t4, 0x18($a0)
    ctx->pc = 0x2bbf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbf08: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bbf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bbf0c: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BBF0Cu;
    {
        const bool branch_taken_0x2bbf0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF0Cu;
        // 0x2bbf10: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf0c) {
            ctx->pc = 0x2BBEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbec8;
        }
    }
    ctx->pc = 0x2BBF14u;
    // 0x2bbf14: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BBF14u;
    {
        const bool branch_taken_0x2bbf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf14) {
            ctx->pc = 0x2BBF4Cu;
            goto label_2bbf4c;
        }
    }
    ctx->pc = 0x2BBF1Cu;
label_2bbf1c:
    // 0x2bbf1c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bbf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2bbf20:
    // 0x2bbf20: 0xdc6d0000  ld          $t5, 0x0($v1)
    ctx->pc = 0x2bbf20u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bbf24: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2bbf24u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bbf28: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x2bbf28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bbf2c: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x2bbf2cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bbf30: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x2bbf30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x2bbf34: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x2bbf34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x2bbf38: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x2bbf38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x2bbf3c: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x2bbf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x2bbf40: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bbf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bbf44: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BBF44u;
    {
        const bool branch_taken_0x2bbf44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF44u;
        // 0x2bbf48: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf44) {
            ctx->pc = 0x2BBF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbf20;
        }
    }
    ctx->pc = 0x2BBF4Cu;
label_2bbf4c:
    // 0x2bbf4c: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x2bbf4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bbf50: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x2bbf50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bbf54: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x2bbf54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bbf58: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x2bbf58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbf5c: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x2bbf5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bbf60: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x2bbf60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x2bbf64: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bbf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bbf68: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2bbf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bbf6c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2bbf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2bbf70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BBF70u;
    {
        const bool branch_taken_0x2bbf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF70u;
        // 0x2bbf74: 0xc7a00320  lwc1        $f0, 0x320($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf70) {
            ctx->pc = 0x2BBF9Cu;
            goto label_2bbf9c;
        }
    }
    ctx->pc = 0x2BBF78u;
    // 0x2bbf78: 0xc7a10324  lwc1        $f1, 0x324($sp)
    ctx->pc = 0x2bbf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbf7c: 0xc7a20328  lwc1        $f2, 0x328($sp)
    ctx->pc = 0x2bbf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbf80: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bbf80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bbf84: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bbf84u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bbf88: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bbf88u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bbf8c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bbf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bbf90: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x2bbf90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2bbf94: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x2bbf94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2bbf98: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bbf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2bbf9c:
    // 0x2bbf9c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2bbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bbfa0: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x2bbfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x2bbfa4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BBFA4u;
    {
        const bool branch_taken_0x2bbfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFA4u;
        // 0x2bbfa8: 0xc7a00360  lwc1        $f0, 0x360($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfa4) {
            ctx->pc = 0x2BBFC0u;
            goto label_2bbfc0;
        }
    }
    ctx->pc = 0x2BBFACu;
    // 0x2bbfac: 0xc7a10364  lwc1        $f1, 0x364($sp)
    ctx->pc = 0x2bbfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbfb0: 0xc7a20368  lwc1        $f2, 0x368($sp)
    ctx->pc = 0x2bbfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbfb4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2bbfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bbfb8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x2bbfb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2bbfbc: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x2bbfbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_2bbfc0:
    // 0x2bbfc0: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x2bbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bbfc4: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x2bbfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x2bbfc8: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x2bbfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2bbfcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bbfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bbfd0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BBFD0u;
    {
        const bool branch_taken_0x2bbfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFD0u;
        // 0x2bbfd4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfd0) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BBFD8u;
    // 0x2bbfd8: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x2bbfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbfdc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bbfdcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bbfe0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2bbfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bbfe4: 0xc48100b0  lwc1        $f1, 0xB0($a0)
    ctx->pc = 0x2bbfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbfe8: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x2bbfe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2bbfec: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x2bbfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbff0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bbff0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bbff4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2bbff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2bbff8: 0xc48100b0  lwc1        $f1, 0xB0($a0)
    ctx->pc = 0x2bbff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbffc: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x2bbffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2bc000: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x2bc000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc004: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bc004u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bc008: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2bc008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2bc00c: 0xc48100b0  lwc1        $f1, 0xB0($a0)
    ctx->pc = 0x2bc00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc010: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BC010u;
    {
        const bool branch_taken_0x2bc010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC010u;
        // 0x2bc014: 0xe7a1013c  swc1        $f1, 0x13C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc010) {
            ctx->pc = 0x2BC03Cu;
            goto label_2bc03c;
        }
    }
    ctx->pc = 0x2BC018u;
label_2bc018:
    // 0x2bc018: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bc018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2bc01c: 0xc4403a70  lwc1        $f0, 0x3A70($v0)
    ctx->pc = 0x2bc01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc020: 0xc4613a6c  lwc1        $f1, 0x3A6C($v1)
    ctx->pc = 0x2bc020u;
    { uint32_t bits = FAST_READ32(0x6B3A6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc024: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2bc024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2bc028: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x2bc028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2bc02c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2bc02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bc030: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x2bc030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2bc034: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2bc034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2bc038: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x2bc038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2bc03c:
    // 0x2bc03c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2bc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2bc040: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2bc040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2bc044: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2bc044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2bc048: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x2bc048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x2bc04c: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x2bc04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x2bc050: 0x12e00013  beqz        $s7, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BC050u;
    {
        const bool branch_taken_0x2bc050 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC050u;
        // 0x2bc054: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc050) {
            ctx->pc = 0x2BC0A0u;
            goto label_2bc0a0;
        }
    }
    ctx->pc = 0x2BC058u;
    // 0x2bc058: 0x6bac0337  ldl         $t4, 0x337($sp)
    ctx->pc = 0x2bc058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 823); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bc05c: 0x6fac0330  ldr         $t4, 0x330($sp)
    ctx->pc = 0x2bc05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bc060: 0x8fad0338  lw          $t5, 0x338($sp)
    ctx->pc = 0x2bc060u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
    // 0x2bc064: 0xb3ac0017  sdl         $t4, 0x17($sp)
    ctx->pc = 0x2bc064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc068: 0xb7ac0010  sdr         $t4, 0x10($sp)
    ctx->pc = 0x2bc068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc06c: 0xafad0018  sw          $t5, 0x18($sp)
    ctx->pc = 0x2bc06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 13));
    // 0x2bc070: 0x6ba40343  ldl         $a0, 0x343($sp)
    ctx->pc = 0x2bc070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 835); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2bc074: 0x6fa4033c  ldr         $a0, 0x33C($sp)
    ctx->pc = 0x2bc074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 828); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2bc078: 0x8fa50344  lw          $a1, 0x344($sp)
    ctx->pc = 0x2bc078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
    // 0x2bc07c: 0xb3a40087  sdl         $a0, 0x87($sp)
    ctx->pc = 0x2bc07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc080: 0xb7a40080  sdr         $a0, 0x80($sp)
    ctx->pc = 0x2bc080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc084: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x2bc084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x2bc088: 0x6ba8034f  ldl         $t0, 0x34F($sp)
    ctx->pc = 0x2bc088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 847); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bc08c: 0x6fa80348  ldr         $t0, 0x348($sp)
    ctx->pc = 0x2bc08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 840); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bc090: 0x8fa90350  lw          $t1, 0x350($sp)
    ctx->pc = 0x2bc090u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x2bc094: 0xb3a800f7  sdl         $t0, 0xF7($sp)
    ctx->pc = 0x2bc094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc098: 0xb7a800f0  sdr         $t0, 0xF0($sp)
    ctx->pc = 0x2bc098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc09c: 0xafa900f8  sw          $t1, 0xF8($sp)
    ctx->pc = 0x2bc09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 9));
label_2bc0a0:
    // 0x2bc0a0: 0x12c0001b  beqz        $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BC0A0u;
    {
        const bool branch_taken_0x2bc0a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0A0u;
        // 0x2bc0a4: 0xc7a00330  lwc1        $f0, 0x330($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0a0) {
            ctx->pc = 0x2BC110u;
            goto label_2bc110;
        }
    }
    ctx->pc = 0x2BC0A8u;
    // 0x2bc0a8: 0xc7a10334  lwc1        $f1, 0x334($sp)
    ctx->pc = 0x2bc0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc0ac: 0xc7a20338  lwc1        $f2, 0x338($sp)
    ctx->pc = 0x2bc0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc0b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bc0b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bc0b4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bc0b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bc0b8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bc0b8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bc0bc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bc0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bc0c0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bc0c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bc0c4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2bc0c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2bc0c8: 0xc7a1033c  lwc1        $f1, 0x33C($sp)
    ctx->pc = 0x2bc0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc0cc: 0xc7a20340  lwc1        $f2, 0x340($sp)
    ctx->pc = 0x2bc0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc0d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bc0d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bc0d4: 0xc7a00344  lwc1        $f0, 0x344($sp)
    ctx->pc = 0x2bc0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc0d8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bc0d8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bc0dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bc0dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bc0e0: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2bc0e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2bc0e4: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x2bc0e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2bc0e8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2bc0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2bc0ec: 0xc7a10348  lwc1        $f1, 0x348($sp)
    ctx->pc = 0x2bc0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc0f0: 0xc7a2034c  lwc1        $f2, 0x34C($sp)
    ctx->pc = 0x2bc0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc0f4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bc0f4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bc0f8: 0xc7a00350  lwc1        $f0, 0x350($sp)
    ctx->pc = 0x2bc0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc0fc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bc0fcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bc100: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bc100u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bc104: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x2bc104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2bc108: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x2bc108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2bc10c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2bc10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_2bc110:
    // 0x2bc110: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bc110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bc114: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bc114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc118: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x2bc118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc11c: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x2bc11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc120: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x2bc120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x2bc124: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x2bc124u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc128: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2bc128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc12c: 0x450002db  bc1f        . + 4 + (0x2DB << 2)
    ctx->pc = 0x2BC12Cu;
    {
        const bool branch_taken_0x2bc12c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc12c) {
            ctx->pc = 0x2BCC9Cu;
            goto label_2bcc9c;
        }
    }
    ctx->pc = 0x2BC134u;
    // 0x2bc134: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc13c: 0xc780819c  lwc1        $f0, -0x7E64($gp)
    ctx->pc = 0x2bc13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc140: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2bc140u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2bc144: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bc144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x2bc148: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bc148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc14c: 0x0  nop
    ctx->pc = 0x2bc14cu;
    // NOP
    // 0x2bc150: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC150u;
    {
        const bool branch_taken_0x2bc150 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc150) {
            ctx->pc = 0x2BC154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC150u;
            // 0x2bc154: 0x461c0801  sub.s       $f0, $f1, $f28 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC160u;
            goto label_2bc160;
        }
    }
    ctx->pc = 0x2BC158u;
    // 0x2bc158: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x2bc158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc15c: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bc15cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
label_2bc160:
    // 0x2bc160: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2bc160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bc164: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x2bc164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2bc168: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2bc168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2bc16c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bc16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bc170: 0x461d0802  mul.s       $f0, $f1, $f29
    ctx->pc = 0x2bc170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x2bc174: 0xc78181a4  lwc1        $f1, -0x7E5C($gp)
    ctx->pc = 0x2bc174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc178: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bc178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc17c: 0xc44200a8  lwc1        $f2, 0xA8($v0)
    ctx->pc = 0x2bc17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc180: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bc180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc184: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x2bc184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2bc188: 0x26b50003  addiu       $s5, $s5, 0x3
    ctx->pc = 0x2bc188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x2bc18c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bc18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bc190: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2bc190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bc194: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x2bc194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2bc198: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2bc198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2bc19c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2bc19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2bc1a0: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BC1A0u;
    SET_GPR_U32(ctx, 31, 0x2BC1A8u);
    ctx->pc = 0x2BC1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC1A0u;
    // 0x2bc1a4: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BC1A0u, 0x2BC1A8u)) {
        return;
    }
    ctx->pc = 0x2BC1A8u;
label_2bc1a8:
    // 0x2bc1a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bc1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc1ac: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BC1ACu;
    SET_GPR_U32(ctx, 31, 0x2BC1B4u);
    ctx->pc = 0x2BC1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC1ACu;
    // 0x2bc1b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BC1ACu, 0x2BC1B4u)) {
        return;
    }
    ctx->pc = 0x2BC1B4u;
label_2bc1b4:
    // 0x2bc1b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bc1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc1b8: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BC1B8u;
    SET_GPR_U32(ctx, 31, 0x2BC1C0u);
    ctx->pc = 0x2BC1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC1B8u;
    // 0x2bc1bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BC1B8u, 0x2BC1C0u)) {
        return;
    }
    ctx->pc = 0x2BC1C0u;
label_2bc1c0:
    // 0x2bc1c0: 0x100002b6  b           . + 4 + (0x2B6 << 2)
    ctx->pc = 0x2BC1C0u;
    {
        const bool branch_taken_0x2bc1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1C0u;
        // 0x2bc1c4: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1c0) {
            ctx->pc = 0x2BCC9Cu;
            goto label_2bcc9c;
        }
    }
    ctx->pc = 0x2BC1C8u;
label_2bc1c8:
    // 0x2bc1c8: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bc1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bc1cc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2bc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2bc1d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bc1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bc1d4: 0x544000c5  bnel        $v0, $zero, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2BC1D4u;
    {
        const bool branch_taken_0x2bc1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc1d4) {
            ctx->pc = 0x2BC1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC1D4u;
            // 0x2bc1d8: 0x8c62003c  lw          $v0, 0x3C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC4ECu;
            goto label_2bc4ec;
        }
    }
    ctx->pc = 0x2BC1DCu;
    // 0x2bc1dc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2bc1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bc1e0: 0x30420101  andi        $v0, $v0, 0x101
    ctx->pc = 0x2bc1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)257);
    // 0x2bc1e4: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2BC1E4u;
    {
        const bool branch_taken_0x2bc1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1E4u;
        // 0x2bc1e8: 0xc7a001d0  lwc1        $f0, 0x1D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1e4) {
            ctx->pc = 0x2BC4E8u;
            goto label_2bc4e8;
        }
    }
    ctx->pc = 0x2BC1ECu;
    // 0x2bc1ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc1f0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2bc1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bc1f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bc1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bc1f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc1fc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2bc1fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2bc200: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bc200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bc204: 0x46000004  c1          0x4
    ctx->pc = 0x2bc204u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bc208: 0xc642006c  lwc1        $f2, 0x6C($s2)
    ctx->pc = 0x2bc208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc20c: 0x46002203  div.s       $f8, $f4, $f0
    ctx->pc = 0x2bc20cu;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[0]);
    // 0x2bc210: 0xc6430060  lwc1        $f3, 0x60($s2)
    ctx->pc = 0x2bc210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc214: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2bc214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2bc218: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x2bc218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2bc21c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc21cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc220: 0x46000004  c1          0x4
    ctx->pc = 0x2bc220u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bc224: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x2bc224u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[0]);
    // 0x2bc228: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x2bc228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc22c: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x2bc22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc230: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bc230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bc234: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2bc234u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bc238: 0x2445e668  addiu       $a1, $v0, -0x1998
    ctx->pc = 0x2bc238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960744));
    // 0x2bc23c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2bc23cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bc240: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bc240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc244: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2bc244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2bc248: 0x46044182  mul.s       $f6, $f8, $f4
    ctx->pc = 0x2bc248u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x2bc24c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2bc24cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2bc250: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BC250u;
    {
        const bool branch_taken_0x2bc250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC250u;
        // 0x2bc254: 0x46023042  mul.s       $f1, $f6, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc250) {
            ctx->pc = 0x2BC2B8u;
            goto label_2bc2b8;
        }
    }
    ctx->pc = 0x2BC258u;
    // 0x2bc258: 0x46080942  mul.s       $f5, $f1, $f8
    ctx->pc = 0x2bc258u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2bc25c: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x2bc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x2bc260: 0x460009c7  neg.s       $f7, $f1
    ctx->pc = 0x2bc260u;
    ctx->f[7] = FPU_NEG_S(ctx->f[1]);
label_2bc264:
    // 0x2bc264: 0x68ac0007  ldl         $t4, 0x7($a1)
    ctx->pc = 0x2bc264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bc268: 0x6cac0000  ldr         $t4, 0x0($a1)
    ctx->pc = 0x2bc268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bc26c: 0x68ad000f  ldl         $t5, 0xF($a1)
    ctx->pc = 0x2bc26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2bc270: 0x6cad0008  ldr         $t5, 0x8($a1)
    ctx->pc = 0x2bc270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2bc274: 0x68a30017  ldl         $v1, 0x17($a1)
    ctx->pc = 0x2bc274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2bc278: 0x6ca30010  ldr         $v1, 0x10($a1)
    ctx->pc = 0x2bc278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2bc27c: 0x68a6001f  ldl         $a2, 0x1F($a1)
    ctx->pc = 0x2bc27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bc280: 0x6ca60018  ldr         $a2, 0x18($a1)
    ctx->pc = 0x2bc280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bc284: 0xb08c0007  sdl         $t4, 0x7($a0)
    ctx->pc = 0x2bc284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc288: 0xb48c0000  sdr         $t4, 0x0($a0)
    ctx->pc = 0x2bc288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc28c: 0xb08d000f  sdl         $t5, 0xF($a0)
    ctx->pc = 0x2bc28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc290: 0xb48d0008  sdr         $t5, 0x8($a0)
    ctx->pc = 0x2bc290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc294: 0xb0830017  sdl         $v1, 0x17($a0)
    ctx->pc = 0x2bc294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc298: 0xb4830010  sdr         $v1, 0x10($a0)
    ctx->pc = 0x2bc298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc29c: 0xb086001f  sdl         $a2, 0x1F($a0)
    ctx->pc = 0x2bc29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc2a0: 0xb4860018  sdr         $a2, 0x18($a0)
    ctx->pc = 0x2bc2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc2a4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bc2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bc2a8: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BC2A8u;
    {
        const bool branch_taken_0x2bc2a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2A8u;
        // 0x2bc2ac: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2a8) {
            ctx->pc = 0x2BC264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc264;
        }
    }
    ctx->pc = 0x2BC2B0u;
    // 0x2bc2b0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC2B0u;
    {
        const bool branch_taken_0x2bc2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2B0u;
        // 0x2bc2b4: 0x8e43004c  lw          $v1, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2b0) {
            ctx->pc = 0x2BC2F4u;
            goto label_2bc2f4;
        }
    }
    ctx->pc = 0x2BC2B8u;
label_2bc2b8:
    // 0x2bc2b8: 0x46080942  mul.s       $f5, $f1, $f8
    ctx->pc = 0x2bc2b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2bc2bc: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x2bc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x2bc2c0: 0x460009c7  neg.s       $f7, $f1
    ctx->pc = 0x2bc2c0u;
    ctx->f[7] = FPU_NEG_S(ctx->f[1]);
label_2bc2c4:
    // 0x2bc2c4: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x2bc2c4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bc2c8: 0xdca80008  ld          $t0, 0x8($a1)
    ctx->pc = 0x2bc2c8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bc2cc: 0xdca90010  ld          $t1, 0x10($a1)
    ctx->pc = 0x2bc2ccu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2bc2d0: 0xdcaa0018  ld          $t2, 0x18($a1)
    ctx->pc = 0x2bc2d0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2bc2d4: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x2bc2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x2bc2d8: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x2bc2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x2bc2dc: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x2bc2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x2bc2e0: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x2bc2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x2bc2e4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bc2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bc2e8: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BC2E8u;
    {
        const bool branch_taken_0x2bc2e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2E8u;
        // 0x2bc2ec: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2e8) {
            ctx->pc = 0x2BC2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc2c4;
        }
    }
    ctx->pc = 0x2BC2F0u;
    // 0x2bc2f0: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bc2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2bc2f4:
    // 0x2bc2f4: 0x68ab0007  ldl         $t3, 0x7($a1)
    ctx->pc = 0x2bc2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2bc2f8: 0x6cab0000  ldr         $t3, 0x0($a1)
    ctx->pc = 0x2bc2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2bc2fc: 0x8cac0008  lw          $t4, 0x8($a1)
    ctx->pc = 0x2bc2fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bc300: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x2bc300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc304: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x2bc304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc308: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x2bc308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x2bc30c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2bc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bc310: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bc310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bc314: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BC314u;
    {
        const bool branch_taken_0x2bc314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC314u;
        // 0x2bc318: 0xc7a3023c  lwc1        $f3, 0x23C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc314) {
            ctx->pc = 0x2BC33Cu;
            goto label_2bc33c;
        }
    }
    ctx->pc = 0x2BC31Cu;
    // 0x2bc31c: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x2bc31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc320: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x2bc320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc324: 0xc7a20230  lwc1        $f2, 0x230($sp)
    ctx->pc = 0x2bc324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc328: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bc328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bc32c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bc32cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bc330: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc334: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2bc334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2bc338: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bc338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2bc33c:
    // 0x2bc33c: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bc33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bc340: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2bc340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bc344: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2bc344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2bc348: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BC348u;
    {
        const bool branch_taken_0x2bc348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC348u;
        // 0x2bc34c: 0xc7a3031c  lwc1        $f3, 0x31C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc348) {
            ctx->pc = 0x2BC374u;
            goto label_2bc374;
        }
    }
    ctx->pc = 0x2BC350u;
    // 0x2bc350: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x2bc350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2bc354: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x2bc354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc358: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x2bc358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc35c: 0xc7a40310  lwc1        $f4, 0x310($sp)
    ctx->pc = 0x2bc35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bc360: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2bc360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2bc364: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bc364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bc368: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bc368u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bc36c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2bc36cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bc370: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2bc370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2bc374:
    // 0x2bc374: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x2bc374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bc378: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2bc378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2bc37c: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x2bc37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2bc380: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bc380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bc384: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC384u;
    {
        const bool branch_taken_0x2bc384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC384u;
        // 0x2bc388: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc384) {
            ctx->pc = 0x2BC3A0u;
            goto label_2bc3a0;
        }
    }
    ctx->pc = 0x2BC38Cu;
    // 0x2bc38c: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x2bc38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc390: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bc390u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bc394: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2bc394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bc398: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC398u;
    {
        const bool branch_taken_0x2bc398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC398u;
        // 0x2bc39c: 0xc48100a4  lwc1        $f1, 0xA4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc398) {
            ctx->pc = 0x2BC3B0u;
            goto label_2bc3b0;
        }
    }
    ctx->pc = 0x2BC3A0u;
label_2bc3a0:
    // 0x2bc3a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bc3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2bc3a4: 0xc4403a70  lwc1        $f0, 0x3A70($v0)
    ctx->pc = 0x2bc3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc3a8: 0xc4613a6c  lwc1        $f1, 0x3A6C($v1)
    ctx->pc = 0x2bc3a8u;
    { uint32_t bits = FAST_READ32(0x6B3A6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc3ac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2bc3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2bc3b0:
    // 0x2bc3b0: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x2bc3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2bc3b4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2bc3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2bc3b8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2bc3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2bc3bc: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x2bc3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc3c0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2bc3c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2bc3c4: 0xc7a60244  lwc1        $f6, 0x244($sp)
    ctx->pc = 0x2bc3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bc3c8: 0xc7a50240  lwc1        $f5, 0x240($sp)
    ctx->pc = 0x2bc3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bc3cc: 0xc7a40248  lwc1        $f4, 0x248($sp)
    ctx->pc = 0x2bc3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bc3d0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2bc3d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2bc3d4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2bc3d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2bc3d8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2bc3d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2bc3dc: 0x46083842  mul.s       $f1, $f7, $f8
    ctx->pc = 0x2bc3dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x2bc3e0: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2bc3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc3e4: 0xc7a3024c  lwc1        $f3, 0x24C($sp)
    ctx->pc = 0x2bc3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc3e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc3e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc3ec: 0xc7a20250  lwc1        $f2, 0x250($sp)
    ctx->pc = 0x2bc3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc3f0: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x2bc3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc3f4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2bc3f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bc3f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bc3f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bc3fc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2bc3fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bc400: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x2bc400u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2bc404: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2bc404u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2bc408: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x2bc408u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2bc40c: 0xe7a502a0  swc1        $f5, 0x2A0($sp)
    ctx->pc = 0x2bc40cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2bc410: 0xe7a402a8  swc1        $f4, 0x2A8($sp)
    ctx->pc = 0x2bc410u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2bc414: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC414u;
    {
        const bool branch_taken_0x2bc414 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC414u;
        // 0x2bc418: 0xe7a602a4  swc1        $f6, 0x2A4($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc414) {
            ctx->pc = 0x2BC438u;
            goto label_2bc438;
        }
    }
    ctx->pc = 0x2BC41Cu;
    // 0x2bc41c: 0x6ba302a7  ldl         $v1, 0x2A7($sp)
    ctx->pc = 0x2bc41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2bc420: 0x6fa302a0  ldr         $v1, 0x2A0($sp)
    ctx->pc = 0x2bc420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2bc424: 0x8fa402a8  lw          $a0, 0x2A8($sp)
    ctx->pc = 0x2bc424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x2bc428: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x2bc428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc42c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x2bc42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc430: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bc430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bc434: 0x0  nop
    ctx->pc = 0x2bc434u;
    // NOP
label_2bc438:
    // 0x2bc438: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BC438u;
    {
        const bool branch_taken_0x2bc438 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC438u;
        // 0x2bc43c: 0xc7a002a0  lwc1        $f0, 0x2A0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc438) {
            ctx->pc = 0x2BC460u;
            goto label_2bc460;
        }
    }
    ctx->pc = 0x2BC440u;
    // 0x2bc440: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x2bc440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc444: 0xc7a202a8  lwc1        $f2, 0x2A8($sp)
    ctx->pc = 0x2bc444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc448: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bc448u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bc44c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bc44cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bc450: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bc450u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bc454: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bc454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bc458: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bc458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bc45c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2bc45cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2bc460:
    // 0x2bc460: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bc460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bc464: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bc464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc468: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bc468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc46c: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x2bc46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc470: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x2bc470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x2bc474: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x2bc474u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc478: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2bc478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc47c: 0x0  nop
    ctx->pc = 0x2bc47cu;
    // NOP
    // 0x2bc480: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x2BC480u;
    {
        const bool branch_taken_0x2bc480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc480) {
            ctx->pc = 0x2BC484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC480u;
            // 0x2bc484: 0x8e43004c  lw          $v1, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC4E8u;
            goto label_2bc4e8;
        }
    }
    ctx->pc = 0x2BC488u;
    // 0x2bc488: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc48c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc490: 0xc78081a8  lwc1        $f0, -0x7E58($gp)
    ctx->pc = 0x2bc490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc494: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2bc494u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2bc498: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bc498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x2bc49c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bc49cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc4a0: 0x0  nop
    ctx->pc = 0x2bc4a0u;
    // NOP
    // 0x2bc4a4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC4A4u;
    {
        const bool branch_taken_0x2bc4a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc4a4) {
            ctx->pc = 0x2BC4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC4A4u;
            // 0x2bc4a8: 0x461c0801  sub.s       $f0, $f1, $f28 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC4B4u;
            goto label_2bc4b4;
        }
    }
    ctx->pc = 0x2BC4ACu;
    // 0x2bc4ac: 0xc78081ac  lwc1        $f0, -0x7E54($gp)
    ctx->pc = 0x2bc4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc4b0: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bc4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
label_2bc4b4:
    // 0x2bc4b4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2bc4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bc4b8: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bc4bc: 0x461d0802  mul.s       $f0, $f1, $f29
    ctx->pc = 0x2bc4bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x2bc4c0: 0xc78181b0  lwc1        $f1, -0x7E50($gp)
    ctx->pc = 0x2bc4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc4c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bc4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4c8: 0xc442009c  lwc1        $f2, 0x9C($v0)
    ctx->pc = 0x2bc4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc4cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bc4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4d0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2bc4d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bc4d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bc4d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bc4d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bc4d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bc4dc: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BC4DCu;
    SET_GPR_U32(ctx, 31, 0x2BC4E4u);
    ctx->pc = 0x2BC4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4DCu;
    // 0x2bc4e0: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BC4DCu, 0x2BC4E4u)) {
        return;
    }
    ctx->pc = 0x2BC4E4u;
label_2bc4e4:
    // 0x2bc4e4: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2bc4e8:
    // 0x2bc4e8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2bc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2bc4ec:
    // 0x2bc4ec: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2bc4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2bc4f0: 0x24827  nor         $t1, $zero, $v0
    ctx->pc = 0x2bc4f0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2bc4f4: 0x512001e9  beql        $t1, $zero, . + 4 + (0x1E9 << 2)
    ctx->pc = 0x2BC4F4u;
    {
        const bool branch_taken_0x2bc4f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4f4) {
            ctx->pc = 0x2BC4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC4F4u;
            // 0x2bc4f8: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCC9Cu;
            goto label_2bcc9c;
        }
    }
    ctx->pc = 0x2BC4FCu;
    // 0x2bc4fc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2bc4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bc500: 0x30420606  andi        $v0, $v0, 0x606
    ctx->pc = 0x2bc500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1542);
    // 0x2bc504: 0x104001e4  beqz        $v0, . + 4 + (0x1E4 << 2)
    ctx->pc = 0x2BC504u;
    {
        const bool branch_taken_0x2bc504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC504u;
        // 0x2bc508: 0xc7aa01d0  lwc1        $f10, 0x1D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc504) {
            ctx->pc = 0x2BCC98u;
            goto label_2bcc98;
        }
    }
    ctx->pc = 0x2BC50Cu;
    // 0x2bc50c: 0xc648006c  lwc1        $f8, 0x6C($s2)
    ctx->pc = 0x2bc50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2bc510: 0xc6460060  lwc1        $f6, 0x60($s2)
    ctx->pc = 0x2bc510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bc514: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x2bc514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2bc518: 0x46063242  mul.s       $f9, $f6, $f6
    ctx->pc = 0x2bc518u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2bc51c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc520: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2bc520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2bc524: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2bc524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2bc528: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc52c: 0x460b5380  add.s       $f14, $f10, $f11
    ctx->pc = 0x2bc52cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[10], ctx->f[11]);
    // 0x2bc530: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2bc530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2bc534: 0x460e7540  add.s       $f21, $f14, $f14
    ctx->pc = 0x2bc534u;
    ctx->f[21] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
    // 0x2bc538: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bc538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bc53c: 0x46150304  c1          0x150304
    ctx->pc = 0x2bc53cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[21]);
    // 0x2bc540: 0x46000344  c1          0x344
    ctx->pc = 0x2bc540u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bc544: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bc544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bc548: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2bc548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2bc54c: 0x46000140  add.s       $f5, $f0, $f0
    ctx->pc = 0x2bc54cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bc550: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2bc550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2bc554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc558: 0x4615a9c0  add.s       $f7, $f21, $f21
    ctx->pc = 0x2bc558u;
    ctx->f[7] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x2bc55c: 0x460f00c2  mul.s       $f3, $f0, $f15
    ctx->pc = 0x2bc55cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x2bc560: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2bc560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2bc564: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bc564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc568: 0x460c7100  add.s       $f4, $f14, $f12
    ctx->pc = 0x2bc568u;
    ctx->f[4] = FPU_ADD_S(ctx->f[14], ctx->f[12]);
    // 0x2bc56c: 0x46025280  add.s       $f10, $f10, $f2
    ctx->pc = 0x2bc56cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[2]);
    // 0x2bc570: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2bc570u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2bc574: 0x460d18c0  add.s       $f3, $f3, $f13
    ctx->pc = 0x2bc574u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x2bc578: 0x460c5282  mul.s       $f10, $f10, $f12
    ctx->pc = 0x2bc578u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x2bc57c: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x2bc57cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x2bc580: 0x460b6300  add.s       $f12, $f12, $f11
    ctx->pc = 0x2bc580u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[11]);
    // 0x2bc584: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x2bc584u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x2bc588: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2bc588u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2bc58c: 0x460b6b40  add.s       $f13, $f13, $f11
    ctx->pc = 0x2bc58cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
    // 0x2bc590: 0x46077382  mul.s       $f14, $f14, $f7
    ctx->pc = 0x2bc590u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x2bc594: 0x460f2942  mul.s       $f5, $f5, $f15
    ctx->pc = 0x2bc594u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x2bc598: 0x46045d03  div.s       $f20, $f11, $f4
    ctx->pc = 0x2bc598u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[11], ctx->f[4]);
    // 0x2bc59c: 0x46035d83  div.s       $f22, $f11, $f3
    ctx->pc = 0x2bc59cu;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[11], ctx->f[3]);
    // 0x2bc5a0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2bc5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2bc5a4: 0x460e65c3  div.s       $f23, $f12, $f14
    ctx->pc = 0x2bc5a4u;
    ctx->f[23] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[14]);
    // 0x2bc5a8: 0x46006e03  div.s       $f24, $f13, $f0
    ctx->pc = 0x2bc5a8u;
    ctx->f[24] = FPU_DIV_S(ctx, ctx->f[13], ctx->f[0]);
    // 0x2bc5ac: 0xc6420064  lwc1        $f2, 0x64($s2)
    ctx->pc = 0x2bc5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc5b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bc5b4: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x2bc5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc5b8: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x2bc5b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2bc5bc: 0x46064302  mul.s       $f12, $f8, $f6
    ctx->pc = 0x2bc5bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x2bc5c0: 0xe7a903f0  swc1        $f9, 0x3F0($sp)
    ctx->pc = 0x2bc5c0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1008), bits); }
    // 0x2bc5c4: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2bc5c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bc5c8: 0xafa203bc  sw          $v0, 0x3BC($sp)
    ctx->pc = 0x2bc5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 956), GPR_U32(ctx, 2));
    // 0x2bc5cc: 0x46004282  mul.s       $f10, $f8, $f0
    ctx->pc = 0x2bc5ccu;
    ctx->f[10] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2bc5d0: 0xe7a503f4  swc1        $f5, 0x3F4($sp)
    ctx->pc = 0x2bc5d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1012), bits); }
    // 0x2bc5d4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2bc5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bc5d8: 0xe7ac0410  swc1        $f12, 0x410($sp)
    ctx->pc = 0x2bc5d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1040), bits); }
    // 0x2bc5dc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2bc5dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2bc5e0: 0xe7a303f8  swc1        $f3, 0x3F8($sp)
    ctx->pc = 0x2bc5e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1016), bits); }
    // 0x2bc5e4: 0x46054900  add.s       $f4, $f9, $f5
    ctx->pc = 0x2bc5e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x2bc5e8: 0xe7aa0418  swc1        $f10, 0x418($sp)
    ctx->pc = 0x2bc5e8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1048), bits); }
    // 0x2bc5ec: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x2bc5ecu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2bc5f0: 0xe7a10400  swc1        $f1, 0x400($sp)
    ctx->pc = 0x2bc5f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
    // 0x2bc5f4: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x2bc5f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2bc5f8: 0xe7a00404  swc1        $f0, 0x404($sp)
    ctx->pc = 0x2bc5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1028), bits); }
    // 0x2bc5fc: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x2bc5fcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2bc600: 0xafa003e0  sw          $zero, 0x3E0($sp)
    ctx->pc = 0x2bc600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 0));
    // 0x2bc604: 0x46034a40  add.s       $f9, $f9, $f3
    ctx->pc = 0x2bc604u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[3]);
    // 0x2bc608: 0xe7a80414  swc1        $f8, 0x414($sp)
    ctx->pc = 0x2bc608u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1044), bits); }
    // 0x2bc60c: 0x460801c0  add.s       $f7, $f0, $f8
    ctx->pc = 0x2bc60cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2bc610: 0xe7a60408  swc1        $f6, 0x408($sp)
    ctx->pc = 0x2bc610u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1032), bits); }
    // 0x2bc614: 0x460a3081  sub.s       $f2, $f6, $f10
    ctx->pc = 0x2bc614u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x2bc618: 0xafa003e4  sw          $zero, 0x3E4($sp)
    ctx->pc = 0x2bc618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 996), GPR_U32(ctx, 0));
    // 0x2bc61c: 0x460c08c1  sub.s       $f3, $f1, $f12
    ctx->pc = 0x2bc61cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2bc620: 0xafa003e8  sw          $zero, 0x3E8($sp)
    ctx->pc = 0x2bc620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1000), GPR_U32(ctx, 0));
    // 0x2bc624: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x2bc624u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x2bc628: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2bc628u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2bc62c: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x2bc62cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x2bc630: 0x460a3180  add.s       $f6, $f6, $f10
    ctx->pc = 0x2bc630u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x2bc634: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x2bc634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x2bc638: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x2bc638u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2bc63c: 0x46045901  sub.s       $f4, $f11, $f4
    ctx->pc = 0x2bc63cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[11], ctx->f[4]);
    // 0x2bc640: 0x46055941  sub.s       $f5, $f11, $f5
    ctx->pc = 0x2bc640u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x2bc644: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x2bc644u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x2bc648: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2bc648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bc64c: 0xe7a403d8  swc1        $f4, 0x3D8($sp)
    ctx->pc = 0x2bc64cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 984), bits); }
    // 0x2bc650: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bc650u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2bc654: 0xe7a503b0  swc1        $f5, 0x3B0($sp)
    ctx->pc = 0x2bc654u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 944), bits); }
    // 0x2bc658: 0x46095ac1  sub.s       $f11, $f11, $f9
    ctx->pc = 0x2bc658u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[9]);
    // 0x2bc65c: 0xe7a603b4  swc1        $f6, 0x3B4($sp)
    ctx->pc = 0x2bc65cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 948), bits); }
    // 0x2bc660: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2bc660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2bc664: 0xe7a003b8  swc1        $f0, 0x3B8($sp)
    ctx->pc = 0x2bc664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 952), bits); }
    // 0x2bc668: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x2bc668u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x2bc66c: 0xe7a203c0  swc1        $f2, 0x3C0($sp)
    ctx->pc = 0x2bc66cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 960), bits); }
    // 0x2bc670: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bc670u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2bc674: 0xe7ab03c4  swc1        $f11, 0x3C4($sp)
    ctx->pc = 0x2bc674u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 964), bits); }
    // 0x2bc678: 0xe7a103c8  swc1        $f1, 0x3C8($sp)
    ctx->pc = 0x2bc678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 968), bits); }
    // 0x2bc67c: 0xe7a703d0  swc1        $f7, 0x3D0($sp)
    ctx->pc = 0x2bc67cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 976), bits); }
    // 0x2bc680: 0xe7a303d4  swc1        $f3, 0x3D4($sp)
    ctx->pc = 0x2bc680u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 980), bits); }
    // 0x2bc684: 0x27b003b0  addiu       $s0, $sp, 0x3B0
    ctx->pc = 0x2bc684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x2bc688: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x2bc688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc68c: 0xc6420094  lwc1        $f2, 0x94($s2)
    ctx->pc = 0x2bc68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc690: 0x46050982  mul.s       $f6, $f1, $f5
    ctx->pc = 0x2bc690u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2bc694: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2bc694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bc698: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2bc698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc69c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2bc69cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2bc6a0: 0xc643008c  lwc1        $f3, 0x8C($s2)
    ctx->pc = 0x2bc6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc6a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bc6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bc6a8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2bc6a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2bc6ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bc6acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bc6b0: 0xe7a103a0  swc1        $f1, 0x3A0($sp)
    ctx->pc = 0x2bc6b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
    // 0x2bc6b4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2bc6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc6b8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2bc6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bc6bc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2bc6bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bc6c0: 0xe7a203a4  swc1        $f2, 0x3A4($sp)
    ctx->pc = 0x2bc6c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
    // 0x2bc6c4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2bc6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc6c8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2bc6c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bc6cc: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2bc6ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2bc6d0: 0xe7a303a8  swc1        $f3, 0x3A8($sp)
    ctx->pc = 0x2bc6d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
    // 0x2bc6d4: 0xc7a60154  lwc1        $f6, 0x154($sp)
    ctx->pc = 0x2bc6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bc6d8: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x2bc6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc6dc: 0xc7a70158  lwc1        $f7, 0x158($sp)
    ctx->pc = 0x2bc6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bc6e0: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2bc6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc6e4: 0x460230c2  mul.s       $f3, $f6, $f2
    ctx->pc = 0x2bc6e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2bc6e8: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2bc6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc6ec: 0xc7a50150  lwc1        $f5, 0x150($sp)
    ctx->pc = 0x2bc6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bc6f0: 0x46013902  mul.s       $f4, $f7, $f1
    ctx->pc = 0x2bc6f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2bc6f4: 0x46003202  mul.s       $f8, $f6, $f0
    ctx->pc = 0x2bc6f4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2bc6f8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2bc6f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2bc6fc: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2bc6fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2bc700: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2bc700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2bc704: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2bc704u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2bc708: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x2bc708u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x2bc70c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bc70cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bc710: 0xe7a30370  swc1        $f3, 0x370($sp)
    ctx->pc = 0x2bc710u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
    // 0x2bc714: 0xe7a10378  swc1        $f1, 0x378($sp)
    ctx->pc = 0x2bc714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
    // 0x2bc718: 0xe7a00374  swc1        $f0, 0x374($sp)
    ctx->pc = 0x2bc718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 884), bits); }
    // 0x2bc71c: 0xc7a301a8  lwc1        $f3, 0x1A8($sp)
    ctx->pc = 0x2bc71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc720: 0xc7a201a4  lwc1        $f2, 0x1A4($sp)
    ctx->pc = 0x2bc720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc724: 0x46032a02  mul.s       $f8, $f5, $f3
    ctx->pc = 0x2bc724u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2bc728: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2bc728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc72c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x2bc72cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2bc730: 0x46022842  mul.s       $f1, $f5, $f2
    ctx->pc = 0x2bc730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2bc734: 0x46003102  mul.s       $f4, $f6, $f0
    ctx->pc = 0x2bc734u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2bc738: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x2bc738u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2bc73c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2bc73cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2bc740: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2bc740u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2bc744: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2bc744u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2bc748: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x2bc748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x2bc74c: 0xe7a10388  swc1        $f1, 0x388($sp)
    ctx->pc = 0x2bc74cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
    // 0x2bc750: 0xe7a30380  swc1        $f3, 0x380($sp)
    ctx->pc = 0x2bc750u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
    // 0x2bc754: 0xe7a00384  swc1        $f0, 0x384($sp)
    ctx->pc = 0x2bc754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 900), bits); }
    // 0x2bc758: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x2bc758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc75c: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x2bc75cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2bc760: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2bc760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc764: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2bc764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2bc768: 0xc7a201b4  lwc1        $f2, 0x1B4($sp)
    ctx->pc = 0x2bc768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc76c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2bc76cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2bc770: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2bc770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2bc774: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2bc774u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2bc778: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x2bc778u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2bc77c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bc77cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bc780: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x2bc780u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x2bc784: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x2bc784u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2bc788: 0xe7a00394  swc1        $f0, 0x394($sp)
    ctx->pc = 0x2bc788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 916), bits); }
    // 0x2bc78c: 0xe7a50398  swc1        $f5, 0x398($sp)
    ctx->pc = 0x2bc78cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
    // 0x2bc790: 0xe7a10390  swc1        $f1, 0x390($sp)
    ctx->pc = 0x2bc790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
    // 0x2bc794: 0x31220002  andi        $v0, $t1, 0x2
    ctx->pc = 0x2bc794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x2bc798: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2BC798u;
    {
        const bool branch_taken_0x2bc798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC798u;
        // 0x2bc79c: 0x31310004  andi        $s1, $t1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc798) {
            ctx->pc = 0x2BCA18u;
            goto label_2bca18;
        }
    }
    ctx->pc = 0x2BC7A0u;
    // 0x2bc7a0: 0xc78081b4  lwc1        $f0, -0x7E4C($gp)
    ctx->pc = 0x2bc7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc7a4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2bc7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc7a8: 0x0  nop
    ctx->pc = 0x2bc7a8u;
    // NOP
    // 0x2bc7ac: 0x4500009a  bc1f        . + 4 + (0x9A << 2)
    ctx->pc = 0x2BC7ACu;
    {
        const bool branch_taken_0x2bc7ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7ACu;
        // 0x2bc7b0: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc7ac) {
            ctx->pc = 0x2BCA18u;
            goto label_2bca18;
        }
    }
    ctx->pc = 0x2BC7B4u;
    // 0x2bc7b4: 0x2465e668  addiu       $a1, $v1, -0x1998
    ctx->pc = 0x2bc7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
    // 0x2bc7b8: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2bc7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2bc7bc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BC7BCu;
    {
        const bool branch_taken_0x2bc7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7BCu;
        // 0x2bc7c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc7bc) {
            ctx->pc = 0x2BC81Cu;
            goto label_2bc81c;
        }
    }
    ctx->pc = 0x2BC7C4u;
    // 0x2bc7c4: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x2bc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_2bc7c8:
    // 0x2bc7c8: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2bc7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bc7cc: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2bc7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bc7d0: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x2bc7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bc7d4: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x2bc7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bc7d8: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x2bc7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bc7dc: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x2bc7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bc7e0: 0x68aa001f  ldl         $t2, 0x1F($a1)
    ctx->pc = 0x2bc7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bc7e4: 0x6caa0018  ldr         $t2, 0x18($a1)
    ctx->pc = 0x2bc7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bc7e8: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x2bc7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc7ec: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x2bc7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc7f0: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x2bc7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc7f4: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x2bc7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc7f8: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x2bc7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc7fc: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x2bc7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc800: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x2bc800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc804: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x2bc804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc808: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bc808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bc80c: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BC80Cu;
    {
        const bool branch_taken_0x2bc80c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC80Cu;
        // 0x2bc810: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc80c) {
            ctx->pc = 0x2BC7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc7c8;
        }
    }
    ctx->pc = 0x2BC814u;
    // 0x2bc814: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2BC814u;
    {
        const bool branch_taken_0x2bc814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC814u;
        // 0x2bc818: 0x8e43004c  lw          $v1, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc814) {
            ctx->pc = 0x2BC850u;
            goto label_2bc850;
        }
    }
    ctx->pc = 0x2BC81Cu;
label_2bc81c:
    // 0x2bc81c: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x2bc81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_2bc820:
    // 0x2bc820: 0xdcab0000  ld          $t3, 0x0($a1)
    ctx->pc = 0x2bc820u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bc824: 0xdcac0008  ld          $t4, 0x8($a1)
    ctx->pc = 0x2bc824u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bc828: 0xdcad0010  ld          $t5, 0x10($a1)
    ctx->pc = 0x2bc828u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2bc82c: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x2bc82cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2bc830: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x2bc830u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x2bc834: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x2bc834u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x2bc838: 0xfc8d0010  sd          $t5, 0x10($a0)
    ctx->pc = 0x2bc838u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 13));
    // 0x2bc83c: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x2bc83cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x2bc840: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bc840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bc844: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BC844u;
    {
        const bool branch_taken_0x2bc844 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC844u;
        // 0x2bc848: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc844) {
            ctx->pc = 0x2BC820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc820;
        }
    }
    ctx->pc = 0x2BC84Cu;
    // 0x2bc84c: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bc84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2bc850:
    // 0x2bc850: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x2bc850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bc854: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x2bc854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bc858: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x2bc858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bc85c: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x2bc85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc860: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x2bc860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc864: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2bc864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2bc868: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2bc868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc86c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2bc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bc870: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2bc870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc874: 0x46140082  mul.s       $f2, $f0, $f20
    ctx->pc = 0x2bc874u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bc878: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2bc878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2bc87c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC87Cu;
    {
        const bool branch_taken_0x2bc87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC87Cu;
        // 0x2bc880: 0x46160802  mul.s       $f0, $f1, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc87c) {
            ctx->pc = 0x2BC88Cu;
            goto label_2bc88c;
        }
    }
    ctx->pc = 0x2BC884u;
    // 0x2bc884: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2bc884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bc888: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bc888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2bc88c:
    // 0x2bc88c: 0xc7a003a0  lwc1        $f0, 0x3A0($sp)
    ctx->pc = 0x2bc88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc890: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2bc890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc894: 0xc7a103a4  lwc1        $f1, 0x3A4($sp)
    ctx->pc = 0x2bc894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc898: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bc898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bc89c: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bc89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bc8a0: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x2bc8a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x2bc8a4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2bc8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bc8a8: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2bc8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2bc8ac: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2bc8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2bc8b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC8B0u;
    {
        const bool branch_taken_0x2bc8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8B0u;
        // 0x2bc8b4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8b0) {
            ctx->pc = 0x2BC8BCu;
            goto label_2bc8bc;
        }
    }
    ctx->pc = 0x2BC8B8u;
    // 0x2bc8b8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bc8b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2bc8bc:
    // 0x2bc8bc: 0xc7a50380  lwc1        $f5, 0x380($sp)
    ctx->pc = 0x2bc8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bc8c0: 0xc7a60384  lwc1        $f6, 0x384($sp)
    ctx->pc = 0x2bc8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bc8c4: 0xc7a40388  lwc1        $f4, 0x388($sp)
    ctx->pc = 0x2bc8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bc8c8: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x2bc8c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2bc8cc: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x2bc8ccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x2bc8d0: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x2bc8d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2bc8d4: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2bc8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc8d8: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2bc8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2bc8dc: 0xc7a20370  lwc1        $f2, 0x370($sp)
    ctx->pc = 0x2bc8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc8e0: 0xc7a30374  lwc1        $f3, 0x374($sp)
    ctx->pc = 0x2bc8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc8e4: 0xc7a10378  lwc1        $f1, 0x378($sp)
    ctx->pc = 0x2bc8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc8e8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bc8e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bc8ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc8ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc8f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2bc8f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bc8f4: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2bc8f4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2bc8f8: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2bc8f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2bc8fc: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x2bc8fcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x2bc900: 0xe7a50380  swc1        $f5, 0x380($sp)
    ctx->pc = 0x2bc900u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
    // 0x2bc904: 0xe7a40388  swc1        $f4, 0x388($sp)
    ctx->pc = 0x2bc904u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
    // 0x2bc908: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC908u;
    {
        const bool branch_taken_0x2bc908 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC908u;
        // 0x2bc90c: 0xe7a60384  swc1        $f6, 0x384($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc908) {
            ctx->pc = 0x2BC928u;
            goto label_2bc928;
        }
    }
    ctx->pc = 0x2BC910u;
    // 0x2bc910: 0x6baa0387  ldl         $t2, 0x387($sp)
    ctx->pc = 0x2bc910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 903); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bc914: 0x6faa0380  ldr         $t2, 0x380($sp)
    ctx->pc = 0x2bc914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 896); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bc918: 0x8fab0388  lw          $t3, 0x388($sp)
    ctx->pc = 0x2bc918u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x2bc91c: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x2bc91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc920: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x2bc920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bc924: 0xafab0018  sw          $t3, 0x18($sp)
    ctx->pc = 0x2bc924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 11));
label_2bc928:
    // 0x2bc928: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BC928u;
    {
        const bool branch_taken_0x2bc928 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC928u;
        // 0x2bc92c: 0xc7a00380  lwc1        $f0, 0x380($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc928) {
            ctx->pc = 0x2BC950u;
            goto label_2bc950;
        }
    }
    ctx->pc = 0x2BC930u;
    // 0x2bc930: 0xc7a10384  lwc1        $f1, 0x384($sp)
    ctx->pc = 0x2bc930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc934: 0xc7a20388  lwc1        $f2, 0x388($sp)
    ctx->pc = 0x2bc934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc938: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bc938u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bc93c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bc93cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bc940: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bc940u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bc944: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bc944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bc948: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bc948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bc94c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2bc94cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2bc950:
    // 0x2bc950: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x2bc950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bc954: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2bc954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2bc958: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x2bc958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2bc95c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bc95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bc960: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC960u;
    {
        const bool branch_taken_0x2bc960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC960u;
        // 0x2bc964: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc960) {
            ctx->pc = 0x2BC97Cu;
            goto label_2bc97c;
        }
    }
    ctx->pc = 0x2BC968u;
    // 0x2bc968: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x2bc968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc96c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bc96cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bc970: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2bc970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bc974: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC974u;
    {
        const bool branch_taken_0x2bc974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC974u;
        // 0x2bc978: 0xc48100b0  lwc1        $f1, 0xB0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc974) {
            ctx->pc = 0x2BC98Cu;
            goto label_2bc98c;
        }
    }
    ctx->pc = 0x2BC97Cu;
label_2bc97c:
    // 0x2bc97c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bc97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2bc980: 0xc4403a70  lwc1        $f0, 0x3A70($v0)
    ctx->pc = 0x2bc980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc984: 0xc4613a6c  lwc1        $f1, 0x3A6C($v1)
    ctx->pc = 0x2bc984u;
    { uint32_t bits = FAST_READ32(0x6B3A6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc988: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2bc988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2bc98c:
    // 0x2bc98c: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x2bc98cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2bc990: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2bc990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2bc994: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2bc994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2bc998: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x2bc998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc99c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bc99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bc9a0: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x2bc9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc9a4: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x2bc9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc9a8: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x2bc9a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x2bc9ac: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x2bc9acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc9b0: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2bc9b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc9b4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2BC9B4u;
    {
        const bool branch_taken_0x2bc9b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc9b4) {
            ctx->pc = 0x2BCA18u;
            goto label_2bca18;
        }
    }
    ctx->pc = 0x2BC9BCu;
    // 0x2bc9bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc9c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc9c4: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x2bc9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc9c8: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2bc9c8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2bc9cc: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bc9ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x2bc9d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bc9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc9d4: 0x0  nop
    ctx->pc = 0x2bc9d4u;
    // NOP
    // 0x2bc9d8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC9D8u;
    {
        const bool branch_taken_0x2bc9d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc9d8) {
            ctx->pc = 0x2BC9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC9D8u;
            // 0x2bc9dc: 0x461c0801  sub.s       $f0, $f1, $f28 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC9E8u;
            goto label_2bc9e8;
        }
    }
    ctx->pc = 0x2BC9E0u;
    // 0x2bc9e0: 0xc78081bc  lwc1        $f0, -0x7E44($gp)
    ctx->pc = 0x2bc9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc9e4: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bc9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
label_2bc9e8:
    // 0x2bc9e8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2bc9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bc9ec: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bc9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bc9f0: 0x461d0802  mul.s       $f0, $f1, $f29
    ctx->pc = 0x2bc9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x2bc9f4: 0xc78181c0  lwc1        $f1, -0x7E40($gp)
    ctx->pc = 0x2bc9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc9f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bc9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9fc: 0xc44200a8  lwc1        $f2, 0xA8($v0)
    ctx->pc = 0x2bc9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bca00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bca00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca04: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2bca04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bca08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bca08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bca0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bca0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bca10: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BCA10u;
    SET_GPR_U32(ctx, 31, 0x2BCA18u);
    ctx->pc = 0x2BCA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA10u;
    // 0x2bca14: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BCA10u, 0x2BCA18u)) {
        return;
    }
    ctx->pc = 0x2BCA18u;
label_2bca18:
    // 0x2bca18: 0x522000a0  beql        $s1, $zero, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2BCA18u;
    {
        const bool branch_taken_0x2bca18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bca18) {
            ctx->pc = 0x2BCA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCA18u;
            // 0x2bca1c: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCC9Cu;
            goto label_2bcc9c;
        }
    }
    ctx->pc = 0x2BCA20u;
    // 0x2bca20: 0xc78081c4  lwc1        $f0, -0x7E3C($gp)
    ctx->pc = 0x2bca20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bca24: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2bca24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bca28: 0x0  nop
    ctx->pc = 0x2bca28u;
    // NOP
    // 0x2bca2c: 0x4500009a  bc1f        . + 4 + (0x9A << 2)
    ctx->pc = 0x2BCA2Cu;
    {
        const bool branch_taken_0x2bca2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA2Cu;
        // 0x2bca30: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca2c) {
            ctx->pc = 0x2BCC98u;
            goto label_2bcc98;
        }
    }
    ctx->pc = 0x2BCA34u;
    // 0x2bca34: 0x2465e668  addiu       $a1, $v1, -0x1998
    ctx->pc = 0x2bca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
    // 0x2bca38: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2bca38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2bca3c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BCA3Cu;
    {
        const bool branch_taken_0x2bca3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA3Cu;
        // 0x2bca40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca3c) {
            ctx->pc = 0x2BCA9Cu;
            goto label_2bca9c;
        }
    }
    ctx->pc = 0x2BCA44u;
    // 0x2bca44: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x2bca44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_2bca48:
    // 0x2bca48: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x2bca48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2bca4c: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x2bca4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2bca50: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x2bca50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bca54: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x2bca54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bca58: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x2bca58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bca5c: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x2bca5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bca60: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x2bca60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bca64: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x2bca64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bca68: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x2bca68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bca6c: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x2bca6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bca70: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2bca70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bca74: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2bca74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bca78: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2bca78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bca7c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2bca7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bca80: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2bca80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bca84: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2bca84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bca88: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bca88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bca8c: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BCA8Cu;
    {
        const bool branch_taken_0x2bca8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA8Cu;
        // 0x2bca90: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca8c) {
            ctx->pc = 0x2BCA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bca48;
        }
    }
    ctx->pc = 0x2BCA94u;
    // 0x2bca94: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2BCA94u;
    {
        const bool branch_taken_0x2bca94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA94u;
        // 0x2bca98: 0x8e43004c  lw          $v1, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca94) {
            ctx->pc = 0x2BCAD0u;
            goto label_2bcad0;
        }
    }
    ctx->pc = 0x2BCA9Cu;
label_2bca9c:
    // 0x2bca9c: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x2bca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_2bcaa0:
    // 0x2bcaa0: 0xdca90000  ld          $t1, 0x0($a1)
    ctx->pc = 0x2bcaa0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bcaa4: 0xdcaa0008  ld          $t2, 0x8($a1)
    ctx->pc = 0x2bcaa4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bcaa8: 0xdcab0010  ld          $t3, 0x10($a1)
    ctx->pc = 0x2bcaa8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2bcaac: 0xdcac0018  ld          $t4, 0x18($a1)
    ctx->pc = 0x2bcaacu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2bcab0: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x2bcab0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x2bcab4: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x2bcab4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x2bcab8: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x2bcab8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x2bcabc: 0xfc8c0018  sd          $t4, 0x18($a0)
    ctx->pc = 0x2bcabcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 12));
    // 0x2bcac0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bcac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bcac4: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BCAC4u;
    {
        const bool branch_taken_0x2bcac4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BCAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCAC4u;
        // 0x2bcac8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcac4) {
            ctx->pc = 0x2BCAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bcaa0;
        }
    }
    ctx->pc = 0x2BCACCu;
    // 0x2bcacc: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bcaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2bcad0:
    // 0x2bcad0: 0x68ad0007  ldl         $t5, 0x7($a1)
    ctx->pc = 0x2bcad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2bcad4: 0x6cad0000  ldr         $t5, 0x0($a1)
    ctx->pc = 0x2bcad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2bcad8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2bcad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bcadc: 0xb08d0007  sdl         $t5, 0x7($a0)
    ctx->pc = 0x2bcadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcae0: 0xb48d0000  sdr         $t5, 0x0($a0)
    ctx->pc = 0x2bcae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcae4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2bcae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2bcae8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2bcae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bcaec: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2bcaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcaf0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2bcaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcaf4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2bcaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2bcaf8: 0x46140082  mul.s       $f2, $f0, $f20
    ctx->pc = 0x2bcaf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bcafc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCAFCu;
    {
        const bool branch_taken_0x2bcafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCAFCu;
        // 0x2bcb00: 0x46160802  mul.s       $f0, $f1, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcafc) {
            ctx->pc = 0x2BCB0Cu;
            goto label_2bcb0c;
        }
    }
    ctx->pc = 0x2BCB04u;
    // 0x2bcb04: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2bcb04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bcb08: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bcb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2bcb0c:
    // 0x2bcb0c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2bcb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcb10: 0xc7a003a0  lwc1        $f0, 0x3A0($sp)
    ctx->pc = 0x2bcb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcb14: 0xc7a103a8  lwc1        $f1, 0x3A8($sp)
    ctx->pc = 0x2bcb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcb18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bcb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bcb1c: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bcb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bcb20: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x2bcb20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x2bcb24: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2bcb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2bcb28: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2bcb28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2bcb2c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2bcb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2bcb30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BCB30u;
    {
        const bool branch_taken_0x2bcb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB30u;
        // 0x2bcb34: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb30) {
            ctx->pc = 0x2BCB3Cu;
            goto label_2bcb3c;
        }
    }
    ctx->pc = 0x2BCB38u;
    // 0x2bcb38: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bcb38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2bcb3c:
    // 0x2bcb3c: 0xc7a50390  lwc1        $f5, 0x390($sp)
    ctx->pc = 0x2bcb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bcb40: 0xc7a60394  lwc1        $f6, 0x394($sp)
    ctx->pc = 0x2bcb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bcb44: 0xc7a40398  lwc1        $f4, 0x398($sp)
    ctx->pc = 0x2bcb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bcb48: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x2bcb48u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2bcb4c: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x2bcb4cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x2bcb50: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x2bcb50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2bcb54: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2bcb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcb58: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2bcb58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2bcb5c: 0xc7a20370  lwc1        $f2, 0x370($sp)
    ctx->pc = 0x2bcb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcb60: 0xc7a30374  lwc1        $f3, 0x374($sp)
    ctx->pc = 0x2bcb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bcb64: 0xc7a10378  lwc1        $f1, 0x378($sp)
    ctx->pc = 0x2bcb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcb68: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bcb68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bcb6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bcb6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bcb70: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2bcb70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bcb74: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2bcb74u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2bcb78: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2bcb78u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2bcb7c: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x2bcb7cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x2bcb80: 0xe7a50390  swc1        $f5, 0x390($sp)
    ctx->pc = 0x2bcb80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
    // 0x2bcb84: 0xe7a40398  swc1        $f4, 0x398($sp)
    ctx->pc = 0x2bcb84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
    // 0x2bcb88: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BCB88u;
    {
        const bool branch_taken_0x2bcb88 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB88u;
        // 0x2bcb8c: 0xe7a60394  swc1        $f6, 0x394($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 916), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb88) {
            ctx->pc = 0x2BCBA8u;
            goto label_2bcba8;
        }
    }
    ctx->pc = 0x2BCB90u;
    // 0x2bcb90: 0x6ba80397  ldl         $t0, 0x397($sp)
    ctx->pc = 0x2bcb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bcb94: 0x6fa80390  ldr         $t0, 0x390($sp)
    ctx->pc = 0x2bcb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bcb98: 0x8fa90398  lw          $t1, 0x398($sp)
    ctx->pc = 0x2bcb98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
    // 0x2bcb9c: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x2bcb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcba0: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x2bcba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcba4: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x2bcba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
label_2bcba8:
    // 0x2bcba8: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BCBA8u;
    {
        const bool branch_taken_0x2bcba8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBA8u;
        // 0x2bcbac: 0xc7a00390  lwc1        $f0, 0x390($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcba8) {
            ctx->pc = 0x2BCBD0u;
            goto label_2bcbd0;
        }
    }
    ctx->pc = 0x2BCBB0u;
    // 0x2bcbb0: 0xc7a10394  lwc1        $f1, 0x394($sp)
    ctx->pc = 0x2bcbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcbb4: 0xc7a20398  lwc1        $f2, 0x398($sp)
    ctx->pc = 0x2bcbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcbb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bcbb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bcbbc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bcbbcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bcbc0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bcbc0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bcbc4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bcbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bcbc8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bcbc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bcbcc: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2bcbccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2bcbd0:
    // 0x2bcbd0: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x2bcbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bcbd4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2bcbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2bcbd8: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x2bcbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2bcbdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bcbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bcbe0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCBE0u;
    {
        const bool branch_taken_0x2bcbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBE0u;
        // 0x2bcbe4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbe0) {
            ctx->pc = 0x2BCBFCu;
            goto label_2bcbfc;
        }
    }
    ctx->pc = 0x2BCBE8u;
    // 0x2bcbe8: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x2bcbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcbec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bcbecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bcbf0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2bcbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bcbf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCBF4u;
    {
        const bool branch_taken_0x2bcbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBF4u;
        // 0x2bcbf8: 0xc48100b0  lwc1        $f1, 0xB0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbf4) {
            ctx->pc = 0x2BCC0Cu;
            goto label_2bcc0c;
        }
    }
    ctx->pc = 0x2BCBFCu;
label_2bcbfc:
    // 0x2bcbfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bcbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2bcc00: 0xc4403a70  lwc1        $f0, 0x3A70($v0)
    ctx->pc = 0x2bcc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcc04: 0xc4613a6c  lwc1        $f1, 0x3A6C($v1)
    ctx->pc = 0x2bcc04u;
    { uint32_t bits = FAST_READ32(0x6B3A6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc08: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2bcc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2bcc0c:
    // 0x2bcc0c: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x2bcc0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2bcc10: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2bcc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2bcc14: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2bcc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2bcc18: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x2bcc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcc1c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bcc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bcc20: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x2bcc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcc24: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x2bcc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc28: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x2bcc28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x2bcc2c: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x2bcc2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bcc30: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2bcc30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcc34: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2BCC34u;
    {
        const bool branch_taken_0x2bcc34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcc34) {
            ctx->pc = 0x2BCC9Cu;
            goto label_2bcc9c;
        }
    }
    ctx->pc = 0x2BCC3Cu;
    // 0x2bcc3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bcc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bcc40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bcc40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcc44: 0xc78081c8  lwc1        $f0, -0x7E38($gp)
    ctx->pc = 0x2bcc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcc48: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2bcc48u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2bcc4c: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bcc4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x2bcc50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bcc50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcc54: 0x0  nop
    ctx->pc = 0x2bcc54u;
    // NOP
    // 0x2bcc58: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCC58u;
    {
        const bool branch_taken_0x2bcc58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcc58) {
            ctx->pc = 0x2BCC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCC58u;
            // 0x2bcc5c: 0x461c0801  sub.s       $f0, $f1, $f28 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCC68u;
            goto label_2bcc68;
        }
    }
    ctx->pc = 0x2BCC60u;
    // 0x2bcc60: 0xc78081cc  lwc1        $f0, -0x7E34($gp)
    ctx->pc = 0x2bcc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcc64: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bcc64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
label_2bcc68:
    // 0x2bcc68: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2bcc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bcc6c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bcc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bcc70: 0x461d0802  mul.s       $f0, $f1, $f29
    ctx->pc = 0x2bcc70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x2bcc74: 0xc78181d0  lwc1        $f1, -0x7E30($gp)
    ctx->pc = 0x2bcc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc7c: 0xc44200a8  lwc1        $f2, 0xA8($v0)
    ctx->pc = 0x2bcc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcc80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bcc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc84: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2bcc84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bcc88: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bcc88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bcc8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bcc8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bcc90: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BCC90u;
    SET_GPR_U32(ctx, 31, 0x2BCC98u);
    ctx->pc = 0x2BCC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC90u;
    // 0x2bcc94: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BCC90u, 0x2BCC98u)) {
        return;
    }
    ctx->pc = 0x2BCC98u;
label_2bcc98:
    // 0x2bcc98: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bcc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2bcc9c:
    // 0x2bcc9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bcc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bcca0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bcca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bcca4: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x2bcca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bcca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bccac: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x2bccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bccb0: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x2bccb0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bccb4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2bccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2bccb8: 0x46000182  mul.s       $f6, $f0, $f0
    ctx->pc = 0x2bccb8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bccbc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bccbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bccc0: 0x460511c1  sub.s       $f7, $f2, $f5
    ctx->pc = 0x2bccc0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2bccc4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2BCCC4u;
    {
        const bool branch_taken_0x2bccc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCC4u;
        // 0x2bccc8: 0x46061041  sub.s       $f1, $f2, $f6 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccc4) {
            ctx->pc = 0x2BCD00u;
            goto label_2bcd00;
        }
    }
    ctx->pc = 0x2BCCCCu;
    // 0x2bcccc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bccccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bccd0: 0xc7a2023c  lwc1        $f2, 0x23C($sp)
    ctx->pc = 0x2bccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bccd4: 0xc7a30230  lwc1        $f3, 0x230($sp)
    ctx->pc = 0x2bccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bccd8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2bccd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bccdc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bccdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bcce0: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x2bcce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2bcce4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bcce4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bcce8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bcce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bccec: 0x46000f80  add.s       $f30, $f1, $f0
    ctx->pc = 0x2bccecu;
    ctx->f[30] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bccf0: 0x461e2034  c.lt.s      $f4, $f30
    ctx->pc = 0x2bccf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bccf4: 0x0  nop
    ctx->pc = 0x2bccf4u;
    // NOP
    // 0x2bccf8: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2BCCF8u;
    {
        const bool branch_taken_0x2bccf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCF8u;
        // 0x2bccfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccf8) {
            ctx->pc = 0x2BCD44u;
            goto label_2bcd44;
        }
    }
    ctx->pc = 0x2BCD00u;
label_2bcd00:
    // 0x2bcd00: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2bcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2bcd04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bcd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bcd08: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BCD08u;
    {
        const bool branch_taken_0x2bcd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD08u;
        // 0x2bcd0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd08) {
            ctx->pc = 0x2BCD44u;
            goto label_2bcd44;
        }
    }
    ctx->pc = 0x2BCD10u;
    // 0x2bcd10: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x2bcd10u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x2bcd14: 0xc7a2023c  lwc1        $f2, 0x23C($sp)
    ctx->pc = 0x2bcd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcd18: 0xc7a30230  lwc1        $f3, 0x230($sp)
    ctx->pc = 0x2bcd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bcd1c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2bcd1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bcd20: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bcd20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bcd24: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x2bcd24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2bcd28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bcd28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bcd2c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bcd2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bcd30: 0x46000f80  add.s       $f30, $f1, $f0
    ctx->pc = 0x2bcd30u;
    ctx->f[30] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcd34: 0x461e2034  c.lt.s      $f4, $f30
    ctx->pc = 0x2bcd34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcd38: 0x0  nop
    ctx->pc = 0x2bcd38u;
    // NOP
    // 0x2bcd3c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BCD3Cu;
    {
        const bool branch_taken_0x2bcd3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcd3c) {
            ctx->pc = 0x2BCD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCD3Cu;
            // 0x2bcd40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCD44u;
            goto label_2bcd44;
        }
    }
    ctx->pc = 0x2BCD44u;
label_2bcd44:
    // 0x2bcd44: 0x10a00096  beqz        $a1, . + 4 + (0x96 << 2)
    ctx->pc = 0x2BCD44u;
    {
        const bool branch_taken_0x2bcd44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD44u;
        // 0x2bcd48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd44) {
            ctx->pc = 0x2BCFA0u;
            goto label_2bcfa0;
        }
    }
    ctx->pc = 0x2BCD4Cu;
    // 0x2bcd4c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BCD4Cu;
    {
        const bool branch_taken_0x2bcd4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BCD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD4Cu;
        // 0x2bcd50: 0x460029c6  mov.s       $f7, $f5 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd4c) {
            ctx->pc = 0x2BCD58u;
            goto label_2bcd58;
        }
    }
    ctx->pc = 0x2BCD54u;
    // 0x2bcd54: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x2bcd54u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
label_2bcd58:
    // 0x2bcd58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bcd5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bcd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bcd60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bcd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcd64: 0x2444e668  addiu       $a0, $v0, -0x1998
    ctx->pc = 0x2bcd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960744));
    // 0x2bcd68: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2bcd68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd6c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x2bcd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2bcd70: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BCD70u;
    {
        const bool branch_taken_0x2bcd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD70u;
        // 0x2bcd74: 0x46070001  sub.s       $f0, $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd70) {
            ctx->pc = 0x2BCDD8u;
            goto label_2bcdd8;
        }
    }
    ctx->pc = 0x2BCD78u;
    // 0x2bcd78: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2bcd78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bcd7c: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2bcd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2bcd80: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2bcd80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2bcd84:
    // 0x2bcd84: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x2bcd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bcd88: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x2bcd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bcd8c: 0x688d000f  ldl         $t5, 0xF($a0)
    ctx->pc = 0x2bcd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2bcd90: 0x6c8d0008  ldr         $t5, 0x8($a0)
    ctx->pc = 0x2bcd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2bcd94: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x2bcd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bcd98: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x2bcd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bcd9c: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x2bcd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bcda0: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x2bcda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bcda4: 0xb06c0007  sdl         $t4, 0x7($v1)
    ctx->pc = 0x2bcda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcda8: 0xb46c0000  sdr         $t4, 0x0($v1)
    ctx->pc = 0x2bcda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdac: 0xb06d000f  sdl         $t5, 0xF($v1)
    ctx->pc = 0x2bcdacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdb0: 0xb46d0008  sdr         $t5, 0x8($v1)
    ctx->pc = 0x2bcdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdb4: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x2bcdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdb8: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x2bcdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdbc: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x2bcdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdc0: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x2bcdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdc4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2bcdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bcdc8: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BCDC8u;
    {
        const bool branch_taken_0x2bcdc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BCDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDC8u;
        // 0x2bcdcc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcdc8) {
            ctx->pc = 0x2BCD84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bcd84;
        }
    }
    ctx->pc = 0x2BCDD0u;
    // 0x2bcdd0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BCDD0u;
    {
        const bool branch_taken_0x2bcdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcdd0) {
            ctx->pc = 0x2BCE10u;
            goto label_2bce10;
        }
    }
    ctx->pc = 0x2BCDD8u;
label_2bcdd8:
    // 0x2bcdd8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2bcdd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bcddc: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2bcddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2bcde0: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2bcde0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2bcde4:
    // 0x2bcde4: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x2bcde4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bcde8: 0xdc8a0008  ld          $t2, 0x8($a0)
    ctx->pc = 0x2bcde8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bcdec: 0xdc8b0010  ld          $t3, 0x10($a0)
    ctx->pc = 0x2bcdecu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bcdf0: 0xdc8c0018  ld          $t4, 0x18($a0)
    ctx->pc = 0x2bcdf0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2bcdf4: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x2bcdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x2bcdf8: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x2bcdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x2bcdfc: 0xfc6b0010  sd          $t3, 0x10($v1)
    ctx->pc = 0x2bcdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 11));
    // 0x2bce00: 0xfc6c0018  sd          $t4, 0x18($v1)
    ctx->pc = 0x2bce00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 12));
    // 0x2bce04: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2bce04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bce08: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BCE08u;
    {
        const bool branch_taken_0x2bce08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BCE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE08u;
        // 0x2bce0c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce08) {
            ctx->pc = 0x2BCDE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bcde4;
        }
    }
    ctx->pc = 0x2BCE10u;
label_2bce10:
    // 0x2bce10: 0x688d0007  ldl         $t5, 0x7($a0)
    ctx->pc = 0x2bce10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2bce14: 0x6c8d0000  ldr         $t5, 0x0($a0)
    ctx->pc = 0x2bce14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2bce18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2bce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bce1c: 0xb06d0007  sdl         $t5, 0x7($v1)
    ctx->pc = 0x2bce1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce20: 0xb46d0000  sdr         $t5, 0x0($v1)
    ctx->pc = 0x2bce20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce24: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2bce24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2bce28: 0xe7be0040  swc1        $f30, 0x40($sp)
    ctx->pc = 0x2bce28u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bce2c: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x2bce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bce30: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2bce30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bce34: 0xc7a50240  lwc1        $f5, 0x240($sp)
    ctx->pc = 0x2bce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bce38: 0xc7a60244  lwc1        $f6, 0x244($sp)
    ctx->pc = 0x2bce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bce3c: 0xc7a40248  lwc1        $f4, 0x248($sp)
    ctx->pc = 0x2bce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bce40: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x2bce40u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2bce44: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2bce44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2bce48: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2bce48u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2bce4c: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x2bce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bce50: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x2bce50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x2bce54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bce54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bce58: 0xc7a3024c  lwc1        $f3, 0x24C($sp)
    ctx->pc = 0x2bce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bce5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bce5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bce60: 0xc7a20250  lwc1        $f2, 0x250($sp)
    ctx->pc = 0x2bce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bce64: 0xc7a10254  lwc1        $f1, 0x254($sp)
    ctx->pc = 0x2bce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bce68: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2bce68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2bce6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bce6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bce70: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2bce70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bce74: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bce74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bce78: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2bce78u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2bce7c: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x2bce7cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2bce80: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x2bce80u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2bce84: 0xe7a402a8  swc1        $f4, 0x2A8($sp)
    ctx->pc = 0x2bce84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2bce88: 0xe7a502a0  swc1        $f5, 0x2A0($sp)
    ctx->pc = 0x2bce88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2bce8c: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BCE8Cu;
    {
        const bool branch_taken_0x2bce8c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE8Cu;
        // 0x2bce90: 0xe7a602a4  swc1        $f6, 0x2A4($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce8c) {
            ctx->pc = 0x2BCEB0u;
            goto label_2bceb0;
        }
    }
    ctx->pc = 0x2BCE94u;
    // 0x2bce94: 0x6ba902a7  ldl         $t1, 0x2A7($sp)
    ctx->pc = 0x2bce94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bce98: 0x6fa902a0  ldr         $t1, 0x2A0($sp)
    ctx->pc = 0x2bce98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bce9c: 0x8faa02a8  lw          $t2, 0x2A8($sp)
    ctx->pc = 0x2bce9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x2bcea0: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x2bcea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcea4: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x2bcea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcea8: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x2bcea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x2bceac: 0x0  nop
    ctx->pc = 0x2bceacu;
    // NOP
label_2bceb0:
    // 0x2bceb0: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BCEB0u;
    {
        const bool branch_taken_0x2bceb0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEB0u;
        // 0x2bceb4: 0xc7a002a0  lwc1        $f0, 0x2A0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bceb0) {
            ctx->pc = 0x2BCED8u;
            goto label_2bced8;
        }
    }
    ctx->pc = 0x2BCEB8u;
    // 0x2bceb8: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x2bceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcebc: 0xc7a202a8  lwc1        $f2, 0x2A8($sp)
    ctx->pc = 0x2bcebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcec0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bcec0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bcec4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bcec4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bcec8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bcec8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bcecc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bceccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bced0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bced0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bced4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2bced4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2bced8:
    // 0x2bced8: 0xc5013a70  lwc1        $f1, 0x3A70($t0)
    ctx->pc = 0x2bced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 14960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcedc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bcedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcee0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2bcee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2bcee4: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2BCEE4u;
    {
        const bool branch_taken_0x2bcee4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BCEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEE4u;
        // 0x2bcee8: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcee4) {
            ctx->pc = 0x2BCF80u;
            goto label_2bcf80;
        }
    }
    ctx->pc = 0x2BCEECu;
    // 0x2bceec: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bcef0: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x2bcef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcef4: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x2bcef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcef8: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x2bcef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcefc: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x2bcefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x2bcf00: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x2bcf00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bcf04: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2bcf04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcf08: 0x0  nop
    ctx->pc = 0x2bcf08u;
    // NOP
    // 0x2bcf0c: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
    ctx->pc = 0x2BCF0Cu;
    {
        const bool branch_taken_0x2bcf0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcf0c) {
            ctx->pc = 0x2BCF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCF0Cu;
            // 0x2bcf10: 0xc7a3023c  lwc1        $f3, 0x23C($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCFA4u;
            goto label_2bcfa4;
        }
    }
    ctx->pc = 0x2BCF14u;
    // 0x2bcf14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bcf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bcf18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bcf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcf1c: 0xc78081d4  lwc1        $f0, -0x7E2C($gp)
    ctx->pc = 0x2bcf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcf20: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2bcf20u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2bcf24: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bcf24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x2bcf28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bcf28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcf2c: 0x0  nop
    ctx->pc = 0x2bcf2cu;
    // NOP
    // 0x2bcf30: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCF30u;
    {
        const bool branch_taken_0x2bcf30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcf30) {
            ctx->pc = 0x2BCF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCF30u;
            // 0x2bcf34: 0x461c0801  sub.s       $f0, $f1, $f28 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCF40u;
            goto label_2bcf40;
        }
    }
    ctx->pc = 0x2BCF38u;
    // 0x2bcf38: 0xc78081d8  lwc1        $f0, -0x7E28($gp)
    ctx->pc = 0x2bcf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcf3c: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bcf3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
label_2bcf40:
    // 0x2bcf40: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2bcf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bcf44: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bcf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bcf48: 0x461d0802  mul.s       $f0, $f1, $f29
    ctx->pc = 0x2bcf48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x2bcf4c: 0xc78181dc  lwc1        $f1, -0x7E24($gp)
    ctx->pc = 0x2bcf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcf50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf54: 0xc4420074  lwc1        $f2, 0x74($v0)
    ctx->pc = 0x2bcf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcf58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bcf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf5c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2bcf5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bcf60: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bcf60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bcf64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bcf64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bcf68: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2bcf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2bcf6c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2bcf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2bcf70: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BCF70u;
    SET_GPR_U32(ctx, 31, 0x2BCF78u);
    ctx->pc = 0x2BCF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF70u;
    // 0x2bcf74: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BCF70u, 0x2BCF78u)) {
        return;
    }
    ctx->pc = 0x2BCF78u;
label_2bcf78:
    // 0x2bcf78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BCF78u;
    {
        const bool branch_taken_0x2bcf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF78u;
        // 0x2bcf7c: 0xc7a3023c  lwc1        $f3, 0x23C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf78) {
            ctx->pc = 0x2BCFA4u;
            goto label_2bcfa4;
        }
    }
    ctx->pc = 0x2BCF80u;
label_2bcf80:
    // 0x2bcf80: 0xc78081e0  lwc1        $f0, -0x7E20($gp)
    ctx->pc = 0x2bcf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcf84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf88: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2bcf88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bcf8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bcf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf90: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2bcf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bcf94: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bcf94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bcf98: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BCF98u;
    SET_GPR_U32(ctx, 31, 0x2BCFA0u);
    ctx->pc = 0x2BCF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF98u;
    // 0x2bcf9c: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BCF98u, 0x2BCFA0u)) {
        return;
    }
    ctx->pc = 0x2BCFA0u;
label_2bcfa0:
    // 0x2bcfa0: 0xc7a3023c  lwc1        $f3, 0x23C($sp)
    ctx->pc = 0x2bcfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2bcfa4:
    // 0x2bcfa4: 0xc7a10230  lwc1        $f1, 0x230($sp)
    ctx->pc = 0x2bcfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcfa8: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bcfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bcfac: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2bcfacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2bcfb0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2bcfb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bcfb4: 0xc78081e4  lwc1        $f0, -0x7E1C($gp)
    ctx->pc = 0x2bcfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcfb8: 0xc4440060  lwc1        $f4, 0x60($v0)
    ctx->pc = 0x2bcfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bcfbc: 0xc4460064  lwc1        $f6, 0x64($v0)
    ctx->pc = 0x2bcfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bcfc0: 0xc442004c  lwc1        $f2, 0x4C($v0)
    ctx->pc = 0x2bcfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcfc4: 0x46002129  min.s       $f4, $f4, $f0
    ctx->pc = 0x2bcfc4u;
    ctx->f[4] = std::min(ctx->f[4], ctx->f[0]);
    // 0x2bcfc8: 0xc4450050  lwc1        $f5, 0x50($v0)
    ctx->pc = 0x2bcfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bcfcc: 0x460031a9  min.s       $f6, $f6, $f0
    ctx->pc = 0x2bcfccu;
    ctx->f[6] = std::min(ctx->f[6], ctx->f[0]);
    // 0x2bcfd0: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x2bcfd0u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
    // 0x2bcfd4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2bcfd4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2bcfd8: 0x46002969  min.s       $f5, $f5, $f0
    ctx->pc = 0x2bcfd8u;
    ctx->f[5] = std::min(ctx->f[5], ctx->f[0]);
    // 0x2bcfdc: 0x460300c4  c1          0x300C4
    ctx->pc = 0x2bcfdcu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[3]);
    // 0x2bcfe0: 0xc7a10234  lwc1        $f1, 0x234($sp)
    ctx->pc = 0x2bcfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcfe4: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x2bcfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcfe8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2bcfe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bcfec: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2bcfecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bcff0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bcff0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcff4: 0x46010384  c1          0x10384
    ctx->pc = 0x2bcff4u;
    ctx->f[14] = FPU_SQRT_S(ctx->f[1]);
    // 0x2bcff8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bcff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bcffc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bcffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bd000: 0x46031ac0  add.s       $f11, $f3, $f3
    ctx->pc = 0x2bd000u;
    ctx->f[11] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2bd004: 0xc7aa01e0  lwc1        $f10, 0x1E0($sp)
    ctx->pc = 0x2bd004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2bd008: 0x460e7300  add.s       $f12, $f14, $f14
    ctx->pc = 0x2bd008u;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
    // 0x2bd00c: 0x460d1000  add.s       $f0, $f2, $f13
    ctx->pc = 0x2bd00cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
    // 0x2bd010: 0xc7a901f0  lwc1        $f9, 0x1F0($sp)
    ctx->pc = 0x2bd010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2bd014: 0x460d2040  add.s       $f1, $f4, $f13
    ctx->pc = 0x2bd014u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[13]);
    // 0x2bd018: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2bd018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2bd01c: 0x460d3200  add.s       $f8, $f6, $f13
    ctx->pc = 0x2bd01cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[13]);
    // 0x2bd020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd024: 0x460d29c0  add.s       $f7, $f5, $f13
    ctx->pc = 0x2bd024u;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[13]);
    // 0x2bd028: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x2bd028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x2bd02c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x2bd02cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2bd030: 0x46026881  sub.s       $f2, $f13, $f2
    ctx->pc = 0x2bd030u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x2bd034: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x2bd034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2bd038: 0x46084a02  mul.s       $f8, $f9, $f8
    ctx->pc = 0x2bd038u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x2bd03c: 0x46046901  sub.s       $f4, $f13, $f4
    ctx->pc = 0x2bd03cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[13], ctx->f[4]);
    // 0x2bd040: 0x46066981  sub.s       $f6, $f13, $f6
    ctx->pc = 0x2bd040u;
    ctx->f[6] = FPU_SUB_S(ctx->f[13], ctx->f[6]);
    // 0x2bd044: 0x460749c2  mul.s       $f7, $f9, $f7
    ctx->pc = 0x2bd044u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x2bd048: 0x46056941  sub.s       $f5, $f13, $f5
    ctx->pc = 0x2bd048u;
    ctx->f[5] = FPU_SUB_S(ctx->f[13], ctx->f[5]);
    // 0x2bd04c: 0x460203c3  div.s       $f15, $f0, $f2
    ctx->pc = 0x2bd04cu;
    ctx->f[15] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x2bd050: 0x46040883  div.s       $f2, $f1, $f4
    ctx->pc = 0x2bd050u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[4]);
    // 0x2bd054: 0x46064203  div.s       $f8, $f8, $f6
    ctx->pc = 0x2bd054u;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[8], ctx->f[6]);
    // 0x2bd058: 0x460539c3  div.s       $f7, $f7, $f5
    ctx->pc = 0x2bd058u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[7], ctx->f[5]);
    // 0x2bd05c: 0x460d1800  add.s       $f0, $f3, $f13
    ctx->pc = 0x2bd05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x2bd060: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x2bd060u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2bd064: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x2bd064u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2bd068: 0x46006943  div.s       $f5, $f13, $f0
    ctx->pc = 0x2bd068u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[13], ctx->f[0]);
    // 0x2bd06c: 0x46025042  mul.s       $f1, $f10, $f2
    ctx->pc = 0x2bd06cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x2bd070: 0x46084802  mul.s       $f0, $f9, $f8
    ctx->pc = 0x2bd070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x2bd074: 0x460f5282  mul.s       $f10, $f10, $f15
    ctx->pc = 0x2bd074u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[15]);
    // 0x2bd078: 0x46074a42  mul.s       $f9, $f9, $f7
    ctx->pc = 0x2bd078u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x2bd07c: 0x460b5ac2  mul.s       $f11, $f11, $f11
    ctx->pc = 0x2bd07cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x2bd080: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bd080u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd084: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2BD084u;
    {
        const bool branch_taken_0x2bd084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD084u;
        // 0x2bd088: 0x46095280  add.s       $f10, $f10, $f9 (Delay Slot)
        ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd084) {
            ctx->pc = 0x2BD0B8u;
            goto label_2bd0b8;
        }
    }
    ctx->pc = 0x2BD08Cu;
    // 0x2bd08c: 0x460a5834  c.lt.s      $f11, $f10
    ctx->pc = 0x2bd08cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd090: 0x0  nop
    ctx->pc = 0x2bd090u;
    // NOP
    // 0x2bd094: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD094u;
    {
        const bool branch_taken_0x2bd094 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd094) {
            ctx->pc = 0x2BD098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD094u;
            // 0x2bd098: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD0BCu;
            goto label_2bd0bc;
        }
    }
    ctx->pc = 0x2BD09Cu;
    // 0x2bd09c: 0x460a6fc3  div.s       $f31, $f13, $f10
    ctx->pc = 0x2bd09cu;
    ctx->f[31] = FPU_DIV_S(ctx, ctx->f[13], ctx->f[10]);
    // 0x2bd0a0: 0x461f0004  c1          0x1F0004
    ctx->pc = 0x2bd0a0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[31]);
    // 0x2bd0a4: 0xe7a0044c  swc1        $f0, 0x44C($sp)
    ctx->pc = 0x2bd0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1100), bits); }
    // 0x2bd0a8: 0x46057042  mul.s       $f1, $f14, $f5
    ctx->pc = 0x2bd0a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[5]);
    // 0x2bd0ac: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2bd0acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2bd0b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BD0B0u;
    {
        const bool branch_taken_0x2bd0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0B0u;
        // 0x2bd0b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0b0) {
            ctx->pc = 0x2BD0F8u;
            goto label_2bd0f8;
        }
    }
    ctx->pc = 0x2BD0B8u;
label_2bd0b8:
    // 0x2bd0b8: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2bd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2bd0bc:
    // 0x2bd0bc: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2bd0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2bd0c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BD0C0u;
    {
        const bool branch_taken_0x2bd0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0C0u;
        // 0x2bd0c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0c0) {
            ctx->pc = 0x2BD100u;
            goto label_2bd100;
        }
    }
    ctx->pc = 0x2BD0C8u;
    // 0x2bd0c8: 0x46015834  c.lt.s      $f11, $f1
    ctx->pc = 0x2bd0c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd0cc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2BD0CCu;
    {
        const bool branch_taken_0x2bd0cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd0cc) {
            ctx->pc = 0x2BD100u;
            goto label_2bd100;
        }
    }
    ctx->pc = 0x2BD0D4u;
    // 0x2bd0d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd0d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd0dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2bd0dcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2bd0e0: 0xe7a00448  swc1        $f0, 0x448($sp)
    ctx->pc = 0x2bd0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
    // 0x2bd0e4: 0x460000c4  c1          0xC4
    ctx->pc = 0x2bd0e4u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bd0e8: 0x46057042  mul.s       $f1, $f14, $f5
    ctx->pc = 0x2bd0e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[5]);
    // 0x2bd0ec: 0xe7a30450  swc1        $f3, 0x450($sp)
    ctx->pc = 0x2bd0ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
    // 0x2bd0f0: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x2bd0f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2bd0f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bd0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd0f8:
    // 0x2bd0f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bd0f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bd0fc: 0xe7a10454  swc1        $f1, 0x454($sp)
    ctx->pc = 0x2bd0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_2bd100:
    // 0x2bd100: 0x10a000b8  beqz        $a1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2BD100u;
    {
        const bool branch_taken_0x2bd100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD100u;
        // 0x2bd104: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd100) {
            ctx->pc = 0x2BD3E4u;
            goto label_2bd3e4;
        }
    }
    ctx->pc = 0x2BD108u;
    // 0x2bd108: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD108u;
    {
        const bool branch_taken_0x2bd108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD108u;
        // 0x2bd10c: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd108) {
            ctx->pc = 0x2BD114u;
            goto label_2bd114;
        }
    }
    ctx->pc = 0x2BD110u;
    // 0x2bd110: 0x460078c6  mov.s       $f3, $f15
    ctx->pc = 0x2bd110u;
    ctx->f[3] = FPU_MOV_S(ctx->f[15]);
label_2bd114:
    // 0x2bd114: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD114u;
    {
        const bool branch_taken_0x2bd114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bd114) {
            ctx->pc = 0x2BD118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD114u;
            // 0x2bd118: 0x46003a06  mov.s       $f8, $f7 (Delay Slot)
            ctx->f[8] = FPU_MOV_S(ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD11Cu;
            goto label_2bd11c;
        }
    }
    ctx->pc = 0x2BD11Cu;
label_2bd11c:
    // 0x2bd11c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD11Cu;
    {
        const bool branch_taken_0x2bd11c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD11Cu;
        // 0x2bd120: 0xc7a00448  lwc1        $f0, 0x448($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd11c) {
            ctx->pc = 0x2BD128u;
            goto label_2bd128;
        }
    }
    ctx->pc = 0x2BD124u;
    // 0x2bd124: 0x4600f806  mov.s       $f0, $f31
    ctx->pc = 0x2bd124u;
    ctx->f[0] = FPU_MOV_S(ctx->f[31]);
label_2bd128:
    // 0x2bd128: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD128u;
    {
        const bool branch_taken_0x2bd128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD128u;
        // 0x2bd12c: 0xc7a20450  lwc1        $f2, 0x450($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd128) {
            ctx->pc = 0x2BD134u;
            goto label_2bd134;
        }
    }
    ctx->pc = 0x2BD130u;
    // 0x2bd130: 0xc7a2044c  lwc1        $f2, 0x44C($sp)
    ctx->pc = 0x2bd130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2bd134:
    // 0x2bd134: 0x460061c2  mul.s       $f7, $f12, $f0
    ctx->pc = 0x2bd134u;
    ctx->f[7] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2bd138: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x2bd138u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2bd13c: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2bd13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd140: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bd140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bd144: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd148: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bd148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bd14c: 0xc7a40190  lwc1        $f4, 0x190($sp)
    ctx->pc = 0x2bd14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bd150: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2bd150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2bd154: 0xc7a60198  lwc1        $f6, 0x198($sp)
    ctx->pc = 0x2bd154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bd158: 0xc7a50194  lwc1        $f5, 0x194($sp)
    ctx->pc = 0x2bd158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bd15c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bd15cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bd160: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x2bd160u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x2bd164: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2bd164u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2bd168: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2bd168u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2bd16c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2bd16cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2bd170: 0x46033842  mul.s       $f1, $f7, $f3
    ctx->pc = 0x2bd170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x2bd174: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2bd174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd178: 0xc7a201a4  lwc1        $f2, 0x1A4($sp)
    ctx->pc = 0x2bd178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd17c: 0xc7a301a8  lwc1        $f3, 0x1A8($sp)
    ctx->pc = 0x2bd17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd180: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bd180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bd184: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2bd184u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bd188: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2bd188u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bd18c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2bd18cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2bd190: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2bd190u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2bd194: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x2bd194u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x2bd198: 0x460839c2  mul.s       $f7, $f7, $f8
    ctx->pc = 0x2bd198u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x2bd19c: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2bd19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd1a0: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x2bd1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd1a4: 0xc7a201b8  lwc1        $f2, 0x1B8($sp)
    ctx->pc = 0x2bd1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd1a8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2bd1a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2bd1ac: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2bd1acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2bd1b0: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2bd1b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2bd1b4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2bd1b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2bd1b8: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2bd1b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2bd1bc: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x2bd1bcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2bd1c0: 0xe7a40420  swc1        $f4, 0x420($sp)
    ctx->pc = 0x2bd1c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1056), bits); }
    // 0x2bd1c4: 0xe7a50424  swc1        $f5, 0x424($sp)
    ctx->pc = 0x2bd1c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1060), bits); }
    // 0x2bd1c8: 0xe7a60428  swc1        $f6, 0x428($sp)
    ctx->pc = 0x2bd1c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1064), bits); }
    // 0x2bd1cc: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x2bd1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd1d0: 0x460120c2  mul.s       $f3, $f4, $f1
    ctx->pc = 0x2bd1d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2bd1d4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2bd1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd1d8: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2bd1d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2bd1dc: 0xc7a20154  lwc1        $f2, 0x154($sp)
    ctx->pc = 0x2bd1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd1e0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2bd1e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2bd1e4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2bd1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2bd1e8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2bd1e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2bd1ec: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x2bd1ecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2bd1f0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bd1f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bd1f4: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x2bd1f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x2bd1f8: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x2bd1f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2bd1fc: 0xe7a00434  swc1        $f0, 0x434($sp)
    ctx->pc = 0x2bd1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
    // 0x2bd200: 0xe7a40438  swc1        $f4, 0x438($sp)
    ctx->pc = 0x2bd200u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
    // 0x2bd204: 0xe7a10430  swc1        $f1, 0x430($sp)
    ctx->pc = 0x2bd204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
    // 0x2bd208: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bd208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bd20c: 0x2444e668  addiu       $a0, $v0, -0x1998
    ctx->pc = 0x2bd20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960744));
    // 0x2bd210: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x2bd210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2bd214: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BD214u;
    {
        const bool branch_taken_0x2bd214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD214u;
        // 0x2bd218: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd214) {
            ctx->pc = 0x2BD284u;
            goto label_2bd284;
        }
    }
    ctx->pc = 0x2BD21Cu;
    // 0x2bd21c: 0xc7a00454  lwc1        $f0, 0x454($sp)
    ctx->pc = 0x2bd21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd220: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2bd220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2bd224: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bd224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2bd228: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2bd228u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2bd22c: 0x0  nop
    ctx->pc = 0x2bd22cu;
    // NOP
label_2bd230:
    // 0x2bd230: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x2bd230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bd234: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x2bd234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bd238: 0x6888000f  ldl         $t0, 0xF($a0)
    ctx->pc = 0x2bd238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bd23c: 0x6c880008  ldr         $t0, 0x8($a0)
    ctx->pc = 0x2bd23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bd240: 0x68890017  ldl         $t1, 0x17($a0)
    ctx->pc = 0x2bd240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bd244: 0x6c890010  ldr         $t1, 0x10($a0)
    ctx->pc = 0x2bd244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bd248: 0x688a001f  ldl         $t2, 0x1F($a0)
    ctx->pc = 0x2bd248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bd24c: 0x6c8a0018  ldr         $t2, 0x18($a0)
    ctx->pc = 0x2bd24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bd250: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x2bd250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd254: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x2bd254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd258: 0xb068000f  sdl         $t0, 0xF($v1)
    ctx->pc = 0x2bd258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd25c: 0xb4680008  sdr         $t0, 0x8($v1)
    ctx->pc = 0x2bd25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd260: 0xb0690017  sdl         $t1, 0x17($v1)
    ctx->pc = 0x2bd260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd264: 0xb4690010  sdr         $t1, 0x10($v1)
    ctx->pc = 0x2bd264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd268: 0xb06a001f  sdl         $t2, 0x1F($v1)
    ctx->pc = 0x2bd268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd26c: 0xb46a0018  sdr         $t2, 0x18($v1)
    ctx->pc = 0x2bd26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd270: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2bd270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bd274: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BD274u;
    {
        const bool branch_taken_0x2bd274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD274u;
        // 0x2bd278: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd274) {
            ctx->pc = 0x2BD230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd230;
        }
    }
    ctx->pc = 0x2BD27Cu;
    // 0x2bd27c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BD27Cu;
    {
        const bool branch_taken_0x2bd27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd27c) {
            ctx->pc = 0x2BD2C0u;
            goto label_2bd2c0;
        }
    }
    ctx->pc = 0x2BD284u;
label_2bd284:
    // 0x2bd284: 0xc7a00454  lwc1        $f0, 0x454($sp)
    ctx->pc = 0x2bd284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd288: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2bd288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2bd28c: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bd28cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2bd290: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2bd290u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2bd294:
    // 0x2bd294: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x2bd294u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bd298: 0xdc880008  ld          $t0, 0x8($a0)
    ctx->pc = 0x2bd298u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bd29c: 0xdc890010  ld          $t1, 0x10($a0)
    ctx->pc = 0x2bd29cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bd2a0: 0xdc8a0018  ld          $t2, 0x18($a0)
    ctx->pc = 0x2bd2a0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2bd2a4: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2bd2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2bd2a8: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x2bd2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x2bd2ac: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x2bd2acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
    // 0x2bd2b0: 0xfc6a0018  sd          $t2, 0x18($v1)
    ctx->pc = 0x2bd2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 10));
    // 0x2bd2b4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2bd2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bd2b8: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BD2B8u;
    {
        const bool branch_taken_0x2bd2b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2B8u;
        // 0x2bd2bc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2b8) {
            ctx->pc = 0x2BD294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd294;
        }
    }
    ctx->pc = 0x2BD2C0u;
label_2bd2c0:
    // 0x2bd2c0: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x2bd2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2bd2c4: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x2bd2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2bd2c8: 0x8c8c0008  lw          $t4, 0x8($a0)
    ctx->pc = 0x2bd2c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bd2cc: 0xb06b0007  sdl         $t3, 0x7($v1)
    ctx->pc = 0x2bd2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd2d0: 0xb46b0000  sdr         $t3, 0x0($v1)
    ctx->pc = 0x2bd2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd2d4: 0xac6c0008  sw          $t4, 0x8($v1)
    ctx->pc = 0x2bd2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 12));
    // 0x2bd2d8: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD2D8u;
    {
        const bool branch_taken_0x2bd2d8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2D8u;
        // 0x2bd2dc: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2d8) {
            ctx->pc = 0x2BD2F8u;
            goto label_2bd2f8;
        }
    }
    ctx->pc = 0x2BD2E0u;
    // 0x2bd2e0: 0x6ba30437  ldl         $v1, 0x437($sp)
    ctx->pc = 0x2bd2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1079); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2bd2e4: 0x6fa30430  ldr         $v1, 0x430($sp)
    ctx->pc = 0x2bd2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1072); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2bd2e8: 0x8fa40438  lw          $a0, 0x438($sp)
    ctx->pc = 0x2bd2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x2bd2ec: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x2bd2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd2f0: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x2bd2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd2f4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bd2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2bd2f8:
    // 0x2bd2f8: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD2F8u;
    {
        const bool branch_taken_0x2bd2f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2F8u;
        // 0x2bd2fc: 0xc7a00430  lwc1        $f0, 0x430($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2f8) {
            ctx->pc = 0x2BD320u;
            goto label_2bd320;
        }
    }
    ctx->pc = 0x2BD300u;
    // 0x2bd300: 0xc7a10434  lwc1        $f1, 0x434($sp)
    ctx->pc = 0x2bd300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd304: 0xc7a20438  lwc1        $f2, 0x438($sp)
    ctx->pc = 0x2bd304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd308: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bd308u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bd30c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bd30cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bd310: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bd310u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bd314: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bd314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bd318: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bd318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bd31c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2bd31cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2bd320:
    // 0x2bd320: 0xc4e13a6c  lwc1        $f1, 0x3A6C($a3)
    ctx->pc = 0x2bd320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 14956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd328: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2bd328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2bd32c: 0x14a20025  bne         $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BD32Cu;
    {
        const bool branch_taken_0x2bd32c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD32Cu;
        // 0x2bd330: 0xe7a1005c  swc1        $f1, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd32c) {
            ctx->pc = 0x2BD3C4u;
            goto label_2bd3c4;
        }
    }
    ctx->pc = 0x2BD334u;
    // 0x2bd334: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bd334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bd338: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bd338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd33c: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2bd33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd340: 0xc4410084  lwc1        $f1, 0x84($v0)
    ctx->pc = 0x2bd340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd344: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x2bd344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x2bd348: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x2bd348u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd34c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2bd34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd350: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x2BD350u;
    {
        const bool branch_taken_0x2bd350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd350) {
            ctx->pc = 0x2BD3E4u;
            goto label_2bd3e4;
        }
    }
    ctx->pc = 0x2BD358u;
    // 0x2bd358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd35c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd360: 0xc78081e8  lwc1        $f0, -0x7E18($gp)
    ctx->pc = 0x2bd360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd364: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2bd364u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2bd368: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bd368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x2bd36c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bd36cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd370: 0x0  nop
    ctx->pc = 0x2bd370u;
    // NOP
    // 0x2bd374: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD374u;
    {
        const bool branch_taken_0x2bd374 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd374) {
            ctx->pc = 0x2BD378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD374u;
            // 0x2bd378: 0x461c0801  sub.s       $f0, $f1, $f28 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD384u;
            goto label_2bd384;
        }
    }
    ctx->pc = 0x2BD37Cu;
    // 0x2bd37c: 0xc78081ec  lwc1        $f0, -0x7E14($gp)
    ctx->pc = 0x2bd37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd380: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2bd380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
label_2bd384:
    // 0x2bd384: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2bd384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bd388: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bd388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bd38c: 0x461d0802  mul.s       $f0, $f1, $f29
    ctx->pc = 0x2bd38cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x2bd390: 0xc78181f0  lwc1        $f1, -0x7E10($gp)
    ctx->pc = 0x2bd390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd394: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bd394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd398: 0xc4420080  lwc1        $f2, 0x80($v0)
    ctx->pc = 0x2bd398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd39c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3a0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2bd3a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bd3a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bd3a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bd3a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bd3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bd3ac: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2bd3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2bd3b0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2bd3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2bd3b4: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BD3B4u;
    SET_GPR_U32(ctx, 31, 0x2BD3BCu);
    ctx->pc = 0x2BD3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3B4u;
    // 0x2bd3b8: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BD3B4u, 0x2BD3BCu)) {
        return;
    }
    ctx->pc = 0x2BD3BCu;
label_2bd3bc:
    // 0x2bd3bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD3BCu;
    {
        const bool branch_taken_0x2bd3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd3bc) {
            ctx->pc = 0x2BD3E4u;
            goto label_2bd3e4;
        }
    }
    ctx->pc = 0x2BD3C4u;
label_2bd3c4:
    // 0x2bd3c4: 0xc78081f4  lwc1        $f0, -0x7E0C($gp)
    ctx->pc = 0x2bd3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd3c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bd3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3cc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2bd3ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bd3d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3d4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2bd3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bd3d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bd3d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bd3dc: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BD3DCu;
    SET_GPR_U32(ctx, 31, 0x2BD3E4u);
    ctx->pc = 0x2BD3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3DCu;
    // 0x2bd3e0: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BD3DCu, 0x2BD3E4u)) {
        return;
    }
    ctx->pc = 0x2BD3E4u;
label_2bd3e4:
    // 0x2bd3e4: 0x16a0003b  bnez        $s5, . + 4 + (0x3B << 2)
    ctx->pc = 0x2BD3E4u;
    {
        const bool branch_taken_0x2bd3e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3E4u;
        // 0x2bd3e8: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3e4) {
            ctx->pc = 0x2BD4D4u;
            goto label_2bd4d4;
        }
    }
    ctx->pc = 0x2BD3ECu;
    // 0x2bd3ec: 0x2463e668  addiu       $v1, $v1, -0x1998
    ctx->pc = 0x2bd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
    // 0x2bd3f0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2bd3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2bd3f4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BD3F4u;
    {
        const bool branch_taken_0x2bd3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3F4u;
        // 0x2bd3f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3f4) {
            ctx->pc = 0x2BD45Cu;
            goto label_2bd45c;
        }
    }
    ctx->pc = 0x2BD3FCu;
    // 0x2bd3fc: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bd3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2bd400: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bd400u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2bd404: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2bd404u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2bd408:
    // 0x2bd408: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x2bd408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bd40c: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x2bd40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bd410: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x2bd410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bd414: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x2bd414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bd418: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x2bd418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2bd41c: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x2bd41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2bd420: 0x686c001f  ldl         $t4, 0x1F($v1)
    ctx->pc = 0x2bd420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2bd424: 0x6c6c0018  ldr         $t4, 0x18($v1)
    ctx->pc = 0x2bd424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2bd428: 0xb0c90007  sdl         $t1, 0x7($a2)
    ctx->pc = 0x2bd428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd42c: 0xb4c90000  sdr         $t1, 0x0($a2)
    ctx->pc = 0x2bd42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd430: 0xb0ca000f  sdl         $t2, 0xF($a2)
    ctx->pc = 0x2bd430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd434: 0xb4ca0008  sdr         $t2, 0x8($a2)
    ctx->pc = 0x2bd434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd438: 0xb0cb0017  sdl         $t3, 0x17($a2)
    ctx->pc = 0x2bd438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd43c: 0xb4cb0010  sdr         $t3, 0x10($a2)
    ctx->pc = 0x2bd43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd440: 0xb0cc001f  sdl         $t4, 0x1F($a2)
    ctx->pc = 0x2bd440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd444: 0xb4cc0018  sdr         $t4, 0x18($a2)
    ctx->pc = 0x2bd444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd448: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bd448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bd44c: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2BD44Cu;
    {
        const bool branch_taken_0x2bd44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD44Cu;
        // 0x2bd450: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd44c) {
            ctx->pc = 0x2BD408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd408;
        }
    }
    ctx->pc = 0x2BD454u;
    // 0x2bd454: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BD454u;
    {
        const bool branch_taken_0x2bd454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd454) {
            ctx->pc = 0x2BD494u;
            goto label_2bd494;
        }
    }
    ctx->pc = 0x2BD45Cu;
label_2bd45c:
    // 0x2bd45c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2bd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2bd460: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2bd460u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2bd464: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2bd464u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2bd468:
    // 0x2bd468: 0xdc6d0000  ld          $t5, 0x0($v1)
    ctx->pc = 0x2bd468u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd46c: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x2bd46cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bd470: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x2bd470u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bd474: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x2bd474u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bd478: 0xfccd0000  sd          $t5, 0x0($a2)
    ctx->pc = 0x2bd478u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 13));
    // 0x2bd47c: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x2bd47cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x2bd480: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x2bd480u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x2bd484: 0xfcc90018  sd          $t1, 0x18($a2)
    ctx->pc = 0x2bd484u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 9));
    // 0x2bd488: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bd488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bd48c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BD48Cu;
    {
        const bool branch_taken_0x2bd48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD48Cu;
        // 0x2bd490: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd48c) {
            ctx->pc = 0x2BD468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd468;
        }
    }
    ctx->pc = 0x2BD494u;
label_2bd494:
    // 0x2bd494: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x2bd494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bd498: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x2bd498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bd49c: 0x8c6b0008  lw          $t3, 0x8($v1)
    ctx->pc = 0x2bd49cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bd4a0: 0xb0ca0007  sdl         $t2, 0x7($a2)
    ctx->pc = 0x2bd4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd4a4: 0xb4ca0000  sdr         $t2, 0x0($a2)
    ctx->pc = 0x2bd4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd4a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bd4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4ac: 0xc5013a70  lwc1        $f1, 0x3A70($t0)
    ctx->pc = 0x2bd4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 14960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd4b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4b4: 0xc4e03a6c  lwc1        $f0, 0x3A6C($a3)
    ctx->pc = 0x2bd4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 14956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd4b8: 0xaccb0008  sw          $t3, 0x8($a2)
    ctx->pc = 0x2bd4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 11));
    // 0x2bd4bc: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2bd4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bd4c0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2bd4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2bd4c4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2bd4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2bd4c8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2bd4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2bd4cc: 0xc0ae476  jal         func_2B91D8
    ctx->pc = 0x2BD4CCu;
    SET_GPR_U32(ctx, 31, 0x2BD4D4u);
    ctx->pc = 0x2BD4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4CCu;
    // 0x2bd4d0: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B91D8u, 0x2BD4CCu, 0x2BD4D4u)) {
        return;
    }
    ctx->pc = 0x2BD4D4u;
label_2bd4d4:
    // 0x2bd4d4: 0xc0ae4f8  jal         func_2B93E0
    ctx->pc = 0x2BD4D4u;
    SET_GPR_U32(ctx, 31, 0x2BD4DCu);
    ctx->pc = 0x2BD4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4D4u;
    // 0x2bd4d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B93E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B93E0u, 0x2BD4D4u, 0x2BD4DCu)) {
        return;
    }
    ctx->pc = 0x2BD4DCu;
label_2bd4dc:
    // 0x2bd4dc: 0x7bb004f0  lq          $s0, 0x4F0($sp)
    ctx->pc = 0x2bd4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x2bd4e0: 0x7bb104e0  lq          $s1, 0x4E0($sp)
    ctx->pc = 0x2bd4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x2bd4e4: 0x7bb204d0  lq          $s2, 0x4D0($sp)
    ctx->pc = 0x2bd4e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x2bd4e8: 0x7bb304c0  lq          $s3, 0x4C0($sp)
    ctx->pc = 0x2bd4e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x2bd4ec: 0x7bb404b0  lq          $s4, 0x4B0($sp)
    ctx->pc = 0x2bd4ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x2bd4f0: 0x7bb504a0  lq          $s5, 0x4A0($sp)
    ctx->pc = 0x2bd4f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2bd4f4: 0x7bb60490  lq          $s6, 0x490($sp)
    ctx->pc = 0x2bd4f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2bd4f8: 0x7bb70480  lq          $s7, 0x480($sp)
    ctx->pc = 0x2bd4f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2bd4fc: 0x7bbe0470  lq          $fp, 0x470($sp)
    ctx->pc = 0x2bd4fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2bd500: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x2bd500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2bd504: 0xc7bf0558  lwc1        $f31, 0x558($sp)
    ctx->pc = 0x2bd504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2bd508: 0xc7be0550  lwc1        $f30, 0x550($sp)
    ctx->pc = 0x2bd508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2bd50c: 0xc7bd0548  lwc1        $f29, 0x548($sp)
    ctx->pc = 0x2bd50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2bd510: 0xc7bc0540  lwc1        $f28, 0x540($sp)
    ctx->pc = 0x2bd510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2bd514: 0xc7bb0538  lwc1        $f27, 0x538($sp)
    ctx->pc = 0x2bd514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2bd518: 0xc7ba0530  lwc1        $f26, 0x530($sp)
    ctx->pc = 0x2bd518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2bd51c: 0xc7b90528  lwc1        $f25, 0x528($sp)
    ctx->pc = 0x2bd51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2bd520: 0xc7b80520  lwc1        $f24, 0x520($sp)
    ctx->pc = 0x2bd520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2bd524: 0xc7b70518  lwc1        $f23, 0x518($sp)
    ctx->pc = 0x2bd524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2bd528: 0xc7b60510  lwc1        $f22, 0x510($sp)
    ctx->pc = 0x2bd528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bd52c: 0xc7b50508  lwc1        $f21, 0x508($sp)
    ctx->pc = 0x2bd52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bd530: 0xc7b40500  lwc1        $f20, 0x500($sp)
    ctx->pc = 0x2bd530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd534: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD534u;
        // 0x2bd538: 0x27bd0560  addiu       $sp, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD53Cu;
    // 0x2bd53c: 0x0  nop
    ctx->pc = 0x2bd53cu;
    // NOP
    ctx->pc = 0x2bd540u;
}
