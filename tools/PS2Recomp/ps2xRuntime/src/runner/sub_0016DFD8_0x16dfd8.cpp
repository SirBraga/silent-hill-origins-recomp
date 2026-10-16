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

// Function: sub_0016DFD8
// Address: 0x16dfd8 - 0x16e3f0
void sub_0016DFD8_0x16dfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DFD8_0x16dfd8");
#endif

    switch (ctx->pc) {
        case 0x16dfd8u: goto label_16dfd8;
        case 0x16dfdcu: goto label_16dfdc;
        case 0x16dfe0u: goto label_16dfe0;
        case 0x16dfe4u: goto label_16dfe4;
        case 0x16dfe8u: goto label_16dfe8;
        case 0x16dfecu: goto label_16dfec;
        case 0x16dff0u: goto label_16dff0;
        case 0x16dff4u: goto label_16dff4;
        case 0x16dff8u: goto label_16dff8;
        case 0x16dffcu: goto label_16dffc;
        case 0x16e000u: goto label_16e000;
        case 0x16e004u: goto label_16e004;
        case 0x16e008u: goto label_16e008;
        case 0x16e00cu: goto label_16e00c;
        case 0x16e010u: goto label_16e010;
        case 0x16e014u: goto label_16e014;
        case 0x16e018u: goto label_16e018;
        case 0x16e01cu: goto label_16e01c;
        case 0x16e020u: goto label_16e020;
        case 0x16e024u: goto label_16e024;
        case 0x16e028u: goto label_16e028;
        case 0x16e02cu: goto label_16e02c;
        case 0x16e030u: goto label_16e030;
        case 0x16e034u: goto label_16e034;
        case 0x16e038u: goto label_16e038;
        case 0x16e03cu: goto label_16e03c;
        case 0x16e040u: goto label_16e040;
        case 0x16e044u: goto label_16e044;
        case 0x16e048u: goto label_16e048;
        case 0x16e04cu: goto label_16e04c;
        case 0x16e050u: goto label_16e050;
        case 0x16e054u: goto label_16e054;
        case 0x16e058u: goto label_16e058;
        case 0x16e05cu: goto label_16e05c;
        case 0x16e060u: goto label_16e060;
        case 0x16e064u: goto label_16e064;
        case 0x16e068u: goto label_16e068;
        case 0x16e06cu: goto label_16e06c;
        case 0x16e070u: goto label_16e070;
        case 0x16e074u: goto label_16e074;
        case 0x16e078u: goto label_16e078;
        case 0x16e07cu: goto label_16e07c;
        case 0x16e080u: goto label_16e080;
        case 0x16e084u: goto label_16e084;
        case 0x16e088u: goto label_16e088;
        case 0x16e08cu: goto label_16e08c;
        case 0x16e090u: goto label_16e090;
        case 0x16e094u: goto label_16e094;
        case 0x16e098u: goto label_16e098;
        case 0x16e09cu: goto label_16e09c;
        case 0x16e0a0u: goto label_16e0a0;
        case 0x16e0a4u: goto label_16e0a4;
        case 0x16e0a8u: goto label_16e0a8;
        case 0x16e0acu: goto label_16e0ac;
        case 0x16e0b0u: goto label_16e0b0;
        case 0x16e0b4u: goto label_16e0b4;
        case 0x16e0b8u: goto label_16e0b8;
        case 0x16e0bcu: goto label_16e0bc;
        case 0x16e0c0u: goto label_16e0c0;
        case 0x16e0c4u: goto label_16e0c4;
        case 0x16e0c8u: goto label_16e0c8;
        case 0x16e0ccu: goto label_16e0cc;
        case 0x16e0d0u: goto label_16e0d0;
        case 0x16e0d4u: goto label_16e0d4;
        case 0x16e0d8u: goto label_16e0d8;
        case 0x16e0dcu: goto label_16e0dc;
        case 0x16e0e0u: goto label_16e0e0;
        case 0x16e0e4u: goto label_16e0e4;
        case 0x16e0e8u: goto label_16e0e8;
        case 0x16e0ecu: goto label_16e0ec;
        case 0x16e0f0u: goto label_16e0f0;
        case 0x16e0f4u: goto label_16e0f4;
        case 0x16e0f8u: goto label_16e0f8;
        case 0x16e0fcu: goto label_16e0fc;
        case 0x16e100u: goto label_16e100;
        case 0x16e104u: goto label_16e104;
        case 0x16e108u: goto label_16e108;
        case 0x16e10cu: goto label_16e10c;
        case 0x16e110u: goto label_16e110;
        case 0x16e114u: goto label_16e114;
        case 0x16e118u: goto label_16e118;
        case 0x16e11cu: goto label_16e11c;
        case 0x16e120u: goto label_16e120;
        case 0x16e124u: goto label_16e124;
        case 0x16e128u: goto label_16e128;
        case 0x16e12cu: goto label_16e12c;
        case 0x16e130u: goto label_16e130;
        case 0x16e134u: goto label_16e134;
        case 0x16e138u: goto label_16e138;
        case 0x16e13cu: goto label_16e13c;
        case 0x16e140u: goto label_16e140;
        case 0x16e144u: goto label_16e144;
        case 0x16e148u: goto label_16e148;
        case 0x16e14cu: goto label_16e14c;
        case 0x16e150u: goto label_16e150;
        case 0x16e154u: goto label_16e154;
        case 0x16e158u: goto label_16e158;
        case 0x16e15cu: goto label_16e15c;
        case 0x16e160u: goto label_16e160;
        case 0x16e164u: goto label_16e164;
        case 0x16e168u: goto label_16e168;
        case 0x16e16cu: goto label_16e16c;
        case 0x16e170u: goto label_16e170;
        case 0x16e174u: goto label_16e174;
        case 0x16e178u: goto label_16e178;
        case 0x16e17cu: goto label_16e17c;
        case 0x16e180u: goto label_16e180;
        case 0x16e184u: goto label_16e184;
        case 0x16e188u: goto label_16e188;
        case 0x16e18cu: goto label_16e18c;
        case 0x16e190u: goto label_16e190;
        case 0x16e194u: goto label_16e194;
        case 0x16e198u: goto label_16e198;
        case 0x16e19cu: goto label_16e19c;
        case 0x16e1a0u: goto label_16e1a0;
        case 0x16e1a4u: goto label_16e1a4;
        case 0x16e1a8u: goto label_16e1a8;
        case 0x16e1acu: goto label_16e1ac;
        case 0x16e1b0u: goto label_16e1b0;
        case 0x16e1b4u: goto label_16e1b4;
        case 0x16e1b8u: goto label_16e1b8;
        case 0x16e1bcu: goto label_16e1bc;
        case 0x16e1c0u: goto label_16e1c0;
        case 0x16e1c4u: goto label_16e1c4;
        case 0x16e1c8u: goto label_16e1c8;
        case 0x16e1ccu: goto label_16e1cc;
        case 0x16e1d0u: goto label_16e1d0;
        case 0x16e1d4u: goto label_16e1d4;
        case 0x16e1d8u: goto label_16e1d8;
        case 0x16e1dcu: goto label_16e1dc;
        case 0x16e1e0u: goto label_16e1e0;
        case 0x16e1e4u: goto label_16e1e4;
        case 0x16e1e8u: goto label_16e1e8;
        case 0x16e1ecu: goto label_16e1ec;
        case 0x16e1f0u: goto label_16e1f0;
        case 0x16e1f4u: goto label_16e1f4;
        case 0x16e1f8u: goto label_16e1f8;
        case 0x16e1fcu: goto label_16e1fc;
        case 0x16e200u: goto label_16e200;
        case 0x16e204u: goto label_16e204;
        case 0x16e208u: goto label_16e208;
        case 0x16e20cu: goto label_16e20c;
        case 0x16e210u: goto label_16e210;
        case 0x16e214u: goto label_16e214;
        case 0x16e218u: goto label_16e218;
        case 0x16e21cu: goto label_16e21c;
        case 0x16e220u: goto label_16e220;
        case 0x16e224u: goto label_16e224;
        case 0x16e228u: goto label_16e228;
        case 0x16e22cu: goto label_16e22c;
        case 0x16e230u: goto label_16e230;
        case 0x16e234u: goto label_16e234;
        case 0x16e238u: goto label_16e238;
        case 0x16e23cu: goto label_16e23c;
        case 0x16e240u: goto label_16e240;
        case 0x16e244u: goto label_16e244;
        case 0x16e248u: goto label_16e248;
        case 0x16e24cu: goto label_16e24c;
        case 0x16e250u: goto label_16e250;
        case 0x16e254u: goto label_16e254;
        case 0x16e258u: goto label_16e258;
        case 0x16e25cu: goto label_16e25c;
        case 0x16e260u: goto label_16e260;
        case 0x16e264u: goto label_16e264;
        case 0x16e268u: goto label_16e268;
        case 0x16e26cu: goto label_16e26c;
        case 0x16e270u: goto label_16e270;
        case 0x16e274u: goto label_16e274;
        case 0x16e278u: goto label_16e278;
        case 0x16e27cu: goto label_16e27c;
        case 0x16e280u: goto label_16e280;
        case 0x16e284u: goto label_16e284;
        case 0x16e288u: goto label_16e288;
        case 0x16e28cu: goto label_16e28c;
        case 0x16e290u: goto label_16e290;
        case 0x16e294u: goto label_16e294;
        case 0x16e298u: goto label_16e298;
        case 0x16e29cu: goto label_16e29c;
        case 0x16e2a0u: goto label_16e2a0;
        case 0x16e2a4u: goto label_16e2a4;
        case 0x16e2a8u: goto label_16e2a8;
        case 0x16e2acu: goto label_16e2ac;
        case 0x16e2b0u: goto label_16e2b0;
        case 0x16e2b4u: goto label_16e2b4;
        case 0x16e2b8u: goto label_16e2b8;
        case 0x16e2bcu: goto label_16e2bc;
        case 0x16e2c0u: goto label_16e2c0;
        case 0x16e2c4u: goto label_16e2c4;
        case 0x16e2c8u: goto label_16e2c8;
        case 0x16e2ccu: goto label_16e2cc;
        case 0x16e2d0u: goto label_16e2d0;
        case 0x16e2d4u: goto label_16e2d4;
        case 0x16e2d8u: goto label_16e2d8;
        case 0x16e2dcu: goto label_16e2dc;
        case 0x16e2e0u: goto label_16e2e0;
        case 0x16e2e4u: goto label_16e2e4;
        case 0x16e2e8u: goto label_16e2e8;
        case 0x16e2ecu: goto label_16e2ec;
        case 0x16e2f0u: goto label_16e2f0;
        case 0x16e2f4u: goto label_16e2f4;
        case 0x16e2f8u: goto label_16e2f8;
        case 0x16e2fcu: goto label_16e2fc;
        case 0x16e300u: goto label_16e300;
        case 0x16e304u: goto label_16e304;
        case 0x16e308u: goto label_16e308;
        case 0x16e30cu: goto label_16e30c;
        case 0x16e310u: goto label_16e310;
        case 0x16e314u: goto label_16e314;
        case 0x16e318u: goto label_16e318;
        case 0x16e31cu: goto label_16e31c;
        case 0x16e320u: goto label_16e320;
        case 0x16e324u: goto label_16e324;
        case 0x16e328u: goto label_16e328;
        case 0x16e32cu: goto label_16e32c;
        case 0x16e330u: goto label_16e330;
        case 0x16e334u: goto label_16e334;
        case 0x16e338u: goto label_16e338;
        case 0x16e33cu: goto label_16e33c;
        case 0x16e340u: goto label_16e340;
        case 0x16e344u: goto label_16e344;
        case 0x16e348u: goto label_16e348;
        case 0x16e34cu: goto label_16e34c;
        case 0x16e350u: goto label_16e350;
        case 0x16e354u: goto label_16e354;
        case 0x16e358u: goto label_16e358;
        case 0x16e35cu: goto label_16e35c;
        case 0x16e360u: goto label_16e360;
        case 0x16e364u: goto label_16e364;
        case 0x16e368u: goto label_16e368;
        case 0x16e36cu: goto label_16e36c;
        case 0x16e370u: goto label_16e370;
        case 0x16e374u: goto label_16e374;
        case 0x16e378u: goto label_16e378;
        case 0x16e37cu: goto label_16e37c;
        case 0x16e380u: goto label_16e380;
        case 0x16e384u: goto label_16e384;
        case 0x16e388u: goto label_16e388;
        case 0x16e38cu: goto label_16e38c;
        case 0x16e390u: goto label_16e390;
        case 0x16e394u: goto label_16e394;
        case 0x16e398u: goto label_16e398;
        case 0x16e39cu: goto label_16e39c;
        case 0x16e3a0u: goto label_16e3a0;
        case 0x16e3a4u: goto label_16e3a4;
        case 0x16e3a8u: goto label_16e3a8;
        case 0x16e3acu: goto label_16e3ac;
        case 0x16e3b0u: goto label_16e3b0;
        case 0x16e3b4u: goto label_16e3b4;
        case 0x16e3b8u: goto label_16e3b8;
        case 0x16e3bcu: goto label_16e3bc;
        case 0x16e3c0u: goto label_16e3c0;
        case 0x16e3c4u: goto label_16e3c4;
        case 0x16e3c8u: goto label_16e3c8;
        case 0x16e3ccu: goto label_16e3cc;
        case 0x16e3d0u: goto label_16e3d0;
        case 0x16e3d4u: goto label_16e3d4;
        case 0x16e3d8u: goto label_16e3d8;
        case 0x16e3dcu: goto label_16e3dc;
        case 0x16e3e0u: goto label_16e3e0;
        case 0x16e3e4u: goto label_16e3e4;
        case 0x16e3e8u: goto label_16e3e8;
        case 0x16e3ecu: goto label_16e3ec;
        default: break;
    }

    ctx->pc = 0x16dfd8u;

