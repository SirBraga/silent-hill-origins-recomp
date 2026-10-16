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

// Function: sub_001DB240
// Address: 0x1db240 - 0x1db3e0
void sub_001DB240_0x1db240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB240_0x1db240");
#endif

    switch (ctx->pc) {
        case 0x1db240u: goto label_1db240;
        case 0x1db244u: goto label_1db244;
        case 0x1db248u: goto label_1db248;
        case 0x1db24cu: goto label_1db24c;
        case 0x1db250u: goto label_1db250;
        case 0x1db254u: goto label_1db254;
        case 0x1db258u: goto label_1db258;
        case 0x1db25cu: goto label_1db25c;
        case 0x1db260u: goto label_1db260;
        case 0x1db264u: goto label_1db264;
        case 0x1db268u: goto label_1db268;
        case 0x1db26cu: goto label_1db26c;
        case 0x1db270u: goto label_1db270;
        case 0x1db274u: goto label_1db274;
        case 0x1db278u: goto label_1db278;
        case 0x1db27cu: goto label_1db27c;
        case 0x1db280u: goto label_1db280;
        case 0x1db284u: goto label_1db284;
        case 0x1db288u: goto label_1db288;
        case 0x1db28cu: goto label_1db28c;
        case 0x1db290u: goto label_1db290;
        case 0x1db294u: goto label_1db294;
        case 0x1db298u: goto label_1db298;
        case 0x1db29cu: goto label_1db29c;
        case 0x1db2a0u: goto label_1db2a0;
        case 0x1db2a4u: goto label_1db2a4;
        case 0x1db2a8u: goto label_1db2a8;
        case 0x1db2acu: goto label_1db2ac;
        case 0x1db2b0u: goto label_1db2b0;
        case 0x1db2b4u: goto label_1db2b4;
        case 0x1db2b8u: goto label_1db2b8;
        case 0x1db2bcu: goto label_1db2bc;
        case 0x1db2c0u: goto label_1db2c0;
        case 0x1db2c4u: goto label_1db2c4;
        case 0x1db2c8u: goto label_1db2c8;
        case 0x1db2ccu: goto label_1db2cc;
        case 0x1db2d0u: goto label_1db2d0;
        case 0x1db2d4u: goto label_1db2d4;
        case 0x1db2d8u: goto label_1db2d8;
        case 0x1db2dcu: goto label_1db2dc;
        case 0x1db2e0u: goto label_1db2e0;
        case 0x1db2e4u: goto label_1db2e4;
        case 0x1db2e8u: goto label_1db2e8;
        case 0x1db2ecu: goto label_1db2ec;
        case 0x1db2f0u: goto label_1db2f0;
        case 0x1db2f4u: goto label_1db2f4;
        case 0x1db2f8u: goto label_1db2f8;
        case 0x1db2fcu: goto label_1db2fc;
        case 0x1db300u: goto label_1db300;
        case 0x1db304u: goto label_1db304;
        case 0x1db308u: goto label_1db308;
        case 0x1db30cu: goto label_1db30c;
        case 0x1db310u: goto label_1db310;
        case 0x1db314u: goto label_1db314;
        case 0x1db318u: goto label_1db318;
        case 0x1db31cu: goto label_1db31c;
        case 0x1db320u: goto label_1db320;
        case 0x1db324u: goto label_1db324;
        case 0x1db328u: goto label_1db328;
        case 0x1db32cu: goto label_1db32c;
        case 0x1db330u: goto label_1db330;
        case 0x1db334u: goto label_1db334;
        case 0x1db338u: goto label_1db338;
        case 0x1db33cu: goto label_1db33c;
        case 0x1db340u: goto label_1db340;
        case 0x1db344u: goto label_1db344;
        case 0x1db348u: goto label_1db348;
        case 0x1db34cu: goto label_1db34c;
        case 0x1db350u: goto label_1db350;
        case 0x1db354u: goto label_1db354;
        case 0x1db358u: goto label_1db358;
        case 0x1db35cu: goto label_1db35c;
        case 0x1db360u: goto label_1db360;
        case 0x1db364u: goto label_1db364;
        case 0x1db368u: goto label_1db368;
        case 0x1db36cu: goto label_1db36c;
        case 0x1db370u: goto label_1db370;
        case 0x1db374u: goto label_1db374;
        case 0x1db378u: goto label_1db378;
        case 0x1db37cu: goto label_1db37c;
        case 0x1db380u: goto label_1db380;
        case 0x1db384u: goto label_1db384;
        case 0x1db388u: goto label_1db388;
        case 0x1db38cu: goto label_1db38c;
        case 0x1db390u: goto label_1db390;
        case 0x1db394u: goto label_1db394;
        case 0x1db398u: goto label_1db398;
        case 0x1db39cu: goto label_1db39c;
        case 0x1db3a0u: goto label_1db3a0;
        case 0x1db3a4u: goto label_1db3a4;
        case 0x1db3a8u: goto label_1db3a8;
        case 0x1db3acu: goto label_1db3ac;
        case 0x1db3b0u: goto label_1db3b0;
        case 0x1db3b4u: goto label_1db3b4;
        case 0x1db3b8u: goto label_1db3b8;
        case 0x1db3bcu: goto label_1db3bc;
        case 0x1db3c0u: goto label_1db3c0;
        case 0x1db3c4u: goto label_1db3c4;
        case 0x1db3c8u: goto label_1db3c8;
        case 0x1db3ccu: goto label_1db3cc;
        case 0x1db3d0u: goto label_1db3d0;
        case 0x1db3d4u: goto label_1db3d4;
        case 0x1db3d8u: goto label_1db3d8;
        case 0x1db3dcu: goto label_1db3dc;
        default: break;
    }

    ctx->pc = 0x1db240u;

