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

// Function: sub_001E2078
// Address: 0x1e2078 - 0x1e2408
void sub_001E2078_0x1e2078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2078_0x1e2078");
#endif

    switch (ctx->pc) {
        case 0x1e2078u: goto label_1e2078;
        case 0x1e207cu: goto label_1e207c;
        case 0x1e2080u: goto label_1e2080;
        case 0x1e2084u: goto label_1e2084;
        case 0x1e2088u: goto label_1e2088;
        case 0x1e208cu: goto label_1e208c;
        case 0x1e2090u: goto label_1e2090;
        case 0x1e2094u: goto label_1e2094;
        case 0x1e2098u: goto label_1e2098;
        case 0x1e209cu: goto label_1e209c;
        case 0x1e20a0u: goto label_1e20a0;
        case 0x1e20a4u: goto label_1e20a4;
        case 0x1e20a8u: goto label_1e20a8;
        case 0x1e20acu: goto label_1e20ac;
        case 0x1e20b0u: goto label_1e20b0;
        case 0x1e20b4u: goto label_1e20b4;
        case 0x1e20b8u: goto label_1e20b8;
        case 0x1e20bcu: goto label_1e20bc;
        case 0x1e20c0u: goto label_1e20c0;
        case 0x1e20c4u: goto label_1e20c4;
        case 0x1e20c8u: goto label_1e20c8;
        case 0x1e20ccu: goto label_1e20cc;
        case 0x1e20d0u: goto label_1e20d0;
        case 0x1e20d4u: goto label_1e20d4;
        case 0x1e20d8u: goto label_1e20d8;
        case 0x1e20dcu: goto label_1e20dc;
        case 0x1e20e0u: goto label_1e20e0;
        case 0x1e20e4u: goto label_1e20e4;
        case 0x1e20e8u: goto label_1e20e8;
        case 0x1e20ecu: goto label_1e20ec;
        case 0x1e20f0u: goto label_1e20f0;
        case 0x1e20f4u: goto label_1e20f4;
        case 0x1e20f8u: goto label_1e20f8;
        case 0x1e20fcu: goto label_1e20fc;
        case 0x1e2100u: goto label_1e2100;
        case 0x1e2104u: goto label_1e2104;
        case 0x1e2108u: goto label_1e2108;
        case 0x1e210cu: goto label_1e210c;
        case 0x1e2110u: goto label_1e2110;
        case 0x1e2114u: goto label_1e2114;
        case 0x1e2118u: goto label_1e2118;
        case 0x1e211cu: goto label_1e211c;
        case 0x1e2120u: goto label_1e2120;
        case 0x1e2124u: goto label_1e2124;
        case 0x1e2128u: goto label_1e2128;
        case 0x1e212cu: goto label_1e212c;
        case 0x1e2130u: goto label_1e2130;
        case 0x1e2134u: goto label_1e2134;
        case 0x1e2138u: goto label_1e2138;
        case 0x1e213cu: goto label_1e213c;
        case 0x1e2140u: goto label_1e2140;
        case 0x1e2144u: goto label_1e2144;
        case 0x1e2148u: goto label_1e2148;
        case 0x1e214cu: goto label_1e214c;
        case 0x1e2150u: goto label_1e2150;
        case 0x1e2154u: goto label_1e2154;
        case 0x1e2158u: goto label_1e2158;
        case 0x1e215cu: goto label_1e215c;
        case 0x1e2160u: goto label_1e2160;
        case 0x1e2164u: goto label_1e2164;
        case 0x1e2168u: goto label_1e2168;
        case 0x1e216cu: goto label_1e216c;
        case 0x1e2170u: goto label_1e2170;
        case 0x1e2174u: goto label_1e2174;
        case 0x1e2178u: goto label_1e2178;
        case 0x1e217cu: goto label_1e217c;
        case 0x1e2180u: goto label_1e2180;
        case 0x1e2184u: goto label_1e2184;
        case 0x1e2188u: goto label_1e2188;
        case 0x1e218cu: goto label_1e218c;
        case 0x1e2190u: goto label_1e2190;
        case 0x1e2194u: goto label_1e2194;
        case 0x1e2198u: goto label_1e2198;
        case 0x1e219cu: goto label_1e219c;
        case 0x1e21a0u: goto label_1e21a0;
        case 0x1e21a4u: goto label_1e21a4;
        case 0x1e21a8u: goto label_1e21a8;
        case 0x1e21acu: goto label_1e21ac;
        case 0x1e21b0u: goto label_1e21b0;
        case 0x1e21b4u: goto label_1e21b4;
        case 0x1e21b8u: goto label_1e21b8;
        case 0x1e21bcu: goto label_1e21bc;
        case 0x1e21c0u: goto label_1e21c0;
        case 0x1e21c4u: goto label_1e21c4;
        case 0x1e21c8u: goto label_1e21c8;
        case 0x1e21ccu: goto label_1e21cc;
        case 0x1e21d0u: goto label_1e21d0;
        case 0x1e21d4u: goto label_1e21d4;
        case 0x1e21d8u: goto label_1e21d8;
        case 0x1e21dcu: goto label_1e21dc;
        case 0x1e21e0u: goto label_1e21e0;
        case 0x1e21e4u: goto label_1e21e4;
        case 0x1e21e8u: goto label_1e21e8;
        case 0x1e21ecu: goto label_1e21ec;
        case 0x1e21f0u: goto label_1e21f0;
        case 0x1e21f4u: goto label_1e21f4;
        case 0x1e21f8u: goto label_1e21f8;
        case 0x1e21fcu: goto label_1e21fc;
        case 0x1e2200u: goto label_1e2200;
        case 0x1e2204u: goto label_1e2204;
        case 0x1e2208u: goto label_1e2208;
        case 0x1e220cu: goto label_1e220c;
        case 0x1e2210u: goto label_1e2210;
        case 0x1e2214u: goto label_1e2214;
        case 0x1e2218u: goto label_1e2218;
        case 0x1e221cu: goto label_1e221c;
        case 0x1e2220u: goto label_1e2220;
        case 0x1e2224u: goto label_1e2224;
        case 0x1e2228u: goto label_1e2228;
        case 0x1e222cu: goto label_1e222c;
        case 0x1e2230u: goto label_1e2230;
        case 0x1e2234u: goto label_1e2234;
        case 0x1e2238u: goto label_1e2238;
        case 0x1e223cu: goto label_1e223c;
        case 0x1e2240u: goto label_1e2240;
        case 0x1e2244u: goto label_1e2244;
        case 0x1e2248u: goto label_1e2248;
        case 0x1e224cu: goto label_1e224c;
        case 0x1e2250u: goto label_1e2250;
        case 0x1e2254u: goto label_1e2254;
        case 0x1e2258u: goto label_1e2258;
        case 0x1e225cu: goto label_1e225c;
        case 0x1e2260u: goto label_1e2260;
        case 0x1e2264u: goto label_1e2264;
        case 0x1e2268u: goto label_1e2268;
        case 0x1e226cu: goto label_1e226c;
        case 0x1e2270u: goto label_1e2270;
        case 0x1e2274u: goto label_1e2274;
        case 0x1e2278u: goto label_1e2278;
        case 0x1e227cu: goto label_1e227c;
        case 0x1e2280u: goto label_1e2280;
        case 0x1e2284u: goto label_1e2284;
        case 0x1e2288u: goto label_1e2288;
        case 0x1e228cu: goto label_1e228c;
        case 0x1e2290u: goto label_1e2290;
        case 0x1e2294u: goto label_1e2294;
        case 0x1e2298u: goto label_1e2298;
        case 0x1e229cu: goto label_1e229c;
        case 0x1e22a0u: goto label_1e22a0;
        case 0x1e22a4u: goto label_1e22a4;
        case 0x1e22a8u: goto label_1e22a8;
        case 0x1e22acu: goto label_1e22ac;
        case 0x1e22b0u: goto label_1e22b0;
        case 0x1e22b4u: goto label_1e22b4;
        case 0x1e22b8u: goto label_1e22b8;
        case 0x1e22bcu: goto label_1e22bc;
        case 0x1e22c0u: goto label_1e22c0;
        case 0x1e22c4u: goto label_1e22c4;
        case 0x1e22c8u: goto label_1e22c8;
        case 0x1e22ccu: goto label_1e22cc;
        case 0x1e22d0u: goto label_1e22d0;
        case 0x1e22d4u: goto label_1e22d4;
        case 0x1e22d8u: goto label_1e22d8;
        case 0x1e22dcu: goto label_1e22dc;
        case 0x1e22e0u: goto label_1e22e0;
        case 0x1e22e4u: goto label_1e22e4;
        case 0x1e22e8u: goto label_1e22e8;
        case 0x1e22ecu: goto label_1e22ec;
        case 0x1e22f0u: goto label_1e22f0;
        case 0x1e22f4u: goto label_1e22f4;
        case 0x1e22f8u: goto label_1e22f8;
        case 0x1e22fcu: goto label_1e22fc;
        case 0x1e2300u: goto label_1e2300;
        case 0x1e2304u: goto label_1e2304;
        case 0x1e2308u: goto label_1e2308;
        case 0x1e230cu: goto label_1e230c;
        case 0x1e2310u: goto label_1e2310;
        case 0x1e2314u: goto label_1e2314;
        case 0x1e2318u: goto label_1e2318;
        case 0x1e231cu: goto label_1e231c;
        case 0x1e2320u: goto label_1e2320;
        case 0x1e2324u: goto label_1e2324;
        case 0x1e2328u: goto label_1e2328;
        case 0x1e232cu: goto label_1e232c;
        case 0x1e2330u: goto label_1e2330;
        case 0x1e2334u: goto label_1e2334;
        case 0x1e2338u: goto label_1e2338;
        case 0x1e233cu: goto label_1e233c;
        case 0x1e2340u: goto label_1e2340;
        case 0x1e2344u: goto label_1e2344;
        case 0x1e2348u: goto label_1e2348;
        case 0x1e234cu: goto label_1e234c;
        case 0x1e2350u: goto label_1e2350;
        case 0x1e2354u: goto label_1e2354;
        case 0x1e2358u: goto label_1e2358;
        case 0x1e235cu: goto label_1e235c;
        case 0x1e2360u: goto label_1e2360;
        case 0x1e2364u: goto label_1e2364;
        case 0x1e2368u: goto label_1e2368;
        case 0x1e236cu: goto label_1e236c;
        case 0x1e2370u: goto label_1e2370;
        case 0x1e2374u: goto label_1e2374;
        case 0x1e2378u: goto label_1e2378;
        case 0x1e237cu: goto label_1e237c;
        case 0x1e2380u: goto label_1e2380;
        case 0x1e2384u: goto label_1e2384;
        case 0x1e2388u: goto label_1e2388;
        case 0x1e238cu: goto label_1e238c;
        case 0x1e2390u: goto label_1e2390;
        case 0x1e2394u: goto label_1e2394;
        case 0x1e2398u: goto label_1e2398;
        case 0x1e239cu: goto label_1e239c;
        case 0x1e23a0u: goto label_1e23a0;
        case 0x1e23a4u: goto label_1e23a4;
        case 0x1e23a8u: goto label_1e23a8;
        case 0x1e23acu: goto label_1e23ac;
        case 0x1e23b0u: goto label_1e23b0;
        case 0x1e23b4u: goto label_1e23b4;
        case 0x1e23b8u: goto label_1e23b8;
        case 0x1e23bcu: goto label_1e23bc;
        case 0x1e23c0u: goto label_1e23c0;
        case 0x1e23c4u: goto label_1e23c4;
        case 0x1e23c8u: goto label_1e23c8;
        case 0x1e23ccu: goto label_1e23cc;
        case 0x1e23d0u: goto label_1e23d0;
        case 0x1e23d4u: goto label_1e23d4;
        case 0x1e23d8u: goto label_1e23d8;
        case 0x1e23dcu: goto label_1e23dc;
        case 0x1e23e0u: goto label_1e23e0;
        case 0x1e23e4u: goto label_1e23e4;
        case 0x1e23e8u: goto label_1e23e8;
        case 0x1e23ecu: goto label_1e23ec;
        case 0x1e23f0u: goto label_1e23f0;
        case 0x1e23f4u: goto label_1e23f4;
        case 0x1e23f8u: goto label_1e23f8;
        case 0x1e23fcu: goto label_1e23fc;
        case 0x1e2400u: goto label_1e2400;
        case 0x1e2404u: goto label_1e2404;
        default: break;
    }

    ctx->pc = 0x1e2078u;