label_16dfd8:
    // 0x16dfd8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16dfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_16dfdc:
    // 0x16dfdc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x16dfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_16dfe0:
    // 0x16dfe0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x16dfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_16dfe4:
    // 0x16dfe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16dfe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16dfe8:
    // 0x16dfe8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16dfe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16dfec:
    // 0x16dfec: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x16dfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_16dff0:
    // 0x16dff0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16dff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16dff4:
    // 0x16dff4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x16dff4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_16dff8:
    // 0x16dff8: 0xc04f0bc  jal         func_13C2F0
label_16dffc:
    if (ctx->pc == 0x16DFFCu) {
        ctx->pc = 0x16DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFF8u;
        // 0x16dffc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E000u;
        goto label_16e000;
    }
    ctx->pc = 0x16DFF8u;
    SET_GPR_U32(ctx, 31, 0x16E000u);
    ctx->pc = 0x16DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFF8u;
    // 0x16dffc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x16DFF8u, 0x16E000u)) {
        return;
    }
    ctx->pc = 0x16E000u;
label_16e000:
    // 0x16e000: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x16e000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_16e004:
    // 0x16e004: 0x506000e9  beql        $v1, $zero, . + 4 + (0xE9 << 2)
label_16e008:
    if (ctx->pc == 0x16E008u) {
        ctx->pc = 0x16E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E004u;
        // 0x16e008: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E00Cu;
        goto label_16e00c;
    }
    ctx->pc = 0x16E004u;
    {
        const bool branch_taken_0x16e004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e004) {
            ctx->pc = 0x16E008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E004u;
            // 0x16e008: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3ACu;
            goto label_16e3ac;
        }
    }
    ctx->pc = 0x16E00Cu;
