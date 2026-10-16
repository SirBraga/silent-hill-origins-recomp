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

// Function: sub_001B1E60
// Address: 0x1b1e60 - 0x1b22e8
void sub_001B1E60_0x1b1e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1E60_0x1b1e60");
#endif

    switch (ctx->pc) {
        case 0x1b1e60u: goto label_1b1e60;
        case 0x1b1e64u: goto label_1b1e64;
        case 0x1b1e68u: goto label_1b1e68;
        case 0x1b1e6cu: goto label_1b1e6c;
        case 0x1b1e70u: goto label_1b1e70;
        case 0x1b1e74u: goto label_1b1e74;
        case 0x1b1e78u: goto label_1b1e78;
        case 0x1b1e7cu: goto label_1b1e7c;
        case 0x1b1e80u: goto label_1b1e80;
        case 0x1b1e84u: goto label_1b1e84;
        case 0x1b1e88u: goto label_1b1e88;
        case 0x1b1e8cu: goto label_1b1e8c;
        case 0x1b1e90u: goto label_1b1e90;
        case 0x1b1e94u: goto label_1b1e94;
        case 0x1b1e98u: goto label_1b1e98;
        case 0x1b1e9cu: goto label_1b1e9c;
        case 0x1b1ea0u: goto label_1b1ea0;
        case 0x1b1ea4u: goto label_1b1ea4;
        case 0x1b1ea8u: goto label_1b1ea8;
        case 0x1b1eacu: goto label_1b1eac;
        case 0x1b1eb0u: goto label_1b1eb0;
        case 0x1b1eb4u: goto label_1b1eb4;
        case 0x1b1eb8u: goto label_1b1eb8;
        case 0x1b1ebcu: goto label_1b1ebc;
        case 0x1b1ec0u: goto label_1b1ec0;
        case 0x1b1ec4u: goto label_1b1ec4;
        case 0x1b1ec8u: goto label_1b1ec8;
        case 0x1b1eccu: goto label_1b1ecc;
        case 0x1b1ed0u: goto label_1b1ed0;
        case 0x1b1ed4u: goto label_1b1ed4;
        case 0x1b1ed8u: goto label_1b1ed8;
        case 0x1b1edcu: goto label_1b1edc;
        case 0x1b1ee0u: goto label_1b1ee0;
        case 0x1b1ee4u: goto label_1b1ee4;
        case 0x1b1ee8u: goto label_1b1ee8;
        case 0x1b1eecu: goto label_1b1eec;
        case 0x1b1ef0u: goto label_1b1ef0;
        case 0x1b1ef4u: goto label_1b1ef4;
        case 0x1b1ef8u: goto label_1b1ef8;
        case 0x1b1efcu: goto label_1b1efc;
        case 0x1b1f00u: goto label_1b1f00;
        case 0x1b1f04u: goto label_1b1f04;
        case 0x1b1f08u: goto label_1b1f08;
        case 0x1b1f0cu: goto label_1b1f0c;
        case 0x1b1f10u: goto label_1b1f10;
        case 0x1b1f14u: goto label_1b1f14;
        case 0x1b1f18u: goto label_1b1f18;
        case 0x1b1f1cu: goto label_1b1f1c;
        case 0x1b1f20u: goto label_1b1f20;
        case 0x1b1f24u: goto label_1b1f24;
        case 0x1b1f28u: goto label_1b1f28;
        case 0x1b1f2cu: goto label_1b1f2c;
        case 0x1b1f30u: goto label_1b1f30;
        case 0x1b1f34u: goto label_1b1f34;
        case 0x1b1f38u: goto label_1b1f38;
        case 0x1b1f3cu: goto label_1b1f3c;
        case 0x1b1f40u: goto label_1b1f40;
        case 0x1b1f44u: goto label_1b1f44;
        case 0x1b1f48u: goto label_1b1f48;
        case 0x1b1f4cu: goto label_1b1f4c;
        case 0x1b1f50u: goto label_1b1f50;
        case 0x1b1f54u: goto label_1b1f54;
        case 0x1b1f58u: goto label_1b1f58;
        case 0x1b1f5cu: goto label_1b1f5c;
        case 0x1b1f60u: goto label_1b1f60;
        case 0x1b1f64u: goto label_1b1f64;
        case 0x1b1f68u: goto label_1b1f68;
        case 0x1b1f6cu: goto label_1b1f6c;
        case 0x1b1f70u: goto label_1b1f70;
        case 0x1b1f74u: goto label_1b1f74;
        case 0x1b1f78u: goto label_1b1f78;
        case 0x1b1f7cu: goto label_1b1f7c;
        case 0x1b1f80u: goto label_1b1f80;
        case 0x1b1f84u: goto label_1b1f84;
        case 0x1b1f88u: goto label_1b1f88;
        case 0x1b1f8cu: goto label_1b1f8c;
        case 0x1b1f90u: goto label_1b1f90;
        case 0x1b1f94u: goto label_1b1f94;
        case 0x1b1f98u: goto label_1b1f98;
        case 0x1b1f9cu: goto label_1b1f9c;
        case 0x1b1fa0u: goto label_1b1fa0;
        case 0x1b1fa4u: goto label_1b1fa4;
        case 0x1b1fa8u: goto label_1b1fa8;
        case 0x1b1facu: goto label_1b1fac;
        case 0x1b1fb0u: goto label_1b1fb0;
        case 0x1b1fb4u: goto label_1b1fb4;
        case 0x1b1fb8u: goto label_1b1fb8;
        case 0x1b1fbcu: goto label_1b1fbc;
        case 0x1b1fc0u: goto label_1b1fc0;
        case 0x1b1fc4u: goto label_1b1fc4;
        case 0x1b1fc8u: goto label_1b1fc8;
        case 0x1b1fccu: goto label_1b1fcc;
        case 0x1b1fd0u: goto label_1b1fd0;
        case 0x1b1fd4u: goto label_1b1fd4;
        case 0x1b1fd8u: goto label_1b1fd8;
        case 0x1b1fdcu: goto label_1b1fdc;
        case 0x1b1fe0u: goto label_1b1fe0;
        case 0x1b1fe4u: goto label_1b1fe4;
        case 0x1b1fe8u: goto label_1b1fe8;
        case 0x1b1fecu: goto label_1b1fec;
        case 0x1b1ff0u: goto label_1b1ff0;
        case 0x1b1ff4u: goto label_1b1ff4;
        case 0x1b1ff8u: goto label_1b1ff8;
        case 0x1b1ffcu: goto label_1b1ffc;
        case 0x1b2000u: goto label_1b2000;
        case 0x1b2004u: goto label_1b2004;
        case 0x1b2008u: goto label_1b2008;
        case 0x1b200cu: goto label_1b200c;
        case 0x1b2010u: goto label_1b2010;
        case 0x1b2014u: goto label_1b2014;
        case 0x1b2018u: goto label_1b2018;
        case 0x1b201cu: goto label_1b201c;
        case 0x1b2020u: goto label_1b2020;
        case 0x1b2024u: goto label_1b2024;
        case 0x1b2028u: goto label_1b2028;
        case 0x1b202cu: goto label_1b202c;
        case 0x1b2030u: goto label_1b2030;
        case 0x1b2034u: goto label_1b2034;
        case 0x1b2038u: goto label_1b2038;
        case 0x1b203cu: goto label_1b203c;
        case 0x1b2040u: goto label_1b2040;
        case 0x1b2044u: goto label_1b2044;
        case 0x1b2048u: goto label_1b2048;
        case 0x1b204cu: goto label_1b204c;
        case 0x1b2050u: goto label_1b2050;
        case 0x1b2054u: goto label_1b2054;
        case 0x1b2058u: goto label_1b2058;
        case 0x1b205cu: goto label_1b205c;
        case 0x1b2060u: goto label_1b2060;
        case 0x1b2064u: goto label_1b2064;
        case 0x1b2068u: goto label_1b2068;
        case 0x1b206cu: goto label_1b206c;
        case 0x1b2070u: goto label_1b2070;
        case 0x1b2074u: goto label_1b2074;
        case 0x1b2078u: goto label_1b2078;
        case 0x1b207cu: goto label_1b207c;
        case 0x1b2080u: goto label_1b2080;
        case 0x1b2084u: goto label_1b2084;
        case 0x1b2088u: goto label_1b2088;
        case 0x1b208cu: goto label_1b208c;
        case 0x1b2090u: goto label_1b2090;
        case 0x1b2094u: goto label_1b2094;
        case 0x1b2098u: goto label_1b2098;
        case 0x1b209cu: goto label_1b209c;
        case 0x1b20a0u: goto label_1b20a0;
        case 0x1b20a4u: goto label_1b20a4;
        case 0x1b20a8u: goto label_1b20a8;
        case 0x1b20acu: goto label_1b20ac;
        case 0x1b20b0u: goto label_1b20b0;
        case 0x1b20b4u: goto label_1b20b4;
        case 0x1b20b8u: goto label_1b20b8;
        case 0x1b20bcu: goto label_1b20bc;
        case 0x1b20c0u: goto label_1b20c0;
        case 0x1b20c4u: goto label_1b20c4;
        case 0x1b20c8u: goto label_1b20c8;
        case 0x1b20ccu: goto label_1b20cc;
        case 0x1b20d0u: goto label_1b20d0;
        case 0x1b20d4u: goto label_1b20d4;
        case 0x1b20d8u: goto label_1b20d8;
        case 0x1b20dcu: goto label_1b20dc;
        case 0x1b20e0u: goto label_1b20e0;
        case 0x1b20e4u: goto label_1b20e4;
        case 0x1b20e8u: goto label_1b20e8;
        case 0x1b20ecu: goto label_1b20ec;
        case 0x1b20f0u: goto label_1b20f0;
        case 0x1b20f4u: goto label_1b20f4;
        case 0x1b20f8u: goto label_1b20f8;
        case 0x1b20fcu: goto label_1b20fc;
        case 0x1b2100u: goto label_1b2100;
        case 0x1b2104u: goto label_1b2104;
        case 0x1b2108u: goto label_1b2108;
        case 0x1b210cu: goto label_1b210c;
        case 0x1b2110u: goto label_1b2110;
        case 0x1b2114u: goto label_1b2114;
        case 0x1b2118u: goto label_1b2118;
        case 0x1b211cu: goto label_1b211c;
        case 0x1b2120u: goto label_1b2120;
        case 0x1b2124u: goto label_1b2124;
        case 0x1b2128u: goto label_1b2128;
        case 0x1b212cu: goto label_1b212c;
        case 0x1b2130u: goto label_1b2130;
        case 0x1b2134u: goto label_1b2134;
        case 0x1b2138u: goto label_1b2138;
        case 0x1b213cu: goto label_1b213c;
        case 0x1b2140u: goto label_1b2140;
        case 0x1b2144u: goto label_1b2144;
        case 0x1b2148u: goto label_1b2148;
        case 0x1b214cu: goto label_1b214c;
        case 0x1b2150u: goto label_1b2150;
        case 0x1b2154u: goto label_1b2154;
        case 0x1b2158u: goto label_1b2158;
        case 0x1b215cu: goto label_1b215c;
        case 0x1b2160u: goto label_1b2160;
        case 0x1b2164u: goto label_1b2164;
        case 0x1b2168u: goto label_1b2168;
        case 0x1b216cu: goto label_1b216c;
        case 0x1b2170u: goto label_1b2170;
        case 0x1b2174u: goto label_1b2174;
        case 0x1b2178u: goto label_1b2178;
        case 0x1b217cu: goto label_1b217c;
        case 0x1b2180u: goto label_1b2180;
        case 0x1b2184u: goto label_1b2184;
        case 0x1b2188u: goto label_1b2188;
        case 0x1b218cu: goto label_1b218c;
        case 0x1b2190u: goto label_1b2190;
        case 0x1b2194u: goto label_1b2194;
        case 0x1b2198u: goto label_1b2198;
        case 0x1b219cu: goto label_1b219c;
        case 0x1b21a0u: goto label_1b21a0;
        case 0x1b21a4u: goto label_1b21a4;
        case 0x1b21a8u: goto label_1b21a8;
        case 0x1b21acu: goto label_1b21ac;
        case 0x1b21b0u: goto label_1b21b0;
        case 0x1b21b4u: goto label_1b21b4;
        case 0x1b21b8u: goto label_1b21b8;
        case 0x1b21bcu: goto label_1b21bc;
        case 0x1b21c0u: goto label_1b21c0;
        case 0x1b21c4u: goto label_1b21c4;
        case 0x1b21c8u: goto label_1b21c8;
        case 0x1b21ccu: goto label_1b21cc;
        case 0x1b21d0u: goto label_1b21d0;
        case 0x1b21d4u: goto label_1b21d4;
        case 0x1b21d8u: goto label_1b21d8;
        case 0x1b21dcu: goto label_1b21dc;
        case 0x1b21e0u: goto label_1b21e0;
        case 0x1b21e4u: goto label_1b21e4;
        case 0x1b21e8u: goto label_1b21e8;
        case 0x1b21ecu: goto label_1b21ec;
        case 0x1b21f0u: goto label_1b21f0;
        case 0x1b21f4u: goto label_1b21f4;
        case 0x1b21f8u: goto label_1b21f8;
        case 0x1b21fcu: goto label_1b21fc;
        case 0x1b2200u: goto label_1b2200;
        case 0x1b2204u: goto label_1b2204;
        case 0x1b2208u: goto label_1b2208;
        case 0x1b220cu: goto label_1b220c;
        case 0x1b2210u: goto label_1b2210;
        case 0x1b2214u: goto label_1b2214;
        case 0x1b2218u: goto label_1b2218;
        case 0x1b221cu: goto label_1b221c;
        case 0x1b2220u: goto label_1b2220;
        case 0x1b2224u: goto label_1b2224;
        case 0x1b2228u: goto label_1b2228;
        case 0x1b222cu: goto label_1b222c;
        case 0x1b2230u: goto label_1b2230;
        case 0x1b2234u: goto label_1b2234;
        case 0x1b2238u: goto label_1b2238;
        case 0x1b223cu: goto label_1b223c;
        case 0x1b2240u: goto label_1b2240;
        case 0x1b2244u: goto label_1b2244;
        case 0x1b2248u: goto label_1b2248;
        case 0x1b224cu: goto label_1b224c;
        case 0x1b2250u: goto label_1b2250;
        case 0x1b2254u: goto label_1b2254;
        case 0x1b2258u: goto label_1b2258;
        case 0x1b225cu: goto label_1b225c;
        case 0x1b2260u: goto label_1b2260;
        case 0x1b2264u: goto label_1b2264;
        case 0x1b2268u: goto label_1b2268;
        case 0x1b226cu: goto label_1b226c;
        case 0x1b2270u: goto label_1b2270;
        case 0x1b2274u: goto label_1b2274;
        case 0x1b2278u: goto label_1b2278;
        case 0x1b227cu: goto label_1b227c;
        case 0x1b2280u: goto label_1b2280;
        case 0x1b2284u: goto label_1b2284;
        case 0x1b2288u: goto label_1b2288;
        case 0x1b228cu: goto label_1b228c;
        case 0x1b2290u: goto label_1b2290;
        case 0x1b2294u: goto label_1b2294;
        case 0x1b2298u: goto label_1b2298;
        case 0x1b229cu: goto label_1b229c;
        case 0x1b22a0u: goto label_1b22a0;
        case 0x1b22a4u: goto label_1b22a4;
        case 0x1b22a8u: goto label_1b22a8;
        case 0x1b22acu: goto label_1b22ac;
        case 0x1b22b0u: goto label_1b22b0;
        case 0x1b22b4u: goto label_1b22b4;
        case 0x1b22b8u: goto label_1b22b8;
        case 0x1b22bcu: goto label_1b22bc;
        case 0x1b22c0u: goto label_1b22c0;
        case 0x1b22c4u: goto label_1b22c4;
        case 0x1b22c8u: goto label_1b22c8;
        case 0x1b22ccu: goto label_1b22cc;
        case 0x1b22d0u: goto label_1b22d0;
        case 0x1b22d4u: goto label_1b22d4;
        case 0x1b22d8u: goto label_1b22d8;
        case 0x1b22dcu: goto label_1b22dc;
        case 0x1b22e0u: goto label_1b22e0;
        case 0x1b22e4u: goto label_1b22e4;
        default: break;
    }

    ctx->pc = 0x1b1e60u;

