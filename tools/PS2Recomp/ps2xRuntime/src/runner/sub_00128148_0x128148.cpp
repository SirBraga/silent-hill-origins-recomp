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

// Function: sub_00128148
// Address: 0x128148 - 0x128428
void sub_00128148_0x128148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128148_0x128148");
#endif

    switch (ctx->pc) {
        case 0x128148u: goto label_128148;
        case 0x12814cu: goto label_12814c;
        case 0x128150u: goto label_128150;
        case 0x128154u: goto label_128154;
        case 0x128158u: goto label_128158;
        case 0x12815cu: goto label_12815c;
        case 0x128160u: goto label_128160;
        case 0x128164u: goto label_128164;
        case 0x128168u: goto label_128168;
        case 0x12816cu: goto label_12816c;
        case 0x128170u: goto label_128170;
        case 0x128174u: goto label_128174;
        case 0x128178u: goto label_128178;
        case 0x12817cu: goto label_12817c;
        case 0x128180u: goto label_128180;
        case 0x128184u: goto label_128184;
        case 0x128188u: goto label_128188;
        case 0x12818cu: goto label_12818c;
        case 0x128190u: goto label_128190;
        case 0x128194u: goto label_128194;
        case 0x128198u: goto label_128198;
        case 0x12819cu: goto label_12819c;
        case 0x1281a0u: goto label_1281a0;
        case 0x1281a4u: goto label_1281a4;
        case 0x1281a8u: goto label_1281a8;
        case 0x1281acu: goto label_1281ac;
        case 0x1281b0u: goto label_1281b0;
        case 0x1281b4u: goto label_1281b4;
        case 0x1281b8u: goto label_1281b8;
        case 0x1281bcu: goto label_1281bc;
        case 0x1281c0u: goto label_1281c0;
        case 0x1281c4u: goto label_1281c4;
        case 0x1281c8u: goto label_1281c8;
        case 0x1281ccu: goto label_1281cc;
        case 0x1281d0u: goto label_1281d0;
        case 0x1281d4u: goto label_1281d4;
        case 0x1281d8u: goto label_1281d8;
        case 0x1281dcu: goto label_1281dc;
        case 0x1281e0u: goto label_1281e0;
        case 0x1281e4u: goto label_1281e4;
        case 0x1281e8u: goto label_1281e8;
        case 0x1281ecu: goto label_1281ec;
        case 0x1281f0u: goto label_1281f0;
        case 0x1281f4u: goto label_1281f4;
        case 0x1281f8u: goto label_1281f8;
        case 0x1281fcu: goto label_1281fc;
        case 0x128200u: goto label_128200;
        case 0x128204u: goto label_128204;
        case 0x128208u: goto label_128208;
        case 0x12820cu: goto label_12820c;
        case 0x128210u: goto label_128210;
        case 0x128214u: goto label_128214;
        case 0x128218u: goto label_128218;
        case 0x12821cu: goto label_12821c;
        case 0x128220u: goto label_128220;
        case 0x128224u: goto label_128224;
        case 0x128228u: goto label_128228;
        case 0x12822cu: goto label_12822c;
        case 0x128230u: goto label_128230;
        case 0x128234u: goto label_128234;
        case 0x128238u: goto label_128238;
        case 0x12823cu: goto label_12823c;
        case 0x128240u: goto label_128240;
        case 0x128244u: goto label_128244;
        case 0x128248u: goto label_128248;
        case 0x12824cu: goto label_12824c;
        case 0x128250u: goto label_128250;
        case 0x128254u: goto label_128254;
        case 0x128258u: goto label_128258;
        case 0x12825cu: goto label_12825c;
        case 0x128260u: goto label_128260;
        case 0x128264u: goto label_128264;
        case 0x128268u: goto label_128268;
        case 0x12826cu: goto label_12826c;
        case 0x128270u: goto label_128270;
        case 0x128274u: goto label_128274;
        case 0x128278u: goto label_128278;
        case 0x12827cu: goto label_12827c;
        case 0x128280u: goto label_128280;
        case 0x128284u: goto label_128284;
        case 0x128288u: goto label_128288;
        case 0x12828cu: goto label_12828c;
        case 0x128290u: goto label_128290;
        case 0x128294u: goto label_128294;
        case 0x128298u: goto label_128298;
        case 0x12829cu: goto label_12829c;
        case 0x1282a0u: goto label_1282a0;
        case 0x1282a4u: goto label_1282a4;
        case 0x1282a8u: goto label_1282a8;
        case 0x1282acu: goto label_1282ac;
        case 0x1282b0u: goto label_1282b0;
        case 0x1282b4u: goto label_1282b4;
        case 0x1282b8u: goto label_1282b8;
        case 0x1282bcu: goto label_1282bc;
        case 0x1282c0u: goto label_1282c0;
        case 0x1282c4u: goto label_1282c4;
        case 0x1282c8u: goto label_1282c8;
        case 0x1282ccu: goto label_1282cc;
        case 0x1282d0u: goto label_1282d0;
        case 0x1282d4u: goto label_1282d4;
        case 0x1282d8u: goto label_1282d8;
        case 0x1282dcu: goto label_1282dc;
        case 0x1282e0u: goto label_1282e0;
        case 0x1282e4u: goto label_1282e4;
        case 0x1282e8u: goto label_1282e8;
        case 0x1282ecu: goto label_1282ec;
        case 0x1282f0u: goto label_1282f0;
        case 0x1282f4u: goto label_1282f4;
        case 0x1282f8u: goto label_1282f8;
        case 0x1282fcu: goto label_1282fc;
        case 0x128300u: goto label_128300;
        case 0x128304u: goto label_128304;
        case 0x128308u: goto label_128308;
        case 0x12830cu: goto label_12830c;
        case 0x128310u: goto label_128310;
        case 0x128314u: goto label_128314;
        case 0x128318u: goto label_128318;
        case 0x12831cu: goto label_12831c;
        case 0x128320u: goto label_128320;
        case 0x128324u: goto label_128324;
        case 0x128328u: goto label_128328;
        case 0x12832cu: goto label_12832c;
        case 0x128330u: goto label_128330;
        case 0x128334u: goto label_128334;
        case 0x128338u: goto label_128338;
        case 0x12833cu: goto label_12833c;
        case 0x128340u: goto label_128340;
        case 0x128344u: goto label_128344;
        case 0x128348u: goto label_128348;
        case 0x12834cu: goto label_12834c;
        case 0x128350u: goto label_128350;
        case 0x128354u: goto label_128354;
        case 0x128358u: goto label_128358;
        case 0x12835cu: goto label_12835c;
        case 0x128360u: goto label_128360;
        case 0x128364u: goto label_128364;
        case 0x128368u: goto label_128368;
        case 0x12836cu: goto label_12836c;
        case 0x128370u: goto label_128370;
        case 0x128374u: goto label_128374;
        case 0x128378u: goto label_128378;
        case 0x12837cu: goto label_12837c;
        case 0x128380u: goto label_128380;
        case 0x128384u: goto label_128384;
        case 0x128388u: goto label_128388;
        case 0x12838cu: goto label_12838c;
        case 0x128390u: goto label_128390;
        case 0x128394u: goto label_128394;
        case 0x128398u: goto label_128398;
        case 0x12839cu: goto label_12839c;
        case 0x1283a0u: goto label_1283a0;
        case 0x1283a4u: goto label_1283a4;
        case 0x1283a8u: goto label_1283a8;
        case 0x1283acu: goto label_1283ac;
        case 0x1283b0u: goto label_1283b0;
        case 0x1283b4u: goto label_1283b4;
        case 0x1283b8u: goto label_1283b8;
        case 0x1283bcu: goto label_1283bc;
        case 0x1283c0u: goto label_1283c0;
        case 0x1283c4u: goto label_1283c4;
        case 0x1283c8u: goto label_1283c8;
        case 0x1283ccu: goto label_1283cc;
        case 0x1283d0u: goto label_1283d0;
        case 0x1283d4u: goto label_1283d4;
        case 0x1283d8u: goto label_1283d8;
        case 0x1283dcu: goto label_1283dc;
        case 0x1283e0u: goto label_1283e0;
        case 0x1283e4u: goto label_1283e4;
        case 0x1283e8u: goto label_1283e8;
        case 0x1283ecu: goto label_1283ec;
        case 0x1283f0u: goto label_1283f0;
        case 0x1283f4u: goto label_1283f4;
        case 0x1283f8u: goto label_1283f8;
        case 0x1283fcu: goto label_1283fc;
        case 0x128400u: goto label_128400;
        case 0x128404u: goto label_128404;
        case 0x128408u: goto label_128408;
        case 0x12840cu: goto label_12840c;
        case 0x128410u: goto label_128410;
        case 0x128414u: goto label_128414;
        case 0x128418u: goto label_128418;
        case 0x12841cu: goto label_12841c;
        case 0x128420u: goto label_128420;
        case 0x128424u: goto label_128424;
        default: break;
    }

    ctx->pc = 0x128148u;

