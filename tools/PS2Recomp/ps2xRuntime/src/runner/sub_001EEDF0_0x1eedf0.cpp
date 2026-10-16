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

// Function: sub_001EEDF0
// Address: 0x1eedf0 - 0x1ef2d8
void sub_001EEDF0_0x1eedf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEDF0_0x1eedf0");
#endif

    switch (ctx->pc) {
        case 0x1eedf0u: goto label_1eedf0;
        case 0x1eedf4u: goto label_1eedf4;
        case 0x1eedf8u: goto label_1eedf8;
        case 0x1eedfcu: goto label_1eedfc;
        case 0x1eee00u: goto label_1eee00;
        case 0x1eee04u: goto label_1eee04;
        case 0x1eee08u: goto label_1eee08;
        case 0x1eee0cu: goto label_1eee0c;
        case 0x1eee10u: goto label_1eee10;
        case 0x1eee14u: goto label_1eee14;
        case 0x1eee18u: goto label_1eee18;
        case 0x1eee1cu: goto label_1eee1c;
        case 0x1eee20u: goto label_1eee20;
        case 0x1eee24u: goto label_1eee24;
        case 0x1eee28u: goto label_1eee28;
        case 0x1eee2cu: goto label_1eee2c;
        case 0x1eee30u: goto label_1eee30;
        case 0x1eee34u: goto label_1eee34;
        case 0x1eee38u: goto label_1eee38;
        case 0x1eee3cu: goto label_1eee3c;
        case 0x1eee40u: goto label_1eee40;
        case 0x1eee44u: goto label_1eee44;
        case 0x1eee48u: goto label_1eee48;
        case 0x1eee4cu: goto label_1eee4c;
        case 0x1eee50u: goto label_1eee50;
        case 0x1eee54u: goto label_1eee54;
        case 0x1eee58u: goto label_1eee58;
        case 0x1eee5cu: goto label_1eee5c;
        case 0x1eee60u: goto label_1eee60;
        case 0x1eee64u: goto label_1eee64;
        case 0x1eee68u: goto label_1eee68;
        case 0x1eee6cu: goto label_1eee6c;
        case 0x1eee70u: goto label_1eee70;
        case 0x1eee74u: goto label_1eee74;
        case 0x1eee78u: goto label_1eee78;
        case 0x1eee7cu: goto label_1eee7c;
        case 0x1eee80u: goto label_1eee80;
        case 0x1eee84u: goto label_1eee84;
        case 0x1eee88u: goto label_1eee88;
        case 0x1eee8cu: goto label_1eee8c;
        case 0x1eee90u: goto label_1eee90;
        case 0x1eee94u: goto label_1eee94;
        case 0x1eee98u: goto label_1eee98;
        case 0x1eee9cu: goto label_1eee9c;
        case 0x1eeea0u: goto label_1eeea0;
        case 0x1eeea4u: goto label_1eeea4;
        case 0x1eeea8u: goto label_1eeea8;
        case 0x1eeeacu: goto label_1eeeac;
        case 0x1eeeb0u: goto label_1eeeb0;
        case 0x1eeeb4u: goto label_1eeeb4;
        case 0x1eeeb8u: goto label_1eeeb8;
        case 0x1eeebcu: goto label_1eeebc;
        case 0x1eeec0u: goto label_1eeec0;
        case 0x1eeec4u: goto label_1eeec4;
        case 0x1eeec8u: goto label_1eeec8;
        case 0x1eeeccu: goto label_1eeecc;
        case 0x1eeed0u: goto label_1eeed0;
        case 0x1eeed4u: goto label_1eeed4;
        case 0x1eeed8u: goto label_1eeed8;
        case 0x1eeedcu: goto label_1eeedc;
        case 0x1eeee0u: goto label_1eeee0;
        case 0x1eeee4u: goto label_1eeee4;
        case 0x1eeee8u: goto label_1eeee8;
        case 0x1eeeecu: goto label_1eeeec;
        case 0x1eeef0u: goto label_1eeef0;
        case 0x1eeef4u: goto label_1eeef4;
        case 0x1eeef8u: goto label_1eeef8;
        case 0x1eeefcu: goto label_1eeefc;
        case 0x1eef00u: goto label_1eef00;
        case 0x1eef04u: goto label_1eef04;
        case 0x1eef08u: goto label_1eef08;
        case 0x1eef0cu: goto label_1eef0c;
        case 0x1eef10u: goto label_1eef10;
        case 0x1eef14u: goto label_1eef14;
        case 0x1eef18u: goto label_1eef18;
        case 0x1eef1cu: goto label_1eef1c;
        case 0x1eef20u: goto label_1eef20;
        case 0x1eef24u: goto label_1eef24;
        case 0x1eef28u: goto label_1eef28;
        case 0x1eef2cu: goto label_1eef2c;
        case 0x1eef30u: goto label_1eef30;
        case 0x1eef34u: goto label_1eef34;
        case 0x1eef38u: goto label_1eef38;
        case 0x1eef3cu: goto label_1eef3c;
        case 0x1eef40u: goto label_1eef40;
        case 0x1eef44u: goto label_1eef44;
        case 0x1eef48u: goto label_1eef48;
        case 0x1eef4cu: goto label_1eef4c;
        case 0x1eef50u: goto label_1eef50;
        case 0x1eef54u: goto label_1eef54;
        case 0x1eef58u: goto label_1eef58;
        case 0x1eef5cu: goto label_1eef5c;
        case 0x1eef60u: goto label_1eef60;
        case 0x1eef64u: goto label_1eef64;
        case 0x1eef68u: goto label_1eef68;
        case 0x1eef6cu: goto label_1eef6c;
        case 0x1eef70u: goto label_1eef70;
        case 0x1eef74u: goto label_1eef74;
        case 0x1eef78u: goto label_1eef78;
        case 0x1eef7cu: goto label_1eef7c;
        case 0x1eef80u: goto label_1eef80;
        case 0x1eef84u: goto label_1eef84;
        case 0x1eef88u: goto label_1eef88;
        case 0x1eef8cu: goto label_1eef8c;
        case 0x1eef90u: goto label_1eef90;
        case 0x1eef94u: goto label_1eef94;
        case 0x1eef98u: goto label_1eef98;
        case 0x1eef9cu: goto label_1eef9c;
        case 0x1eefa0u: goto label_1eefa0;
        case 0x1eefa4u: goto label_1eefa4;
        case 0x1eefa8u: goto label_1eefa8;
        case 0x1eefacu: goto label_1eefac;
        case 0x1eefb0u: goto label_1eefb0;
        case 0x1eefb4u: goto label_1eefb4;
        case 0x1eefb8u: goto label_1eefb8;
        case 0x1eefbcu: goto label_1eefbc;
        case 0x1eefc0u: goto label_1eefc0;
        case 0x1eefc4u: goto label_1eefc4;
        case 0x1eefc8u: goto label_1eefc8;
        case 0x1eefccu: goto label_1eefcc;
        case 0x1eefd0u: goto label_1eefd0;
        case 0x1eefd4u: goto label_1eefd4;
        case 0x1eefd8u: goto label_1eefd8;
        case 0x1eefdcu: goto label_1eefdc;
        case 0x1eefe0u: goto label_1eefe0;
        case 0x1eefe4u: goto label_1eefe4;
        case 0x1eefe8u: goto label_1eefe8;
        case 0x1eefecu: goto label_1eefec;
        case 0x1eeff0u: goto label_1eeff0;
        case 0x1eeff4u: goto label_1eeff4;
        case 0x1eeff8u: goto label_1eeff8;
        case 0x1eeffcu: goto label_1eeffc;
        case 0x1ef000u: goto label_1ef000;
        case 0x1ef004u: goto label_1ef004;
        case 0x1ef008u: goto label_1ef008;
        case 0x1ef00cu: goto label_1ef00c;
        case 0x1ef010u: goto label_1ef010;
        case 0x1ef014u: goto label_1ef014;
        case 0x1ef018u: goto label_1ef018;
        case 0x1ef01cu: goto label_1ef01c;
        case 0x1ef020u: goto label_1ef020;
        case 0x1ef024u: goto label_1ef024;
        case 0x1ef028u: goto label_1ef028;
        case 0x1ef02cu: goto label_1ef02c;
        case 0x1ef030u: goto label_1ef030;
        case 0x1ef034u: goto label_1ef034;
        case 0x1ef038u: goto label_1ef038;
        case 0x1ef03cu: goto label_1ef03c;
        case 0x1ef040u: goto label_1ef040;
        case 0x1ef044u: goto label_1ef044;
        case 0x1ef048u: goto label_1ef048;
        case 0x1ef04cu: goto label_1ef04c;
        case 0x1ef050u: goto label_1ef050;
        case 0x1ef054u: goto label_1ef054;
        case 0x1ef058u: goto label_1ef058;
        case 0x1ef05cu: goto label_1ef05c;
        case 0x1ef060u: goto label_1ef060;
        case 0x1ef064u: goto label_1ef064;
        case 0x1ef068u: goto label_1ef068;
        case 0x1ef06cu: goto label_1ef06c;
        case 0x1ef070u: goto label_1ef070;
        case 0x1ef074u: goto label_1ef074;
        case 0x1ef078u: goto label_1ef078;
        case 0x1ef07cu: goto label_1ef07c;
        case 0x1ef080u: goto label_1ef080;
        case 0x1ef084u: goto label_1ef084;
        case 0x1ef088u: goto label_1ef088;
        case 0x1ef08cu: goto label_1ef08c;
        case 0x1ef090u: goto label_1ef090;
        case 0x1ef094u: goto label_1ef094;
        case 0x1ef098u: goto label_1ef098;
        case 0x1ef09cu: goto label_1ef09c;
        case 0x1ef0a0u: goto label_1ef0a0;
        case 0x1ef0a4u: goto label_1ef0a4;
        case 0x1ef0a8u: goto label_1ef0a8;
        case 0x1ef0acu: goto label_1ef0ac;
        case 0x1ef0b0u: goto label_1ef0b0;
        case 0x1ef0b4u: goto label_1ef0b4;
        case 0x1ef0b8u: goto label_1ef0b8;
        case 0x1ef0bcu: goto label_1ef0bc;
        case 0x1ef0c0u: goto label_1ef0c0;
        case 0x1ef0c4u: goto label_1ef0c4;
        case 0x1ef0c8u: goto label_1ef0c8;
        case 0x1ef0ccu: goto label_1ef0cc;
        case 0x1ef0d0u: goto label_1ef0d0;
        case 0x1ef0d4u: goto label_1ef0d4;
        case 0x1ef0d8u: goto label_1ef0d8;
        case 0x1ef0dcu: goto label_1ef0dc;
        case 0x1ef0e0u: goto label_1ef0e0;
        case 0x1ef0e4u: goto label_1ef0e4;
        case 0x1ef0e8u: goto label_1ef0e8;
        case 0x1ef0ecu: goto label_1ef0ec;
        case 0x1ef0f0u: goto label_1ef0f0;
        case 0x1ef0f4u: goto label_1ef0f4;
        case 0x1ef0f8u: goto label_1ef0f8;
        case 0x1ef0fcu: goto label_1ef0fc;
        case 0x1ef100u: goto label_1ef100;
        case 0x1ef104u: goto label_1ef104;
        case 0x1ef108u: goto label_1ef108;
        case 0x1ef10cu: goto label_1ef10c;
        case 0x1ef110u: goto label_1ef110;
        case 0x1ef114u: goto label_1ef114;
        case 0x1ef118u: goto label_1ef118;
        case 0x1ef11cu: goto label_1ef11c;
        case 0x1ef120u: goto label_1ef120;
        case 0x1ef124u: goto label_1ef124;
        case 0x1ef128u: goto label_1ef128;
        case 0x1ef12cu: goto label_1ef12c;
        case 0x1ef130u: goto label_1ef130;
        case 0x1ef134u: goto label_1ef134;
        case 0x1ef138u: goto label_1ef138;
        case 0x1ef13cu: goto label_1ef13c;
        case 0x1ef140u: goto label_1ef140;
        case 0x1ef144u: goto label_1ef144;
        case 0x1ef148u: goto label_1ef148;
        case 0x1ef14cu: goto label_1ef14c;
        case 0x1ef150u: goto label_1ef150;
        case 0x1ef154u: goto label_1ef154;
        case 0x1ef158u: goto label_1ef158;
        case 0x1ef15cu: goto label_1ef15c;
        case 0x1ef160u: goto label_1ef160;
        case 0x1ef164u: goto label_1ef164;
        case 0x1ef168u: goto label_1ef168;
        case 0x1ef16cu: goto label_1ef16c;
        case 0x1ef170u: goto label_1ef170;
        case 0x1ef174u: goto label_1ef174;
        case 0x1ef178u: goto label_1ef178;
        case 0x1ef17cu: goto label_1ef17c;
        case 0x1ef180u: goto label_1ef180;
        case 0x1ef184u: goto label_1ef184;
        case 0x1ef188u: goto label_1ef188;
        case 0x1ef18cu: goto label_1ef18c;
        case 0x1ef190u: goto label_1ef190;
        case 0x1ef194u: goto label_1ef194;
        case 0x1ef198u: goto label_1ef198;
        case 0x1ef19cu: goto label_1ef19c;
        case 0x1ef1a0u: goto label_1ef1a0;
        case 0x1ef1a4u: goto label_1ef1a4;
        case 0x1ef1a8u: goto label_1ef1a8;
        case 0x1ef1acu: goto label_1ef1ac;
        case 0x1ef1b0u: goto label_1ef1b0;
        case 0x1ef1b4u: goto label_1ef1b4;
        case 0x1ef1b8u: goto label_1ef1b8;
        case 0x1ef1bcu: goto label_1ef1bc;
        case 0x1ef1c0u: goto label_1ef1c0;
        case 0x1ef1c4u: goto label_1ef1c4;
        case 0x1ef1c8u: goto label_1ef1c8;
        case 0x1ef1ccu: goto label_1ef1cc;
        case 0x1ef1d0u: goto label_1ef1d0;
        case 0x1ef1d4u: goto label_1ef1d4;
        case 0x1ef1d8u: goto label_1ef1d8;
        case 0x1ef1dcu: goto label_1ef1dc;
        case 0x1ef1e0u: goto label_1ef1e0;
        case 0x1ef1e4u: goto label_1ef1e4;
        case 0x1ef1e8u: goto label_1ef1e8;
        case 0x1ef1ecu: goto label_1ef1ec;
        case 0x1ef1f0u: goto label_1ef1f0;
        case 0x1ef1f4u: goto label_1ef1f4;
        case 0x1ef1f8u: goto label_1ef1f8;
        case 0x1ef1fcu: goto label_1ef1fc;
        case 0x1ef200u: goto label_1ef200;
        case 0x1ef204u: goto label_1ef204;
        case 0x1ef208u: goto label_1ef208;
        case 0x1ef20cu: goto label_1ef20c;
        case 0x1ef210u: goto label_1ef210;
        case 0x1ef214u: goto label_1ef214;
        case 0x1ef218u: goto label_1ef218;
        case 0x1ef21cu: goto label_1ef21c;
        case 0x1ef220u: goto label_1ef220;
        case 0x1ef224u: goto label_1ef224;
        case 0x1ef228u: goto label_1ef228;
        case 0x1ef22cu: goto label_1ef22c;
        case 0x1ef230u: goto label_1ef230;
        case 0x1ef234u: goto label_1ef234;
        case 0x1ef238u: goto label_1ef238;
        case 0x1ef23cu: goto label_1ef23c;
        case 0x1ef240u: goto label_1ef240;
        case 0x1ef244u: goto label_1ef244;
        case 0x1ef248u: goto label_1ef248;
        case 0x1ef24cu: goto label_1ef24c;
        case 0x1ef250u: goto label_1ef250;
        case 0x1ef254u: goto label_1ef254;
        case 0x1ef258u: goto label_1ef258;
        case 0x1ef25cu: goto label_1ef25c;
        case 0x1ef260u: goto label_1ef260;
        case 0x1ef264u: goto label_1ef264;
        case 0x1ef268u: goto label_1ef268;
        case 0x1ef26cu: goto label_1ef26c;
        case 0x1ef270u: goto label_1ef270;
        case 0x1ef274u: goto label_1ef274;
        case 0x1ef278u: goto label_1ef278;
        case 0x1ef27cu: goto label_1ef27c;
        case 0x1ef280u: goto label_1ef280;
        case 0x1ef284u: goto label_1ef284;
        case 0x1ef288u: goto label_1ef288;
        case 0x1ef28cu: goto label_1ef28c;
        case 0x1ef290u: goto label_1ef290;
        case 0x1ef294u: goto label_1ef294;
        case 0x1ef298u: goto label_1ef298;
        case 0x1ef29cu: goto label_1ef29c;
        case 0x1ef2a0u: goto label_1ef2a0;
        case 0x1ef2a4u: goto label_1ef2a4;
        case 0x1ef2a8u: goto label_1ef2a8;
        case 0x1ef2acu: goto label_1ef2ac;
        case 0x1ef2b0u: goto label_1ef2b0;
        case 0x1ef2b4u: goto label_1ef2b4;
        case 0x1ef2b8u: goto label_1ef2b8;
        case 0x1ef2bcu: goto label_1ef2bc;
        case 0x1ef2c0u: goto label_1ef2c0;
        case 0x1ef2c4u: goto label_1ef2c4;
        case 0x1ef2c8u: goto label_1ef2c8;
        case 0x1ef2ccu: goto label_1ef2cc;
        case 0x1ef2d0u: goto label_1ef2d0;
        case 0x1ef2d4u: goto label_1ef2d4;
        default: break;
    }

    ctx->pc = 0x1eedf0u;

