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

// Function: sub_0012B1C8
// Address: 0x12b1c8 - 0x12b3f0
void sub_0012B1C8_0x12b1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B1C8_0x12b1c8");
#endif

    switch (ctx->pc) {
        case 0x12b1c8u: goto label_12b1c8;
        case 0x12b1ccu: goto label_12b1cc;
        case 0x12b1d0u: goto label_12b1d0;
        case 0x12b1d4u: goto label_12b1d4;
        case 0x12b1d8u: goto label_12b1d8;
        case 0x12b1dcu: goto label_12b1dc;
        case 0x12b1e0u: goto label_12b1e0;
        case 0x12b1e4u: goto label_12b1e4;
        case 0x12b1e8u: goto label_12b1e8;
        case 0x12b1ecu: goto label_12b1ec;
        case 0x12b1f0u: goto label_12b1f0;
        case 0x12b1f4u: goto label_12b1f4;
        case 0x12b1f8u: goto label_12b1f8;
        case 0x12b1fcu: goto label_12b1fc;
        case 0x12b200u: goto label_12b200;
        case 0x12b204u: goto label_12b204;
        case 0x12b208u: goto label_12b208;
        case 0x12b20cu: goto label_12b20c;
        case 0x12b210u: goto label_12b210;
        case 0x12b214u: goto label_12b214;
        case 0x12b218u: goto label_12b218;
        case 0x12b21cu: goto label_12b21c;
        case 0x12b220u: goto label_12b220;
        case 0x12b224u: goto label_12b224;
        case 0x12b228u: goto label_12b228;
        case 0x12b22cu: goto label_12b22c;
        case 0x12b230u: goto label_12b230;
        case 0x12b234u: goto label_12b234;
        case 0x12b238u: goto label_12b238;
        case 0x12b23cu: goto label_12b23c;
        case 0x12b240u: goto label_12b240;
        case 0x12b244u: goto label_12b244;
        case 0x12b248u: goto label_12b248;
        case 0x12b24cu: goto label_12b24c;
        case 0x12b250u: goto label_12b250;
        case 0x12b254u: goto label_12b254;
        case 0x12b258u: goto label_12b258;
        case 0x12b25cu: goto label_12b25c;
        case 0x12b260u: goto label_12b260;
        case 0x12b264u: goto label_12b264;
        case 0x12b268u: goto label_12b268;
        case 0x12b26cu: goto label_12b26c;
        case 0x12b270u: goto label_12b270;
        case 0x12b274u: goto label_12b274;
        case 0x12b278u: goto label_12b278;
        case 0x12b27cu: goto label_12b27c;
        case 0x12b280u: goto label_12b280;
        case 0x12b284u: goto label_12b284;
        case 0x12b288u: goto label_12b288;
        case 0x12b28cu: goto label_12b28c;
        case 0x12b290u: goto label_12b290;
        case 0x12b294u: goto label_12b294;
        case 0x12b298u: goto label_12b298;
        case 0x12b29cu: goto label_12b29c;
        case 0x12b2a0u: goto label_12b2a0;
        case 0x12b2a4u: goto label_12b2a4;
        case 0x12b2a8u: goto label_12b2a8;
        case 0x12b2acu: goto label_12b2ac;
        case 0x12b2b0u: goto label_12b2b0;
        case 0x12b2b4u: goto label_12b2b4;
        case 0x12b2b8u: goto label_12b2b8;
        case 0x12b2bcu: goto label_12b2bc;
        case 0x12b2c0u: goto label_12b2c0;
        case 0x12b2c4u: goto label_12b2c4;
        case 0x12b2c8u: goto label_12b2c8;
        case 0x12b2ccu: goto label_12b2cc;
        case 0x12b2d0u: goto label_12b2d0;
        case 0x12b2d4u: goto label_12b2d4;
        case 0x12b2d8u: goto label_12b2d8;
        case 0x12b2dcu: goto label_12b2dc;
        case 0x12b2e0u: goto label_12b2e0;
        case 0x12b2e4u: goto label_12b2e4;
        case 0x12b2e8u: goto label_12b2e8;
        case 0x12b2ecu: goto label_12b2ec;
        case 0x12b2f0u: goto label_12b2f0;
        case 0x12b2f4u: goto label_12b2f4;
        case 0x12b2f8u: goto label_12b2f8;
        case 0x12b2fcu: goto label_12b2fc;
        case 0x12b300u: goto label_12b300;
        case 0x12b304u: goto label_12b304;
        case 0x12b308u: goto label_12b308;
        case 0x12b30cu: goto label_12b30c;
        case 0x12b310u: goto label_12b310;
        case 0x12b314u: goto label_12b314;
        case 0x12b318u: goto label_12b318;
        case 0x12b31cu: goto label_12b31c;
        case 0x12b320u: goto label_12b320;
        case 0x12b324u: goto label_12b324;
        case 0x12b328u: goto label_12b328;
        case 0x12b32cu: goto label_12b32c;
        case 0x12b330u: goto label_12b330;
        case 0x12b334u: goto label_12b334;
        case 0x12b338u: goto label_12b338;
        case 0x12b33cu: goto label_12b33c;
        case 0x12b340u: goto label_12b340;
        case 0x12b344u: goto label_12b344;
        case 0x12b348u: goto label_12b348;
        case 0x12b34cu: goto label_12b34c;
        case 0x12b350u: goto label_12b350;
        case 0x12b354u: goto label_12b354;
        case 0x12b358u: goto label_12b358;
        case 0x12b35cu: goto label_12b35c;
        case 0x12b360u: goto label_12b360;
        case 0x12b364u: goto label_12b364;
        case 0x12b368u: goto label_12b368;
        case 0x12b36cu: goto label_12b36c;
        case 0x12b370u: goto label_12b370;
        case 0x12b374u: goto label_12b374;
        case 0x12b378u: goto label_12b378;
        case 0x12b37cu: goto label_12b37c;
        case 0x12b380u: goto label_12b380;
        case 0x12b384u: goto label_12b384;
        case 0x12b388u: goto label_12b388;
        case 0x12b38cu: goto label_12b38c;
        case 0x12b390u: goto label_12b390;
        case 0x12b394u: goto label_12b394;
        case 0x12b398u: goto label_12b398;
        case 0x12b39cu: goto label_12b39c;
        case 0x12b3a0u: goto label_12b3a0;
        case 0x12b3a4u: goto label_12b3a4;
        case 0x12b3a8u: goto label_12b3a8;
        case 0x12b3acu: goto label_12b3ac;
        case 0x12b3b0u: goto label_12b3b0;
        case 0x12b3b4u: goto label_12b3b4;
        case 0x12b3b8u: goto label_12b3b8;
        case 0x12b3bcu: goto label_12b3bc;
        case 0x12b3c0u: goto label_12b3c0;
        case 0x12b3c4u: goto label_12b3c4;
        case 0x12b3c8u: goto label_12b3c8;
        case 0x12b3ccu: goto label_12b3cc;
        case 0x12b3d0u: goto label_12b3d0;
        case 0x12b3d4u: goto label_12b3d4;
        case 0x12b3d8u: goto label_12b3d8;
        case 0x12b3dcu: goto label_12b3dc;
        case 0x12b3e0u: goto label_12b3e0;
        case 0x12b3e4u: goto label_12b3e4;
        case 0x12b3e8u: goto label_12b3e8;
        case 0x12b3ecu: goto label_12b3ec;
        default: break;
    }

    ctx->pc = 0x12b1c8u;

