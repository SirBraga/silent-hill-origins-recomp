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

// Function: sub_0030B1F0
// Address: 0x30b1f0 - 0x30b488
void sub_0030B1F0_0x30b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B1F0_0x30b1f0");
#endif

    switch (ctx->pc) {
        case 0x30b1f0u: goto label_30b1f0;
        case 0x30b1f4u: goto label_30b1f4;
        case 0x30b1f8u: goto label_30b1f8;
        case 0x30b1fcu: goto label_30b1fc;
        case 0x30b200u: goto label_30b200;
        case 0x30b204u: goto label_30b204;
        case 0x30b208u: goto label_30b208;
        case 0x30b20cu: goto label_30b20c;
        case 0x30b210u: goto label_30b210;
        case 0x30b214u: goto label_30b214;
        case 0x30b218u: goto label_30b218;
        case 0x30b21cu: goto label_30b21c;
        case 0x30b220u: goto label_30b220;
        case 0x30b224u: goto label_30b224;
        case 0x30b228u: goto label_30b228;
        case 0x30b22cu: goto label_30b22c;
        case 0x30b230u: goto label_30b230;
        case 0x30b234u: goto label_30b234;
        case 0x30b238u: goto label_30b238;
        case 0x30b23cu: goto label_30b23c;
        case 0x30b240u: goto label_30b240;
        case 0x30b244u: goto label_30b244;
        case 0x30b248u: goto label_30b248;
        case 0x30b24cu: goto label_30b24c;
        case 0x30b250u: goto label_30b250;
        case 0x30b254u: goto label_30b254;
        case 0x30b258u: goto label_30b258;
        case 0x30b25cu: goto label_30b25c;
        case 0x30b260u: goto label_30b260;
        case 0x30b264u: goto label_30b264;
        case 0x30b268u: goto label_30b268;
        case 0x30b26cu: goto label_30b26c;
        case 0x30b270u: goto label_30b270;
        case 0x30b274u: goto label_30b274;
        case 0x30b278u: goto label_30b278;
        case 0x30b27cu: goto label_30b27c;
        case 0x30b280u: goto label_30b280;
        case 0x30b284u: goto label_30b284;
        case 0x30b288u: goto label_30b288;
        case 0x30b28cu: goto label_30b28c;
        case 0x30b290u: goto label_30b290;
        case 0x30b294u: goto label_30b294;
        case 0x30b298u: goto label_30b298;
        case 0x30b29cu: goto label_30b29c;
        case 0x30b2a0u: goto label_30b2a0;
        case 0x30b2a4u: goto label_30b2a4;
        case 0x30b2a8u: goto label_30b2a8;
        case 0x30b2acu: goto label_30b2ac;
        case 0x30b2b0u: goto label_30b2b0;
        case 0x30b2b4u: goto label_30b2b4;
        case 0x30b2b8u: goto label_30b2b8;
        case 0x30b2bcu: goto label_30b2bc;
        case 0x30b2c0u: goto label_30b2c0;
        case 0x30b2c4u: goto label_30b2c4;
        case 0x30b2c8u: goto label_30b2c8;
        case 0x30b2ccu: goto label_30b2cc;
        case 0x30b2d0u: goto label_30b2d0;
        case 0x30b2d4u: goto label_30b2d4;
        case 0x30b2d8u: goto label_30b2d8;
        case 0x30b2dcu: goto label_30b2dc;
        case 0x30b2e0u: goto label_30b2e0;
        case 0x30b2e4u: goto label_30b2e4;
        case 0x30b2e8u: goto label_30b2e8;
        case 0x30b2ecu: goto label_30b2ec;
        case 0x30b2f0u: goto label_30b2f0;
        case 0x30b2f4u: goto label_30b2f4;
        case 0x30b2f8u: goto label_30b2f8;
        case 0x30b2fcu: goto label_30b2fc;
        case 0x30b300u: goto label_30b300;
        case 0x30b304u: goto label_30b304;
        case 0x30b308u: goto label_30b308;
        case 0x30b30cu: goto label_30b30c;
        case 0x30b310u: goto label_30b310;
        case 0x30b314u: goto label_30b314;
        case 0x30b318u: goto label_30b318;
        case 0x30b31cu: goto label_30b31c;
        case 0x30b320u: goto label_30b320;
        case 0x30b324u: goto label_30b324;
        case 0x30b328u: goto label_30b328;
        case 0x30b32cu: goto label_30b32c;
        case 0x30b330u: goto label_30b330;
        case 0x30b334u: goto label_30b334;
        case 0x30b338u: goto label_30b338;
        case 0x30b33cu: goto label_30b33c;
        case 0x30b340u: goto label_30b340;
        case 0x30b344u: goto label_30b344;
        case 0x30b348u: goto label_30b348;
        case 0x30b34cu: goto label_30b34c;
        case 0x30b350u: goto label_30b350;
        case 0x30b354u: goto label_30b354;
        case 0x30b358u: goto label_30b358;
        case 0x30b35cu: goto label_30b35c;
        case 0x30b360u: goto label_30b360;
        case 0x30b364u: goto label_30b364;
        case 0x30b368u: goto label_30b368;
        case 0x30b36cu: goto label_30b36c;
        case 0x30b370u: goto label_30b370;
        case 0x30b374u: goto label_30b374;
        case 0x30b378u: goto label_30b378;
        case 0x30b37cu: goto label_30b37c;
        case 0x30b380u: goto label_30b380;
        case 0x30b384u: goto label_30b384;
        case 0x30b388u: goto label_30b388;
        case 0x30b38cu: goto label_30b38c;
        case 0x30b390u: goto label_30b390;
        case 0x30b394u: goto label_30b394;
        case 0x30b398u: goto label_30b398;
        case 0x30b39cu: goto label_30b39c;
        case 0x30b3a0u: goto label_30b3a0;
        case 0x30b3a4u: goto label_30b3a4;
        case 0x30b3a8u: goto label_30b3a8;
        case 0x30b3acu: goto label_30b3ac;
        case 0x30b3b0u: goto label_30b3b0;
        case 0x30b3b4u: goto label_30b3b4;
        case 0x30b3b8u: goto label_30b3b8;
        case 0x30b3bcu: goto label_30b3bc;
        case 0x30b3c0u: goto label_30b3c0;
        case 0x30b3c4u: goto label_30b3c4;
        case 0x30b3c8u: goto label_30b3c8;
        case 0x30b3ccu: goto label_30b3cc;
        case 0x30b3d0u: goto label_30b3d0;
        case 0x30b3d4u: goto label_30b3d4;
        case 0x30b3d8u: goto label_30b3d8;
        case 0x30b3dcu: goto label_30b3dc;
        case 0x30b3e0u: goto label_30b3e0;
        case 0x30b3e4u: goto label_30b3e4;
        case 0x30b3e8u: goto label_30b3e8;
        case 0x30b3ecu: goto label_30b3ec;
        case 0x30b3f0u: goto label_30b3f0;
        case 0x30b3f4u: goto label_30b3f4;
        case 0x30b3f8u: goto label_30b3f8;
        case 0x30b3fcu: goto label_30b3fc;
        case 0x30b400u: goto label_30b400;
        case 0x30b404u: goto label_30b404;
        case 0x30b408u: goto label_30b408;
        case 0x30b40cu: goto label_30b40c;
        case 0x30b410u: goto label_30b410;
        case 0x30b414u: goto label_30b414;
        case 0x30b418u: goto label_30b418;
        case 0x30b41cu: goto label_30b41c;
        case 0x30b420u: goto label_30b420;
        case 0x30b424u: goto label_30b424;
        case 0x30b428u: goto label_30b428;
        case 0x30b42cu: goto label_30b42c;
        case 0x30b430u: goto label_30b430;
        case 0x30b434u: goto label_30b434;
        case 0x30b438u: goto label_30b438;
        case 0x30b43cu: goto label_30b43c;
        case 0x30b440u: goto label_30b440;
        case 0x30b444u: goto label_30b444;
        case 0x30b448u: goto label_30b448;
        case 0x30b44cu: goto label_30b44c;
        case 0x30b450u: goto label_30b450;
        case 0x30b454u: goto label_30b454;
        case 0x30b458u: goto label_30b458;
        case 0x30b45cu: goto label_30b45c;
        case 0x30b460u: goto label_30b460;
        case 0x30b464u: goto label_30b464;
        case 0x30b468u: goto label_30b468;
        case 0x30b46cu: goto label_30b46c;
        case 0x30b470u: goto label_30b470;
        case 0x30b474u: goto label_30b474;
        case 0x30b478u: goto label_30b478;
        case 0x30b47cu: goto label_30b47c;
        case 0x30b480u: goto label_30b480;
        case 0x30b484u: goto label_30b484;
        default: break;
    }

    ctx->pc = 0x30b1f0u;

