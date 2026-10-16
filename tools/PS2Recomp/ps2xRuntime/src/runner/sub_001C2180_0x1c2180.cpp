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

// Function: sub_001C2180
// Address: 0x1c2180 - 0x1c2490
void sub_001C2180_0x1c2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2180_0x1c2180");
#endif

    switch (ctx->pc) {
        case 0x1c2180u: goto label_1c2180;
        case 0x1c2184u: goto label_1c2184;
        case 0x1c2188u: goto label_1c2188;
        case 0x1c218cu: goto label_1c218c;
        case 0x1c2190u: goto label_1c2190;
        case 0x1c2194u: goto label_1c2194;
        case 0x1c2198u: goto label_1c2198;
        case 0x1c219cu: goto label_1c219c;
        case 0x1c21a0u: goto label_1c21a0;
        case 0x1c21a4u: goto label_1c21a4;
        case 0x1c21a8u: goto label_1c21a8;
        case 0x1c21acu: goto label_1c21ac;
        case 0x1c21b0u: goto label_1c21b0;
        case 0x1c21b4u: goto label_1c21b4;
        case 0x1c21b8u: goto label_1c21b8;
        case 0x1c21bcu: goto label_1c21bc;
        case 0x1c21c0u: goto label_1c21c0;
        case 0x1c21c4u: goto label_1c21c4;
        case 0x1c21c8u: goto label_1c21c8;
        case 0x1c21ccu: goto label_1c21cc;
        case 0x1c21d0u: goto label_1c21d0;
        case 0x1c21d4u: goto label_1c21d4;
        case 0x1c21d8u: goto label_1c21d8;
        case 0x1c21dcu: goto label_1c21dc;
        case 0x1c21e0u: goto label_1c21e0;
        case 0x1c21e4u: goto label_1c21e4;
        case 0x1c21e8u: goto label_1c21e8;
        case 0x1c21ecu: goto label_1c21ec;
        case 0x1c21f0u: goto label_1c21f0;
        case 0x1c21f4u: goto label_1c21f4;
        case 0x1c21f8u: goto label_1c21f8;
        case 0x1c21fcu: goto label_1c21fc;
        case 0x1c2200u: goto label_1c2200;
        case 0x1c2204u: goto label_1c2204;
        case 0x1c2208u: goto label_1c2208;
        case 0x1c220cu: goto label_1c220c;
        case 0x1c2210u: goto label_1c2210;
        case 0x1c2214u: goto label_1c2214;
        case 0x1c2218u: goto label_1c2218;
        case 0x1c221cu: goto label_1c221c;
        case 0x1c2220u: goto label_1c2220;
        case 0x1c2224u: goto label_1c2224;
        case 0x1c2228u: goto label_1c2228;
        case 0x1c222cu: goto label_1c222c;
        case 0x1c2230u: goto label_1c2230;
        case 0x1c2234u: goto label_1c2234;
        case 0x1c2238u: goto label_1c2238;
        case 0x1c223cu: goto label_1c223c;
        case 0x1c2240u: goto label_1c2240;
        case 0x1c2244u: goto label_1c2244;
        case 0x1c2248u: goto label_1c2248;
        case 0x1c224cu: goto label_1c224c;
        case 0x1c2250u: goto label_1c2250;
        case 0x1c2254u: goto label_1c2254;
        case 0x1c2258u: goto label_1c2258;
        case 0x1c225cu: goto label_1c225c;
        case 0x1c2260u: goto label_1c2260;
        case 0x1c2264u: goto label_1c2264;
        case 0x1c2268u: goto label_1c2268;
        case 0x1c226cu: goto label_1c226c;
        case 0x1c2270u: goto label_1c2270;
        case 0x1c2274u: goto label_1c2274;
        case 0x1c2278u: goto label_1c2278;
        case 0x1c227cu: goto label_1c227c;
        case 0x1c2280u: goto label_1c2280;
        case 0x1c2284u: goto label_1c2284;
        case 0x1c2288u: goto label_1c2288;
        case 0x1c228cu: goto label_1c228c;
        case 0x1c2290u: goto label_1c2290;
        case 0x1c2294u: goto label_1c2294;
        case 0x1c2298u: goto label_1c2298;
        case 0x1c229cu: goto label_1c229c;
        case 0x1c22a0u: goto label_1c22a0;
        case 0x1c22a4u: goto label_1c22a4;
        case 0x1c22a8u: goto label_1c22a8;
        case 0x1c22acu: goto label_1c22ac;
        case 0x1c22b0u: goto label_1c22b0;
        case 0x1c22b4u: goto label_1c22b4;
        case 0x1c22b8u: goto label_1c22b8;
        case 0x1c22bcu: goto label_1c22bc;
        case 0x1c22c0u: goto label_1c22c0;
        case 0x1c22c4u: goto label_1c22c4;
        case 0x1c22c8u: goto label_1c22c8;
        case 0x1c22ccu: goto label_1c22cc;
        case 0x1c22d0u: goto label_1c22d0;
        case 0x1c22d4u: goto label_1c22d4;
        case 0x1c22d8u: goto label_1c22d8;
        case 0x1c22dcu: goto label_1c22dc;
        case 0x1c22e0u: goto label_1c22e0;
        case 0x1c22e4u: goto label_1c22e4;
        case 0x1c22e8u: goto label_1c22e8;
        case 0x1c22ecu: goto label_1c22ec;
        case 0x1c22f0u: goto label_1c22f0;
        case 0x1c22f4u: goto label_1c22f4;
        case 0x1c22f8u: goto label_1c22f8;
        case 0x1c22fcu: goto label_1c22fc;
        case 0x1c2300u: goto label_1c2300;
        case 0x1c2304u: goto label_1c2304;
        case 0x1c2308u: goto label_1c2308;
        case 0x1c230cu: goto label_1c230c;
        case 0x1c2310u: goto label_1c2310;
        case 0x1c2314u: goto label_1c2314;
        case 0x1c2318u: goto label_1c2318;
        case 0x1c231cu: goto label_1c231c;
        case 0x1c2320u: goto label_1c2320;
        case 0x1c2324u: goto label_1c2324;
        case 0x1c2328u: goto label_1c2328;
        case 0x1c232cu: goto label_1c232c;
        case 0x1c2330u: goto label_1c2330;
        case 0x1c2334u: goto label_1c2334;
        case 0x1c2338u: goto label_1c2338;
        case 0x1c233cu: goto label_1c233c;
        case 0x1c2340u: goto label_1c2340;
        case 0x1c2344u: goto label_1c2344;
        case 0x1c2348u: goto label_1c2348;
        case 0x1c234cu: goto label_1c234c;
        case 0x1c2350u: goto label_1c2350;
        case 0x1c2354u: goto label_1c2354;
        case 0x1c2358u: goto label_1c2358;
        case 0x1c235cu: goto label_1c235c;
        case 0x1c2360u: goto label_1c2360;
        case 0x1c2364u: goto label_1c2364;
        case 0x1c2368u: goto label_1c2368;
        case 0x1c236cu: goto label_1c236c;
        case 0x1c2370u: goto label_1c2370;
        case 0x1c2374u: goto label_1c2374;
        case 0x1c2378u: goto label_1c2378;
        case 0x1c237cu: goto label_1c237c;
        case 0x1c2380u: goto label_1c2380;
        case 0x1c2384u: goto label_1c2384;
        case 0x1c2388u: goto label_1c2388;
        case 0x1c238cu: goto label_1c238c;
        case 0x1c2390u: goto label_1c2390;
        case 0x1c2394u: goto label_1c2394;
        case 0x1c2398u: goto label_1c2398;
        case 0x1c239cu: goto label_1c239c;
        case 0x1c23a0u: goto label_1c23a0;
        case 0x1c23a4u: goto label_1c23a4;
        case 0x1c23a8u: goto label_1c23a8;
        case 0x1c23acu: goto label_1c23ac;
        case 0x1c23b0u: goto label_1c23b0;
        case 0x1c23b4u: goto label_1c23b4;
        case 0x1c23b8u: goto label_1c23b8;
        case 0x1c23bcu: goto label_1c23bc;
        case 0x1c23c0u: goto label_1c23c0;
        case 0x1c23c4u: goto label_1c23c4;
        case 0x1c23c8u: goto label_1c23c8;
        case 0x1c23ccu: goto label_1c23cc;
        case 0x1c23d0u: goto label_1c23d0;
        case 0x1c23d4u: goto label_1c23d4;
        case 0x1c23d8u: goto label_1c23d8;
        case 0x1c23dcu: goto label_1c23dc;
        case 0x1c23e0u: goto label_1c23e0;
        case 0x1c23e4u: goto label_1c23e4;
        case 0x1c23e8u: goto label_1c23e8;
        case 0x1c23ecu: goto label_1c23ec;
        case 0x1c23f0u: goto label_1c23f0;
        case 0x1c23f4u: goto label_1c23f4;
        case 0x1c23f8u: goto label_1c23f8;
        case 0x1c23fcu: goto label_1c23fc;
        case 0x1c2400u: goto label_1c2400;
        case 0x1c2404u: goto label_1c2404;
        case 0x1c2408u: goto label_1c2408;
        case 0x1c240cu: goto label_1c240c;
        case 0x1c2410u: goto label_1c2410;
        case 0x1c2414u: goto label_1c2414;
        case 0x1c2418u: goto label_1c2418;
        case 0x1c241cu: goto label_1c241c;
        case 0x1c2420u: goto label_1c2420;
        case 0x1c2424u: goto label_1c2424;
        case 0x1c2428u: goto label_1c2428;
        case 0x1c242cu: goto label_1c242c;
        case 0x1c2430u: goto label_1c2430;
        case 0x1c2434u: goto label_1c2434;
        case 0x1c2438u: goto label_1c2438;
        case 0x1c243cu: goto label_1c243c;
        case 0x1c2440u: goto label_1c2440;
        case 0x1c2444u: goto label_1c2444;
        case 0x1c2448u: goto label_1c2448;
        case 0x1c244cu: goto label_1c244c;
        case 0x1c2450u: goto label_1c2450;
        case 0x1c2454u: goto label_1c2454;
        case 0x1c2458u: goto label_1c2458;
        case 0x1c245cu: goto label_1c245c;
        case 0x1c2460u: goto label_1c2460;
        case 0x1c2464u: goto label_1c2464;
        case 0x1c2468u: goto label_1c2468;
        case 0x1c246cu: goto label_1c246c;
        case 0x1c2470u: goto label_1c2470;
        case 0x1c2474u: goto label_1c2474;
        case 0x1c2478u: goto label_1c2478;
        case 0x1c247cu: goto label_1c247c;
        case 0x1c2480u: goto label_1c2480;
        case 0x1c2484u: goto label_1c2484;
        case 0x1c2488u: goto label_1c2488;
        case 0x1c248cu: goto label_1c248c;
        default: break;
    }

    ctx->pc = 0x1c2180u;