label_16e00c:
    // 0x16e00c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e010:
    // 0x16e010: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e014:
    // 0x16e014: 0x544300e6  bnel        $v0, $v1, . + 4 + (0xE6 << 2)
label_16e018:
    if (ctx->pc == 0x16E018u) {
        ctx->pc = 0x16E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E014u;
        // 0x16e018: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E01Cu;
        goto label_16e01c;
    }
    ctx->pc = 0x16E014u;
    {
        const bool branch_taken_0x16e014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16e014) {
            ctx->pc = 0x16E018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E014u;
            // 0x16e018: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3B0u;
            goto label_16e3b0;
        }
    }
    ctx->pc = 0x16E01Cu;
label_16e01c:
    // 0x16e01c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x16e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16e020:
    // 0x16e020: 0x504000e2  beql        $v0, $zero, . + 4 + (0xE2 << 2)
label_16e024:
    if (ctx->pc == 0x16E024u) {
        ctx->pc = 0x16E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E020u;
        // 0x16e024: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E028u;
        goto label_16e028;
    }
    ctx->pc = 0x16E020u;
    {
        const bool branch_taken_0x16e020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e020) {
            ctx->pc = 0x16E024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E020u;
            // 0x16e024: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3ACu;
            goto label_16e3ac;
        }
    }
    ctx->pc = 0x16E028u;
label_16e028:
    // 0x16e028: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x16e028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_16e02c:
    // 0x16e02c: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x16e02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_16e030:
    // 0x16e030: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x16e030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_16e034:
    // 0x16e034: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x16e034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_16e038:
    // 0x16e038: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x16e038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_16e03c:
    // 0x16e03c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x16e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_16e040:
    // 0x16e040: 0xc04f0cc  jal         func_13C330
label_16e044:
    if (ctx->pc == 0x16E044u) {
        ctx->pc = 0x16E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E040u;
        // 0x16e044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E048u;
        goto label_16e048;
    }
    ctx->pc = 0x16E040u;
    SET_GPR_U32(ctx, 31, 0x16E048u);
    ctx->pc = 0x16E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E040u;
    // 0x16e044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x16E040u, 0x16E048u)) {
        return;
    }
    ctx->pc = 0x16E048u;