label_30b1f0:
    // 0x30b1f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30b1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_30b1f4:
    // 0x30b1f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30b1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_30b1f8:
    // 0x30b1f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x30b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_30b1fc:
    // 0x30b1fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30b1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30b200:
    // 0x30b200: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30b200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_30b204:
    // 0x30b204: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30b204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b208:
    // 0x30b208: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30b208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_30b20c:
    // 0x30b20c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x30b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_30b210:
    // 0x30b210: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30b210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b214:
    // 0x30b214: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_30b218:
    if (ctx->pc == 0x30B218u) {
        ctx->pc = 0x30B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B214u;
        // 0x30b218: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B21Cu;
        goto label_30b21c;
    }
    ctx->pc = 0x30B214u;
    {
        const bool branch_taken_0x30b214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B214u;
        // 0x30b218: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b214) {
            ctx->pc = 0x30B230u;
            goto label_30b230;
        }
    }
    ctx->pc = 0x30B21Cu;
label_30b21c:
    // 0x30b21c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30b21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_30b220:
    // 0x30b220: 0xc092782  jal         func_249E08
label_30b224:
    if (ctx->pc == 0x30B224u) {
        ctx->pc = 0x30B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B220u;
        // 0x30b224: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B228u;
        goto label_30b228;
    }
    ctx->pc = 0x30B220u;
    SET_GPR_U32(ctx, 31, 0x30B228u);
    ctx->pc = 0x30B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B220u;
    // 0x30b224: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30B220u, 0x30B228u)) {
        return;
    }
    ctx->pc = 0x30B228u;
