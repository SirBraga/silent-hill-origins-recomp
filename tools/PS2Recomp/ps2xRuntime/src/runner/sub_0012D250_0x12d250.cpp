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

// Function: sub_0012D250
// Address: 0x12d250 - 0x12d9e8
void sub_0012D250_0x12d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D250_0x12d250");
#endif

    switch (ctx->pc) {
        case 0x12d2d4u: goto label_12d2d4;
        case 0x12d2dcu: goto label_12d2dc;
        case 0x12d2e4u: goto label_12d2e4;
        case 0x12d2f0u: goto label_12d2f0;
        case 0x12d300u: goto label_12d300;
        case 0x12d308u: goto label_12d308;
        case 0x12d33cu: goto label_12d33c;
        case 0x12d370u: goto label_12d370;
        case 0x12d3a4u: goto label_12d3a4;
        case 0x12d3b0u: goto label_12d3b0;
        case 0x12d3ccu: goto label_12d3cc;
        case 0x12d3e8u: goto label_12d3e8;
        case 0x12d408u: goto label_12d408;
        case 0x12d420u: goto label_12d420;
        case 0x12d430u: goto label_12d430;
        case 0x12d450u: goto label_12d450;
        case 0x12d470u: goto label_12d470;
        case 0x12d478u: goto label_12d478;
        case 0x12d48cu: goto label_12d48c;
        case 0x12d494u: goto label_12d494;
        case 0x12d4a4u: goto label_12d4a4;
        case 0x12d4b4u: goto label_12d4b4;
        case 0x12d4c4u: goto label_12d4c4;
        case 0x12d4d4u: goto label_12d4d4;
        case 0x12d4e4u: goto label_12d4e4;
        case 0x12d4f4u: goto label_12d4f4;
        case 0x12d504u: goto label_12d504;
        case 0x12d514u: goto label_12d514;
        case 0x12d524u: goto label_12d524;
        case 0x12d534u: goto label_12d534;
        case 0x12d544u: goto label_12d544;
        case 0x12d558u: goto label_12d558;
        case 0x12d56cu: goto label_12d56c;
        case 0x12d580u: goto label_12d580;
        case 0x12d594u: goto label_12d594;
        case 0x12d5a4u: goto label_12d5a4;
        case 0x12d5b4u: goto label_12d5b4;
        case 0x12d5c8u: goto label_12d5c8;
        case 0x12d5dcu: goto label_12d5dc;
        case 0x12d5ecu: goto label_12d5ec;
        case 0x12d5fcu: goto label_12d5fc;
        case 0x12d60cu: goto label_12d60c;
        case 0x12d61cu: goto label_12d61c;
        case 0x12d62cu: goto label_12d62c;
        case 0x12d638u: goto label_12d638;
        case 0x12d644u: goto label_12d644;
        case 0x12d650u: goto label_12d650;
        case 0x12d65cu: goto label_12d65c;
        case 0x12d668u: goto label_12d668;
        case 0x12d670u: goto label_12d670;
        case 0x12d678u: goto label_12d678;
        case 0x12d688u: goto label_12d688;
        case 0x12d698u: goto label_12d698;
        case 0x12d6a8u: goto label_12d6a8;
        case 0x12d6b8u: goto label_12d6b8;
        case 0x12d6c8u: goto label_12d6c8;
        case 0x12d6d8u: goto label_12d6d8;
        case 0x12d6e8u: goto label_12d6e8;
        case 0x12d6f8u: goto label_12d6f8;
        case 0x12d708u: goto label_12d708;
        case 0x12d718u: goto label_12d718;
        case 0x12d728u: goto label_12d728;
        case 0x12d730u: goto label_12d730;
        case 0x12d738u: goto label_12d738;
        case 0x12d740u: goto label_12d740;
        case 0x12d748u: goto label_12d748;
        case 0x12d754u: goto label_12d754;
        case 0x12d760u: goto label_12d760;
        case 0x12d76cu: goto label_12d76c;
        case 0x12d778u: goto label_12d778;
        case 0x12d784u: goto label_12d784;
        case 0x12d790u: goto label_12d790;
        case 0x12d79cu: goto label_12d79c;
        case 0x12d7a8u: goto label_12d7a8;
        case 0x12d7b0u: goto label_12d7b0;
        case 0x12d7b8u: goto label_12d7b8;
        case 0x12d7c0u: goto label_12d7c0;
        case 0x12d7c8u: goto label_12d7c8;
        case 0x12d7dcu: goto label_12d7dc;
        case 0x12d7fcu: goto label_12d7fc;
        case 0x12d814u: goto label_12d814;
        case 0x12d854u: goto label_12d854;
        case 0x12d888u: goto label_12d888;
        case 0x12d898u: goto label_12d898;
        case 0x12d8a0u: goto label_12d8a0;
        case 0x12d8b8u: goto label_12d8b8;
        case 0x12d8c0u: goto label_12d8c0;
        case 0x12d8d8u: goto label_12d8d8;
        case 0x12d8e4u: goto label_12d8e4;
        case 0x12d8ecu: goto label_12d8ec;
        case 0x12d8f4u: goto label_12d8f4;
        case 0x12d914u: goto label_12d914;
        case 0x12d930u: goto label_12d930;
        case 0x12d944u: goto label_12d944;
        case 0x12d950u: goto label_12d950;
        case 0x12d95cu: goto label_12d95c;
        case 0x12d968u: goto label_12d968;
        case 0x12d980u: goto label_12d980;
        case 0x12d98cu: goto label_12d98c;
        case 0x12d9a4u: goto label_12d9a4;
        case 0x12d9b0u: goto label_12d9b0;
        default: break;
    }

    ctx->pc = 0x12d250u;

    // 0x12d250: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x12d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x12d254: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x12d254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x12d258: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x12d258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x12d25c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x12d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x12d260: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12d260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12d264: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x12d264u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x12d268: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x12d268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x12d26c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x12d26cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d270: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x12d270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x12d274: 0x2463e008  addiu       $v1, $v1, -0x1FF8
    ctx->pc = 0x12d274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959112));
    // 0x12d278: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x12d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x12d27c: 0x24c6dfc8  addiu       $a2, $a2, -0x2038
    ctx->pc = 0x12d27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959048));
    // 0x12d280: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x12d280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x12d284: 0x24e7dfb0  addiu       $a3, $a3, -0x2050
    ctx->pc = 0x12d284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959024));
    // 0x12d288: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x12d288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x12d28c: 0x2442e128  addiu       $v0, $v0, -0x1ED8
    ctx->pc = 0x12d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959400));
    // 0x12d290: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x12d290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x12d294: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x12d294u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x12d298: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x12d298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x12d29c: 0x2508e148  addiu       $t0, $t0, -0x1EB8
    ctx->pc = 0x12d29cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959432));
    // 0x12d2a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x12d2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x12d2a4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x12d2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x12d2a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12d2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12d2ac: 0xafc30048  sw          $v1, 0x48($fp)
    ctx->pc = 0x12d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 3));
    // 0x12d2b0: 0xafc60084  sw          $a2, 0x84($fp)
    ctx->pc = 0x12d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 6));
    // 0x12d2b4: 0xafc70314  sw          $a3, 0x314($fp)
    ctx->pc = 0x12d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 788), GPR_U32(ctx, 7));
    // 0x12d2b8: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x12d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x12d2bc: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x12d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x12d2c0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x12d2c4: 0xafc80034  sw          $t0, 0x34($fp)
    ctx->pc = 0x12d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 8));
    // 0x12d2c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12d2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12d2cc: 0xc0644e0  jal         func_191380
    ctx->pc = 0x12D2CCu;
    SET_GPR_U32(ctx, 31, 0x12D2D4u);
    ctx->pc = 0x12D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D2CCu;
    // 0x12d2d0: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191380u, 0x12D2CCu, 0x12D2D4u)) {
        return;
    }
    ctx->pc = 0x12D2D4u;