label_1c2180:
    // 0x1c2180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c2184:
    // 0x1c2184: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c2188:
    // 0x1c2188: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c2188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c218c:
    // 0x1c218c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c218cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c2190:
    // 0x1c2190: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
label_1c2194:
    if (ctx->pc == 0x1C2194u) {
        ctx->pc = 0x1C2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2190u;
        // 0x1c2194: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2198u;
        goto label_1c2198;
    }
    ctx->pc = 0x1C2190u;
    {
        const bool branch_taken_0x1c2190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2190u;
        // 0x1c2194: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2190) {
            ctx->pc = 0x1C21C4u;
            goto label_1c21c4;
        }
    }
    ctx->pc = 0x1C2198u;
label_1c2198:
    // 0x1c2198: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1c2198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_1c219c:
    // 0x1c219c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c21a0:
    if (ctx->pc == 0x1C21A0u) {
        ctx->pc = 0x1C21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C219Cu;
        // 0x1c21a0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21A4u;
        goto label_1c21a4;
    }
    ctx->pc = 0x1C219Cu;
    {
        const bool branch_taken_0x1c219c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C219Cu;
        // 0x1c21a0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c219c) {
            ctx->pc = 0x1C21B4u;
            goto label_1c21b4;
        }
    }
    ctx->pc = 0x1C21A4u;
