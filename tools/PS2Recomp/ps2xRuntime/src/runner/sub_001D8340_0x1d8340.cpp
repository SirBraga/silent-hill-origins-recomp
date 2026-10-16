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

// Function: sub_001D8340
// Address: 0x1d8340 - 0x1d8458
void sub_001D8340_0x1d8340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8340_0x1d8340");
#endif

    switch (ctx->pc) {
        case 0x1d8340u: goto label_1d8340;
        case 0x1d8344u: goto label_1d8344;
        case 0x1d8348u: goto label_1d8348;
        case 0x1d834cu: goto label_1d834c;
        case 0x1d8350u: goto label_1d8350;
        case 0x1d8354u: goto label_1d8354;
        case 0x1d8358u: goto label_1d8358;
        case 0x1d835cu: goto label_1d835c;
        case 0x1d8360u: goto label_1d8360;
        case 0x1d8364u: goto label_1d8364;
        case 0x1d8368u: goto label_1d8368;
        case 0x1d836cu: goto label_1d836c;
        case 0x1d8370u: goto label_1d8370;
        case 0x1d8374u: goto label_1d8374;
        case 0x1d8378u: goto label_1d8378;
        case 0x1d837cu: goto label_1d837c;
        case 0x1d8380u: goto label_1d8380;
        case 0x1d8384u: goto label_1d8384;
        case 0x1d8388u: goto label_1d8388;
        case 0x1d838cu: goto label_1d838c;
        case 0x1d8390u: goto label_1d8390;
        case 0x1d8394u: goto label_1d8394;
        case 0x1d8398u: goto label_1d8398;
        case 0x1d839cu: goto label_1d839c;
        case 0x1d83a0u: goto label_1d83a0;
        case 0x1d83a4u: goto label_1d83a4;
        case 0x1d83a8u: goto label_1d83a8;
        case 0x1d83acu: goto label_1d83ac;
        case 0x1d83b0u: goto label_1d83b0;
        case 0x1d83b4u: goto label_1d83b4;
        case 0x1d83b8u: goto label_1d83b8;
        case 0x1d83bcu: goto label_1d83bc;
        case 0x1d83c0u: goto label_1d83c0;
        case 0x1d83c4u: goto label_1d83c4;
        case 0x1d83c8u: goto label_1d83c8;
        case 0x1d83ccu: goto label_1d83cc;
        case 0x1d83d0u: goto label_1d83d0;
        case 0x1d83d4u: goto label_1d83d4;
        case 0x1d83d8u: goto label_1d83d8;
        case 0x1d83dcu: goto label_1d83dc;
        case 0x1d83e0u: goto label_1d83e0;
        case 0x1d83e4u: goto label_1d83e4;
        case 0x1d83e8u: goto label_1d83e8;
        case 0x1d83ecu: goto label_1d83ec;
        case 0x1d83f0u: goto label_1d83f0;
        case 0x1d83f4u: goto label_1d83f4;
        case 0x1d83f8u: goto label_1d83f8;
        case 0x1d83fcu: goto label_1d83fc;
        case 0x1d8400u: goto label_1d8400;
        case 0x1d8404u: goto label_1d8404;
        case 0x1d8408u: goto label_1d8408;
        case 0x1d840cu: goto label_1d840c;
        case 0x1d8410u: goto label_1d8410;
        case 0x1d8414u: goto label_1d8414;
        case 0x1d8418u: goto label_1d8418;
        case 0x1d841cu: goto label_1d841c;
        case 0x1d8420u: goto label_1d8420;
        case 0x1d8424u: goto label_1d8424;
        case 0x1d8428u: goto label_1d8428;
        case 0x1d842cu: goto label_1d842c;
        case 0x1d8430u: goto label_1d8430;
        case 0x1d8434u: goto label_1d8434;
        case 0x1d8438u: goto label_1d8438;
        case 0x1d843cu: goto label_1d843c;
        case 0x1d8440u: goto label_1d8440;
        case 0x1d8444u: goto label_1d8444;
        case 0x1d8448u: goto label_1d8448;
        case 0x1d844cu: goto label_1d844c;
        case 0x1d8450u: goto label_1d8450;
        case 0x1d8454u: goto label_1d8454;
        default: break;
    }

    ctx->pc = 0x1d8340u;

label_1d8340:
    // 0x1d8340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d8344:
    // 0x1d8344: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1d8344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d8348:
    // 0x1d8348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d8348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d834c:
    // 0x1d834c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d834cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d8350:
    // 0x1d8350: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1d8350u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1d8354:
    // 0x1d8354: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1d8354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1d8358:
    // 0x1d8358: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d8358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d835c:
    // 0x1d835c: 0x40f809  jalr        $v0