label_12d2d4:
    // 0x12d2d4: 0xc04df10  jal         func_137C40
    ctx->pc = 0x12D2D4u;
    SET_GPR_U32(ctx, 31, 0x12D2DCu);
    ctx->pc = 0x12D2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D2D4u;
    // 0x12d2d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137C40u, 0x12D2D4u, 0x12D2DCu)) {
        return;
    }
    ctx->pc = 0x12D2DCu;
label_12d2dc:
    // 0x12d2dc: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x12D2DCu;
    SET_GPR_U32(ctx, 31, 0x12D2E4u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x12D2DCu, 0x12D2E4u)) {
        return;
    }
    ctx->pc = 0x12D2E4u;
label_12d2e4:
    // 0x12d2e4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x12d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x12d2e8: 0xc05a2a4  jal         func_168A90
    ctx->pc = 0x12D2E8u;
    SET_GPR_U32(ctx, 31, 0x12D2F0u);
    ctx->pc = 0x12D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D2E8u;
    // 0x12d2ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x168A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168A90u, 0x12D2E8u, 0x12D2F0u)) {
        return;
    }
    ctx->pc = 0x12D2F0u;
label_12d2f0:
    // 0x12d2f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12d2f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12d2f4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12d2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2f8: 0xc04cc8e  jal         func_133238
    ctx->pc = 0x12D2F8u;
    SET_GPR_U32(ctx, 31, 0x12D300u);
    ctx->pc = 0x12D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D2F8u;
    // 0x12d2fc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x133238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x133238u, 0x12D2F8u, 0x12D300u)) {
        return;
    }
    ctx->pc = 0x12D300u;
label_12d300:
    // 0x12d300: 0xc04e356  jal         func_138D58
    ctx->pc = 0x12D300u;
    SET_GPR_U32(ctx, 31, 0x12D308u);
    ctx->pc = 0x12D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D300u;
    // 0x12d304: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x138D58u, 0x12D300u, 0x12D308u)) {
        return;
    }
    ctx->pc = 0x12D308u;
label_12d308:
    // 0x12d308: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d30c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x12d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x12d310: 0x8c844780  lw          $a0, 0x4780($a0)
    ctx->pc = 0x12d310u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4780u));
    // 0x12d314: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x12d314u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x12d318: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D318u;
    {
        const bool branch_taken_0x12d318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D318u;
        // 0x12d31c: 0x8fc500c4  lw          $a1, 0xC4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d318) {
            ctx->pc = 0x12D33Cu;
            goto label_12d33c;
        }
    }
    ctx->pc = 0x12D320u;
    // 0x12d320: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12d324: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D324u;
    {
        const bool branch_taken_0x12d324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d324) {
            ctx->pc = 0x12D328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D324u;
            // 0x12d328: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D340u;
            goto label_12d340;
        }
    }
    ctx->pc = 0x12D32Cu;
    // 0x12d32c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12d330: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d334: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12D334u;
    SET_GPR_U32(ctx, 31, 0x12D33Cu);
    ctx->pc = 0x12D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D334u;
    // 0x12d338: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12D334u, 0x12D33Cu)) {
        return;
    }
    ctx->pc = 0x12D33Cu;
label_12d33c:
    // 0x12d33c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x12d33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_12d340:
    // 0x12d340: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x12d340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x12d344: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x12d344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
    // 0x12d348: 0x8c444770  lw          $a0, 0x4770($v0)
    ctx->pc = 0x12d348u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4770u));
    // 0x12d34c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D34Cu;
    {
        const bool branch_taken_0x12d34c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D34Cu;
        // 0x12d350: 0x8fc500c4  lw          $a1, 0xC4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d34c) {
            ctx->pc = 0x12D370u;
            goto label_12d370;
        }
    }
    ctx->pc = 0x12D354u;
    // 0x12d354: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12d358: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D358u;
    {
        const bool branch_taken_0x12d358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D358u;
        // 0x12d35c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d358) {
            ctx->pc = 0x12D374u;
            goto label_12d374;
        }
    }
    ctx->pc = 0x12D360u;
    // 0x12d360: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12d360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12d364: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d368: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12D368u;
    SET_GPR_U32(ctx, 31, 0x12D370u);
    ctx->pc = 0x12D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D368u;
    // 0x12d36c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12D368u, 0x12D370u)) {
        return;
    }
    ctx->pc = 0x12D370u;
label_12d370:
    // 0x12d370: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x12d370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_12d374:
    // 0x12d374: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12d374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x12d378: 0x8ca31a70  lw          $v1, 0x1A70($a1)
    ctx->pc = 0x12d378u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x12d37c: 0x8c4446a8  lw          $a0, 0x46A8($v0)
    ctx->pc = 0x12d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18088)));
    // 0x12d380: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D380u;
    {
        const bool branch_taken_0x12d380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d380) {
            ctx->pc = 0x12D384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D380u;
            // 0x12d384: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D3A8u;
            goto label_12d3a8;
        }
    }
    ctx->pc = 0x12D388u;
    // 0x12d388: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12d388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12d38c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D38Cu;
    {
        const bool branch_taken_0x12d38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d38c) {
            ctx->pc = 0x12D390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D38Cu;
            // 0x12d390: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D3A8u;
            goto label_12d3a8;
        }
    }
    ctx->pc = 0x12D394u;
    // 0x12d394: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12d394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12d398: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d39c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12D39Cu;
    SET_GPR_U32(ctx, 31, 0x12D3A4u);
    ctx->pc = 0x12D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D39Cu;
    // 0x12d3a0: 0xafbe0004  sw          $fp, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12D39Cu, 0x12D3A4u)) {
        return;
    }
    ctx->pc = 0x12D3A4u;
label_12d3a4:
    // 0x12d3a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12d3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12d3a8:
    // 0x12d3a8: 0xc04d0aa  jal         func_1342A8
    ctx->pc = 0x12D3A8u;
    SET_GPR_U32(ctx, 31, 0x12D3B0u);
    ctx->pc = 0x12D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3A8u;
    // 0x12d3ac: 0x27d10038  addiu       $s1, $fp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1342A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1342A8u, 0x12D3A8u, 0x12D3B0u)) {
        return;
    }
    ctx->pc = 0x12D3B0u;
label_12d3b0:
    // 0x12d3b0: 0x27c214c4  addiu       $v0, $fp, 0x14C4
    ctx->pc = 0x12d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 5316));
    // 0x12d3b4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x12d3b8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x12d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12d3bc: 0x24a58868  addiu       $a1, $a1, -0x7798
    ctx->pc = 0x12d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936680));
    // 0x12d3c0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x12d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x12d3c4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D3C4u;
    SET_GPR_U32(ctx, 31, 0x12D3CCu);
    ctx->pc = 0x12D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3C4u;
    // 0x12d3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D3C4u, 0x12D3CCu)) {
        return;
    }
    ctx->pc = 0x12D3CCu;