label_1c21a4:
    // 0x1c21a4: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
label_1c21a8:
    if (ctx->pc == 0x1C21A8u) {
        ctx->pc = 0x1C21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21A4u;
        // 0x1c21a8: 0x38a20008  xori        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21ACu;
        goto label_1c21ac;
    }
    ctx->pc = 0x1C21A4u;
    {
        const bool branch_taken_0x1c21a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21A4u;
        // 0x1c21a8: 0x38a20008  xori        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21a4) {
            ctx->pc = 0x1C23B0u;
            goto label_1c23b0;
        }
    }
    ctx->pc = 0x1C21ACu;
label_1c21ac:
    // 0x1c21ac: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_1c21b0:
    if (ctx->pc == 0x1C21B0u) {
        ctx->pc = 0x1C21B4u;
        goto label_1c21b4;
    }
    ctx->pc = 0x1C21ACu;
    {
        const bool branch_taken_0x1c21ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c21ac) {
            ctx->pc = 0x1C2470u;
            goto label_1c2470;
        }
    }
    ctx->pc = 0x1C21B4u;
label_1c21b4:
    // 0x1c21b4: 0x10a2003f  beq         $a1, $v0, . + 4 + (0x3F << 2)
label_1c21b8:
    if (ctx->pc == 0x1C21B8u) {
        ctx->pc = 0x1C21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21B4u;
        // 0x1c21b8: 0x38a20008  xori        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21BCu;
        goto label_1c21bc;
    }
    ctx->pc = 0x1C21B4u;
    {
        const bool branch_taken_0x1c21b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21B4u;
        // 0x1c21b8: 0x38a20008  xori        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21b4) {
            ctx->pc = 0x1C22B4u;
            goto label_1c22b4;
        }
    }
    ctx->pc = 0x1C21BCu;
label_1c21bc:
    // 0x1c21bc: 0x100000ac  b           . + 4 + (0xAC << 2)
label_1c21c0:
    if (ctx->pc == 0x1C21C0u) {
        ctx->pc = 0x1C21C4u;
        goto label_1c21c4;
    }
    ctx->pc = 0x1C21BCu;
    {
        const bool branch_taken_0x1c21bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c21bc) {
            ctx->pc = 0x1C2470u;
            goto label_1c2470;
        }
    }
    ctx->pc = 0x1C21C4u;
label_1c21c4:
    // 0x1c21c4: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x1c21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1c21c8:
    // 0x1c21c8: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
label_1c21cc:
    if (ctx->pc == 0x1C21CCu) {
        ctx->pc = 0x1C21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21C8u;
        // 0x1c21cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21D0u;
        goto label_1c21d0;
    }
    ctx->pc = 0x1C21C8u;
    {
        const bool branch_taken_0x1c21c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1C21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21C8u;
        // 0x1c21cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21c8) {
            ctx->pc = 0x1C224Cu;
            goto label_1c224c;
        }
    }
    ctx->pc = 0x1C21D0u;
label_1c21d0:
    // 0x1c21d0: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x1c21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c21d4:
    // 0x1c21d4: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1c21d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_1c21d8:
    // 0x1c21d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c21dc:
    // 0x1c21dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c21e0:
    // 0x1c21e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1c21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c21e4:
    // 0x1c21e4: 0xc070924  jal         func_1C2490
label_1c21e8:
    if (ctx->pc == 0x1C21E8u) {
        ctx->pc = 0x1C21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21E4u;
        // 0x1c21e8: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21ECu;
        goto label_1c21ec;
    }
    ctx->pc = 0x1C21E4u;
    SET_GPR_U32(ctx, 31, 0x1C21ECu);
    ctx->pc = 0x1C21E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21E4u;
    // 0x1c21e8: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C2490u, 0x1C21E4u, 0x1C21ECu)) {
        return;
    }
    ctx->pc = 0x1C21ECu;