label_1e2078:
    // 0x1e2078: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e2078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1e207c:
    // 0x1e207c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e207cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1e2080:
    // 0x1e2080: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e2080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1e2084:
    // 0x1e2084: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e2084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2088:
    // 0x1e2088: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e2088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1e208c:
    // 0x1e208c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e208cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1e2090:
    // 0x1e2090: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e2090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1e2094:
    // 0x1e2094: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e2094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1e2098:
    // 0x1e2098: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1e2098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1e209c:
    // 0x1e209c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e209cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_1e20a0:
    // 0x1e20a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e20a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e20a4:
    // 0x1e20a4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e20a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1e20a8:
    // 0x1e20a8: 0x10a0007e  beqz        $a1, . + 4 + (0x7E << 2)
label_1e20ac:
    if (ctx->pc == 0x1E20ACu) {
        ctx->pc = 0x1E20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20A8u;
        // 0x1e20ac: 0x8e750014  lw          $s5, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20B0u;
        goto label_1e20b0;
    }
    ctx->pc = 0x1E20A8u;
    {
        const bool branch_taken_0x1e20a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20A8u;
        // 0x1e20ac: 0x8e750014  lw          $s5, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20a8) {
            ctx->pc = 0x1E22A4u;
            goto label_1e22a4;
        }
    }
    ctx->pc = 0x1E20B0u;
