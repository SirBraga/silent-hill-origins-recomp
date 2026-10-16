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

// Function: sub_0020A1D8
// Address: 0x20a1d8 - 0x20a378
void sub_0020A1D8_0x20a1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A1D8_0x20a1d8");
#endif

    switch (ctx->pc) {
        case 0x20a1d8u: goto label_20a1d8;
        case 0x20a1dcu: goto label_20a1dc;
        case 0x20a1e0u: goto label_20a1e0;
        case 0x20a1e4u: goto label_20a1e4;
        case 0x20a1e8u: goto label_20a1e8;
        case 0x20a1ecu: goto label_20a1ec;
        case 0x20a1f0u: goto label_20a1f0;
        case 0x20a1f4u: goto label_20a1f4;
        case 0x20a1f8u: goto label_20a1f8;
        case 0x20a1fcu: goto label_20a1fc;
        case 0x20a200u: goto label_20a200;
        case 0x20a204u: goto label_20a204;
        case 0x20a208u: goto label_20a208;
        case 0x20a20cu: goto label_20a20c;
        case 0x20a210u: goto label_20a210;
        case 0x20a214u: goto label_20a214;
        case 0x20a218u: goto label_20a218;
        case 0x20a21cu: goto label_20a21c;
        case 0x20a220u: goto label_20a220;
        case 0x20a224u: goto label_20a224;
        case 0x20a228u: goto label_20a228;
        case 0x20a22cu: goto label_20a22c;
        case 0x20a230u: goto label_20a230;
        case 0x20a234u: goto label_20a234;
        case 0x20a238u: goto label_20a238;
        case 0x20a23cu: goto label_20a23c;
        case 0x20a240u: goto label_20a240;
        case 0x20a244u: goto label_20a244;
        case 0x20a248u: goto label_20a248;
        case 0x20a24cu: goto label_20a24c;
        case 0x20a250u: goto label_20a250;
        case 0x20a254u: goto label_20a254;
        case 0x20a258u: goto label_20a258;
        case 0x20a25cu: goto label_20a25c;
        case 0x20a260u: goto label_20a260;
        case 0x20a264u: goto label_20a264;
        case 0x20a268u: goto label_20a268;
        case 0x20a26cu: goto label_20a26c;
        case 0x20a270u: goto label_20a270;
        case 0x20a274u: goto label_20a274;
        case 0x20a278u: goto label_20a278;
        case 0x20a27cu: goto label_20a27c;
        case 0x20a280u: goto label_20a280;
        case 0x20a284u: goto label_20a284;
        case 0x20a288u: goto label_20a288;
        case 0x20a28cu: goto label_20a28c;
        case 0x20a290u: goto label_20a290;
        case 0x20a294u: goto label_20a294;
        case 0x20a298u: goto label_20a298;
        case 0x20a29cu: goto label_20a29c;
        case 0x20a2a0u: goto label_20a2a0;
        case 0x20a2a4u: goto label_20a2a4;
        case 0x20a2a8u: goto label_20a2a8;
        case 0x20a2acu: goto label_20a2ac;
        case 0x20a2b0u: goto label_20a2b0;
        case 0x20a2b4u: goto label_20a2b4;
        case 0x20a2b8u: goto label_20a2b8;
        case 0x20a2bcu: goto label_20a2bc;
        case 0x20a2c0u: goto label_20a2c0;
        case 0x20a2c4u: goto label_20a2c4;
        case 0x20a2c8u: goto label_20a2c8;
        case 0x20a2ccu: goto label_20a2cc;
        case 0x20a2d0u: goto label_20a2d0;
        case 0x20a2d4u: goto label_20a2d4;
        case 0x20a2d8u: goto label_20a2d8;
        case 0x20a2dcu: goto label_20a2dc;
        case 0x20a2e0u: goto label_20a2e0;
        case 0x20a2e4u: goto label_20a2e4;
        case 0x20a2e8u: goto label_20a2e8;
        case 0x20a2ecu: goto label_20a2ec;
        case 0x20a2f0u: goto label_20a2f0;
        case 0x20a2f4u: goto label_20a2f4;
        case 0x20a2f8u: goto label_20a2f8;
        case 0x20a2fcu: goto label_20a2fc;
        case 0x20a300u: goto label_20a300;
        case 0x20a304u: goto label_20a304;
        case 0x20a308u: goto label_20a308;
        case 0x20a30cu: goto label_20a30c;
        case 0x20a310u: goto label_20a310;
        case 0x20a314u: goto label_20a314;
        case 0x20a318u: goto label_20a318;
        case 0x20a31cu: goto label_20a31c;
        case 0x20a320u: goto label_20a320;
        case 0x20a324u: goto label_20a324;
        case 0x20a328u: goto label_20a328;
        case 0x20a32cu: goto label_20a32c;
        case 0x20a330u: goto label_20a330;
        case 0x20a334u: goto label_20a334;
        case 0x20a338u: goto label_20a338;
        case 0x20a33cu: goto label_20a33c;
        case 0x20a340u: goto label_20a340;
        case 0x20a344u: goto label_20a344;
        case 0x20a348u: goto label_20a348;
        case 0x20a34cu: goto label_20a34c;
        case 0x20a350u: goto label_20a350;
        case 0x20a354u: goto label_20a354;
        case 0x20a358u: goto label_20a358;
        case 0x20a35cu: goto label_20a35c;
        case 0x20a360u: goto label_20a360;
        case 0x20a364u: goto label_20a364;
        case 0x20a368u: goto label_20a368;
        case 0x20a36cu: goto label_20a36c;
        case 0x20a370u: goto label_20a370;
        case 0x20a374u: goto label_20a374;
        default: break;
    }

    ctx->pc = 0x20a1d8u;