label_1c21ec:
    // 0x1c21ec: 0x8e0602b4  lw          $a2, 0x2B4($s0)
    ctx->pc = 0x1c21ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_1c21f0:
    // 0x1c21f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c21f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c21f4:
    // 0x1c21f4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c21f8:
    // 0x1c21f8: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c21f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c21fc:
    // 0x1c21fc: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c21fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c2200:
    // 0x1c2200: 0x60f809  jalr        $v1
label_1c2204:
    if (ctx->pc == 0x1C2204u) {
        ctx->pc = 0x1C2204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2200u;
        // 0x1c2204: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2208u;
        goto label_1c2208;
    }
    ctx->pc = 0x1C2200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2208u);
        ctx->pc = 0x1C2204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2200u;
        // 0x1c2204: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2200u, 0x1C2208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2208u;
label_1c2208:
    // 0x1c2208: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1c2208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_1c220c:
    // 0x1c220c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1c220cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1c2210:
    // 0x1c2210: 0x8c844398  lw          $a0, 0x4398($a0)
    ctx->pc = 0x1c2210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17304)));
label_1c2214:
    // 0x1c2214: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1c2214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1c2218:
    // 0x1c2218: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_1c221c:
    if (ctx->pc == 0x1C221Cu) {
        ctx->pc = 0x1C221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2218u;
        // 0x1c221c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2220u;
        goto label_1c2220;
    }
    ctx->pc = 0x1C2218u;
    {
        const bool branch_taken_0x1c2218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2218u;
        // 0x1c221c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2218) {
            ctx->pc = 0x1C2240u;
            goto label_1c2240;
        }
    }
    ctx->pc = 0x1C2220u;
label_1c2220:
    // 0x1c2220: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c2220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c2224:
    // 0x1c2224: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c2228:
    if (ctx->pc == 0x1C2228u) {
        ctx->pc = 0x1C2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2224u;
        // 0x1c2228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C222Cu;
        goto label_1c222c;
    }
    ctx->pc = 0x1C2224u;
    {
        const bool branch_taken_0x1c2224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2224u;
        // 0x1c2228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2224) {
            ctx->pc = 0x1C2240u;
            goto label_1c2240;
        }
    }
    ctx->pc = 0x1C222Cu;
label_1c222c:
    // 0x1c222c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c222cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1c2230:
    // 0x1c2230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c2230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c2234:
    // 0x1c2234: 0xc07fd18  jal         func_1FF460
label_1c2238:
    if (ctx->pc == 0x1C2238u) {
        ctx->pc = 0x1C2238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2234u;
        // 0x1c2238: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C223Cu;
        goto label_1c223c;
    }
    ctx->pc = 0x1C2234u;
    SET_GPR_U32(ctx, 31, 0x1C223Cu);
    ctx->pc = 0x1C2238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2234u;
    // 0x1c2238: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C2234u, 0x1C223Cu)) {
        return;
    }
    ctx->pc = 0x1C223Cu;
label_1c223c:
    // 0x1c223c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2240:
    // 0x1c2240: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x1c2240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
label_1c2244:
    // 0x1c2244: 0x1000008e  b           . + 4 + (0x8E << 2)
label_1c2248:
    if (ctx->pc == 0x1C2248u) {
        ctx->pc = 0x1C2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2244u;
        // 0x1c2248: 0xae0202bc  sw          $v0, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C224Cu;
        goto label_1c224c;
    }
    ctx->pc = 0x1C2244u;
    {
        const bool branch_taken_0x1c2244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2244u;
        // 0x1c2248: 0xae0202bc  sw          $v0, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2244) {
            ctx->pc = 0x1C2480u;
            goto label_1c2480;
        }
    }
    ctx->pc = 0x1C224Cu;
label_1c224c:
    // 0x1c224c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c224cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1c2250:
    // 0x1c2250: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c2250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c2254:
    // 0x1c2254: 0x8c4543b0  lw          $a1, 0x43B0($v0)
    ctx->pc = 0x1c2254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17328)));
label_1c2258:
    // 0x1c2258: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1c2258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1c225c:
    // 0x1c225c: 0x50a30009  beql        $a1, $v1, . + 4 + (0x9 << 2)
label_1c2260:
    if (ctx->pc == 0x1C2260u) {
        ctx->pc = 0x1C2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C225Cu;
        // 0x1c2260: 0x8e0602b4  lw          $a2, 0x2B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2264u;
        goto label_1c2264;
    }
    ctx->pc = 0x1C225Cu;
    {
        const bool branch_taken_0x1c225c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c225c) {
            ctx->pc = 0x1C2260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C225Cu;
            // 0x1c2260: 0x8e0602b4  lw          $a2, 0x2B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2284u;
            goto label_1c2284;
        }
    }
    ctx->pc = 0x1C2264u;
label_1c2264:
    // 0x1c2264: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c2264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c2268:
    // 0x1c2268: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1c226c:
    if (ctx->pc == 0x1C226Cu) {
        ctx->pc = 0x1C226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2268u;
        // 0x1c226c: 0x8e0602b4  lw          $a2, 0x2B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2270u;
        goto label_1c2270;
    }
    ctx->pc = 0x1C2268u;
    {
        const bool branch_taken_0x1c2268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2268) {
            ctx->pc = 0x1C226Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2268u;
            // 0x1c226c: 0x8e0602b4  lw          $a2, 0x2B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2284u;
            goto label_1c2284;
        }
    }
    ctx->pc = 0x1C2270u;