label_30b228:
    // 0x30b228: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_30b22c:
    if (ctx->pc == 0x30B22Cu) {
        ctx->pc = 0x30B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B228u;
        // 0x30b22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B230u;
        goto label_30b230;
    }
    ctx->pc = 0x30B228u;
    {
        const bool branch_taken_0x30b228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B228u;
        // 0x30b22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b228) {
            ctx->pc = 0x30B470u;
            goto label_30b470;
        }
    }
    ctx->pc = 0x30B230u;
label_30b230:
    // 0x30b230: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x30b230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_30b234:
    // 0x30b234: 0xc0b461c  jal         func_2D1870
label_30b238:
    if (ctx->pc == 0x30B238u) {
        ctx->pc = 0x30B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B234u;
        // 0x30b238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B23Cu;
        goto label_30b23c;
    }
    ctx->pc = 0x30B234u;
    SET_GPR_U32(ctx, 31, 0x30B23Cu);
    ctx->pc = 0x30B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B234u;
    // 0x30b238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D1870u, 0x30B234u, 0x30B23Cu)) {
        return;
    }
    ctx->pc = 0x30B23Cu;
label_30b23c:
    // 0x30b23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b240:
    // 0x30b240: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x30b240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_30b244:
    // 0x30b244: 0xc0b49a6  jal         func_2D2698
label_30b248:
    if (ctx->pc == 0x30B248u) {
        ctx->pc = 0x30B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B244u;
        // 0x30b248: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B24Cu;
        goto label_30b24c;
    }
    ctx->pc = 0x30B244u;
    SET_GPR_U32(ctx, 31, 0x30B24Cu);
    ctx->pc = 0x30B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B244u;
    // 0x30b248: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D2698u, 0x30B244u, 0x30B24Cu)) {
        return;
    }
    ctx->pc = 0x30B24Cu;
label_30b24c:
    // 0x30b24c: 0x27b1000c  addiu       $s1, $sp, 0xC
    ctx->pc = 0x30b24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_30b250:
    // 0x30b250: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x30b250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_30b254:
    // 0x30b254: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30b254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30b258:
    // 0x30b258: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30b258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b25c:
    // 0x30b25c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_30b260:
    if (ctx->pc == 0x30B260u) {
        ctx->pc = 0x30B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B25Cu;
        // 0x30b260: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B264u;
        goto label_30b264;
    }
    ctx->pc = 0x30B25Cu;
    {
        const bool branch_taken_0x30b25c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B25Cu;
        // 0x30b260: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b25c) {
            ctx->pc = 0x30B2A0u;
            goto label_30b2a0;
        }
    }
    ctx->pc = 0x30B264u;
label_30b264:
    // 0x30b264: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x30b264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_30b268:
    // 0x30b268: 0xc092782  jal         func_249E08
label_30b26c:
    if (ctx->pc == 0x30B26Cu) {
        ctx->pc = 0x30B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B268u;
        // 0x30b26c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B270u;
        goto label_30b270;
    }
    ctx->pc = 0x30B268u;
    SET_GPR_U32(ctx, 31, 0x30B270u);
    ctx->pc = 0x30B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B268u;
    // 0x30b26c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30B268u, 0x30B270u)) {
        return;
    }
    ctx->pc = 0x30B270u;
label_30b270:
    // 0x30b270: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_30b274:
    if (ctx->pc == 0x30B274u) {
        ctx->pc = 0x30B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B270u;
        // 0x30b274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B278u;
        goto label_30b278;
    }
    ctx->pc = 0x30B270u;
    {
        const bool branch_taken_0x30b270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B270u;
        // 0x30b274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b270) {
            ctx->pc = 0x30B2B8u;
            goto label_30b2b8;
        }
    }
    ctx->pc = 0x30B278u;