label_1b1e60:
    // 0x1b1e60: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1b1e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_1b1e64:
    // 0x1b1e64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b1e68:
    // 0x1b1e68: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x1b1e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_1b1e6c:
    // 0x1b1e6c: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x1b1e6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_1b1e70:
    // 0x1b1e70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b1e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e74:
    // 0x1b1e74: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x1b1e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_1b1e78:
    // 0x1b1e78: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x1b1e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_1b1e7c:
    // 0x1b1e7c: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x1b1e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_1b1e80:
    // 0x1b1e80: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x1b1e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_1b1e84:
    // 0x1b1e84: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x1b1e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_1b1e88:
    // 0x1b1e88: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x1b1e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_1b1e8c:
    // 0x1b1e8c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1b1e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_1b1e90:
    // 0x1b1e90: 0xe7b801d0  swc1        $f24, 0x1D0($sp)
    ctx->pc = 0x1b1e90u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_1b1e94:
    // 0x1b1e94: 0xe7b701c8  swc1        $f23, 0x1C8($sp)
    ctx->pc = 0x1b1e94u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_1b1e98:
    // 0x1b1e98: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x1b1e98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_1b1e9c:
    // 0x1b1e9c: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x1b1e9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_1b1ea0:
    // 0x1b1ea0: 0x8e63023c  lw          $v1, 0x23C($s3)
    ctx->pc = 0x1b1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