label_1eedf0:
    // 0x1eedf0: 0x27bdf8c0  addiu       $sp, $sp, -0x740
    ctx->pc = 0x1eedf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965440));
label_1eedf4:
    // 0x1eedf4: 0x7fb306d0  sq          $s3, 0x6D0($sp)
    ctx->pc = 0x1eedf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 19));
label_1eedf8:
    // 0x1eedf8: 0x7fb00700  sq          $s0, 0x700($sp)
    ctx->pc = 0x1eedf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1792), GPR_VEC(ctx, 16));
label_1eedfc:
    // 0x1eedfc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1eedfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eee00:
    // 0x1eee00: 0x7fb106f0  sq          $s1, 0x6F0($sp)
    ctx->pc = 0x1eee00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1776), GPR_VEC(ctx, 17));
label_1eee04:
    // 0x1eee04: 0x7fb206e0  sq          $s2, 0x6E0($sp)
    ctx->pc = 0x1eee04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1760), GPR_VEC(ctx, 18));
label_1eee08:
    // 0x1eee08: 0xffbf06c0  sd          $ra, 0x6C0($sp)
    ctx->pc = 0x1eee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 31));
label_1eee0c:
    // 0x1eee0c: 0xe7b80730  swc1        $f24, 0x730($sp)
    ctx->pc = 0x1eee0cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_1eee10:
    // 0x1eee10: 0xe7b70728  swc1        $f23, 0x728($sp)
    ctx->pc = 0x1eee10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_1eee14:
    // 0x1eee14: 0xe7b60720  swc1        $f22, 0x720($sp)
    ctx->pc = 0x1eee14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_1eee18:
    // 0x1eee18: 0xe7b50718  swc1        $f21, 0x718($sp)
    ctx->pc = 0x1eee18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_1eee1c:
    // 0x1eee1c: 0xc075d54  jal         func_1D7550