label_1e20b0:
    // 0x1e20b0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1e20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e20b4:
    // 0x1e20b4: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
label_1e20b8:
    if (ctx->pc == 0x1E20B8u) {
        ctx->pc = 0x1E20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20B4u;
        // 0x1e20b8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20BCu;
        goto label_1e20bc;
    }
    ctx->pc = 0x1E20B4u;
    {
        const bool branch_taken_0x1e20b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20B4u;
        // 0x1e20b8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20b4) {
            ctx->pc = 0x1E229Cu;
            goto label_1e229c;
        }
    }
    ctx->pc = 0x1E20BCu;
label_1e20bc:
    // 0x1e20bc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1e20bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_1e20c0:
    // 0x1e20c0: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1e20c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1e20c4:
    // 0x1e20c4: 0x8c82e6e8  lw          $v0, -0x1918($a0)
    ctx->pc = 0x1e20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960872)));
label_1e20c8:
    // 0x1e20c8: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1e20c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
label_1e20cc:
    // 0x1e20cc: 0x8cc3e6e0  lw          $v1, -0x1920($a2)
    ctx->pc = 0x1e20ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960864)));
label_1e20d0:
    // 0x1e20d0: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1e20d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_1e20d4:
    // 0x1e20d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e20d8:
    // 0x1e20d8: 0x8d05e6e4  lw          $a1, -0x191C($t0)
    ctx->pc = 0x1e20d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960868)));
label_1e20dc:
    // 0x1e20dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e20e0:
    // 0x1e20e0: 0xac82e6e8  sw          $v0, -0x1918($a0)
    ctx->pc = 0x1e20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960872), GPR_U32(ctx, 2));
label_1e20e4:
    // 0x1e20e4: 0xacc3e6e0  sw          $v1, -0x1920($a2)
    ctx->pc = 0x1e20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960864), GPR_U32(ctx, 3));
label_1e20e8:
    // 0x1e20e8: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1e20e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e20ec:
    // 0x1e20ec: 0x8cf0e6d8  lw          $s0, -0x1928($a3)
    ctx->pc = 0x1e20ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960856)));
label_1e20f0:
    // 0x1e20f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e20f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e20f4:
    // 0x1e20f4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1e20f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1e20f8:
    // 0x1e20f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e20fc:
    // 0x1e20fc: 0x829018  mult        $s2, $a0, $v0
    ctx->pc = 0x1e20fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_1e2100:
    // 0x1e2100: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x1e2100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1e2104:
    // 0x1e2104: 0xad05e6e4  sw          $a1, -0x191C($t0)
    ctx->pc = 0x1e2104u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960868), GPR_U32(ctx, 5));
label_1e2108:
    // 0x1e2108: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_1e210c:
    if (ctx->pc == 0x1E210Cu) {
        ctx->pc = 0x1E210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2108u;
        // 0x1e210c: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2110u;
        goto label_1e2110;
    }
    ctx->pc = 0x1E2108u;
    {
        const bool branch_taken_0x1e2108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2108u;
        // 0x1e210c: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2108) {
            ctx->pc = 0x1E21A4u;
            goto label_1e21a4;
        }
    }
    ctx->pc = 0x1E2110u;
label_1e2110:
    // 0x1e2110: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e2110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e2114:
    // 0x1e2114: 0x0  nop
    ctx->pc = 0x1e2114u;
    // NOP
label_1e2118:
    // 0x1e2118: 0x5453fffb  bnel        $v0, $s3, . + 4 + (-0x5 << 2)
label_1e211c:
    if (ctx->pc == 0x1E211Cu) {
        ctx->pc = 0x1E211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2118u;
        // 0x1e211c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2120u;
        goto label_1e2120;
    }
    ctx->pc = 0x1E2118u;
    {
        const bool branch_taken_0x1e2118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1e2118) {
            ctx->pc = 0x1E211Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2118u;
            // 0x1e211c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2108;
        }
    }
    ctx->pc = 0x1E2120u;
label_1e2120:
    // 0x1e2120: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_1e2124:
    if (ctx->pc == 0x1E2124u) {
        ctx->pc = 0x1E2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2120u;
        // 0x1e2124: 0x8c62e6dc  lw          $v0, -0x1924($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2128u;
        goto label_1e2128;
    }
    ctx->pc = 0x1E2120u;
    {
        const bool branch_taken_0x1e2120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2120u;
        // 0x1e2124: 0x8c62e6dc  lw          $v0, -0x1924($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2120) {
            ctx->pc = 0x1E21A8u;
            goto label_1e21a8;
        }
    }
    ctx->pc = 0x1E2128u;
label_1e2128:
    // 0x1e2128: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e2128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e212c:
    // 0x1e212c: 0xc080d1e  jal         func_203478