label_12d3cc:
    // 0x12d3cc: 0x27c3196c  addiu       $v1, $fp, 0x196C
    ctx->pc = 0x12d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 6508));
    // 0x12d3d0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12d3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x12d3d4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3dc: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x12d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x12d3e0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D3E0u;
    SET_GPR_U32(ctx, 31, 0x12D3E8u);
    ctx->pc = 0x12D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3E0u;
    // 0x12d3e4: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D3E0u, 0x12D3E8u)) {
        return;
    }
    ctx->pc = 0x12D3E8u;
label_12d3e8:
    // 0x12d3e8: 0x27c41974  addiu       $a0, $fp, 0x1974
    ctx->pc = 0x12d3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6516));
    // 0x12d3ec: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12d3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x12d3f0: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x12d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x12d3f4: 0x24a586b8  addiu       $a1, $a1, -0x7948
    ctx->pc = 0x12d3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936248));
    // 0x12d3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3fc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x12d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12d400: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D400u;
    SET_GPR_U32(ctx, 31, 0x12D408u);
    ctx->pc = 0x12D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D400u;
    // 0x12d404: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D400u, 0x12D408u)) {
        return;
    }
    ctx->pc = 0x12D408u;
label_12d408:
    // 0x12d408: 0x27c31630  addiu       $v1, $fp, 0x1630
    ctx->pc = 0x12d408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 5680));
    // 0x12d40c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12d40cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x12d410: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x12d410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x12d414: 0x24a586c0  addiu       $a1, $a1, -0x7940
    ctx->pc = 0x12d414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936256));
    // 0x12d418: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D418u;
    SET_GPR_U32(ctx, 31, 0x12D420u);
    ctx->pc = 0x12D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D418u;
    // 0x12d41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D418u, 0x12D420u)) {
        return;
    }
    ctx->pc = 0x12D420u;
label_12d420:
    // 0x12d420: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d428: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D428u;
    SET_GPR_U32(ctx, 31, 0x12D430u);
    ctx->pc = 0x12D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D428u;
    // 0x12d42c: 0x24a54600  addiu       $a1, $a1, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D428u, 0x12D430u)) {
        return;
    }
    ctx->pc = 0x12D430u;
label_12d430:
    // 0x12d430: 0x27c41958  addiu       $a0, $fp, 0x1958
    ctx->pc = 0x12d430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6488));
    // 0x12d434: 0x27c216c0  addiu       $v0, $fp, 0x16C0
    ctx->pc = 0x12d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 5824));
    // 0x12d438: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x12d438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x12d43c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d440: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x12d440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x12d444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d448: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D448u;
    SET_GPR_U32(ctx, 31, 0x12D450u);
    ctx->pc = 0x12D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D448u;
    // 0x12d44c: 0x24a54608  addiu       $a1, $a1, 0x4608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D448u, 0x12D450u)) {
        return;
    }
    ctx->pc = 0x12D450u;
label_12d450:
    // 0x12d450: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x12d450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x12d454: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x12d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12d458: 0x2610eea8  addiu       $s0, $s0, -0x1158
    ctx->pc = 0x12d458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962856));
    // 0x12d45c: 0x8fb70028  lw          $s7, 0x28($sp)
    ctx->pc = 0x12d45cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d460: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x12d460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x12d464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d468: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D468u;
    SET_GPR_U32(ctx, 31, 0x12D470u);
    ctx->pc = 0x12D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D468u;
    // 0x12d46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D468u, 0x12D470u)) {
        return;
    }
    ctx->pc = 0x12D470u;
label_12d470:
    // 0x12d470: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D470u;
    SET_GPR_U32(ctx, 31, 0x12D478u);
    ctx->pc = 0x12D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D470u;
    // 0x12d474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D470u, 0x12D478u)) {
        return;
    }
    ctx->pc = 0x12D478u;
label_12d478:
    // 0x12d478: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x12d478u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x12d47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d480: 0x2610f950  addiu       $s0, $s0, -0x6B0
    ctx->pc = 0x12d480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965584));
    // 0x12d484: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D484u;
    SET_GPR_U32(ctx, 31, 0x12D48Cu);
    ctx->pc = 0x12D488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D484u;
    // 0x12d488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D484u, 0x12D48Cu)) {
        return;
    }
    ctx->pc = 0x12D48Cu;
label_12d48c:
    // 0x12d48c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D48Cu;
    SET_GPR_U32(ctx, 31, 0x12D494u);
    ctx->pc = 0x12D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D48Cu;
    // 0x12d490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D48Cu, 0x12D494u)) {
        return;
    }
    ctx->pc = 0x12D494u;
label_12d494:
    // 0x12d494: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d498: 0x24a545e0  addiu       $a1, $a1, 0x45E0
    ctx->pc = 0x12d498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17888));
    // 0x12d49c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D49Cu;
    SET_GPR_U32(ctx, 31, 0x12D4A4u);
    ctx->pc = 0x12D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D49Cu;
    // 0x12d4a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D49Cu, 0x12D4A4u)) {
        return;
    }
    ctx->pc = 0x12D4A4u;
label_12d4a4:
    // 0x12d4a4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d4a8: 0x24a546b0  addiu       $a1, $a1, 0x46B0
    ctx->pc = 0x12d4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18096));
    // 0x12d4ac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D4ACu;
    SET_GPR_U32(ctx, 31, 0x12D4B4u);
    ctx->pc = 0x12D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D4ACu;
    // 0x12d4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D4ACu, 0x12D4B4u)) {
        return;
    }
    ctx->pc = 0x12D4B4u;
label_12d4b4:
    // 0x12d4b4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d4b8: 0x24a546b8  addiu       $a1, $a1, 0x46B8
    ctx->pc = 0x12d4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18104));
    // 0x12d4bc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D4BCu;
    SET_GPR_U32(ctx, 31, 0x12D4C4u);
    ctx->pc = 0x12D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D4BCu;
    // 0x12d4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D4BCu, 0x12D4C4u)) {
        return;
    }
    ctx->pc = 0x12D4C4u;
label_12d4c4:
    // 0x12d4c4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d4c8: 0x24a546c8  addiu       $a1, $a1, 0x46C8
    ctx->pc = 0x12d4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18120));
    // 0x12d4cc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D4CCu;
    SET_GPR_U32(ctx, 31, 0x12D4D4u);
    ctx->pc = 0x12D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D4CCu;
    // 0x12d4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D4CCu, 0x12D4D4u)) {
        return;
    }
    ctx->pc = 0x12D4D4u;
label_12d4d4:
    // 0x12d4d4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d4d8: 0x24a546c0  addiu       $a1, $a1, 0x46C0
    ctx->pc = 0x12d4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18112));
    // 0x12d4dc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D4DCu;
    SET_GPR_U32(ctx, 31, 0x12D4E4u);
    ctx->pc = 0x12D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D4DCu;
    // 0x12d4e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D4DCu, 0x12D4E4u)) {
        return;
    }
    ctx->pc = 0x12D4E4u;