label_30b278:
    // 0x30b278: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30b278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b27c:
    // 0x30b27c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_30b280:
    if (ctx->pc == 0x30B280u) {
        ctx->pc = 0x30B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B27Cu;
        // 0x30b280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B284u;
        goto label_30b284;
    }
    ctx->pc = 0x30B27Cu;
    {
        const bool branch_taken_0x30b27c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B27Cu;
        // 0x30b280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b27c) {
            ctx->pc = 0x30B2A0u;
            goto label_30b2a0;
        }
    }
    ctx->pc = 0x30B284u;
label_30b284:
    // 0x30b284: 0xc092782  jal         func_249E08
label_30b288:
    if (ctx->pc == 0x30B288u) {
        ctx->pc = 0x30B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B284u;
        // 0x30b288: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B28Cu;
        goto label_30b28c;
    }
    ctx->pc = 0x30B284u;
    SET_GPR_U32(ctx, 31, 0x30B28Cu);
    ctx->pc = 0x30B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B284u;
    // 0x30b288: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30B284u, 0x30B28Cu)) {
        return;
    }
    ctx->pc = 0x30B28Cu;
label_30b28c:
    // 0x30b28c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_30b290:
    if (ctx->pc == 0x30B290u) {
        ctx->pc = 0x30B294u;
        goto label_30b294;
    }
    ctx->pc = 0x30B28Cu;
    {
        const bool branch_taken_0x30b28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b28c) {
            ctx->pc = 0x30B2A0u;
            goto label_30b2a0;
        }
    }
    ctx->pc = 0x30B294u;
label_30b294:
    // 0x30b294: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b298:
    // 0x30b298: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_30b29c:
    if (ctx->pc == 0x30B29Cu) {
        ctx->pc = 0x30B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B298u;
        // 0x30b29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2A0u;
        goto label_30b2a0;
    }
    ctx->pc = 0x30B298u;
    {
        const bool branch_taken_0x30b298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B298u;
        // 0x30b29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b298) {
            ctx->pc = 0x30B2B8u;
            goto label_30b2b8;
        }
    }
    ctx->pc = 0x30B2A0u;
label_30b2a0:
    // 0x30b2a0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_30b2a4:
    if (ctx->pc == 0x30B2A4u) {
        ctx->pc = 0x30B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2A0u;
        // 0x30b2a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2A8u;
        goto label_30b2a8;
    }
    ctx->pc = 0x30B2A0u;
    {
        const bool branch_taken_0x30b2a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2A0u;
        // 0x30b2a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2a0) {
            ctx->pc = 0x30B2B8u;
            goto label_30b2b8;
        }
    }
    ctx->pc = 0x30B2A8u;
label_30b2a8:
    // 0x30b2a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_30b2ac:
    // 0x30b2ac: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_30b2b0:
    // 0x30b2b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30b2b4:
    // 0x30b2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b2b8:
    // 0x30b2b8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_30b2bc:
    if (ctx->pc == 0x30B2BCu) {
        ctx->pc = 0x30B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2B8u;
        // 0x30b2bc: 0x27b10014  addiu       $s1, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2C0u;
        goto label_30b2c0;
    }
    ctx->pc = 0x30B2B8u;
    {
        const bool branch_taken_0x30b2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2B8u;
        // 0x30b2bc: 0x27b10014  addiu       $s1, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2b8) {
            ctx->pc = 0x30B408u;
            goto label_30b408;
        }
    }
    ctx->pc = 0x30B2C0u;
label_30b2c0:
    // 0x30b2c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30b2c4:
    // 0x30b2c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b2c8:
    // 0x30b2c8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_30b2cc:
    if (ctx->pc == 0x30B2CCu) {
        ctx->pc = 0x30B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2C8u;
        // 0x30b2cc: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2D0u;
        goto label_30b2d0;
    }
    ctx->pc = 0x30B2C8u;
    {
        const bool branch_taken_0x30b2c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2C8u;
        // 0x30b2cc: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2c8) {
            ctx->pc = 0x30B310u;
            goto label_30b310;
        }
    }
    ctx->pc = 0x30B2D0u;
label_30b2d0:
    // 0x30b2d0: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x30b2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_30b2d4:
    // 0x30b2d4: 0xc092782  jal         func_249E08
label_30b2d8:
    if (ctx->pc == 0x30B2D8u) {
        ctx->pc = 0x30B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2D4u;
        // 0x30b2d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2DCu;
        goto label_30b2dc;
    }
    ctx->pc = 0x30B2D4u;
    SET_GPR_U32(ctx, 31, 0x30B2DCu);
    ctx->pc = 0x30B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2D4u;
    // 0x30b2d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30B2D4u, 0x30B2DCu)) {
        return;
    }
    ctx->pc = 0x30B2DCu;
