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

// Function: sub_0016C180
// Address: 0x16c180 - 0x16c3d8
void sub_0016C180_0x16c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C180_0x16c180");
#endif

    switch (ctx->pc) {
        case 0x16c180u: goto label_16c180;
        case 0x16c184u: goto label_16c184;
        case 0x16c188u: goto label_16c188;
        case 0x16c18cu: goto label_16c18c;
        case 0x16c190u: goto label_16c190;
        case 0x16c194u: goto label_16c194;
        case 0x16c198u: goto label_16c198;
        case 0x16c19cu: goto label_16c19c;
        case 0x16c1a0u: goto label_16c1a0;
        case 0x16c1a4u: goto label_16c1a4;
        case 0x16c1a8u: goto label_16c1a8;
        case 0x16c1acu: goto label_16c1ac;
        case 0x16c1b0u: goto label_16c1b0;
        case 0x16c1b4u: goto label_16c1b4;
        case 0x16c1b8u: goto label_16c1b8;
        case 0x16c1bcu: goto label_16c1bc;
        case 0x16c1c0u: goto label_16c1c0;
        case 0x16c1c4u: goto label_16c1c4;
        case 0x16c1c8u: goto label_16c1c8;
        case 0x16c1ccu: goto label_16c1cc;
        case 0x16c1d0u: goto label_16c1d0;
        case 0x16c1d4u: goto label_16c1d4;
        case 0x16c1d8u: goto label_16c1d8;
        case 0x16c1dcu: goto label_16c1dc;
        case 0x16c1e0u: goto label_16c1e0;
        case 0x16c1e4u: goto label_16c1e4;
        case 0x16c1e8u: goto label_16c1e8;
        case 0x16c1ecu: goto label_16c1ec;
        case 0x16c1f0u: goto label_16c1f0;
        case 0x16c1f4u: goto label_16c1f4;
        case 0x16c1f8u: goto label_16c1f8;
        case 0x16c1fcu: goto label_16c1fc;
        case 0x16c200u: goto label_16c200;
        case 0x16c204u: goto label_16c204;
        case 0x16c208u: goto label_16c208;
        case 0x16c20cu: goto label_16c20c;
        case 0x16c210u: goto label_16c210;
        case 0x16c214u: goto label_16c214;
        case 0x16c218u: goto label_16c218;
        case 0x16c21cu: goto label_16c21c;
        case 0x16c220u: goto label_16c220;
        case 0x16c224u: goto label_16c224;
        case 0x16c228u: goto label_16c228;
        case 0x16c22cu: goto label_16c22c;
        case 0x16c230u: goto label_16c230;
        case 0x16c234u: goto label_16c234;
        case 0x16c238u: goto label_16c238;
        case 0x16c23cu: goto label_16c23c;
        case 0x16c240u: goto label_16c240;
        case 0x16c244u: goto label_16c244;
        case 0x16c248u: goto label_16c248;
        case 0x16c24cu: goto label_16c24c;
        case 0x16c250u: goto label_16c250;
        case 0x16c254u: goto label_16c254;
        case 0x16c258u: goto label_16c258;
        case 0x16c25cu: goto label_16c25c;
        case 0x16c260u: goto label_16c260;
        case 0x16c264u: goto label_16c264;
        case 0x16c268u: goto label_16c268;
        case 0x16c26cu: goto label_16c26c;
        case 0x16c270u: goto label_16c270;
        case 0x16c274u: goto label_16c274;
        case 0x16c278u: goto label_16c278;
        case 0x16c27cu: goto label_16c27c;
        case 0x16c280u: goto label_16c280;
        case 0x16c284u: goto label_16c284;
        case 0x16c288u: goto label_16c288;
        case 0x16c28cu: goto label_16c28c;
        case 0x16c290u: goto label_16c290;
        case 0x16c294u: goto label_16c294;
        case 0x16c298u: goto label_16c298;
        case 0x16c29cu: goto label_16c29c;
        case 0x16c2a0u: goto label_16c2a0;
        case 0x16c2a4u: goto label_16c2a4;
        case 0x16c2a8u: goto label_16c2a8;
        case 0x16c2acu: goto label_16c2ac;
        case 0x16c2b0u: goto label_16c2b0;
        case 0x16c2b4u: goto label_16c2b4;
        case 0x16c2b8u: goto label_16c2b8;
        case 0x16c2bcu: goto label_16c2bc;
        case 0x16c2c0u: goto label_16c2c0;
        case 0x16c2c4u: goto label_16c2c4;
        case 0x16c2c8u: goto label_16c2c8;
        case 0x16c2ccu: goto label_16c2cc;
        case 0x16c2d0u: goto label_16c2d0;
        case 0x16c2d4u: goto label_16c2d4;
        case 0x16c2d8u: goto label_16c2d8;
        case 0x16c2dcu: goto label_16c2dc;
        case 0x16c2e0u: goto label_16c2e0;
        case 0x16c2e4u: goto label_16c2e4;
        case 0x16c2e8u: goto label_16c2e8;
        case 0x16c2ecu: goto label_16c2ec;
        case 0x16c2f0u: goto label_16c2f0;
        case 0x16c2f4u: goto label_16c2f4;
        case 0x16c2f8u: goto label_16c2f8;
        case 0x16c2fcu: goto label_16c2fc;
        case 0x16c300u: goto label_16c300;
        case 0x16c304u: goto label_16c304;
        case 0x16c308u: goto label_16c308;
        case 0x16c30cu: goto label_16c30c;
        case 0x16c310u: goto label_16c310;
        case 0x16c314u: goto label_16c314;
        case 0x16c318u: goto label_16c318;
        case 0x16c31cu: goto label_16c31c;
        case 0x16c320u: goto label_16c320;
        case 0x16c324u: goto label_16c324;
        case 0x16c328u: goto label_16c328;
        case 0x16c32cu: goto label_16c32c;
        case 0x16c330u: goto label_16c330;
        case 0x16c334u: goto label_16c334;
        case 0x16c338u: goto label_16c338;
        case 0x16c33cu: goto label_16c33c;
        case 0x16c340u: goto label_16c340;
        case 0x16c344u: goto label_16c344;
        case 0x16c348u: goto label_16c348;
        case 0x16c34cu: goto label_16c34c;
        case 0x16c350u: goto label_16c350;
        case 0x16c354u: goto label_16c354;
        case 0x16c358u: goto label_16c358;
        case 0x16c35cu: goto label_16c35c;
        case 0x16c360u: goto label_16c360;
        case 0x16c364u: goto label_16c364;
        case 0x16c368u: goto label_16c368;
        case 0x16c36cu: goto label_16c36c;
        case 0x16c370u: goto label_16c370;
        case 0x16c374u: goto label_16c374;
        case 0x16c378u: goto label_16c378;
        case 0x16c37cu: goto label_16c37c;
        case 0x16c380u: goto label_16c380;
        case 0x16c384u: goto label_16c384;
        case 0x16c388u: goto label_16c388;
        case 0x16c38cu: goto label_16c38c;
        case 0x16c390u: goto label_16c390;
        case 0x16c394u: goto label_16c394;
        case 0x16c398u: goto label_16c398;
        case 0x16c39cu: goto label_16c39c;
        case 0x16c3a0u: goto label_16c3a0;
        case 0x16c3a4u: goto label_16c3a4;
        case 0x16c3a8u: goto label_16c3a8;
        case 0x16c3acu: goto label_16c3ac;
        case 0x16c3b0u: goto label_16c3b0;
        case 0x16c3b4u: goto label_16c3b4;
        case 0x16c3b8u: goto label_16c3b8;
        case 0x16c3bcu: goto label_16c3bc;
        case 0x16c3c0u: goto label_16c3c0;
        case 0x16c3c4u: goto label_16c3c4;
        case 0x16c3c8u: goto label_16c3c8;
        case 0x16c3ccu: goto label_16c3cc;
        case 0x16c3d0u: goto label_16c3d0;
        case 0x16c3d4u: goto label_16c3d4;
        default: break;
    }

    ctx->pc = 0x16c180u;