label_128148:
    // 0x128148: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x128148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_12814c:
    // 0x12814c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x12814cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_128150:
    // 0x128150: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x128150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_128154:
    // 0x128154: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x128154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_128158:
    // 0x128158: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x128158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_12815c:
    // 0x12815c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x12815cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_128160:
    // 0x128160: 0xc07d234  jal         func_1F48D0
label_128164:
    if (ctx->pc == 0x128164u) {
        ctx->pc = 0x128164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128160u;
        // 0x128164: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128168u;
        goto label_128168;
    }
    ctx->pc = 0x128160u;
    SET_GPR_U32(ctx, 31, 0x128168u);
    ctx->pc = 0x128164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128160u;
    // 0x128164: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x128160u, 0x128168u)) {
        return;
    }
    ctx->pc = 0x128168u;
label_128168:
    // 0x128168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12816c:
    // 0x12816c: 0x108000a7  beqz        $a0, . + 4 + (0xA7 << 2)
label_128170:
    if (ctx->pc == 0x128170u) {
        ctx->pc = 0x128170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12816Cu;
        // 0x128170: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128174u;
        goto label_128174;
    }
    ctx->pc = 0x12816Cu;
    {
        const bool branch_taken_0x12816c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x128170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12816Cu;
        // 0x128170: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12816c) {
            ctx->pc = 0x12840Cu;
            goto label_12840c;
        }
    }
    ctx->pc = 0x128174u;
