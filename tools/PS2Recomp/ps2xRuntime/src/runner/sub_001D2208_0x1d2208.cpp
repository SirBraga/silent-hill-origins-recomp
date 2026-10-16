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

// Function: sub_001D2208
// Address: 0x1d2208 - 0x1d2600
void sub_001D2208_0x1d2208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2208_0x1d2208");
#endif

    switch (ctx->pc) {
        case 0x1d2208u: goto label_1d2208;
        case 0x1d220cu: goto label_1d220c;
        case 0x1d2210u: goto label_1d2210;
        case 0x1d2214u: goto label_1d2214;
        case 0x1d2218u: goto label_1d2218;
        case 0x1d221cu: goto label_1d221c;
        case 0x1d2220u: goto label_1d2220;
        case 0x1d2224u: goto label_1d2224;
        case 0x1d2228u: goto label_1d2228;
        case 0x1d222cu: goto label_1d222c;
        case 0x1d2230u: goto label_1d2230;
        case 0x1d2234u: goto label_1d2234;
        case 0x1d2238u: goto label_1d2238;
        case 0x1d223cu: goto label_1d223c;
        case 0x1d2240u: goto label_1d2240;
        case 0x1d2244u: goto label_1d2244;
        case 0x1d2248u: goto label_1d2248;
        case 0x1d224cu: goto label_1d224c;
        case 0x1d2250u: goto label_1d2250;
        case 0x1d2254u: goto label_1d2254;
        case 0x1d2258u: goto label_1d2258;
        case 0x1d225cu: goto label_1d225c;
        case 0x1d2260u: goto label_1d2260;
        case 0x1d2264u: goto label_1d2264;
        case 0x1d2268u: goto label_1d2268;
        case 0x1d226cu: goto label_1d226c;
        case 0x1d2270u: goto label_1d2270;
        case 0x1d2274u: goto label_1d2274;
        case 0x1d2278u: goto label_1d2278;
        case 0x1d227cu: goto label_1d227c;
        case 0x1d2280u: goto label_1d2280;
        case 0x1d2284u: goto label_1d2284;
        case 0x1d2288u: goto label_1d2288;
        case 0x1d228cu: goto label_1d228c;
        case 0x1d2290u: goto label_1d2290;
        case 0x1d2294u: goto label_1d2294;
        case 0x1d2298u: goto label_1d2298;
        case 0x1d229cu: goto label_1d229c;
        case 0x1d22a0u: goto label_1d22a0;
        case 0x1d22a4u: goto label_1d22a4;
        case 0x1d22a8u: goto label_1d22a8;
        case 0x1d22acu: goto label_1d22ac;
        case 0x1d22b0u: goto label_1d22b0;
        case 0x1d22b4u: goto label_1d22b4;
        case 0x1d22b8u: goto label_1d22b8;
        case 0x1d22bcu: goto label_1d22bc;
        case 0x1d22c0u: goto label_1d22c0;
        case 0x1d22c4u: goto label_1d22c4;
        case 0x1d22c8u: goto label_1d22c8;
        case 0x1d22ccu: goto label_1d22cc;
        case 0x1d22d0u: goto label_1d22d0;
        case 0x1d22d4u: goto label_1d22d4;
        case 0x1d22d8u: goto label_1d22d8;
        case 0x1d22dcu: goto label_1d22dc;
        case 0x1d22e0u: goto label_1d22e0;
        case 0x1d22e4u: goto label_1d22e4;
        case 0x1d22e8u: goto label_1d22e8;
        case 0x1d22ecu: goto label_1d22ec;
        case 0x1d22f0u: goto label_1d22f0;
        case 0x1d22f4u: goto label_1d22f4;
        case 0x1d22f8u: goto label_1d22f8;
        case 0x1d22fcu: goto label_1d22fc;
        case 0x1d2300u: goto label_1d2300;
        case 0x1d2304u: goto label_1d2304;
        case 0x1d2308u: goto label_1d2308;
        case 0x1d230cu: goto label_1d230c;
        case 0x1d2310u: goto label_1d2310;
        case 0x1d2314u: goto label_1d2314;
        case 0x1d2318u: goto label_1d2318;
        case 0x1d231cu: goto label_1d231c;
        case 0x1d2320u: goto label_1d2320;
        case 0x1d2324u: goto label_1d2324;
        case 0x1d2328u: goto label_1d2328;
        case 0x1d232cu: goto label_1d232c;
        case 0x1d2330u: goto label_1d2330;
        case 0x1d2334u: goto label_1d2334;
        case 0x1d2338u: goto label_1d2338;
        case 0x1d233cu: goto label_1d233c;
        case 0x1d2340u: goto label_1d2340;
        case 0x1d2344u: goto label_1d2344;
        case 0x1d2348u: goto label_1d2348;
        case 0x1d234cu: goto label_1d234c;
        case 0x1d2350u: goto label_1d2350;
        case 0x1d2354u: goto label_1d2354;
        case 0x1d2358u: goto label_1d2358;
        case 0x1d235cu: goto label_1d235c;
        case 0x1d2360u: goto label_1d2360;
        case 0x1d2364u: goto label_1d2364;
        case 0x1d2368u: goto label_1d2368;
        case 0x1d236cu: goto label_1d236c;
        case 0x1d2370u: goto label_1d2370;
        case 0x1d2374u: goto label_1d2374;
        case 0x1d2378u: goto label_1d2378;
        case 0x1d237cu: goto label_1d237c;
        case 0x1d2380u: goto label_1d2380;
        case 0x1d2384u: goto label_1d2384;
        case 0x1d2388u: goto label_1d2388;
        case 0x1d238cu: goto label_1d238c;
        case 0x1d2390u: goto label_1d2390;
        case 0x1d2394u: goto label_1d2394;
        case 0x1d2398u: goto label_1d2398;
        case 0x1d239cu: goto label_1d239c;
        case 0x1d23a0u: goto label_1d23a0;
        case 0x1d23a4u: goto label_1d23a4;
        case 0x1d23a8u: goto label_1d23a8;
        case 0x1d23acu: goto label_1d23ac;
        case 0x1d23b0u: goto label_1d23b0;
        case 0x1d23b4u: goto label_1d23b4;
        case 0x1d23b8u: goto label_1d23b8;
        case 0x1d23bcu: goto label_1d23bc;
        case 0x1d23c0u: goto label_1d23c0;
        case 0x1d23c4u: goto label_1d23c4;
        case 0x1d23c8u: goto label_1d23c8;
        case 0x1d23ccu: goto label_1d23cc;
        case 0x1d23d0u: goto label_1d23d0;
        case 0x1d23d4u: goto label_1d23d4;
        case 0x1d23d8u: goto label_1d23d8;
        case 0x1d23dcu: goto label_1d23dc;
        case 0x1d23e0u: goto label_1d23e0;
        case 0x1d23e4u: goto label_1d23e4;
        case 0x1d23e8u: goto label_1d23e8;
        case 0x1d23ecu: goto label_1d23ec;
        case 0x1d23f0u: goto label_1d23f0;
        case 0x1d23f4u: goto label_1d23f4;
        case 0x1d23f8u: goto label_1d23f8;
        case 0x1d23fcu: goto label_1d23fc;
        case 0x1d2400u: goto label_1d2400;
        case 0x1d2404u: goto label_1d2404;
        case 0x1d2408u: goto label_1d2408;
        case 0x1d240cu: goto label_1d240c;
        case 0x1d2410u: goto label_1d2410;
        case 0x1d2414u: goto label_1d2414;
        case 0x1d2418u: goto label_1d2418;
        case 0x1d241cu: goto label_1d241c;
        case 0x1d2420u: goto label_1d2420;
        case 0x1d2424u: goto label_1d2424;
        case 0x1d2428u: goto label_1d2428;
        case 0x1d242cu: goto label_1d242c;
        case 0x1d2430u: goto label_1d2430;
        case 0x1d2434u: goto label_1d2434;
        case 0x1d2438u: goto label_1d2438;
        case 0x1d243cu: goto label_1d243c;
        case 0x1d2440u: goto label_1d2440;
        case 0x1d2444u: goto label_1d2444;
        case 0x1d2448u: goto label_1d2448;
        case 0x1d244cu: goto label_1d244c;
        case 0x1d2450u: goto label_1d2450;
        case 0x1d2454u: goto label_1d2454;
        case 0x1d2458u: goto label_1d2458;
        case 0x1d245cu: goto label_1d245c;
        case 0x1d2460u: goto label_1d2460;
        case 0x1d2464u: goto label_1d2464;
        case 0x1d2468u: goto label_1d2468;
        case 0x1d246cu: goto label_1d246c;
        case 0x1d2470u: goto label_1d2470;
        case 0x1d2474u: goto label_1d2474;
        case 0x1d2478u: goto label_1d2478;
        case 0x1d247cu: goto label_1d247c;
        case 0x1d2480u: goto label_1d2480;
        case 0x1d2484u: goto label_1d2484;
        case 0x1d2488u: goto label_1d2488;
        case 0x1d248cu: goto label_1d248c;
        case 0x1d2490u: goto label_1d2490;
        case 0x1d2494u: goto label_1d2494;
        case 0x1d2498u: goto label_1d2498;
        case 0x1d249cu: goto label_1d249c;
        case 0x1d24a0u: goto label_1d24a0;
        case 0x1d24a4u: goto label_1d24a4;
        case 0x1d24a8u: goto label_1d24a8;
        case 0x1d24acu: goto label_1d24ac;
        case 0x1d24b0u: goto label_1d24b0;
        case 0x1d24b4u: goto label_1d24b4;
        case 0x1d24b8u: goto label_1d24b8;
        case 0x1d24bcu: goto label_1d24bc;
        case 0x1d24c0u: goto label_1d24c0;
        case 0x1d24c4u: goto label_1d24c4;
        case 0x1d24c8u: goto label_1d24c8;
        case 0x1d24ccu: goto label_1d24cc;
        case 0x1d24d0u: goto label_1d24d0;
        case 0x1d24d4u: goto label_1d24d4;
        case 0x1d24d8u: goto label_1d24d8;
        case 0x1d24dcu: goto label_1d24dc;
        case 0x1d24e0u: goto label_1d24e0;
        case 0x1d24e4u: goto label_1d24e4;
        case 0x1d24e8u: goto label_1d24e8;
        case 0x1d24ecu: goto label_1d24ec;
        case 0x1d24f0u: goto label_1d24f0;
        case 0x1d24f4u: goto label_1d24f4;
        case 0x1d24f8u: goto label_1d24f8;
        case 0x1d24fcu: goto label_1d24fc;
        case 0x1d2500u: goto label_1d2500;
        case 0x1d2504u: goto label_1d2504;
        case 0x1d2508u: goto label_1d2508;
        case 0x1d250cu: goto label_1d250c;
        case 0x1d2510u: goto label_1d2510;
        case 0x1d2514u: goto label_1d2514;
        case 0x1d2518u: goto label_1d2518;
        case 0x1d251cu: goto label_1d251c;
        case 0x1d2520u: goto label_1d2520;
        case 0x1d2524u: goto label_1d2524;
        case 0x1d2528u: goto label_1d2528;
        case 0x1d252cu: goto label_1d252c;
        case 0x1d2530u: goto label_1d2530;
        case 0x1d2534u: goto label_1d2534;
        case 0x1d2538u: goto label_1d2538;
        case 0x1d253cu: goto label_1d253c;
        case 0x1d2540u: goto label_1d2540;
        case 0x1d2544u: goto label_1d2544;
        case 0x1d2548u: goto label_1d2548;
        case 0x1d254cu: goto label_1d254c;
        case 0x1d2550u: goto label_1d2550;
        case 0x1d2554u: goto label_1d2554;
        case 0x1d2558u: goto label_1d2558;
        case 0x1d255cu: goto label_1d255c;
        case 0x1d2560u: goto label_1d2560;
        case 0x1d2564u: goto label_1d2564;
        case 0x1d2568u: goto label_1d2568;
        case 0x1d256cu: goto label_1d256c;
        case 0x1d2570u: goto label_1d2570;
        case 0x1d2574u: goto label_1d2574;
        case 0x1d2578u: goto label_1d2578;
        case 0x1d257cu: goto label_1d257c;
        case 0x1d2580u: goto label_1d2580;
        case 0x1d2584u: goto label_1d2584;
        case 0x1d2588u: goto label_1d2588;
        case 0x1d258cu: goto label_1d258c;
        case 0x1d2590u: goto label_1d2590;
        case 0x1d2594u: goto label_1d2594;
        case 0x1d2598u: goto label_1d2598;
        case 0x1d259cu: goto label_1d259c;
        case 0x1d25a0u: goto label_1d25a0;
        case 0x1d25a4u: goto label_1d25a4;
        case 0x1d25a8u: goto label_1d25a8;
        case 0x1d25acu: goto label_1d25ac;
        case 0x1d25b0u: goto label_1d25b0;
        case 0x1d25b4u: goto label_1d25b4;
        case 0x1d25b8u: goto label_1d25b8;
        case 0x1d25bcu: goto label_1d25bc;
        case 0x1d25c0u: goto label_1d25c0;
        case 0x1d25c4u: goto label_1d25c4;
        case 0x1d25c8u: goto label_1d25c8;
        case 0x1d25ccu: goto label_1d25cc;
        case 0x1d25d0u: goto label_1d25d0;
        case 0x1d25d4u: goto label_1d25d4;
        case 0x1d25d8u: goto label_1d25d8;
        case 0x1d25dcu: goto label_1d25dc;
        case 0x1d25e0u: goto label_1d25e0;
        case 0x1d25e4u: goto label_1d25e4;
        case 0x1d25e8u: goto label_1d25e8;
        case 0x1d25ecu: goto label_1d25ec;
        case 0x1d25f0u: goto label_1d25f0;
        case 0x1d25f4u: goto label_1d25f4;
        case 0x1d25f8u: goto label_1d25f8;
        case 0x1d25fcu: goto label_1d25fc;
        default: break;
    }

    ctx->pc = 0x1d2208u;