label_16e048:
    // 0x16e048: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16e048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e04c:
    // 0x16e04c: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x16e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_16e050:
    // 0x16e050: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x16e050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16e054:
    // 0x16e054: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x16e054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e058:
    // 0x16e058: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x16e058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e05c:
    // 0x16e05c: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x16e05cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_16e060:
    // 0x16e060: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x16e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_16e064:
    // 0x16e064: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x16e064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_16e068:
    // 0x16e068: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x16e068u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_16e06c:
    // 0x16e06c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x16e06cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_16e070:
    // 0x16e070: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x16e070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_16e074:
    // 0x16e074: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x16e074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_16e078:
    // 0x16e078: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x16e078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_16e07c:
    // 0x16e07c: 0xc6030084  lwc1        $f3, 0x84($s0)
    ctx->pc = 0x16e07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16e080:
    // 0x16e080: 0xc6050088  lwc1        $f5, 0x88($s0)
    ctx->pc = 0x16e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_16e084:
    // 0x16e084: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x16e084u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_16e088:
    // 0x16e088: 0xc604008c  lwc1        $f4, 0x8C($s0)
    ctx->pc = 0x16e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16e08c:
    // 0x16e08c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x16e08cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_16e090:
    // 0x16e090: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x16e090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_16e094:
    // 0x16e094: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x16e094u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_16e098:
    // 0x16e098: 0x46001540  add.s       $f21, $f2, $f0
    ctx->pc = 0x16e098u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_16e09c:
    // 0x16e09c: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x16e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e0a0:
    // 0x16e0a0: 0xc602007c  lwc1        $f2, 0x7C($s0)
    ctx->pc = 0x16e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16e0a4:
    // 0x16e0a4: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x16e0a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_16e0a8:
    // 0x16e0a8: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x16e0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e0ac:
    // 0x16e0ac: 0x46023881  sub.s       $f2, $f7, $f2
    ctx->pc = 0x16e0acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
label_16e0b0:
    // 0x16e0b0: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x16e0b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_16e0b4:
    // 0x16e0b4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x16e0b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_16e0b8:
    // 0x16e0b8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x16e0b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_16e0bc:
    // 0x16e0bc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x16e0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_16e0c0:
    // 0x16e0c0: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x16e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16e0c4:
    // 0x16e0c4: 0xc6040094  lwc1        $f4, 0x94($s0)
    ctx->pc = 0x16e0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16e0c8:
    // 0x16e0c8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16e0c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_16e0cc:
    // 0x16e0cc: 0xc6050098  lwc1        $f5, 0x98($s0)
    ctx->pc = 0x16e0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_16e0d0:
    // 0x16e0d0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x16e0d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_16e0d4:
    // 0x16e0d4: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x16e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_16e0d8:
    // 0x16e0d8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x16e0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_16e0dc:
    // 0x16e0dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16e0dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_16e0e0:
    // 0x16e0e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16e0e4:
    if (ctx->pc == 0x16E0E4u) {
        ctx->pc = 0x16E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0E0u;
        // 0x16e0e4: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0E8u;
        goto label_16e0e8;
    }
    ctx->pc = 0x16E0E0u;
    {
        const bool branch_taken_0x16e0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0E0u;
        // 0x16e0e4: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0e0) {
            ctx->pc = 0x16E0F8u;
            goto label_16e0f8;
        }
    }
    ctx->pc = 0x16E0E8u;
label_16e0e8:
    // 0x16e0e8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x16e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_16e0ec:
    // 0x16e0ec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_16e0f0:
    if (ctx->pc == 0x16E0F0u) {
        ctx->pc = 0x16E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0ECu;
        // 0x16e0f0: 0xc4620000  lwc1        $f2, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0F4u;
        goto label_16e0f4;
    }
    ctx->pc = 0x16E0ECu;
    {
        const bool branch_taken_0x16e0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e0ec) {
            ctx->pc = 0x16E0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E0ECu;
            // 0x16e0f0: 0xc4620000  lwc1        $f2, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E104u;
            goto label_16e104;
        }
    }
    ctx->pc = 0x16E0F4u;
label_16e0f4:
    // 0x16e0f4: 0x0  nop
    ctx->pc = 0x16e0f4u;
    // NOP
label_16e0f8:
    // 0x16e0f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e0fc:
    // 0x16e0fc: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_16e100:
    if (ctx->pc == 0x16E100u) {
        ctx->pc = 0x16E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0FCu;
        // 0x16e100: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E104u;
        goto label_16e104;
    }
    ctx->pc = 0x16E0FCu;
    {
        const bool branch_taken_0x16e0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0FCu;
        // 0x16e100: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0fc) {
            ctx->pc = 0x16E3A0u;
            goto label_16e3a0;
        }
    }
    ctx->pc = 0x16E104u;
label_16e104:
    // 0x16e104: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x16e104u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_16e108:
    // 0x16e108: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x16e108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_16e10c:
    // 0x16e10c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x16e10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e110:
    // 0x16e110: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x16e110u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_16e114:
    // 0x16e114: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x16e114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_16e118:
    // 0x16e118: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x16e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e11c:
    // 0x16e11c: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x16e11cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_16e120:
    // 0x16e120: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x16e120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_16e124:
    // 0x16e124: 0xc603009c  lwc1        $f3, 0x9C($s0)
    ctx->pc = 0x16e124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16e128:
    // 0x16e128: 0xc60500a0  lwc1        $f5, 0xA0($s0)
    ctx->pc = 0x16e128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_16e12c:
    // 0x16e12c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x16e12cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_16e130:
    // 0x16e130: 0xc60400a4  lwc1        $f4, 0xA4($s0)
    ctx->pc = 0x16e130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16e134:
    // 0x16e134: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x16e134u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_16e138:
    // 0x16e138: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x16e138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_16e13c:
    // 0x16e13c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x16e13cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_16e140:
    // 0x16e140: 0x46001240  add.s       $f9, $f2, $f0
    ctx->pc = 0x16e140u;
    ctx->f[9] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_16e144:
    // 0x16e144: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x16e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16e148:
    // 0x16e148: 0x460330c1  sub.s       $f3, $f6, $f3
    ctx->pc = 0x16e148u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_16e14c:
    // 0x16e14c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x16e14cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_16e150:
    // 0x16e150: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x16e150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e154:
    // 0x16e154: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x16e154u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_16e158:
    // 0x16e158: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x16e158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_16e15c:
    // 0x16e15c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x16e15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e160:
    // 0x16e160: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x16e160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_16e164:
    // 0x16e164: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x16e164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_16e168:
    // 0x16e168: 0xc60200a8  lwc1        $f2, 0xA8($s0)
    ctx->pc = 0x16e168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16e16c:
    // 0x16e16c: 0xc60400ac  lwc1        $f4, 0xAC($s0)
    ctx->pc = 0x16e16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16e170:
    // 0x16e170: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x16e170u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_16e174:
    // 0x16e174: 0xc60500b0  lwc1        $f5, 0xB0($s0)
    ctx->pc = 0x16e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_16e178:
    // 0x16e178: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x16e178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_16e17c:
    // 0x16e17c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x16e17cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_16e180:
    // 0x16e180: 0xc60400b8  lwc1        $f4, 0xB8($s0)
    ctx->pc = 0x16e180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16e184:
    // 0x16e184: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x16e184u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_16e188:
    // 0x16e188: 0x46001840  add.s       $f1, $f3, $f0
    ctx->pc = 0x16e188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_16e18c:
    // 0x16e18c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x16e18cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e190:
    // 0x16e190: 0x0  nop
    ctx->pc = 0x16e190u;
    // NOP