label_16c180:
    // 0x16c180: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_16c184:
    // 0x16c184: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16c184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_16c188:
    // 0x16c188: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x16c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_16c18c:
    // 0x16c18c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c190:
    // 0x16c190: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16c190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_16c194:
    // 0x16c194: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16c198:
    // 0x16c198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16c198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16c19c:
    // 0x16c19c: 0xc04f0bc  jal         func_13C2F0
label_16c1a0:
    if (ctx->pc == 0x16C1A0u) {
        ctx->pc = 0x16C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C19Cu;
        // 0x16c1a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1A4u;
        goto label_16c1a4;
    }
    ctx->pc = 0x16C19Cu;
    SET_GPR_U32(ctx, 31, 0x16C1A4u);
    ctx->pc = 0x16C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C19Cu;
    // 0x16c1a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x16C19Cu, 0x16C1A4u)) {
        return;
    }
    ctx->pc = 0x16C1A4u;
label_16c1a4:
    // 0x16c1a4: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x16c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_16c1a8:
    // 0x16c1a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16c1ac:
    // 0x16c1ac: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_16c1b0:
    if (ctx->pc == 0x16C1B0u) {
        ctx->pc = 0x16C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1ACu;
        // 0x16c1b0: 0x8e030104  lw          $v1, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1B4u;
        goto label_16c1b4;
    }
    ctx->pc = 0x16C1ACu;
    {
        const bool branch_taken_0x16c1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c1ac) {
            ctx->pc = 0x16C1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C1ACu;
            // 0x16c1b0: 0x8e030104  lw          $v1, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C1D4u;
            goto label_16c1d4;
        }
    }
    ctx->pc = 0x16C1B4u;
