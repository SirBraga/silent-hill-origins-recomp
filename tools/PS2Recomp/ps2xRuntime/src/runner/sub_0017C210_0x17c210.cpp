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

// Function: sub_0017C210
// Address: 0x17c210 - 0x17c4c8
void sub_0017C210_0x17c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C210_0x17c210");
#endif

    switch (ctx->pc) {
        case 0x17c210u: goto label_17c210;
        case 0x17c214u: goto label_17c214;
        case 0x17c218u: goto label_17c218;
        case 0x17c21cu: goto label_17c21c;
        case 0x17c220u: goto label_17c220;
        case 0x17c224u: goto label_17c224;
        case 0x17c228u: goto label_17c228;
        case 0x17c22cu: goto label_17c22c;
        case 0x17c230u: goto label_17c230;
        case 0x17c234u: goto label_17c234;
        case 0x17c238u: goto label_17c238;
        case 0x17c23cu: goto label_17c23c;
        case 0x17c240u: goto label_17c240;
        case 0x17c244u: goto label_17c244;
        case 0x17c248u: goto label_17c248;
        case 0x17c24cu: goto label_17c24c;
        case 0x17c250u: goto label_17c250;
        case 0x17c254u: goto label_17c254;
        case 0x17c258u: goto label_17c258;
        case 0x17c25cu: goto label_17c25c;
        case 0x17c260u: goto label_17c260;
        case 0x17c264u: goto label_17c264;
        case 0x17c268u: goto label_17c268;
        case 0x17c26cu: goto label_17c26c;
        case 0x17c270u: goto label_17c270;
        case 0x17c274u: goto label_17c274;
        case 0x17c278u: goto label_17c278;
        case 0x17c27cu: goto label_17c27c;
        case 0x17c280u: goto label_17c280;
        case 0x17c284u: goto label_17c284;
        case 0x17c288u: goto label_17c288;
        case 0x17c28cu: goto label_17c28c;
        case 0x17c290u: goto label_17c290;
        case 0x17c294u: goto label_17c294;
        case 0x17c298u: goto label_17c298;
        case 0x17c29cu: goto label_17c29c;
        case 0x17c2a0u: goto label_17c2a0;
        case 0x17c2a4u: goto label_17c2a4;
        case 0x17c2a8u: goto label_17c2a8;
        case 0x17c2acu: goto label_17c2ac;
        case 0x17c2b0u: goto label_17c2b0;
        case 0x17c2b4u: goto label_17c2b4;
        case 0x17c2b8u: goto label_17c2b8;
        case 0x17c2bcu: goto label_17c2bc;
        case 0x17c2c0u: goto label_17c2c0;
        case 0x17c2c4u: goto label_17c2c4;
        case 0x17c2c8u: goto label_17c2c8;
        case 0x17c2ccu: goto label_17c2cc;
        case 0x17c2d0u: goto label_17c2d0;
        case 0x17c2d4u: goto label_17c2d4;
        case 0x17c2d8u: goto label_17c2d8;
        case 0x17c2dcu: goto label_17c2dc;
        case 0x17c2e0u: goto label_17c2e0;
        case 0x17c2e4u: goto label_17c2e4;
        case 0x17c2e8u: goto label_17c2e8;
        case 0x17c2ecu: goto label_17c2ec;
        case 0x17c2f0u: goto label_17c2f0;
        case 0x17c2f4u: goto label_17c2f4;
        case 0x17c2f8u: goto label_17c2f8;
        case 0x17c2fcu: goto label_17c2fc;
        case 0x17c300u: goto label_17c300;
        case 0x17c304u: goto label_17c304;
        case 0x17c308u: goto label_17c308;
        case 0x17c30cu: goto label_17c30c;
        case 0x17c310u: goto label_17c310;
        case 0x17c314u: goto label_17c314;
        case 0x17c318u: goto label_17c318;
        case 0x17c31cu: goto label_17c31c;
        case 0x17c320u: goto label_17c320;
        case 0x17c324u: goto label_17c324;
        case 0x17c328u: goto label_17c328;
        case 0x17c32cu: goto label_17c32c;
        case 0x17c330u: goto label_17c330;
        case 0x17c334u: goto label_17c334;
        case 0x17c338u: goto label_17c338;
        case 0x17c33cu: goto label_17c33c;
        case 0x17c340u: goto label_17c340;
        case 0x17c344u: goto label_17c344;
        case 0x17c348u: goto label_17c348;
        case 0x17c34cu: goto label_17c34c;
        case 0x17c350u: goto label_17c350;
        case 0x17c354u: goto label_17c354;
        case 0x17c358u: goto label_17c358;
        case 0x17c35cu: goto label_17c35c;
        case 0x17c360u: goto label_17c360;
        case 0x17c364u: goto label_17c364;
        case 0x17c368u: goto label_17c368;
        case 0x17c36cu: goto label_17c36c;
        case 0x17c370u: goto label_17c370;
        case 0x17c374u: goto label_17c374;
        case 0x17c378u: goto label_17c378;
        case 0x17c37cu: goto label_17c37c;
        case 0x17c380u: goto label_17c380;
        case 0x17c384u: goto label_17c384;
        case 0x17c388u: goto label_17c388;
        case 0x17c38cu: goto label_17c38c;
        case 0x17c390u: goto label_17c390;
        case 0x17c394u: goto label_17c394;
        case 0x17c398u: goto label_17c398;
        case 0x17c39cu: goto label_17c39c;
        case 0x17c3a0u: goto label_17c3a0;
        case 0x17c3a4u: goto label_17c3a4;
        case 0x17c3a8u: goto label_17c3a8;
        case 0x17c3acu: goto label_17c3ac;
        case 0x17c3b0u: goto label_17c3b0;
        case 0x17c3b4u: goto label_17c3b4;
        case 0x17c3b8u: goto label_17c3b8;
        case 0x17c3bcu: goto label_17c3bc;
        case 0x17c3c0u: goto label_17c3c0;
        case 0x17c3c4u: goto label_17c3c4;
        case 0x17c3c8u: goto label_17c3c8;
        case 0x17c3ccu: goto label_17c3cc;
        case 0x17c3d0u: goto label_17c3d0;
        case 0x17c3d4u: goto label_17c3d4;
        case 0x17c3d8u: goto label_17c3d8;
        case 0x17c3dcu: goto label_17c3dc;
        case 0x17c3e0u: goto label_17c3e0;
        case 0x17c3e4u: goto label_17c3e4;
        case 0x17c3e8u: goto label_17c3e8;
        case 0x17c3ecu: goto label_17c3ec;
        case 0x17c3f0u: goto label_17c3f0;
        case 0x17c3f4u: goto label_17c3f4;
        case 0x17c3f8u: goto label_17c3f8;
        case 0x17c3fcu: goto label_17c3fc;
        case 0x17c400u: goto label_17c400;
        case 0x17c404u: goto label_17c404;
        case 0x17c408u: goto label_17c408;
        case 0x17c40cu: goto label_17c40c;
        case 0x17c410u: goto label_17c410;
        case 0x17c414u: goto label_17c414;
        case 0x17c418u: goto label_17c418;
        case 0x17c41cu: goto label_17c41c;
        case 0x17c420u: goto label_17c420;
        case 0x17c424u: goto label_17c424;
        case 0x17c428u: goto label_17c428;
        case 0x17c42cu: goto label_17c42c;
        case 0x17c430u: goto label_17c430;
        case 0x17c434u: goto label_17c434;
        case 0x17c438u: goto label_17c438;
        case 0x17c43cu: goto label_17c43c;
        case 0x17c440u: goto label_17c440;
        case 0x17c444u: goto label_17c444;
        case 0x17c448u: goto label_17c448;
        case 0x17c44cu: goto label_17c44c;
        case 0x17c450u: goto label_17c450;
        case 0x17c454u: goto label_17c454;
        case 0x17c458u: goto label_17c458;
        case 0x17c45cu: goto label_17c45c;
        case 0x17c460u: goto label_17c460;
        case 0x17c464u: goto label_17c464;
        case 0x17c468u: goto label_17c468;
        case 0x17c46cu: goto label_17c46c;
        case 0x17c470u: goto label_17c470;
        case 0x17c474u: goto label_17c474;
        case 0x17c478u: goto label_17c478;
        case 0x17c47cu: goto label_17c47c;
        case 0x17c480u: goto label_17c480;
        case 0x17c484u: goto label_17c484;
        case 0x17c488u: goto label_17c488;
        case 0x17c48cu: goto label_17c48c;
        case 0x17c490u: goto label_17c490;
        case 0x17c494u: goto label_17c494;
        case 0x17c498u: goto label_17c498;
        case 0x17c49cu: goto label_17c49c;
        case 0x17c4a0u: goto label_17c4a0;
        case 0x17c4a4u: goto label_17c4a4;
        case 0x17c4a8u: goto label_17c4a8;
        case 0x17c4acu: goto label_17c4ac;
        case 0x17c4b0u: goto label_17c4b0;
        case 0x17c4b4u: goto label_17c4b4;
        case 0x17c4b8u: goto label_17c4b8;
        case 0x17c4bcu: goto label_17c4bc;
        case 0x17c4c0u: goto label_17c4c0;
        case 0x17c4c4u: goto label_17c4c4;
        default: break;
    }

    ctx->pc = 0x17c210u;