label_20a1d8:
    // 0x20a1d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x20a1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_20a1dc:
    // 0x20a1dc: 0x24030079  addiu       $v1, $zero, 0x79
    ctx->pc = 0x20a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_20a1e0:
    // 0x20a1e0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x20a1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_20a1e4:
    // 0x20a1e4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x20a1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_20a1e8:
    // 0x20a1e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20a1ec:
    // 0x20a1ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x20a1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_20a1f0:
    // 0x20a1f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a1f4:
    // 0x20a1f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20a1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20a1f8:
    // 0x20a1f8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x20a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_20a1fc:
    // 0x20a1fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20a200:
    // 0x20a200: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x20a200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_20a204:
    // 0x20a204: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x20a204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_20a208:
    // 0x20a208: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x20a208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_20a20c:
    // 0x20a20c: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x20a20cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20a210:
    // 0x20a210: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x20a210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_20a214:
    // 0x20a214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a218:
    // 0x20a218: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a21c:
    // 0x20a21c: 0x8e3201a0  lw          $s2, 0x1A0($s1)
    ctx->pc = 0x20a21cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_20a220:
    // 0x20a220: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x20a220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_20a224:
    // 0x20a224: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20a224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a228:
    // 0x20a228: 0xac720018  sw          $s2, 0x18($v1)
    ctx->pc = 0x20a228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 18));
label_20a22c:
    // 0x20a22c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a230:
    // 0x20a230: 0xac50001c  sw          $s0, 0x1C($v0)
    ctx->pc = 0x20a230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 16));
label_20a234:
    // 0x20a234: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a238:
    // 0x20a238: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_20a23c:
    // 0x20a23c: 0x40f809  jalr        $v0
label_20a240:
    if (ctx->pc == 0x20A240u) {
        ctx->pc = 0x20A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A23Cu;
        // 0x20a240: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A244u;
        goto label_20a244;
    }
    ctx->pc = 0x20A23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A244u);
        ctx->pc = 0x20A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A23Cu;
        // 0x20a240: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A23Cu, 0x20A244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A244u;
label_20a244:
    // 0x20a244: 0x2604fffe  addiu       $a0, $s0, -0x2
    ctx->pc = 0x20a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_20a248:
    // 0x20a248: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x20a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20a24c:
    // 0x20a24c: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x20a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_20a250:
    // 0x20a250: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20a250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_20a254:
    // 0x20a254: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20a254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_20a258:
    // 0x20a258: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x20a258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_20a25c:
    // 0x20a25c: 0x32100007  andi        $s0, $s0, 0x7
    ctx->pc = 0x20a25cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_20a260:
    // 0x20a260: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x20a260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_20a264:
    // 0x20a264: 0x245600d0  addiu       $s6, $v0, 0xD0
    ctx->pc = 0x20a264u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_20a268:
    // 0x20a268: 0x247500d0  addiu       $s5, $v1, 0xD0
    ctx->pc = 0x20a268u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_20a26c:
    // 0x20a26c: 0x261400d0  addiu       $s4, $s0, 0xD0
    ctx->pc = 0x20a26cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_20a270:
    // 0x20a270: 0x249300d0  addiu       $s3, $a0, 0xD0
    ctx->pc = 0x20a270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_20a274:
    // 0x20a274: 0x0  nop
    ctx->pc = 0x20a274u;
    // NOP