label_16c1b4:
    // 0x16c1b4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x16c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_16c1b8:
    // 0x16c1b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c1bc:
    // 0x16c1bc: 0xc05a818  jal         func_16A060
label_16c1c0:
    if (ctx->pc == 0x16C1C0u) {
        ctx->pc = 0x16C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1BCu;
        // 0x16c1c0: 0x24844950  addiu       $a0, $a0, 0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1C4u;
        goto label_16c1c4;
    }
    ctx->pc = 0x16C1BCu;
    SET_GPR_U32(ctx, 31, 0x16C1C4u);
    ctx->pc = 0x16C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1BCu;
    // 0x16c1c0: 0x24844950  addiu       $a0, $a0, 0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A060u, 0x16C1BCu, 0x16C1C4u)) {
        return;
    }
    ctx->pc = 0x16C1C4u;
label_16c1c4:
    // 0x16c1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c1c8:
    // 0x16c1c8: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x16c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_16c1cc:
    // 0x16c1cc: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x16c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_16c1d0:
    // 0x16c1d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16c1d4:
    // 0x16c1d4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_16c1d8:
    if (ctx->pc == 0x16C1D8u) {
        ctx->pc = 0x16C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1D4u;
        // 0x16c1d8: 0x8e030044  lw          $v1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1DCu;
        goto label_16c1dc;
    }
    ctx->pc = 0x16C1D4u;
    {
        const bool branch_taken_0x16c1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c1d4) {
            ctx->pc = 0x16C1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C1D4u;
            // 0x16c1d8: 0x8e030044  lw          $v1, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C1F4u;
            goto label_16c1f4;
        }
    }
    ctx->pc = 0x16C1DCu;
label_16c1dc:
    // 0x16c1dc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x16c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_16c1e0:
    // 0x16c1e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c1e4:
    // 0x16c1e4: 0xc05a818  jal         func_16A060