label_17c210:
    // 0x17c210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17c210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_17c214:
    // 0x17c214: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17c214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_17c218:
    // 0x17c218: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17c218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_17c21c:
    // 0x17c21c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17c21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_17c220:
    // 0x17c220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c224:
    // 0x17c224: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17c224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17c228:
    // 0x17c228: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x17c228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_17c22c:
    // 0x17c22c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x17c22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_17c230:
    // 0x17c230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17c234:
    // 0x17c234: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x17c234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_17c238:
    // 0x17c238: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
label_17c23c:
    if (ctx->pc == 0x17C23Cu) {
        ctx->pc = 0x17C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C238u;
        // 0x17c23c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C240u;
        goto label_17c240;
    }
    ctx->pc = 0x17C238u;
    {
        const bool branch_taken_0x17c238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C238u;
        // 0x17c23c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c238) {
            ctx->pc = 0x17C4A0u;
            goto label_17c4a0;
        }
    }
    ctx->pc = 0x17C240u;
label_17c240:
    // 0x17c240: 0xc05c150  jal         func_170540
label_17c244:
    if (ctx->pc == 0x17C244u) {
        ctx->pc = 0x17C248u;
        goto label_17c248;
    }
    ctx->pc = 0x17C240u;
    SET_GPR_U32(ctx, 31, 0x17C248u);
    ctx->pc = 0x170540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170540u, 0x17C240u, 0x17C248u)) {
        return;
    }
    ctx->pc = 0x17C248u;