label_1e2130:
    if (ctx->pc == 0x1E2130u) {
        ctx->pc = 0x1E2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E212Cu;
        // 0x1e2130: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2134u;
        goto label_1e2134;
    }
    ctx->pc = 0x1E212Cu;
    SET_GPR_U32(ctx, 31, 0x1E2134u);
    ctx->pc = 0x1E2130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E212Cu;
    // 0x1e2130: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203478u, 0x1E212Cu, 0x1E2134u)) {
        return;
    }
    ctx->pc = 0x1E2134u;
label_1e2134:
    // 0x1e2134: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e2134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2138:
    // 0x1e2138: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e2138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e213c:
    // 0x1e213c: 0x10450013  beq         $v0, $a1, . + 4 + (0x13 << 2)
label_1e2140:
    if (ctx->pc == 0x1E2140u) {
        ctx->pc = 0x1E2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E213Cu;
        // 0x1e2140: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2144u;
        goto label_1e2144;
    }
    ctx->pc = 0x1E213Cu;
    {
        const bool branch_taken_0x1e213c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E213Cu;
        // 0x1e2140: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e213c) {
            ctx->pc = 0x1E218Cu;
            goto label_1e218c;
        }
    }
    ctx->pc = 0x1E2144u;
label_1e2144:
    // 0x1e2144: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x1e2144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_1e2148:
    // 0x1e2148: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_1e214c:
    if (ctx->pc == 0x1E214Cu) {
        ctx->pc = 0x1E214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2148u;
        // 0x1e214c: 0xae650010  sw          $a1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2150u;
        goto label_1e2150;
    }
    ctx->pc = 0x1E2148u;
    {
        const bool branch_taken_0x1e2148 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2148u;
        // 0x1e214c: 0xae650010  sw          $a1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2148) {
            ctx->pc = 0x1E2184u;
            goto label_1e2184;
        }
    }
    ctx->pc = 0x1E2150u;
label_1e2150:
    // 0x1e2150: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e2150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e2154:
    // 0x1e2154: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x1e2154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
label_1e2158:
    // 0x1e2158: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e2158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e215c:
    // 0x1e215c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1e2160:
    if (ctx->pc == 0x1E2160u) {
        ctx->pc = 0x1E2160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E215Cu;
        // 0x1e2160: 0x24021102  addiu       $v0, $zero, 0x1102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2164u;
        goto label_1e2164;
    }
    ctx->pc = 0x1E215Cu;
    {
        const bool branch_taken_0x1e215c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E2160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E215Cu;
        // 0x1e2160: 0x24021102  addiu       $v0, $zero, 0x1102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e215c) {
            ctx->pc = 0x1E2174u;
            goto label_1e2174;
        }
    }
    ctx->pc = 0x1E2164u;
label_1e2164:
    // 0x1e2164: 0xc07835c  jal         func_1E0D70
label_1e2168:
    if (ctx->pc == 0x1E2168u) {
        ctx->pc = 0x1E2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2164u;
        // 0x1e2168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E216Cu;
        goto label_1e216c;
    }
    ctx->pc = 0x1E2164u;
    SET_GPR_U32(ctx, 31, 0x1E216Cu);
    ctx->pc = 0x1E2168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2164u;
    // 0x1e2168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0D70u, 0x1E2164u, 0x1E216Cu)) {
        return;
    }
    ctx->pc = 0x1E216Cu;
label_1e216c:
    // 0x1e216c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e2170:
    if (ctx->pc == 0x1E2170u) {
        ctx->pc = 0x1E2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E216Cu;
        // 0x1e2170: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2174u;
        goto label_1e2174;
    }
    ctx->pc = 0x1E216Cu;
    {
        const bool branch_taken_0x1e216c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E216Cu;
        // 0x1e2170: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e216c) {
            ctx->pc = 0x1E2188u;
            goto label_1e2188;
        }
    }
    ctx->pc = 0x1E2174u;
label_1e2174:
    // 0x1e2174: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
label_1e2178:
    if (ctx->pc == 0x1E2178u) {
        ctx->pc = 0x1E2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2174u;
        // 0x1e2178: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E217Cu;
        goto label_1e217c;
    }
    ctx->pc = 0x1E2174u;
    {
        const bool branch_taken_0x1e2174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2174) {
            ctx->pc = 0x1E2178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2174u;
            // 0x1e2178: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2188u;
            goto label_1e2188;
        }
    }
    ctx->pc = 0x1E217Cu;
label_1e217c:
    // 0x1e217c: 0xc078478  jal         func_1E11E0
label_1e2180:
    if (ctx->pc == 0x1E2180u) {
        ctx->pc = 0x1E2180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E217Cu;
        // 0x1e2180: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2184u;
        goto label_1e2184;
    }
    ctx->pc = 0x1E217Cu;
    SET_GPR_U32(ctx, 31, 0x1E2184u);
    ctx->pc = 0x1E2180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E217Cu;
    // 0x1e2180: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E11E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E11E0u, 0x1E217Cu, 0x1E2184u)) {
        return;
    }
    ctx->pc = 0x1E2184u;
label_1e2184:
    // 0x1e2184: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e2188:
    // 0x1e2188: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e218c:
    // 0x1e218c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x1e218cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_1e2190:
    // 0x1e2190: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1e2190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1e2194:
    // 0x1e2194: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e2194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1e2198:
    // 0x1e2198: 0x8c62e6e8  lw          $v0, -0x1918($v1)
    ctx->pc = 0x1e2198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960872)));
label_1e219c:
    // 0x1e219c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1e21a0:
    if (ctx->pc == 0x1E21A0u) {
        ctx->pc = 0x1E21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E219Cu;
        // 0x1e21a0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E21A4u;
        goto label_1e21a4;
    }
    ctx->pc = 0x1E219Cu;
    {
        const bool branch_taken_0x1e219c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E219Cu;
        // 0x1e21a0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e219c) {
            ctx->pc = 0x1E2294u;
            goto label_1e2294;
        }
    }
    ctx->pc = 0x1E21A4u;
label_1e21a4:
    // 0x1e21a4: 0x8c62e6dc  lw          $v0, -0x1924($v1)
    ctx->pc = 0x1e21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960860)));
label_1e21a8:
    // 0x1e21a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e21ac:
    if (ctx->pc == 0x1E21ACu) {
        ctx->pc = 0x1E21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21A8u;
        // 0x1e21ac: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E21B0u;
        goto label_1e21b0;
    }
    ctx->pc = 0x1E21A8u;
    {
        const bool branch_taken_0x1e21a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21A8u;
        // 0x1e21ac: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21a8) {
            ctx->pc = 0x1E21B8u;
            goto label_1e21b8;
        }
    }
    ctx->pc = 0x1E21B0u;