label_128174:
    // 0x128174: 0x8e422d10  lw          $v0, 0x2D10($s2)
    ctx->pc = 0x128174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11536)));
label_128178:
    // 0x128178: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
label_12817c:
    if (ctx->pc == 0x12817Cu) {
        ctx->pc = 0x12817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128178u;
        // 0x12817c: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128180u;
        goto label_128180;
    }
    ctx->pc = 0x128178u;
    {
        const bool branch_taken_0x128178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128178u;
        // 0x12817c: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128178) {
            ctx->pc = 0x128410u;
            goto label_128410;
        }
    }
    ctx->pc = 0x128180u;
label_128180:
    // 0x128180: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x128180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_128184:
    // 0x128184: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x128184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128188:
    // 0x128188: 0x8c45cf68  lw          $a1, -0x3098($v0)
    ctx->pc = 0x128188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954856)));
label_12818c:
    // 0x12818c: 0xc07d3d6  jal         func_1F4F58
label_128190:
    if (ctx->pc == 0x128190u) {
        ctx->pc = 0x128190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12818Cu;
        // 0x128190: 0x2453cf68  addiu       $s3, $v0, -0x3098 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128194u;
        goto label_128194;
    }
    ctx->pc = 0x12818Cu;
    SET_GPR_U32(ctx, 31, 0x128194u);
    ctx->pc = 0x128190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12818Cu;
    // 0x128190: 0x2453cf68  addiu       $s3, $v0, -0x3098 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x12818Cu, 0x128194u)) {
        return;
    }
    ctx->pc = 0x128194u;
label_128194:
    // 0x128194: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_128198:
    if (ctx->pc == 0x128198u) {
        ctx->pc = 0x128198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128194u;
        // 0x128198: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12819Cu;
        goto label_12819c;
    }
    ctx->pc = 0x128194u;
    {
        const bool branch_taken_0x128194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128194u;
        // 0x128198: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128194) {
            ctx->pc = 0x12840Cu;
            goto label_12840c;
        }
    }
    ctx->pc = 0x12819Cu;