label_1d2208:
    // 0x1d2208: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1d2208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1d220c:
    // 0x1d220c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1d220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1d2210:
    // 0x1d2210: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d2210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1d2214:
    // 0x1d2214: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d2214u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d2218:
    // 0x1d2218: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1d2218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1d221c:
    // 0x1d221c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1d221cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2220:
    // 0x1d2220: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1d2220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1d2224:
    // 0x1d2224: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1d2224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1d2228:
    // 0x1d2228: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1d2228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1d222c:
    // 0x1d222c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1d222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1d2230:
    // 0x1d2230: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1d2230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1d2234:
    // 0x1d2234: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d2234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1d2238:
    // 0x1d2238: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1d2238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1d223c:
    // 0x1d223c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1d223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d2240:
    // 0x1d2240: 0x2442fff3  addiu       $v0, $v0, -0xD
    ctx->pc = 0x1d2240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
label_1d2244:
    // 0x1d2244: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d2244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d2248:
    // 0x1d2248: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_1d224c:
    if (ctx->pc == 0x1D224Cu) {
        ctx->pc = 0x1D224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2248u;
        // 0x1d224c: 0xafa60060  sw          $a2, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2250u;
        goto label_1d2250;
    }
    ctx->pc = 0x1D2248u;
    {
        const bool branch_taken_0x1d2248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2248u;
        // 0x1d224c: 0xafa60060  sw          $a2, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2248) {
            ctx->pc = 0x1D25C8u;
            goto label_1d25c8;
        }
    }
    ctx->pc = 0x1D2250u;
