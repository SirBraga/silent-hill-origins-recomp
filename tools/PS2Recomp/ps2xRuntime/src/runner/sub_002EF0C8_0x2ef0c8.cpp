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

// Function: sub_002EF0C8
// Address: 0x2ef0c8 - 0x2ef3f0
void sub_002EF0C8_0x2ef0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF0C8_0x2ef0c8");
#endif

    switch (ctx->pc) {
        case 0x2ef0c8u: goto label_2ef0c8;
        case 0x2ef0ccu: goto label_2ef0cc;
        case 0x2ef0d0u: goto label_2ef0d0;
        case 0x2ef0d4u: goto label_2ef0d4;
        case 0x2ef0d8u: goto label_2ef0d8;
        case 0x2ef0dcu: goto label_2ef0dc;
        case 0x2ef0e0u: goto label_2ef0e0;
        case 0x2ef0e4u: goto label_2ef0e4;
        case 0x2ef0e8u: goto label_2ef0e8;
        case 0x2ef0ecu: goto label_2ef0ec;
        case 0x2ef0f0u: goto label_2ef0f0;
        case 0x2ef0f4u: goto label_2ef0f4;
        case 0x2ef0f8u: goto label_2ef0f8;
        case 0x2ef0fcu: goto label_2ef0fc;
        case 0x2ef100u: goto label_2ef100;
        case 0x2ef104u: goto label_2ef104;
        case 0x2ef108u: goto label_2ef108;
        case 0x2ef10cu: goto label_2ef10c;
        case 0x2ef110u: goto label_2ef110;
        case 0x2ef114u: goto label_2ef114;
        case 0x2ef118u: goto label_2ef118;
        case 0x2ef11cu: goto label_2ef11c;
        case 0x2ef120u: goto label_2ef120;
        case 0x2ef124u: goto label_2ef124;
        case 0x2ef128u: goto label_2ef128;
        case 0x2ef12cu: goto label_2ef12c;
        case 0x2ef130u: goto label_2ef130;
        case 0x2ef134u: goto label_2ef134;
        case 0x2ef138u: goto label_2ef138;
        case 0x2ef13cu: goto label_2ef13c;
        case 0x2ef140u: goto label_2ef140;
        case 0x2ef144u: goto label_2ef144;
        case 0x2ef148u: goto label_2ef148;
        case 0x2ef14cu: goto label_2ef14c;
        case 0x2ef150u: goto label_2ef150;
        case 0x2ef154u: goto label_2ef154;
        case 0x2ef158u: goto label_2ef158;
        case 0x2ef15cu: goto label_2ef15c;
        case 0x2ef160u: goto label_2ef160;
        case 0x2ef164u: goto label_2ef164;
        case 0x2ef168u: goto label_2ef168;
        case 0x2ef16cu: goto label_2ef16c;
        case 0x2ef170u: goto label_2ef170;
        case 0x2ef174u: goto label_2ef174;
        case 0x2ef178u: goto label_2ef178;
        case 0x2ef17cu: goto label_2ef17c;
        case 0x2ef180u: goto label_2ef180;
        case 0x2ef184u: goto label_2ef184;
        case 0x2ef188u: goto label_2ef188;
        case 0x2ef18cu: goto label_2ef18c;
        case 0x2ef190u: goto label_2ef190;
        case 0x2ef194u: goto label_2ef194;
        case 0x2ef198u: goto label_2ef198;
        case 0x2ef19cu: goto label_2ef19c;
        case 0x2ef1a0u: goto label_2ef1a0;
        case 0x2ef1a4u: goto label_2ef1a4;
        case 0x2ef1a8u: goto label_2ef1a8;
        case 0x2ef1acu: goto label_2ef1ac;
        case 0x2ef1b0u: goto label_2ef1b0;
        case 0x2ef1b4u: goto label_2ef1b4;
        case 0x2ef1b8u: goto label_2ef1b8;
        case 0x2ef1bcu: goto label_2ef1bc;
        case 0x2ef1c0u: goto label_2ef1c0;
        case 0x2ef1c4u: goto label_2ef1c4;
        case 0x2ef1c8u: goto label_2ef1c8;
        case 0x2ef1ccu: goto label_2ef1cc;
        case 0x2ef1d0u: goto label_2ef1d0;
        case 0x2ef1d4u: goto label_2ef1d4;
        case 0x2ef1d8u: goto label_2ef1d8;
        case 0x2ef1dcu: goto label_2ef1dc;
        case 0x2ef1e0u: goto label_2ef1e0;
        case 0x2ef1e4u: goto label_2ef1e4;
        case 0x2ef1e8u: goto label_2ef1e8;
        case 0x2ef1ecu: goto label_2ef1ec;
        case 0x2ef1f0u: goto label_2ef1f0;
        case 0x2ef1f4u: goto label_2ef1f4;
        case 0x2ef1f8u: goto label_2ef1f8;
        case 0x2ef1fcu: goto label_2ef1fc;
        case 0x2ef200u: goto label_2ef200;
        case 0x2ef204u: goto label_2ef204;
        case 0x2ef208u: goto label_2ef208;
        case 0x2ef20cu: goto label_2ef20c;
        case 0x2ef210u: goto label_2ef210;
        case 0x2ef214u: goto label_2ef214;
        case 0x2ef218u: goto label_2ef218;
        case 0x2ef21cu: goto label_2ef21c;
        case 0x2ef220u: goto label_2ef220;
        case 0x2ef224u: goto label_2ef224;
        case 0x2ef228u: goto label_2ef228;
        case 0x2ef22cu: goto label_2ef22c;
        case 0x2ef230u: goto label_2ef230;
        case 0x2ef234u: goto label_2ef234;
        case 0x2ef238u: goto label_2ef238;
        case 0x2ef23cu: goto label_2ef23c;
        case 0x2ef240u: goto label_2ef240;
        case 0x2ef244u: goto label_2ef244;
        case 0x2ef248u: goto label_2ef248;
        case 0x2ef24cu: goto label_2ef24c;
        case 0x2ef250u: goto label_2ef250;
        case 0x2ef254u: goto label_2ef254;
        case 0x2ef258u: goto label_2ef258;
        case 0x2ef25cu: goto label_2ef25c;
        case 0x2ef260u: goto label_2ef260;
        case 0x2ef264u: goto label_2ef264;
        case 0x2ef268u: goto label_2ef268;
        case 0x2ef26cu: goto label_2ef26c;
        case 0x2ef270u: goto label_2ef270;
        case 0x2ef274u: goto label_2ef274;
        case 0x2ef278u: goto label_2ef278;
        case 0x2ef27cu: goto label_2ef27c;
        case 0x2ef280u: goto label_2ef280;
        case 0x2ef284u: goto label_2ef284;
        case 0x2ef288u: goto label_2ef288;
        case 0x2ef28cu: goto label_2ef28c;
        case 0x2ef290u: goto label_2ef290;
        case 0x2ef294u: goto label_2ef294;
        case 0x2ef298u: goto label_2ef298;
        case 0x2ef29cu: goto label_2ef29c;
        case 0x2ef2a0u: goto label_2ef2a0;
        case 0x2ef2a4u: goto label_2ef2a4;
        case 0x2ef2a8u: goto label_2ef2a8;
        case 0x2ef2acu: goto label_2ef2ac;
        case 0x2ef2b0u: goto label_2ef2b0;
        case 0x2ef2b4u: goto label_2ef2b4;
        case 0x2ef2b8u: goto label_2ef2b8;
        case 0x2ef2bcu: goto label_2ef2bc;
        case 0x2ef2c0u: goto label_2ef2c0;
        case 0x2ef2c4u: goto label_2ef2c4;
        case 0x2ef2c8u: goto label_2ef2c8;
        case 0x2ef2ccu: goto label_2ef2cc;
        case 0x2ef2d0u: goto label_2ef2d0;
        case 0x2ef2d4u: goto label_2ef2d4;
        case 0x2ef2d8u: goto label_2ef2d8;
        case 0x2ef2dcu: goto label_2ef2dc;
        case 0x2ef2e0u: goto label_2ef2e0;
        case 0x2ef2e4u: goto label_2ef2e4;
        case 0x2ef2e8u: goto label_2ef2e8;
        case 0x2ef2ecu: goto label_2ef2ec;
        case 0x2ef2f0u: goto label_2ef2f0;
        case 0x2ef2f4u: goto label_2ef2f4;
        case 0x2ef2f8u: goto label_2ef2f8;
        case 0x2ef2fcu: goto label_2ef2fc;
        case 0x2ef300u: goto label_2ef300;
        case 0x2ef304u: goto label_2ef304;
        case 0x2ef308u: goto label_2ef308;
        case 0x2ef30cu: goto label_2ef30c;
        case 0x2ef310u: goto label_2ef310;
        case 0x2ef314u: goto label_2ef314;
        case 0x2ef318u: goto label_2ef318;
        case 0x2ef31cu: goto label_2ef31c;
        case 0x2ef320u: goto label_2ef320;
        case 0x2ef324u: goto label_2ef324;
        case 0x2ef328u: goto label_2ef328;
        case 0x2ef32cu: goto label_2ef32c;
        case 0x2ef330u: goto label_2ef330;
        case 0x2ef334u: goto label_2ef334;
        case 0x2ef338u: goto label_2ef338;
        case 0x2ef33cu: goto label_2ef33c;
        case 0x2ef340u: goto label_2ef340;
        case 0x2ef344u: goto label_2ef344;
        case 0x2ef348u: goto label_2ef348;
        case 0x2ef34cu: goto label_2ef34c;
        case 0x2ef350u: goto label_2ef350;
        case 0x2ef354u: goto label_2ef354;
        case 0x2ef358u: goto label_2ef358;
        case 0x2ef35cu: goto label_2ef35c;
        case 0x2ef360u: goto label_2ef360;
        case 0x2ef364u: goto label_2ef364;
        case 0x2ef368u: goto label_2ef368;
        case 0x2ef36cu: goto label_2ef36c;
        case 0x2ef370u: goto label_2ef370;
        case 0x2ef374u: goto label_2ef374;
        case 0x2ef378u: goto label_2ef378;
        case 0x2ef37cu: goto label_2ef37c;
        case 0x2ef380u: goto label_2ef380;
        case 0x2ef384u: goto label_2ef384;
        case 0x2ef388u: goto label_2ef388;
        case 0x2ef38cu: goto label_2ef38c;
        case 0x2ef390u: goto label_2ef390;
        case 0x2ef394u: goto label_2ef394;
        case 0x2ef398u: goto label_2ef398;
        case 0x2ef39cu: goto label_2ef39c;
        case 0x2ef3a0u: goto label_2ef3a0;
        case 0x2ef3a4u: goto label_2ef3a4;
        case 0x2ef3a8u: goto label_2ef3a8;
        case 0x2ef3acu: goto label_2ef3ac;
        case 0x2ef3b0u: goto label_2ef3b0;
        case 0x2ef3b4u: goto label_2ef3b4;
        case 0x2ef3b8u: goto label_2ef3b8;
        case 0x2ef3bcu: goto label_2ef3bc;
        case 0x2ef3c0u: goto label_2ef3c0;
        case 0x2ef3c4u: goto label_2ef3c4;
        case 0x2ef3c8u: goto label_2ef3c8;
        case 0x2ef3ccu: goto label_2ef3cc;
        case 0x2ef3d0u: goto label_2ef3d0;
        case 0x2ef3d4u: goto label_2ef3d4;
        case 0x2ef3d8u: goto label_2ef3d8;
        case 0x2ef3dcu: goto label_2ef3dc;
        case 0x2ef3e0u: goto label_2ef3e0;
        case 0x2ef3e4u: goto label_2ef3e4;
        case 0x2ef3e8u: goto label_2ef3e8;
        case 0x2ef3ecu: goto label_2ef3ec;
        default: break;
    }

    ctx->pc = 0x2ef0c8u;