label_1b1ea4:
    // 0x1b1ea4: 0x106200f9  beq         $v1, $v0, . + 4 + (0xF9 << 2)
label_1b1ea8:
    if (ctx->pc == 0x1B1EA8u) {
        ctx->pc = 0x1B1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EA4u;
        // 0x1b1ea8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1EACu;
        goto label_1b1eac;
    }
    ctx->pc = 0x1B1EA4u;
    {
        const bool branch_taken_0x1b1ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EA4u;
        // 0x1b1ea8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ea4) {
            ctx->pc = 0x1B228Cu;
            goto label_1b228c;
        }
    }
    ctx->pc = 0x1B1EACu;
label_1b1eac:
    // 0x1b1eac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b1eb0:
    // 0x1b1eb0: 0x8e630238  lw          $v1, 0x238($s3)
    ctx->pc = 0x1b1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
label_1b1eb4:
    // 0x1b1eb4: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x1b1eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
label_1b1eb8:
    // 0x1b1eb8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b1eb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ebc:
    // 0x1b1ebc: 0xa3a20113  sb          $v0, 0x113($sp)
    ctx->pc = 0x1b1ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 275), (uint8_t)GPR_U32(ctx, 2));
label_1b1ec0:
    // 0x1b1ec0: 0xa3a20112  sb          $v0, 0x112($sp)
    ctx->pc = 0x1b1ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 2));
label_1b1ec4:
    // 0x1b1ec4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1b1ec8:
    if (ctx->pc == 0x1B1EC8u) {
        ctx->pc = 0x1B1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EC4u;
        // 0x1b1ec8: 0xa3a20111  sb          $v0, 0x111($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1ECCu;
        goto label_1b1ecc;
    }
    ctx->pc = 0x1B1EC4u;
    {
        const bool branch_taken_0x1b1ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EC4u;
        // 0x1b1ec8: 0xa3a20111  sb          $v0, 0x111($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ec4) {
            ctx->pc = 0x1B1ED4u;
            goto label_1b1ed4;
        }
    }
    ctx->pc = 0x1B1ECCu;
label_1b1ecc:
    // 0x1b1ecc: 0x10000047  b           . + 4 + (0x47 << 2)