label_16c1e8:
    if (ctx->pc == 0x16C1E8u) {
        ctx->pc = 0x16C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1E4u;
        // 0x16c1e8: 0x24844970  addiu       $a0, $a0, 0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1ECu;
        goto label_16c1ec;
    }
    ctx->pc = 0x16C1E4u;
    SET_GPR_U32(ctx, 31, 0x16C1ECu);
    ctx->pc = 0x16C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1E4u;
    // 0x16c1e8: 0x24844970  addiu       $a0, $a0, 0x4970 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A060u, 0x16C1E4u, 0x16C1ECu)) {
        return;
    }
    ctx->pc = 0x16C1ECu;
label_16c1ec:
    // 0x16c1ec: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x16c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_16c1f0:
    // 0x16c1f0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x16c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_16c1f4:
    // 0x16c1f4: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_16c1f8:
    if (ctx->pc == 0x16C1F8u) {
        ctx->pc = 0x16C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1F4u;
        // 0x16c1f8: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1FCu;
        goto label_16c1fc;
    }
    ctx->pc = 0x16C1F4u;
    {
        const bool branch_taken_0x16c1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c1f4) {
            ctx->pc = 0x16C1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C1F4u;
            // 0x16c1f8: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C234u;
            goto label_16c234;
        }
    }
    ctx->pc = 0x16C1FCu;
label_16c1fc:
    // 0x16c1fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16c200:
    // 0x16c200: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16c204:
    // 0x16c204: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_16c208:
    if (ctx->pc == 0x16C208u) {
        ctx->pc = 0x16C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C204u;
        // 0x16c208: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C20Cu;
        goto label_16c20c;
    }
    ctx->pc = 0x16C204u;
    {
        const bool branch_taken_0x16c204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c204) {
            ctx->pc = 0x16C208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C204u;
            // 0x16c208: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C234u;
            goto label_16c234;
        }
    }
    ctx->pc = 0x16C20Cu;
label_16c20c:
    // 0x16c20c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_16c210:
    // 0x16c210: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_16c214:
    if (ctx->pc == 0x16C214u) {
        ctx->pc = 0x16C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C210u;
        // 0x16c214: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C218u;
        goto label_16c218;
    }
    ctx->pc = 0x16C210u;
    {
        const bool branch_taken_0x16c210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c210) {
            ctx->pc = 0x16C214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C210u;
            // 0x16c214: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C234u;
            goto label_16c234;
        }
    }
    ctx->pc = 0x16C218u;
label_16c218:
    // 0x16c218: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x16c218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_16c21c:
    // 0x16c21c: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x16c21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_16c220:
    // 0x16c220: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x16c220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_16c224:
    // 0x16c224: 0xb203005f  sdl         $v1, 0x5F($s0)
    ctx->pc = 0x16c224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_16c228:
    // 0x16c228: 0xb6030058  sdr         $v1, 0x58($s0)
    ctx->pc = 0x16c228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_16c22c:
    // 0x16c22c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x16c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_16c230:
    // 0x16c230: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x16c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_16c234:
    // 0x16c234: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16c234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16c238:
    // 0x16c238: 0x54620061  bnel        $v1, $v0, . + 4 + (0x61 << 2)
label_16c23c:
    if (ctx->pc == 0x16C23Cu) {
        ctx->pc = 0x16C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C238u;
        // 0x16c23c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C240u;
        goto label_16c240;
    }
    ctx->pc = 0x16C238u;
    {
        const bool branch_taken_0x16c238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c238) {
            ctx->pc = 0x16C23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C238u;
            // 0x16c23c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C3C0u;
            goto label_16c3c0;
        }
    }
    ctx->pc = 0x16C240u;