label_17c248:
    // 0x17c248: 0x8e2300ec  lw          $v1, 0xEC($s1)
    ctx->pc = 0x17c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_17c24c:
    // 0x17c24c: 0x50600036  beql        $v1, $zero, . + 4 + (0x36 << 2)
label_17c250:
    if (ctx->pc == 0x17C250u) {
        ctx->pc = 0x17C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C24Cu;
        // 0x17c250: 0x8e2200f8  lw          $v0, 0xF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C254u;
        goto label_17c254;
    }
    ctx->pc = 0x17C24Cu;
    {
        const bool branch_taken_0x17c24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c24c) {
            ctx->pc = 0x17C250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C24Cu;
            // 0x17c250: 0x8e2200f8  lw          $v0, 0xF8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C328u;
            goto label_17c328;
        }
    }
    ctx->pc = 0x17C254u;
label_17c254:
    // 0x17c254: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17c254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17c258:
    // 0x17c258: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c25c:
    // 0x17c25c: 0x54430032  bnel        $v0, $v1, . + 4 + (0x32 << 2)
label_17c260:
    if (ctx->pc == 0x17C260u) {
        ctx->pc = 0x17C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C25Cu;
        // 0x17c260: 0x8e2200f8  lw          $v0, 0xF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C264u;
        goto label_17c264;
    }
    ctx->pc = 0x17C25Cu;
    {
        const bool branch_taken_0x17c25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17c25c) {
            ctx->pc = 0x17C260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C25Cu;
            // 0x17c260: 0x8e2200f8  lw          $v0, 0xF8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C328u;
            goto label_17c328;
        }
    }
    ctx->pc = 0x17C264u;
label_17c264:
    // 0x17c264: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x17c264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17c268:
    // 0x17c268: 0x50a0008e  beql        $a1, $zero, . + 4 + (0x8E << 2)
label_17c26c:
    if (ctx->pc == 0x17C26Cu) {
        ctx->pc = 0x17C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C268u;
        // 0x17c26c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C270u;
        goto label_17c270;
    }
    ctx->pc = 0x17C268u;
    {
        const bool branch_taken_0x17c268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c268) {
            ctx->pc = 0x17C26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C268u;
            // 0x17c26c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C4A4u;
            goto label_17c4a4;
        }
    }
    ctx->pc = 0x17C270u;
label_17c270:
    // 0x17c270: 0x8e240120  lw          $a0, 0x120($s1)
    ctx->pc = 0x17c270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_17c274:
    // 0x17c274: 0x26260120  addiu       $a2, $s1, 0x120
    ctx->pc = 0x17c274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_17c278:
    // 0x17c278: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_17c27c:
    if (ctx->pc == 0x17C27Cu) {
        ctx->pc = 0x17C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C278u;
        // 0x17c27c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C280u;
        goto label_17c280;
    }
    ctx->pc = 0x17C278u;
    {
        const bool branch_taken_0x17c278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C278u;
        // 0x17c27c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c278) {
            ctx->pc = 0x17C300u;
            goto label_17c300;
        }
    }
    ctx->pc = 0x17C280u;