label_12d4e4:
    // 0x12d4e4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d4e8: 0x24a546e8  addiu       $a1, $a1, 0x46E8
    ctx->pc = 0x12d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18152));
    // 0x12d4ec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D4ECu;
    SET_GPR_U32(ctx, 31, 0x12D4F4u);
    ctx->pc = 0x12D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D4ECu;
    // 0x12d4f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D4ECu, 0x12D4F4u)) {
        return;
    }
    ctx->pc = 0x12D4F4u;
label_12d4f4:
    // 0x12d4f4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d4f8: 0x24a546f0  addiu       $a1, $a1, 0x46F0
    ctx->pc = 0x12d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18160));
    // 0x12d4fc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D4FCu;
    SET_GPR_U32(ctx, 31, 0x12D504u);
    ctx->pc = 0x12D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D4FCu;
    // 0x12d500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D4FCu, 0x12D504u)) {
        return;
    }
    ctx->pc = 0x12D504u;
label_12d504:
    // 0x12d504: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d508: 0x24a546f8  addiu       $a1, $a1, 0x46F8
    ctx->pc = 0x12d508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18168));
    // 0x12d50c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D50Cu;
    SET_GPR_U32(ctx, 31, 0x12D514u);
    ctx->pc = 0x12D510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D50Cu;
    // 0x12d510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D50Cu, 0x12D514u)) {
        return;
    }
    ctx->pc = 0x12D514u;
label_12d514:
    // 0x12d514: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d518: 0x24a54700  addiu       $a1, $a1, 0x4700
    ctx->pc = 0x12d518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18176));
    // 0x12d51c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D51Cu;
    SET_GPR_U32(ctx, 31, 0x12D524u);
    ctx->pc = 0x12D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D51Cu;
    // 0x12d520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D51Cu, 0x12D524u)) {
        return;
    }
    ctx->pc = 0x12D524u;
label_12d524:
    // 0x12d524: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d528: 0x24a54708  addiu       $a1, $a1, 0x4708
    ctx->pc = 0x12d528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18184));
    // 0x12d52c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D52Cu;
    SET_GPR_U32(ctx, 31, 0x12D534u);
    ctx->pc = 0x12D530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D52Cu;
    // 0x12d530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D52Cu, 0x12D534u)) {
        return;
    }
    ctx->pc = 0x12D534u;
label_12d534:
    // 0x12d534: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d538: 0x24a54720  addiu       $a1, $a1, 0x4720
    ctx->pc = 0x12d538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18208));
    // 0x12d53c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D53Cu;
    SET_GPR_U32(ctx, 31, 0x12D544u);
    ctx->pc = 0x12D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D53Cu;
    // 0x12d540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D53Cu, 0x12D544u)) {
        return;
    }
    ctx->pc = 0x12D544u;
label_12d544:
    // 0x12d544: 0x3c16006b  lui         $s6, 0x6B
    ctx->pc = 0x12d544u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
    // 0x12d548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d54c: 0x26d64728  addiu       $s6, $s6, 0x4728
    ctx->pc = 0x12d54cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 18216));
    // 0x12d550: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D550u;
    SET_GPR_U32(ctx, 31, 0x12D558u);
    ctx->pc = 0x12D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D550u;
    // 0x12d554: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D550u, 0x12D558u)) {
        return;
    }
    ctx->pc = 0x12D558u;
label_12d558:
    // 0x12d558: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x12d558u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x12d55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d560: 0x26b54730  addiu       $s5, $s5, 0x4730
    ctx->pc = 0x12d560u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 18224));
    // 0x12d564: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D564u;
    SET_GPR_U32(ctx, 31, 0x12D56Cu);
    ctx->pc = 0x12D568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D564u;
    // 0x12d568: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D564u, 0x12D56Cu)) {
        return;
    }
    ctx->pc = 0x12D56Cu;
label_12d56c:
    // 0x12d56c: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x12d56cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    // 0x12d570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d574: 0x26944738  addiu       $s4, $s4, 0x4738
    ctx->pc = 0x12d574u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 18232));
    // 0x12d578: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D578u;
    SET_GPR_U32(ctx, 31, 0x12D580u);
    ctx->pc = 0x12D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D578u;
    // 0x12d57c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D578u, 0x12D580u)) {
        return;
    }
    ctx->pc = 0x12D580u;
label_12d580:
    // 0x12d580: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x12d580u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x12d584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d588: 0x26734740  addiu       $s3, $s3, 0x4740
    ctx->pc = 0x12d588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 18240));
    // 0x12d58c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D58Cu;
    SET_GPR_U32(ctx, 31, 0x12D594u);
    ctx->pc = 0x12D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D58Cu;
    // 0x12d590: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D58Cu, 0x12D594u)) {
        return;
    }
    ctx->pc = 0x12D594u;
label_12d594:
    // 0x12d594: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x12d594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x12d598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d59c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D59Cu;
    SET_GPR_U32(ctx, 31, 0x12D5A4u);
    ctx->pc = 0x12D5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D59Cu;
    // 0x12d5a0: 0x24a5bd80  addiu       $a1, $a1, -0x4280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D59Cu, 0x12D5A4u)) {
        return;
    }
    ctx->pc = 0x12D5A4u;
label_12d5a4:
    // 0x12d5a4: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x12d5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x12d5a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5ac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D5ACu;
    SET_GPR_U32(ctx, 31, 0x12D5B4u);
    ctx->pc = 0x12D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5ACu;
    // 0x12d5b0: 0x24a5bd88  addiu       $a1, $a1, -0x4278 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D5ACu, 0x12D5B4u)) {
        return;
    }
    ctx->pc = 0x12D5B4u;
label_12d5b4:
    // 0x12d5b4: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x12d5b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x12d5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5bc: 0x26524710  addiu       $s2, $s2, 0x4710
    ctx->pc = 0x12d5bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 18192));
    // 0x12d5c0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D5C0u;
    SET_GPR_U32(ctx, 31, 0x12D5C8u);
    ctx->pc = 0x12D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5C0u;
    // 0x12d5c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D5C0u, 0x12D5C8u)) {
        return;
    }
    ctx->pc = 0x12D5C8u;
label_12d5c8:
    // 0x12d5c8: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x12d5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x12d5cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5d0: 0x26104718  addiu       $s0, $s0, 0x4718
    ctx->pc = 0x12d5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18200));
    // 0x12d5d4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D5D4u;
    SET_GPR_U32(ctx, 31, 0x12D5DCu);
    ctx->pc = 0x12D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5D4u;
    // 0x12d5d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D5D4u, 0x12D5DCu)) {
        return;
    }
    ctx->pc = 0x12D5DCu;
label_12d5dc:
    // 0x12d5dc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12d5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12d5e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5e4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D5E4u;
    SET_GPR_U32(ctx, 31, 0x12D5ECu);
    ctx->pc = 0x12D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5E4u;
    // 0x12d5e8: 0x24a5f8e8  addiu       $a1, $a1, -0x718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D5E4u, 0x12D5ECu)) {
        return;
    }
    ctx->pc = 0x12D5ECu;
label_12d5ec:
    // 0x12d5ec: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12d5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12d5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5f4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D5F4u;
    SET_GPR_U32(ctx, 31, 0x12D5FCu);
    ctx->pc = 0x12D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5F4u;
    // 0x12d5f8: 0x24a5f8f0  addiu       $a1, $a1, -0x710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D5F4u, 0x12D5FCu)) {
        return;
    }
    ctx->pc = 0x12D5FCu;