label_12819c:
    // 0x12819c: 0x8e452c30  lw          $a1, 0x2C30($s2)
    ctx->pc = 0x12819cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11312)));
label_1281a0:
    // 0x1281a0: 0x10a0009b  beqz        $a1, . + 4 + (0x9B << 2)
label_1281a4:
    if (ctx->pc == 0x1281A4u) {
        ctx->pc = 0x1281A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281A0u;
        // 0x1281a4: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1281A8u;
        goto label_1281a8;
    }
    ctx->pc = 0x1281A0u;
    {
        const bool branch_taken_0x1281a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281A0u;
        // 0x1281a4: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281a0) {
            ctx->pc = 0x128410u;
            goto label_128410;
        }
    }
    ctx->pc = 0x1281A8u;
label_1281a8:
    // 0x1281a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1281a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1281ac:
    // 0x1281ac: 0xc07d3d6  jal         func_1F4F58
label_1281b0:
    if (ctx->pc == 0x1281B0u) {
        ctx->pc = 0x1281B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281ACu;
        // 0x1281b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1281B4u;
        goto label_1281b4;
    }
    ctx->pc = 0x1281ACu;
    SET_GPR_U32(ctx, 31, 0x1281B4u);
    ctx->pc = 0x1281B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1281ACu;
    // 0x1281b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1281ACu, 0x1281B4u)) {
        return;
    }
    ctx->pc = 0x1281B4u;
label_1281b4:
    // 0x1281b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1281b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1281b8:
    // 0x1281b8: 0x12000093  beqz        $s0, . + 4 + (0x93 << 2)
label_1281bc:
    if (ctx->pc == 0x1281BCu) {
        ctx->pc = 0x1281BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281B8u;
        // 0x1281bc: 0x26510040  addiu       $s1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1281C0u;
        goto label_1281c0;
    }
    ctx->pc = 0x1281B8u;
    {
        const bool branch_taken_0x1281b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281B8u;
        // 0x1281bc: 0x26510040  addiu       $s1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281b8) {
            ctx->pc = 0x128408u;
            goto label_128408;
        }
    }
    ctx->pc = 0x1281C0u;
label_1281c0:
    // 0x1281c0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1281c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_1281c4:
    // 0x1281c4: 0xc04f0cc  jal         func_13C330
label_1281c8:
    if (ctx->pc == 0x1281C8u) {
        ctx->pc = 0x1281C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281C4u;
        // 0x1281c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1281CCu;
        goto label_1281cc;
    }
    ctx->pc = 0x1281C4u;
    SET_GPR_U32(ctx, 31, 0x1281CCu);
    ctx->pc = 0x1281C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1281C4u;
    // 0x1281c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1281C4u, 0x1281CCu)) {
        return;
    }
    ctx->pc = 0x1281CCu;
label_1281cc:
    // 0x1281cc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1281ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1281d0:
    // 0x1281d0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1281d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1281d4:
    // 0x1281d4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1281d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1281d8:
    // 0x1281d8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1281d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1281dc:
    // 0x1281dc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1281dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1281e0:
    // 0x1281e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1281e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1281e4:
    // 0x1281e4: 0xc04f0f0  jal         func_13C3C0
label_1281e8:
    if (ctx->pc == 0x1281E8u) {
        ctx->pc = 0x1281E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281E4u;
        // 0x1281e8: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1281ECu;
        goto label_1281ec;
    }
    ctx->pc = 0x1281E4u;
    SET_GPR_U32(ctx, 31, 0x1281ECu);
    ctx->pc = 0x1281E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1281E4u;
    // 0x1281e8: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1281E4u, 0x1281ECu)) {
        return;
    }
    ctx->pc = 0x1281ECu;
label_1281ec:
    // 0x1281ec: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x1281ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1281f0:
    // 0x1281f0: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x1281f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1281f4:
    // 0x1281f4: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x1281f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1281f8:
    // 0x1281f8: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x1281f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1281fc:
    // 0x1281fc: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x1281fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_128200:
    // 0x128200: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x128200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
label_128204:
    // 0x128204: 0xc04f0e2  jal         func_13C388