label_17c280:
    // 0x17c280: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17c280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_17c284:
    // 0x17c284: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_17c288:
    if (ctx->pc == 0x17C288u) {
        ctx->pc = 0x17C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C284u;
        // 0x17c288: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C28Cu;
        goto label_17c28c;
    }
    ctx->pc = 0x17C284u;
    {
        const bool branch_taken_0x17c284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c284) {
            ctx->pc = 0x17C288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C284u;
            // 0x17c288: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C298u;
            goto label_17c298;
        }
    }
    ctx->pc = 0x17C28Cu;
label_17c28c:
    // 0x17c28c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17c290:
    // 0x17c290: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x17c290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_17c294:
    // 0x17c294: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17c294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17c298:
    // 0x17c298: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_17c29c:
    if (ctx->pc == 0x17C29Cu) {
        ctx->pc = 0x17C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C298u;
        // 0x17c29c: 0x8e220120  lw          $v0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C2A0u;
        goto label_17c2a0;
    }
    ctx->pc = 0x17C298u;
    {
        const bool branch_taken_0x17c298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c298) {
            ctx->pc = 0x17C29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C298u;
            // 0x17c29c: 0x8e220120  lw          $v0, 0x120($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C2ACu;
            goto label_17c2ac;
        }
    }
    ctx->pc = 0x17C2A0u;
label_17c2a0:
    // 0x17c2a0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_17c2a4:
    // 0x17c2a4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x17c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_17c2a8:
    // 0x17c2a8: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x17c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_17c2ac:
    // 0x17c2ac: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
label_17c2b0:
    if (ctx->pc == 0x17C2B0u) {
        ctx->pc = 0x17C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2ACu;
        // 0x17c2b0: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C2B4u;
        goto label_17c2b4;
    }
    ctx->pc = 0x17C2ACu;
    {
        const bool branch_taken_0x17c2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17c2ac) {
            ctx->pc = 0x17C2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C2ACu;
            // 0x17c2b0: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C2C0u;
            goto label_17c2c0;
        }
    }
    ctx->pc = 0x17C2B4u;
label_17c2b4:
    // 0x17c2b4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17c2b8:
    // 0x17c2b8: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x17c2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
label_17c2bc:
    // 0x17c2bc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x17c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_17c2c0:
    // 0x17c2c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17c2c4:
    // 0x17c2c4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x17c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_17c2c8:
    // 0x17c2c8: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x17c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_17c2cc:
    // 0x17c2cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17c2d0:
    if (ctx->pc == 0x17C2D0u) {
        ctx->pc = 0x17C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2CCu;
        // 0x17c2d0: 0x26230128  addiu       $v1, $s1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C2D4u;
        goto label_17c2d4;
    }
    ctx->pc = 0x17C2CCu;
    {
        const bool branch_taken_0x17c2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2CCu;
        // 0x17c2d0: 0x26230128  addiu       $v1, $s1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2cc) {
            ctx->pc = 0x17C2DCu;
            goto label_17c2dc;
        }
    }
    ctx->pc = 0x17C2D4u;
label_17c2d4:
    // 0x17c2d4: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x17c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_17c2d8:
    // 0x17c2d8: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x17c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_17c2dc:
    // 0x17c2dc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_17c2e0:
    // 0x17c2e0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x17c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_17c2e4:
    // 0x17c2e4: 0xae240128  sw          $a0, 0x128($s1)
    ctx->pc = 0x17c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 4));
label_17c2e8:
    // 0x17c2e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x17c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17c2ec:
    // 0x17c2ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17c2f0:
    // 0x17c2f0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_17c2f4:
    // 0x17c2f4: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x17c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_17c2f8:
    // 0x17c2f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_17c2fc:
    // 0x17c2fc: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x17c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_17c300:
    // 0x17c300: 0x10e00067  beqz        $a3, . + 4 + (0x67 << 2)
label_17c304:
    if (ctx->pc == 0x17C304u) {
        ctx->pc = 0x17C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C300u;
        // 0x17c304: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C308u;
        goto label_17c308;
    }
    ctx->pc = 0x17C300u;
    {
        const bool branch_taken_0x17c300 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C300u;
        // 0x17c304: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c300) {
            ctx->pc = 0x17C4A0u;
            goto label_17c4a0;
        }
    }
    ctx->pc = 0x17C308u;