label_16c240:
    // 0x16c240: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x16c240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_16c244:
    // 0x16c244: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_16c248:
    if (ctx->pc == 0x16C248u) {
        ctx->pc = 0x16C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C244u;
        // 0x16c248: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C24Cu;
        goto label_16c24c;
    }
    ctx->pc = 0x16C244u;
    {
        const bool branch_taken_0x16c244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C244u;
        // 0x16c248: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c244) {
            ctx->pc = 0x16C3BCu;
            goto label_16c3bc;
        }
    }
    ctx->pc = 0x16C24Cu;
label_16c24c:
    // 0x16c24c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16c24cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c250:
    // 0x16c250: 0x24454990  addiu       $a1, $v0, 0x4990
    ctx->pc = 0x16c250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18832));
label_16c254:
    // 0x16c254: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16c254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c258:
    // 0x16c258: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16c25c:
    if (ctx->pc == 0x16C25Cu) {
        ctx->pc = 0x16C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C258u;
        // 0x16c25c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C260u;
        goto label_16c260;
    }
    ctx->pc = 0x16C258u;
    {
        const bool branch_taken_0x16c258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C258u;
        // 0x16c25c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c258) {
            ctx->pc = 0x16C264u;
            goto label_16c264;
        }
    }
    ctx->pc = 0x16C260u;
label_16c260:
    // 0x16c260: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x16c260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16c264:
    // 0x16c264: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c268:
    // 0x16c268: 0xc05a47c  jal         func_1691F0
label_16c26c:
    if (ctx->pc == 0x16C26Cu) {
        ctx->pc = 0x16C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C268u;
        // 0x16c26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C270u;
        goto label_16c270;
    }
    ctx->pc = 0x16C268u;
    SET_GPR_U32(ctx, 31, 0x16C270u);
    ctx->pc = 0x16C26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C268u;
    // 0x16c26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16C268u, 0x16C270u)) {
        return;
    }
    ctx->pc = 0x16C270u;
label_16c270:
    // 0x16c270: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x16c270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_16c274:
    // 0x16c274: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16c278:
    if (ctx->pc == 0x16C278u) {
        ctx->pc = 0x16C27Cu;
        goto label_16c27c;
    }
    ctx->pc = 0x16C274u;
    {
        const bool branch_taken_0x16c274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c274) {
            ctx->pc = 0x16C2A4u;
            goto label_16c2a4;
        }
    }
    ctx->pc = 0x16C27Cu;
label_16c27c:
    // 0x16c27c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x16c27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c280:
    // 0x16c280: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x16c280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_16c284:
    // 0x16c284: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x16c284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_16c288:
    // 0x16c288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16c288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c28c:
    // 0x16c28c: 0x0  nop
    ctx->pc = 0x16c28cu;
    // NOP
label_16c290:
    // 0x16c290: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16c290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c294:
    // 0x16c294: 0x0  nop
    ctx->pc = 0x16c294u;
    // NOP
label_16c298:
    // 0x16c298: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16c29c:
    if (ctx->pc == 0x16C29Cu) {
        ctx->pc = 0x16C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C298u;
        // 0x16c29c: 0x26330004  addiu       $s3, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2A0u;
        goto label_16c2a0;
    }
    ctx->pc = 0x16C298u;
    {
        const bool branch_taken_0x16c298 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C298u;
        // 0x16c29c: 0x26330004  addiu       $s3, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c298) {
            ctx->pc = 0x16C2A4u;
            goto label_16c2a4;
        }
    }
    ctx->pc = 0x16C2A0u;
label_16c2a0:
    // 0x16c2a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16c2a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c2a4:
    // 0x16c2a4: 0x12400045  beqz        $s2, . + 4 + (0x45 << 2)
label_16c2a8:
    if (ctx->pc == 0x16C2A8u) {
        ctx->pc = 0x16C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2A4u;
        // 0x16c2a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2ACu;
        goto label_16c2ac;
    }
    ctx->pc = 0x16C2A4u;
    {
        const bool branch_taken_0x16c2a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2A4u;
        // 0x16c2a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2a4) {
            ctx->pc = 0x16C3BCu;
            goto label_16c3bc;
        }
    }
    ctx->pc = 0x16C2ACu;