label_12b1c8:
    // 0x12b1c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12b1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_12b1cc:
    // 0x12b1cc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12b1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_12b1d0:
    // 0x12b1d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x12b1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_12b1d4:
    // 0x12b1d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12b1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12b1d8:
    // 0x12b1d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x12b1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_12b1dc:
    // 0x12b1dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_12b1e0:
    // 0x12b1e0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x12b1e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_12b1e4:
    // 0x12b1e4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x12b1e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_12b1e8:
    // 0x12b1e8: 0x8e450c40  lw          $a1, 0xC40($s2)
    ctx->pc = 0x12b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3136)));
label_12b1ec:
    // 0x12b1ec: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_12b1f0:
    if (ctx->pc == 0x12B1F0u) {
        ctx->pc = 0x12B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1ECu;
        // 0x12b1f0: 0x8e422d7c  lw          $v0, 0x2D7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B1F4u;
        goto label_12b1f4;
    }
    ctx->pc = 0x12B1ECu;
    {
        const bool branch_taken_0x12b1ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b1ec) {
            ctx->pc = 0x12B1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B1ECu;
            // 0x12b1f0: 0x8e422d7c  lw          $v0, 0x2D7C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B210u;
            goto label_12b210;
        }
    }
    ctx->pc = 0x12B1F4u;