label_1d2250:
    // 0x1d2250: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1d2250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1d2254:
    // 0x1d2254: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d2254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d2258:
    // 0x1d2258: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_1d225c:
    if (ctx->pc == 0x1D225Cu) {
        ctx->pc = 0x1D225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2258u;
        // 0x1d225c: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2260u;
        goto label_1d2260;
    }
    ctx->pc = 0x1D2258u;
    {
        const bool branch_taken_0x1d2258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d2258) {
            ctx->pc = 0x1D225Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2258u;
            // 0x1d225c: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2270u;
            goto label_1d2270;
        }
    }
    ctx->pc = 0x1D2260u;
label_1d2260:
    // 0x1d2260: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d2260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d2264:
    // 0x1d2264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2268:
    // 0x1d2268: 0xac629b60  sw          $v0, -0x64A0($v1)
    ctx->pc = 0x1d2268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941536), GPR_U32(ctx, 2));
label_1d226c:
    // 0x1d226c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1d226cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d2270:
    // 0x1d2270: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1d2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d2274:
    // 0x1d2274: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x1d2274u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
label_1d2278:
    // 0x1d2278: 0x146200c5  bne         $v1, $v0, . + 4 + (0xC5 << 2)
label_1d227c:
    if (ctx->pc == 0x1D227Cu) {
        ctx->pc = 0x1D227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2278u;
        // 0x1d227c: 0x3c1e0034  lui         $fp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2280u;
        goto label_1d2280;
    }
    ctx->pc = 0x1D2278u;
    {
        const bool branch_taken_0x1d2278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2278u;
        // 0x1d227c: 0x3c1e0034  lui         $fp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2278) {
            ctx->pc = 0x1D2590u;
            goto label_1d2590;
        }
    }
    ctx->pc = 0x1D2280u;
label_1d2280:
    // 0x1d2280: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d2284:
    // 0x1d2284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d2284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2288:
    // 0x1d2288: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1d2288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
label_1d228c:
    // 0x1d228c: 0xc06bede  jal         func_1AFB78
label_1d2290:
    if (ctx->pc == 0x1D2290u) {
        ctx->pc = 0x1D2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D228Cu;
        // 0x1d2290: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2294u;
        goto label_1d2294;
    }
    ctx->pc = 0x1D228Cu;
    SET_GPR_U32(ctx, 31, 0x1D2294u);
    ctx->pc = 0x1D2290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D228Cu;
    // 0x1d2290: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1D228Cu, 0x1D2294u)) {
        return;
    }
    ctx->pc = 0x1D2294u;
label_1d2294:
    // 0x1d2294: 0xc07d234  jal         func_1F48D0
label_1d2298:
    if (ctx->pc == 0x1D2298u) {
        ctx->pc = 0x1D2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2294u;
        // 0x1d2298: 0x8ed09b70  lw          $s0, -0x6490($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D229Cu;
        goto label_1d229c;
    }
    ctx->pc = 0x1D2294u;
    SET_GPR_U32(ctx, 31, 0x1D229Cu);
    ctx->pc = 0x1D2298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2294u;
    // 0x1d2298: 0x8ed09b70  lw          $s0, -0x6490($s6) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D2294u, 0x1D229Cu)) {
        return;
    }
    ctx->pc = 0x1D229Cu;
label_1d229c:
    // 0x1d229c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d229cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d22a0:
    // 0x1d22a0: 0xc07d576  jal         func_1F55D8
label_1d22a4:
    if (ctx->pc == 0x1D22A4u) {
        ctx->pc = 0x1D22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22A0u;
        // 0x1d22a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22A8u;
        goto label_1d22a8;
    }
    ctx->pc = 0x1D22A0u;
    SET_GPR_U32(ctx, 31, 0x1D22A8u);
    ctx->pc = 0x1D22A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22A0u;
    // 0x1d22a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F55D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F55D8u, 0x1D22A0u, 0x1D22A8u)) {
        return;
    }
    ctx->pc = 0x1D22A8u;
label_1d22a8:
    // 0x1d22a8: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
label_1d22ac:
    if (ctx->pc == 0x1D22ACu) {
        ctx->pc = 0x1D22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22A8u;
        // 0x1d22ac: 0x3c11006a  lui         $s1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22B0u;
        goto label_1d22b0;
    }
    ctx->pc = 0x1D22A8u;
    {
        const bool branch_taken_0x1d22a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22A8u;
        // 0x1d22ac: 0x3c11006a  lui         $s1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22a8) {
            ctx->pc = 0x1D2590u;
            goto label_1d2590;
        }
    }
    ctx->pc = 0x1D22B0u;
label_1d22b0:
    // 0x1d22b0: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1d22b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
label_1d22b4:
    // 0x1d22b4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1d22b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_1d22b8:
    // 0x1d22b8: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1d22b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d22bc:
    // 0x1d22bc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1d22bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d22c0:
    // 0x1d22c0: 0xc07d234  jal         func_1F48D0
label_1d22c4:
    if (ctx->pc == 0x1D22C4u) {
        ctx->pc = 0x1D22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22C0u;
        // 0x1d22c4: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22C8u;
        goto label_1d22c8;
    }
    ctx->pc = 0x1D22C0u;
    SET_GPR_U32(ctx, 31, 0x1D22C8u);
    ctx->pc = 0x1D22C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22C0u;
    // 0x1d22c4: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D22C0u, 0x1D22C8u)) {
        return;
    }
    ctx->pc = 0x1D22C8u;
label_1d22c8:
    // 0x1d22c8: 0x26100dc0  addiu       $s0, $s0, 0xDC0
    ctx->pc = 0x1d22c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3520));
label_1d22cc:
    // 0x1d22cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d22d0:
    if (ctx->pc == 0x1D22D0u) {
        ctx->pc = 0x1D22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22CCu;
        // 0x1d22d0: 0x26310dc8  addiu       $s1, $s1, 0xDC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22D4u;
        goto label_1d22d4;
    }
    ctx->pc = 0x1D22CCu;
    {
        const bool branch_taken_0x1d22cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22CCu;
        // 0x1d22d0: 0x26310dc8  addiu       $s1, $s1, 0xDC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22cc) {
            ctx->pc = 0x1D2300u;
            goto label_1d2300;
        }
    }
    ctx->pc = 0x1D22D4u;
label_1d22d4:
    // 0x1d22d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d22d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d22d8:
    // 0x1d22d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d22d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d22dc:
    // 0x1d22dc: 0xc07d3d6  jal         func_1F4F58
label_1d22e0:
    if (ctx->pc == 0x1D22E0u) {
        ctx->pc = 0x1D22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22DCu;
        // 0x1d22e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22E4u;
        goto label_1d22e4;
    }
    ctx->pc = 0x1D22DCu;
    SET_GPR_U32(ctx, 31, 0x1D22E4u);
    ctx->pc = 0x1D22E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22DCu;
    // 0x1d22e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1D22DCu, 0x1D22E4u)) {
        return;
    }
    ctx->pc = 0x1D22E4u;