label_2ef0c8:
    // 0x2ef0c8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2ef0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2ef0cc:
    // 0x2ef0cc: 0x8f8290a8  lw          $v0, -0x6F58($gp)
    ctx->pc = 0x2ef0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
label_2ef0d0:
    // 0x2ef0d0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2ef0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2ef0d4:
    // 0x2ef0d4: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2ef0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_2ef0d8:
    // 0x2ef0d8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2ef0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_2ef0dc:
    // 0x2ef0dc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2ef0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2ef0e0:
    // 0x2ef0e0: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x2ef0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
label_2ef0e4:
    // 0x2ef0e4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2ef0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2ef0e8:
    // 0x2ef0e8: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x2ef0e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ef0ec:
    // 0x2ef0ec: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2ef0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2ef0f0:
    // 0x2ef0f0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2ef0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2ef0f4:
    // 0x2ef0f4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2ef0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2ef0f8:
    // 0x2ef0f8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2ef0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2ef0fc:
    // 0x2ef0fc: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2ef0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2ef100:
    // 0x2ef100: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2ef100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2ef104:
    // 0x2ef104: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ef104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2ef108:
    // 0x2ef108: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ef108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2ef10c:
    // 0x2ef10c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2ef10cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2ef110:
    // 0x2ef110: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ef110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ef114:
    // 0x2ef114: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ef114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ef118:
    // 0x2ef118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ef118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ef11c:
    // 0x2ef11c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2ef11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2ef120:
    // 0x2ef120: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_2ef124:
    if (ctx->pc == 0x2EF124u) {
        ctx->pc = 0x2EF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF120u;
        // 0x2ef124: 0x27c50008  addiu       $a1, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF128u;
        goto label_2ef128;
    }
    ctx->pc = 0x2EF120u;
    {
        const bool branch_taken_0x2ef120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF120u;
        // 0x2ef124: 0x27c50008  addiu       $a1, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef120) {
            ctx->pc = 0x2EF168u;
            goto label_2ef168;
        }
    }
    ctx->pc = 0x2EF128u;