label_1db240:
    // 0x1db240: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1db240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1db244:
    // 0x1db244: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1db244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1db248:
    // 0x1db248: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1db248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1db24c:
    // 0x1db24c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1db24cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db250:
    // 0x1db250: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1db250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1db254:
    // 0x1db254: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1db254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1db258:
    // 0x1db258: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1db258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1db25c:
    // 0x1db25c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1db25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1db260:
    // 0x1db260: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1db260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1db264:
    // 0x1db264: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1db264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1db268:
    // 0x1db268: 0x12600052  beqz        $s3, . + 4 + (0x52 << 2)
label_1db26c:
    if (ctx->pc == 0x1DB26Cu) {
        ctx->pc = 0x1DB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB268u;
        // 0x1db26c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB270u;
        goto label_1db270;
    }
    ctx->pc = 0x1DB268u;
    {
        const bool branch_taken_0x1db268 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB268u;
        // 0x1db26c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db268) {
            ctx->pc = 0x1DB3B4u;
            goto label_1db3b4;
        }
    }
    ctx->pc = 0x1DB270u;
label_1db270:
    // 0x1db270: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x1db270u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1db274:
    // 0x1db274: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db278:
    // 0x1db278: 0x8e760004  lw          $s6, 0x4($s3)
    ctx->pc = 0x1db278u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1db27c:
    // 0x1db27c: 0x1aa00020  blez        $s5, . + 4 + (0x20 << 2)
label_1db280:
    if (ctx->pc == 0x1DB280u) {
        ctx->pc = 0x1DB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB27Cu;
        // 0x1db280: 0x3c170073  lui         $s7, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB284u;
        goto label_1db284;
    }
    ctx->pc = 0x1DB27Cu;
    {
        const bool branch_taken_0x1db27c = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x1DB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB27Cu;
        // 0x1db280: 0x3c170073  lui         $s7, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db27c) {
            ctx->pc = 0x1DB300u;
            goto label_1db300;
        }
    }
    ctx->pc = 0x1DB284u;