label_1eee20:
    if (ctx->pc == 0x1EEE20u) {
        ctx->pc = 0x1EEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE1Cu;
        // 0x1eee20: 0xe7b40710  swc1        $f20, 0x710($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE24u;
        goto label_1eee24;
    }
    ctx->pc = 0x1EEE1Cu;
    SET_GPR_U32(ctx, 31, 0x1EEE24u);
    ctx->pc = 0x1EEE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEE1Cu;
    // 0x1eee20: 0xe7b40710  swc1        $f20, 0x710($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7550u, 0x1EEE1Cu, 0x1EEE24u)) {
        return;
    }
    ctx->pc = 0x1EEE24u;
label_1eee24:
    // 0x1eee24: 0x10400121  beqz        $v0, . + 4 + (0x121 << 2)
label_1eee28:
    if (ctx->pc == 0x1EEE28u) {
        ctx->pc = 0x1EEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE24u;
        // 0x1eee28: 0x7bb00700  lq          $s0, 0x700($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE2Cu;
        goto label_1eee2c;
    }
    ctx->pc = 0x1EEE24u;
    {
        const bool branch_taken_0x1eee24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE24u;
        // 0x1eee28: 0x7bb00700  lq          $s0, 0x700($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee24) {
            ctx->pc = 0x1EF2ACu;
            goto label_1ef2ac;
        }
    }
    ctx->pc = 0x1EEE2Cu;
label_1eee2c:
    // 0x1eee2c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1eee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eee30:
    // 0x1eee30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eee30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1eee34:
    // 0x1eee34: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1eee34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1eee38:
    // 0x1eee38: 0x0  nop
    ctx->pc = 0x1eee38u;
    // NOP
label_1eee3c:
    // 0x1eee3c: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x1eee3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eee40:
    // 0x1eee40: 0x0  nop
    ctx->pc = 0x1eee40u;
    // NOP
label_1eee44:
    // 0x1eee44: 0x4501011a  bc1t        . + 4 + (0x11A << 2)
label_1eee48:
    if (ctx->pc == 0x1EEE48u) {
        ctx->pc = 0x1EEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE44u;
        // 0x1eee48: 0x7bb106f0  lq          $s1, 0x6F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE4Cu;
        goto label_1eee4c;
    }
    ctx->pc = 0x1EEE44u;
    {
        const bool branch_taken_0x1eee44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE44u;
        // 0x1eee48: 0x7bb106f0  lq          $s1, 0x6F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee44) {
            ctx->pc = 0x1EF2B0u;
            goto label_1ef2b0;
        }
    }
    ctx->pc = 0x1EEE4Cu;
label_1eee4c:
    // 0x1eee4c: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x1eee4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_1eee50:
    // 0x1eee50: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x1eee50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
label_1eee54:
    // 0x1eee54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1eee54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1eee58:
    // 0x1eee58: 0x8e220fc8  lw          $v0, 0xFC8($s1)
    ctx->pc = 0x1eee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4040)));
label_1eee5c:
    // 0x1eee5c: 0x26300fc8  addiu       $s0, $s1, 0xFC8
    ctx->pc = 0x1eee5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_1eee60:
    // 0x1eee60: 0x3c013b00  lui         $at, 0x3B00
    ctx->pc = 0x1eee60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15104 << 16));