label_2ef128:
    // 0x2ef128: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ef128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ef12c:
    // 0x2ef12c: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x2ef12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_2ef130:
    // 0x2ef130: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ef130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2ef134:
    // 0x2ef134: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x2ef134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_2ef138:
    // 0x2ef138: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2ef138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2ef13c:
    // 0x2ef13c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2ef13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2ef140:
    // 0x2ef140: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2ef140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2ef144:
    // 0x2ef144: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2ef144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2ef148:
    // 0x2ef148: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2ef148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2ef14c:
    // 0x2ef14c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2ef14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_2ef150:
    // 0x2ef150: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2ef150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_2ef154:
    // 0x2ef154: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2ef154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2ef158:
    // 0x2ef158: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2ef158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_2ef15c:
    // 0x2ef15c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2ef15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_2ef160:
    // 0x2ef160: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2ef160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_2ef164:
    // 0x2ef164: 0x0  nop
    ctx->pc = 0x2ef164u;
    // NOP
label_2ef168:
    // 0x2ef168: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x2ef168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2ef16c:
    // 0x2ef16c: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_2ef170:
    if (ctx->pc == 0x2EF170u) {
        ctx->pc = 0x2EF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF16Cu;
        // 0x2ef170: 0xafa50058  sw          $a1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF174u;
        goto label_2ef174;
    }
    ctx->pc = 0x2EF16Cu;
    {
        const bool branch_taken_0x2ef16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef16c) {
            ctx->pc = 0x2EF170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF16Cu;
            // 0x2ef170: 0xafa50058  sw          $a1, 0x58($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF1B8u;
            goto label_2ef1b8;
        }
    }
    ctx->pc = 0x2EF174u;