label_1d22e4:
    // 0x1d22e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d22e8:
    if (ctx->pc == 0x1D22E8u) {
        ctx->pc = 0x1D22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22E4u;
        // 0x1d22e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22ECu;
        goto label_1d22ec;
    }
    ctx->pc = 0x1D22E4u;
    {
        const bool branch_taken_0x1d22e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22E4u;
        // 0x1d22e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22e4) {
            ctx->pc = 0x1D2300u;
            goto label_1d2300;
        }
    }
    ctx->pc = 0x1D22ECu;
label_1d22ec:
    // 0x1d22ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d22ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d22f0:
    // 0x1d22f0: 0xc07d348  jal         func_1F4D20
label_1d22f4:
    if (ctx->pc == 0x1D22F4u) {
        ctx->pc = 0x1D22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22F0u;
        // 0x1d22f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22F8u;
        goto label_1d22f8;
    }
    ctx->pc = 0x1D22F0u;
    SET_GPR_U32(ctx, 31, 0x1D22F8u);
    ctx->pc = 0x1D22F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22F0u;
    // 0x1d22f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1D22F0u, 0x1D22F8u)) {
        return;
    }
    ctx->pc = 0x1D22F8u;
label_1d22f8:
    // 0x1d22f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d22fc:
    if (ctx->pc == 0x1D22FCu) {
        ctx->pc = 0x1D22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22F8u;
        // 0x1d22fc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2300u;
        goto label_1d2300;
    }
    ctx->pc = 0x1D22F8u;
    {
        const bool branch_taken_0x1d22f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22F8u;
        // 0x1d22fc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22f8) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D2300u;
label_1d2300:
    // 0x1d2300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2304:
    // 0x1d2304: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1d2308:
    if (ctx->pc == 0x1D2308u) {
        ctx->pc = 0x1D2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2304u;
        // 0x1d2308: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D230Cu;
        goto label_1d230c;
    }
    ctx->pc = 0x1D2304u;
    {
        const bool branch_taken_0x1d2304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2304u;
        // 0x1d2308: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2304) {
            ctx->pc = 0x1D2394u;
            goto label_1d2394;
        }
    }
    ctx->pc = 0x1D230Cu;
label_1d230c:
    // 0x1d230c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1d2310:
    if (ctx->pc == 0x1D2310u) {
        ctx->pc = 0x1D2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D230Cu;
        // 0x1d2310: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2314u;
        goto label_1d2314;
    }
    ctx->pc = 0x1D230Cu;
    {
        const bool branch_taken_0x1d230c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D230Cu;
        // 0x1d2310: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d230c) {
            ctx->pc = 0x1D2394u;
            goto label_1d2394;
        }
    }
    ctx->pc = 0x1D2314u;
label_1d2314:
    // 0x1d2314: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d2314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1d2318:
    // 0x1d2318: 0x8c4586d0  lw          $a1, -0x7930($v0)
    ctx->pc = 0x1d2318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936272)));
label_1d231c:
    // 0x1d231c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1d2320:
    // 0x1d2320: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_1d2324:
    if (ctx->pc == 0x1D2324u) {
        ctx->pc = 0x1D2328u;
        goto label_1d2328;
    }
    ctx->pc = 0x1D2320u;
    {
        const bool branch_taken_0x1d2320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d2320) {
            ctx->pc = 0x1D2340u;
            goto label_1d2340;
        }
    }
    ctx->pc = 0x1D2328u;
label_1d2328:
    // 0x1d2328: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d2328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d232c:
    // 0x1d232c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2330:
    if (ctx->pc == 0x1D2330u) {
        ctx->pc = 0x1D2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D232Cu;
        // 0x1d2330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2334u;
        goto label_1d2334;
    }
    ctx->pc = 0x1D232Cu;
    {
        const bool branch_taken_0x1d232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D232Cu;
        // 0x1d2330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d232c) {
            ctx->pc = 0x1D2340u;
            goto label_1d2340;
        }
    }
    ctx->pc = 0x1D2334u;
label_1d2334:
    // 0x1d2334: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d2334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1d2338:
    // 0x1d2338: 0xc07fd18  jal         func_1FF460
label_1d233c:
    if (ctx->pc == 0x1D233Cu) {
        ctx->pc = 0x1D233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2338u;
        // 0x1d233c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2340u;
        goto label_1d2340;
    }
    ctx->pc = 0x1D2338u;
    SET_GPR_U32(ctx, 31, 0x1D2340u);
    ctx->pc = 0x1D233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2338u;
    // 0x1d233c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D2338u, 0x1D2340u)) {
        return;
    }
    ctx->pc = 0x1D2340u;
label_1d2340:
    // 0x1d2340: 0xc07d234  jal         func_1F48D0
label_1d2344:
    if (ctx->pc == 0x1D2344u) {
        ctx->pc = 0x1D2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2340u;
        // 0x1d2344: 0x26700dc0  addiu       $s0, $s3, 0xDC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2348u;
        goto label_1d2348;
    }
    ctx->pc = 0x1D2340u;
    SET_GPR_U32(ctx, 31, 0x1D2348u);
    ctx->pc = 0x1D2344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2340u;
    // 0x1d2344: 0x26700dc0  addiu       $s0, $s3, 0xDC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D2340u, 0x1D2348u)) {
        return;
    }
    ctx->pc = 0x1D2348u;
label_1d2348:
    // 0x1d2348: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d234c:
    if (ctx->pc == 0x1D234Cu) {
        ctx->pc = 0x1D234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2348u;
        // 0x1d234c: 0x26910dc8  addiu       $s1, $s4, 0xDC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 3528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2350u;
        goto label_1d2350;
    }
    ctx->pc = 0x1D2348u;
    {
        const bool branch_taken_0x1d2348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2348u;
        // 0x1d234c: 0x26910dc8  addiu       $s1, $s4, 0xDC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 3528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2348) {
            ctx->pc = 0x1D2374u;
            goto label_1d2374;
        }
    }
    ctx->pc = 0x1D2350u;
label_1d2350:
    // 0x1d2350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2354:
    // 0x1d2354: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2358:
    // 0x1d2358: 0xc07d3d6  jal         func_1F4F58
label_1d235c:
    if (ctx->pc == 0x1D235Cu) {
        ctx->pc = 0x1D235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2358u;
        // 0x1d235c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2360u;
        goto label_1d2360;
    }
    ctx->pc = 0x1D2358u;
    SET_GPR_U32(ctx, 31, 0x1D2360u);
    ctx->pc = 0x1D235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2358u;
    // 0x1d235c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1D2358u, 0x1D2360u)) {
        return;
    }
    ctx->pc = 0x1D2360u;
label_1d2360:
    // 0x1d2360: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2364:
    if (ctx->pc == 0x1D2364u) {
        ctx->pc = 0x1D2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2360u;
        // 0x1d2364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2368u;
        goto label_1d2368;
    }
    ctx->pc = 0x1D2360u;
    {
        const bool branch_taken_0x1d2360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2360u;
        // 0x1d2364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2360) {
            ctx->pc = 0x1D2374u;
            goto label_1d2374;
        }
    }
    ctx->pc = 0x1D2368u;
label_1d2368:
    // 0x1d2368: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d2368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d236c:
    // 0x1d236c: 0xc07d2ee  jal         func_1F4BB8
label_1d2370:
    if (ctx->pc == 0x1D2370u) {
        ctx->pc = 0x1D2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D236Cu;
        // 0x1d2370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2374u;
        goto label_1d2374;
    }
    ctx->pc = 0x1D236Cu;
    SET_GPR_U32(ctx, 31, 0x1D2374u);
    ctx->pc = 0x1D2370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D236Cu;
    // 0x1d2370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1D236Cu, 0x1D2374u)) {
        return;
    }
    ctx->pc = 0x1D2374u;
label_1d2374:
    // 0x1d2374: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d2374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2378:
    // 0x1d2378: 0xc05f910  jal         func_17E440