label_1e21b0:
    // 0x1e21b0: 0xc078776  jal         func_1E1DD8
label_1e21b4:
    if (ctx->pc == 0x1E21B4u) {
        ctx->pc = 0x1E21B8u;
        goto label_1e21b8;
    }
    ctx->pc = 0x1E21B0u;
    SET_GPR_U32(ctx, 31, 0x1E21B8u);
    ctx->pc = 0x1E1DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E1DD8u, 0x1E21B0u, 0x1E21B8u)) {
        return;
    }
    ctx->pc = 0x1E21B8u;
label_1e21b8:
    // 0x1e21b8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1e21b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1e21bc:
    // 0x1e21bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e21bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e21c0:
    // 0x1e21c0: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x1e21c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_1e21c4:
    // 0x1e21c4: 0x3c10001e  lui         $s0, 0x1E
    ctx->pc = 0x1e21c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)30 << 16));
label_1e21c8:
    // 0x1e21c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e21c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e21cc:
    // 0x1e21cc: 0x0  nop
    ctx->pc = 0x1e21ccu;
    // NOP
label_1e21d0:
    // 0x1e21d0: 0xc080d08  jal         func_203420
label_1e21d4:
    if (ctx->pc == 0x1E21D4u) {
        ctx->pc = 0x1E21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21D0u;
        // 0x1e21d4: 0x26051f10  addiu       $a1, $s0, 0x1F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E21D8u;
        goto label_1e21d8;
    }
    ctx->pc = 0x1E21D0u;
    SET_GPR_U32(ctx, 31, 0x1E21D8u);
    ctx->pc = 0x1E21D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E21D0u;
    // 0x1e21d4: 0x26051f10  addiu       $a1, $s0, 0x1F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203420u, 0x1E21D0u, 0x1E21D8u)) {
        return;
    }
    ctx->pc = 0x1E21D8u;
label_1e21d8:
    // 0x1e21d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e21d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e21dc:
    // 0x1e21dc: 0x5620000f  bnel        $s1, $zero, . + 4 + (0xF << 2)
label_1e21e0:
    if (ctx->pc == 0x1E21E0u) {
        ctx->pc = 0x1E21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21DCu;
        // 0x1e21e0: 0x8ef0e6dc  lw          $s0, -0x1924($s7) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E21E4u;
        goto label_1e21e4;
    }
    ctx->pc = 0x1E21DCu;
    {
        const bool branch_taken_0x1e21dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e21dc) {
            ctx->pc = 0x1E21E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E21DCu;
            // 0x1e21e0: 0x8ef0e6dc  lw          $s0, -0x1924($s7) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960860)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E221Cu;
            goto label_1e221c;
        }
    }
    ctx->pc = 0x1E21E4u;
label_1e21e4:
    // 0x1e21e4: 0xc078776  jal         func_1E1DD8
label_1e21e8:
    if (ctx->pc == 0x1E21E8u) {
        ctx->pc = 0x1E21ECu;
        goto label_1e21ec;
    }
    ctx->pc = 0x1E21E4u;
    SET_GPR_U32(ctx, 31, 0x1E21ECu);
    ctx->pc = 0x1E1DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E1DD8u, 0x1E21E4u, 0x1E21ECu)) {
        return;
    }
    ctx->pc = 0x1E21ECu;
label_1e21ec:
    // 0x1e21ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1e21f0:
    if (ctx->pc == 0x1E21F0u) {
        ctx->pc = 0x1E21F4u;
        goto label_1e21f4;
    }
    ctx->pc = 0x1E21ECu;
    {
        const bool branch_taken_0x1e21ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e21ec) {
            ctx->pc = 0x1E2210u;
            goto label_1e2210;
        }
    }
    ctx->pc = 0x1E21F4u;
label_1e21f4:
    // 0x1e21f4: 0xc080d1c  jal         func_203470
label_1e21f8:
    if (ctx->pc == 0x1E21F8u) {
        ctx->pc = 0x1E21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21F4u;
        // 0x1e21f8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E21FCu;
        goto label_1e21fc;
    }
    ctx->pc = 0x1E21F4u;
    SET_GPR_U32(ctx, 31, 0x1E21FCu);
    ctx->pc = 0x1E21F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E21F4u;
    // 0x1e21f8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203470u, 0x1E21F4u, 0x1E21FCu)) {
        return;
    }
    ctx->pc = 0x1E21FCu;
label_1e21fc:
    // 0x1e21fc: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x1e21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_1e2200:
    // 0x1e2200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e2204:
    // 0x1e2204: 0x40f809  jalr        $v0
label_1e2208:
    if (ctx->pc == 0x1E2208u) {
        ctx->pc = 0x1E2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2204u;
        // 0x1e2208: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E220Cu;
        goto label_1e220c;
    }
    ctx->pc = 0x1E2204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E220Cu);
        ctx->pc = 0x1E2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2204u;
        // 0x1e2208: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2204u, 0x1E220Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E220Cu;
label_1e220c:
    // 0x1e220c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e220cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2210:
    // 0x1e2210: 0x5220ffef  beql        $s1, $zero, . + 4 + (-0x11 << 2)
label_1e2214:
    if (ctx->pc == 0x1E2214u) {
        ctx->pc = 0x1E2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2210u;
        // 0x1e2214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2218u;
        goto label_1e2218;
    }
    ctx->pc = 0x1E2210u;
    {
        const bool branch_taken_0x1e2210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2210) {
            ctx->pc = 0x1E2214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2210u;
            // 0x1e2214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E21D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e21d0;
        }
    }
    ctx->pc = 0x1E2218u;
label_1e2218:
    // 0x1e2218: 0x8ef0e6dc  lw          $s0, -0x1924($s7)
    ctx->pc = 0x1e2218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960860)));
label_1e221c:
    // 0x1e221c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2220:
    // 0x1e2220: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e2220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2224:
    // 0x1e2224: 0xaee3e6dc  sw          $v1, -0x1924($s7)
    ctx->pc = 0x1e2224u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294960860), GPR_U32(ctx, 3));