label_1b1ed0:
    if (ctx->pc == 0x1B1ED0u) {
        ctx->pc = 0x1B1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ECCu;
        // 0x1b1ed0: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1ED4u;
        goto label_1b1ed4;
    }
    ctx->pc = 0x1B1ECCu;
    {
        const bool branch_taken_0x1b1ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ECCu;
        // 0x1b1ed0: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ecc) {
            ctx->pc = 0x1B1FECu;
            goto label_1b1fec;
        }
    }
    ctx->pc = 0x1B1ED4u;
label_1b1ed4:
    // 0x1b1ed4: 0xc6610230  lwc1        $f1, 0x230($s3)
    ctx->pc = 0x1b1ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1ed8:
    // 0x1b1ed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1ed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1edc:
    // 0x1b1edc: 0x0  nop
    ctx->pc = 0x1b1edcu;
    // NOP
label_1b1ee0:
    // 0x1b1ee0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b1ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b1ee4:
    // 0x1b1ee4: 0x0  nop
    ctx->pc = 0x1b1ee4u;
    // NOP
label_1b1ee8:
    // 0x1b1ee8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_1b1eec:
    if (ctx->pc == 0x1B1EECu) {
        ctx->pc = 0x1B1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EE8u;
        // 0x1b1eec: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1EF0u;
        goto label_1b1ef0;
    }
    ctx->pc = 0x1B1EE8u;
    {
        const bool branch_taken_0x1b1ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EE8u;
        // 0x1b1eec: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ee8) {
            ctx->pc = 0x1B1F84u;
            goto label_1b1f84;
        }
    }
    ctx->pc = 0x1B1EF0u;
label_1b1ef0:
    // 0x1b1ef0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b1ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1b1ef4:
    // 0x1b1ef4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1b1ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
label_1b1ef8:
    // 0x1b1ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b1ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b1efc:
    // 0x1b1efc: 0xc60c91f0  lwc1        $f12, -0x6E10($s0)
    ctx->pc = 0x1b1efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294939120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b1f00:
    // 0x1b1f00: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1b1f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_1b1f04:
    // 0x1b1f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1f08:
    // 0x1b1f08: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1b1f08u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_1b1f0c:
    // 0x1b1f0c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1b1f0cu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
label_1b1f10:
    // 0x1b1f10: 0xc09b164  jal         func_26C590
label_1b1f14:
    if (ctx->pc == 0x1B1F14u) {
        ctx->pc = 0x1B1F18u;
        goto label_1b1f18;
    }
    ctx->pc = 0x1B1F10u;
    SET_GPR_U32(ctx, 31, 0x1B1F18u);
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1B1F10u, 0x1B1F18u)) {
        return;
    }
    ctx->pc = 0x1B1F18u;
label_1b1f18:
    // 0x1b1f18: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1b1f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_1b1f1c:
    // 0x1b1f1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b1f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1f20:
    // 0x1b1f20: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x1b1f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
label_1b1f24:
    // 0x1b1f24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b1f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b1f28:
    // 0x1b1f28: 0x460ca042  mul.s       $f1, $f20, $f12
    ctx->pc = 0x1b1f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_1b1f2c:
    // 0x1b1f2c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1b1f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1b1f30:
    // 0x1b1f30: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b1f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b1f34:
    // 0x1b1f34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b1f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b1f38:
    // 0x1b1f38: 0xc60391f0  lwc1        $f3, -0x6E10($s0)
    ctx->pc = 0x1b1f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294939120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b1f3c:
    // 0x1b1f3c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b1f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_1b1f40:
    // 0x1b1f40: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1f40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1b1f44:
    // 0x1b1f44: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1b1f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b1f48:
    // 0x1b1f48: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x1b1f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1b1f4c:
    // 0x1b1f4c: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x1b1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_1b1f50:
    // 0x1b1f50: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1b1f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b1f54:
    // 0x1b1f54: 0x0  nop
    ctx->pc = 0x1b1f54u;
    // NOP
label_1b1f58:
    // 0x1b1f58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1b1f5c:
    if (ctx->pc == 0x1B1F5Cu) {
        ctx->pc = 0x1B1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F58u;
        // 0x1b1f5c: 0xe60091f0  swc1        $f0, -0x6E10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F60u;
        goto label_1b1f60;
    }
    ctx->pc = 0x1B1F58u;
    {
        const bool branch_taken_0x1b1f58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F58u;
        // 0x1b1f5c: 0xe60091f0  swc1        $f0, -0x6E10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f58) {
            ctx->pc = 0x1B1F68u;
            goto label_1b1f68;
        }
    }
    ctx->pc = 0x1B1F60u;
label_1b1f60:
    // 0x1b1f60: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1b1f60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_1b1f64:
    // 0x1b1f64: 0xe60091f0  swc1        $f0, -0x6E10($s0)
    ctx->pc = 0x1b1f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939120), bits); }
label_1b1f68:
    // 0x1b1f68: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1b1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1b1f6c:
    // 0x1b1f6c: 0xa3a30110  sb          $v1, 0x110($sp)
    ctx->pc = 0x1b1f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 3));
label_1b1f70:
    // 0x1b1f70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b1f74:
    // 0x1b1f74: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1b1f74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1f78:
    // 0x1b1f78: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1b1f78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1b1f7c:
    // 0x1b1f7c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1b1f80:
    if (ctx->pc == 0x1B1F80u) {
        ctx->pc = 0x1B1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F7Cu;
        // 0x1b1f80: 0xa3a20112  sb          $v0, 0x112($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F84u;
        goto label_1b1f84;
    }
    ctx->pc = 0x1B1F7Cu;
    {
        const bool branch_taken_0x1b1f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F7Cu;
        // 0x1b1f80: 0xa3a20112  sb          $v0, 0x112($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f7c) {
            ctx->pc = 0x1B1FF4u;
            goto label_1b1ff4;
        }
    }
    ctx->pc = 0x1B1F84u;
label_1b1f84:
    // 0x1b1f84: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b1f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1b1f88:
    // 0x1b1f88: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1b1f88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
label_1b1f8c:
    // 0x1b1f8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b1f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b1f90:
    // 0x1b1f90: 0xc60c91f0  lwc1        $f12, -0x6E10($s0)
    ctx->pc = 0x1b1f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294939120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b1f94:
    // 0x1b1f94: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_1b1f98:
    // 0x1b1f98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1f9c:
    // 0x1b1f9c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1b1f9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_1b1fa0:
    // 0x1b1fa0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1b1fa0u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
label_1b1fa4:
    // 0x1b1fa4: 0xc09b164  jal         func_26C590
label_1b1fa8:
    if (ctx->pc == 0x1B1FA8u) {
        ctx->pc = 0x1B1FACu;
        goto label_1b1fac;
    }
    ctx->pc = 0x1B1FA4u;
    SET_GPR_U32(ctx, 31, 0x1B1FACu);
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1B1FA4u, 0x1B1FACu)) {
        return;
    }
    ctx->pc = 0x1B1FACu;