label_1eee64:
    // 0x1eee64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eee64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1eee68:
    // 0x1eee68: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1eee68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1eee6c:
    // 0x1eee6c: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x1eee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1eee70:
    // 0x1eee70: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1eee70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1eee74:
    // 0x1eee74: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1eee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1eee78:
    // 0x1eee78: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1eee78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1eee7c:
    // 0x1eee7c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1eee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eee80:
    // 0x1eee80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eee80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1eee84:
    // 0x1eee84: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1eee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eee88:
    // 0x1eee88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eee88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1eee8c:
    // 0x1eee8c: 0x46020e02  mul.s       $f24, $f1, $f2
    ctx->pc = 0x1eee8cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1eee90:
    // 0x1eee90: 0x460305c2  mul.s       $f23, $f0, $f3
    ctx->pc = 0x1eee90u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1eee94:
    // 0x1eee94: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1eee94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_1eee98:
    // 0x1eee98: 0x46160841  sub.s       $f1, $f1, $f22
    ctx->pc = 0x1eee98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_1eee9c:
    // 0x1eee9c: 0x46030542  mul.s       $f21, $f0, $f3
    ctx->pc = 0x1eee9cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1eeea0:
    // 0x1eeea0: 0x40f809  jalr        $v0
label_1eeea4:
    if (ctx->pc == 0x1EEEA4u) {
        ctx->pc = 0x1EEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEA0u;
        // 0x1eeea4: 0x46020d02  mul.s       $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEA8u;
        goto label_1eeea8;
    }
    ctx->pc = 0x1EEEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EEEA8u);
        ctx->pc = 0x1EEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEA0u;
        // 0x1eeea4: 0x46020d02  mul.s       $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEEA0u, 0x1EEEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEEA8u;
label_1eeea8:
    // 0x1eeea8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1eeea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1eeeac:
    // 0x1eeeac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1eeeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eeeb0:
    // 0x1eeeb0: 0x40f809  jalr        $v0
label_1eeeb4:
    if (ctx->pc == 0x1EEEB4u) {
        ctx->pc = 0x1EEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEB0u;
        // 0x1eeeb4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEEB8u;
        goto label_1eeeb8;
    }
    ctx->pc = 0x1EEEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EEEB8u);
        ctx->pc = 0x1EEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEB0u;
        // 0x1eeeb4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEEB0u, 0x1EEEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEEB8u;
label_1eeeb8:
    // 0x1eeeb8: 0x8e230fc8  lw          $v1, 0xFC8($s1)
    ctx->pc = 0x1eeeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4040)));
label_1eeebc:
    // 0x1eeebc: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x1eeebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1eeec0:
    // 0x1eeec0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1eeec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1eeec4:
    // 0x1eeec4: 0x24720020  addiu       $s2, $v1, 0x20
    ctx->pc = 0x1eeec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1eeec8:
    // 0x1eeec8: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1eeec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eeecc:
    // 0x1eeecc: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1eeeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1eeed0:
    // 0x1eeed0: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x1eeed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1eeed4:
    // 0x1eeed4: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x1eeed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1eeed8:
    // 0x1eeed8: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x1eeed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1eeedc:
    // 0x1eeedc: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x1eeedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1eeee0:
    // 0x1eeee0: 0x68470027  ldl         $a3, 0x27($v0)
    ctx->pc = 0x1eeee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1eeee4:
    // 0x1eeee4: 0x6c470020  ldr         $a3, 0x20($v0)
    ctx->pc = 0x1eeee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1eeee8:
    // 0x1eeee8: 0x6848002f  ldl         $t0, 0x2F($v0)
    ctx->pc = 0x1eeee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1eeeec:
    // 0x1eeeec: 0x6c480028  ldr         $t0, 0x28($v0)
    ctx->pc = 0x1eeeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1eeef0:
    // 0x1eeef0: 0xb3a505f7  sdl         $a1, 0x5F7($sp)
    ctx->pc = 0x1eeef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eeef4:
    // 0x1eeef4: 0xb7a505f0  sdr         $a1, 0x5F0($sp)
    ctx->pc = 0x1eeef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eeef8:
    // 0x1eeef8: 0xb3a605ff  sdl         $a2, 0x5FF($sp)
    ctx->pc = 0x1eeef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eeefc:
    // 0x1eeefc: 0xb7a605f8  sdr         $a2, 0x5F8($sp)
    ctx->pc = 0x1eeefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef00:
    // 0x1eef00: 0xb3a70607  sdl         $a3, 0x607($sp)
    ctx->pc = 0x1eef00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1543); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef04:
    // 0x1eef04: 0xb7a70600  sdr         $a3, 0x600($sp)
    ctx->pc = 0x1eef04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef08:
    // 0x1eef08: 0xb3a8060f  sdl         $t0, 0x60F($sp)
    ctx->pc = 0x1eef08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1551); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef0c:
    // 0x1eef0c: 0xb7a80608  sdr         $t0, 0x608($sp)
    ctx->pc = 0x1eef0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1544); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef10:
    // 0x1eef10: 0x68450037  ldl         $a1, 0x37($v0)
    ctx->pc = 0x1eef10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1eef14:
    // 0x1eef14: 0x6c450030  ldr         $a1, 0x30($v0)
    ctx->pc = 0x1eef14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1eef18:
    // 0x1eef18: 0x6846003f  ldl         $a2, 0x3F($v0)
    ctx->pc = 0x1eef18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1eef1c:
    // 0x1eef1c: 0x6c460038  ldr         $a2, 0x38($v0)
    ctx->pc = 0x1eef1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1eef20:
    // 0x1eef20: 0x68470047  ldl         $a3, 0x47($v0)
    ctx->pc = 0x1eef20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1eef24:
    // 0x1eef24: 0x6c470040  ldr         $a3, 0x40($v0)
    ctx->pc = 0x1eef24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1eef28:
    // 0x1eef28: 0x6848004f  ldl         $t0, 0x4F($v0)
    ctx->pc = 0x1eef28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1eef2c:
    // 0x1eef2c: 0x6c480048  ldr         $t0, 0x48($v0)
    ctx->pc = 0x1eef2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1eef30:
    // 0x1eef30: 0xb3a50617  sdl         $a1, 0x617($sp)
    ctx->pc = 0x1eef30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef34:
    // 0x1eef34: 0xb7a50610  sdr         $a1, 0x610($sp)
    ctx->pc = 0x1eef34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1552); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef38:
    // 0x1eef38: 0xb3a6061f  sdl         $a2, 0x61F($sp)
    ctx->pc = 0x1eef38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1567); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef3c:
    // 0x1eef3c: 0xb7a60618  sdr         $a2, 0x618($sp)
    ctx->pc = 0x1eef3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef40:
    // 0x1eef40: 0xb3a70627  sdl         $a3, 0x627($sp)
    ctx->pc = 0x1eef40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef44:
    // 0x1eef44: 0xb7a70620  sdr         $a3, 0x620($sp)
    ctx->pc = 0x1eef44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1568); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef48:
    // 0x1eef48: 0xb3a8062f  sdl         $t0, 0x62F($sp)
    ctx->pc = 0x1eef48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef4c:
    // 0x1eef4c: 0xb7a80628  sdr         $t0, 0x628($sp)
    ctx->pc = 0x1eef4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef50:
    // 0x1eef50: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1eef50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1eef54:
    // 0x1eef54: 0x688a0037  ldl         $t2, 0x37($a0)
    ctx->pc = 0x1eef54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1eef58:
    // 0x1eef58: 0x6c8a0030  ldr         $t2, 0x30($a0)
    ctx->pc = 0x1eef58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1eef5c:
    // 0x1eef5c: 0x8c8b0038  lw          $t3, 0x38($a0)
    ctx->pc = 0x1eef5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1eef60:
    // 0x1eef60: 0xb3aa0627  sdl         $t2, 0x627($sp)
    ctx->pc = 0x1eef60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef64:
    // 0x1eef64: 0xb7aa0620  sdr         $t2, 0x620($sp)
    ctx->pc = 0x1eef64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1568); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef68:
    // 0x1eef68: 0xafab0628  sw          $t3, 0x628($sp)
    ctx->pc = 0x1eef68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1576), GPR_U32(ctx, 11));