label_16c2ac:
    // 0x16c2ac: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x16c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_16c2b0:
    // 0x16c2b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c2b4:
    // 0x16c2b4: 0xc093afa  jal         func_24EBE8
label_16c2b8:
    if (ctx->pc == 0x16C2B8u) {
        ctx->pc = 0x16C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2B4u;
        // 0x16c2b8: 0x260700b0  addiu       $a3, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2BCu;
        goto label_16c2bc;
    }
    ctx->pc = 0x16C2B4u;
    SET_GPR_U32(ctx, 31, 0x16C2BCu);
    ctx->pc = 0x16C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2B4u;
    // 0x16c2b8: 0x260700b0  addiu       $a3, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x16C2B4u, 0x16C2BCu)) {
        return;
    }
    ctx->pc = 0x16C2BCu;
label_16c2bc:
    // 0x16c2bc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x16c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c2c0:
    // 0x16c2c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16c2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_16c2c4:
    // 0x16c2c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16c2c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16c2c8:
    // 0x16c2c8: 0x0  nop
    ctx->pc = 0x16c2c8u;
    // NOP
label_16c2cc:
    // 0x16c2cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x16c2ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c2d0:
    // 0x16c2d0: 0x0  nop
    ctx->pc = 0x16c2d0u;
    // NOP
label_16c2d4:
    // 0x16c2d4: 0x4502003a  bc1fl       . + 4 + (0x3A << 2)
label_16c2d8:
    if (ctx->pc == 0x16C2D8u) {
        ctx->pc = 0x16C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2D4u;
        // 0x16c2d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2DCu;
        goto label_16c2dc;
    }
    ctx->pc = 0x16C2D4u;
    {
        const bool branch_taken_0x16c2d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c2d4) {
            ctx->pc = 0x16C2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C2D4u;
            // 0x16c2d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C3C0u;
            goto label_16c3c0;
        }
    }
    ctx->pc = 0x16C2DCu;
label_16c2dc:
    // 0x16c2dc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x16c2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_16c2e0:
    // 0x16c2e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16c2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c2e4:
    // 0x16c2e4: 0x0  nop
    ctx->pc = 0x16c2e4u;
    // NOP
label_16c2e8:
    // 0x16c2e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c2ec:
    // 0x16c2ec: 0x0  nop
    ctx->pc = 0x16c2ecu;
    // NOP
label_16c2f0:
    // 0x16c2f0: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_16c2f4:
    if (ctx->pc == 0x16C2F4u) {
        ctx->pc = 0x16C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2F0u;
        // 0x16c2f4: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2F8u;
        goto label_16c2f8;
    }
    ctx->pc = 0x16C2F0u;
    {
        const bool branch_taken_0x16c2f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2F0u;
        // 0x16c2f4: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2f0) {
            ctx->pc = 0x16C3BCu;
            goto label_16c3bc;
        }
    }
    ctx->pc = 0x16C2F8u;
label_16c2f8:
    // 0x16c2f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x16c2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c2fc:
    // 0x16c2fc: 0x0  nop
    ctx->pc = 0x16c2fcu;
    // NOP
label_16c300:
    // 0x16c300: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
label_16c304:
    if (ctx->pc == 0x16C304u) {
        ctx->pc = 0x16C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C300u;
        // 0x16c304: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C308u;
        goto label_16c308;
    }
    ctx->pc = 0x16C300u;
    {
        const bool branch_taken_0x16c300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c300) {
            ctx->pc = 0x16C304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C300u;
            // 0x16c304: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C3C0u;
            goto label_16c3c0;
        }
    }
    ctx->pc = 0x16C308u;
label_16c308:
    // 0x16c308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c30c:
    // 0x16c30c: 0x0  nop
    ctx->pc = 0x16c30cu;
    // NOP