label_1e2228:
    // 0x1e2228: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e2228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e222c:
    // 0x1e222c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e222cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1e2230:
    // 0x1e2230: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1e2230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_1e2234:
    // 0x1e2234: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1e2234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_1e2238:
    // 0x1e2238: 0x8c62e6e8  lw          $v0, -0x1918($v1)
    ctx->pc = 0x1e2238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960872)));
label_1e223c:
    // 0x1e223c: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x1e223cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
label_1e2240:
    // 0x1e2240: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e2240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e2244:
    // 0x1e2244: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_1e2248:
    if (ctx->pc == 0x1E2248u) {
        ctx->pc = 0x1E2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2244u;
        // 0x1e2248: 0xae710010  sw          $s1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E224Cu;
        goto label_1e224c;
    }
    ctx->pc = 0x1E2244u;
    {
        const bool branch_taken_0x1e2244 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2244u;
        // 0x1e2248: 0xae710010  sw          $s1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2244) {
            ctx->pc = 0x1E2288u;
            goto label_1e2288;
        }
    }
    ctx->pc = 0x1E224Cu;
label_1e224c:
    // 0x1e224c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e2250:
    // 0x1e2250: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x1e2250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
label_1e2254:
    // 0x1e2254: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e2254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2258:
    // 0x1e2258: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_1e225c:
    if (ctx->pc == 0x1E225Cu) {
        ctx->pc = 0x1E225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2258u;
        // 0x1e225c: 0x24021102  addiu       $v0, $zero, 0x1102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2260u;
        goto label_1e2260;
    }
    ctx->pc = 0x1E2258u;
    {
        const bool branch_taken_0x1e2258 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2258u;
        // 0x1e225c: 0x24021102  addiu       $v0, $zero, 0x1102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2258) {
            ctx->pc = 0x1E2274u;
            goto label_1e2274;
        }
    }
    ctx->pc = 0x1E2260u;
label_1e2260:
    // 0x1e2260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e2260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2264:
    // 0x1e2264: 0xc07835c  jal         func_1E0D70
label_1e2268:
    if (ctx->pc == 0x1E2268u) {
        ctx->pc = 0x1E2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2264u;
        // 0x1e2268: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E226Cu;
        goto label_1e226c;
    }
    ctx->pc = 0x1E2264u;
    SET_GPR_U32(ctx, 31, 0x1E226Cu);
    ctx->pc = 0x1E2268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2264u;
    // 0x1e2268: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0D70u, 0x1E2264u, 0x1E226Cu)) {
        return;
    }
    ctx->pc = 0x1E226Cu;
label_1e226c:
    // 0x1e226c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e2270:
    if (ctx->pc == 0x1E2270u) {
        ctx->pc = 0x1E2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E226Cu;
        // 0x1e2270: 0x8fc2e6d8  lw          $v0, -0x1928($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294960856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2274u;
        goto label_1e2274;
    }
    ctx->pc = 0x1E226Cu;
    {
        const bool branch_taken_0x1e226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E226Cu;
        // 0x1e2270: 0x8fc2e6d8  lw          $v0, -0x1928($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294960856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e226c) {
            ctx->pc = 0x1E228Cu;
            goto label_1e228c;
        }
    }
    ctx->pc = 0x1E2274u;
label_1e2274:
    // 0x1e2274: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1e2278:
    if (ctx->pc == 0x1E2278u) {
        ctx->pc = 0x1E2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2274u;
        // 0x1e2278: 0x8fc2e6d8  lw          $v0, -0x1928($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294960856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E227Cu;
        goto label_1e227c;
    }
    ctx->pc = 0x1E2274u;
    {
        const bool branch_taken_0x1e2274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2274u;
        // 0x1e2278: 0x8fc2e6d8  lw          $v0, -0x1928($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294960856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2274) {
            ctx->pc = 0x1E228Cu;
            goto label_1e228c;
        }
    }
    ctx->pc = 0x1E227Cu;
label_1e227c:
    // 0x1e227c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e227cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2280:
    // 0x1e2280: 0xc078478  jal         func_1E11E0
label_1e2284:
    if (ctx->pc == 0x1E2284u) {
        ctx->pc = 0x1E2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2280u;
        // 0x1e2284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2288u;
        goto label_1e2288;
    }
    ctx->pc = 0x1E2280u;
    SET_GPR_U32(ctx, 31, 0x1E2288u);
    ctx->pc = 0x1E2284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2280u;
    // 0x1e2284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E11E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E11E0u, 0x1E2280u, 0x1E2288u)) {
        return;
    }
    ctx->pc = 0x1E2288u;
label_1e2288:
    // 0x1e2288: 0x8fc2e6d8  lw          $v0, -0x1928($fp)
    ctx->pc = 0x1e2288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294960856)));
label_1e228c:
    // 0x1e228c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e228cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e2290:
    // 0x1e2290: 0xafd0e6d8  sw          $s0, -0x1928($fp)
    ctx->pc = 0x1e2290u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294960856), GPR_U32(ctx, 16));
label_1e2294:
    // 0x1e2294: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1e2294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e2298:
    // 0x1e2298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e229c:
    // 0x1e229c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1e22a0:
    if (ctx->pc == 0x1E22A0u) {
        ctx->pc = 0x1E22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E229Cu;
        // 0x1e22a0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22A4u;
        goto label_1e22a4;
    }
    ctx->pc = 0x1E229Cu;
    {
        const bool branch_taken_0x1e229c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E229Cu;
        // 0x1e22a0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e229c) {
            ctx->pc = 0x1E23D0u;
            goto label_1e23d0;
        }
    }
    ctx->pc = 0x1E22A4u;
label_1e22a4:
    // 0x1e22a4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1e22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e22a8:
    // 0x1e22a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e22ac:
    // 0x1e22ac: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_1e22b0:
    if (ctx->pc == 0x1E22B0u) {
        ctx->pc = 0x1E22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22ACu;
        // 0x1e22b0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22B4u;
        goto label_1e22b4;
    }
    ctx->pc = 0x1E22ACu;
    {
        const bool branch_taken_0x1e22ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22ACu;
        // 0x1e22b0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22ac) {
            ctx->pc = 0x1E23D0u;
            goto label_1e23d0;
        }
    }
    ctx->pc = 0x1E22B4u;
label_1e22b4:
    // 0x1e22b4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1e22b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_1e22b8:
    // 0x1e22b8: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1e22b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1e22bc:
    // 0x1e22bc: 0x8c82e6e8  lw          $v0, -0x1918($a0)
    ctx->pc = 0x1e22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960872)));