label_30b2dc:
    // 0x30b2dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_30b2e0:
    if (ctx->pc == 0x30B2E0u) {
        ctx->pc = 0x30B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2DCu;
        // 0x30b2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2E4u;
        goto label_30b2e4;
    }
    ctx->pc = 0x30B2DCu;
    {
        const bool branch_taken_0x30b2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2DCu;
        // 0x30b2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2dc) {
            ctx->pc = 0x30B328u;
            goto label_30b328;
        }
    }
    ctx->pc = 0x30B2E4u;
label_30b2e4:
    // 0x30b2e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b2e8:
    // 0x30b2e8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_30b2ec:
    if (ctx->pc == 0x30B2ECu) {
        ctx->pc = 0x30B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2E8u;
        // 0x30b2ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2F0u;
        goto label_30b2f0;
    }
    ctx->pc = 0x30B2E8u;
    {
        const bool branch_taken_0x30b2e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2E8u;
        // 0x30b2ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2e8) {
            ctx->pc = 0x30B310u;
            goto label_30b310;
        }
    }
    ctx->pc = 0x30B2F0u;
label_30b2f0:
    // 0x30b2f0: 0xc092782  jal         func_249E08
label_30b2f4:
    if (ctx->pc == 0x30B2F4u) {
        ctx->pc = 0x30B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2F0u;
        // 0x30b2f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2F8u;
        goto label_30b2f8;
    }
    ctx->pc = 0x30B2F0u;
    SET_GPR_U32(ctx, 31, 0x30B2F8u);
    ctx->pc = 0x30B2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2F0u;
    // 0x30b2f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30B2F0u, 0x30B2F8u)) {
        return;
    }
    ctx->pc = 0x30B2F8u;
label_30b2f8:
    // 0x30b2f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30b2fc:
    if (ctx->pc == 0x30B2FCu) {
        ctx->pc = 0x30B300u;
        goto label_30b300;
    }
    ctx->pc = 0x30B2F8u;
    {
        const bool branch_taken_0x30b2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b2f8) {
            ctx->pc = 0x30B310u;
            goto label_30b310;
        }
    }
    ctx->pc = 0x30B300u;
label_30b300:
    // 0x30b300: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b304:
    // 0x30b304: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_30b308:
    if (ctx->pc == 0x30B308u) {
        ctx->pc = 0x30B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B304u;
        // 0x30b308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B30Cu;
        goto label_30b30c;
    }
    ctx->pc = 0x30B304u;
    {
        const bool branch_taken_0x30b304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B304u;
        // 0x30b308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b304) {
            ctx->pc = 0x30B328u;
            goto label_30b328;
        }
    }
    ctx->pc = 0x30B30Cu;
label_30b30c:
    // 0x30b30c: 0x0  nop
    ctx->pc = 0x30b30cu;
    // NOP
label_30b310:
    // 0x30b310: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_30b314:
    if (ctx->pc == 0x30B314u) {
        ctx->pc = 0x30B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B310u;
        // 0x30b314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B318u;
        goto label_30b318;
    }
    ctx->pc = 0x30B310u;
    {
        const bool branch_taken_0x30b310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B310u;
        // 0x30b314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b310) {
            ctx->pc = 0x30B328u;
            goto label_30b328;
        }
    }
    ctx->pc = 0x30B318u;
label_30b318:
    // 0x30b318: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_30b31c:
    // 0x30b31c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_30b320:
    // 0x30b320: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30b320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30b324:
    // 0x30b324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b328:
    // 0x30b328: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_30b32c:
    if (ctx->pc == 0x30B32Cu) {
        ctx->pc = 0x30B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B328u;
        // 0x30b32c: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B330u;
        goto label_30b330;
    }
    ctx->pc = 0x30B328u;
    {
        const bool branch_taken_0x30b328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B328u;
        // 0x30b32c: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b328) {
            ctx->pc = 0x30B408u;
            goto label_30b408;
        }
    }
    ctx->pc = 0x30B330u;
label_30b330:
    // 0x30b330: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x30b330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_30b334:
    // 0x30b334: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x30b334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_30b338:
    // 0x30b338: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30b338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30b33c:
    // 0x30b33c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b340:
    // 0x30b340: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_30b344:
    if (ctx->pc == 0x30B344u) {
        ctx->pc = 0x30B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B340u;
        // 0x30b344: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B348u;
        goto label_30b348;
    }
    ctx->pc = 0x30B340u;
    {
        const bool branch_taken_0x30b340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B340u;
        // 0x30b344: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b340) {
            ctx->pc = 0x30B390u;
            goto label_30b390;
        }
    }
    ctx->pc = 0x30B348u;