label_2ef174:
    // 0x2ef174: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ef174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ef178:
    // 0x2ef178: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2ef178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2ef17c:
    // 0x2ef17c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ef17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2ef180:
    // 0x2ef180: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2ef180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_2ef184:
    // 0x2ef184: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2ef184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2ef188:
    // 0x2ef188: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x2ef188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_2ef18c:
    // 0x2ef18c: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x2ef18cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_2ef190:
    // 0x2ef190: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2ef190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2ef194:
    // 0x2ef194: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2ef194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2ef198:
    // 0x2ef198: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2ef198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2ef19c:
    // 0x2ef19c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2ef19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_2ef1a0:
    // 0x2ef1a0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2ef1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_2ef1a4:
    // 0x2ef1a4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2ef1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2ef1a8:
    // 0x2ef1a8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2ef1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_2ef1ac:
    // 0x2ef1ac: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2ef1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_2ef1b0:
    // 0x2ef1b0: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x2ef1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_2ef1b4:
    // 0x2ef1b4: 0x0  nop
    ctx->pc = 0x2ef1b4u;
    // NOP
label_2ef1b8:
    // 0x2ef1b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ef1b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef1bc:
    // 0x2ef1bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ef1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ef1c0:
    // 0x2ef1c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ef1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ef1c4:
    // 0x2ef1c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ef1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ef1c8:
    // 0x2ef1c8: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x2ef1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_2ef1cc:
    // 0x2ef1cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ef1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ef1d0:
    // 0x2ef1d0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ef1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef1d4:
    // 0x2ef1d4: 0x12200070  beqz        $s1, . + 4 + (0x70 << 2)
label_2ef1d8:
    if (ctx->pc == 0x2EF1D8u) {
        ctx->pc = 0x2EF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1D4u;
        // 0x2ef1d8: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF1DCu;
        goto label_2ef1dc;
    }
    ctx->pc = 0x2EF1D4u;
    {
        const bool branch_taken_0x2ef1d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1D4u;
        // 0x2ef1d8: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1d4) {
            ctx->pc = 0x2EF398u;
            goto label_2ef398;
        }
    }
    ctx->pc = 0x2EF1DCu;