label_1d237c:
    if (ctx->pc == 0x1D237Cu) {
        ctx->pc = 0x1D237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2378u;
        // 0x1d237c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2380u;
        goto label_1d2380;
    }
    ctx->pc = 0x1D2378u;
    SET_GPR_U32(ctx, 31, 0x1D2380u);
    ctx->pc = 0x1D237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2378u;
    // 0x1d237c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1D2378u, 0x1D2380u)) {
        return;
    }
    ctx->pc = 0x1D2380u;
label_1d2380:
    // 0x1d2380: 0xc073dd2  jal         func_1CF748
label_1d2384:
    if (ctx->pc == 0x1D2384u) {
        ctx->pc = 0x1D2388u;
        goto label_1d2388;
    }
    ctx->pc = 0x1D2380u;
    SET_GPR_U32(ctx, 31, 0x1D2388u);
    ctx->pc = 0x1CF748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CF748u, 0x1D2380u, 0x1D2388u)) {
        return;
    }
    ctx->pc = 0x1D2388u;
label_1d2388:
    // 0x1d2388: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d2388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d238c:
    // 0x1d238c: 0x10000080  b           . + 4 + (0x80 << 2)
label_1d2390:
    if (ctx->pc == 0x1D2390u) {
        ctx->pc = 0x1D2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D238Cu;
        // 0x1d2390: 0xac40882c  sw          $zero, -0x77D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2394u;
        goto label_1d2394;
    }
    ctx->pc = 0x1D238Cu;
    {
        const bool branch_taken_0x1d238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D238Cu;
        // 0x1d2390: 0xac40882c  sw          $zero, -0x77D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d238c) {
            ctx->pc = 0x1D2590u;
            goto label_1d2590;
        }
    }
    ctx->pc = 0x1D2394u;
label_1d2394:
    // 0x1d2394: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1d2394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_1d2398:
    // 0x1d2398: 0x27b20054  addiu       $s2, $sp, 0x54
    ctx->pc = 0x1d2398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1d239c:
    // 0x1d239c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1d239cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_1d23a0:
    // 0x1d23a0: 0xc04e448  jal         func_139120
label_1d23a4:
    if (ctx->pc == 0x1D23A4u) {
        ctx->pc = 0x1D23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23A0u;
        // 0x1d23a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23A8u;
        goto label_1d23a8;
    }
    ctx->pc = 0x1D23A0u;
    SET_GPR_U32(ctx, 31, 0x1D23A8u);
    ctx->pc = 0x1D23A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23A0u;
    // 0x1d23a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1D23A0u, 0x1D23A8u)) {
        return;
    }
    ctx->pc = 0x1D23A8u;
label_1d23a8:
    // 0x1d23a8: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1d23a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
label_1d23ac:
    // 0x1d23ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d23acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d23b0:
    // 0x1d23b0: 0xc07d234  jal         func_1F48D0
label_1d23b4:
    if (ctx->pc == 0x1D23B4u) {
        ctx->pc = 0x1D23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23B0u;
        // 0x1d23b4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23B8u;
        goto label_1d23b8;
    }
    ctx->pc = 0x1D23B0u;
    SET_GPR_U32(ctx, 31, 0x1D23B8u);
    ctx->pc = 0x1D23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23B0u;
    // 0x1d23b4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D23B0u, 0x1D23B8u)) {
        return;
    }
    ctx->pc = 0x1D23B8u;
label_1d23b8:
    // 0x1d23b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d23bc:
    if (ctx->pc == 0x1D23BCu) {
        ctx->pc = 0x1D23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23B8u;
        // 0x1d23bc: 0x26100dd0  addiu       $s0, $s0, 0xDD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23C0u;
        goto label_1d23c0;
    }
    ctx->pc = 0x1D23B8u;
    {
        const bool branch_taken_0x1d23b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23B8u;
        // 0x1d23bc: 0x26100dd0  addiu       $s0, $s0, 0xDD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23b8) {
            ctx->pc = 0x1D23E4u;
            goto label_1d23e4;
        }
    }
    ctx->pc = 0x1D23C0u;
label_1d23c0:
    // 0x1d23c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d23c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d23c4:
    // 0x1d23c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d23c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d23c8:
    // 0x1d23c8: 0xc07d3d6  jal         func_1F4F58
label_1d23cc:
    if (ctx->pc == 0x1D23CCu) {
        ctx->pc = 0x1D23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23C8u;
        // 0x1d23cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23D0u;
        goto label_1d23d0;
    }
    ctx->pc = 0x1D23C8u;
    SET_GPR_U32(ctx, 31, 0x1D23D0u);
    ctx->pc = 0x1D23CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23C8u;
    // 0x1d23cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1D23C8u, 0x1D23D0u)) {
        return;
    }
    ctx->pc = 0x1D23D0u;
label_1d23d0:
    // 0x1d23d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d23d4:
    if (ctx->pc == 0x1D23D4u) {
        ctx->pc = 0x1D23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23D0u;
        // 0x1d23d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23D8u;
        goto label_1d23d8;
    }
    ctx->pc = 0x1D23D0u;
    {
        const bool branch_taken_0x1d23d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23D0u;
        // 0x1d23d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23d0) {
            ctx->pc = 0x1D23E4u;
            goto label_1d23e4;
        }
    }
    ctx->pc = 0x1D23D8u;
label_1d23d8:
    // 0x1d23d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d23d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d23dc:
    // 0x1d23dc: 0xc07d374  jal         func_1F4DD0
label_1d23e0:
    if (ctx->pc == 0x1D23E0u) {
        ctx->pc = 0x1D23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23DCu;
        // 0x1d23e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23E4u;
        goto label_1d23e4;
    }
    ctx->pc = 0x1D23DCu;
    SET_GPR_U32(ctx, 31, 0x1D23E4u);
    ctx->pc = 0x1D23E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23DCu;
    // 0x1d23e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DD0u, 0x1D23DCu, 0x1D23E4u)) {
        return;
    }
    ctx->pc = 0x1D23E4u;
label_1d23e4:
    // 0x1d23e4: 0x27b20058  addiu       $s2, $sp, 0x58
    ctx->pc = 0x1d23e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1d23e8:
    // 0x1d23e8: 0xc04e448  jal         func_139120
label_1d23ec:
    if (ctx->pc == 0x1D23ECu) {
        ctx->pc = 0x1D23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23E8u;
        // 0x1d23ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23F0u;
        goto label_1d23f0;
    }
    ctx->pc = 0x1D23E8u;
    SET_GPR_U32(ctx, 31, 0x1D23F0u);
    ctx->pc = 0x1D23ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23E8u;
    // 0x1d23ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1D23E8u, 0x1D23F0u)) {
        return;
    }
    ctx->pc = 0x1D23F0u;
label_1d23f0:
    // 0x1d23f0: 0x26700dd0  addiu       $s0, $s3, 0xDD0
    ctx->pc = 0x1d23f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3536));
label_1d23f4:
    // 0x1d23f4: 0xc07d234  jal         func_1F48D0
label_1d23f8:
    if (ctx->pc == 0x1D23F8u) {
        ctx->pc = 0x1D23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23F4u;
        // 0x1d23f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23FCu;
        goto label_1d23fc;
    }
    ctx->pc = 0x1D23F4u;
    SET_GPR_U32(ctx, 31, 0x1D23FCu);
    ctx->pc = 0x1D23F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23F4u;
    // 0x1d23f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D23F4u, 0x1D23FCu)) {
        return;
    }
    ctx->pc = 0x1D23FCu;