label_1db284:
    // 0x1db284: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1db284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1db288:
    // 0x1db288: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1db288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1db28c:
    // 0x1db28c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1db28cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db290:
    // 0x1db290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db294:
    // 0x1db294: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1db294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db298:
    // 0x1db298: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1db29c:
    if (ctx->pc == 0x1DB29Cu) {
        ctx->pc = 0x1DB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB298u;
        // 0x1db29c: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2A0u;
        goto label_1db2a0;
    }
    ctx->pc = 0x1DB298u;
    {
        const bool branch_taken_0x1db298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB298u;
        // 0x1db29c: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db298) {
            ctx->pc = 0x1DB2B4u;
            goto label_1db2b4;
        }
    }
    ctx->pc = 0x1DB2A0u;
label_1db2a0:
    // 0x1db2a0: 0xc09d90a  jal         func_276428
label_1db2a4:
    if (ctx->pc == 0x1DB2A4u) {
        ctx->pc = 0x1DB2A8u;
        goto label_1db2a8;
    }
    ctx->pc = 0x1DB2A0u;
    SET_GPR_U32(ctx, 31, 0x1DB2A8u);
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x1DB2A0u, 0x1DB2A8u)) {
        return;
    }
    ctx->pc = 0x1DB2A8u;
label_1db2a8:
    // 0x1db2a8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1db2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1db2ac:
    // 0x1db2ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1db2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1db2b0:
    // 0x1db2b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1db2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1db2b4:
    // 0x1db2b4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1db2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db2b8:
    // 0x1db2b8: 0x2670000c  addiu       $s0, $s3, 0xC
    ctx->pc = 0x1db2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1db2bc:
    // 0x1db2bc: 0x0  nop
    ctx->pc = 0x1db2bcu;
    // NOP
label_1db2c0:
    // 0x1db2c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1db2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db2c4:
    // 0x1db2c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1db2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1db2c8:
    // 0x1db2c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1db2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db2cc:
    // 0x1db2cc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1db2d0:
    if (ctx->pc == 0x1DB2D0u) {
        ctx->pc = 0x1DB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2CCu;
        // 0x1db2d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2D4u;
        goto label_1db2d4;
    }
    ctx->pc = 0x1DB2CCu;
    {
        const bool branch_taken_0x1db2cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2CCu;
        // 0x1db2d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2cc) {
            ctx->pc = 0x1DB2E8u;
            goto label_1db2e8;
        }
    }
    ctx->pc = 0x1DB2D4u;
label_1db2d4:
    // 0x1db2d4: 0xc09d90a  jal         func_276428
label_1db2d8:
    if (ctx->pc == 0x1DB2D8u) {
        ctx->pc = 0x1DB2DCu;
        goto label_1db2dc;
    }
    ctx->pc = 0x1DB2D4u;
    SET_GPR_U32(ctx, 31, 0x1DB2DCu);
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x1DB2D4u, 0x1DB2DCu)) {
        return;
    }
    ctx->pc = 0x1DB2DCu;
label_1db2dc:
    // 0x1db2dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1db2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db2e0:
    // 0x1db2e0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1db2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1db2e4:
    // 0x1db2e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1db2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1db2e8:
    // 0x1db2e8: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
label_1db2ec:
    if (ctx->pc == 0x1DB2ECu) {
        ctx->pc = 0x1DB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2E8u;
        // 0x1db2ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB2F0u;
        goto label_1db2f0;
    }
    ctx->pc = 0x1DB2E8u;
    {
        const bool branch_taken_0x1db2e8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1DB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2E8u;
        // 0x1db2ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2e8) {
            ctx->pc = 0x1DB2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db2c0;
        }
    }
    ctx->pc = 0x1DB2F0u;