label_30b348:
    // 0x30b348: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x30b348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_30b34c:
    // 0x30b34c: 0xc092782  jal         func_249E08
label_30b350:
    if (ctx->pc == 0x30B350u) {
        ctx->pc = 0x30B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B34Cu;
        // 0x30b350: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B354u;
        goto label_30b354;
    }
    ctx->pc = 0x30B34Cu;
    SET_GPR_U32(ctx, 31, 0x30B354u);
    ctx->pc = 0x30B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B34Cu;
    // 0x30b350: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30B34Cu, 0x30B354u)) {
        return;
    }
    ctx->pc = 0x30B354u;
label_30b354:
    // 0x30b354: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_30b358:
    if (ctx->pc == 0x30B358u) {
        ctx->pc = 0x30B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B354u;
        // 0x30b358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B35Cu;
        goto label_30b35c;
    }
    ctx->pc = 0x30B354u;
    {
        const bool branch_taken_0x30b354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B354u;
        // 0x30b358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b354) {
            ctx->pc = 0x30B400u;
            goto label_30b400;
        }
    }
    ctx->pc = 0x30B35Cu;
label_30b35c:
    // 0x30b35c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b360:
    // 0x30b360: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_30b364:
    if (ctx->pc == 0x30B364u) {
        ctx->pc = 0x30B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B360u;
        // 0x30b364: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B368u;
        goto label_30b368;
    }
    ctx->pc = 0x30B360u;
    {
        const bool branch_taken_0x30b360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B360u;
        // 0x30b364: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b360) {
            ctx->pc = 0x30B390u;
            goto label_30b390;
        }
    }
    ctx->pc = 0x30B368u;
label_30b368:
    // 0x30b368: 0xc092782  jal         func_249E08
label_30b36c:
    if (ctx->pc == 0x30B36Cu) {
        ctx->pc = 0x30B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B368u;
        // 0x30b36c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B370u;
        goto label_30b370;
    }
    ctx->pc = 0x30B368u;
    SET_GPR_U32(ctx, 31, 0x30B370u);
    ctx->pc = 0x30B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B368u;
    // 0x30b36c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30B368u, 0x30B370u)) {
        return;
    }
    ctx->pc = 0x30B370u;
label_30b370:
    // 0x30b370: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_30b374:
    if (ctx->pc == 0x30B374u) {
        ctx->pc = 0x30B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B370u;
        // 0x30b374: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B378u;
        goto label_30b378;
    }
    ctx->pc = 0x30B370u;
    {
        const bool branch_taken_0x30b370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B370u;
        // 0x30b374: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b370) {
            ctx->pc = 0x30B394u;
            goto label_30b394;
        }
    }
    ctx->pc = 0x30B378u;
label_30b378:
    // 0x30b378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b37c:
    // 0x30b37c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_30b380:
    if (ctx->pc == 0x30B380u) {
        ctx->pc = 0x30B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B37Cu;
        // 0x30b380: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B384u;
        goto label_30b384;
    }
    ctx->pc = 0x30B37Cu;
    {
        const bool branch_taken_0x30b37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B37Cu;
        // 0x30b380: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b37c) {
            ctx->pc = 0x30B394u;
            goto label_30b394;
        }
    }
    ctx->pc = 0x30B384u;
label_30b384:
    // 0x30b384: 0x1000001e  b           . + 4 + (0x1E << 2)
label_30b388:
    if (ctx->pc == 0x30B388u) {
        ctx->pc = 0x30B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B384u;
        // 0x30b388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B38Cu;
        goto label_30b38c;
    }
    ctx->pc = 0x30B384u;
    {
        const bool branch_taken_0x30b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B384u;
        // 0x30b388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b384) {
            ctx->pc = 0x30B400u;
            goto label_30b400;
        }
    }
    ctx->pc = 0x30B38Cu;
label_30b38c:
    // 0x30b38c: 0x0  nop
    ctx->pc = 0x30b38cu;
    // NOP
label_30b390:
    // 0x30b390: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x30b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_30b394:
    // 0x30b394: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30b394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b398:
    // 0x30b398: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_30b39c:
    if (ctx->pc == 0x30B39Cu) {
        ctx->pc = 0x30B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B398u;
        // 0x30b39c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3A0u;
        goto label_30b3a0;
    }
    ctx->pc = 0x30B398u;
    {
        const bool branch_taken_0x30b398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B398u;
        // 0x30b39c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b398) {
            ctx->pc = 0x30B3E0u;
            goto label_30b3e0;
        }
    }
    ctx->pc = 0x30B3A0u;