label_12b1f4:
    // 0x12b1f4: 0x8ca50054  lw          $a1, 0x54($a1)
    ctx->pc = 0x12b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_12b1f8:
    // 0x12b1f8: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x12b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_12b1fc:
    // 0x12b1fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_12b200:
    if (ctx->pc == 0x12B200u) {
        ctx->pc = 0x12B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1FCu;
        // 0x12b200: 0x8e422d7c  lw          $v0, 0x2D7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B204u;
        goto label_12b204;
    }
    ctx->pc = 0x12B1FCu;
    {
        const bool branch_taken_0x12b1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b1fc) {
            ctx->pc = 0x12B200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B1FCu;
            // 0x12b200: 0x8e422d7c  lw          $v0, 0x2D7C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B210u;
            goto label_12b210;
        }
    }
    ctx->pc = 0x12B204u;
label_12b204:
    // 0x12b204: 0xc0ab42e  jal         func_2AD0B8
label_12b208:
    if (ctx->pc == 0x12B208u) {
        ctx->pc = 0x12B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B204u;
        // 0x12b208: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B20Cu;
        goto label_12b20c;
    }
    ctx->pc = 0x12B204u;
    SET_GPR_U32(ctx, 31, 0x12B20Cu);
    ctx->pc = 0x12B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B204u;
    // 0x12b208: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD0B8u, 0x12B204u, 0x12B20Cu)) {
        return;
    }
    ctx->pc = 0x12B20Cu;
label_12b20c:
    // 0x12b20c: 0x8e422d7c  lw          $v0, 0x2D7C($s2)
    ctx->pc = 0x12b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11644)));
label_12b210:
    // 0x12b210: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_12b214:
    if (ctx->pc == 0x12B214u) {
        ctx->pc = 0x12B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B210u;
        // 0x12b214: 0x26510040  addiu       $s1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B218u;
        goto label_12b218;
    }
    ctx->pc = 0x12B210u;
    {
        const bool branch_taken_0x12b210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B210u;
        // 0x12b214: 0x26510040  addiu       $s1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b210) {
            ctx->pc = 0x12B228u;
            goto label_12b228;
        }
    }
    ctx->pc = 0x12B218u;
label_12b218:
    // 0x12b218: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x12b218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_12b21c:
    // 0x12b21c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b220:
    // 0x12b220: 0xc04eef0  jal         func_13BBC0
label_12b224:
    if (ctx->pc == 0x12B224u) {
        ctx->pc = 0x12B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B220u;
        // 0x12b224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B228u;
        goto label_12b228;
    }
    ctx->pc = 0x12B220u;
    SET_GPR_U32(ctx, 31, 0x12B228u);
    ctx->pc = 0x12B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B220u;
    // 0x12b224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x12B220u, 0x12B228u)) {
        return;
    }
    ctx->pc = 0x12B228u;
label_12b228:
    // 0x12b228: 0xc6400c1c  lwc1        $f0, 0xC1C($s2)
    ctx->pc = 0x12b228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b22c:
    // 0x12b22c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12b22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12b230:
    // 0x12b230: 0x0  nop
    ctx->pc = 0x12b230u;
    // NOP
label_12b234:
    // 0x12b234: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x12b234u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b238:
    // 0x12b238: 0x0  nop
    ctx->pc = 0x12b238u;
    // NOP