label_2ef1dc:
    // 0x2ef1dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ef1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef1e0:
    // 0x2ef1e0: 0x2636004c  addiu       $s6, $s1, 0x4C
    ctx->pc = 0x2ef1e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_2ef1e4:
    // 0x2ef1e4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x2ef1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2ef1e8:
    // 0x2ef1e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ef1e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef1ec:
    // 0x2ef1ec: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2ef1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2ef1f0:
    // 0x2ef1f0: 0x8e370024  lw          $s7, 0x24($s1)
    ctx->pc = 0x2ef1f0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2ef1f4:
    // 0x2ef1f4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2ef1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2ef1f8:
    // 0x2ef1f8: 0x18800066  blez        $a0, . + 4 + (0x66 << 2)
label_2ef1fc:
    if (ctx->pc == 0x2EF1FCu) {
        ctx->pc = 0x2EF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1F8u;
        // 0x2ef1fc: 0x8e34003c  lw          $s4, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF200u;
        goto label_2ef200;
    }
    ctx->pc = 0x2EF1F8u;
    {
        const bool branch_taken_0x2ef1f8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2EF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1F8u;
        // 0x2ef1fc: 0x8e34003c  lw          $s4, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1f8) {
            ctx->pc = 0x2EF394u;
            goto label_2ef394;
        }
    }
    ctx->pc = 0x2EF200u;
label_2ef200:
    // 0x2ef200: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ef200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2ef204:
    // 0x2ef204: 0xc7948304  lwc1        $f20, -0x7CFC($gp)
    ctx->pc = 0x2ef204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ef208:
    // 0x2ef208: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x2ef208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_2ef20c:
    // 0x2ef20c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2ef20cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ef210:
    // 0x2ef210: 0x26300054  addiu       $s0, $s1, 0x54
    ctx->pc = 0x2ef210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_2ef214:
    // 0x2ef214: 0x0  nop
    ctx->pc = 0x2ef214u;
    // NOP
label_2ef218:
    // 0x2ef218: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ef218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ef21c:
    // 0x2ef21c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2ef21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2ef220:
    // 0x2ef220: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_2ef224:
    if (ctx->pc == 0x2EF224u) {
        ctx->pc = 0x2EF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF220u;
        // 0x2ef224: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF228u;
        goto label_2ef228;
    }
    ctx->pc = 0x2EF220u;
    {
        const bool branch_taken_0x2ef220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF220u;
        // 0x2ef224: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef220) {
            ctx->pc = 0x2EF380u;
            goto label_2ef380;
        }
    }
    ctx->pc = 0x2EF228u;
label_2ef228:
    // 0x2ef228: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2ef228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2ef22c:
    // 0x2ef22c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2ef22cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef230:
    // 0x2ef230: 0x12400053  beqz        $s2, . + 4 + (0x53 << 2)
label_2ef234:
    if (ctx->pc == 0x2EF234u) {
        ctx->pc = 0x2EF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF230u;
        // 0x2ef234: 0x3c06002f  lui         $a2, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF238u;
        goto label_2ef238;
    }
    ctx->pc = 0x2EF230u;
    {
        const bool branch_taken_0x2ef230 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF230u;
        // 0x2ef234: 0x3c06002f  lui         $a2, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef230) {
            ctx->pc = 0x2EF380u;
            goto label_2ef380;
        }
    }
    ctx->pc = 0x2EF238u;
label_2ef238:
    // 0x2ef238: 0x24c602f0  addiu       $a2, $a2, 0x2F0
    ctx->pc = 0x2ef238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
label_2ef23c:
    // 0x2ef23c: 0x16860018  bne         $s4, $a2, . + 4 + (0x18 << 2)
label_2ef240:
    if (ctx->pc == 0x2EF240u) {
        ctx->pc = 0x2EF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF23Cu;
        // 0x2ef240: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF244u;
        goto label_2ef244;
    }
    ctx->pc = 0x2EF23Cu;
    {
        const bool branch_taken_0x2ef23c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 6));
        ctx->pc = 0x2EF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF23Cu;
        // 0x2ef240: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef23c) {
            ctx->pc = 0x2EF2A0u;
            goto label_2ef2a0;
        }
    }
    ctx->pc = 0x2EF244u;
