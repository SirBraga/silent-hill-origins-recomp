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

// Function: sub_001ED1F8
// Address: 0x1ed1f8 - 0x1ed330
void sub_001ED1F8_0x1ed1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED1F8_0x1ed1f8");
#endif

    switch (ctx->pc) {
        case 0x1ed240u: goto label_1ed240;
        case 0x1ed254u: goto label_1ed254;
        case 0x1ed2b8u: goto label_1ed2b8;
        case 0x1ed2c0u: goto label_1ed2c0;
        case 0x1ed2dcu: goto label_1ed2dc;
        case 0x1ed2f8u: goto label_1ed2f8;
        case 0x1ed310u: goto label_1ed310;
        default: break;
    }

    ctx->pc = 0x1ed1f8u;

    // 0x1ed1f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ed1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ed1fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ed1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ed200: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ed200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ed204: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ed204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed208: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ed208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ed20c: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1ED20Cu;
    {
        const bool branch_taken_0x1ed20c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED20Cu;
        // 0x1ed210: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed20c) {
            ctx->pc = 0x1ED310u;
            goto label_1ed310;
        }
    }
    ctx->pc = 0x1ED214u;
    // 0x1ed214: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ed214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1ed218: 0x8c62e7bc  lw          $v0, -0x1844($v1)
    ctx->pc = 0x1ed218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1ed21c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1ed21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ed220: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1ed220u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ed224: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1ED224u;
    {
        const bool branch_taken_0x1ed224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED224u;
        // 0x1ed228: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed224) {
            ctx->pc = 0x1ED310u;
            goto label_1ed310;
        }
    }
    ctx->pc = 0x1ED22Cu;
    // 0x1ed22c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ed22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ed230: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED230u;
    {
        const bool branch_taken_0x1ed230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed230) {
            ctx->pc = 0x1ED234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED230u;
            // 0x1ed234: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED244u;
            goto label_1ed244;
        }
    }
    ctx->pc = 0x1ED238u;
    // 0x1ed238: 0xc07b3fa  jal         func_1ECFE8
    ctx->pc = 0x1ED238u;
    SET_GPR_U32(ctx, 31, 0x1ED240u);
    ctx->pc = 0x1ED23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED238u;
    // 0x1ed23c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECFE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECFE8u, 0x1ED238u, 0x1ED240u)) {
        return;
    }
    ctx->pc = 0x1ED240u;
label_1ed240:
    // 0x1ed240: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ed240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ed244:
    // 0x1ed244: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED244u;
    {
        const bool branch_taken_0x1ed244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed244) {
            ctx->pc = 0x1ED248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED244u;
            // 0x1ed248: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED258u;
            goto label_1ed258;
        }
    }
    ctx->pc = 0x1ED24Cu;
    // 0x1ed24c: 0xc07b3fa  jal         func_1ECFE8
    ctx->pc = 0x1ED24Cu;
    SET_GPR_U32(ctx, 31, 0x1ED254u);
    ctx->pc = 0x1ED250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED24Cu;
    // 0x1ed250: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECFE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECFE8u, 0x1ED24Cu, 0x1ED254u)) {
        return;
    }
    ctx->pc = 0x1ED254u;
label_1ed254:
    // 0x1ed254: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ed254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ed258:
    // 0x1ed258: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1ED258u;
    {
        const bool branch_taken_0x1ed258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED258u;
        // 0x1ed25c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed258) {
            ctx->pc = 0x1ED314u;
            goto label_1ed314;
        }
    }
    ctx->pc = 0x1ED260u;
    // 0x1ed260: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ed264: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1ED264u;
    {
        const bool branch_taken_0x1ed264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED264u;
        // 0x1ed268: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed264) {
            ctx->pc = 0x1ED314u;
            goto label_1ed314;
        }
    }
    ctx->pc = 0x1ED26Cu;
    // 0x1ed26c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ed26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ed270: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1ED270u;
    {
        const bool branch_taken_0x1ed270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED270u;
        // 0x1ed274: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed270) {
            ctx->pc = 0x1ED314u;
            goto label_1ed314;
        }
    }
    ctx->pc = 0x1ED278u;
    // 0x1ed278: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ed278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed27c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1ED27Cu;
    {
        const bool branch_taken_0x1ed27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED27Cu;
        // 0x1ed280: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed27c) {
            ctx->pc = 0x1ED314u;
            goto label_1ed314;
        }
    }
    ctx->pc = 0x1ED284u;
    // 0x1ed284: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ed284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ed288: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ed288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed28c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ed28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ed290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ed294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ed298: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ed298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ed29c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed2a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ed2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed2a4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ed2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ed2a8: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x1ed2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x1ed2ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ed2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed2b0: 0xc07a764  jal         func_1E9D90
    ctx->pc = 0x1ED2B0u;
    SET_GPR_U32(ctx, 31, 0x1ED2B8u);
    ctx->pc = 0x1ED2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2B0u;
    // 0x1ed2b4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E9D90u, 0x1ED2B0u, 0x1ED2B8u)) {
        return;
    }
    ctx->pc = 0x1ED2B8u;