label_16e194:
    // 0x16e194: 0x45020083  bc1fl       . + 4 + (0x83 << 2)
label_16e198:
    if (ctx->pc == 0x16E198u) {
        ctx->pc = 0x16E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E194u;
        // 0x16e198: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E19Cu;
        goto label_16e19c;
    }
    ctx->pc = 0x16E194u;
    {
        const bool branch_taken_0x16e194 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e194) {
            ctx->pc = 0x16E198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E194u;
            // 0x16e198: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3A4u;
            goto label_16e3a4;
        }
    }
    ctx->pc = 0x16E19Cu;
label_16e19c:
    // 0x16e19c: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x16e19cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_16e1a0:
    // 0x16e1a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16e1a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e1a4:
    // 0x16e1a4: 0x0  nop
    ctx->pc = 0x16e1a4u;
    // NOP
label_16e1a8:
    // 0x16e1a8: 0x4502007e  bc1fl       . + 4 + (0x7E << 2)
label_16e1ac:
    if (ctx->pc == 0x16E1ACu) {
        ctx->pc = 0x16E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1A8u;
        // 0x16e1ac: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1B0u;
        goto label_16e1b0;
    }
    ctx->pc = 0x16E1A8u;
    {
        const bool branch_taken_0x16e1a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e1a8) {
            ctx->pc = 0x16E1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E1A8u;
            // 0x16e1ac: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3A4u;
            goto label_16e3a4;
        }
    }
    ctx->pc = 0x16E1B0u;
label_16e1b0:
    // 0x16e1b0: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x16e1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e1b4:
    // 0x16e1b4: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x16e1b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e1b8:
    // 0x16e1b8: 0x0  nop
    ctx->pc = 0x16e1b8u;
    // NOP
label_16e1bc:
    // 0x16e1bc: 0x45020079  bc1fl       . + 4 + (0x79 << 2)
label_16e1c0:
    if (ctx->pc == 0x16E1C0u) {
        ctx->pc = 0x16E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1BCu;
        // 0x16e1c0: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1C4u;
        goto label_16e1c4;
    }
    ctx->pc = 0x16E1BCu;
    {
        const bool branch_taken_0x16e1bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e1bc) {
            ctx->pc = 0x16E1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E1BCu;
            // 0x16e1c0: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3A4u;
            goto label_16e3a4;
        }
    }
    ctx->pc = 0x16E1C4u;
label_16e1c4:
    // 0x16e1c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16e1c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_16e1c8:
    // 0x16e1c8: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x16e1c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e1cc:
    // 0x16e1cc: 0x0  nop
    ctx->pc = 0x16e1ccu;
    // NOP
label_16e1d0:
    // 0x16e1d0: 0x45020074  bc1fl       . + 4 + (0x74 << 2)
label_16e1d4:
    if (ctx->pc == 0x16E1D4u) {
        ctx->pc = 0x16E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1D0u;
        // 0x16e1d4: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1D8u;
        goto label_16e1d8;
    }
    ctx->pc = 0x16E1D0u;
    {
        const bool branch_taken_0x16e1d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e1d0) {
            ctx->pc = 0x16E1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E1D0u;
            // 0x16e1d4: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3A4u;
            goto label_16e3a4;
        }
    }
    ctx->pc = 0x16E1D8u;
label_16e1d8:
    // 0x16e1d8: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x16e1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e1dc:
    // 0x16e1dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16e1e0:
    // 0x16e1e0: 0x0  nop
    ctx->pc = 0x16e1e0u;
    // NOP
label_16e1e4:
    // 0x16e1e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e1e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e1e8:
    // 0x16e1e8: 0x0  nop
    ctx->pc = 0x16e1e8u;
    // NOP
label_16e1ec:
    // 0x16e1ec: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_16e1f0:
    if (ctx->pc == 0x16E1F0u) {
        ctx->pc = 0x16E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1ECu;
        // 0x16e1f0: 0xc600005c  lwc1        $f0, 0x5C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1F4u;
        goto label_16e1f4;
    }
    ctx->pc = 0x16E1ECu;
    {
        const bool branch_taken_0x16e1ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e1ec) {
            ctx->pc = 0x16E1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E1ECu;
            // 0x16e1f0: 0xc600005c  lwc1        $f0, 0x5C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E218u;
            goto label_16e218;
        }
    }
    ctx->pc = 0x16E1F4u;
label_16e1f4:
    // 0x16e1f4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x16e1f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e1f8:
    // 0x16e1f8: 0x0  nop
    ctx->pc = 0x16e1f8u;
    // NOP
label_16e1fc:
    // 0x16e1fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_16e200:
    if (ctx->pc == 0x16E200u) {
        ctx->pc = 0x16E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1FCu;
        // 0x16e200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E204u;
        goto label_16e204;
    }
    ctx->pc = 0x16E1FCu;
    {
        const bool branch_taken_0x16e1fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1FCu;
        // 0x16e200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1fc) {
            ctx->pc = 0x16E210u;
            goto label_16e210;
        }
    }
    ctx->pc = 0x16E204u;