label_20a278:
    // 0x20a278: 0x2a4200c0  slti        $v0, $s2, 0xC0
    ctx->pc = 0x20a278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)192) ? 1 : 0);
label_20a27c:
    // 0x20a27c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_20a280:
    if (ctx->pc == 0x20A280u) {
        ctx->pc = 0x20A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A27Cu;
        // 0x20a280: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A284u;
        goto label_20a284;
    }
    ctx->pc = 0x20A27Cu;
    {
        const bool branch_taken_0x20a27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A27Cu;
        // 0x20a280: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a27c) {
            ctx->pc = 0x20A2B8u;
            goto label_20a2b8;
        }
    }
    ctx->pc = 0x20A284u;
label_20a284:
    // 0x20a284: 0x2642ff30  addiu       $v0, $s2, -0xD0
    ctx->pc = 0x20a284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967088));
label_20a288:
    // 0x20a288: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x20a288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_20a28c:
    // 0x20a28c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_20a290:
    if (ctx->pc == 0x20A290u) {
        ctx->pc = 0x20A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A28Cu;
        // 0x20a290: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A294u;
        goto label_20a294;
    }
    ctx->pc = 0x20A28Cu;
    {
        const bool branch_taken_0x20a28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A28Cu;
        // 0x20a290: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a28c) {
            ctx->pc = 0x20A2B8u;
            goto label_20a2b8;
        }
    }
    ctx->pc = 0x20A294u;
label_20a294:
    // 0x20a294: 0x52560009  beql        $s2, $s6, . + 4 + (0x9 << 2)
label_20a298:
    if (ctx->pc == 0x20A298u) {
        ctx->pc = 0x20A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A294u;
        // 0x20a298: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A29Cu;
        goto label_20a29c;
    }
    ctx->pc = 0x20A294u;
    {
        const bool branch_taken_0x20a294 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        if (branch_taken_0x20a294) {
            ctx->pc = 0x20A298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A294u;
            // 0x20a298: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A2BCu;
            goto label_20a2bc;
        }
    }
    ctx->pc = 0x20A29Cu;
label_20a29c:
    // 0x20a29c: 0x52550007  beql        $s2, $s5, . + 4 + (0x7 << 2)
label_20a2a0:
    if (ctx->pc == 0x20A2A0u) {
        ctx->pc = 0x20A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A29Cu;
        // 0x20a2a0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2A4u;
        goto label_20a2a4;
    }
    ctx->pc = 0x20A29Cu;
    {
        const bool branch_taken_0x20a29c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        if (branch_taken_0x20a29c) {
            ctx->pc = 0x20A2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A29Cu;
            // 0x20a2a0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A2BCu;
            goto label_20a2bc;
        }
    }
    ctx->pc = 0x20A2A4u;
label_20a2a4:
    // 0x20a2a4: 0x12540004  beq         $s2, $s4, . + 4 + (0x4 << 2)
label_20a2a8:
    if (ctx->pc == 0x20A2A8u) {
        ctx->pc = 0x20A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2A4u;
        // 0x20a2a8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2ACu;
        goto label_20a2ac;
    }
    ctx->pc = 0x20A2A4u;
    {
        const bool branch_taken_0x20a2a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x20A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2A4u;
        // 0x20a2a8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2a4) {
            ctx->pc = 0x20A2B8u;
            goto label_20a2b8;
        }
    }
    ctx->pc = 0x20A2ACu;
label_20a2ac:
    // 0x20a2ac: 0x16530002  bne         $s2, $s3, . + 4 + (0x2 << 2)