label_1d8360:
    if (ctx->pc == 0x1D8360u) {
        ctx->pc = 0x1D8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D835Cu;
        // 0x1d8360: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8364u;
        goto label_1d8364;
    }
    ctx->pc = 0x1D835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8364u);
        ctx->pc = 0x1D8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D835Cu;
        // 0x1d8360: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D835Cu, 0x1D8364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8364u;
label_1d8364:
    // 0x1d8364: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d8364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d8368:
    // 0x1d8368: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1d8368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d836c:
    // 0x1d836c: 0x40f809  jalr        $v0
label_1d8370:
    if (ctx->pc == 0x1D8370u) {
        ctx->pc = 0x1D8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D836Cu;
        // 0x1d8370: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8374u;
        goto label_1d8374;
    }
    ctx->pc = 0x1D836Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8374u);
        ctx->pc = 0x1D8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D836Cu;
        // 0x1d8370: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D836Cu, 0x1D8374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8374u;
label_1d8374:
    // 0x1d8374: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d8374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d8378:
    // 0x1d8378: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d8378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d837c:
    // 0x1d837c: 0xc08c4aa  jal         func_2312A8
label_1d8380:
    if (ctx->pc == 0x1D8380u) {
        ctx->pc = 0x1D8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D837Cu;
        // 0x1d8380: 0x8c6589bc  lw          $a1, -0x7644($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937020)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8384u;
        goto label_1d8384;
    }
    ctx->pc = 0x1D837Cu;
    SET_GPR_U32(ctx, 31, 0x1D8384u);
    ctx->pc = 0x1D8380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D837Cu;
    // 0x1d8380: 0x8c6589bc  lw          $a1, -0x7644($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937020)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1D837Cu, 0x1D8384u)) {
        return;
    }
    ctx->pc = 0x1D8384u;
label_1d8384:
    // 0x1d8384: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d8384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d8388:
    // 0x1d8388: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d8388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d838c:
    // 0x1d838c: 0xc08c4aa  jal         func_2312A8
label_1d8390:
    if (ctx->pc == 0x1D8390u) {
        ctx->pc = 0x1D8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D838Cu;
        // 0x1d8390: 0x8c6589c0  lw          $a1, -0x7640($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937024)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8394u;
        goto label_1d8394;
    }
    ctx->pc = 0x1D838Cu;
    SET_GPR_U32(ctx, 31, 0x1D8394u);
    ctx->pc = 0x1D8390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D838Cu;
    // 0x1d8390: 0x8c6589c0  lw          $a1, -0x7640($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1D838Cu, 0x1D8394u)) {
        return;
    }
    ctx->pc = 0x1D8394u;
label_1d8394:
    // 0x1d8394: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d8394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d8398:
    // 0x1d8398: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1d8398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d839c:
    // 0x1d839c: 0x40f809  jalr        $v0
label_1d83a0:
    if (ctx->pc == 0x1D83A0u) {
        ctx->pc = 0x1D83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D839Cu;
        // 0x1d83a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83A4u;
        goto label_1d83a4;
    }
    ctx->pc = 0x1D839Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D83A4u);
        ctx->pc = 0x1D83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D839Cu;
        // 0x1d83a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D839Cu, 0x1D83A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D83A4u;
label_1d83a4:
    // 0x1d83a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d83a8:
    // 0x1d83a8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d83ac:
    // 0x1d83ac: 0x40f809  jalr        $v0
label_1d83b0:
    if (ctx->pc == 0x1D83B0u) {
        ctx->pc = 0x1D83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83ACu;
        // 0x1d83b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83B4u;
        goto label_1d83b4;
    }
    ctx->pc = 0x1D83ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D83B4u);
        ctx->pc = 0x1D83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83ACu;
        // 0x1d83b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83ACu, 0x1D83B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D83B4u;
label_1d83b4:
    // 0x1d83b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d83b8:
    // 0x1d83b8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1d83b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d83bc:
    // 0x1d83bc: 0x40f809  jalr        $v0
label_1d83c0:
    if (ctx->pc == 0x1D83C0u) {
        ctx->pc = 0x1D83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83BCu;
        // 0x1d83c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83C4u;
        goto label_1d83c4;
    }
    ctx->pc = 0x1D83BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D83C4u);
        ctx->pc = 0x1D83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83BCu;
        // 0x1d83c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83BCu, 0x1D83C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D83C4u;
label_1d83c4:
    // 0x1d83c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d83c8:
    // 0x1d83c8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1d83c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d83cc:
    // 0x1d83cc: 0x40f809  jalr        $v0
label_1d83d0:
    if (ctx->pc == 0x1D83D0u) {
        ctx->pc = 0x1D83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83CCu;
        // 0x1d83d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83D4u;
        goto label_1d83d4;
    }
    ctx->pc = 0x1D83CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D83D4u);
        ctx->pc = 0x1D83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83CCu;
        // 0x1d83d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83CCu, 0x1D83D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D83D4u;