label_1b1fac:
    // 0x1b1fac: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1b1facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_1b1fb0:
    // 0x1b1fb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b1fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1fb4:
    // 0x1b1fb4: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x1b1fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
label_1b1fb8:
    // 0x1b1fb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b1fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b1fbc:
    // 0x1b1fbc: 0x460ca0c2  mul.s       $f3, $f20, $f12
    ctx->pc = 0x1b1fbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_1b1fc0:
    // 0x1b1fc0: 0xc60191f0  lwc1        $f1, -0x6E10($s0)
    ctx->pc = 0x1b1fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294939120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1fc4:
    // 0x1b1fc4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b1fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b1fc8:
    // 0x1b1fc8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1b1fc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1b1fcc:
    // 0x1b1fcc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1b1fd0:
    // 0x1b1fd0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1b1fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b1fd4:
    // 0x1b1fd4: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x1b1fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b1fd8:
    // 0x1b1fd8: 0xe60191f0  swc1        $f1, -0x6E10($s0)
    ctx->pc = 0x1b1fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939120), bits); }
label_1b1fdc:
    // 0x1b1fdc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1b1fe0:
    if (ctx->pc == 0x1B1FE0u) {
        ctx->pc = 0x1B1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FDCu;
        // 0x1b1fe0: 0x2442007f  addiu       $v0, $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1FE4u;
        goto label_1b1fe4;
    }
    ctx->pc = 0x1B1FDCu;
    {
        const bool branch_taken_0x1b1fdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FDCu;
        // 0x1b1fe0: 0x2442007f  addiu       $v0, $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fdc) {
            ctx->pc = 0x1B1FECu;
            goto label_1b1fec;
        }
    }
    ctx->pc = 0x1B1FE4u;
label_1b1fe4:
    // 0x1b1fe4: 0x460c0801  sub.s       $f0, $f1, $f12
    ctx->pc = 0x1b1fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_1b1fe8:
    // 0x1b1fe8: 0xe60091f0  swc1        $f0, -0x6E10($s0)
    ctx->pc = 0x1b1fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939120), bits); }
label_1b1fec:
    // 0x1b1fec: 0xa3a20112  sb          $v0, 0x112($sp)
    ctx->pc = 0x1b1fecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 2));
label_1b1ff0:
    // 0x1b1ff0: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x1b1ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
label_1b1ff4:
    // 0x1b1ff4: 0xa3a20111  sb          $v0, 0x111($sp)
    ctx->pc = 0x1b1ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 2));
label_1b1ff8:
    // 0x1b1ff8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x1b1ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_1b1ffc:
    // 0x1b1ffc: 0xc06ccfe  jal         func_1B33F8
label_1b2000:
    if (ctx->pc == 0x1B2000u) {
        ctx->pc = 0x1B2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FFCu;
        // 0x1b2000: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2004u;
        goto label_1b2004;
    }
    ctx->pc = 0x1B1FFCu;
    SET_GPR_U32(ctx, 31, 0x1B2004u);
    ctx->pc = 0x1B2000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FFCu;
    // 0x1b2000: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B33F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B33F8u, 0x1B1FFCu, 0x1B2004u)) {
        return;
    }
    ctx->pc = 0x1B2004u;
label_1b2004:
    // 0x1b2004: 0x365200ff  ori         $s2, $s2, 0xFF
    ctx->pc = 0x1b2004u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)255);
label_1b2008:
    // 0x1b2008: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b2008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b200c:
    // 0x1b200c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1b200cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1b2010:
    // 0x1b2010: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x1b2010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_1b2014:
    // 0x1b2014: 0x24710fd8  addiu       $s1, $v1, 0xFD8
    ctx->pc = 0x1b2014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4056));
label_1b2018:
    // 0x1b2018: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x1b2018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1b201c:
    // 0x1b201c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1b201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b2020:
    // 0x1b2020: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1b2020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_1b2024:
    // 0x1b2024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b2024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2028:
    // 0x1b2028: 0x34423300  ori         $v0, $v0, 0x3300
    ctx->pc = 0x1b2028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13056);
label_1b202c:
    // 0x1b202c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1b202cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b2030:
    // 0x1b2030: 0xacc20050  sw          $v0, 0x50($a2)
    ctx->pc = 0x1b2030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 2));
label_1b2034:
    // 0x1b2034: 0x2635fff0  addiu       $s5, $s1, -0x10
    ctx->pc = 0x1b2034u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1b2038:
    // 0x1b2038: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b203c:
    // 0x1b203c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b203cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b2040:
    // 0x1b2040: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b2040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b2044:
    // 0x1b2044: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1b2044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_1b2048:
    // 0x1b2048: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1b2048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1b204c:
    // 0x1b204c: 0x40f809  jalr        $v0
label_1b2050:
    if (ctx->pc == 0x1B2050u) {
        ctx->pc = 0x1B2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B204Cu;
        // 0x1b2050: 0x241400ff  addiu       $s4, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2054u;
        goto label_1b2054;
    }
    ctx->pc = 0x1B204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2054u);
        ctx->pc = 0x1B2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B204Cu;
        // 0x1b2050: 0x241400ff  addiu       $s4, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B204Cu, 0x1B2054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2054u;
label_1b2054:
    // 0x1b2054: 0x3c01435c  lui         $at, 0x435C
    ctx->pc = 0x1b2054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17244 << 16));
label_1b2058:
    // 0x1b2058: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1b2058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1b205c:
    // 0x1b205c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b2060:
    // 0x1b2060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2064:
    // 0x1b2064: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x1b2064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
label_1b2068:
    // 0x1b2068: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1b2068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1b206c:
    // 0x1b206c: 0x40f809  jalr        $v0
label_1b2070:
    if (ctx->pc == 0x1B2070u) {
        ctx->pc = 0x1B2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B206Cu;
        // 0x1b2070: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2074u;
        goto label_1b2074;
    }
    ctx->pc = 0x1B206Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2074u);
        ctx->pc = 0x1B2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B206Cu;
        // 0x1b2070: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B206Cu, 0x1B2074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2074u;
label_1b2074:
    // 0x1b2074: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1b2074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b2078:
    // 0x1b2078: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1b2078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1b207c:
    // 0x1b207c: 0x40f809  jalr        $v0
label_1b2080:
    if (ctx->pc == 0x1B2080u) {
        ctx->pc = 0x1B2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B207Cu;
        // 0x1b2080: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2084u;
        goto label_1b2084;
    }
    ctx->pc = 0x1B207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2084u);
        ctx->pc = 0x1B2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B207Cu;
        // 0x1b2080: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B207Cu, 0x1B2084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2084u;
label_1b2084:
    // 0x1b2084: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1b2084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b2088:
    // 0x1b2088: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x1b2088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_1b208c:
    // 0x1b208c: 0x40f809  jalr        $v0