label_1c2270:
    // 0x1c2270: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c2270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1c2274:
    // 0x1c2274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c2274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c2278:
    // 0x1c2278: 0xc07fd18  jal         func_1FF460
label_1c227c:
    if (ctx->pc == 0x1C227Cu) {
        ctx->pc = 0x1C227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2278u;
        // 0x1c227c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2280u;
        goto label_1c2280;
    }
    ctx->pc = 0x1C2278u;
    SET_GPR_U32(ctx, 31, 0x1C2280u);
    ctx->pc = 0x1C227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2278u;
    // 0x1c227c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C2278u, 0x1C2280u)) {
        return;
    }
    ctx->pc = 0x1C2280u;
label_1c2280:
    // 0x1c2280: 0x8e0602b4  lw          $a2, 0x2B4($s0)
    ctx->pc = 0x1c2280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_1c2284:
    // 0x1c2284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2288:
    // 0x1c2288: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c2288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c228c:
    // 0x1c228c: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c228cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c2290:
    // 0x1c2290: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c2290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c2294:
    // 0x1c2294: 0x60f809  jalr        $v1
label_1c2298:
    if (ctx->pc == 0x1C2298u) {
        ctx->pc = 0x1C2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2294u;
        // 0x1c2298: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C229Cu;
        goto label_1c229c;
    }
    ctx->pc = 0x1C2294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C229Cu);
        ctx->pc = 0x1C2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2294u;
        // 0x1c2298: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2294u, 0x1C229Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C229Cu;
label_1c229c:
    // 0x1c229c: 0xc60002d8  lwc1        $f0, 0x2D8($s0)
    ctx->pc = 0x1c229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c22a0:
    // 0x1c22a0: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x1c22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_1c22a4:
    // 0x1c22a4: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x1c22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
label_1c22a8:
    // 0x1c22a8: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x1c22a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
label_1c22ac:
    // 0x1c22ac: 0x10000074  b           . + 4 + (0x74 << 2)
label_1c22b0:
    if (ctx->pc == 0x1C22B0u) {
        ctx->pc = 0x1C22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22ACu;
        // 0x1c22b0: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C22B4u;
        goto label_1c22b4;
    }
    ctx->pc = 0x1C22ACu;
    {
        const bool branch_taken_0x1c22ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22ACu;
        // 0x1c22b0: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22ac) {
            ctx->pc = 0x1C2480u;
            goto label_1c2480;
        }
    }
    ctx->pc = 0x1C22B4u;
label_1c22b4:
    // 0x1c22b4: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1c22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1c22b8:
    // 0x1c22b8: 0x8e03026c  lw          $v1, 0x26C($s0)
    ctx->pc = 0x1c22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1c22bc:
    // 0x1c22bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c22c0:
    // 0x1c22c0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1c22c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c22c4:
    // 0x1c22c4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1c22c8:
    if (ctx->pc == 0x1C22C8u) {
        ctx->pc = 0x1C22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22C4u;
        // 0x1c22c8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C22CCu;
        goto label_1c22cc;
    }
    ctx->pc = 0x1C22C4u;
    {
        const bool branch_taken_0x1c22c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22C4u;
        // 0x1c22c8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22c4) {
            ctx->pc = 0x1C2348u;
            goto label_1c2348;
        }
    }
    ctx->pc = 0x1C22CCu;
label_1c22cc:
    // 0x1c22cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c22ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c22d0:
    // 0x1c22d0: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x1c22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c22d4:
    // 0x1c22d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c22d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c22d8:
    // 0x1c22d8: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1c22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_1c22dc:
    // 0x1c22dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c22e0:
    // 0x1c22e0: 0xc070924  jal         func_1C2490
label_1c22e4:
    if (ctx->pc == 0x1C22E4u) {
        ctx->pc = 0x1C22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22E0u;
        // 0x1c22e4: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C22E8u;
        goto label_1c22e8;
    }
    ctx->pc = 0x1C22E0u;
    SET_GPR_U32(ctx, 31, 0x1C22E8u);
    ctx->pc = 0x1C22E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22E0u;
    // 0x1c22e4: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C2490u, 0x1C22E0u, 0x1C22E8u)) {
        return;
    }
    ctx->pc = 0x1C22E8u;
label_1c22e8:
    // 0x1c22e8: 0x8e0602b8  lw          $a2, 0x2B8($s0)
    ctx->pc = 0x1c22e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
label_1c22ec:
    // 0x1c22ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c22ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c22f0:
    // 0x1c22f0: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c22f4:
    // 0x1c22f4: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c22f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c22f8:
    // 0x1c22f8: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c22f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c22fc:
    // 0x1c22fc: 0x60f809  jalr        $v1
label_1c2300:
    if (ctx->pc == 0x1C2300u) {
        ctx->pc = 0x1C2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22FCu;
        // 0x1c2300: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2304u;
        goto label_1c2304;
    }
    ctx->pc = 0x1C22FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2304u);
        ctx->pc = 0x1C2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22FCu;
        // 0x1c2300: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C22FCu, 0x1C2304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2304u;
label_1c2304:
    // 0x1c2304: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1c2304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_1c2308:
    // 0x1c2308: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1c2308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1c230c:
    // 0x1c230c: 0x8c844390  lw          $a0, 0x4390($a0)
    ctx->pc = 0x1c230cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17296)));