label_12b23c:
    // 0x12b23c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_12b240:
    if (ctx->pc == 0x12B240u) {
        ctx->pc = 0x12B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B23Cu;
        // 0x12b240: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B244u;
        goto label_12b244;
    }
    ctx->pc = 0x12B23Cu;
    {
        const bool branch_taken_0x12b23c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B23Cu;
        // 0x12b240: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b23c) {
            ctx->pc = 0x12B280u;
            goto label_12b280;
        }
    }
    ctx->pc = 0x12B244u;
label_12b244:
    // 0x12b244: 0xc049a88  jal         func_126A20
label_12b248:
    if (ctx->pc == 0x12B248u) {
        ctx->pc = 0x12B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B244u;
        // 0x12b248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B24Cu;
        goto label_12b24c;
    }
    ctx->pc = 0x12B244u;
    SET_GPR_U32(ctx, 31, 0x12B24Cu);
    ctx->pc = 0x12B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B244u;
    // 0x12b248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126A20u, 0x12B244u, 0x12B24Cu)) {
        return;
    }
    ctx->pc = 0x12B24Cu;
label_12b24c:
    // 0x12b24c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_12b250:
    // 0x12b250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b254:
    // 0x12b254: 0xc0490b0  jal         func_1242C0
label_12b258:
    if (ctx->pc == 0x12B258u) {
        ctx->pc = 0x12B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B254u;
        // 0x12b258: 0x24a5ca08  addiu       $a1, $a1, -0x35F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B25Cu;
        goto label_12b25c;
    }
    ctx->pc = 0x12B254u;
    SET_GPR_U32(ctx, 31, 0x12B25Cu);
    ctx->pc = 0x12B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B254u;
    // 0x12b258: 0x24a5ca08  addiu       $a1, $a1, -0x35F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1242C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1242C0u, 0x12B254u, 0x12B25Cu)) {
        return;
    }
    ctx->pc = 0x12B25Cu;
label_12b25c:
    // 0x12b25c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b260:
    // 0x12b260: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12b260u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12b264:
    // 0x12b264: 0xc048d20  jal         func_123480
label_12b268:
    if (ctx->pc == 0x12B268u) {
        ctx->pc = 0x12B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B264u;
        // 0x12b268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B26Cu;
        goto label_12b26c;
    }
    ctx->pc = 0x12B264u;
    SET_GPR_U32(ctx, 31, 0x12B26Cu);
    ctx->pc = 0x12B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B264u;
    // 0x12b268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123480u, 0x12B264u, 0x12B26Cu)) {
        return;
    }
    ctx->pc = 0x12B26Cu;
label_12b26c:
    // 0x12b26c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b270:
    // 0x12b270: 0xc040402  jal         func_101008
label_12b274:
    if (ctx->pc == 0x12B274u) {
        ctx->pc = 0x12B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B270u;
        // 0x12b274: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B278u;
        goto label_12b278;
    }
    ctx->pc = 0x12B270u;
    SET_GPR_U32(ctx, 31, 0x12B278u);
    ctx->pc = 0x12B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B270u;
    // 0x12b274: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x101008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101008u, 0x12B270u, 0x12B278u)) {
        return;
    }
    ctx->pc = 0x12B278u;
label_12b278:
    // 0x12b278: 0x10000056  b           . + 4 + (0x56 << 2)
label_12b27c:
    if (ctx->pc == 0x12B27Cu) {
        ctx->pc = 0x12B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B278u;
        // 0x12b27c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B280u;
        goto label_12b280;
    }
    ctx->pc = 0x12B278u;
    {
        const bool branch_taken_0x12b278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B278u;
        // 0x12b27c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b278) {
            ctx->pc = 0x12B3D4u;
            goto label_12b3d4;
        }
    }
    ctx->pc = 0x12B280u;
label_12b280:
    // 0x12b280: 0xc062104  jal         func_188410
label_12b284:
    if (ctx->pc == 0x12B284u) {
        ctx->pc = 0x12B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B280u;
        // 0x12b284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B288u;
        goto label_12b288;
    }
    ctx->pc = 0x12B280u;
    SET_GPR_U32(ctx, 31, 0x12B288u);
    ctx->pc = 0x12B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B280u;
    // 0x12b284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188410u, 0x12B280u, 0x12B288u)) {
        return;
    }
    ctx->pc = 0x12B288u;