label_30b3a0:
    // 0x30b3a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b3a4:
    // 0x30b3a4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_30b3a8:
    if (ctx->pc == 0x30B3A8u) {
        ctx->pc = 0x30B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3A4u;
        // 0x30b3a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3ACu;
        goto label_30b3ac;
    }
    ctx->pc = 0x30B3A4u;
    {
        const bool branch_taken_0x30b3a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3A4u;
        // 0x30b3a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b3a4) {
            ctx->pc = 0x30B3C8u;
            goto label_30b3c8;
        }
    }
    ctx->pc = 0x30B3ACu;
label_30b3ac:
    // 0x30b3ac: 0xc092782  jal         func_249E08
label_30b3b0:
    if (ctx->pc == 0x30B3B0u) {
        ctx->pc = 0x30B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3ACu;
        // 0x30b3b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3B4u;
        goto label_30b3b4;
    }
    ctx->pc = 0x30B3ACu;
    SET_GPR_U32(ctx, 31, 0x30B3B4u);
    ctx->pc = 0x30B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B3ACu;
    // 0x30b3b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30B3ACu, 0x30B3B4u)) {
        return;
    }
    ctx->pc = 0x30B3B4u;
label_30b3b4:
    // 0x30b3b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30b3b8:
    if (ctx->pc == 0x30B3B8u) {
        ctx->pc = 0x30B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3B4u;
        // 0x30b3b8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3BCu;
        goto label_30b3bc;
    }
    ctx->pc = 0x30B3B4u;
    {
        const bool branch_taken_0x30b3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3B4u;
        // 0x30b3b8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b3b4) {
            ctx->pc = 0x30B3CCu;
            goto label_30b3cc;
        }
    }
    ctx->pc = 0x30B3BCu;
label_30b3bc:
    // 0x30b3bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b3c0:
    // 0x30b3c0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_30b3c4:
    if (ctx->pc == 0x30B3C4u) {
        ctx->pc = 0x30B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3C0u;
        // 0x30b3c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3C8u;
        goto label_30b3c8;
    }
    ctx->pc = 0x30B3C0u;
    {
        const bool branch_taken_0x30b3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3C0u;
        // 0x30b3c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b3c0) {
            ctx->pc = 0x30B400u;
            goto label_30b400;
        }
    }
    ctx->pc = 0x30B3C8u;
label_30b3c8:
    // 0x30b3c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x30b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_30b3cc:
    // 0x30b3cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30b3ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30b3d0:
    // 0x30b3d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b3d4:
    // 0x30b3d4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x30b3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30b3d8:
    // 0x30b3d8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_30b3dc:
    if (ctx->pc == 0x30B3DCu) {
        ctx->pc = 0x30B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3D8u;
        // 0x30b3dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3E0u;
        goto label_30b3e0;
    }
    ctx->pc = 0x30B3D8u;
    {
        const bool branch_taken_0x30b3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3D8u;
        // 0x30b3dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b3d8) {
            ctx->pc = 0x30B3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b3a0;
        }
    }
    ctx->pc = 0x30B3E0u;
label_30b3e0:
    // 0x30b3e0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_30b3e4:
    if (ctx->pc == 0x30B3E4u) {
        ctx->pc = 0x30B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3E0u;
        // 0x30b3e4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3E8u;
        goto label_30b3e8;
    }
    ctx->pc = 0x30B3E0u;
    {
        const bool branch_taken_0x30b3e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3E0u;
        // 0x30b3e4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b3e0) {
            ctx->pc = 0x30B3FCu;
            goto label_30b3fc;
        }
    }
    ctx->pc = 0x30B3E8u;
label_30b3e8:
    // 0x30b3e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x30b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_30b3ec:
    // 0x30b3ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30b3f0:
    // 0x30b3f0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x30b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_30b3f4:
    // 0x30b3f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30b3f8:
    // 0x30b3f8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x30b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_30b3fc:
    // 0x30b3fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b400:
    // 0x30b400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_30b404:
    if (ctx->pc == 0x30B404u) {
        ctx->pc = 0x30B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B400u;
        // 0x30b404: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B408u;
        goto label_30b408;
    }
    ctx->pc = 0x30B400u;
    {
        const bool branch_taken_0x30b400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B400u;
        // 0x30b404: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b400) {
            ctx->pc = 0x30B410u;
            goto label_30b410;
        }
    }
    ctx->pc = 0x30B408u;
label_30b408:
    // 0x30b408: 0x10000019  b           . + 4 + (0x19 << 2)