label_128208:
    if (ctx->pc == 0x128208u) {
        ctx->pc = 0x128208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128204u;
        // 0x128208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12820Cu;
        goto label_12820c;
    }
    ctx->pc = 0x128204u;
    SET_GPR_U32(ctx, 31, 0x12820Cu);
    ctx->pc = 0x128208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128204u;
    // 0x128208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C388u, 0x128204u, 0x12820Cu)) {
        return;
    }
    ctx->pc = 0x12820Cu;
label_12820c:
    // 0x12820c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x12820cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_128210:
    // 0x128210: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x128210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_128214:
    // 0x128214: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x128214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_128218:
    // 0x128218: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x128218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12821c:
    // 0x12821c: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x12821cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_128220:
    // 0x128220: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x128220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_128224:
    // 0x128224: 0xc04f0d4  jal         func_13C350
label_128228:
    if (ctx->pc == 0x128228u) {
        ctx->pc = 0x128228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128224u;
        // 0x128228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12822Cu;
        goto label_12822c;
    }
    ctx->pc = 0x128224u;
    SET_GPR_U32(ctx, 31, 0x12822Cu);
    ctx->pc = 0x128228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128224u;
    // 0x128228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C350u, 0x128224u, 0x12822Cu)) {
        return;
    }
    ctx->pc = 0x12822Cu;
label_12822c:
    // 0x12822c: 0x8e432814  lw          $v1, 0x2814($s2)
    ctx->pc = 0x12822cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10260)));
label_128230:
    // 0x128230: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x128230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_128234:
    // 0x128234: 0x8e4827dc  lw          $t0, 0x27DC($s2)
    ctx->pc = 0x128234u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10204)));
label_128238:
    // 0x128238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12823c:
    // 0x12823c: 0x8e4727f8  lw          $a3, 0x27F8($s2)
    ctx->pc = 0x12823cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10232)));
label_128240:
    // 0x128240: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x128240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_128244:
    // 0x128244: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x128244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_128248:
    // 0x128248: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x128248u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12824c:
    // 0x12824c: 0xb3a90037  sdl         $t1, 0x37($sp)
    ctx->pc = 0x12824cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_128250:
    // 0x128250: 0xb7a90030  sdr         $t1, 0x30($sp)
    ctx->pc = 0x128250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_128254:
    // 0x128254: 0xafaa0038  sw          $t2, 0x38($sp)
    ctx->pc = 0x128254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 10));
label_128258:
    // 0x128258: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x128258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_12825c:
    // 0x12825c: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x12825cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
label_128260:
    // 0x128260: 0xafa80084  sw          $t0, 0x84($sp)
    ctx->pc = 0x128260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 8));
label_128264:
    // 0x128264: 0xc07d348  jal         func_1F4D20
label_128268:
    if (ctx->pc == 0x128268u) {
        ctx->pc = 0x128268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128264u;
        // 0x128268: 0xafa70088  sw          $a3, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12826Cu;
        goto label_12826c;
    }
    ctx->pc = 0x128264u;
    SET_GPR_U32(ctx, 31, 0x12826Cu);
    ctx->pc = 0x128268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128264u;
    // 0x128268: 0xafa70088  sw          $a3, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x128264u, 0x12826Cu)) {
        return;
    }
    ctx->pc = 0x12826Cu;
label_12826c:
    // 0x12826c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x12826cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_128270:
    // 0x128270: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x128270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_128274:
    // 0x128274: 0xc07d368  jal         func_1F4DA0
label_128278:
    if (ctx->pc == 0x128278u) {
        ctx->pc = 0x128278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128274u;
        // 0x128278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12827Cu;
        goto label_12827c;
    }
    ctx->pc = 0x128274u;
    SET_GPR_U32(ctx, 31, 0x12827Cu);
    ctx->pc = 0x128278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128274u;
    // 0x128278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x128274u, 0x12827Cu)) {
        return;
    }
    ctx->pc = 0x12827Cu;
label_12827c:
    // 0x12827c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x12827cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_128280:
    // 0x128280: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x128280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_128284:
    // 0x128284: 0xc07d368  jal         func_1F4DA0