label_12b288:
    // 0x12b288: 0x8e422d20  lw          $v0, 0x2D20($s2)
    ctx->pc = 0x12b288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11552)));
label_12b28c:
    // 0x12b28c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_12b290:
    if (ctx->pc == 0x12B290u) {
        ctx->pc = 0x12B294u;
        goto label_12b294;
    }
    ctx->pc = 0x12B28Cu;
    {
        const bool branch_taken_0x12b28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b28c) {
            ctx->pc = 0x12B2B8u;
            goto label_12b2b8;
        }
    }
    ctx->pc = 0x12B294u;
label_12b294:
    // 0x12b294: 0x8e452d24  lw          $a1, 0x2D24($s2)
    ctx->pc = 0x12b294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11556)));
label_12b298:
    // 0x12b298: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_12b29c:
    if (ctx->pc == 0x12B29Cu) {
        ctx->pc = 0x12B2A0u;
        goto label_12b2a0;
    }
    ctx->pc = 0x12B298u;
    {
        const bool branch_taken_0x12b298 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x12b298) {
            ctx->pc = 0x12B2B8u;
            goto label_12b2b8;
        }
    }
    ctx->pc = 0x12B2A0u;
label_12b2a0:
    // 0x12b2a0: 0xc040688  jal         func_101A20
label_12b2a4:
    if (ctx->pc == 0x12B2A4u) {
        ctx->pc = 0x12B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2A0u;
        // 0x12b2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2A8u;
        goto label_12b2a8;
    }
    ctx->pc = 0x12B2A0u;
    SET_GPR_U32(ctx, 31, 0x12B2A8u);
    ctx->pc = 0x12B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2A0u;
    // 0x12b2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x12B2A0u, 0x12B2A8u)) {
        return;
    }
    ctx->pc = 0x12B2A8u;
label_12b2a8:
    // 0x12b2a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12b2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b2ac:
    // 0x12b2ac: 0xc040698  jal         func_101A60
label_12b2b0:
    if (ctx->pc == 0x12B2B0u) {
        ctx->pc = 0x12B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2ACu;
        // 0x12b2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2B4u;
        goto label_12b2b4;
    }
    ctx->pc = 0x12B2ACu;
    SET_GPR_U32(ctx, 31, 0x12B2B4u);
    ctx->pc = 0x12B2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2ACu;
    // 0x12b2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x12B2ACu, 0x12B2B4u)) {
        return;
    }
    ctx->pc = 0x12B2B4u;
label_12b2b4:
    // 0x12b2b4: 0xae422d20  sw          $v0, 0x2D20($s2)
    ctx->pc = 0x12b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11552), GPR_U32(ctx, 2));
label_12b2b8:
    // 0x12b2b8: 0xc07600c  jal         func_1D8030
label_12b2bc:
    if (ctx->pc == 0x12B2BCu) {
        ctx->pc = 0x12B2C0u;
        goto label_12b2c0;
    }
    ctx->pc = 0x12B2B8u;
    SET_GPR_U32(ctx, 31, 0x12B2C0u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x12B2B8u, 0x12B2C0u)) {
        return;
    }
    ctx->pc = 0x12B2C0u;
label_12b2c0:
    // 0x12b2c0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_12b2c4:
    if (ctx->pc == 0x12B2C4u) {
        ctx->pc = 0x12B2C8u;
        goto label_12b2c8;
    }
    ctx->pc = 0x12B2C0u;
    {
        const bool branch_taken_0x12b2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b2c0) {
            ctx->pc = 0x12B3C8u;
            goto label_12b3c8;
        }
    }
    ctx->pc = 0x12B2C8u;
label_12b2c8:
    // 0x12b2c8: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x12b2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_12b2cc:
    // 0x12b2cc: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