label_17c308:
    // 0x17c308: 0x68a2000b  ldl         $v0, 0xB($a1)
    ctx->pc = 0x17c308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_17c30c:
    // 0x17c30c: 0x6ca20004  ldr         $v0, 0x4($a1)
    ctx->pc = 0x17c30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_17c310:
    // 0x17c310: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x17c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_17c314:
    // 0x17c314: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x17c314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c318:
    // 0x17c318: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x17c318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c31c:
    // 0x17c31c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x17c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_17c320:
    // 0x17c320: 0x10000061  b           . + 4 + (0x61 << 2)
label_17c324:
    if (ctx->pc == 0x17C324u) {
        ctx->pc = 0x17C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C320u;
        // 0x17c324: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C328u;
        goto label_17c328;
    }
    ctx->pc = 0x17C320u;
    {
        const bool branch_taken_0x17c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C320u;
        // 0x17c324: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c320) {
            ctx->pc = 0x17C4A8u;
            goto label_17c4a8;
        }
    }
    ctx->pc = 0x17C328u;
label_17c328:
    // 0x17c328: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17c328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c32c:
    // 0x17c32c: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
label_17c330:
    if (ctx->pc == 0x17C330u) {
        ctx->pc = 0x17C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C32Cu;
        // 0x17c330: 0x8e220100  lw          $v0, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C334u;
        goto label_17c334;
    }
    ctx->pc = 0x17C32Cu;
    {
        const bool branch_taken_0x17c32c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17c32c) {
            ctx->pc = 0x17C330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C32Cu;
            // 0x17c330: 0x8e220100  lw          $v0, 0x100($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C360u;
            goto label_17c360;
        }
    }
    ctx->pc = 0x17C334u;
label_17c334:
    // 0x17c334: 0x8e30011c  lw          $s0, 0x11C($s1)
    ctx->pc = 0x17c334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_17c338:
    // 0x17c338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c33c:
    // 0x17c33c: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x17c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
label_17c340:
    // 0x17c340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c344:
    // 0x17c344: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x17c344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_17c348:
    // 0x17c348: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x17c348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_17c34c:
    // 0x17c34c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x17c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17c350:
    // 0x17c350: 0x60f809  jalr        $v1
label_17c354:
    if (ctx->pc == 0x17C354u) {
        ctx->pc = 0x17C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C350u;
        // 0x17c354: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C358u;
        goto label_17c358;
    }
    ctx->pc = 0x17C350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17C358u);
        ctx->pc = 0x17C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C350u;
        // 0x17c354: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C350u, 0x17C358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C358u;
label_17c358:
    // 0x17c358: 0x10000051  b           . + 4 + (0x51 << 2)
label_17c35c:
    if (ctx->pc == 0x17C35Cu) {
        ctx->pc = 0x17C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C358u;
        // 0x17c35c: 0xae30011c  sw          $s0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C360u;
        goto label_17c360;
    }
    ctx->pc = 0x17C358u;
    {
        const bool branch_taken_0x17c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C358u;
        // 0x17c35c: 0xae30011c  sw          $s0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c358) {
            ctx->pc = 0x17C4A0u;
            goto label_17c4a0;
        }
    }
    ctx->pc = 0x17C360u;
label_17c360:
    // 0x17c360: 0x5482003b  bnel        $a0, $v0, . + 4 + (0x3B << 2)
label_17c364:
    if (ctx->pc == 0x17C364u) {
        ctx->pc = 0x17C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C360u;
        // 0x17c364: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C368u;
        goto label_17c368;
    }
    ctx->pc = 0x17C360u;
    {
        const bool branch_taken_0x17c360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17c360) {
            ctx->pc = 0x17C364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C360u;
            // 0x17c364: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C450u;
            goto label_17c450;
        }
    }
    ctx->pc = 0x17C368u;
label_17c368:
    // 0x17c368: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x17c368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c36c:
    // 0x17c36c: 0x26140004  addiu       $s4, $s0, 0x4
    ctx->pc = 0x17c36cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17c370:
    // 0x17c370: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17c370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_17c374:
    // 0x17c374: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17c374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_17c378:
    // 0x17c378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17c378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c37c:
    // 0x17c37c: 0x0  nop
    ctx->pc = 0x17c37cu;
    // NOP
label_17c380:
    // 0x17c380: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17c380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c384:
    // 0x17c384: 0x0  nop
    ctx->pc = 0x17c384u;
    // NOP