label_128288:
    if (ctx->pc == 0x128288u) {
        ctx->pc = 0x128288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128284u;
        // 0x128288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12828Cu;
        goto label_12828c;
    }
    ctx->pc = 0x128284u;
    SET_GPR_U32(ctx, 31, 0x12828Cu);
    ctx->pc = 0x128288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128284u;
    // 0x128288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x128284u, 0x12828Cu)) {
        return;
    }
    ctx->pc = 0x12828Cu;
label_12828c:
    // 0x12828c: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x12828cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_128290:
    // 0x128290: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x128290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_128294:
    // 0x128294: 0xc07d368  jal         func_1F4DA0
label_128298:
    if (ctx->pc == 0x128298u) {
        ctx->pc = 0x128298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128294u;
        // 0x128298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12829Cu;
        goto label_12829c;
    }
    ctx->pc = 0x128294u;
    SET_GPR_U32(ctx, 31, 0x12829Cu);
    ctx->pc = 0x128298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128294u;
    // 0x128298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x128294u, 0x12829Cu)) {
        return;
    }
    ctx->pc = 0x12829Cu;
label_12829c:
    // 0x12829c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x12829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1282a0:
    // 0x1282a0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1282a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1282a4:
    // 0x1282a4: 0xc07d368  jal         func_1F4DA0
label_1282a8:
    if (ctx->pc == 0x1282A8u) {
        ctx->pc = 0x1282A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282A4u;
        // 0x1282a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1282ACu;
        goto label_1282ac;
    }
    ctx->pc = 0x1282A4u;
    SET_GPR_U32(ctx, 31, 0x1282ACu);
    ctx->pc = 0x1282A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282A4u;
    // 0x1282a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x1282A4u, 0x1282ACu)) {
        return;
    }
    ctx->pc = 0x1282ACu;
label_1282ac:
    // 0x1282ac: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x1282acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1282b0:
    // 0x1282b0: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x1282b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1282b4:
    // 0x1282b4: 0xc07d368  jal         func_1F4DA0
label_1282b8:
    if (ctx->pc == 0x1282B8u) {
        ctx->pc = 0x1282B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282B4u;
        // 0x1282b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1282BCu;
        goto label_1282bc;
    }
    ctx->pc = 0x1282B4u;
    SET_GPR_U32(ctx, 31, 0x1282BCu);
    ctx->pc = 0x1282B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282B4u;
    // 0x1282b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x1282B4u, 0x1282BCu)) {
        return;
    }
    ctx->pc = 0x1282BCu;
label_1282bc:
    // 0x1282bc: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x1282bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1282c0:
    // 0x1282c0: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1282c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_1282c4:
    // 0x1282c4: 0xc07d368  jal         func_1F4DA0
label_1282c8:
    if (ctx->pc == 0x1282C8u) {
        ctx->pc = 0x1282C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282C4u;
        // 0x1282c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1282CCu;
        goto label_1282cc;
    }
    ctx->pc = 0x1282C4u;
    SET_GPR_U32(ctx, 31, 0x1282CCu);
    ctx->pc = 0x1282C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282C4u;
    // 0x1282c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x1282C4u, 0x1282CCu)) {
        return;
    }
    ctx->pc = 0x1282CCu;
label_1282cc:
    // 0x1282cc: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1282ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1282d0:
    // 0x1282d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1282d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1282d4:
    // 0x1282d4: 0xc07d368  jal         func_1F4DA0
label_1282d8:
    if (ctx->pc == 0x1282D8u) {
        ctx->pc = 0x1282D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282D4u;
        // 0x1282d8: 0x26460d54  addiu       $a2, $s2, 0xD54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3412));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1282DCu;
        goto label_1282dc;
    }
    ctx->pc = 0x1282D4u;
    SET_GPR_U32(ctx, 31, 0x1282DCu);
    ctx->pc = 0x1282D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282D4u;
    // 0x1282d8: 0x26460d54  addiu       $a2, $s2, 0xD54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x1282D4u, 0x1282DCu)) {
        return;
    }
    ctx->pc = 0x1282DCu;
label_1282dc:
    // 0x1282dc: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x1282dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1282e0:
    // 0x1282e0: 0x27a60084  addiu       $a2, $sp, 0x84
    ctx->pc = 0x1282e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_1282e4:
    // 0x1282e4: 0xc07d348  jal         func_1F4D20