label_1d23fc:
    // 0x1d23fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d2400:
    if (ctx->pc == 0x1D2400u) {
        ctx->pc = 0x1D2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23FCu;
        // 0x1d2400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2404u;
        goto label_1d2404;
    }
    ctx->pc = 0x1D23FCu;
    {
        const bool branch_taken_0x1d23fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23FCu;
        // 0x1d2400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23fc) {
            ctx->pc = 0x1D2424u;
            goto label_1d2424;
        }
    }
    ctx->pc = 0x1D2404u;
label_1d2404:
    // 0x1d2404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2408:
    // 0x1d2408: 0xc07d3d6  jal         func_1F4F58
label_1d240c:
    if (ctx->pc == 0x1D240Cu) {
        ctx->pc = 0x1D240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2408u;
        // 0x1d240c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2410u;
        goto label_1d2410;
    }
    ctx->pc = 0x1D2408u;
    SET_GPR_U32(ctx, 31, 0x1D2410u);
    ctx->pc = 0x1D240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2408u;
    // 0x1d240c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1D2408u, 0x1D2410u)) {
        return;
    }
    ctx->pc = 0x1D2410u;
label_1d2410:
    // 0x1d2410: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2414:
    if (ctx->pc == 0x1D2414u) {
        ctx->pc = 0x1D2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2410u;
        // 0x1d2414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2418u;
        goto label_1d2418;
    }
    ctx->pc = 0x1D2410u;
    {
        const bool branch_taken_0x1d2410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2410u;
        // 0x1d2414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2410) {
            ctx->pc = 0x1D2424u;
            goto label_1d2424;
        }
    }
    ctx->pc = 0x1D2418u;
label_1d2418:
    // 0x1d2418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d2418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d241c:
    // 0x1d241c: 0xc07d374  jal         func_1F4DD0
label_1d2420:
    if (ctx->pc == 0x1D2420u) {
        ctx->pc = 0x1D2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D241Cu;
        // 0x1d2420: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2424u;
        goto label_1d2424;
    }
    ctx->pc = 0x1D241Cu;
    SET_GPR_U32(ctx, 31, 0x1D2424u);
    ctx->pc = 0x1D2420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D241Cu;
    // 0x1d2420: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DD0u, 0x1D241Cu, 0x1D2424u)) {
        return;
    }
    ctx->pc = 0x1D2424u;
label_1d2424:
    // 0x1d2424: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1d2424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1d2428:
    // 0x1d2428: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_1d242c:
    if (ctx->pc == 0x1D242Cu) {
        ctx->pc = 0x1D242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2428u;
        // 0x1d242c: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2430u;
        goto label_1d2430;
    }
    ctx->pc = 0x1D2428u;
    {
        const bool branch_taken_0x1d2428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2428u;
        // 0x1d242c: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2428) {
            ctx->pc = 0x1D2590u;
            goto label_1d2590;
        }
    }
    ctx->pc = 0x1D2430u;
label_1d2430:
    // 0x1d2430: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_1d2434:
    if (ctx->pc == 0x1D2434u) {
        ctx->pc = 0x1D2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2430u;
        // 0x1d2434: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2438u;
        goto label_1d2438;
    }
    ctx->pc = 0x1D2430u;
    {
        const bool branch_taken_0x1d2430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2430u;
        // 0x1d2434: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2430) {
            ctx->pc = 0x1D2590u;
            goto label_1d2590;
        }
    }
    ctx->pc = 0x1D2438u;
label_1d2438:
    // 0x1d2438: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d2438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1d243c:
    // 0x1d243c: 0x8c4586d0  lw          $a1, -0x7930($v0)
    ctx->pc = 0x1d243cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936272)));
label_1d2440:
    // 0x1d2440: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d2440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1d2444:
    // 0x1d2444: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1d2448:
    if (ctx->pc == 0x1D2448u) {
        ctx->pc = 0x1D2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2444u;
        // 0x1d2448: 0x27a2005c  addiu       $v0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D244Cu;
        goto label_1d244c;
    }
    ctx->pc = 0x1D2444u;
    {
        const bool branch_taken_0x1d2444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2444u;
        // 0x1d2448: 0x27a2005c  addiu       $v0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2444) {
            ctx->pc = 0x1D2468u;
            goto label_1d2468;
        }
    }
    ctx->pc = 0x1D244Cu;
label_1d244c:
    // 0x1d244c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d2450:
    // 0x1d2450: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2454:
    if (ctx->pc == 0x1D2454u) {
        ctx->pc = 0x1D2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2450u;
        // 0x1d2454: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2458u;
        goto label_1d2458;
    }
    ctx->pc = 0x1D2450u;
    {
        const bool branch_taken_0x1d2450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2450u;
        // 0x1d2454: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2450) {
            ctx->pc = 0x1D2464u;
            goto label_1d2464;
        }
    }
    ctx->pc = 0x1D2458u;
label_1d2458:
    // 0x1d2458: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d2458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1d245c:
    // 0x1d245c: 0xc07fd18  jal         func_1FF460
label_1d2460:
    if (ctx->pc == 0x1D2460u) {
        ctx->pc = 0x1D2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D245Cu;
        // 0x1d2460: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2464u;
        goto label_1d2464;
    }
    ctx->pc = 0x1D245Cu;
    SET_GPR_U32(ctx, 31, 0x1D2464u);
    ctx->pc = 0x1D2460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D245Cu;
    // 0x1d2460: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D245Cu, 0x1D2464u)) {
        return;
    }
    ctx->pc = 0x1D2464u;
label_1d2464:
    // 0x1d2464: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x1d2464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1d2468:
    // 0x1d2468: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x1d2468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_1d246c:
    // 0x1d246c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1d246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d2470:
    // 0x1d2470: 0xc04e448  jal         func_139120
label_1d2474:
    if (ctx->pc == 0x1D2474u) {
        ctx->pc = 0x1D2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2470u;
        // 0x1d2474: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2478u;
        goto label_1d2478;
    }
    ctx->pc = 0x1D2470u;
    SET_GPR_U32(ctx, 31, 0x1D2478u);
    ctx->pc = 0x1D2474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2470u;
    // 0x1d2474: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1D2470u, 0x1D2478u)) {
        return;
    }
    ctx->pc = 0x1D2478u;
label_1d2478:
    // 0x1d2478: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1d2478u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
label_1d247c:
    // 0x1d247c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d247cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2480:
    // 0x1d2480: 0xc07d234  jal         func_1F48D0
label_1d2484:
    if (ctx->pc == 0x1D2484u) {
        ctx->pc = 0x1D2484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2480u;
        // 0x1d2484: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2488u;
        goto label_1d2488;
    }
    ctx->pc = 0x1D2480u;
    SET_GPR_U32(ctx, 31, 0x1D2488u);
    ctx->pc = 0x1D2484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2480u;
    // 0x1d2484: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D2480u, 0x1D2488u)) {
        return;
    }
    ctx->pc = 0x1D2488u;
label_1d2488:
    // 0x1d2488: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1d248c:
    if (ctx->pc == 0x1D248Cu) {
        ctx->pc = 0x1D248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2488u;
        // 0x1d248c: 0x26100d88  addiu       $s0, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2490u;
        goto label_1d2490;
    }
    ctx->pc = 0x1D2488u;
    {
        const bool branch_taken_0x1d2488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2488u;
        // 0x1d248c: 0x26100d88  addiu       $s0, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2488) {
            ctx->pc = 0x1D24C0u;
            goto label_1d24c0;
        }
    }
    ctx->pc = 0x1D2490u;
label_1d2490:
    // 0x1d2490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2494:
    // 0x1d2494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2498:
    // 0x1d2498: 0xc07d3d6  jal         func_1F4F58