label_1c2310:
    // 0x1c2310: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1c2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1c2314:
    // 0x1c2314: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_1c2318:
    if (ctx->pc == 0x1C2318u) {
        ctx->pc = 0x1C2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2314u;
        // 0x1c2318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C231Cu;
        goto label_1c231c;
    }
    ctx->pc = 0x1C2314u;
    {
        const bool branch_taken_0x1c2314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2314u;
        // 0x1c2318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2314) {
            ctx->pc = 0x1C233Cu;
            goto label_1c233c;
        }
    }
    ctx->pc = 0x1C231Cu;
label_1c231c:
    // 0x1c231c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c2320:
    // 0x1c2320: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c2324:
    if (ctx->pc == 0x1C2324u) {
        ctx->pc = 0x1C2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2320u;
        // 0x1c2324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2328u;
        goto label_1c2328;
    }
    ctx->pc = 0x1C2320u;
    {
        const bool branch_taken_0x1c2320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2320u;
        // 0x1c2324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2320) {
            ctx->pc = 0x1C233Cu;
            goto label_1c233c;
        }
    }
    ctx->pc = 0x1C2328u;
label_1c2328:
    // 0x1c2328: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c2328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1c232c:
    // 0x1c232c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c2330:
    // 0x1c2330: 0xc07fd18  jal         func_1FF460
label_1c2334:
    if (ctx->pc == 0x1C2334u) {
        ctx->pc = 0x1C2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2330u;
        // 0x1c2334: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2338u;
        goto label_1c2338;
    }
    ctx->pc = 0x1C2330u;
    SET_GPR_U32(ctx, 31, 0x1C2338u);
    ctx->pc = 0x1C2334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2330u;
    // 0x1c2334: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C2330u, 0x1C2338u)) {
        return;
    }
    ctx->pc = 0x1C2338u;
label_1c2338:
    // 0x1c2338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c233c:
    // 0x1c233c: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x1c233cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
label_1c2340:
    // 0x1c2340: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1c2344:
    if (ctx->pc == 0x1C2344u) {
        ctx->pc = 0x1C2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2340u;
        // 0x1c2344: 0xae0202c0  sw          $v0, 0x2C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2348u;
        goto label_1c2348;
    }
    ctx->pc = 0x1C2340u;
    {
        const bool branch_taken_0x1c2340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2340u;
        // 0x1c2344: 0xae0202c0  sw          $v0, 0x2C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2340) {
            ctx->pc = 0x1C2480u;
            goto label_1c2480;
        }
    }
    ctx->pc = 0x1C2348u;
label_1c2348:
    // 0x1c2348: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c2348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1c234c:
    // 0x1c234c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c234cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c2350:
    // 0x1c2350: 0x8c4543b0  lw          $a1, 0x43B0($v0)
    ctx->pc = 0x1c2350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17328)));
label_1c2354:
    // 0x1c2354: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1c2354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1c2358:
    // 0x1c2358: 0x50a30009  beql        $a1, $v1, . + 4 + (0x9 << 2)
label_1c235c:
    if (ctx->pc == 0x1C235Cu) {
        ctx->pc = 0x1C235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2358u;
        // 0x1c235c: 0x8e0602b8  lw          $a2, 0x2B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2360u;
        goto label_1c2360;
    }
    ctx->pc = 0x1C2358u;
    {
        const bool branch_taken_0x1c2358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2358) {
            ctx->pc = 0x1C235Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2358u;
            // 0x1c235c: 0x8e0602b8  lw          $a2, 0x2B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2380u;
            goto label_1c2380;
        }
    }
    ctx->pc = 0x1C2360u;
label_1c2360:
    // 0x1c2360: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c2360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c2364:
    // 0x1c2364: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1c2368:
    if (ctx->pc == 0x1C2368u) {
        ctx->pc = 0x1C2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2364u;
        // 0x1c2368: 0x8e0602b8  lw          $a2, 0x2B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C236Cu;
        goto label_1c236c;
    }
    ctx->pc = 0x1C2364u;
    {
        const bool branch_taken_0x1c2364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2364) {
            ctx->pc = 0x1C2368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2364u;
            // 0x1c2368: 0x8e0602b8  lw          $a2, 0x2B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2380u;
            goto label_1c2380;
        }
    }
    ctx->pc = 0x1C236Cu;
label_1c236c:
    // 0x1c236c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c236cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1c2370:
    // 0x1c2370: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c2370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c2374:
    // 0x1c2374: 0xc07fd18  jal         func_1FF460
label_1c2378:
    if (ctx->pc == 0x1C2378u) {
        ctx->pc = 0x1C2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2374u;
        // 0x1c2378: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C237Cu;
        goto label_1c237c;
    }
    ctx->pc = 0x1C2374u;
    SET_GPR_U32(ctx, 31, 0x1C237Cu);
    ctx->pc = 0x1C2378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2374u;
    // 0x1c2378: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C2374u, 0x1C237Cu)) {
        return;
    }
    ctx->pc = 0x1C237Cu;
label_1c237c:
    // 0x1c237c: 0x8e0602b8  lw          $a2, 0x2B8($s0)
    ctx->pc = 0x1c237cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
label_1c2380:
    // 0x1c2380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2384:
    // 0x1c2384: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c2384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c2388:
    // 0x1c2388: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c2388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c238c:
    // 0x1c238c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c2390:
    // 0x1c2390: 0x60f809  jalr        $v1