label_16e204:
    // 0x16e204: 0x1000000e  b           . + 4 + (0xE << 2)
label_16e208:
    if (ctx->pc == 0x16E208u) {
        ctx->pc = 0x16E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E204u;
        // 0x16e208: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E20Cu;
        goto label_16e20c;
    }
    ctx->pc = 0x16E204u;
    {
        const bool branch_taken_0x16e204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E204u;
        // 0x16e208: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e204) {
            ctx->pc = 0x16E240u;
            goto label_16e240;
        }
    }
    ctx->pc = 0x16E20Cu;
label_16e20c:
    // 0x16e20c: 0x0  nop
    ctx->pc = 0x16e20cu;
    // NOP
label_16e210:
    // 0x16e210: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x16e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e214:
    // 0x16e214: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16e218:
    // 0x16e218: 0x0  nop
    ctx->pc = 0x16e218u;
    // NOP
label_16e21c:
    // 0x16e21c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e21cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e220:
    // 0x16e220: 0x0  nop
    ctx->pc = 0x16e220u;
    // NOP
label_16e224:
    // 0x16e224: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_16e228:
    if (ctx->pc == 0x16E228u) {
        ctx->pc = 0x16E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E224u;
        // 0x16e228: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E22Cu;
        goto label_16e22c;
    }
    ctx->pc = 0x16E224u;
    {
        const bool branch_taken_0x16e224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e224) {
            ctx->pc = 0x16E228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E224u;
            // 0x16e228: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E244u;
            goto label_16e244;
        }
    }
    ctx->pc = 0x16E22Cu;
label_16e22c:
    // 0x16e22c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x16e22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e230:
    // 0x16e230: 0x0  nop
    ctx->pc = 0x16e230u;
    // NOP
label_16e234:
    // 0x16e234: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16e238:
    if (ctx->pc == 0x16E238u) {
        ctx->pc = 0x16E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E234u;
        // 0x16e238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E23Cu;
        goto label_16e23c;
    }
    ctx->pc = 0x16E234u;
    {
        const bool branch_taken_0x16e234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E234u;
        // 0x16e238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e234) {
            ctx->pc = 0x16E240u;
            goto label_16e240;
        }
    }
    ctx->pc = 0x16E23Cu;
label_16e23c:
    // 0x16e23c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_16e240:
    // 0x16e240: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x16e240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_16e244:
    // 0x16e244: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_16e248:
    if (ctx->pc == 0x16E248u) {
        ctx->pc = 0x16E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E244u;
        // 0x16e248: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E24Cu;
        goto label_16e24c;
    }
    ctx->pc = 0x16E244u;
    {
        const bool branch_taken_0x16e244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e244) {
            ctx->pc = 0x16E248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E244u;
            // 0x16e248: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E2F4u;
            goto label_16e2f4;
        }
    }
    ctx->pc = 0x16E24Cu;
label_16e24c:
    // 0x16e24c: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x16e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e250:
    // 0x16e250: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16e254:
    // 0x16e254: 0x0  nop
    ctx->pc = 0x16e254u;
    // NOP
label_16e258:
    // 0x16e258: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16e258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e25c:
    // 0x16e25c: 0x0  nop
    ctx->pc = 0x16e25cu;
    // NOP
label_16e260:
    // 0x16e260: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
label_16e264:
    if (ctx->pc == 0x16E264u) {
        ctx->pc = 0x16E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E260u;
        // 0x16e264: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E268u;
        goto label_16e268;
    }
    ctx->pc = 0x16E260u;
    {
        const bool branch_taken_0x16e260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e260) {
            ctx->pc = 0x16E264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E260u;
            // 0x16e264: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E2F4u;
            goto label_16e2f4;
        }
    }
    ctx->pc = 0x16E268u;
label_16e268:
    // 0x16e268: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x16e268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e26c:
    // 0x16e26c: 0x0  nop
    ctx->pc = 0x16e26cu;
    // NOP
label_16e270:
    // 0x16e270: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_16e274:
    if (ctx->pc == 0x16E274u) {
        ctx->pc = 0x16E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E270u;
        // 0x16e274: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E278u;
        goto label_16e278;
    }
    ctx->pc = 0x16E270u;
    {
        const bool branch_taken_0x16e270 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E270u;
        // 0x16e274: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e270) {
            ctx->pc = 0x16E2F0u;
            goto label_16e2f0;
        }
    }
    ctx->pc = 0x16E278u;
label_16e278:
    // 0x16e278: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x16e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_16e27c:
    // 0x16e27c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x16e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_16e280:
    // 0x16e280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16e280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e284:
    // 0x16e284: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x16e284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_16e288:
    // 0x16e288: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x16e288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_16e28c:
    // 0x16e28c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x16e28cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_16e290:
    // 0x16e290: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x16e290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_16e294:
    // 0x16e294: 0x60f809  jalr        $v1
label_16e298:
    if (ctx->pc == 0x16E298u) {
        ctx->pc = 0x16E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E294u;
        // 0x16e298: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E29Cu;
        goto label_16e29c;
    }
    ctx->pc = 0x16E294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E29Cu);
        ctx->pc = 0x16E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E294u;
        // 0x16e298: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E294u, 0x16E29Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E29Cu;
label_16e29c:
    // 0x16e29c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_16e2a0:
    // 0x16e2a0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x16e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_16e2a4:
    // 0x16e2a4: 0x24454e40  addiu       $a1, $v0, 0x4E40
    ctx->pc = 0x16e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20032));
label_16e2a8:
    // 0x16e2a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16e2ac:
    if (ctx->pc == 0x16E2ACu) {
        ctx->pc = 0x16E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2A8u;
        // 0x16e2ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2B0u;
        goto label_16e2b0;
    }
    ctx->pc = 0x16E2A8u;
    {
        const bool branch_taken_0x16e2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2A8u;
        // 0x16e2ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2a8) {
            ctx->pc = 0x16E2B4u;
            goto label_16e2b4;
        }
    }
    ctx->pc = 0x16E2B0u;