label_1282e8:
    if (ctx->pc == 0x1282E8u) {
        ctx->pc = 0x1282E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282E4u;
        // 0x1282e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1282ECu;
        goto label_1282ec;
    }
    ctx->pc = 0x1282E4u;
    SET_GPR_U32(ctx, 31, 0x1282ECu);
    ctx->pc = 0x1282E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282E4u;
    // 0x1282e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1282E4u, 0x1282ECu)) {
        return;
    }
    ctx->pc = 0x1282ECu;
label_1282ec:
    // 0x1282ec: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x1282ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_1282f0:
    // 0x1282f0: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x1282f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1282f4:
    // 0x1282f4: 0xc07d348  jal         func_1F4D20
label_1282f8:
    if (ctx->pc == 0x1282F8u) {
        ctx->pc = 0x1282F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282F4u;
        // 0x1282f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1282FCu;
        goto label_1282fc;
    }
    ctx->pc = 0x1282F4u;
    SET_GPR_U32(ctx, 31, 0x1282FCu);
    ctx->pc = 0x1282F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282F4u;
    // 0x1282f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1282F4u, 0x1282FCu)) {
        return;
    }
    ctx->pc = 0x1282FCu;
label_1282fc:
    // 0x1282fc: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x1282fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_128300:
    // 0x128300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128304:
    // 0x128304: 0xc07d348  jal         func_1F4D20
label_128308:
    if (ctx->pc == 0x128308u) {
        ctx->pc = 0x128308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128304u;
        // 0x128308: 0x27a6008c  addiu       $a2, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12830Cu;
        goto label_12830c;
    }
    ctx->pc = 0x128304u;
    SET_GPR_U32(ctx, 31, 0x12830Cu);
    ctx->pc = 0x128308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128304u;
    // 0x128308: 0x27a6008c  addiu       $a2, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x128304u, 0x12830Cu)) {
        return;
    }
    ctx->pc = 0x12830Cu;
label_12830c:
    // 0x12830c: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x12830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_128310:
    // 0x128310: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x128310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_128314:
    // 0x128314: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x128314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_128318:
    // 0x128318: 0xae4327dc  sw          $v1, 0x27DC($s2)
    ctx->pc = 0x128318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10204), GPR_U32(ctx, 3));
label_12831c:
    // 0x12831c: 0xae4227f8  sw          $v0, 0x27F8($s2)
    ctx->pc = 0x12831cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10232), GPR_U32(ctx, 2));
label_128320:
    // 0x128320: 0xae442814  sw          $a0, 0x2814($s2)
    ctx->pc = 0x128320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10260), GPR_U32(ctx, 4));
label_128324:
    // 0x128324: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x128324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_128328:
    // 0x128328: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x128328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12832c:
    // 0x12832c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x12832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128330:
    // 0x128330: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x128330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_128334:
    // 0x128334: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x128334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128338:
    // 0x128338: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x128338u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_12833c:
    // 0x12833c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x12833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_128340:
    // 0x128340: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x128340u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_128344:
    // 0x128344: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x128344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_128348:
    // 0x128348: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x128348u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_12834c:
    // 0x12834c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12834cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_128350:
    // 0x128350: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x128350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_128354:
    // 0x128354: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x128354u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_128358:
    // 0x128358: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x128358u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_12835c:
    // 0x12835c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x12835cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_128360:
    // 0x128360: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x128360u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_128364:
    // 0x128364: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x128364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_128368:
    // 0x128368: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x128368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12836c:
    // 0x12836c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x12836cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_128370:
    // 0x128370: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x128370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_128374:
    // 0x128374: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x128374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_128378:
    // 0x128378: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x128378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12837c:
    // 0x12837c: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x12837cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_128380:
    // 0x128380: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x128380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_128384:
    // 0x128384: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x128384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_128388:
    // 0x128388: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x128388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_12838c:
    // 0x12838c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x12838cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_128390:
    // 0x128390: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x128390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_128394:
    // 0x128394: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x128394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_128398:
    // 0x128398: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x128398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