label_1eef6c:
    // 0x1eef6c: 0x68660027  ldl         $a2, 0x27($v1)
    ctx->pc = 0x1eef6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1eef70:
    // 0x1eef70: 0x6c660020  ldr         $a2, 0x20($v1)
    ctx->pc = 0x1eef70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1eef74:
    // 0x1eef74: 0x6867002f  ldl         $a3, 0x2F($v1)
    ctx->pc = 0x1eef74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1eef78:
    // 0x1eef78: 0x6c670028  ldr         $a3, 0x28($v1)
    ctx->pc = 0x1eef78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1eef7c:
    // 0x1eef7c: 0x68680037  ldl         $t0, 0x37($v1)
    ctx->pc = 0x1eef7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1eef80:
    // 0x1eef80: 0x6c680030  ldr         $t0, 0x30($v1)
    ctx->pc = 0x1eef80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1eef84:
    // 0x1eef84: 0x686a003f  ldl         $t2, 0x3F($v1)
    ctx->pc = 0x1eef84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1eef88:
    // 0x1eef88: 0x6c6a0038  ldr         $t2, 0x38($v1)
    ctx->pc = 0x1eef88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1eef8c:
    // 0x1eef8c: 0xb3a60677  sdl         $a2, 0x677($sp)
    ctx->pc = 0x1eef8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1655); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef90:
    // 0x1eef90: 0xb7a60670  sdr         $a2, 0x670($sp)
    ctx->pc = 0x1eef90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1648); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef94:
    // 0x1eef94: 0xb3a7067f  sdl         $a3, 0x67F($sp)
    ctx->pc = 0x1eef94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef98:
    // 0x1eef98: 0xb7a70678  sdr         $a3, 0x678($sp)
    ctx->pc = 0x1eef98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1656); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eef9c:
    // 0x1eef9c: 0xb3a80687  sdl         $t0, 0x687($sp)
    ctx->pc = 0x1eef9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1671); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefa0:
    // 0x1eefa0: 0xb7a80680  sdr         $t0, 0x680($sp)
    ctx->pc = 0x1eefa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1664); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefa4:
    // 0x1eefa4: 0xb3aa068f  sdl         $t2, 0x68F($sp)
    ctx->pc = 0x1eefa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefa8:
    // 0x1eefa8: 0xb7aa0688  sdr         $t2, 0x688($sp)
    ctx->pc = 0x1eefa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefac:
    // 0x1eefac: 0x68660047  ldl         $a2, 0x47($v1)
    ctx->pc = 0x1eefacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1eefb0:
    // 0x1eefb0: 0x6c660040  ldr         $a2, 0x40($v1)
    ctx->pc = 0x1eefb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1eefb4:
    // 0x1eefb4: 0x6867004f  ldl         $a3, 0x4F($v1)
    ctx->pc = 0x1eefb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1eefb8:
    // 0x1eefb8: 0x6c670048  ldr         $a3, 0x48($v1)
    ctx->pc = 0x1eefb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1eefbc:
    // 0x1eefbc: 0x68680057  ldl         $t0, 0x57($v1)
    ctx->pc = 0x1eefbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1eefc0:
    // 0x1eefc0: 0x6c680050  ldr         $t0, 0x50($v1)
    ctx->pc = 0x1eefc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1eefc4:
    // 0x1eefc4: 0x686a005f  ldl         $t2, 0x5F($v1)
    ctx->pc = 0x1eefc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1eefc8:
    // 0x1eefc8: 0x6c6a0058  ldr         $t2, 0x58($v1)
    ctx->pc = 0x1eefc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1eefcc:
    // 0x1eefcc: 0xb3a60697  sdl         $a2, 0x697($sp)
    ctx->pc = 0x1eefccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1687); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefd0:
    // 0x1eefd0: 0xb7a60690  sdr         $a2, 0x690($sp)
    ctx->pc = 0x1eefd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1680); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefd4:
    // 0x1eefd4: 0xb3a7069f  sdl         $a3, 0x69F($sp)
    ctx->pc = 0x1eefd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefd8:
    // 0x1eefd8: 0xb7a70698  sdr         $a3, 0x698($sp)
    ctx->pc = 0x1eefd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1688); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefdc:
    // 0x1eefdc: 0xb3a806a7  sdl         $t0, 0x6A7($sp)
    ctx->pc = 0x1eefdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1703); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefe0:
    // 0x1eefe0: 0xb7a806a0  sdr         $t0, 0x6A0($sp)
    ctx->pc = 0x1eefe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefe4:
    // 0x1eefe4: 0xb3aa06af  sdl         $t2, 0x6AF($sp)
    ctx->pc = 0x1eefe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefe8:
    // 0x1eefe8: 0xb7aa06a8  sdr         $t2, 0x6A8($sp)
    ctx->pc = 0x1eefe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eefec:
    // 0x1eefec: 0xc7a10610  lwc1        $f1, 0x610($sp)
    ctx->pc = 0x1eefecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eeff0:
    // 0x1eeff0: 0xc7a20614  lwc1        $f2, 0x614($sp)
    ctx->pc = 0x1eeff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eeff4:
    // 0x1eeff4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1eeff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1eeff8:
    // 0x1eeff8: 0xc7a00618  lwc1        $f0, 0x618($sp)
    ctx->pc = 0x1eeff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eeffc:
    // 0x1eeffc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1eeffcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1ef000:
    // 0x1ef000: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ef000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ef004:
    // 0x1ef004: 0xe7a10610  swc1        $f1, 0x610($sp)
    ctx->pc = 0x1ef004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1552), bits); }
label_1ef008:
    // 0x1ef008: 0xe7a20614  swc1        $f2, 0x614($sp)
    ctx->pc = 0x1ef008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1556), bits); }
label_1ef00c:
    // 0x1ef00c: 0xe7a00618  swc1        $f0, 0x618($sp)
    ctx->pc = 0x1ef00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1560), bits); }
label_1ef010:
    // 0x1ef010: 0xc7a10600  lwc1        $f1, 0x600($sp)
    ctx->pc = 0x1ef010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef014:
    // 0x1ef014: 0xc7a20604  lwc1        $f2, 0x604($sp)
    ctx->pc = 0x1ef014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef018:
    // 0x1ef018: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1ef018u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1ef01c:
    // 0x1ef01c: 0xc7a00608  lwc1        $f0, 0x608($sp)
    ctx->pc = 0x1ef01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef020:
    // 0x1ef020: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1ef020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1ef024:
    // 0x1ef024: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ef024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ef028:
    // 0x1ef028: 0xe7a10600  swc1        $f1, 0x600($sp)
    ctx->pc = 0x1ef028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1536), bits); }
label_1ef02c:
    // 0x1ef02c: 0xe7a20604  swc1        $f2, 0x604($sp)
    ctx->pc = 0x1ef02cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1540), bits); }
label_1ef030:
    // 0x1ef030: 0xe7a00608  swc1        $f0, 0x608($sp)
    ctx->pc = 0x1ef030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1544), bits); }