label_16c310:
    // 0x16c310: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_16c314:
    if (ctx->pc == 0x16C314u) {
        ctx->pc = 0x16C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C310u;
        // 0x16c314: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C318u;
        goto label_16c318;
    }
    ctx->pc = 0x16C310u;
    {
        const bool branch_taken_0x16c310 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C310u;
        // 0x16c314: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c310) {
            ctx->pc = 0x16C3BCu;
            goto label_16c3bc;
        }
    }
    ctx->pc = 0x16C318u;
label_16c318:
    // 0x16c318: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x16c318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c31c:
    // 0x16c31c: 0x0  nop
    ctx->pc = 0x16c31cu;
    // NOP
label_16c320:
    // 0x16c320: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
label_16c324:
    if (ctx->pc == 0x16C324u) {
        ctx->pc = 0x16C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C320u;
        // 0x16c324: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C328u;
        goto label_16c328;
    }
    ctx->pc = 0x16C320u;
    {
        const bool branch_taken_0x16c320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c320) {
            ctx->pc = 0x16C324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C320u;
            // 0x16c324: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C3C0u;
            goto label_16c3c0;
        }
    }
    ctx->pc = 0x16C328u;
label_16c328:
    // 0x16c328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c32c:
    // 0x16c32c: 0x0  nop
    ctx->pc = 0x16c32cu;
    // NOP
label_16c330:
    // 0x16c330: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_16c334:
    if (ctx->pc == 0x16C334u) {
        ctx->pc = 0x16C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C330u;
        // 0x16c334: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C338u;
        goto label_16c338;
    }
    ctx->pc = 0x16C330u;
    {
        const bool branch_taken_0x16c330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C330u;
        // 0x16c334: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c330) {
            ctx->pc = 0x16C3BCu;
            goto label_16c3bc;
        }
    }
    ctx->pc = 0x16C338u;
label_16c338:
    // 0x16c338: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x16c338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_16c33c:
    // 0x16c33c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x16c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_16c340:
    // 0x16c340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16c340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c344:
    // 0x16c344: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x16c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_16c348:
    // 0x16c348: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x16c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_16c34c:
    // 0x16c34c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x16c34cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_16c350:
    // 0x16c350: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x16c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_16c354:
    // 0x16c354: 0x60f809  jalr        $v1
label_16c358:
    if (ctx->pc == 0x16C358u) {
        ctx->pc = 0x16C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C354u;
        // 0x16c358: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C35Cu;
        goto label_16c35c;
    }
    ctx->pc = 0x16C354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16C35Cu);
        ctx->pc = 0x16C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C354u;
        // 0x16c358: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C354u, 0x16C35Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C35Cu;
label_16c35c:
    // 0x16c35c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_16c360:
    // 0x16c360: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16c360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c364:
    // 0x16c364: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x16c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_16c368:
    // 0x16c368: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_16c36c:
    if (ctx->pc == 0x16C36Cu) {
        ctx->pc = 0x16C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C368u;
        // 0x16c36c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C370u;
        goto label_16c370;
    }
    ctx->pc = 0x16C368u;
    {
        const bool branch_taken_0x16c368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C368u;
        // 0x16c36c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c368) {
            ctx->pc = 0x16C388u;
            goto label_16c388;
        }
    }
    ctx->pc = 0x16C370u;
label_16c370:
    // 0x16c370: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16c374:
    // 0x16c374: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_16c378:
    if (ctx->pc == 0x16C378u) {
        ctx->pc = 0x16C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C374u;
        // 0x16c378: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C37Cu;
        goto label_16c37c;
    }
    ctx->pc = 0x16C374u;
    {
        const bool branch_taken_0x16c374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C374u;
        // 0x16c378: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c374) {
            ctx->pc = 0x16C388u;
            goto label_16c388;
        }
    }
    ctx->pc = 0x16C37Cu;
label_16c37c:
    // 0x16c37c: 0xc07fd18  jal         func_1FF460