label_2ef244:
    // 0x2ef244: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ef244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ef248:
    // 0x2ef248: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ef248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ef24c:
    // 0x2ef24c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ef24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2ef250:
    // 0x2ef250: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2ef250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ef254:
    // 0x2ef254: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2ef254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2ef258:
    // 0x2ef258: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2ef258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2ef25c:
    // 0x2ef25c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2ef25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ef260:
    // 0x2ef260: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2ef260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2ef264:
    // 0x2ef264: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2ef264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ef268:
    // 0x2ef268: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2ef268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2ef26c:
    // 0x2ef26c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2ef26cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2ef270:
    // 0x2ef270: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2ef270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2ef274:
    // 0x2ef274: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2ef274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_2ef278:
    // 0x2ef278: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2ef278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_2ef27c:
    // 0x2ef27c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2ef27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ef280:
    // 0x2ef280: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2ef280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2ef284:
    // 0x2ef284: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2ef284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ef288:
    // 0x2ef288: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2ef288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_2ef28c:
    // 0x2ef28c: 0xc092d94  jal         func_24B650
label_2ef290:
    if (ctx->pc == 0x2EF290u) {
        ctx->pc = 0x2EF290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF28Cu;
        // 0x2ef290: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF294u;
        goto label_2ef294;
    }
    ctx->pc = 0x2EF28Cu;
    SET_GPR_U32(ctx, 31, 0x2EF294u);
    ctx->pc = 0x2EF290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF28Cu;
    // 0x2ef290: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x2EF28Cu, 0x2EF294u)) {
        return;
    }
    ctx->pc = 0x2EF294u;
label_2ef294:
    // 0x2ef294: 0x10000035  b           . + 4 + (0x35 << 2)
label_2ef298:
    if (ctx->pc == 0x2EF298u) {
        ctx->pc = 0x2EF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF294u;
        // 0x2ef298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF29Cu;
        goto label_2ef29c;
    }
    ctx->pc = 0x2EF294u;
    {
        const bool branch_taken_0x2ef294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF294u;
        // 0x2ef298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef294) {
            ctx->pc = 0x2EF36Cu;
            goto label_2ef36c;
        }
    }
    ctx->pc = 0x2EF29Cu;
label_2ef29c:
    // 0x2ef29c: 0x0  nop
    ctx->pc = 0x2ef29cu;
    // NOP
label_2ef2a0:
    // 0x2ef2a0: 0x24420598  addiu       $v0, $v0, 0x598
    ctx->pc = 0x2ef2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1432));
label_2ef2a4:
    // 0x2ef2a4: 0x1682002e  bne         $s4, $v0, . + 4 + (0x2E << 2)
label_2ef2a8:
    if (ctx->pc == 0x2EF2A8u) {
        ctx->pc = 0x2EF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2A4u;
        // 0x2ef2a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF2ACu;
        goto label_2ef2ac;
    }
    ctx->pc = 0x2EF2A4u;
    {
        const bool branch_taken_0x2ef2a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2A4u;
        // 0x2ef2a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2a4) {
            ctx->pc = 0x2EF360u;
            goto label_2ef360;
        }
    }
    ctx->pc = 0x2EF2ACu;
label_2ef2ac:
    // 0x2ef2ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2ef2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2ef2b0:
    // 0x2ef2b0: 0x2462ffd8  addiu       $v0, $v1, -0x28
    ctx->pc = 0x2ef2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_2ef2b4:
    // 0x2ef2b4: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x2ef2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2ef2b8:
    // 0x2ef2b8: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x2ef2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2ef2bc:
    // 0x2ef2bc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2ef2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ef2c0:
    // 0x2ef2c0: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x2ef2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ef2c4:
    // 0x2ef2c4: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x2ef2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ef2c8:
    // 0x2ef2c8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2ef2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_2ef2cc:
    // 0x2ef2cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ef2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ef2d0:
    // 0x2ef2d0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2ef2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ef2d4:
    // 0x2ef2d4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ef2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2ef2d8:
    // 0x2ef2d8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2ef2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ef2dc:
    // 0x2ef2dc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2ef2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2ef2e0:
    // 0x2ef2e0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2ef2e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2ef2e4:
    // 0x2ef2e4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2ef2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2ef2e8:
    // 0x2ef2e8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2ef2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ef2ec:
    // 0x2ef2ec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2ef2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2ef2f0:
    // 0x2ef2f0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2ef2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2ef2f4:
    // 0x2ef2f4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2ef2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2ef2f8:
    // 0x2ef2f8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2ef2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_2ef2fc:
    // 0x2ef2fc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2ef2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_2ef300:
    // 0x2ef300: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2ef300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ef304:
    // 0x2ef304: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2ef304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2ef308:
    // 0x2ef308: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2ef308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ef30c:
    // 0x2ef30c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2ef30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_2ef310:
    // 0x2ef310: 0xc092d94  jal         func_24B650