label_1d249c:
    if (ctx->pc == 0x1D249Cu) {
        ctx->pc = 0x1D249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2498u;
        // 0x1d249c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D24A0u;
        goto label_1d24a0;
    }
    ctx->pc = 0x1D2498u;
    SET_GPR_U32(ctx, 31, 0x1D24A0u);
    ctx->pc = 0x1D249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2498u;
    // 0x1d249c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1D2498u, 0x1D24A0u)) {
        return;
    }
    ctx->pc = 0x1D24A0u;
label_1d24a0:
    // 0x1d24a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d24a4:
    if (ctx->pc == 0x1D24A4u) {
        ctx->pc = 0x1D24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24A0u;
        // 0x1d24a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D24A8u;
        goto label_1d24a8;
    }
    ctx->pc = 0x1D24A0u;
    {
        const bool branch_taken_0x1d24a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24A0u;
        // 0x1d24a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24a0) {
            ctx->pc = 0x1D24C0u;
            goto label_1d24c0;
        }
    }
    ctx->pc = 0x1D24A8u;
label_1d24a8:
    // 0x1d24a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d24a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d24ac:
    // 0x1d24ac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d24acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d24b0:
    // 0x1d24b0: 0xc07d388  jal         func_1F4E20
label_1d24b4:
    if (ctx->pc == 0x1D24B4u) {
        ctx->pc = 0x1D24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24B0u;
        // 0x1d24b4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D24B8u;
        goto label_1d24b8;
    }
    ctx->pc = 0x1D24B0u;
    SET_GPR_U32(ctx, 31, 0x1D24B8u);
    ctx->pc = 0x1D24B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24B0u;
    // 0x1d24b4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4E20u, 0x1D24B0u, 0x1D24B8u)) {
        return;
    }
    ctx->pc = 0x1D24B8u;
label_1d24b8:
    // 0x1d24b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d24bc:
    if (ctx->pc == 0x1D24BCu) {
        ctx->pc = 0x1D24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24B8u;
        // 0x1d24bc: 0x2902b  sltu        $s2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D24C0u;
        goto label_1d24c0;
    }
    ctx->pc = 0x1D24B8u;
    {
        const bool branch_taken_0x1d24b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24B8u;
        // 0x1d24bc: 0x2902b  sltu        $s2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24b8) {
            ctx->pc = 0x1D24C4u;
            goto label_1d24c4;
        }
    }
    ctx->pc = 0x1D24C0u;
label_1d24c0:
    // 0x1d24c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d24c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d24c4:
    // 0x1d24c4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x1d24c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_1d24c8:
    // 0x1d24c8: 0xc04e448  jal         func_139120
label_1d24cc:
    if (ctx->pc == 0x1D24CCu) {
        ctx->pc = 0x1D24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24C8u;
        // 0x1d24cc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D24D0u;
        goto label_1d24d0;
    }
    ctx->pc = 0x1D24C8u;
    SET_GPR_U32(ctx, 31, 0x1D24D0u);
    ctx->pc = 0x1D24CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24C8u;
    // 0x1d24cc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1D24C8u, 0x1D24D0u)) {
        return;
    }
    ctx->pc = 0x1D24D0u;
label_1d24d0:
    // 0x1d24d0: 0x26700d88  addiu       $s0, $s3, 0xD88
    ctx->pc = 0x1d24d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3464));
label_1d24d4:
    // 0x1d24d4: 0xc07d234  jal         func_1F48D0
label_1d24d8:
    if (ctx->pc == 0x1D24D8u) {
        ctx->pc = 0x1D24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24D4u;
        // 0x1d24d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D24DCu;
        goto label_1d24dc;
    }
    ctx->pc = 0x1D24D4u;
    SET_GPR_U32(ctx, 31, 0x1D24DCu);
    ctx->pc = 0x1D24D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24D4u;
    // 0x1d24d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D24D4u, 0x1D24DCu)) {
        return;
    }
    ctx->pc = 0x1D24DCu;
label_1d24dc:
    // 0x1d24dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d24e0:
    if (ctx->pc == 0x1D24E0u) {
        ctx->pc = 0x1D24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24DCu;
        // 0x1d24e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D24E4u;
        goto label_1d24e4;
    }
    ctx->pc = 0x1D24DCu;
    {
        const bool branch_taken_0x1d24dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24DCu;
        // 0x1d24e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24dc) {
            ctx->pc = 0x1D2510u;
            goto label_1d2510;
        }
    }
    ctx->pc = 0x1D24E4u;
label_1d24e4:
    // 0x1d24e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d24e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d24e8:
    // 0x1d24e8: 0xc07d3d6  jal         func_1F4F58
label_1d24ec:
    if (ctx->pc == 0x1D24ECu) {
        ctx->pc = 0x1D24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24E8u;
        // 0x1d24ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D24F0u;
        goto label_1d24f0;
    }
    ctx->pc = 0x1D24E8u;
    SET_GPR_U32(ctx, 31, 0x1D24F0u);
    ctx->pc = 0x1D24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24E8u;
    // 0x1d24ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1D24E8u, 0x1D24F0u)) {
        return;
    }
    ctx->pc = 0x1D24F0u;
label_1d24f0:
    // 0x1d24f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d24f4:
    if (ctx->pc == 0x1D24F4u) {
        ctx->pc = 0x1D24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24F0u;
        // 0x1d24f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D24F8u;
        goto label_1d24f8;
    }
    ctx->pc = 0x1D24F0u;
    {
        const bool branch_taken_0x1d24f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24F0u;
        // 0x1d24f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24f0) {
            ctx->pc = 0x1D2510u;
            goto label_1d2510;
        }
    }
    ctx->pc = 0x1D24F8u;
label_1d24f8:
    // 0x1d24f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d24f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d24fc:
    // 0x1d24fc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d24fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d2500:
    // 0x1d2500: 0xc07d388  jal         func_1F4E20
label_1d2504:
    if (ctx->pc == 0x1D2504u) {
        ctx->pc = 0x1D2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2500u;
        // 0x1d2504: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2508u;
        goto label_1d2508;
    }
    ctx->pc = 0x1D2500u;
    SET_GPR_U32(ctx, 31, 0x1D2508u);
    ctx->pc = 0x1D2504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2500u;
    // 0x1d2504: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4E20u, 0x1D2500u, 0x1D2508u)) {
        return;
    }
    ctx->pc = 0x1D2508u;
label_1d2508:
    // 0x1d2508: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d250c:
    if (ctx->pc == 0x1D250Cu) {
        ctx->pc = 0x1D250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2508u;
        // 0x1d250c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2510u;
        goto label_1d2510;
    }
    ctx->pc = 0x1D2508u;
    {
        const bool branch_taken_0x1d2508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2508u;
        // 0x1d250c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2508) {
            ctx->pc = 0x1D2514u;
            goto label_1d2514;
        }
    }
    ctx->pc = 0x1D2510u;
label_1d2510:
    // 0x1d2510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2514:
    // 0x1d2514: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1d2518:
    if (ctx->pc == 0x1D2518u) {
        ctx->pc = 0x1D2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2514u;
        // 0x1d2518: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D251Cu;
        goto label_1d251c;
    }
    ctx->pc = 0x1D2514u;
    {
        const bool branch_taken_0x1d2514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2514u;
        // 0x1d2518: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2514) {
            ctx->pc = 0x1D2588u;
            goto label_1d2588;
        }
    }
    ctx->pc = 0x1D251Cu;
label_1d251c:
    // 0x1d251c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_1d2520:
    if (ctx->pc == 0x1D2520u) {
        ctx->pc = 0x1D2524u;
        goto label_1d2524;
    }
    ctx->pc = 0x1D251Cu;
    {
        const bool branch_taken_0x1d251c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d251c) {
            ctx->pc = 0x1D2588u;
            goto label_1d2588;
        }
    }
    ctx->pc = 0x1D2524u;