label_30b40c:
    if (ctx->pc == 0x30B40Cu) {
        ctx->pc = 0x30B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B408u;
        // 0x30b40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B410u;
        goto label_30b410;
    }
    ctx->pc = 0x30B408u;
    {
        const bool branch_taken_0x30b408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B408u;
        // 0x30b40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b408) {
            ctx->pc = 0x30B470u;
            goto label_30b470;
        }
    }
    ctx->pc = 0x30B410u;
label_30b410:
    // 0x30b410: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x30b410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_30b414:
    // 0x30b414: 0x8c4310d4  lw          $v1, 0x10D4($v0)
    ctx->pc = 0x30b414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4308)));
label_30b418:
    // 0x30b418: 0x60f809  jalr        $v1
label_30b41c:
    if (ctx->pc == 0x30B41Cu) {
        ctx->pc = 0x30B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B418u;
        // 0x30b41c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B420u;
        goto label_30b420;
    }
    ctx->pc = 0x30B418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30B420u);
        ctx->pc = 0x30B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B418u;
        // 0x30b41c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B418u, 0x30B420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30B420u;
label_30b420:
    // 0x30b420: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x30b420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_30b424:
    // 0x30b424: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_30b428:
    if (ctx->pc == 0x30B428u) {
        ctx->pc = 0x30B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B424u;
        // 0x30b428: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B42Cu;
        goto label_30b42c;
    }
    ctx->pc = 0x30B424u;
    {
        const bool branch_taken_0x30b424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B424u;
        // 0x30b428: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b424) {
            ctx->pc = 0x30B458u;
            goto label_30b458;
        }
    }
    ctx->pc = 0x30B42Cu;
label_30b42c:
    // 0x30b42c: 0x0  nop
    ctx->pc = 0x30b42cu;
    // NOP
label_30b430:
    // 0x30b430: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x30b430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_30b434:
    // 0x30b434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b438:
    // 0x30b438: 0xc0c2e54  jal         func_30B950
label_30b43c:
    if (ctx->pc == 0x30B43Cu) {
        ctx->pc = 0x30B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B438u;
        // 0x30b43c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B440u;
        goto label_30b440;
    }
    ctx->pc = 0x30B438u;
    SET_GPR_U32(ctx, 31, 0x30B440u);
    ctx->pc = 0x30B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B438u;
    // 0x30b43c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30B950u, 0x30B438u, 0x30B440u)) {
        return;
    }
    ctx->pc = 0x30B440u;
label_30b440:
    // 0x30b440: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
label_30b444:
    if (ctx->pc == 0x30B444u) {
        ctx->pc = 0x30B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B440u;
        // 0x30b444: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B448u;
        goto label_30b448;
    }
    ctx->pc = 0x30B440u;
    {
        const bool branch_taken_0x30b440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B440u;
        // 0x30b444: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b440) {
            ctx->pc = 0x30B408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b408;
        }
    }
    ctx->pc = 0x30B448u;
label_30b448:
    // 0x30b448: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30b448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30b44c:
    // 0x30b44c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x30b44cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30b450:
    // 0x30b450: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_30b454:
    if (ctx->pc == 0x30B454u) {
        ctx->pc = 0x30B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B450u;
        // 0x30b454: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B458u;
        goto label_30b458;
    }
    ctx->pc = 0x30B450u;
    {
        const bool branch_taken_0x30b450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B450u;
        // 0x30b454: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b450) {
            ctx->pc = 0x30B430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b430;
        }
    }
    ctx->pc = 0x30B458u;
label_30b458:
    // 0x30b458: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_30b45c:
    if (ctx->pc == 0x30B45Cu) {
        ctx->pc = 0x30B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B458u;
        // 0x30b45c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B460u;
        goto label_30b460;
    }
    ctx->pc = 0x30B458u;
    {
        const bool branch_taken_0x30b458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B458u;
        // 0x30b45c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b458) {
            ctx->pc = 0x30B470u;
            goto label_30b470;
        }
    }
    ctx->pc = 0x30B460u;
label_30b460:
    // 0x30b460: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_30b464:
    // 0x30b464: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_30b468:
    // 0x30b468: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30b468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_30b46c:
    // 0x30b46c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b470:
    // 0x30b470: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x30b470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30b474:
    // 0x30b474: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x30b474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30b478:
    // 0x30b478: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x30b478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30b47c:
    // 0x30b47c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30b47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30b480:
    // 0x30b480: 0x3e00008  jr          $ra
label_30b484:
    if (ctx->pc == 0x30B484u) {
        ctx->pc = 0x30B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B480u;
        // 0x30b484: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B488u;
        goto label_fallthrough_0x30b480;
    }
    ctx->pc = 0x30B480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B480u;
        // 0x30b484: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30b480:
    ctx->pc = 0x30B488u;
}