label_1ef034:
    // 0x1ef034: 0xc7a105f0  lwc1        $f1, 0x5F0($sp)
    ctx->pc = 0x1ef034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef038:
    // 0x1ef038: 0xc7a205f4  lwc1        $f2, 0x5F4($sp)
    ctx->pc = 0x1ef038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef03c:
    // 0x1ef03c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1ef03cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1ef040:
    // 0x1ef040: 0xc7a005f8  lwc1        $f0, 0x5F8($sp)
    ctx->pc = 0x1ef040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef044:
    // 0x1ef044: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1ef044u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1ef048:
    // 0x1ef048: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ef048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ef04c:
    // 0x1ef04c: 0xe7a105f0  swc1        $f1, 0x5F0($sp)
    ctx->pc = 0x1ef04cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1520), bits); }
label_1ef050:
    // 0x1ef050: 0xe7a205f4  swc1        $f2, 0x5F4($sp)
    ctx->pc = 0x1ef050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1524), bits); }
label_1ef054:
    // 0x1ef054: 0xe7a005f8  swc1        $f0, 0x5F8($sp)
    ctx->pc = 0x1ef054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1528), bits); }
label_1ef058:
    // 0x1ef058: 0x27b00390  addiu       $s0, $sp, 0x390
    ctx->pc = 0x1ef058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_1ef05c:
    // 0x1ef05c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1ef05cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1ef060:
    // 0x1ef060: 0x27a705f0  addiu       $a3, $sp, 0x5F0
    ctx->pc = 0x1ef060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
label_1ef064:
    // 0x1ef064: 0x24a5fd40  addiu       $a1, $a1, -0x2C0
    ctx->pc = 0x1ef064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966592));
label_1ef068:
    // 0x1ef068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef06c:
    // 0x1ef06c: 0xc093afa  jal         func_24EBE8
label_1ef070:
    if (ctx->pc == 0x1EF070u) {
        ctx->pc = 0x1EF070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF06Cu;
        // 0x1ef070: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF074u;
        goto label_1ef074;
    }
    ctx->pc = 0x1EF06Cu;
    SET_GPR_U32(ctx, 31, 0x1EF074u);
    ctx->pc = 0x1EF070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF06Cu;
    // 0x1ef070: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x1EF06Cu, 0x1EF074u)) {
        return;
    }
    ctx->pc = 0x1EF074u;
label_1ef074:
    // 0x1ef074: 0x27b104c0  addiu       $s1, $sp, 0x4C0
    ctx->pc = 0x1ef074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_1ef078:
    // 0x1ef078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ef078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef07c:
    // 0x1ef07c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ef07cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ef080:
    // 0x1ef080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef084:
    // 0x1ef084: 0xc093afa  jal         func_24EBE8
label_1ef088:
    if (ctx->pc == 0x1EF088u) {
        ctx->pc = 0x1EF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF084u;
        // 0x1ef088: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF08Cu;
        goto label_1ef08c;
    }
    ctx->pc = 0x1EF084u;
    SET_GPR_U32(ctx, 31, 0x1EF08Cu);
    ctx->pc = 0x1EF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF084u;
    // 0x1ef088: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x1EF084u, 0x1EF08Cu)) {
        return;
    }
    ctx->pc = 0x1EF08Cu;
label_1ef08c:
    // 0x1ef08c: 0xc7a104c8  lwc1        $f1, 0x4C8($sp)
    ctx->pc = 0x1ef08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef090:
    // 0x1ef090: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1ef094:
    // 0x1ef094: 0xc7a004c0  lwc1        $f0, 0x4C0($sp)
    ctx->pc = 0x1ef094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef098:
    // 0x1ef098: 0x2445fe70  addiu       $a1, $v0, -0x190
    ctx->pc = 0x1ef098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966896));
label_1ef09c:
    // 0x1ef09c: 0x0  nop
    ctx->pc = 0x1ef09cu;
    // NOP
label_1ef0a0:
    // 0x1ef0a0: 0x0  nop
    ctx->pc = 0x1ef0a0u;
    // NOP
label_1ef0a4:
    // 0x1ef0a4: 0x4601b143  div.s       $f5, $f22, $f1
    ctx->pc = 0x1ef0a4u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[22], ctx->f[1]);
label_1ef0a8:
    // 0x1ef0a8: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x1ef0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ef0ac:
    // 0x1ef0ac: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ef0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1ef0b0:
    // 0x1ef0b0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ef0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ef0b4:
    // 0x1ef0b4: 0x4600b086  mov.s       $f2, $f22
    ctx->pc = 0x1ef0b4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[22]);
label_1ef0b8:
    // 0x1ef0b8: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x1ef0b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ef0bc:
    // 0x1ef0bc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1ef0bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_1ef0c0:
    // 0x1ef0c0: 0x46180202  mul.s       $f8, $f0, $f24
    ctx->pc = 0x1ef0c0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_1ef0c4:
    // 0x1ef0c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1ef0c8:
    if (ctx->pc == 0x1EF0C8u) {
        ctx->pc = 0x1EF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0C4u;
        // 0x1ef0c8: 0x461701c2  mul.s       $f7, $f0, $f23 (Delay Slot)
        ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0CCu;
        goto label_1ef0cc;
    }
    ctx->pc = 0x1EF0C4u;
    {
        const bool branch_taken_0x1ef0c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0C4u;
        // 0x1ef0c8: 0x461701c2  mul.s       $f7, $f0, $f23 (Delay Slot)
        ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0c4) {
            ctx->pc = 0x1EF0E8u;
            goto label_1ef0e8;
        }
    }
    ctx->pc = 0x1EF0CCu;
label_1ef0cc:
    // 0x1ef0cc: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x1ef0ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_1ef0d0:
    // 0x1ef0d0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1ef0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1ef0d4:
    // 0x1ef0d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ef0d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ef0d8:
    // 0x1ef0d8: 0x0  nop
    ctx->pc = 0x1ef0d8u;
    // NOP
label_1ef0dc:
    // 0x1ef0dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ef0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ef0e0:
    // 0x1ef0e0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1ef0e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1ef0e4:
    // 0x1ef0e4: 0x0  nop
    ctx->pc = 0x1ef0e4u;
    // NOP
label_1ef0e8:
    // 0x1ef0e8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ef0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ef0ec:
    // 0x1ef0ec: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ef0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1ef0f0:
    // 0x1ef0f0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ef0f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ef0f4:
    // 0x1ef0f4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ef0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ef0f8:
    // 0x1ef0f8: 0xc440e828  lwc1        $f0, -0x17D8($v0)
    ctx->pc = 0x1ef0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef0fc:
    // 0x1ef0fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef0fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef100:
    // 0x1ef100: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x1ef100u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
label_1ef104:
    // 0x1ef104: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1ef104u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
label_1ef108:
    // 0x1ef108: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1ef108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ef10c:
    // 0x1ef10c: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1ef10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1ef110:
    // 0x1ef110: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ef110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1ef114:
    // 0x1ef114: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ef114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ef118:
    // 0x1ef118: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1ef118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ef11c:
    // 0x1ef11c: 0x0  nop
    ctx->pc = 0x1ef11cu;
    // NOP
label_1ef120:
    // 0x1ef120: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1ef120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef124:
    // 0x1ef124: 0xe7a006b0  swc1        $f0, 0x6B0($sp)
    ctx->pc = 0x1ef124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_1ef128:
    // 0x1ef128: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1ef128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef12c:
    // 0x1ef12c: 0xe7a106b4  swc1        $f1, 0x6B4($sp)
    ctx->pc = 0x1ef12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1716), bits); }
label_1ef130:
    // 0x1ef130: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1ef130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef134:
    // 0x1ef134: 0xe7a006b8  swc1        $f0, 0x6B8($sp)
    ctx->pc = 0x1ef134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_1ef138:
    // 0x1ef138: 0x6ba206b7  ldl         $v0, 0x6B7($sp)
    ctx->pc = 0x1ef138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1719); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1ef13c:
    // 0x1ef13c: 0x6fa206b0  ldr         $v0, 0x6B0($sp)
    ctx->pc = 0x1ef13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1712); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1ef140:
    // 0x1ef140: 0x8fa306b8  lw          $v1, 0x6B8($sp)
    ctx->pc = 0x1ef140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1720)));
