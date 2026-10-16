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

// Function: sub_0024A270
// Address: 0x24a270 - 0x24a378
void sub_0024A270_0x24a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A270_0x24a270");
#endif

    switch (ctx->pc) {
        case 0x24a270u: goto label_24a270;
        case 0x24a274u: goto label_24a274;
        case 0x24a278u: goto label_24a278;
        case 0x24a27cu: goto label_24a27c;
        case 0x24a280u: goto label_24a280;
        case 0x24a284u: goto label_24a284;
        case 0x24a288u: goto label_24a288;
        case 0x24a28cu: goto label_24a28c;
        case 0x24a290u: goto label_24a290;
        case 0x24a294u: goto label_24a294;
        case 0x24a298u: goto label_24a298;
        case 0x24a29cu: goto label_24a29c;
        case 0x24a2a0u: goto label_24a2a0;
        case 0x24a2a4u: goto label_24a2a4;
        case 0x24a2a8u: goto label_24a2a8;
        case 0x24a2acu: goto label_24a2ac;
        case 0x24a2b0u: goto label_24a2b0;
        case 0x24a2b4u: goto label_24a2b4;
        case 0x24a2b8u: goto label_24a2b8;
        case 0x24a2bcu: goto label_24a2bc;
        case 0x24a2c0u: goto label_24a2c0;
        case 0x24a2c4u: goto label_24a2c4;
        case 0x24a2c8u: goto label_24a2c8;
        case 0x24a2ccu: goto label_24a2cc;
        case 0x24a2d0u: goto label_24a2d0;
        case 0x24a2d4u: goto label_24a2d4;
        case 0x24a2d8u: goto label_24a2d8;
        case 0x24a2dcu: goto label_24a2dc;
        case 0x24a2e0u: goto label_24a2e0;
        case 0x24a2e4u: goto label_24a2e4;
        case 0x24a2e8u: goto label_24a2e8;
        case 0x24a2ecu: goto label_24a2ec;
        case 0x24a2f0u: goto label_24a2f0;
        case 0x24a2f4u: goto label_24a2f4;
        case 0x24a2f8u: goto label_24a2f8;
        case 0x24a2fcu: goto label_24a2fc;
        case 0x24a300u: goto label_24a300;
        case 0x24a304u: goto label_24a304;
        case 0x24a308u: goto label_24a308;
        case 0x24a30cu: goto label_24a30c;
        case 0x24a310u: goto label_24a310;
        case 0x24a314u: goto label_24a314;
        case 0x24a318u: goto label_24a318;
        case 0x24a31cu: goto label_24a31c;
        case 0x24a320u: goto label_24a320;
        case 0x24a324u: goto label_24a324;
        case 0x24a328u: goto label_24a328;
        case 0x24a32cu: goto label_24a32c;
        case 0x24a330u: goto label_24a330;
        case 0x24a334u: goto label_24a334;
        case 0x24a338u: goto label_24a338;
        case 0x24a33cu: goto label_24a33c;
        case 0x24a340u: goto label_24a340;
        case 0x24a344u: goto label_24a344;
        case 0x24a348u: goto label_24a348;
        case 0x24a34cu: goto label_24a34c;
        case 0x24a350u: goto label_24a350;
        case 0x24a354u: goto label_24a354;
        case 0x24a358u: goto label_24a358;
        case 0x24a35cu: goto label_24a35c;
        case 0x24a360u: goto label_24a360;
        case 0x24a364u: goto label_24a364;
        case 0x24a368u: goto label_24a368;
        case 0x24a36cu: goto label_24a36c;
        case 0x24a370u: goto label_24a370;
        case 0x24a374u: goto label_24a374;
        default: break;
    }

    ctx->pc = 0x24a270u;

label_24a270:
    // 0x24a270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24a274:
    // 0x24a274: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24a274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24a278:
    // 0x24a278: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24a27c:
    // 0x24a27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a280:
    // 0x24a280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24a284:
    // 0x24a284: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x24a284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24a288:
    // 0x24a288: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24a288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24a28c:
    // 0x24a28c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x24a28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_24a290:
    // 0x24a290: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_24a294:
    if (ctx->pc == 0x24A294u) {
        ctx->pc = 0x24A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A290u;
        // 0x24a294: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A298u;
        goto label_24a298;
    }
    ctx->pc = 0x24A290u;
    {
        const bool branch_taken_0x24a290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A290u;
        // 0x24a294: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a290) {
            ctx->pc = 0x24A344u;
            goto label_24a344;
        }
    }
    ctx->pc = 0x24A298u;
label_24a298:
    // 0x24a298: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x24a298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24a29c:
    // 0x24a29c: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x24a29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_24a2a0:
    // 0x24a2a0: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x24a2a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_24a2a4:
    // 0x24a2a4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x24a2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24a2a8:
    // 0x24a2a8: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x24a2a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
label_24a2ac:
    // 0x24a2ac: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24a2b0:
    // 0x24a2b0: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x24a2b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_24a2b4:
    // 0x24a2b4: 0x8c6210d8  lw          $v0, 0x10D8($v1)
    ctx->pc = 0x24a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