label_1c2394:
    if (ctx->pc == 0x1C2394u) {
        ctx->pc = 0x1C2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2390u;
        // 0x1c2394: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2398u;
        goto label_1c2398;
    }
    ctx->pc = 0x1C2390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2398u);
        ctx->pc = 0x1C2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2390u;
        // 0x1c2394: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2390u, 0x1C2398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2398u;
label_1c2398:
    // 0x1c2398: 0xc60002dc  lwc1        $f0, 0x2DC($s0)
    ctx->pc = 0x1c2398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c239c:
    // 0x1c239c: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x1c239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
label_1c23a0:
    // 0x1c23a0: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x1c23a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
label_1c23a4:
    // 0x1c23a4: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x1c23a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
label_1c23a8:
    // 0x1c23a8: 0x10000035  b           . + 4 + (0x35 << 2)
label_1c23ac:
    if (ctx->pc == 0x1C23ACu) {
        ctx->pc = 0x1C23ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23A8u;
        // 0x1c23ac: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23B0u;
        goto label_1c23b0;
    }
    ctx->pc = 0x1C23A8u;
    {
        const bool branch_taken_0x1c23a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C23ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23A8u;
        // 0x1c23ac: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23a8) {
            ctx->pc = 0x1C2480u;
            goto label_1c2480;
        }
    }
    ctx->pc = 0x1C23B0u;
label_1c23b0:
    // 0x1c23b0: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1c23b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1c23b4:
    // 0x1c23b4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1c23b8:
    if (ctx->pc == 0x1C23B8u) {
        ctx->pc = 0x1C23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23B4u;
        // 0x1c23b8: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23BCu;
        goto label_1c23bc;
    }
    ctx->pc = 0x1C23B4u;
    {
        const bool branch_taken_0x1c23b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23B4u;
        // 0x1c23b8: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23b4) {
            ctx->pc = 0x1C2434u;
            goto label_1c2434;
        }
    }
    ctx->pc = 0x1C23BCu;
label_1c23bc:
    // 0x1c23bc: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c23bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c23c0:
    // 0x1c23c0: 0xc06c994  jal         func_1B2650
label_1c23c4:
    if (ctx->pc == 0x1C23C4u) {
        ctx->pc = 0x1C23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23C0u;
        // 0x1c23c4: 0x24a5de08  addiu       $a1, $a1, -0x21F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23C8u;
        goto label_1c23c8;
    }
    ctx->pc = 0x1C23C0u;
    SET_GPR_U32(ctx, 31, 0x1C23C8u);
    ctx->pc = 0x1C23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23C0u;
    // 0x1c23c4: 0x24a5de08  addiu       $a1, $a1, -0x21F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1C23C0u, 0x1C23C8u)) {
        return;
    }
    ctx->pc = 0x1C23C8u;
label_1c23c8:
    // 0x1c23c8: 0x8c460258  lw          $a2, 0x258($v0)
    ctx->pc = 0x1c23c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1c23cc:
    // 0x1c23cc: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x1c23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c23d0:
    // 0x1c23d0: 0x84c400c8  lh          $a0, 0xC8($a2)
    ctx->pc = 0x1c23d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 200)));
label_1c23d4:
    // 0x1c23d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1c23d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c23d8:
    // 0x1c23d8: 0x8cc300cc  lw          $v1, 0xCC($a2)
    ctx->pc = 0x1c23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
label_1c23dc:
    // 0x1c23dc: 0x60f809  jalr        $v1
label_1c23e0:
    if (ctx->pc == 0x1C23E0u) {
        ctx->pc = 0x1C23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23DCu;
        // 0x1c23e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23E4u;
        goto label_1c23e4;
    }
    ctx->pc = 0x1C23DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C23E4u);
        ctx->pc = 0x1C23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23DCu;
        // 0x1c23e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C23DCu, 0x1C23E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C23E4u;
label_1c23e4:
    // 0x1c23e4: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x1c23e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1c23e8:
    // 0x1c23e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c23e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c23ec:
    // 0x1c23ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c23ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c23f0:
    // 0x1c23f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c23f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c23f4:
    // 0x1c23f4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c23f8:
    // 0x1c23f8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c23f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c23fc:
    // 0x1c23fc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c2400:
    // 0x1c2400: 0x60f809  jalr        $v1
label_1c2404:
    if (ctx->pc == 0x1C2404u) {
        ctx->pc = 0x1C2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2400u;
        // 0x1c2404: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2408u;
        goto label_1c2408;
    }
    ctx->pc = 0x1C2400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2408u);
        ctx->pc = 0x1C2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2400u;
        // 0x1c2404: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2400u, 0x1C2408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2408u;
label_1c2408:
    // 0x1c2408: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1c2408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_1c240c:
    // 0x1c240c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1c240cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1c2410:
    // 0x1c2410: 0x8c8443b8  lw          $a0, 0x43B8($a0)
    ctx->pc = 0x1c2410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17336)));
label_1c2414:
    // 0x1c2414: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1c2414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1c2418:
    // 0x1c2418: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
label_1c241c:
    if (ctx->pc == 0x1C241Cu) {
        ctx->pc = 0x1C241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2418u;
        // 0x1c241c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2420u;
        goto label_1c2420;
    }
    ctx->pc = 0x1C2418u;
    {
        const bool branch_taken_0x1c2418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2418u;
        // 0x1c241c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2418) {
            ctx->pc = 0x1C2484u;
            goto label_1c2484;
        }
    }
    ctx->pc = 0x1C2420u;