label_1e22c0:
    // 0x1e22c0: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1e22c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
label_1e22c4:
    // 0x1e22c4: 0x8cc3e6e0  lw          $v1, -0x1920($a2)
    ctx->pc = 0x1e22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960864)));
label_1e22c8:
    // 0x1e22c8: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1e22c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_1e22cc:
    // 0x1e22cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e22d0:
    // 0x1e22d0: 0x8d05e6e4  lw          $a1, -0x191C($t0)
    ctx->pc = 0x1e22d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960868)));
label_1e22d4:
    // 0x1e22d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e22d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e22d8:
    // 0x1e22d8: 0xac82e6e8  sw          $v0, -0x1918($a0)
    ctx->pc = 0x1e22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960872), GPR_U32(ctx, 2));
label_1e22dc:
    // 0x1e22dc: 0xacc3e6e0  sw          $v1, -0x1920($a2)
    ctx->pc = 0x1e22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960864), GPR_U32(ctx, 3));
label_1e22e0:
    // 0x1e22e0: 0x8cf2e6d8  lw          $s2, -0x1928($a3)
    ctx->pc = 0x1e22e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960856)));
label_1e22e4:
    // 0x1e22e4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1e22e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e22e8:
    // 0x1e22e8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1e22e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1e22ec:
    // 0x1e22ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e22ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e22f0:
    // 0x1e22f0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e22f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e22f4:
    // 0x1e22f4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1e22f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1e22f8:
    // 0x1e22f8: 0xad05e6e4  sw          $a1, -0x191C($t0)
    ctx->pc = 0x1e22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960868), GPR_U32(ctx, 5));
label_1e22fc:
    // 0x1e22fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1e2300:
    // 0x1e2300: 0x10530009  beq         $v0, $s3, . + 4 + (0x9 << 2)
label_1e2304:
    if (ctx->pc == 0x1E2304u) {
        ctx->pc = 0x1E2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2300u;
        // 0x1e2304: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2308u;
        goto label_1e2308;
    }
    ctx->pc = 0x1E2300u;
    {
        const bool branch_taken_0x1e2300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1E2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2300u;
        // 0x1e2304: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2300) {
            ctx->pc = 0x1E2328u;
            goto label_1e2328;
        }
    }
    ctx->pc = 0x1E2308u;
label_1e2308:
    // 0x1e2308: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1e2308u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e230c:
    // 0x1e230c: 0x0  nop
    ctx->pc = 0x1e230cu;
    // NOP
label_1e2310:
    // 0x1e2310: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1e2314:
    // 0x1e2314: 0x0  nop
    ctx->pc = 0x1e2314u;
    // NOP
label_1e2318:
    // 0x1e2318: 0x0  nop
    ctx->pc = 0x1e2318u;
    // NOP
label_1e231c:
    // 0x1e231c: 0x0  nop
    ctx->pc = 0x1e231cu;
    // NOP
label_1e2320:
    // 0x1e2320: 0x5453fffb  bnel        $v0, $s3, . + 4 + (-0x5 << 2)
label_1e2324:
    if (ctx->pc == 0x1E2324u) {
        ctx->pc = 0x1E2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2320u;
        // 0x1e2324: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2328u;
        goto label_1e2328;
    }
    ctx->pc = 0x1E2320u;
    {
        const bool branch_taken_0x1e2320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1e2320) {
            ctx->pc = 0x1E2324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2320u;
            // 0x1e2324: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2310;
        }
    }
    ctx->pc = 0x1E2328u;
label_1e2328:
    // 0x1e2328: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1e2328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1e232c:
    // 0x1e232c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e232cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1e2330:
    // 0x1e2330: 0x8c62e6e8  lw          $v0, -0x1918($v1)
    ctx->pc = 0x1e2330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960872)));
label_1e2334:
    // 0x1e2334: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1e2334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1e2338:
    // 0x1e2338: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1e2338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1e233c:
    // 0x1e233c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1e233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e2340:
    // 0x1e2340: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1e2344:
    if (ctx->pc == 0x1E2344u) {
        ctx->pc = 0x1E2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2340u;
        // 0x1e2344: 0x8fd1e6d8  lw          $s1, -0x1928($fp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294960856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2348u;
        goto label_1e2348;
    }
    ctx->pc = 0x1E2340u;
    {
        const bool branch_taken_0x1e2340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2340u;
        // 0x1e2344: 0x8fd1e6d8  lw          $s1, -0x1928($fp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294960856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2340) {
            ctx->pc = 0x1E23D0u;
            goto label_1e23d0;
        }
    }
    ctx->pc = 0x1E2348u;
label_1e2348:
    // 0x1e2348: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_1e234c:
    if (ctx->pc == 0x1E234Cu) {
        ctx->pc = 0x1E234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2348u;
        // 0x1e234c: 0xafc0e6d8  sw          $zero, -0x1928($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294960856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2350u;
        goto label_1e2350;
    }
    ctx->pc = 0x1E2348u;
    {
        const bool branch_taken_0x1e2348 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2348u;
        // 0x1e234c: 0xafc0e6d8  sw          $zero, -0x1928($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294960856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2348) {
            ctx->pc = 0x1E23BCu;
            goto label_1e23bc;
        }
    }
    ctx->pc = 0x1E2350u;
label_1e2350:
    // 0x1e2350: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1e2350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1e2354:
    // 0x1e2354: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x1e2354u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
label_1e2358:
    // 0x1e2358: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x1e2358u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_1e235c:
    // 0x1e235c: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x1e235cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e2360:
    // 0x1e2360: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1e2360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2364:
    // 0x1e2364: 0x0  nop
    ctx->pc = 0x1e2364u;
    // NOP
label_1e2368:
    // 0x1e2368: 0x1612000f  bne         $s0, $s2, . + 4 + (0xF << 2)
label_1e236c:
    if (ctx->pc == 0x1E236Cu) {
        ctx->pc = 0x1E236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2368u;
        // 0x1e236c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2370u;
        goto label_1e2370;
    }
    ctx->pc = 0x1E2368u;
    {
        const bool branch_taken_0x1e2368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x1E236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2368u;
        // 0x1e236c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2368) {
            ctx->pc = 0x1E23A8u;
            goto label_1e23a8;
        }
    }
    ctx->pc = 0x1E2370u;