label_24a2b8:
    // 0x24a2b8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x24a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24a2bc:
    // 0x24a2bc: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x24a2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24a2c0:
    // 0x24a2c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24a2c4:
    // 0x24a2c4: 0x2812  mflo        $a1
    ctx->pc = 0x24a2c4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_24a2c8:
    // 0x24a2c8: 0x40f809  jalr        $v0
label_24a2cc:
    if (ctx->pc == 0x24A2CCu) {
        ctx->pc = 0x24A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2C8u;
        // 0x24a2cc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A2D0u;
        goto label_24a2d0;
    }
    ctx->pc = 0x24A2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A2D0u);
        ctx->pc = 0x24A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2C8u;
        // 0x24a2cc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A2C8u, 0x24A2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A2D0u;
label_24a2d0:
    // 0x24a2d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24a2d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a2d4:
    // 0x24a2d4: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_24a2d8:
    if (ctx->pc == 0x24A2D8u) {
        ctx->pc = 0x24A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2D4u;
        // 0x24a2d8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A2DCu;
        goto label_24a2dc;
    }
    ctx->pc = 0x24A2D4u;
    {
        const bool branch_taken_0x24a2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a2d4) {
            ctx->pc = 0x24A2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A2D4u;
            // 0x24a2d8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A328u;
            goto label_24a328;
        }
    }
    ctx->pc = 0x24A2DCu;
label_24a2dc:
    // 0x24a2dc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x24a2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24a2e0:
    // 0x24a2e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24a2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a2e4:
    // 0x24a2e4: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x24a2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24a2e8:
    // 0x24a2e8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24a2ec:
    // 0x24a2ec: 0x225182a  slt         $v1, $s1, $a1
    ctx->pc = 0x24a2ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_24a2f0:
    // 0x24a2f0: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x24a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_24a2f4:
    // 0x24a2f4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x24a2f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
label_24a2f8:
    // 0x24a2f8: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x24a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_24a2fc:
    // 0x24a2fc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x24a2fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_24a300:
    // 0x24a300: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24a300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24a304:
    // 0x24a304: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x24a304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24a308:
    // 0x24a308: 0x2812  mflo        $a1
    ctx->pc = 0x24a308u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_24a30c:
    // 0x24a30c: 0xc092848  jal         func_24A120
label_24a310:
    if (ctx->pc == 0x24A310u) {
        ctx->pc = 0x24A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A30Cu;
        // 0x24a310: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A314u;
        goto label_24a314;
    }
    ctx->pc = 0x24A30Cu;
    SET_GPR_U32(ctx, 31, 0x24A314u);
    ctx->pc = 0x24A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A30Cu;
    // 0x24a310: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24A30Cu, 0x24A314u)) {
        return;
    }
    ctx->pc = 0x24A314u;
label_24a314:
    // 0x24a314: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24a314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24a318:
    // 0x24a318: 0xc09281a  jal         func_24A068
label_24a31c:
    if (ctx->pc == 0x24A31Cu) {
        ctx->pc = 0x24A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A318u;
        // 0x24a31c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A320u;
        goto label_24a320;
    }
    ctx->pc = 0x24A318u;
    SET_GPR_U32(ctx, 31, 0x24A320u);
    ctx->pc = 0x24A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A318u;
    // 0x24a31c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24A318u, 0x24A320u)) {
        return;
    }
    ctx->pc = 0x24A320u;
label_24a320:
    // 0x24a320: 0x1000000f  b           . + 4 + (0xF << 2)
label_24a324:
    if (ctx->pc == 0x24A324u) {
        ctx->pc = 0x24A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A320u;
        // 0x24a324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A328u;
        goto label_24a328;
    }
    ctx->pc = 0x24A320u;
    {
        const bool branch_taken_0x24a320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A320u;
        // 0x24a324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a320) {
            ctx->pc = 0x24A360u;
            goto label_24a360;
        }
    }
    ctx->pc = 0x24A328u;
label_24a328:
    // 0x24a328: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x24a328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_24a32c:
    // 0x24a32c: 0x222202a  slt         $a0, $s1, $v0
    ctx->pc = 0x24a32cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a330:
    // 0x24a330: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x24a330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_24a334:
    // 0x24a334: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x24a334u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
label_24a338:
    // 0x24a338: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x24a338u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_24a33c:
    // 0x24a33c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a340:
    // 0x24a340: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x24a340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_24a344:
    // 0x24a344: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24a348:
    // 0x24a348: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x24a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24a34c:
    // 0x24a34c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x24a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24a350:
    // 0x24a350: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24a350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24a354:
    // 0x24a354: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x24a354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_24a358:
    // 0x24a358: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x24a358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_24a35c:
    // 0x24a35c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24a360:
    // 0x24a360: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24a360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24a364:
    // 0x24a364: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24a364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24a368:
    // 0x24a368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a36c:
    // 0x24a36c: 0x3e00008  jr          $ra
label_24a370:
    if (ctx->pc == 0x24A370u) {
        ctx->pc = 0x24A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A36Cu;
        // 0x24a370: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A374u;
        goto label_24a374;
    }
    ctx->pc = 0x24A36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A36Cu;
        // 0x24a370: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A374u;
label_24a374:
    // 0x24a374: 0x0  nop
    ctx->pc = 0x24a374u;
    // NOP
    ctx->pc = 0x24a378u;
}