label_1db2f0:
    // 0x1db2f0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1db2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1db2f4:
    // 0x1db2f4: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x1db2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1db2f8:
    // 0x1db2f8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1db2fc:
    if (ctx->pc == 0x1DB2FCu) {
        ctx->pc = 0x1DB2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2F8u;
        // 0x1db2fc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB300u;
        goto label_1db300;
    }
    ctx->pc = 0x1DB2F8u;
    {
        const bool branch_taken_0x1db2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2F8u;
        // 0x1db2fc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2f8) {
            ctx->pc = 0x1DB288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db288;
        }
    }
    ctx->pc = 0x1DB300u;
label_1db300:
    // 0x1db300: 0x1ac00021  blez        $s6, . + 4 + (0x21 << 2)
label_1db304:
    if (ctx->pc == 0x1DB304u) {
        ctx->pc = 0x1DB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB300u;
        // 0x1db304: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB308u;
        goto label_1db308;
    }
    ctx->pc = 0x1DB300u;
    {
        const bool branch_taken_0x1db300 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x1DB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB300u;
        // 0x1db304: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db300) {
            ctx->pc = 0x1DB388u;
            goto label_1db388;
        }
    }
    ctx->pc = 0x1DB308u;
label_1db308:
    // 0x1db308: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1db308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1db30c:
    // 0x1db30c: 0x0  nop
    ctx->pc = 0x1db30cu;
    // NOP
label_1db310:
    // 0x1db310: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1db310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1db314:
    // 0x1db314: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1db314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db318:
    // 0x1db318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db31c:
    // 0x1db31c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1db31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db320:
    // 0x1db320: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1db324:
    if (ctx->pc == 0x1DB324u) {
        ctx->pc = 0x1DB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB320u;
        // 0x1db324: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB328u;
        goto label_1db328;
    }
    ctx->pc = 0x1DB320u;
    {
        const bool branch_taken_0x1db320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB320u;
        // 0x1db324: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db320) {
            ctx->pc = 0x1DB33Cu;
            goto label_1db33c;
        }
    }
    ctx->pc = 0x1DB328u;
label_1db328:
    // 0x1db328: 0xc09d90a  jal         func_276428
label_1db32c:
    if (ctx->pc == 0x1DB32Cu) {
        ctx->pc = 0x1DB330u;
        goto label_1db330;
    }
    ctx->pc = 0x1DB328u;
    SET_GPR_U32(ctx, 31, 0x1DB330u);
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x1DB328u, 0x1DB330u)) {
        return;
    }
    ctx->pc = 0x1DB330u;
label_1db330:
    // 0x1db330: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1db330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1db334:
    // 0x1db334: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1db334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1db338:
    // 0x1db338: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1db338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1db33c:
    // 0x1db33c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1db33cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db340:
    // 0x1db340: 0x26700018  addiu       $s0, $s3, 0x18
    ctx->pc = 0x1db340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_1db344:
    // 0x1db344: 0x0  nop
    ctx->pc = 0x1db344u;
    // NOP
label_1db348:
    // 0x1db348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1db348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db34c:
    // 0x1db34c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1db34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1db350:
    // 0x1db350: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1db350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db354:
    // 0x1db354: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1db358:
    if (ctx->pc == 0x1DB358u) {
        ctx->pc = 0x1DB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB354u;
        // 0x1db358: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB35Cu;
        goto label_1db35c;
    }
    ctx->pc = 0x1DB354u;
    {
        const bool branch_taken_0x1db354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB354u;
        // 0x1db358: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db354) {
            ctx->pc = 0x1DB370u;
            goto label_1db370;
        }
    }
    ctx->pc = 0x1DB35Cu;
label_1db35c:
    // 0x1db35c: 0xc09d90a  jal         func_276428
label_1db360:
    if (ctx->pc == 0x1DB360u) {
        ctx->pc = 0x1DB364u;
        goto label_1db364;
    }
    ctx->pc = 0x1DB35Cu;
    SET_GPR_U32(ctx, 31, 0x1DB364u);
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x1DB35Cu, 0x1DB364u)) {
        return;
    }
    ctx->pc = 0x1DB364u;
label_1db364:
    // 0x1db364: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1db364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db368:
    // 0x1db368: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1db368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1db36c:
    // 0x1db36c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1db36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1db370:
    // 0x1db370: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