label_12b2d0:
    if (ctx->pc == 0x12B2D0u) {
        ctx->pc = 0x12B2D4u;
        goto label_12b2d4;
    }
    ctx->pc = 0x12B2CCu;
    {
        const bool branch_taken_0x12b2cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b2cc) {
            ctx->pc = 0x12B3C8u;
            goto label_12b3c8;
        }
    }
    ctx->pc = 0x12B2D4u;
label_12b2d4:
    // 0x12b2d4: 0xc04975a  jal         func_125D68
label_12b2d8:
    if (ctx->pc == 0x12B2D8u) {
        ctx->pc = 0x12B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D4u;
        // 0x12b2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2DCu;
        goto label_12b2dc;
    }
    ctx->pc = 0x12B2D4u;
    SET_GPR_U32(ctx, 31, 0x12B2DCu);
    ctx->pc = 0x12B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2D4u;
    // 0x12b2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125D68u, 0x12B2D4u, 0x12B2DCu)) {
        return;
    }
    ctx->pc = 0x12B2DCu;
label_12b2dc:
    // 0x12b2dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12b2dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_12b2e0:
    // 0x12b2e0: 0xc04975a  jal         func_125D68
label_12b2e4:
    if (ctx->pc == 0x12B2E4u) {
        ctx->pc = 0x12B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2E0u;
        // 0x12b2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2E8u;
        goto label_12b2e8;
    }
    ctx->pc = 0x12B2E0u;
    SET_GPR_U32(ctx, 31, 0x12B2E8u);
    ctx->pc = 0x12B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2E0u;
    // 0x12b2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125D68u, 0x12B2E0u, 0x12B2E8u)) {
        return;
    }
    ctx->pc = 0x12B2E8u;
label_12b2e8:
    // 0x12b2e8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x12b2e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_12b2ec:
    // 0x12b2ec: 0xc04f0cc  jal         func_13C330
label_12b2f0:
    if (ctx->pc == 0x12B2F0u) {
        ctx->pc = 0x12B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2ECu;
        // 0x12b2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2F4u;
        goto label_12b2f4;
    }
    ctx->pc = 0x12B2ECu;
    SET_GPR_U32(ctx, 31, 0x12B2F4u);
    ctx->pc = 0x12B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2ECu;
    // 0x12b2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12B2ECu, 0x12B2F4u)) {
        return;
    }
    ctx->pc = 0x12B2F4u;
label_12b2f4:
    // 0x12b2f4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x12b2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12b2f8:
    // 0x12b2f8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x12b2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12b2fc:
    // 0x12b2fc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x12b2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12b300:
    // 0x12b300: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x12b300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12b304:
    // 0x12b304: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x12b304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12b308:
    // 0x12b308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b30c:
    // 0x12b30c: 0xc04f0cc  jal         func_13C330
label_12b310:
    if (ctx->pc == 0x12B310u) {
        ctx->pc = 0x12B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B30Cu;
        // 0x12b310: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B314u;
        goto label_12b314;
    }
    ctx->pc = 0x12B30Cu;
    SET_GPR_U32(ctx, 31, 0x12B314u);
    ctx->pc = 0x12B310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B30Cu;
    // 0x12b310: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12B30Cu, 0x12B314u)) {
        return;
    }
    ctx->pc = 0x12B314u;
label_12b314:
    // 0x12b314: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x12b314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12b318:
    // 0x12b318: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x12b318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12b31c:
    // 0x12b31c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x12b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12b320:
    // 0x12b320: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x12b320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12b324:
    // 0x12b324: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x12b324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12b328:
    // 0x12b328: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12b328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_12b32c:
    // 0x12b32c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x12b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b330:
    // 0x12b330: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x12b330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12b334:
    // 0x12b334: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x12b334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b338:
    // 0x12b338: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x12b338u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_12b33c:
    // 0x12b33c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x12b33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12b340:
    // 0x12b340: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x12b340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b344:
    // 0x12b344: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x12b344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12b348:
    // 0x12b348: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x12b348u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_12b34c:
    // 0x12b34c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x12b34cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_12b350:
    // 0x12b350: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x12b350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_12b354:
    // 0x12b354: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x12b354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12b358:
    // 0x12b358: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12b358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_12b35c:
    // 0x12b35c: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x12b35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_12b360:
    // 0x12b360: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x12b360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_12b364:
    // 0x12b364: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_12b368:
    // 0x12b368: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x12b368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12b36c:
    // 0x12b36c: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x12b36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12b370:
    // 0x12b370: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x12b370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_12b374:
    // 0x12b374: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x12b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b378:
    // 0x12b378: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x12b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b37c:
    // 0x12b37c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12b37cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_12b380:
    // 0x12b380: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x12b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b384:
    // 0x12b384: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x12b384u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_12b388:
    // 0x12b388: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x12b388u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_12b38c:
    // 0x12b38c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12b38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_12b390:
    // 0x12b390: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12b394:
    // 0x12b394: 0x0  nop
    ctx->pc = 0x12b394u;
    // NOP