label_12839c:
    // 0x12839c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x12839cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1283a0:
    // 0x1283a0: 0x6bab0037  ldl         $t3, 0x37($sp)
    ctx->pc = 0x1283a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_1283a4:
    // 0x1283a4: 0x6fab0030  ldr         $t3, 0x30($sp)
    ctx->pc = 0x1283a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_1283a8:
    // 0x1283a8: 0x8fac0038  lw          $t4, 0x38($sp)
    ctx->pc = 0x1283a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1283ac:
    // 0x1283ac: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x1283acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1283b0:
    // 0x1283b0: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x1283b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1283b4:
    // 0x1283b4: 0xafac0048  sw          $t4, 0x48($sp)
    ctx->pc = 0x1283b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 12));
label_1283b8:
    // 0x1283b8: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x1283b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1283bc:
    // 0x1283bc: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x1283bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1283c0:
    // 0x1283c0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1283c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1283c4:
    // 0x1283c4: 0xb3a50077  sdl         $a1, 0x77($sp)
    ctx->pc = 0x1283c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1283c8:
    // 0x1283c8: 0xb7a50070  sdr         $a1, 0x70($sp)
    ctx->pc = 0x1283c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1283cc:
    // 0x1283cc: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x1283ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_1283d0:
    // 0x1283d0: 0xc092d94  jal         func_24B650
label_1283d4:
    if (ctx->pc == 0x1283D4u) {
        ctx->pc = 0x1283D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283D0u;
        // 0x1283d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1283D8u;
        goto label_1283d8;
    }
    ctx->pc = 0x1283D0u;
    SET_GPR_U32(ctx, 31, 0x1283D8u);
    ctx->pc = 0x1283D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1283D0u;
    // 0x1283d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x1283D0u, 0x1283D8u)) {
        return;
    }
    ctx->pc = 0x1283D8u;
label_1283d8:
    // 0x1283d8: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x1283d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_1283dc:
    // 0x1283dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1283dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1283e0:
    // 0x1283e0: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1283e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1283e4:
    // 0x1283e4: 0x8c66003c  lw          $a2, 0x3C($v1)
    ctx->pc = 0x1283e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1283e8:
    // 0x1283e8: 0xc0f809  jalr        $a2
label_1283ec:
    if (ctx->pc == 0x1283ECu) {
        ctx->pc = 0x1283ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283E8u;
        // 0x1283ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1283F0u;
        goto label_1283f0;
    }
    ctx->pc = 0x1283E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1283F0u);
        ctx->pc = 0x1283ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283E8u;
        // 0x1283ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1283E8u, 0x1283F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1283F0u;
label_1283f0:
    // 0x1283f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1283f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1283f4:
    // 0x1283f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1283f8:
    if (ctx->pc == 0x1283F8u) {
        ctx->pc = 0x1283F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283F4u;
        // 0x1283f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1283FCu;
        goto label_1283fc;
    }
    ctx->pc = 0x1283F4u;
    {
        const bool branch_taken_0x1283f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283F4u;
        // 0x1283f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283f4) {
            ctx->pc = 0x128408u;
            goto label_128408;
        }
    }
    ctx->pc = 0x1283FCu;
label_1283fc:
    // 0x1283fc: 0xae402be0  sw          $zero, 0x2BE0($s2)
    ctx->pc = 0x1283fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11232), GPR_U32(ctx, 0));
label_128400:
    // 0x128400: 0xae422bc4  sw          $v0, 0x2BC4($s2)
    ctx->pc = 0x128400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11204), GPR_U32(ctx, 2));
label_128404:
    // 0x128404: 0xae400c1c  sw          $zero, 0xC1C($s2)
    ctx->pc = 0x128404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3100), GPR_U32(ctx, 0));
label_128408:
    // 0x128408: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x128408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_12840c:
    // 0x12840c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x12840cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_128410:
    // 0x128410: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x128410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_128414:
    // 0x128414: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x128414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_128418:
    // 0x128418: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x128418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_12841c:
    // 0x12841c: 0x3e00008  jr          $ra
label_128420:
    if (ctx->pc == 0x128420u) {
        ctx->pc = 0x128420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12841Cu;
        // 0x128420: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128424u;
        goto label_128424;
    }
    ctx->pc = 0x12841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12841Cu;
        // 0x128420: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12841Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128424u;
label_128424:
    // 0x128424: 0x0  nop
    ctx->pc = 0x128424u;
    // NOP
    ctx->pc = 0x128428u;
}