label_2ef314:
    if (ctx->pc == 0x2EF314u) {
        ctx->pc = 0x2EF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF310u;
        // 0x2ef314: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF318u;
        goto label_2ef318;
    }
    ctx->pc = 0x2EF310u;
    SET_GPR_U32(ctx, 31, 0x2EF318u);
    ctx->pc = 0x2EF314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF310u;
    // 0x2ef314: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x2EF310u, 0x2EF318u)) {
        return;
    }
    ctx->pc = 0x2EF318u;
label_2ef318:
    // 0x2ef318: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2ef318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2ef31c:
    // 0x2ef31c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ef31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ef320:
    // 0x2ef320: 0x2465ffb8  addiu       $a1, $v1, -0x48
    ctx->pc = 0x2ef320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967224));
label_2ef324:
    // 0x2ef324: 0xc092f34  jal         func_24BCD0
label_2ef328:
    if (ctx->pc == 0x2EF328u) {
        ctx->pc = 0x2EF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF324u;
        // 0x2ef328: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF32Cu;
        goto label_2ef32c;
    }
    ctx->pc = 0x2EF324u;
    SET_GPR_U32(ctx, 31, 0x2EF32Cu);
    ctx->pc = 0x2EF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF324u;
    // 0x2ef328: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2EF324u, 0x2EF32Cu)) {
        return;
    }
    ctx->pc = 0x2EF32Cu;
label_2ef32c:
    // 0x2ef32c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2ef32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ef330:
    // 0x2ef330: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ef330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ef334:
    // 0x2ef334: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2ef334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2ef338:
    // 0x2ef338: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ef338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ef33c:
    // 0x2ef33c: 0xc092e32  jal         func_24B8C8
label_2ef340:
    if (ctx->pc == 0x2EF340u) {
        ctx->pc = 0x2EF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF33Cu;
        // 0x2ef340: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF344u;
        goto label_2ef344;
    }
    ctx->pc = 0x2EF33Cu;
    SET_GPR_U32(ctx, 31, 0x2EF344u);
    ctx->pc = 0x2EF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF33Cu;
    // 0x2ef340: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x2EF33Cu, 0x2EF344u)) {
        return;
    }
    ctx->pc = 0x2EF344u;
label_2ef344:
    // 0x2ef344: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2ef344u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_2ef348:
    // 0x2ef348: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ef348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ef34c:
    // 0x2ef34c: 0x24c5ffc8  addiu       $a1, $a2, -0x38
    ctx->pc = 0x2ef34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967240));
label_2ef350:
    // 0x2ef350: 0xc092f34  jal         func_24BCD0
label_2ef354:
    if (ctx->pc == 0x2EF354u) {
        ctx->pc = 0x2EF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF350u;
        // 0x2ef354: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF358u;
        goto label_2ef358;
    }
    ctx->pc = 0x2EF350u;
    SET_GPR_U32(ctx, 31, 0x2EF358u);
    ctx->pc = 0x2EF354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF350u;
    // 0x2ef354: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2EF350u, 0x2EF358u)) {
        return;
    }
    ctx->pc = 0x2EF358u;
label_2ef358:
    // 0x2ef358: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ef35c:
    if (ctx->pc == 0x2EF35Cu) {
        ctx->pc = 0x2EF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF358u;
        // 0x2ef35c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF360u;
        goto label_2ef360;
    }
    ctx->pc = 0x2EF358u;
    {
        const bool branch_taken_0x2ef358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF358u;
        // 0x2ef35c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef358) {
            ctx->pc = 0x2EF36Cu;
            goto label_2ef36c;
        }
    }
    ctx->pc = 0x2EF360u;
label_2ef360:
    // 0x2ef360: 0x280f809  jalr        $s4
label_2ef364:
    if (ctx->pc == 0x2EF364u) {
        ctx->pc = 0x2EF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF360u;
        // 0x2ef364: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF368u;
        goto label_2ef368;
    }
    ctx->pc = 0x2EF360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2EF368u);
        ctx->pc = 0x2EF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF360u;
        // 0x2ef364: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF360u, 0x2EF368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF368u;