label_12d5fc:
    // 0x12d5fc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12d5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12d600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d604: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D604u;
    SET_GPR_U32(ctx, 31, 0x12D60Cu);
    ctx->pc = 0x12D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D604u;
    // 0x12d608: 0x24a5f8f8  addiu       $a1, $a1, -0x708 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D604u, 0x12D60Cu)) {
        return;
    }
    ctx->pc = 0x12D60Cu;
label_12d60c:
    // 0x12d60c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12d60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12d610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d614: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D614u;
    SET_GPR_U32(ctx, 31, 0x12D61Cu);
    ctx->pc = 0x12D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D614u;
    // 0x12d618: 0x24a5f900  addiu       $a1, $a1, -0x700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D614u, 0x12D61Cu)) {
        return;
    }
    ctx->pc = 0x12D61Cu;
label_12d61c:
    // 0x12d61c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x12d61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x12d620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d624: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12D624u;
    SET_GPR_U32(ctx, 31, 0x12D62Cu);
    ctx->pc = 0x12D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D624u;
    // 0x12d628: 0x24a5f910  addiu       $a1, $a1, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12D624u, 0x12D62Cu)) {
        return;
    }
    ctx->pc = 0x12D62Cu;
label_12d62c:
    // 0x12d62c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d630: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D630u;
    SET_GPR_U32(ctx, 31, 0x12D638u);
    ctx->pc = 0x12D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D630u;
    // 0x12d634: 0x248446d0  addiu       $a0, $a0, 0x46D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D630u, 0x12D638u)) {
        return;
    }
    ctx->pc = 0x12D638u;
label_12d638:
    // 0x12d638: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d63c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D63Cu;
    SET_GPR_U32(ctx, 31, 0x12D644u);
    ctx->pc = 0x12D640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D63Cu;
    // 0x12d640: 0x248446d8  addiu       $a0, $a0, 0x46D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D63Cu, 0x12D644u)) {
        return;
    }
    ctx->pc = 0x12D644u;
label_12d644:
    // 0x12d644: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d648: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D648u;
    SET_GPR_U32(ctx, 31, 0x12D650u);
    ctx->pc = 0x12D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D648u;
    // 0x12d64c: 0x248446e0  addiu       $a0, $a0, 0x46E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D648u, 0x12D650u)) {
        return;
    }
    ctx->pc = 0x12D650u;
label_12d650:
    // 0x12d650: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d654: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D654u;
    SET_GPR_U32(ctx, 31, 0x12D65Cu);
    ctx->pc = 0x12D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D654u;
    // 0x12d658: 0x248446a0  addiu       $a0, $a0, 0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D654u, 0x12D65Cu)) {
        return;
    }
    ctx->pc = 0x12D65Cu;
label_12d65c:
    // 0x12d65c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x12d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x12d660: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D660u;
    SET_GPR_U32(ctx, 31, 0x12D668u);
    ctx->pc = 0x12D664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D660u;
    // 0x12d664: 0x24a446a8  addiu       $a0, $a1, 0x46A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 18088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D660u, 0x12D668u)) {
        return;
    }
    ctx->pc = 0x12D668u;
label_12d668:
    // 0x12d668: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D668u;
    SET_GPR_U32(ctx, 31, 0x12D670u);
    ctx->pc = 0x12D66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D668u;
    // 0x12d66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D668u, 0x12D670u)) {
        return;
    }
    ctx->pc = 0x12D670u;
label_12d670:
    // 0x12d670: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D670u;
    SET_GPR_U32(ctx, 31, 0x12D678u);
    ctx->pc = 0x12D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D670u;
    // 0x12d674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D670u, 0x12D678u)) {
        return;
    }
    ctx->pc = 0x12D678u;
label_12d678:
    // 0x12d678: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d67c: 0x248445e0  addiu       $a0, $a0, 0x45E0
    ctx->pc = 0x12d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17888));
    // 0x12d680: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D680u;
    SET_GPR_U32(ctx, 31, 0x12D688u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D680u, 0x12D688u)) {
        return;
    }
    ctx->pc = 0x12D688u;
label_12d688:
    // 0x12d688: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d68c: 0x248446b0  addiu       $a0, $a0, 0x46B0
    ctx->pc = 0x12d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18096));
    // 0x12d690: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D690u;
    SET_GPR_U32(ctx, 31, 0x12D698u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D690u, 0x12D698u)) {
        return;
    }
    ctx->pc = 0x12D698u;
label_12d698:
    // 0x12d698: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d69c: 0x248446b8  addiu       $a0, $a0, 0x46B8
    ctx->pc = 0x12d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18104));
    // 0x12d6a0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D6A0u;
    SET_GPR_U32(ctx, 31, 0x12D6A8u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D6A0u, 0x12D6A8u)) {
        return;
    }
    ctx->pc = 0x12D6A8u;
label_12d6a8:
    // 0x12d6a8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d6ac: 0x248446c8  addiu       $a0, $a0, 0x46C8
    ctx->pc = 0x12d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18120));
    // 0x12d6b0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D6B0u;
    SET_GPR_U32(ctx, 31, 0x12D6B8u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D6B0u, 0x12D6B8u)) {
        return;
    }
    ctx->pc = 0x12D6B8u;
label_12d6b8:
    // 0x12d6b8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d6bc: 0x248446c0  addiu       $a0, $a0, 0x46C0
    ctx->pc = 0x12d6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18112));
    // 0x12d6c0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D6C0u;
    SET_GPR_U32(ctx, 31, 0x12D6C8u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D6C0u, 0x12D6C8u)) {
        return;
    }
    ctx->pc = 0x12D6C8u;
label_12d6c8:
    // 0x12d6c8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d6cc: 0x248446e8  addiu       $a0, $a0, 0x46E8
    ctx->pc = 0x12d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18152));
    // 0x12d6d0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D6D0u;
    SET_GPR_U32(ctx, 31, 0x12D6D8u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D6D0u, 0x12D6D8u)) {
        return;
    }
    ctx->pc = 0x12D6D8u;
label_12d6d8:
    // 0x12d6d8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d6dc: 0x248446f0  addiu       $a0, $a0, 0x46F0
    ctx->pc = 0x12d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18160));
    // 0x12d6e0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D6E0u;
    SET_GPR_U32(ctx, 31, 0x12D6E8u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D6E0u, 0x12D6E8u)) {
        return;
    }
    ctx->pc = 0x12D6E8u;
label_12d6e8:
    // 0x12d6e8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d6ec: 0x248446f8  addiu       $a0, $a0, 0x46F8
    ctx->pc = 0x12d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18168));
    // 0x12d6f0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D6F0u;
    SET_GPR_U32(ctx, 31, 0x12D6F8u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D6F0u, 0x12D6F8u)) {
        return;
    }
    ctx->pc = 0x12D6F8u;
label_12d6f8:
    // 0x12d6f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d6fc: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x12d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x12d700: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D700u;
    SET_GPR_U32(ctx, 31, 0x12D708u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D700u, 0x12D708u)) {
        return;
    }
    ctx->pc = 0x12D708u;
label_12d708:
    // 0x12d708: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d70c: 0x24844708  addiu       $a0, $a0, 0x4708
    ctx->pc = 0x12d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18184));
    // 0x12d710: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D710u;
    SET_GPR_U32(ctx, 31, 0x12D718u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D710u, 0x12D718u)) {
        return;
    }
    ctx->pc = 0x12D718u;