label_1ef144:
    // 0x1ef144: 0xb082fffb  sdl         $v0, -0x5($a0)
    ctx->pc = 0x1ef144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ef148:
    // 0x1ef148: 0xb482fff4  sdr         $v0, -0xC($a0)
    ctx->pc = 0x1ef148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ef14c:
    // 0x1ef14c: 0xac83fffc  sw          $v1, -0x4($a0)
    ctx->pc = 0x1ef14cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 3));
label_1ef150:
    // 0x1ef150: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1ef150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef154:
    // 0x1ef154: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1ef154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_1ef158:
    // 0x1ef158: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1ef158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef15c:
    // 0x1ef15c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1ef15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ef160:
    // 0x1ef160: 0xc522e82c  lwc1        $f2, -0x17D4($t1)
    ctx->pc = 0x1ef160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294961196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef164:
    // 0x1ef164: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1ef164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_1ef168:
    // 0x1ef168: 0x46170102  mul.s       $f4, $f0, $f23
    ctx->pc = 0x1ef168u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_1ef16c:
    // 0x1ef16c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1ef16cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1ef170:
    // 0x1ef170: 0x461808c2  mul.s       $f3, $f1, $f24
    ctx->pc = 0x1ef170u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_1ef174:
    // 0x1ef174: 0x46043801  sub.s       $f0, $f7, $f4
    ctx->pc = 0x1ef174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
label_1ef178:
    // 0x1ef178: 0x46034041  sub.s       $f1, $f8, $f3
    ctx->pc = 0x1ef178u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
label_1ef17c:
    // 0x1ef17c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ef17cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1ef180:
    // 0x1ef180: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ef180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ef184:
    // 0x1ef184: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1ef184u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1ef188:
    // 0x1ef188: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x1ef188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ef18c:
    // 0x1ef18c: 0x0  nop
    ctx->pc = 0x1ef18cu;
    // NOP
label_1ef190:
    // 0x1ef190: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1ef194:
    if (ctx->pc == 0x1EF194u) {
        ctx->pc = 0x1EF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF190u;
        // 0x1ef194: 0x460118c0  add.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF198u;
        goto label_1ef198;
    }
    ctx->pc = 0x1EF190u;
    {
        const bool branch_taken_0x1ef190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF190u;
        // 0x1ef194: 0x460118c0  add.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef190) {
            ctx->pc = 0x1EF1A8u;
            goto label_1ef1a8;
        }
    }
    ctx->pc = 0x1EF198u;
label_1ef198:
    // 0x1ef198: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ef198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1ef19c:
    // 0x1ef19c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ef19cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ef1a0:
    // 0x1ef1a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ef1a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ef1a4:
    // 0x1ef1a4: 0x0  nop
    ctx->pc = 0x1ef1a4u;
    // NOP
label_1ef1a8:
    // 0x1ef1a8: 0x46061834  c.lt.s      $f3, $f6
    ctx->pc = 0x1ef1a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ef1ac:
    // 0x1ef1ac: 0x0  nop
    ctx->pc = 0x1ef1acu;
    // NOP
label_1ef1b0:
    // 0x1ef1b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1ef1b4:
    if (ctx->pc == 0x1EF1B4u) {
        ctx->pc = 0x1EF1B8u;
        goto label_1ef1b8;
    }
    ctx->pc = 0x1EF1B0u;
    {
        const bool branch_taken_0x1ef1b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef1b0) {
            ctx->pc = 0x1EF1C4u;
            goto label_1ef1c4;
        }
    }
    ctx->pc = 0x1EF1B8u;
label_1ef1b8:
    // 0x1ef1b8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ef1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1ef1bc:
    // 0x1ef1bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ef1bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ef1c0:
    // 0x1ef1c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ef1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ef1c4:
    // 0x1ef1c4: 0x4604a834  c.lt.s      $f21, $f4
    ctx->pc = 0x1ef1c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ef1c8:
    // 0x1ef1c8: 0x0  nop
    ctx->pc = 0x1ef1c8u;
    // NOP
label_1ef1cc:
    // 0x1ef1cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1ef1d0:
    if (ctx->pc == 0x1EF1D0u) {
        ctx->pc = 0x1EF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF1CCu;
        // 0x1ef1d0: 0x4600a906  mov.s       $f4, $f21 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF1D4u;
        goto label_1ef1d4;
    }
    ctx->pc = 0x1EF1CCu;
    {
        const bool branch_taken_0x1ef1cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef1cc) {
            ctx->pc = 0x1EF1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF1CCu;
            // 0x1ef1d0: 0x4600a906  mov.s       $f4, $f21 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF1D4u;
            goto label_1ef1d4;
        }
    }
    ctx->pc = 0x1EF1D4u;
label_1ef1d4:
    // 0x1ef1d4: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x1ef1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ef1d8:
    // 0x1ef1d8: 0x0  nop
    ctx->pc = 0x1ef1d8u;
    // NOP
label_1ef1dc:
    // 0x1ef1dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1ef1e0:
    if (ctx->pc == 0x1EF1E0u) {
        ctx->pc = 0x1EF1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF1DCu;
        // 0x1ef1e0: 0x4600a0c6  mov.s       $f3, $f20 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF1E4u;
        goto label_1ef1e4;
    }
    ctx->pc = 0x1EF1DCu;
    {
        const bool branch_taken_0x1ef1dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef1dc) {
            ctx->pc = 0x1EF1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF1DCu;
            // 0x1ef1e0: 0x4600a0c6  mov.s       $f3, $f20 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF1E4u;
            goto label_1ef1e4;
        }
    }
    ctx->pc = 0x1EF1E4u;
label_1ef1e4:
    // 0x1ef1e4: 0xe4840010  swc1        $f4, 0x10($a0)
    ctx->pc = 0x1ef1e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_1ef1e8:
    // 0x1ef1e8: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x1ef1e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_1ef1ec:
    // 0x1ef1ec: 0x9103e830  lbu         $v1, -0x17D0($t0)
    ctx->pc = 0x1ef1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294961200)));
label_1ef1f0:
    // 0x1ef1f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ef1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ef1f4:
    // 0x1ef1f4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1ef1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1ef1f8:
    // 0x1ef1f8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1ef1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ef1fc:
    // 0x1ef1fc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ef1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1ef200:
    // 0x1ef200: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ef200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1ef204:
    // 0x1ef204: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ef204u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1ef208:
    // 0x1ef208: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1ef208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_1ef20c:
    // 0x1ef20c: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x1ef20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_1ef210:
    // 0x1ef210: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1ef210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1ef214:
    // 0x1ef214: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1ef214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1ef218:
    // 0x1ef218: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1ef218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1ef21c:
    // 0x1ef21c: 0x4e1ffc0  bgez        $a3, . + 4 + (-0x40 << 2)
label_1ef220:
    if (ctx->pc == 0x1EF220u) {
        ctx->pc = 0x1EF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF21Cu;
        // 0x1ef220: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF224u;
        goto label_1ef224;
    }
    ctx->pc = 0x1EF21Cu;
    {
        const bool branch_taken_0x1ef21c = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x1EF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF21Cu;
        // 0x1ef220: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef21c) {
            ctx->pc = 0x1EF120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef120;
        }
    }
    ctx->pc = 0x1EF224u;
label_1ef224:
    // 0x1ef224: 0xc08eab4  jal         func_23AAD0