label_1d2524:
    // 0x1d2524: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d2524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d2528:
    // 0x1d2528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d2528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d252c:
    // 0x1d252c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1d252cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1d2530:
    // 0x1d2530: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1d2530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d2534:
    // 0x1d2534: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1d2534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1d2538:
    // 0x1d2538: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x1d2538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d253c:
    // 0x1d253c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2540:
    // 0x1d2540: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1d2540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d2544:
    // 0x1d2544: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1d2544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2548:
    // 0x1d2548: 0x46012902  mul.s       $f4, $f5, $f1
    ctx->pc = 0x1d2548u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_1d254c:
    // 0x1d254c: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x1d254cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1d2550:
    // 0x1d2550: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d2550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d2554:
    // 0x1d2554: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1d2554u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_1d2558:
    // 0x1d2558: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x1d2558u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d255c:
    // 0x1d255c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x1d255cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1d2560:
    // 0x1d2560: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1d2560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1d2564:
    // 0x1d2564: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x1d2564u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1d2568:
    // 0x1d2568: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x1d2568u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d256c:
    // 0x1d256c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1d256cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d2570:
    // 0x1d2570: 0xc092d94  jal         func_24B650
label_1d2574:
    if (ctx->pc == 0x1D2574u) {
        ctx->pc = 0x1D2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2570u;
        // 0x1d2574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2578u;
        goto label_1d2578;
    }
    ctx->pc = 0x1D2570u;
    SET_GPR_U32(ctx, 31, 0x1D2578u);
    ctx->pc = 0x1D2574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2570u;
    // 0x1d2574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x1D2570u, 0x1D2578u)) {
        return;
    }
    ctx->pc = 0x1D2578u;
label_1d2578:
    // 0x1d2578: 0xc052bc2  jal         func_14AF08
label_1d257c:
    if (ctx->pc == 0x1D257Cu) {
        ctx->pc = 0x1D257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2578u;
        // 0x1d257c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2580u;
        goto label_1d2580;
    }
    ctx->pc = 0x1D2578u;
    SET_GPR_U32(ctx, 31, 0x1D2580u);
    ctx->pc = 0x1D257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2578u;
    // 0x1d257c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AF08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14AF08u, 0x1D2578u, 0x1D2580u)) {
        return;
    }
    ctx->pc = 0x1D2580u;
label_1d2580:
    // 0x1d2580: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1d2580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1d2584:
    // 0x1d2584: 0x0  nop
    ctx->pc = 0x1d2584u;
    // NOP
label_1d2588:
    // 0x1d2588: 0xc073e5e  jal         func_1CF978
label_1d258c:
    if (ctx->pc == 0x1D258Cu) {
        ctx->pc = 0x1D258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2588u;
        // 0x1d258c: 0x8fa50058  lw          $a1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2590u;
        goto label_1d2590;
    }
    ctx->pc = 0x1D2588u;
    SET_GPR_U32(ctx, 31, 0x1D2590u);
    ctx->pc = 0x1D258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2588u;
    // 0x1d258c: 0x8fa50058  lw          $a1, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CF978u, 0x1D2588u, 0x1D2590u)) {
        return;
    }
    ctx->pc = 0x1D2590u;
label_1d2590:
    // 0x1d2590: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d2594:
    // 0x1d2594: 0x8c429b78  lw          $v0, -0x6488($v0)
    ctx->pc = 0x1d2594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941560)));
label_1d2598:
    // 0x1d2598: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d259c:
    if (ctx->pc == 0x1D259Cu) {
        ctx->pc = 0x1D259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2598u;
        // 0x1d259c: 0x8fa60060  lw          $a2, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D25A0u;
        goto label_1d25a0;
    }
    ctx->pc = 0x1D2598u;
    {
        const bool branch_taken_0x1d2598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2598u;
        // 0x1d259c: 0x8fa60060  lw          $a2, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2598) {
            ctx->pc = 0x1D25ACu;
            goto label_1d25ac;
        }
    }
    ctx->pc = 0x1D25A0u;
label_1d25a0:
    // 0x1d25a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d25a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d25a4:
    // 0x1d25a4: 0x40f809  jalr        $v0
label_1d25a8:
    if (ctx->pc == 0x1D25A8u) {
        ctx->pc = 0x1D25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25A4u;
        // 0x1d25a8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D25ACu;
        goto label_1d25ac;
    }
    ctx->pc = 0x1D25A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D25ACu);
        ctx->pc = 0x1D25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25A4u;
        // 0x1d25a8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D25A4u, 0x1D25ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D25ACu;
label_1d25ac:
    // 0x1d25ac: 0x8ec49b70  lw          $a0, -0x6490($s6)
    ctx->pc = 0x1d25acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941552)));
label_1d25b0:
    // 0x1d25b0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1d25b4:
    if (ctx->pc == 0x1D25B4u) {
        ctx->pc = 0x1D25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25B0u;
        // 0x1d25b4: 0xaec09b70  sw          $zero, -0x6490($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294941552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D25B8u;
        goto label_1d25b8;
    }
    ctx->pc = 0x1D25B0u;
    {
        const bool branch_taken_0x1d25b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d25b0) {
            ctx->pc = 0x1D25B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D25B0u;
            // 0x1d25b4: 0xaec09b70  sw          $zero, -0x6490($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4294941552), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D25C4u;
            goto label_1d25c4;
        }
    }
    ctx->pc = 0x1D25B8u;
label_1d25b8:
    // 0x1d25b8: 0xc0808b8  jal         func_2022E0
label_1d25bc:
    if (ctx->pc == 0x1D25BCu) {
        ctx->pc = 0x1D25C0u;
        goto label_1d25c0;
    }
    ctx->pc = 0x1D25B8u;
    SET_GPR_U32(ctx, 31, 0x1D25C0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D25B8u, 0x1D25C0u)) {
        return;
    }
    ctx->pc = 0x1D25C0u;
label_1d25c0:
    // 0x1d25c0: 0xaec09b70  sw          $zero, -0x6490($s6)
    ctx->pc = 0x1d25c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294941552), GPR_U32(ctx, 0));
label_1d25c4:
    // 0x1d25c4: 0xafc09b74  sw          $zero, -0x648C($fp)
    ctx->pc = 0x1d25c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294941556), GPR_U32(ctx, 0));
label_1d25c8:
    // 0x1d25c8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1d25c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1d25cc:
    // 0x1d25cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d25ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d25d0:
    // 0x1d25d0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1d25d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1d25d4:
    // 0x1d25d4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1d25d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1d25d8:
    // 0x1d25d8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1d25d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1d25dc:
    // 0x1d25dc: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1d25dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1d25e0:
    // 0x1d25e0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1d25e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d25e4:
    // 0x1d25e4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1d25e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d25e8:
    // 0x1d25e8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d25e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d25ec:
    // 0x1d25ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d25ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d25f0:
    // 0x1d25f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1d25f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1d25f4:
    // 0x1d25f4: 0x3e00008  jr          $ra
label_1d25f8:
    if (ctx->pc == 0x1D25F8u) {
        ctx->pc = 0x1D25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25F4u;
        // 0x1d25f8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D25FCu;
        goto label_1d25fc;
    }
    ctx->pc = 0x1D25F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25F4u;
        // 0x1d25f8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D25F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D25FCu;
label_1d25fc:
    // 0x1d25fc: 0x0  nop
    ctx->pc = 0x1d25fcu;
    // NOP
    ctx->pc = 0x1d2600u;
}