label_1b2090:
    if (ctx->pc == 0x1B2090u) {
        ctx->pc = 0x1B2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B208Cu;
        // 0x1b2090: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2094u;
        goto label_1b2094;
    }
    ctx->pc = 0x1B208Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2094u);
        ctx->pc = 0x1B2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B208Cu;
        // 0x1b2090: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B208Cu, 0x1B2094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2094u;
label_1b2094:
    // 0x1b2094: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b2094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b2098:
    // 0x1b2098: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b2098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b209c:
    // 0x1b209c: 0x40f809  jalr        $v0
label_1b20a0:
    if (ctx->pc == 0x1B20A0u) {
        ctx->pc = 0x1B20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B209Cu;
        // 0x1b20a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B20A4u;
        goto label_1b20a4;
    }
    ctx->pc = 0x1B209Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B20A4u);
        ctx->pc = 0x1B20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B209Cu;
        // 0x1b20a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B209Cu, 0x1B20A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B20A4u;
label_1b20a4:
    // 0x1b20a4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b20a8:
    // 0x1b20a8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1b20a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b20ac:
    // 0x1b20ac: 0x40f809  jalr        $v0
label_1b20b0:
    if (ctx->pc == 0x1B20B0u) {
        ctx->pc = 0x1B20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20ACu;
        // 0x1b20b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B20B4u;
        goto label_1b20b4;
    }
    ctx->pc = 0x1B20ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B20B4u);
        ctx->pc = 0x1B20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20ACu;
        // 0x1b20b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B20ACu, 0x1B20B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B20B4u;
label_1b20b4:
    // 0x1b20b4: 0xc6b00018  lwc1        $f16, 0x18($s5)
    ctx->pc = 0x1b20b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1b20b8:
    // 0x1b20b8: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x1b20b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1b20bc:
    // 0x1b20bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b20bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b20c0:
    // 0x1b20c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b20c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b20c4:
    // 0x1b20c4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1b20c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b20c8:
    // 0x1b20c8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1b20c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1b20cc:
    // 0x1b20cc: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1b20ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_1b20d0:
    // 0x1b20d0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1b20d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_1b20d4:
    // 0x1b20d4: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x1b20d4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_1b20d8:
    // 0x1b20d8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1b20d8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
label_1b20dc:
    // 0x1b20dc: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1b20dcu;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
label_1b20e0:
    // 0x1b20e0: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x1b20e0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
label_1b20e4:
    // 0x1b20e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b20e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b20e8:
    // 0x1b20e8: 0xc06ce2a  jal         func_1B38A8
label_1b20ec:
    if (ctx->pc == 0x1B20ECu) {
        ctx->pc = 0x1B20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20E8u;
        // 0x1b20ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B20F0u;
        goto label_1b20f0;
    }
    ctx->pc = 0x1B20E8u;
    SET_GPR_U32(ctx, 31, 0x1B20F0u);
    ctx->pc = 0x1B20ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20E8u;
    // 0x1b20ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B20E8u, 0x1B20F0u)) {
        return;
    }
    ctx->pc = 0x1B20F0u;
label_1b20f0:
    // 0x1b20f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b20f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b20f4:
    // 0x1b20f4: 0xc06cff8  jal         func_1B3FE0
label_1b20f8:
    if (ctx->pc == 0x1B20F8u) {
        ctx->pc = 0x1B20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20F4u;
        // 0x1b20f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B20FCu;
        goto label_1b20fc;
    }
    ctx->pc = 0x1B20F4u;
    SET_GPR_U32(ctx, 31, 0x1B20FCu);
    ctx->pc = 0x1B20F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20F4u;
    // 0x1b20f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B20F4u, 0x1B20FCu)) {
        return;
    }
    ctx->pc = 0x1B20FCu;
label_1b20fc:
    // 0x1b20fc: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x1b20fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1b2100:
    // 0x1b2100: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b2100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b2104:
    // 0x1b2104: 0x40f809  jalr        $v0
label_1b2108:
    if (ctx->pc == 0x1B2108u) {
        ctx->pc = 0x1B2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2104u;
        // 0x1b2108: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B210Cu;
        goto label_1b210c;
    }
    ctx->pc = 0x1B2104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B210Cu);
        ctx->pc = 0x1B2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2104u;
        // 0x1b2108: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2104u, 0x1B210Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B210Cu;
label_1b210c:
    // 0x1b210c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b210cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b2110:
    // 0x1b2110: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1b2110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b2114:
    // 0x1b2114: 0x40f809  jalr        $v0
label_1b2118:
    if (ctx->pc == 0x1B2118u) {
        ctx->pc = 0x1B2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2114u;
        // 0x1b2118: 0x8fa50124  lw          $a1, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B211Cu;
        goto label_1b211c;
    }
    ctx->pc = 0x1B2114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B211Cu);
        ctx->pc = 0x1B2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2114u;
        // 0x1b2118: 0x8fa50124  lw          $a1, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2114u, 0x1B211Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B211Cu;
label_1b211c:
    // 0x1b211c: 0xc6600230  lwc1        $f0, 0x230($s3)
    ctx->pc = 0x1b211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b2120:
    // 0x1b2120: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x1b2120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
label_1b2124:
    // 0x1b2124: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1b2124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2128:
    // 0x1b2128: 0xa3b40110  sb          $s4, 0x110($sp)
    ctx->pc = 0x1b2128u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 20));
label_1b212c:
    // 0x1b212c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1b212cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b2130:
    // 0x1b2130: 0xa3b40111  sb          $s4, 0x111($sp)
    ctx->pc = 0x1b2130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 20));
label_1b2134:
    // 0x1b2134: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b2138:
    if (ctx->pc == 0x1B2138u) {
        ctx->pc = 0x1B2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2134u;
        // 0x1b2138: 0xa3b40112  sb          $s4, 0x112($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B213Cu;
        goto label_1b213c;
    }
    ctx->pc = 0x1B2134u;
    {
        const bool branch_taken_0x1b2134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2134u;
        // 0x1b2138: 0xa3b40112  sb          $s4, 0x112($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2134) {
            ctx->pc = 0x1B2140u;
            goto label_1b2140;
        }
    }
    ctx->pc = 0x1B213Cu;
label_1b213c:
    // 0x1b213c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b213cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b2140:
    // 0x1b2140: 0xc06ccfe  jal         func_1B33F8
label_1b2144:
    if (ctx->pc == 0x1B2144u) {
        ctx->pc = 0x1B2148u;
        goto label_1b2148;
    }
    ctx->pc = 0x1B2140u;
    SET_GPR_U32(ctx, 31, 0x1B2148u);
    ctx->pc = 0x1B33F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B33F8u, 0x1B2140u, 0x1B2148u)) {
        return;
    }
    ctx->pc = 0x1B2148u;