label_16e2b0:
    // 0x16e2b0: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x16e2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16e2b4:
    // 0x16e2b4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16e2b8:
    // 0x16e2b8: 0xc05a47c  jal         func_1691F0
label_16e2bc:
    if (ctx->pc == 0x16E2BCu) {
        ctx->pc = 0x16E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2B8u;
        // 0x16e2bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2C0u;
        goto label_16e2c0;
    }
    ctx->pc = 0x16E2B8u;
    SET_GPR_U32(ctx, 31, 0x16E2C0u);
    ctx->pc = 0x16E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E2B8u;
    // 0x16e2bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16E2B8u, 0x16E2C0u)) {
        return;
    }
    ctx->pc = 0x16E2C0u;
label_16e2c0:
    // 0x16e2c0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_16e2c4:
    // 0x16e2c4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x16e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16e2c8:
    // 0x16e2c8: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x16e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_16e2cc:
    // 0x16e2cc: 0x50830034  beql        $a0, $v1, . + 4 + (0x34 << 2)
label_16e2d0:
    if (ctx->pc == 0x16E2D0u) {
        ctx->pc = 0x16E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2CCu;
        // 0x16e2d0: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2D4u;
        goto label_16e2d4;
    }
    ctx->pc = 0x16E2CCu;
    {
        const bool branch_taken_0x16e2cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e2cc) {
            ctx->pc = 0x16E2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E2CCu;
            // 0x16e2d0: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3A0u;
            goto label_16e3a0;
        }
    }
    ctx->pc = 0x16E2D4u;
label_16e2d4:
    // 0x16e2d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e2d8:
    // 0x16e2d8: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_16e2dc:
    if (ctx->pc == 0x16E2DCu) {
        ctx->pc = 0x16E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2D8u;
        // 0x16e2dc: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2E0u;
        goto label_16e2e0;
    }
    ctx->pc = 0x16E2D8u;
    {
        const bool branch_taken_0x16e2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e2d8) {
            ctx->pc = 0x16E2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E2D8u;
            // 0x16e2dc: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3A0u;
            goto label_16e3a0;
        }
    }
    ctx->pc = 0x16E2E0u;
label_16e2e0:
    // 0x16e2e0: 0xc07fd18  jal         func_1FF460
label_16e2e4:
    if (ctx->pc == 0x16E2E4u) {
        ctx->pc = 0x16E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2E0u;
        // 0x16e2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2E8u;
        goto label_16e2e8;
    }
    ctx->pc = 0x16E2E0u;
    SET_GPR_U32(ctx, 31, 0x16E2E8u);
    ctx->pc = 0x16E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E2E0u;
    // 0x16e2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16E2E0u, 0x16E2E8u)) {
        return;
    }
    ctx->pc = 0x16E2E8u;
label_16e2e8:
    // 0x16e2e8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_16e2ec:
    if (ctx->pc == 0x16E2ECu) {
        ctx->pc = 0x16E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2E8u;
        // 0x16e2ec: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2F0u;
        goto label_16e2f0;
    }
    ctx->pc = 0x16E2E8u;
    {
        const bool branch_taken_0x16e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2E8u;
        // 0x16e2ec: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2e8) {
            ctx->pc = 0x16E3A0u;
            goto label_16e3a0;
        }
    }
    ctx->pc = 0x16E2F0u;
label_16e2f0:
    // 0x16e2f0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x16e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_16e2f4:
    // 0x16e2f4: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_16e2f8:
    if (ctx->pc == 0x16E2F8u) {
        ctx->pc = 0x16E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2F4u;
        // 0x16e2f8: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2FCu;
        goto label_16e2fc;
    }
    ctx->pc = 0x16E2F4u;
    {
        const bool branch_taken_0x16e2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e2f4) {
            ctx->pc = 0x16E2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E2F4u;
            // 0x16e2f8: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3A4u;
            goto label_16e3a4;
        }
    }
    ctx->pc = 0x16E2FCu;
label_16e2fc:
    // 0x16e2fc: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x16e2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e300:
    // 0x16e300: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16e304:
    // 0x16e304: 0x0  nop
    ctx->pc = 0x16e304u;
    // NOP
label_16e308:
    // 0x16e308: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16e308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e30c:
    // 0x16e30c: 0x0  nop
    ctx->pc = 0x16e30cu;
    // NOP
label_16e310:
    // 0x16e310: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
label_16e314:
    if (ctx->pc == 0x16E314u) {
        ctx->pc = 0x16E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E310u;
        // 0x16e314: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E318u;
        goto label_16e318;
    }
    ctx->pc = 0x16E310u;
    {
        const bool branch_taken_0x16e310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e310) {
            ctx->pc = 0x16E314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E310u;
            // 0x16e314: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3A4u;
            goto label_16e3a4;
        }
    }
    ctx->pc = 0x16E318u;
label_16e318:
    // 0x16e318: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x16e318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e31c:
    // 0x16e31c: 0x0  nop
    ctx->pc = 0x16e31cu;
    // NOP
label_16e320:
    // 0x16e320: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
label_16e324:
    if (ctx->pc == 0x16E324u) {
        ctx->pc = 0x16E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E320u;
        // 0x16e324: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E328u;
        goto label_16e328;
    }
    ctx->pc = 0x16E320u;
    {
        const bool branch_taken_0x16e320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e320) {
            ctx->pc = 0x16E324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E320u;
            // 0x16e324: 0xe6150058  swc1        $f21, 0x58($s0) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3A4u;
            goto label_16e3a4;
        }
    }
    ctx->pc = 0x16E328u;
label_16e328:
    // 0x16e328: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x16e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_16e32c:
    // 0x16e32c: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x16e32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16e330:
    // 0x16e330: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x16e330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_16e334:
    // 0x16e334: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16e334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e338:
    // 0x16e338: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x16e338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_16e33c:
    // 0x16e33c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x16e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_16e340:
    // 0x16e340: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x16e340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_16e344:
    // 0x16e344: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x16e344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_16e348:
    // 0x16e348: 0x60f809  jalr        $v1