label_1d83d4:
    // 0x1d83d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d83d8:
    // 0x1d83d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1d83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d83dc:
    // 0x1d83dc: 0x40f809  jalr        $v0
label_1d83e0:
    if (ctx->pc == 0x1D83E0u) {
        ctx->pc = 0x1D83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83DCu;
        // 0x1d83e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83E4u;
        goto label_1d83e4;
    }
    ctx->pc = 0x1D83DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D83E4u);
        ctx->pc = 0x1D83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83DCu;
        // 0x1d83e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83DCu, 0x1D83E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D83E4u;
label_1d83e4:
    // 0x1d83e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d83e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d83e8:
    // 0x1d83e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d83e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d83ec:
    // 0x1d83ec: 0x40f809  jalr        $v0
label_1d83f0:
    if (ctx->pc == 0x1D83F0u) {
        ctx->pc = 0x1D83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83ECu;
        // 0x1d83f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83F4u;
        goto label_1d83f4;
    }
    ctx->pc = 0x1D83ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D83F4u);
        ctx->pc = 0x1D83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83ECu;
        // 0x1d83f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83ECu, 0x1D83F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D83F4u;
label_1d83f4:
    // 0x1d83f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d83f8:
    // 0x1d83f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d83f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d83fc:
    // 0x1d83fc: 0x40f809  jalr        $v0
label_1d8400:
    if (ctx->pc == 0x1D8400u) {
        ctx->pc = 0x1D8400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83FCu;
        // 0x1d8400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8404u;
        goto label_1d8404;
    }
    ctx->pc = 0x1D83FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8404u);
        ctx->pc = 0x1D8400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83FCu;
        // 0x1d8400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83FCu, 0x1D8404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8404u;
label_1d8404:
    // 0x1d8404: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d8404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d8408:
    // 0x1d8408: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d8408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d840c:
    // 0x1d840c: 0x40f809  jalr        $v0
label_1d8410:
    if (ctx->pc == 0x1D8410u) {
        ctx->pc = 0x1D8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D840Cu;
        // 0x1d8410: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8414u;
        goto label_1d8414;
    }
    ctx->pc = 0x1D840Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8414u);
        ctx->pc = 0x1D8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D840Cu;
        // 0x1d8410: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D840Cu, 0x1D8414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8414u;
label_1d8414:
    // 0x1d8414: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d8414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d8418:
    // 0x1d8418: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d8418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d841c:
    // 0x1d841c: 0x40f809  jalr        $v0
label_1d8420:
    if (ctx->pc == 0x1D8420u) {
        ctx->pc = 0x1D8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D841Cu;
        // 0x1d8420: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8424u;
        goto label_1d8424;
    }
    ctx->pc = 0x1D841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8424u);
        ctx->pc = 0x1D8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D841Cu;
        // 0x1d8420: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D841Cu, 0x1D8424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8424u;
label_1d8424:
    // 0x1d8424: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d8424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d8428:
    // 0x1d8428: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d8428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1d842c:
    // 0x1d842c: 0x40f809  jalr        $v0
label_1d8430:
    if (ctx->pc == 0x1D8430u) {
        ctx->pc = 0x1D8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D842Cu;
        // 0x1d8430: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8434u;
        goto label_1d8434;
    }
    ctx->pc = 0x1D842Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8434u);
        ctx->pc = 0x1D8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D842Cu;
        // 0x1d8430: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D842Cu, 0x1D8434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8434u;
label_1d8434:
    // 0x1d8434: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d8434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d8438:
    // 0x1d8438: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1d8438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d843c:
    // 0x1d843c: 0x40f809  jalr        $v0
label_1d8440:
    if (ctx->pc == 0x1D8440u) {
        ctx->pc = 0x1D8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D843Cu;
        // 0x1d8440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8444u;
        goto label_1d8444;
    }
    ctx->pc = 0x1D843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8444u);
        ctx->pc = 0x1D8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D843Cu;
        // 0x1d8440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D843Cu, 0x1D8444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8444u;
label_1d8444:
    // 0x1d8444: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d8444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8448:
    // 0x1d8448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d844c:
    // 0x1d844c: 0x3e00008  jr          $ra
label_1d8450:
    if (ctx->pc == 0x1D8450u) {
        ctx->pc = 0x1D8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D844Cu;
        // 0x1d8450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8454u;
        goto label_1d8454;
    }
    ctx->pc = 0x1D844Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D844Cu;
        // 0x1d8450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D844Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8454u;
label_1d8454:
    // 0x1d8454: 0x0  nop
    ctx->pc = 0x1d8454u;
    // NOP
    ctx->pc = 0x1d8458u;
}