label_1b2148:
    // 0x1b2148: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b2148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b214c:
    // 0x1b214c: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x1b214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_1b2150:
    // 0x1b2150: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b2150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1b2154:
    // 0x1b2154: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1b2154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_1b2158:
    // 0x1b2158: 0x34423300  ori         $v0, $v0, 0x3300
    ctx->pc = 0x1b2158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13056);
label_1b215c:
    // 0x1b215c: 0xacc20050  sw          $v0, 0x50($a2)
    ctx->pc = 0x1b215cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 2));
label_1b2160:
    // 0x1b2160: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b2160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b2164:
    // 0x1b2164: 0x40f809  jalr        $v0
label_1b2168:
    if (ctx->pc == 0x1B2168u) {
        ctx->pc = 0x1B2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2164u;
        // 0x1b2168: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B216Cu;
        goto label_1b216c;
    }
    ctx->pc = 0x1B2164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B216Cu);
        ctx->pc = 0x1B2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2164u;
        // 0x1b2168: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2164u, 0x1B216Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B216Cu;
label_1b216c:
    // 0x1b216c: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1b216cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
label_1b2170:
    // 0x1b2170: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1b2170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b2174:
    // 0x1b2174: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b2174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b2178:
    // 0x1b2178: 0xc6b00018  lwc1        $f16, 0x18($s5)
    ctx->pc = 0x1b2178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1b217c:
    // 0x1b217c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b217cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2180:
    // 0x1b2180: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x1b2180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
label_1b2184:
    // 0x1b2184: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b2184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2188:
    // 0x1b2188: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1b2188u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_1b218c:
    // 0x1b218c: 0x3c0143b5  lui         $at, 0x43B5
    ctx->pc = 0x1b218cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17333 << 16));
label_1b2190:
    // 0x1b2190: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b2190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2194:
    // 0x1b2194: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1b2194u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
label_1b2198:
    // 0x1b2198: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b2198u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b219c:
    // 0x1b219c: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1b219cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
label_1b21a0:
    // 0x1b21a0: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1b21a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b21a4:
    // 0x1b21a4: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x1b21a4u;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
label_1b21a8:
    // 0x1b21a8: 0xc06ce2a  jal         func_1B38A8
label_1b21ac:
    if (ctx->pc == 0x1B21ACu) {
        ctx->pc = 0x1B21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21A8u;
        // 0x1b21ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B21B0u;
        goto label_1b21b0;
    }
    ctx->pc = 0x1B21A8u;
    SET_GPR_U32(ctx, 31, 0x1B21B0u);
    ctx->pc = 0x1B21ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21A8u;
    // 0x1b21ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B21A8u, 0x1B21B0u)) {
        return;
    }
    ctx->pc = 0x1B21B0u;
label_1b21b0:
    // 0x1b21b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b21b4:
    // 0x1b21b4: 0xc06cff8  jal         func_1B3FE0
label_1b21b8:
    if (ctx->pc == 0x1B21B8u) {
        ctx->pc = 0x1B21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21B4u;
        // 0x1b21b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B21BCu;
        goto label_1b21bc;
    }
    ctx->pc = 0x1B21B4u;
    SET_GPR_U32(ctx, 31, 0x1B21BCu);
    ctx->pc = 0x1B21B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21B4u;
    // 0x1b21b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B21B4u, 0x1B21BCu)) {
        return;
    }
    ctx->pc = 0x1B21BCu;
label_1b21bc:
    // 0x1b21bc: 0x52c00034  beql        $s6, $zero, . + 4 + (0x34 << 2)
label_1b21c0:
    if (ctx->pc == 0x1B21C0u) {
        ctx->pc = 0x1B21C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21BCu;
        // 0x1b21c0: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B21C4u;
        goto label_1b21c4;
    }
    ctx->pc = 0x1B21BCu;
    {
        const bool branch_taken_0x1b21bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21bc) {
            ctx->pc = 0x1B21C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B21BCu;
            // 0x1b21c0: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2290u;
            goto label_1b2290;
        }
    }
    ctx->pc = 0x1B21C4u;
label_1b21c4:
    // 0x1b21c4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1b21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b21c8:
    // 0x1b21c8: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x1b21c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_1b21cc:
    // 0x1b21cc: 0x40f809  jalr        $v0
label_1b21d0:
    if (ctx->pc == 0x1B21D0u) {
        ctx->pc = 0x1B21D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21CCu;
        // 0x1b21d0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B21D4u;
        goto label_1b21d4;
    }
    ctx->pc = 0x1B21CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B21D4u);
        ctx->pc = 0x1B21D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21CCu;
        // 0x1b21d0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B21CCu, 0x1B21D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B21D4u;
label_1b21d4:
    // 0x1b21d4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1b21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b21d8:
    // 0x1b21d8: 0x27a5012c  addiu       $a1, $sp, 0x12C
    ctx->pc = 0x1b21d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_1b21dc:
    // 0x1b21dc: 0x40f809  jalr        $v0
label_1b21e0:
    if (ctx->pc == 0x1B21E0u) {
        ctx->pc = 0x1B21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21DCu;
        // 0x1b21e0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B21E4u;
        goto label_1b21e4;
    }
    ctx->pc = 0x1B21DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B21E4u);
        ctx->pc = 0x1B21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21DCu;
        // 0x1b21e0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B21DCu, 0x1B21E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B21E4u;
label_1b21e4:
    // 0x1b21e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b21e8:
    // 0x1b21e8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b21e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b21ec:
    // 0x1b21ec: 0x40f809  jalr        $v0
label_1b21f0:
    if (ctx->pc == 0x1B21F0u) {
        ctx->pc = 0x1B21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21ECu;
        // 0x1b21f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B21F4u;
        goto label_1b21f4;
    }
    ctx->pc = 0x1B21ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B21F4u);
        ctx->pc = 0x1B21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21ECu;
        // 0x1b21f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B21ECu, 0x1B21F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B21F4u;
label_1b21f4:
    // 0x1b21f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b21f8:
    // 0x1b21f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b21f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b21fc:
    // 0x1b21fc: 0x40f809  jalr        $v0
label_1b2200:
    if (ctx->pc == 0x1B2200u) {
        ctx->pc = 0x1B2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21FCu;
        // 0x1b2200: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2204u;
        goto label_1b2204;
    }
    ctx->pc = 0x1B21FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2204u);
        ctx->pc = 0x1B2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21FCu;
        // 0x1b2200: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B21FCu, 0x1B2204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2204u;
label_1b2204:
    // 0x1b2204: 0xc06ccfe  jal         func_1B33F8