label_12d718:
    // 0x12d718: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d71c: 0x24844720  addiu       $a0, $a0, 0x4720
    ctx->pc = 0x12d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18208));
    // 0x12d720: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D720u;
    SET_GPR_U32(ctx, 31, 0x12D728u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D720u, 0x12D728u)) {
        return;
    }
    ctx->pc = 0x12D728u;
label_12d728:
    // 0x12d728: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D728u;
    SET_GPR_U32(ctx, 31, 0x12D730u);
    ctx->pc = 0x12D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D728u;
    // 0x12d72c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D728u, 0x12D730u)) {
        return;
    }
    ctx->pc = 0x12D730u;
label_12d730:
    // 0x12d730: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D730u;
    SET_GPR_U32(ctx, 31, 0x12D738u);
    ctx->pc = 0x12D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D730u;
    // 0x12d734: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D730u, 0x12D738u)) {
        return;
    }
    ctx->pc = 0x12D738u;
label_12d738:
    // 0x12d738: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D738u;
    SET_GPR_U32(ctx, 31, 0x12D740u);
    ctx->pc = 0x12D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D738u;
    // 0x12d73c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D738u, 0x12D740u)) {
        return;
    }
    ctx->pc = 0x12D740u;
label_12d740:
    // 0x12d740: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D740u;
    SET_GPR_U32(ctx, 31, 0x12D748u);
    ctx->pc = 0x12D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D740u;
    // 0x12d744: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D740u, 0x12D748u)) {
        return;
    }
    ctx->pc = 0x12D748u;
label_12d748:
    // 0x12d748: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d74c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D74Cu;
    SET_GPR_U32(ctx, 31, 0x12D754u);
    ctx->pc = 0x12D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D74Cu;
    // 0x12d750: 0x24844620  addiu       $a0, $a0, 0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D74Cu, 0x12D754u)) {
        return;
    }
    ctx->pc = 0x12D754u;
label_12d754:
    // 0x12d754: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d758: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D758u;
    SET_GPR_U32(ctx, 31, 0x12D760u);
    ctx->pc = 0x12D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D758u;
    // 0x12d75c: 0x24844628  addiu       $a0, $a0, 0x4628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D758u, 0x12D760u)) {
        return;
    }
    ctx->pc = 0x12D760u;
label_12d760:
    // 0x12d760: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d764: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D764u;
    SET_GPR_U32(ctx, 31, 0x12D76Cu);
    ctx->pc = 0x12D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D764u;
    // 0x12d768: 0x24844630  addiu       $a0, $a0, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D764u, 0x12D76Cu)) {
        return;
    }
    ctx->pc = 0x12D76Cu;
label_12d76c:
    // 0x12d76c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d770: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D770u;
    SET_GPR_U32(ctx, 31, 0x12D778u);
    ctx->pc = 0x12D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D770u;
    // 0x12d774: 0x24844638  addiu       $a0, $a0, 0x4638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D770u, 0x12D778u)) {
        return;
    }
    ctx->pc = 0x12D778u;
label_12d778:
    // 0x12d778: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d77c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D77Cu;
    SET_GPR_U32(ctx, 31, 0x12D784u);
    ctx->pc = 0x12D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D77Cu;
    // 0x12d780: 0x24844640  addiu       $a0, $a0, 0x4640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D77Cu, 0x12D784u)) {
        return;
    }
    ctx->pc = 0x12D784u;
label_12d784:
    // 0x12d784: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d788: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D788u;
    SET_GPR_U32(ctx, 31, 0x12D790u);
    ctx->pc = 0x12D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D788u;
    // 0x12d78c: 0x24844648  addiu       $a0, $a0, 0x4648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D788u, 0x12D790u)) {
        return;
    }
    ctx->pc = 0x12D790u;
label_12d790:
    // 0x12d790: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d794: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D794u;
    SET_GPR_U32(ctx, 31, 0x12D79Cu);
    ctx->pc = 0x12D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D794u;
    // 0x12d798: 0x24844650  addiu       $a0, $a0, 0x4650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D794u, 0x12D79Cu)) {
        return;
    }
    ctx->pc = 0x12D79Cu;
label_12d79c:
    // 0x12d79c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12d7a0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D7A0u;
    SET_GPR_U32(ctx, 31, 0x12D7A8u);
    ctx->pc = 0x12D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7A0u;
    // 0x12d7a4: 0x24844658  addiu       $a0, $a0, 0x4658 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D7A0u, 0x12D7A8u)) {
        return;
    }
    ctx->pc = 0x12D7A8u;
label_12d7a8:
    // 0x12d7a8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D7A8u;
    SET_GPR_U32(ctx, 31, 0x12D7B0u);
    ctx->pc = 0x12D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7A8u;
    // 0x12d7ac: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D7A8u, 0x12D7B0u)) {
        return;
    }
    ctx->pc = 0x12D7B0u;
label_12d7b0:
    // 0x12d7b0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D7B0u;
    SET_GPR_U32(ctx, 31, 0x12D7B8u);
    ctx->pc = 0x12D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7B0u;
    // 0x12d7b4: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D7B0u, 0x12D7B8u)) {
        return;
    }
    ctx->pc = 0x12D7B8u;
label_12d7b8:
    // 0x12d7b8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D7B8u;
    SET_GPR_U32(ctx, 31, 0x12D7C0u);
    ctx->pc = 0x12D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7B8u;
    // 0x12d7bc: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D7B8u, 0x12D7C0u)) {
        return;
    }
    ctx->pc = 0x12D7C0u;
label_12d7c0:
    // 0x12d7c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d7c4: 0x0  nop
    ctx->pc = 0x12d7c4u;
    // NOP
label_12d7c8:
    // 0x12d7c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7cc: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x12d7ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x12d7d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12d7d4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12D7D4u;
    SET_GPR_U32(ctx, 31, 0x12D7DCu);
    ctx->pc = 0x12D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7D4u;
    // 0x12d7d8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12D7D4u, 0x12D7DCu)) {
        return;
    }
    ctx->pc = 0x12D7DCu;
label_12d7dc:
    // 0x12d7dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d7e0: 0x461fff9  bgez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12D7E0u;
    {
        const bool branch_taken_0x12d7e0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x12D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D7E0u;
        // 0x12d7e4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7e0) {
            ctx->pc = 0x12D7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d7c8;
        }
    }
    ctx->pc = 0x12D7E8u;
    // 0x12d7e8: 0x8fc41aa0  lw          $a0, 0x1AA0($fp)
    ctx->pc = 0x12d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6816)));
    // 0x12d7ec: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D7ECu;
    {
        const bool branch_taken_0x12d7ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d7ec) {
            ctx->pc = 0x12D7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D7ECu;
            // 0x12d7f0: 0x8fc41aa4  lw          $a0, 0x1AA4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D804u;
            goto label_12d804;
        }
    }
    ctx->pc = 0x12D7F4u;
    // 0x12d7f4: 0xc09d90a  jal         func_276428
    ctx->pc = 0x12D7F4u;
    SET_GPR_U32(ctx, 31, 0x12D7FCu);
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x12D7F4u, 0x12D7FCu)) {
        return;
    }
    ctx->pc = 0x12D7FCu;