label_1ef228:
    if (ctx->pc == 0x1EF228u) {
        ctx->pc = 0x1EF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF224u;
        // 0x1ef228: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF22Cu;
        goto label_1ef22c;
    }
    ctx->pc = 0x1EF224u;
    SET_GPR_U32(ctx, 31, 0x1EF22Cu);
    ctx->pc = 0x1EF228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF224u;
    // 0x1ef228: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23AAD0u, 0x1EF224u, 0x1EF22Cu)) {
        return;
    }
    ctx->pc = 0x1EF22Cu;
label_1ef22c:
    // 0x1ef22c: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1ef22cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1ef230:
    // 0x1ef230: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ef230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef234:
    // 0x1ef234: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1ef234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef238:
    // 0x1ef238: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ef238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ef23c:
    // 0x1ef23c: 0x60f809  jalr        $v1
label_1ef240:
    if (ctx->pc == 0x1EF240u) {
        ctx->pc = 0x1EF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF23Cu;
        // 0x1ef240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF244u;
        goto label_1ef244;
    }
    ctx->pc = 0x1EF23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EF244u);
        ctx->pc = 0x1EF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF23Cu;
        // 0x1ef240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF23Cu, 0x1EF244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF244u;
label_1ef244:
    // 0x1ef244: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef248:
    // 0x1ef248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ef248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef24c:
    // 0x1ef24c: 0x40f809  jalr        $v0
label_1ef250:
    if (ctx->pc == 0x1EF250u) {
        ctx->pc = 0x1EF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF24Cu;
        // 0x1ef250: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF254u;
        goto label_1ef254;
    }
    ctx->pc = 0x1EF24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF254u);
        ctx->pc = 0x1EF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF24Cu;
        // 0x1ef250: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF24Cu, 0x1EF254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF254u;
label_1ef254:
    // 0x1ef254: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef258:
    // 0x1ef258: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1ef258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1ef25c:
    // 0x1ef25c: 0x40f809  jalr        $v0
label_1ef260:
    if (ctx->pc == 0x1EF260u) {
        ctx->pc = 0x1EF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF25Cu;
        // 0x1ef260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF264u;
        goto label_1ef264;
    }
    ctx->pc = 0x1EF25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF264u);
        ctx->pc = 0x1EF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF25Cu;
        // 0x1ef260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF25Cu, 0x1EF264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF264u;
label_1ef264:
    // 0x1ef264: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef268:
    // 0x1ef268: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1ef268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ef26c:
    // 0x1ef26c: 0x40f809  jalr        $v0
label_1ef270:
    if (ctx->pc == 0x1EF270u) {
        ctx->pc = 0x1EF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF26Cu;
        // 0x1ef270: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF274u;
        goto label_1ef274;
    }
    ctx->pc = 0x1EF26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF274u);
        ctx->pc = 0x1EF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF26Cu;
        // 0x1ef270: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF26Cu, 0x1EF274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF274u;
label_1ef274:
    // 0x1ef274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ef274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ef278:
    // 0x1ef278: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1ef278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1ef27c:
    // 0x1ef27c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef280:
    // 0x1ef280: 0xc091fea  jal         func_247FA8
label_1ef284:
    if (ctx->pc == 0x1EF284u) {
        ctx->pc = 0x1EF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF280u;
        // 0x1ef284: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF288u;
        goto label_1ef288;
    }
    ctx->pc = 0x1EF280u;
    SET_GPR_U32(ctx, 31, 0x1EF288u);
    ctx->pc = 0x1EF284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF280u;
    // 0x1ef284: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x1EF280u, 0x1EF288u)) {
        return;
    }
    ctx->pc = 0x1EF288u;
label_1ef288:
    // 0x1ef288: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ef28c:
    if (ctx->pc == 0x1EF28Cu) {
        ctx->pc = 0x1EF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF288u;
        // 0x1ef28c: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF290u;
        goto label_1ef290;
    }
    ctx->pc = 0x1EF288u;
    {
        const bool branch_taken_0x1ef288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF288u;
        // 0x1ef28c: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef288) {
            ctx->pc = 0x1EF2A8u;
            goto label_1ef2a8;
        }
    }
    ctx->pc = 0x1EF290u;
label_1ef290:
    // 0x1ef290: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ef290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ef294:
    // 0x1ef294: 0x24a5ff38  addiu       $a1, $a1, -0xC8
    ctx->pc = 0x1ef294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967096));
label_1ef298:
    // 0x1ef298: 0xc09202a  jal         func_2480A8
label_1ef29c:
    if (ctx->pc == 0x1EF29Cu) {
        ctx->pc = 0x1EF29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF298u;
        // 0x1ef29c: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF2A0u;
        goto label_1ef2a0;
    }
    ctx->pc = 0x1EF298u;
    SET_GPR_U32(ctx, 31, 0x1EF2A0u);
    ctx->pc = 0x1EF29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF298u;
    // 0x1ef29c: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2480A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2480A8u, 0x1EF298u, 0x1EF2A0u)) {
        return;
    }
    ctx->pc = 0x1EF2A0u;
label_1ef2a0:
    // 0x1ef2a0: 0xc092016  jal         func_248058
label_1ef2a4:
    if (ctx->pc == 0x1EF2A4u) {
        ctx->pc = 0x1EF2A8u;
        goto label_1ef2a8;
    }
    ctx->pc = 0x1EF2A0u;
    SET_GPR_U32(ctx, 31, 0x1EF2A8u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x1EF2A0u, 0x1EF2A8u)) {
        return;
    }
    ctx->pc = 0x1EF2A8u;
label_1ef2a8:
    // 0x1ef2a8: 0x7bb00700  lq          $s0, 0x700($sp)
    ctx->pc = 0x1ef2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1792)));
label_1ef2ac:
    // 0x1ef2ac: 0x7bb106f0  lq          $s1, 0x6F0($sp)
    ctx->pc = 0x1ef2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
label_1ef2b0:
    // 0x1ef2b0: 0x7bb206e0  lq          $s2, 0x6E0($sp)
    ctx->pc = 0x1ef2b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1760)));
label_1ef2b4:
    // 0x1ef2b4: 0x7bb306d0  lq          $s3, 0x6D0($sp)
    ctx->pc = 0x1ef2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1744)));
label_1ef2b8:
    // 0x1ef2b8: 0xdfbf06c0  ld          $ra, 0x6C0($sp)
    ctx->pc = 0x1ef2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1728)));
label_1ef2bc:
    // 0x1ef2bc: 0xc7b80730  lwc1        $f24, 0x730($sp)
    ctx->pc = 0x1ef2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1ef2c0:
    // 0x1ef2c0: 0xc7b70728  lwc1        $f23, 0x728($sp)
    ctx->pc = 0x1ef2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1ef2c4:
    // 0x1ef2c4: 0xc7b60720  lwc1        $f22, 0x720($sp)
    ctx->pc = 0x1ef2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1ef2c8:
    // 0x1ef2c8: 0xc7b50718  lwc1        $f21, 0x718($sp)
    ctx->pc = 0x1ef2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ef2cc:
    // 0x1ef2cc: 0xc7b40710  lwc1        $f20, 0x710($sp)
    ctx->pc = 0x1ef2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ef2d0:
    // 0x1ef2d0: 0x3e00008  jr          $ra
label_1ef2d4:
    if (ctx->pc == 0x1EF2D4u) {
        ctx->pc = 0x1EF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2D0u;
        // 0x1ef2d4: 0x27bd0740  addiu       $sp, $sp, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF2D8u;
        goto label_fallthrough_0x1ef2d0;
    }
    ctx->pc = 0x1EF2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2D0u;
        // 0x1ef2d4: 0x27bd0740  addiu       $sp, $sp, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ef2d0:
    ctx->pc = 0x1EF2D8u;
}