label_20a2b0:
    if (ctx->pc == 0x20A2B0u) {
        ctx->pc = 0x20A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2ACu;
        // 0x20a2b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2B4u;
        goto label_20a2b4;
    }
    ctx->pc = 0x20A2ACu;
    {
        const bool branch_taken_0x20a2ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x20A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2ACu;
        // 0x20a2b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2ac) {
            ctx->pc = 0x20A2B8u;
            goto label_20a2b8;
        }
    }
    ctx->pc = 0x20A2B4u;
label_20a2b4:
    // 0x20a2b4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x20a2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20a2b8:
    // 0x20a2b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a2bc:
    // 0x20a2bc: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x20a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_20a2c0:
    // 0x20a2c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a2c4:
    // 0x20a2c4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_20a2c8:
    // 0x20a2c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a2cc:
    // 0x20a2cc: 0xac520018  sw          $s2, 0x18($v0)
    ctx->pc = 0x20a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 18));
label_20a2d0:
    // 0x20a2d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a2d4:
    // 0x20a2d4: 0xac70001c  sw          $s0, 0x1C($v1)
    ctx->pc = 0x20a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
label_20a2d8:
    // 0x20a2d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a2dc:
    // 0x20a2dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20a2e0:
    // 0x20a2e0: 0x60f809  jalr        $v1
label_20a2e4:
    if (ctx->pc == 0x20A2E4u) {
        ctx->pc = 0x20A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2E0u;
        // 0x20a2e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2E8u;
        goto label_20a2e8;
    }
    ctx->pc = 0x20A2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A2E8u);
        ctx->pc = 0x20A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2E0u;
        // 0x20a2e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A2E0u, 0x20A2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A2E8u;
label_20a2e8:
    // 0x20a2e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20a2ec:
    // 0x20a2ec: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_20a2f0:
    if (ctx->pc == 0x20A2F0u) {
        ctx->pc = 0x20A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2ECu;
        // 0x20a2f0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2F4u;
        goto label_20a2f4;
    }
    ctx->pc = 0x20A2ECu;
    {
        const bool branch_taken_0x20a2ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2ECu;
        // 0x20a2f0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2ec) {
            ctx->pc = 0x20A324u;
            goto label_20a324;
        }
    }
    ctx->pc = 0x20A2F4u;
label_20a2f4:
    // 0x20a2f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20a2f8:
    if (ctx->pc == 0x20A2F8u) {
        ctx->pc = 0x20A2FCu;
        goto label_20a2fc;
    }
    ctx->pc = 0x20A2F4u;
    {
        const bool branch_taken_0x20a2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a2f4) {
            ctx->pc = 0x20A30Cu;
            goto label_20a30c;
        }
    }
    ctx->pc = 0x20A2FCu;
label_20a2fc:
    // 0x20a2fc: 0x121e0007  beq         $s0, $fp, . + 4 + (0x7 << 2)
label_20a300:
    if (ctx->pc == 0x20A300u) {
        ctx->pc = 0x20A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2FCu;
        // 0x20a300: 0x2a4200c0  slti        $v0, $s2, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)192) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A304u;
        goto label_20a304;
    }
    ctx->pc = 0x20A2FCu;
    {
        const bool branch_taken_0x20a2fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        ctx->pc = 0x20A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2FCu;
        // 0x20a300: 0x2a4200c0  slti        $v0, $s2, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2fc) {
            ctx->pc = 0x20A31Cu;
            goto label_20a31c;
        }
    }
    ctx->pc = 0x20A304u;
label_20a304:
    // 0x20a304: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
label_20a308:
    if (ctx->pc == 0x20A308u) {
        ctx->pc = 0x20A30Cu;
        goto label_20a30c;
    }
    ctx->pc = 0x20A304u;
    {
        const bool branch_taken_0x20a304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a304) {
            ctx->pc = 0x20A27Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a27c;
        }
    }
    ctx->pc = 0x20A30Cu;
label_20a30c:
    // 0x20a30c: 0x1217000b  beq         $s0, $s7, . + 4 + (0xB << 2)