label_12d7fc:
    // 0x12d7fc: 0xafc01aa0  sw          $zero, 0x1AA0($fp)
    ctx->pc = 0x12d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6816), GPR_U32(ctx, 0));
    // 0x12d800: 0x8fc41aa4  lw          $a0, 0x1AA4($fp)
    ctx->pc = 0x12d800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6820)));
label_12d804:
    // 0x12d804: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D804u;
    {
        const bool branch_taken_0x12d804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d804) {
            ctx->pc = 0x12D808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D804u;
            // 0x12d808: 0x8fc31b98  lw          $v1, 0x1B98($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D81Cu;
            goto label_12d81c;
        }
    }
    ctx->pc = 0x12D80Cu;
    // 0x12d80c: 0xc09d90a  jal         func_276428
    ctx->pc = 0x12D80Cu;
    SET_GPR_U32(ctx, 31, 0x12D814u);
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x12D80Cu, 0x12D814u)) {
        return;
    }
    ctx->pc = 0x12D814u;
label_12d814:
    // 0x12d814: 0xafc01aa4  sw          $zero, 0x1AA4($fp)
    ctx->pc = 0x12d814u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6820), GPR_U32(ctx, 0));
    // 0x12d818: 0x8fc31b98  lw          $v1, 0x1B98($fp)
    ctx->pc = 0x12d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7064)));
label_12d81c:
    // 0x12d81c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x12D81Cu;
    {
        const bool branch_taken_0x12d81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D81Cu;
        // 0x12d820: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d81c) {
            ctx->pc = 0x12D8A4u;
            goto label_12d8a4;
        }
    }
    ctx->pc = 0x12D824u;
    // 0x12d824: 0x8ca44780  lw          $a0, 0x4780($a1)
    ctx->pc = 0x12d824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18304)));
    // 0x12d828: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12d828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x12d82c: 0x8ca21a70  lw          $v0, 0x1A70($a1)
    ctx->pc = 0x12d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x12d830: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D830u;
    {
        const bool branch_taken_0x12d830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D830u;
        // 0x12d834: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d830) {
            ctx->pc = 0x12D858u;
            goto label_12d858;
        }
    }
    ctx->pc = 0x12D838u;
    // 0x12d838: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12d838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12d83c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D83Cu;
    {
        const bool branch_taken_0x12d83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D83Cu;
        // 0x12d840: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d83c) {
            ctx->pc = 0x12D858u;
            goto label_12d858;
        }
    }
    ctx->pc = 0x12D844u;
    // 0x12d844: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12d844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12d848: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d84c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12D84Cu;
    SET_GPR_U32(ctx, 31, 0x12D854u);
    ctx->pc = 0x12D850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D84Cu;
    // 0x12d850: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12D84Cu, 0x12D854u)) {
        return;
    }
    ctx->pc = 0x12D854u;
label_12d854:
    // 0x12d854: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x12d854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_12d858:
    // 0x12d858: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x12d858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x12d85c: 0x8c444770  lw          $a0, 0x4770($v0)
    ctx->pc = 0x12d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18288)));
    // 0x12d860: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x12d860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x12d864: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D864u;
    {
        const bool branch_taken_0x12d864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D864u;
        // 0x12d868: 0x8fc31b98  lw          $v1, 0x1B98($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d864) {
            ctx->pc = 0x12D888u;
            goto label_12d888;
        }
    }
    ctx->pc = 0x12D86Cu;
    // 0x12d86c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12d870: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D870u;
    {
        const bool branch_taken_0x12d870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D870u;
        // 0x12d874: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d870) {
            ctx->pc = 0x12D88Cu;
            goto label_12d88c;
        }
    }
    ctx->pc = 0x12D878u;
    // 0x12d878: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12d878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12d87c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d880: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12D880u;
    SET_GPR_U32(ctx, 31, 0x12D888u);
    ctx->pc = 0x12D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D880u;
    // 0x12d884: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12D880u, 0x12D888u)) {
        return;
    }
    ctx->pc = 0x12D888u;
label_12d888:
    // 0x12d888: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12d888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_12d88c:
    // 0x12d88c: 0x8fc51b98  lw          $a1, 0x1B98($fp)
    ctx->pc = 0x12d88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7064)));
    // 0x12d890: 0xc05ee9a  jal         func_17BA68
    ctx->pc = 0x12D890u;
    SET_GPR_U32(ctx, 31, 0x12D898u);
    ctx->pc = 0x12D894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D890u;
    // 0x12d894: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x12D890u, 0x12D898u)) {
        return;
    }
    ctx->pc = 0x12D898u;
label_12d898:
    // 0x12d898: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x12D898u;
    SET_GPR_U32(ctx, 31, 0x12D8A0u);
    ctx->pc = 0x12D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D898u;
    // 0x12d89c: 0x8fc41b98  lw          $a0, 0x1B98($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x12D898u, 0x12D8A0u)) {
        return;
    }
    ctx->pc = 0x12D8A0u;
label_12d8a0:
    // 0x12d8a0: 0xafc01b98  sw          $zero, 0x1B98($fp)
    ctx->pc = 0x12d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7064), GPR_U32(ctx, 0));
label_12d8a4:
    // 0x12d8a4: 0x8fc51b9c  lw          $a1, 0x1B9C($fp)
    ctx->pc = 0x12d8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7068)));
    // 0x12d8a8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D8A8u;
    {
        const bool branch_taken_0x12d8a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8A8u;
        // 0x12d8ac: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8a8) {
            ctx->pc = 0x12D8C4u;
            goto label_12d8c4;
        }
    }
    ctx->pc = 0x12D8B0u;
    // 0x12d8b0: 0xc05ee9a  jal         func_17BA68
    ctx->pc = 0x12D8B0u;
    SET_GPR_U32(ctx, 31, 0x12D8B8u);
    ctx->pc = 0x12D8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D8B0u;
    // 0x12d8b4: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x12D8B0u, 0x12D8B8u)) {
        return;
    }
    ctx->pc = 0x12D8B8u;
label_12d8b8:
    // 0x12d8b8: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x12D8B8u;
    SET_GPR_U32(ctx, 31, 0x12D8C0u);
    ctx->pc = 0x12D8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D8B8u;
    // 0x12d8bc: 0x8fc41b9c  lw          $a0, 0x1B9C($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x12D8B8u, 0x12D8C0u)) {
        return;
    }
    ctx->pc = 0x12D8C0u;
label_12d8c0:
    // 0x12d8c0: 0xafc01b9c  sw          $zero, 0x1B9C($fp)
    ctx->pc = 0x12d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7068), GPR_U32(ctx, 0));
label_12d8c4:
    // 0x12d8c4: 0x8fc51b94  lw          $a1, 0x1B94($fp)
    ctx->pc = 0x12d8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7060)));
    // 0x12d8c8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D8C8u;
    {
        const bool branch_taken_0x12d8c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8C8u;
        // 0x12d8cc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8c8) {
            ctx->pc = 0x12D8DCu;
            goto label_12d8dc;
        }
    }
    ctx->pc = 0x12D8D0u;
    // 0x12d8d0: 0xc0640fa  jal         func_1903E8
    ctx->pc = 0x12D8D0u;
    SET_GPR_U32(ctx, 31, 0x12D8D8u);
    ctx->pc = 0x12D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D8D0u;
    // 0x12d8d4: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1903E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1903E8u, 0x12D8D0u, 0x12D8D8u)) {
        return;
    }
    ctx->pc = 0x12D8D8u;