label_1c2420:
    // 0x1c2420: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c2420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c2424:
    // 0x1c2424: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1c2428:
    if (ctx->pc == 0x1C2428u) {
        ctx->pc = 0x1C2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2424u;
        // 0x1c2428: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C242Cu;
        goto label_1c242c;
    }
    ctx->pc = 0x1C2424u;
    {
        const bool branch_taken_0x1c2424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2424u;
        // 0x1c2428: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2424) {
            ctx->pc = 0x1C2488u;
            goto label_1c2488;
        }
    }
    ctx->pc = 0x1C242Cu;
label_1c242c:
    // 0x1c242c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c2430:
    if (ctx->pc == 0x1C2430u) {
        ctx->pc = 0x1C2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C242Cu;
        // 0x1c2430: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2434u;
        goto label_1c2434;
    }
    ctx->pc = 0x1C242Cu;
    {
        const bool branch_taken_0x1c242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C242Cu;
        // 0x1c2430: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c242c) {
            ctx->pc = 0x1C245Cu;
            goto label_1c245c;
        }
    }
    ctx->pc = 0x1C2434u;
label_1c2434:
    // 0x1c2434: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c2434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1c2438:
    // 0x1c2438: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c2438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c243c:
    // 0x1c243c: 0x8c4543c0  lw          $a1, 0x43C0($v0)
    ctx->pc = 0x1c243cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17344)));
label_1c2440:
    // 0x1c2440: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1c2440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1c2444:
    // 0x1c2444: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
label_1c2448:
    if (ctx->pc == 0x1C2448u) {
        ctx->pc = 0x1C2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2444u;
        // 0x1c2448: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C244Cu;
        goto label_1c244c;
    }
    ctx->pc = 0x1C2444u;
    {
        const bool branch_taken_0x1c2444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2444u;
        // 0x1c2448: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2444) {
            ctx->pc = 0x1C2484u;
            goto label_1c2484;
        }
    }
    ctx->pc = 0x1C244Cu;
label_1c244c:
    // 0x1c244c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c2450:
    // 0x1c2450: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1c2454:
    if (ctx->pc == 0x1C2454u) {
        ctx->pc = 0x1C2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2450u;
        // 0x1c2454: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2458u;
        goto label_1c2458;
    }
    ctx->pc = 0x1C2450u;
    {
        const bool branch_taken_0x1c2450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2450u;
        // 0x1c2454: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2450) {
            ctx->pc = 0x1C2488u;
            goto label_1c2488;
        }
    }
    ctx->pc = 0x1C2458u;
label_1c2458:
    // 0x1c2458: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c2458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1c245c:
    // 0x1c245c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c245cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c2460:
    // 0x1c2460: 0xc07fd18  jal         func_1FF460
label_1c2464:
    if (ctx->pc == 0x1C2464u) {
        ctx->pc = 0x1C2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2460u;
        // 0x1c2464: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2468u;
        goto label_1c2468;
    }
    ctx->pc = 0x1C2460u;
    SET_GPR_U32(ctx, 31, 0x1C2468u);
    ctx->pc = 0x1C2464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2460u;
    // 0x1c2464: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C2460u, 0x1C2468u)) {
        return;
    }
    ctx->pc = 0x1C2468u;
label_1c2468:
    // 0x1c2468: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c246c:
    if (ctx->pc == 0x1C246Cu) {
        ctx->pc = 0x1C246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2468u;
        // 0x1c246c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2470u;
        goto label_1c2470;
    }
    ctx->pc = 0x1C2468u;
    {
        const bool branch_taken_0x1c2468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2468u;
        // 0x1c246c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2468) {
            ctx->pc = 0x1C2484u;
            goto label_1c2484;
        }
    }
    ctx->pc = 0x1C2470u;
label_1c2470:
    // 0x1c2470: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1c2474:
    if (ctx->pc == 0x1C2474u) {
        ctx->pc = 0x1C2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2470u;
        // 0x1c2474: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2478u;
        goto label_1c2478;
    }
    ctx->pc = 0x1C2470u;
    {
        const bool branch_taken_0x1c2470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2470) {
            ctx->pc = 0x1C2474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2470u;
            // 0x1c2474: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2484u;
            goto label_1c2484;
        }
    }
    ctx->pc = 0x1C2478u;
label_1c2478:
    // 0x1c2478: 0xc06ba6c  jal         func_1AE9B0
label_1c247c:
    if (ctx->pc == 0x1C247Cu) {
        ctx->pc = 0x1C247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2478u;
        // 0x1c247c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2480u;
        goto label_1c2480;
    }
    ctx->pc = 0x1C2478u;
    SET_GPR_U32(ctx, 31, 0x1C2480u);
    ctx->pc = 0x1C247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2478u;
    // 0x1c247c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C2478u, 0x1C2480u)) {
        return;
    }
    ctx->pc = 0x1C2480u;
label_1c2480:
    // 0x1c2480: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2484:
    // 0x1c2484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2488:
    // 0x1c2488: 0x3e00008  jr          $ra
label_1c248c:
    if (ctx->pc == 0x1C248Cu) {
        ctx->pc = 0x1C248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2488u;
        // 0x1c248c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2490u;
        goto label_fallthrough_0x1c2488;
    }
    ctx->pc = 0x1C2488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2488u;
        // 0x1c248c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2488:
    ctx->pc = 0x1C2490u;
}