label_1e2370:
    // 0x1e2370: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1e2370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e2374:
    // 0x1e2374: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e2378:
    if (ctx->pc == 0x1E2378u) {
        ctx->pc = 0x1E237Cu;
        goto label_1e237c;
    }
    ctx->pc = 0x1E2374u;
    {
        const bool branch_taken_0x1e2374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2374) {
            ctx->pc = 0x1E2390u;
            goto label_1e2390;
        }
    }
    ctx->pc = 0x1E237Cu;
label_1e237c:
    // 0x1e237c: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x1e237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_1e2380:
    // 0x1e2380: 0x40f809  jalr        $v0
label_1e2384:
    if (ctx->pc == 0x1E2384u) {
        ctx->pc = 0x1E2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2380u;
        // 0x1e2384: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2388u;
        goto label_1e2388;
    }
    ctx->pc = 0x1E2380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2388u);
        ctx->pc = 0x1E2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2380u;
        // 0x1e2384: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2380u, 0x1E2388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2388u;
label_1e2388:
    // 0x1e2388: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e238c:
    if (ctx->pc == 0x1E238Cu) {
        ctx->pc = 0x1E238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2388u;
        // 0x1e238c: 0x8ea2e6dc  lw          $v0, -0x1924($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2390u;
        goto label_1e2390;
    }
    ctx->pc = 0x1E2388u;
    {
        const bool branch_taken_0x1e2388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2388u;
        // 0x1e238c: 0x8ea2e6dc  lw          $v0, -0x1924($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2388) {
            ctx->pc = 0x1E239Cu;
            goto label_1e239c;
        }
    }
    ctx->pc = 0x1E2390u;
label_1e2390:
    // 0x1e2390: 0xc080d12  jal         func_203448
label_1e2394:
    if (ctx->pc == 0x1E2394u) {
        ctx->pc = 0x1E2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2390u;
        // 0x1e2394: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2398u;
        goto label_1e2398;
    }
    ctx->pc = 0x1E2390u;
    SET_GPR_U32(ctx, 31, 0x1E2398u);
    ctx->pc = 0x1E2394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2390u;
    // 0x1e2394: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203448u, 0x1E2390u, 0x1E2398u)) {
        return;
    }
    ctx->pc = 0x1E2398u;
label_1e2398:
    // 0x1e2398: 0x8ea2e6dc  lw          $v0, -0x1924($s5)
    ctx->pc = 0x1e2398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960860)));
label_1e239c:
    // 0x1e239c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e239cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e23a0:
    // 0x1e23a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e23a4:
    if (ctx->pc == 0x1E23A4u) {
        ctx->pc = 0x1E23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23A0u;
        // 0x1e23a4: 0xaeb0e6dc  sw          $s0, -0x1924($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294960860), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E23A8u;
        goto label_1e23a8;
    }
    ctx->pc = 0x1E23A0u;
    {
        const bool branch_taken_0x1e23a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23A0u;
        // 0x1e23a4: 0xaeb0e6dc  sw          $s0, -0x1924($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294960860), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23a0) {
            ctx->pc = 0x1E23B4u;
            goto label_1e23b4;
        }
    }
    ctx->pc = 0x1E23A8u;
label_1e23a8:
    // 0x1e23a8: 0x8e82e6d8  lw          $v0, -0x1928($s4)
    ctx->pc = 0x1e23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960856)));
label_1e23ac:
    // 0x1e23ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e23acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e23b0:
    // 0x1e23b0: 0xae90e6d8  sw          $s0, -0x1928($s4)
    ctx->pc = 0x1e23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294960856), GPR_U32(ctx, 16));
label_1e23b4:
    // 0x1e23b4: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
label_1e23b8:
    if (ctx->pc == 0x1E23B8u) {
        ctx->pc = 0x1E23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23B4u;
        // 0x1e23b8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E23BCu;
        goto label_1e23bc;
    }
    ctx->pc = 0x1E23B4u;
    {
        const bool branch_taken_0x1e23b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23B4u;
        // 0x1e23b8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23b4) {
            ctx->pc = 0x1E2368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2368;
        }
    }
    ctx->pc = 0x1E23BCu;
label_1e23bc:
    // 0x1e23bc: 0x8fc2e6d8  lw          $v0, -0x1928($fp)
    ctx->pc = 0x1e23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294960856)));
label_1e23c0:
    // 0x1e23c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e23c4:
    if (ctx->pc == 0x1E23C4u) {
        ctx->pc = 0x1E23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23C0u;
        // 0x1e23c4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E23C8u;
        goto label_1e23c8;
    }
    ctx->pc = 0x1E23C0u;
    {
        const bool branch_taken_0x1e23c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23C0u;
        // 0x1e23c4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23c0) {
            ctx->pc = 0x1E23D4u;
            goto label_1e23d4;
        }
    }
    ctx->pc = 0x1E23C8u;
label_1e23c8:
    // 0x1e23c8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e23c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1e23cc:
    // 0x1e23cc: 0xac40e6e8  sw          $zero, -0x1918($v0)
    ctx->pc = 0x1e23ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960872), GPR_U32(ctx, 0));
label_1e23d0:
    // 0x1e23d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e23d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e23d4:
    // 0x1e23d4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e23d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e23d8:
    // 0x1e23d8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e23d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e23dc:
    // 0x1e23dc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e23dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e23e0:
    // 0x1e23e0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e23e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e23e4:
    // 0x1e23e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e23e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e23e8:
    // 0x1e23e8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e23e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e23ec:
    // 0x1e23ec: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e23ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e23f0:
    // 0x1e23f0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1e23f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e23f4:
    // 0x1e23f4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e23f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e23f8:
    // 0x1e23f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e23f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e23fc:
    // 0x1e23fc: 0x3e00008  jr          $ra
label_1e2400:
    if (ctx->pc == 0x1E2400u) {
        ctx->pc = 0x1E2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23FCu;
        // 0x1e2400: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2404u;
        goto label_1e2404;
    }
    ctx->pc = 0x1E23FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23FCu;
        // 0x1e2400: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E23FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2404u;
label_1e2404:
    // 0x1e2404: 0x0  nop
    ctx->pc = 0x1e2404u;
    // NOP
    ctx->pc = 0x1e2408u;
}