label_17c388:
    // 0x17c388: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_17c38c:
    if (ctx->pc == 0x17C38Cu) {
        ctx->pc = 0x17C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C388u;
        // 0x17c38c: 0x26330120  addiu       $s3, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C390u;
        goto label_17c390;
    }
    ctx->pc = 0x17C388u;
    {
        const bool branch_taken_0x17c388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C388u;
        // 0x17c38c: 0x26330120  addiu       $s3, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c388) {
            ctx->pc = 0x17C3FCu;
            goto label_17c3fc;
        }
    }
    ctx->pc = 0x17C390u;
label_17c390:
    // 0x17c390: 0x8e320128  lw          $s2, 0x128($s1)
    ctx->pc = 0x17c390u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_17c394:
    // 0x17c394: 0x5240001a  beql        $s2, $zero, . + 4 + (0x1A << 2)
label_17c398:
    if (ctx->pc == 0x17C398u) {
        ctx->pc = 0x17C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C394u;
        // 0x17c398: 0x8e240128  lw          $a0, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C39Cu;
        goto label_17c39c;
    }
    ctx->pc = 0x17C394u;
    {
        const bool branch_taken_0x17c394 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c394) {
            ctx->pc = 0x17C398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C394u;
            // 0x17c398: 0x8e240128  lw          $a0, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C400u;
            goto label_17c400;
        }
    }
    ctx->pc = 0x17C39Cu;
label_17c39c:
    // 0x17c39c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x17c39cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c3a0:
    // 0x17c3a0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x17c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_17c3a4:
    // 0x17c3a4: 0x0  nop
    ctx->pc = 0x17c3a4u;
    // NOP
label_17c3a8:
    // 0x17c3a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17c3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17c3ac:
    // 0x17c3ac: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x17c3acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_17c3b0:
    // 0x17c3b0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x17c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_17c3b4:
    // 0x17c3b4: 0x40f809  jalr        $v0
label_17c3b8:
    if (ctx->pc == 0x17C3B8u) {
        ctx->pc = 0x17C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3B4u;
        // 0x17c3b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C3BCu;
        goto label_17c3bc;
    }
    ctx->pc = 0x17C3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C3BCu);
        ctx->pc = 0x17C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3B4u;
        // 0x17c3b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C3B4u, 0x17C3BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C3BCu;
label_17c3bc:
    // 0x17c3bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_17c3c0:
    if (ctx->pc == 0x17C3C0u) {
        ctx->pc = 0x17C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3BCu;
        // 0x17c3c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C3C4u;
        goto label_17c3c4;
    }
    ctx->pc = 0x17C3BCu;
    {
        const bool branch_taken_0x17c3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3BCu;
        // 0x17c3c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3bc) {
            ctx->pc = 0x17C3F0u;
            goto label_17c3f0;
        }
    }
    ctx->pc = 0x17C3C4u;
label_17c3c4:
    // 0x17c3c4: 0x8e30011c  lw          $s0, 0x11C($s1)
    ctx->pc = 0x17c3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_17c3c8:
    // 0x17c3c8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x17c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_17c3cc:
    // 0x17c3cc: 0xae35011c  sw          $s5, 0x11C($s1)
    ctx->pc = 0x17c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 21));
label_17c3d0:
    // 0x17c3d0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x17c3d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_17c3d4:
    // 0x17c3d4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x17c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17c3d8:
    // 0x17c3d8: 0x60f809  jalr        $v1
label_17c3dc:
    if (ctx->pc == 0x17C3DCu) {
        ctx->pc = 0x17C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3D8u;
        // 0x17c3dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C3E0u;
        goto label_17c3e0;
    }
    ctx->pc = 0x17C3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17C3E0u);
        ctx->pc = 0x17C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3D8u;
        // 0x17c3dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C3D8u, 0x17C3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C3E0u;
label_17c3e0:
    // 0x17c3e0: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x17c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_17c3e4:
    // 0x17c3e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_17c3e8:
    if (ctx->pc == 0x17C3E8u) {
        ctx->pc = 0x17C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3E4u;
        // 0x17c3e8: 0xae30011c  sw          $s0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C3ECu;
        goto label_17c3ec;
    }
    ctx->pc = 0x17C3E4u;
    {
        const bool branch_taken_0x17c3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3E4u;
        // 0x17c3e8: 0xae30011c  sw          $s0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3e4) {
            ctx->pc = 0x17C3F0u;
            goto label_17c3f0;
        }
    }
    ctx->pc = 0x17C3ECu;
label_17c3ec:
    // 0x17c3ec: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x17c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_17c3f0:
    // 0x17c3f0: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x17c3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_17c3f4:
    // 0x17c3f4: 0x5640ffec  bnel        $s2, $zero, . + 4 + (-0x14 << 2)