label_1ed2b8:
    // 0x1ed2b8: 0xc07b310  jal         func_1ECC40
    ctx->pc = 0x1ED2B8u;
    SET_GPR_U32(ctx, 31, 0x1ED2C0u);
    ctx->pc = 0x1ED2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2B8u;
    // 0x1ed2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECC40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECC40u, 0x1ED2B8u, 0x1ED2C0u)) {
        return;
    }
    ctx->pc = 0x1ED2C0u;
label_1ed2c0:
    // 0x1ed2c0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ED2C0u;
    {
        const bool branch_taken_0x1ed2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2C0u;
        // 0x1ed2c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2c0) {
            ctx->pc = 0x1ED310u;
            goto label_1ed310;
        }
    }
    ctx->pc = 0x1ED2C8u;
    // 0x1ed2c8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ed2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ed2cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED2CCu;
    {
        const bool branch_taken_0x1ed2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2CCu;
        // 0x1ed2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2cc) {
            ctx->pc = 0x1ED310u;
            goto label_1ed310;
        }
    }
    ctx->pc = 0x1ED2D4u;
    // 0x1ed2d4: 0xc07b02e  jal         func_1EC0B8
    ctx->pc = 0x1ED2D4u;
    SET_GPR_U32(ctx, 31, 0x1ED2DCu);
    ctx->pc = 0x1ED2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2D4u;
    // 0x1ed2d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC0B8u, 0x1ED2D4u, 0x1ED2DCu)) {
        return;
    }
    ctx->pc = 0x1ED2DCu;
label_1ed2dc:
    // 0x1ed2dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ED2DCu;
    {
        const bool branch_taken_0x1ed2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2dc) {
            ctx->pc = 0x1ED2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED2DCu;
            // 0x1ed2e0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED2E4u;
            goto label_1ed2e4;
        }
    }
    ctx->pc = 0x1ED2E4u;
label_1ed2e4:
    // 0x1ed2e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED2E4u;
    {
        const bool branch_taken_0x1ed2e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2E4u;
        // 0x1ed2e8: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2e4) {
            ctx->pc = 0x1ED300u;
            goto label_1ed300;
        }
    }
    ctx->pc = 0x1ED2ECu;
    // 0x1ed2ec: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1ed2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ed2f0: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x1ED2F0u;
    SET_GPR_U32(ctx, 31, 0x1ED2F8u);
    ctx->pc = 0x1ED2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2F0u;
    // 0x1ed2f4: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x1ED2F0u, 0x1ED2F8u)) {
        return;
    }
    ctx->pc = 0x1ED2F8u;
label_1ed2f8:
    // 0x1ed2f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED2F8u;
    {
        const bool branch_taken_0x1ed2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2F8u;
        // 0x1ed2fc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2f8) {
            ctx->pc = 0x1ED314u;
            goto label_1ed314;
        }
    }
    ctx->pc = 0x1ED300u;
label_1ed300:
    // 0x1ed300: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ed300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ed304: 0x24a51e90  addiu       $a1, $a1, 0x1E90
    ctx->pc = 0x1ed304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7824));
    // 0x1ed308: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x1ED308u;
    SET_GPR_U32(ctx, 31, 0x1ED310u);
    ctx->pc = 0x1ED30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED308u;
    // 0x1ed30c: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x1ED308u, 0x1ED310u)) {
        return;
    }
    ctx->pc = 0x1ED310u;
label_1ed310:
    // 0x1ed310: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1ed310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ed314:
    // 0x1ed314: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ed314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed318: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ed318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed31c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ed31cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed324: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED324u;
        // 0x1ed328: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED32Cu;
    // 0x1ed32c: 0x0  nop
    ctx->pc = 0x1ed32cu;
    // NOP
    ctx->pc = 0x1ed330u;
}