label_2ef368:
    // 0x2ef368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ef368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ef36c:
    // 0x2ef36c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ef36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ef370:
    // 0x2ef370: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ef370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef374:
    // 0x2ef374: 0xc092fa4  jal         func_24BE90
label_2ef378:
    if (ctx->pc == 0x2EF378u) {
        ctx->pc = 0x2EF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF374u;
        // 0x2ef378: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF37Cu;
        goto label_2ef37c;
    }
    ctx->pc = 0x2EF374u;
    SET_GPR_U32(ctx, 31, 0x2EF37Cu);
    ctx->pc = 0x2EF378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF374u;
    // 0x2ef378: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x2EF374u, 0x2EF37Cu)) {
        return;
    }
    ctx->pc = 0x2EF37Cu;
label_2ef37c:
    // 0x2ef37c: 0x2d7b021  addu        $s6, $s6, $s7
    ctx->pc = 0x2ef37cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_2ef380:
    // 0x2ef380: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2ef380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2ef384:
    // 0x2ef384: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ef384u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2ef388:
    // 0x2ef388: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2ef388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ef38c:
    // 0x2ef38c: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
label_2ef390:
    if (ctx->pc == 0x2EF390u) {
        ctx->pc = 0x2EF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF38Cu;
        // 0x2ef390: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF394u;
        goto label_2ef394;
    }
    ctx->pc = 0x2EF38Cu;
    {
        const bool branch_taken_0x2ef38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF38Cu;
        // 0x2ef390: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef38c) {
            ctx->pc = 0x2EF218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef218;
        }
    }
    ctx->pc = 0x2EF394u;
label_2ef394:
    // 0x2ef394: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2ef394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2ef398:
    // 0x2ef398: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x2ef398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_2ef39c:
    // 0x2ef39c: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
label_2ef3a0:
    if (ctx->pc == 0x2EF3A0u) {
        ctx->pc = 0x2EF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF39Cu;
        // 0x2ef3a0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3A4u;
        goto label_2ef3a4;
    }
    ctx->pc = 0x2EF39Cu;
    {
        const bool branch_taken_0x2ef39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF39Cu;
        // 0x2ef3a0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef39c) {
            ctx->pc = 0x2EF1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef1c0;
        }
    }
    ctx->pc = 0x2EF3A4u;
label_2ef3a4:
    // 0x2ef3a4: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x2ef3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2ef3a8:
    // 0x2ef3a8: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x2ef3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2ef3ac:
    // 0x2ef3ac: 0xc0a0472  jal         func_2811C8
label_2ef3b0:
    if (ctx->pc == 0x2EF3B0u) {
        ctx->pc = 0x2EF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3ACu;
        // 0x2ef3b0: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3B4u;
        goto label_2ef3b4;
    }
    ctx->pc = 0x2EF3ACu;
    SET_GPR_U32(ctx, 31, 0x2EF3B4u);
    ctx->pc = 0x2EF3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF3ACu;
    // 0x2ef3b0: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2811C8u, 0x2EF3ACu, 0x2EF3B4u)) {
        return;
    }
    ctx->pc = 0x2EF3B4u;
label_2ef3b4:
    // 0x2ef3b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ef3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2ef3b8:
    // 0x2ef3b8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2ef3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2ef3bc:
    // 0x2ef3bc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2ef3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2ef3c0:
    // 0x2ef3c0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2ef3c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2ef3c4:
    // 0x2ef3c4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2ef3c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ef3c8:
    // 0x2ef3c8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2ef3c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ef3cc:
    // 0x2ef3cc: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2ef3ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ef3d0:
    // 0x2ef3d0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2ef3d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ef3d4:
    // 0x2ef3d4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ef3d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ef3d8:
    // 0x2ef3d8: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2ef3d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ef3dc:
    // 0x2ef3dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ef3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ef3e0:
    // 0x2ef3e0: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2ef3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ef3e4:
    // 0x2ef3e4: 0x3e00008  jr          $ra
label_2ef3e8:
    if (ctx->pc == 0x2EF3E8u) {
        ctx->pc = 0x2EF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3E4u;
        // 0x2ef3e8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3ECu;
        goto label_2ef3ec;
    }
    ctx->pc = 0x2EF3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3E4u;
        // 0x2ef3e8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF3ECu;
label_2ef3ec:
    // 0x2ef3ec: 0x0  nop
    ctx->pc = 0x2ef3ecu;
    // NOP
    ctx->pc = 0x2ef3f0u;
}