label_12d8d8:
    // 0x12d8d8: 0xafc01b94  sw          $zero, 0x1B94($fp)
    ctx->pc = 0x12d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 7060), GPR_U32(ctx, 0));
label_12d8dc:
    // 0x12d8dc: 0xc079242  jal         func_1E4908
    ctx->pc = 0x12D8DCu;
    SET_GPR_U32(ctx, 31, 0x12D8E4u);
    ctx->pc = 0x12D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D8DCu;
    // 0x12d8e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4908u, 0x12D8DCu, 0x12D8E4u)) {
        return;
    }
    ctx->pc = 0x12D8E4u;
label_12d8e4:
    // 0x12d8e4: 0xc04e870  jal         func_13A1C0
    ctx->pc = 0x12D8E4u;
    SET_GPR_U32(ctx, 31, 0x12D8ECu);
    ctx->pc = 0x13A1C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13A1C0u, 0x12D8E4u, 0x12D8ECu)) {
        return;
    }
    ctx->pc = 0x12D8ECu;
label_12d8ec:
    // 0x12d8ec: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x12D8ECu;
    SET_GPR_U32(ctx, 31, 0x12D8F4u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x12D8ECu, 0x12D8F4u)) {
        return;
    }
    ctx->pc = 0x12D8F4u;
label_12d8f4:
    // 0x12d8f4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x12d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x12d8f8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x12d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x12d8fc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x12d900: 0x8c648378  lw          $a0, -0x7C88($v1)
    ctx->pc = 0x12d900u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338378u));
    // 0x12d904: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D904u;
    {
        const bool branch_taken_0x12d904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D904u;
        // 0x12d908: 0xac408b48  sw          $zero, -0x74B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d904) {
            ctx->pc = 0x12D914u;
            goto label_12d914;
        }
    }
    ctx->pc = 0x12D90Cu;
    // 0x12d90c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x12D90Cu;
    SET_GPR_U32(ctx, 31, 0x12D914u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x12D90Cu, 0x12D914u)) {
        return;
    }
    ctx->pc = 0x12D914u;
label_12d914:
    // 0x12d914: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x12d914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x12d918: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12d918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x12d91c: 0x8ca4837c  lw          $a0, -0x7C84($a1)
    ctx->pc = 0x12d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33837Cu));
    // 0x12d920: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D920u;
    {
        const bool branch_taken_0x12d920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D920u;
        // 0x12d924: 0xac408378  sw          $zero, -0x7C88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294935416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d920) {
            ctx->pc = 0x12D930u;
            goto label_12d930;
        }
    }
    ctx->pc = 0x12D928u;
    // 0x12d928: 0xc0808d4  jal         func_202350
    ctx->pc = 0x12D928u;
    SET_GPR_U32(ctx, 31, 0x12D930u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x12D928u, 0x12D930u)) {
        return;
    }
    ctx->pc = 0x12D930u;
label_12d930:
    // 0x12d930: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12d930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12d934: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x12d934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x12d938: 0xac60837c  sw          $zero, -0x7C84($v1)
    ctx->pc = 0x12d938u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x33837Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33837Cu, _value); } while (0);
    // 0x12d93c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x12D93Cu;
    SET_GPR_U32(ctx, 31, 0x12D944u);
    ctx->pc = 0x12D940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D93Cu;
    // 0x12d940: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x12D93Cu, 0x12D944u)) {
        return;
    }
    ctx->pc = 0x12D944u;
label_12d944:
    // 0x12d944: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x12d944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x12d948: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x12D948u;
    SET_GPR_U32(ctx, 31, 0x12D950u);
    ctx->pc = 0x12D94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D948u;
    // 0x12d94c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x12D948u, 0x12D950u)) {
        return;
    }
    ctx->pc = 0x12D950u;
label_12d950:
    // 0x12d950: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x12d950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x12d954: 0xc05a2d8  jal         func_168B60
    ctx->pc = 0x12D954u;
    SET_GPR_U32(ctx, 31, 0x12D95Cu);
    ctx->pc = 0x12D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D954u;
    // 0x12d958: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168B60u, 0x12D954u, 0x12D95Cu)) {
        return;
    }
    ctx->pc = 0x12D95Cu;
label_12d95c:
    // 0x12d95c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x12d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12d960: 0xc0533f0  jal         func_14CFC0
    ctx->pc = 0x12D960u;
    SET_GPR_U32(ctx, 31, 0x12D968u);
    ctx->pc = 0x12D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D960u;
    // 0x12d964: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CFC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14CFC0u, 0x12D960u, 0x12D968u)) {
        return;
    }
    ctx->pc = 0x12D968u;
label_12d968:
    // 0x12d968: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12d968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d96c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D96Cu;
    {
        const bool branch_taken_0x12d96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D96Cu;
        // 0x12d970: 0x8fb00024  lw          $s0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d96c) {
            ctx->pc = 0x12D998u;
            goto label_12d998;
        }
    }
    ctx->pc = 0x12D974u;
    // 0x12d974: 0x10900009  beq         $a0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D974u;
    {
        const bool branch_taken_0x12d974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x12D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D974u;
        // 0x12d978: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d974) {
            ctx->pc = 0x12D99Cu;
            goto label_12d99c;
        }
    }
    ctx->pc = 0x12D97Cu;
    // 0x12d97c: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x12d97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_12d980:
    // 0x12d980: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12d980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d984: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x12D984u;
    SET_GPR_U32(ctx, 31, 0x12D98Cu);
    ctx->pc = 0x12D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D984u;
    // 0x12d988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x12D984u, 0x12D98Cu)) {
        return;
    }
    ctx->pc = 0x12D98Cu;
label_12d98c:
    // 0x12d98c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x12d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d990: 0x14b0fffb  bne         $a1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12D990u;
    {
        const bool branch_taken_0x12d990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x12D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D990u;
        // 0x12d994: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d990) {
            ctx->pc = 0x12D980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d980;
        }
    }
    ctx->pc = 0x12D998u;
label_12d998:
    // 0x12d998: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x12d998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_12d99c:
    // 0x12d99c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x12D99Cu;
    SET_GPR_U32(ctx, 31, 0x12D9A4u);
    ctx->pc = 0x12D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D99Cu;
    // 0x12d9a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x12D99Cu, 0x12D9A4u)) {
        return;
    }
    ctx->pc = 0x12D9A4u;
label_12d9a4:
    // 0x12d9a4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x12d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d9a8: 0xc047fcc  jal         func_11FF30
    ctx->pc = 0x12D9A8u;
    SET_GPR_U32(ctx, 31, 0x12D9B0u);
    ctx->pc = 0x12D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D9A8u;
    // 0x12d9ac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11FF30u, 0x12D9A8u, 0x12D9B0u)) {
        return;
    }
    ctx->pc = 0x12D9B0u;
label_12d9b0:
    // 0x12d9b0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x12d9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12d9b4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x12d9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12d9b8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x12d9b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12d9bc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x12d9bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12d9c0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x12d9c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d9c4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x12d9c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12d9c8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x12d9c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12d9cc: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x12d9ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12d9d0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x12d9d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d9d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12d9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d9d8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x12d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12d9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x12D9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9DCu;
        // 0x12d9e0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D9E4u;
    // 0x12d9e4: 0x0  nop
    ctx->pc = 0x12d9e4u;
    // NOP
    ctx->pc = 0x12d9e8u;
}