label_1b2208:
    if (ctx->pc == 0x1B2208u) {
        ctx->pc = 0x1B2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2204u;
        // 0x1b2208: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B220Cu;
        goto label_1b220c;
    }
    ctx->pc = 0x1B2204u;
    SET_GPR_U32(ctx, 31, 0x1B220Cu);
    ctx->pc = 0x1B2208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2204u;
    // 0x1b2208: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B33F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B33F8u, 0x1B2204u, 0x1B220Cu)) {
        return;
    }
    ctx->pc = 0x1B220Cu;
label_1b220c:
    // 0x1b220c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b220cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b2210:
    // 0x1b2210: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b2214:
    // 0x1b2214: 0x40f809  jalr        $v0
label_1b2218:
    if (ctx->pc == 0x1B2218u) {
        ctx->pc = 0x1B2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2214u;
        // 0x1b2218: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B221Cu;
        goto label_1b221c;
    }
    ctx->pc = 0x1B2214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B221Cu);
        ctx->pc = 0x1B2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2214u;
        // 0x1b2218: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2214u, 0x1B221Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B221Cu;
label_1b221c:
    // 0x1b221c: 0xc6b00018  lwc1        $f16, 0x18($s5)
    ctx->pc = 0x1b221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1b2220:
    // 0x1b2220: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1b2220u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_1b2224:
    // 0x1b2224: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1b2224u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
label_1b2228:
    // 0x1b2228: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b2228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b222c:
    // 0x1b222c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1b222cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1b2230:
    // 0x1b2230: 0xa3b40112  sb          $s4, 0x112($sp)
    ctx->pc = 0x1b2230u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 20));
label_1b2234:
    // 0x1b2234: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1b2234u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_1b2238:
    // 0x1b2238: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1b2238u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
label_1b223c:
    // 0x1b223c: 0xa3b40110  sb          $s4, 0x110($sp)
    ctx->pc = 0x1b223cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 20));
label_1b2240:
    // 0x1b2240: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1b2240u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_1b2244:
    // 0x1b2244: 0xa3b40111  sb          $s4, 0x111($sp)
    ctx->pc = 0x1b2244u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 20));
label_1b2248:
    // 0x1b2248: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1b2248u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
label_1b224c:
    // 0x1b224c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b224cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b2250:
    // 0x1b2250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2254:
    // 0x1b2254: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1b2254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b2258:
    // 0x1b2258: 0xc06ce2a  jal         func_1B38A8
label_1b225c:
    if (ctx->pc == 0x1B225Cu) {
        ctx->pc = 0x1B225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2258u;
        // 0x1b225c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2260u;
        goto label_1b2260;
    }
    ctx->pc = 0x1B2258u;
    SET_GPR_U32(ctx, 31, 0x1B2260u);
    ctx->pc = 0x1B225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2258u;
    // 0x1b225c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B2258u, 0x1B2260u)) {
        return;
    }
    ctx->pc = 0x1B2260u;
label_1b2260:
    // 0x1b2260: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b2260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b2264:
    // 0x1b2264: 0xc06cff8  jal         func_1B3FE0
label_1b2268:
    if (ctx->pc == 0x1B2268u) {
        ctx->pc = 0x1B2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2264u;
        // 0x1b2268: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B226Cu;
        goto label_1b226c;
    }
    ctx->pc = 0x1B2264u;
    SET_GPR_U32(ctx, 31, 0x1B226Cu);
    ctx->pc = 0x1B2268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2264u;
    // 0x1b2268: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B2264u, 0x1B226Cu)) {
        return;
    }
    ctx->pc = 0x1B226Cu;
label_1b226c:
    // 0x1b226c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x1b226cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_1b2270:
    // 0x1b2270: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b2270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b2274:
    // 0x1b2274: 0x40f809  jalr        $v0
label_1b2278:
    if (ctx->pc == 0x1B2278u) {
        ctx->pc = 0x1B2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2274u;
        // 0x1b2278: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B227Cu;
        goto label_1b227c;
    }
    ctx->pc = 0x1B2274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B227Cu);
        ctx->pc = 0x1B2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2274u;
        // 0x1b2278: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2274u, 0x1B227Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B227Cu;
label_1b227c:
    // 0x1b227c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b2280:
    // 0x1b2280: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1b2280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b2284:
    // 0x1b2284: 0x40f809  jalr        $v0
label_1b2288:
    if (ctx->pc == 0x1B2288u) {
        ctx->pc = 0x1B2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2284u;
        // 0x1b2288: 0x8fa5012c  lw          $a1, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B228Cu;
        goto label_1b228c;
    }
    ctx->pc = 0x1B2284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B228Cu);
        ctx->pc = 0x1B2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2284u;
        // 0x1b2288: 0x8fa5012c  lw          $a1, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2284u, 0x1B228Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B228Cu;
label_1b228c:
    // 0x1b228c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x1b228cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1b2290:
    // 0x1b2290: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x1b2290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1b2294:
    // 0x1b2294: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x1b2294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1b2298:
    // 0x1b2298: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x1b2298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1b229c:
    // 0x1b229c: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x1b229cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1b22a0:
    // 0x1b22a0: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x1b22a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1b22a4:
    // 0x1b22a4: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x1b22a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1b22a8:
    // 0x1b22a8: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1b22a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1b22ac:
    // 0x1b22ac: 0xc7b801d0  lwc1        $f24, 0x1D0($sp)
    ctx->pc = 0x1b22acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1b22b0:
    // 0x1b22b0: 0xc7b701c8  lwc1        $f23, 0x1C8($sp)
    ctx->pc = 0x1b22b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1b22b4:
    // 0x1b22b4: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x1b22b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b22b8:
    // 0x1b22b8: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x1b22b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b22bc:
    // 0x1b22bc: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x1b22bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b22c0:
    // 0x1b22c0: 0x3e00008  jr          $ra
label_1b22c4:
    if (ctx->pc == 0x1B22C4u) {
        ctx->pc = 0x1B22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22C0u;
        // 0x1b22c4: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22C8u;
        goto label_1b22c8;
    }
    ctx->pc = 0x1B22C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22C0u;
        // 0x1b22c4: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B22C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B22C8u;
label_1b22c8:
    // 0x1b22c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b22cc:
    // 0x1b22cc: 0x0  nop
    ctx->pc = 0x1b22ccu;
    // NOP
label_1b22d0:
    // 0x1b22d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b22d4:
    // 0x1b22d4: 0x0  nop
    ctx->pc = 0x1b22d4u;
    // NOP
label_1b22d8:
    // 0x1b22d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b22d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b22dc:
    // 0x1b22dc: 0x0  nop
    ctx->pc = 0x1b22dcu;
    // NOP
label_1b22e0:
    // 0x1b22e0: 0xac82022c  sw          $v0, 0x22C($a0)
    ctx->pc = 0x1b22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 2));
label_1b22e4:
    // 0x1b22e4: 0x0  nop
    ctx->pc = 0x1b22e4u;
    // NOP
    ctx->pc = 0x1b22e8u;
}