label_20a310:
    if (ctx->pc == 0x20A310u) {
        ctx->pc = 0x20A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A30Cu;
        // 0x20a310: 0x2a4200c0  slti        $v0, $s2, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)192) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A314u;
        goto label_20a314;
    }
    ctx->pc = 0x20A30Cu;
    {
        const bool branch_taken_0x20a30c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        ctx->pc = 0x20A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A30Cu;
        // 0x20a310: 0x2a4200c0  slti        $v0, $s2, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a30c) {
            ctx->pc = 0x20A33Cu;
            goto label_20a33c;
        }
    }
    ctx->pc = 0x20A314u;
label_20a314:
    // 0x20a314: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_20a318:
    if (ctx->pc == 0x20A318u) {
        ctx->pc = 0x20A31Cu;
        goto label_20a31c;
    }
    ctx->pc = 0x20A314u;
    {
        const bool branch_taken_0x20a314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a314) {
            ctx->pc = 0x20A27Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a27c;
        }
    }
    ctx->pc = 0x20A31Cu;
label_20a31c:
    // 0x20a31c: 0x10000007  b           . + 4 + (0x7 << 2)
label_20a320:
    if (ctx->pc == 0x20A320u) {
        ctx->pc = 0x20A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A31Cu;
        // 0x20a320: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A324u;
        goto label_20a324;
    }
    ctx->pc = 0x20A31Cu;
    {
        const bool branch_taken_0x20a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A31Cu;
        // 0x20a320: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a31c) {
            ctx->pc = 0x20A33Cu;
            goto label_20a33c;
        }
    }
    ctx->pc = 0x20A324u;
label_20a324:
    // 0x20a324: 0xc0826b4  jal         func_209AD0
label_20a328:
    if (ctx->pc == 0x20A328u) {
        ctx->pc = 0x20A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A324u;
        // 0x20a328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A32Cu;
        goto label_20a32c;
    }
    ctx->pc = 0x20A324u;
    SET_GPR_U32(ctx, 31, 0x20A32Cu);
    ctx->pc = 0x20A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A324u;
    // 0x20a328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x209AD0u, 0x20A324u, 0x20A32Cu)) {
        return;
    }
    ctx->pc = 0x20A32Cu;
label_20a32c:
    // 0x20a32c: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
label_20a330:
    if (ctx->pc == 0x20A330u) {
        ctx->pc = 0x20A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A32Cu;
        // 0x20a330: 0x8e3201a0  lw          $s2, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A334u;
        goto label_20a334;
    }
    ctx->pc = 0x20A32Cu;
    {
        const bool branch_taken_0x20a32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a32c) {
            ctx->pc = 0x20A330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A32Cu;
            // 0x20a330: 0x8e3201a0  lw          $s2, 0x1A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a278;
        }
    }
    ctx->pc = 0x20A334u;
label_20a334:
    // 0x20a334: 0x10000002  b           . + 4 + (0x2 << 2)
label_20a338:
    if (ctx->pc == 0x20A338u) {
        ctx->pc = 0x20A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A334u;
        // 0x20a338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A33Cu;
        goto label_20a33c;
    }
    ctx->pc = 0x20A334u;
    {
        const bool branch_taken_0x20a334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A334u;
        // 0x20a338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a334) {
            ctx->pc = 0x20A340u;
            goto label_20a340;
        }
    }
    ctx->pc = 0x20A33Cu;
label_20a33c:
    // 0x20a33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a340:
    // 0x20a340: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x20a340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20a344:
    // 0x20a344: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x20a344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20a348:
    // 0x20a348: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x20a348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20a34c:
    // 0x20a34c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x20a34cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20a350:
    // 0x20a350: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20a350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20a354:
    // 0x20a354: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x20a354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20a358:
    // 0x20a358: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x20a358u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20a35c:
    // 0x20a35c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x20a35cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a360:
    // 0x20a360: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x20a360u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a364:
    // 0x20a364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a368:
    // 0x20a368: 0x3e00008  jr          $ra
label_20a36c:
    if (ctx->pc == 0x20A36Cu) {
        ctx->pc = 0x20A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A368u;
        // 0x20a36c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A370u;
        goto label_20a370;
    }
    ctx->pc = 0x20A368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A368u;
        // 0x20a36c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A370u;
label_20a370:
    // 0x20a370: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20a374:
    // 0x20a374: 0x0  nop
    ctx->pc = 0x20a374u;
    // NOP
    ctx->pc = 0x20a378u;
}