label_1db374:
    if (ctx->pc == 0x1DB374u) {
        ctx->pc = 0x1DB374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB370u;
        // 0x1db374: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB378u;
        goto label_1db378;
    }
    ctx->pc = 0x1DB370u;
    {
        const bool branch_taken_0x1db370 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1DB374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB370u;
        // 0x1db374: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db370) {
            ctx->pc = 0x1DB348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db348;
        }
    }
    ctx->pc = 0x1DB378u;
label_1db378:
    // 0x1db378: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1db378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1db37c:
    // 0x1db37c: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1db37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1db380:
    // 0x1db380: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1db384:
    if (ctx->pc == 0x1DB384u) {
        ctx->pc = 0x1DB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB380u;
        // 0x1db384: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB388u;
        goto label_1db388;
    }
    ctx->pc = 0x1DB380u;
    {
        const bool branch_taken_0x1db380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB380u;
        // 0x1db384: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db380) {
            ctx->pc = 0x1DB310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db310;
        }
    }
    ctx->pc = 0x1DB388u;
label_1db388:
    // 0x1db388: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1db388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1db38c:
    // 0x1db38c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1db390:
    if (ctx->pc == 0x1DB390u) {
        ctx->pc = 0x1DB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB38Cu;
        // 0x1db390: 0x26e30fc8  addiu       $v1, $s7, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB394u;
        goto label_1db394;
    }
    ctx->pc = 0x1DB38Cu;
    {
        const bool branch_taken_0x1db38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB38Cu;
        // 0x1db390: 0x26e30fc8  addiu       $v1, $s7, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db38c) {
            ctx->pc = 0x1DB3A4u;
            goto label_1db3a4;
        }
    }
    ctx->pc = 0x1DB394u;
label_1db394:
    // 0x1db394: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x1db394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1db398:
    // 0x1db398: 0x40f809  jalr        $v0
label_1db39c:
    if (ctx->pc == 0x1DB39Cu) {
        ctx->pc = 0x1DB3A0u;
        goto label_1db3a0;
    }
    ctx->pc = 0x1DB398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB3A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB398u, 0x1DB3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB3A0u;
label_1db3a0:
    // 0x1db3a0: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1db3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_1db3a4:
    // 0x1db3a4: 0x26e30fc8  addiu       $v1, $s7, 0xFC8
    ctx->pc = 0x1db3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_1db3a8:
    // 0x1db3a8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x1db3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1db3ac:
    // 0x1db3ac: 0x40f809  jalr        $v0
label_1db3b0:
    if (ctx->pc == 0x1DB3B0u) {
        ctx->pc = 0x1DB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3ACu;
        // 0x1db3b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB3B4u;
        goto label_1db3b4;
    }
    ctx->pc = 0x1DB3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB3B4u);
        ctx->pc = 0x1DB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3ACu;
        // 0x1db3b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3ACu, 0x1DB3B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB3B4u;
label_1db3b4:
    // 0x1db3b4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1db3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1db3b8:
    // 0x1db3b8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1db3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1db3bc:
    // 0x1db3bc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1db3bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1db3c0:
    // 0x1db3c0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1db3c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1db3c4:
    // 0x1db3c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1db3c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1db3c8:
    // 0x1db3c8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1db3c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1db3cc:
    // 0x1db3cc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1db3ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db3d0:
    // 0x1db3d0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1db3d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db3d4:
    // 0x1db3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db3d8:
    // 0x1db3d8: 0x3e00008  jr          $ra
label_1db3dc:
    if (ctx->pc == 0x1DB3DCu) {
        ctx->pc = 0x1DB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3D8u;
        // 0x1db3dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB3E0u;
        goto label_fallthrough_0x1db3d8;
    }
    ctx->pc = 0x1DB3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3D8u;
        // 0x1db3dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db3d8:
    ctx->pc = 0x1DB3E0u;
}