label_12b398:
    // 0x12b398: 0x0  nop
    ctx->pc = 0x12b398u;
    // NOP
label_12b39c:
    // 0x12b39c: 0x46000004  c1          0x4
    ctx->pc = 0x12b39cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_12b3a0:
    // 0x12b3a0: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x12b3a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_12b3a4:
    // 0x12b3a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12b3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b3a8:
    // 0x12b3a8: 0x0  nop
    ctx->pc = 0x12b3a8u;
    // NOP
label_12b3ac:
    // 0x12b3ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_12b3b0:
    if (ctx->pc == 0x12B3B0u) {
        ctx->pc = 0x12B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3ACu;
        // 0x12b3b0: 0x26452c80  addiu       $a1, $s2, 0x2C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3B4u;
        goto label_12b3b4;
    }
    ctx->pc = 0x12B3ACu;
    {
        const bool branch_taken_0x12b3ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3ACu;
        // 0x12b3b0: 0x26452c80  addiu       $a1, $s2, 0x2C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3ac) {
            ctx->pc = 0x12B3C8u;
            goto label_12b3c8;
        }
    }
    ctx->pc = 0x12B3B4u;
label_12b3b4:
    // 0x12b3b4: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x12b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_12b3b8:
    // 0x12b3b8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x12b3b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_12b3bc:
    // 0x12b3bc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x12b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_12b3c0:
    // 0x12b3c0: 0x60f809  jalr        $v1
label_12b3c4:
    if (ctx->pc == 0x12B3C4u) {
        ctx->pc = 0x12B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3C0u;
        // 0x12b3c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3C8u;
        goto label_12b3c8;
    }
    ctx->pc = 0x12B3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12B3C8u);
        ctx->pc = 0x12B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3C0u;
        // 0x12b3c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B3C0u, 0x12B3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B3C8u;
label_12b3c8:
    // 0x12b3c8: 0xc049a70  jal         func_1269C0
label_12b3cc:
    if (ctx->pc == 0x12B3CCu) {
        ctx->pc = 0x12B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3C8u;
        // 0x12b3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3D0u;
        goto label_12b3d0;
    }
    ctx->pc = 0x12B3C8u;
    SET_GPR_U32(ctx, 31, 0x12B3D0u);
    ctx->pc = 0x12B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3C8u;
    // 0x12b3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1269C0u, 0x12B3C8u, 0x12B3D0u)) {
        return;
    }
    ctx->pc = 0x12B3D0u;
label_12b3d0:
    // 0x12b3d0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x12b3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12b3d4:
    // 0x12b3d4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x12b3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12b3d8:
    // 0x12b3d8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x12b3d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12b3dc:
    // 0x12b3dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12b3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12b3e0:
    // 0x12b3e0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x12b3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12b3e4:
    // 0x12b3e4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x12b3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12b3e8:
    // 0x12b3e8: 0x3e00008  jr          $ra
label_12b3ec:
    if (ctx->pc == 0x12B3ECu) {
        ctx->pc = 0x12B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3E8u;
        // 0x12b3ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3F0u;
        goto label_fallthrough_0x12b3e8;
    }
    ctx->pc = 0x12B3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3E8u;
        // 0x12b3ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12b3e8:
    ctx->pc = 0x12B3F0u;
}