label_16e34c:
    if (ctx->pc == 0x16E34Cu) {
        ctx->pc = 0x16E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E348u;
        // 0x16e34c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E350u;
        goto label_16e350;
    }
    ctx->pc = 0x16E348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E350u);
        ctx->pc = 0x16E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E348u;
        // 0x16e34c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E348u, 0x16E350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E350u;
label_16e350:
    // 0x16e350: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16e350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_16e354:
    // 0x16e354: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x16e354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_16e358:
    // 0x16e358: 0x24454e68  addiu       $a1, $v0, 0x4E68
    ctx->pc = 0x16e358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20072));
label_16e35c:
    // 0x16e35c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16e360:
    if (ctx->pc == 0x16E360u) {
        ctx->pc = 0x16E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E35Cu;
        // 0x16e360: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E364u;
        goto label_16e364;
    }
    ctx->pc = 0x16E35Cu;
    {
        const bool branch_taken_0x16e35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E35Cu;
        // 0x16e360: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e35c) {
            ctx->pc = 0x16E368u;
            goto label_16e368;
        }
    }
    ctx->pc = 0x16E364u;
label_16e364:
    // 0x16e364: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x16e364u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16e368:
    // 0x16e368: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16e368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16e36c:
    // 0x16e36c: 0xc05a47c  jal         func_1691F0
label_16e370:
    if (ctx->pc == 0x16E370u) {
        ctx->pc = 0x16E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E36Cu;
        // 0x16e370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E374u;
        goto label_16e374;
    }
    ctx->pc = 0x16E36Cu;
    SET_GPR_U32(ctx, 31, 0x16E374u);
    ctx->pc = 0x16E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E36Cu;
    // 0x16e370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16E36Cu, 0x16E374u)) {
        return;
    }
    ctx->pc = 0x16E374u;
label_16e374:
    // 0x16e374: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16e374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_16e378:
    // 0x16e378: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x16e378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16e37c:
    // 0x16e37c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x16e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_16e380:
    // 0x16e380: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_16e384:
    if (ctx->pc == 0x16E384u) {
        ctx->pc = 0x16E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E380u;
        // 0x16e384: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E388u;
        goto label_16e388;
    }
    ctx->pc = 0x16E380u;
    {
        const bool branch_taken_0x16e380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e380) {
            ctx->pc = 0x16E384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E380u;
            // 0x16e384: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3A0u;
            goto label_16e3a0;
        }
    }
    ctx->pc = 0x16E388u;
label_16e388:
    // 0x16e388: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16e388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e38c:
    // 0x16e38c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_16e390:
    if (ctx->pc == 0x16E390u) {
        ctx->pc = 0x16E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E38Cu;
        // 0x16e390: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E394u;
        goto label_16e394;
    }
    ctx->pc = 0x16E38Cu;
    {
        const bool branch_taken_0x16e38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e38c) {
            ctx->pc = 0x16E390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E38Cu;
            // 0x16e390: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3A0u;
            goto label_16e3a0;
        }
    }
    ctx->pc = 0x16E394u;
label_16e394:
    // 0x16e394: 0xc07fd18  jal         func_1FF460
label_16e398:
    if (ctx->pc == 0x16E398u) {
        ctx->pc = 0x16E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E394u;
        // 0x16e398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E39Cu;
        goto label_16e39c;
    }
    ctx->pc = 0x16E394u;
    SET_GPR_U32(ctx, 31, 0x16E39Cu);
    ctx->pc = 0x16E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E394u;
    // 0x16e398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16E394u, 0x16E39Cu)) {
        return;
    }
    ctx->pc = 0x16E39Cu;
label_16e39c:
    // 0x16e39c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x16e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_16e3a0:
    // 0x16e3a0: 0xe6150058  swc1        $f21, 0x58($s0)
    ctx->pc = 0x16e3a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_16e3a4:
    // 0x16e3a4: 0xe614005c  swc1        $f20, 0x5C($s0)
    ctx->pc = 0x16e3a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_16e3a8:
    // 0x16e3a8: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x16e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_16e3ac:
    // 0x16e3ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e3b0:
    // 0x16e3b0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_16e3b4:
    if (ctx->pc == 0x16E3B4u) {
        ctx->pc = 0x16E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3B0u;
        // 0x16e3b4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E3B8u;
        goto label_16e3b8;
    }
    ctx->pc = 0x16E3B0u;
    {
        const bool branch_taken_0x16e3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16e3b0) {
            ctx->pc = 0x16E3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E3B0u;
            // 0x16e3b4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3C4u;
            goto label_16e3c4;
        }
    }
    ctx->pc = 0x16E3B8u;
label_16e3b8:
    // 0x16e3b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e3bc:
    // 0x16e3bc: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x16e3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_16e3c0:
    // 0x16e3c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x16e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e3c4:
    // 0x16e3c4: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x16e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_16e3c8:
    // 0x16e3c8: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_16e3cc:
    if (ctx->pc == 0x16E3CCu) {
        ctx->pc = 0x16E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3C8u;
        // 0x16e3cc: 0xae0000cc  sw          $zero, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E3D0u;
        goto label_16e3d0;
    }
    ctx->pc = 0x16E3C8u;
    {
        const bool branch_taken_0x16e3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16e3c8) {
            ctx->pc = 0x16E3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E3C8u;
            // 0x16e3cc: 0xae0000cc  sw          $zero, 0xCC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3D0u;
            goto label_16e3d0;
        }
    }
    ctx->pc = 0x16E3D0u;
label_16e3d0:
    // 0x16e3d0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x16e3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16e3d4:
    // 0x16e3d4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x16e3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16e3d8:
    // 0x16e3d8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x16e3d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16e3dc:
    // 0x16e3dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16e3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16e3e0:
    // 0x16e3e0: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x16e3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16e3e4:
    // 0x16e3e4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x16e3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16e3e8:
    // 0x16e3e8: 0x3e00008  jr          $ra
label_16e3ec:
    if (ctx->pc == 0x16E3ECu) {
        ctx->pc = 0x16E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3E8u;
        // 0x16e3ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E3F0u;
        goto label_fallthrough_0x16e3e8;
    }
    ctx->pc = 0x16E3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3E8u;
        // 0x16e3ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16e3e8:
    ctx->pc = 0x16E3F0u;
}