label_17c3f8:
    if (ctx->pc == 0x17C3F8u) {
        ctx->pc = 0x17C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3F4u;
        // 0x17c3f8: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C3FCu;
        goto label_17c3fc;
    }
    ctx->pc = 0x17C3F4u;
    {
        const bool branch_taken_0x17c3f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c3f4) {
            ctx->pc = 0x17C3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C3F4u;
            // 0x17c3f8: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c3a8;
        }
    }
    ctx->pc = 0x17C3FCu;
label_17c3fc:
    // 0x17c3fc: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x17c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_17c400:
    // 0x17c400: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
label_17c404:
    if (ctx->pc == 0x17C404u) {
        ctx->pc = 0x17C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C400u;
        // 0x17c404: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C408u;
        goto label_17c408;
    }
    ctx->pc = 0x17C400u;
    {
        const bool branch_taken_0x17c400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c400) {
            ctx->pc = 0x17C404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C400u;
            // 0x17c404: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C440u;
            goto label_17c440;
        }
    }
    ctx->pc = 0x17C408u;
label_17c408:
    // 0x17c408: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17c40c:
    // 0x17c40c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17c410:
    if (ctx->pc == 0x17C410u) {
        ctx->pc = 0x17C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C40Cu;
        // 0x17c410: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C414u;
        goto label_17c414;
    }
    ctx->pc = 0x17C40Cu;
    {
        const bool branch_taken_0x17c40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C40Cu;
        // 0x17c410: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c40c) {
            ctx->pc = 0x17C41Cu;
            goto label_17c41c;
        }
    }
    ctx->pc = 0x17C414u;
label_17c414:
    // 0x17c414: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x17c414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_17c418:
    // 0x17c418: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17c41c:
    // 0x17c41c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_17c420:
    // 0x17c420: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x17c420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_17c424:
    // 0x17c424: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x17c424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_17c428:
    // 0x17c428: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x17c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_17c42c:
    // 0x17c42c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x17c42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17c430:
    // 0x17c430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17c434:
    // 0x17c434: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
label_17c438:
    if (ctx->pc == 0x17C438u) {
        ctx->pc = 0x17C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C434u;
        // 0x17c438: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C43Cu;
        goto label_17c43c;
    }
    ctx->pc = 0x17C434u;
    {
        const bool branch_taken_0x17c434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C434u;
        // 0x17c438: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c434) {
            ctx->pc = 0x17C408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c408;
        }
    }
    ctx->pc = 0x17C43Cu;
label_17c43c:
    // 0x17c43c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x17c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_17c440:
    // 0x17c440: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x17c440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_17c444:
    // 0x17c444: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x17c444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_17c448:
    // 0x17c448: 0x10000015  b           . + 4 + (0x15 << 2)
label_17c44c:
    if (ctx->pc == 0x17C44Cu) {
        ctx->pc = 0x17C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C448u;
        // 0x17c44c: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C450u;
        goto label_17c450;
    }
    ctx->pc = 0x17C448u;
    {
        const bool branch_taken_0x17c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C448u;
        // 0x17c44c: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c448) {
            ctx->pc = 0x17C4A0u;
            goto label_17c4a0;
        }
    }
    ctx->pc = 0x17C450u;
label_17c450:
    // 0x17c450: 0x8c43f8b0  lw          $v1, -0x750($v0)
    ctx->pc = 0x17c450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965424)));
label_17c454:
    // 0x17c454: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_17c458:
    if (ctx->pc == 0x17C458u) {
        ctx->pc = 0x17C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C454u;
        // 0x17c458: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C45Cu;
        goto label_17c45c;
    }
    ctx->pc = 0x17C454u;
    {
        const bool branch_taken_0x17c454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C454u;
        // 0x17c458: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c454) {
            ctx->pc = 0x17C4A4u;
            goto label_17c4a4;
        }
    }
    ctx->pc = 0x17C45Cu;
label_17c45c:
    // 0x17c45c: 0xc08114c  jal         func_204530
label_17c460:
    if (ctx->pc == 0x17C460u) {
        ctx->pc = 0x17C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C45Cu;
        // 0x17c460: 0x8e24016c  lw          $a0, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C464u;
        goto label_17c464;
    }
    ctx->pc = 0x17C45Cu;
    SET_GPR_U32(ctx, 31, 0x17C464u);
    ctx->pc = 0x17C460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C45Cu;
    // 0x17c460: 0x8e24016c  lw          $a0, 0x16C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204530u, 0x17C45Cu, 0x17C464u)) {
        return;
    }
    ctx->pc = 0x17C464u;