label_16c380:
    if (ctx->pc == 0x16C380u) {
        ctx->pc = 0x16C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C37Cu;
        // 0x16c380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C384u;
        goto label_16c384;
    }
    ctx->pc = 0x16C37Cu;
    SET_GPR_U32(ctx, 31, 0x16C384u);
    ctx->pc = 0x16C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C37Cu;
    // 0x16c380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16C37Cu, 0x16C384u)) {
        return;
    }
    ctx->pc = 0x16C384u;
label_16c384:
    // 0x16c384: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16c384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_16c388:
    // 0x16c388: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x16c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_16c38c:
    // 0x16c38c: 0x244549b8  addiu       $a1, $v0, 0x49B8
    ctx->pc = 0x16c38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18872));
label_16c390:
    // 0x16c390: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16c394:
    if (ctx->pc == 0x16C394u) {
        ctx->pc = 0x16C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C390u;
        // 0x16c394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C398u;
        goto label_16c398;
    }
    ctx->pc = 0x16C390u;
    {
        const bool branch_taken_0x16c390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C390u;
        // 0x16c394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c390) {
            ctx->pc = 0x16C39Cu;
            goto label_16c39c;
        }
    }
    ctx->pc = 0x16C398u;
label_16c398:
    // 0x16c398: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x16c398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16c39c:
    // 0x16c39c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16c3a0:
    // 0x16c3a0: 0xc05a47c  jal         func_1691F0
label_16c3a4:
    if (ctx->pc == 0x16C3A4u) {
        ctx->pc = 0x16C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3A0u;
        // 0x16c3a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3A8u;
        goto label_16c3a8;
    }
    ctx->pc = 0x16C3A0u;
    SET_GPR_U32(ctx, 31, 0x16C3A8u);
    ctx->pc = 0x16C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C3A0u;
    // 0x16c3a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16C3A0u, 0x16C3A8u)) {
        return;
    }
    ctx->pc = 0x16C3A8u;
label_16c3a8:
    // 0x16c3a8: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x16c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_16c3ac:
    // 0x16c3ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_16c3b0:
    if (ctx->pc == 0x16C3B0u) {
        ctx->pc = 0x16C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3ACu;
        // 0x16c3b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3B4u;
        goto label_16c3b4;
    }
    ctx->pc = 0x16C3ACu;
    {
        const bool branch_taken_0x16c3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3ACu;
        // 0x16c3b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3ac) {
            ctx->pc = 0x16C3C0u;
            goto label_16c3c0;
        }
    }
    ctx->pc = 0x16C3B4u;
label_16c3b4:
    // 0x16c3b4: 0x56600002  bnel        $s3, $zero, . + 4 + (0x2 << 2)
label_16c3b8:
    if (ctx->pc == 0x16C3B8u) {
        ctx->pc = 0x16C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3B4u;
        // 0x16c3b8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3BCu;
        goto label_16c3bc;
    }
    ctx->pc = 0x16C3B4u;
    {
        const bool branch_taken_0x16c3b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c3b4) {
            ctx->pc = 0x16C3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C3B4u;
            // 0x16c3b8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C3C0u;
            goto label_16c3c0;
        }
    }
    ctx->pc = 0x16C3BCu;
label_16c3bc:
    // 0x16c3bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16c3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16c3c0:
    // 0x16c3c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x16c3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16c3c4:
    // 0x16c3c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16c3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16c3c8:
    // 0x16c3c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16c3c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16c3cc:
    // 0x16c3cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16c3d0:
    // 0x16c3d0: 0x3e00008  jr          $ra
label_16c3d4:
    if (ctx->pc == 0x16C3D4u) {
        ctx->pc = 0x16C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3D0u;
        // 0x16c3d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3D8u;
        goto label_fallthrough_0x16c3d0;
    }
    ctx->pc = 0x16C3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3D0u;
        // 0x16c3d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16c3d0:
    ctx->pc = 0x16C3D8u;
}