label_17c464:
    // 0x17c464: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_17c468:
    if (ctx->pc == 0x17C468u) {
        ctx->pc = 0x17C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C464u;
        // 0x17c468: 0x8e24016c  lw          $a0, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C46Cu;
        goto label_17c46c;
    }
    ctx->pc = 0x17C464u;
    {
        const bool branch_taken_0x17c464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c464) {
            ctx->pc = 0x17C468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C464u;
            // 0x17c468: 0x8e24016c  lw          $a0, 0x16C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C47Cu;
            goto label_17c47c;
        }
    }
    ctx->pc = 0x17C46Cu;
label_17c46c:
    // 0x17c46c: 0xc08125c  jal         func_204970
label_17c470:
    if (ctx->pc == 0x17C470u) {
        ctx->pc = 0x17C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C46Cu;
        // 0x17c470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C474u;
        goto label_17c474;
    }
    ctx->pc = 0x17C46Cu;
    SET_GPR_U32(ctx, 31, 0x17C474u);
    ctx->pc = 0x17C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C46Cu;
    // 0x17c470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204970u, 0x17C46Cu, 0x17C474u)) {
        return;
    }
    ctx->pc = 0x17C474u;
label_17c474:
    // 0x17c474: 0x1000000b  b           . + 4 + (0xB << 2)
label_17c478:
    if (ctx->pc == 0x17C478u) {
        ctx->pc = 0x17C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C474u;
        // 0x17c478: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C47Cu;
        goto label_17c47c;
    }
    ctx->pc = 0x17C474u;
    {
        const bool branch_taken_0x17c474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C474u;
        // 0x17c478: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c474) {
            ctx->pc = 0x17C4A4u;
            goto label_17c4a4;
        }
    }
    ctx->pc = 0x17C47Cu;
label_17c47c:
    // 0x17c47c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c480:
    // 0x17c480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c484:
    // 0x17c484: 0xc081782  jal         func_205E08
label_17c488:
    if (ctx->pc == 0x17C488u) {
        ctx->pc = 0x17C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C484u;
        // 0x17c488: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C48Cu;
        goto label_17c48c;
    }
    ctx->pc = 0x17C484u;
    SET_GPR_U32(ctx, 31, 0x17C48Cu);
    ctx->pc = 0x17C488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C484u;
    // 0x17c488: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205E08u, 0x17C484u, 0x17C48Cu)) {
        return;
    }
    ctx->pc = 0x17C48Cu;
label_17c48c:
    // 0x17c48c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17c490:
    if (ctx->pc == 0x17C490u) {
        ctx->pc = 0x17C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C48Cu;
        // 0x17c490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C494u;
        goto label_17c494;
    }
    ctx->pc = 0x17C48Cu;
    {
        const bool branch_taken_0x17c48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C48Cu;
        // 0x17c490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c48c) {
            ctx->pc = 0x17C4A0u;
            goto label_17c4a0;
        }
    }
    ctx->pc = 0x17C494u;
label_17c494:
    // 0x17c494: 0x8e24016c  lw          $a0, 0x16C($s1)
    ctx->pc = 0x17c494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
label_17c498:
    // 0x17c498: 0xc0814aa  jal         func_2052A8
label_17c49c:
    if (ctx->pc == 0x17C49Cu) {
        ctx->pc = 0x17C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C498u;
        // 0x17c49c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C4A0u;
        goto label_17c4a0;
    }
    ctx->pc = 0x17C498u;
    SET_GPR_U32(ctx, 31, 0x17C4A0u);
    ctx->pc = 0x17C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C498u;
    // 0x17c49c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2052A8u, 0x17C498u, 0x17C4A0u)) {
        return;
    }
    ctx->pc = 0x17C4A0u;
label_17c4a0:
    // 0x17c4a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17c4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17c4a4:
    // 0x17c4a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17c4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17c4a8:
    // 0x17c4a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17c4a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17c4ac:
    // 0x17c4ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17c4acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17c4b0:
    // 0x17c4b0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17c4b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17c4b4:
    // 0x17c4b4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x17c4b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17c4b8:
    // 0x17c4b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c4bc:
    // 0x17c4bc: 0x3e00008  jr          $ra
label_17c4c0:
    if (ctx->pc == 0x17C4C0u) {
        ctx->pc = 0x17C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4BCu;
        // 0x17c4c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C4C4u;
        goto label_17c4c4;
    }
    ctx->pc = 0x17C4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4BCu;
        // 0x17c4c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C4C4u;
label_17c4c4:
    // 0x17c4c4: 0x0  nop
    ctx->pc = 0x17c4c4u;
    // NOP
    ctx->pc = 0x17c4c8u;
}
