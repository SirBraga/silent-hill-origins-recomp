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

// Function: sub_002D8380
// Address: 0x2d8380 - 0x2d84a0
void sub_002D8380_0x2d8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8380_0x2d8380");
#endif

    switch (ctx->pc) {
        case 0x2d8380u: goto label_2d8380;
        case 0x2d8384u: goto label_2d8384;
        case 0x2d8388u: goto label_2d8388;
        case 0x2d838cu: goto label_2d838c;
        case 0x2d8390u: goto label_2d8390;
        case 0x2d8394u: goto label_2d8394;
        case 0x2d8398u: goto label_2d8398;
        case 0x2d839cu: goto label_2d839c;
        case 0x2d83a0u: goto label_2d83a0;
        case 0x2d83a4u: goto label_2d83a4;
        case 0x2d83a8u: goto label_2d83a8;
        case 0x2d83acu: goto label_2d83ac;
        case 0x2d83b0u: goto label_2d83b0;
        case 0x2d83b4u: goto label_2d83b4;
        case 0x2d83b8u: goto label_2d83b8;
        case 0x2d83bcu: goto label_2d83bc;
        case 0x2d83c0u: goto label_2d83c0;
        case 0x2d83c4u: goto label_2d83c4;
        case 0x2d83c8u: goto label_2d83c8;
        case 0x2d83ccu: goto label_2d83cc;
        case 0x2d83d0u: goto label_2d83d0;
        case 0x2d83d4u: goto label_2d83d4;
        case 0x2d83d8u: goto label_2d83d8;
        case 0x2d83dcu: goto label_2d83dc;
        case 0x2d83e0u: goto label_2d83e0;
        case 0x2d83e4u: goto label_2d83e4;
        case 0x2d83e8u: goto label_2d83e8;
        case 0x2d83ecu: goto label_2d83ec;
        case 0x2d83f0u: goto label_2d83f0;
        case 0x2d83f4u: goto label_2d83f4;
        case 0x2d83f8u: goto label_2d83f8;
        case 0x2d83fcu: goto label_2d83fc;
        case 0x2d8400u: goto label_2d8400;
        case 0x2d8404u: goto label_2d8404;
        case 0x2d8408u: goto label_2d8408;
        case 0x2d840cu: goto label_2d840c;
        case 0x2d8410u: goto label_2d8410;
        case 0x2d8414u: goto label_2d8414;
        case 0x2d8418u: goto label_2d8418;
        case 0x2d841cu: goto label_2d841c;
        case 0x2d8420u: goto label_2d8420;
        case 0x2d8424u: goto label_2d8424;
        case 0x2d8428u: goto label_2d8428;
        case 0x2d842cu: goto label_2d842c;
        case 0x2d8430u: goto label_2d8430;
        case 0x2d8434u: goto label_2d8434;
        case 0x2d8438u: goto label_2d8438;
        case 0x2d843cu: goto label_2d843c;
        case 0x2d8440u: goto label_2d8440;
        case 0x2d8444u: goto label_2d8444;
        case 0x2d8448u: goto label_2d8448;
        case 0x2d844cu: goto label_2d844c;
        case 0x2d8450u: goto label_2d8450;
        case 0x2d8454u: goto label_2d8454;
        case 0x2d8458u: goto label_2d8458;
        case 0x2d845cu: goto label_2d845c;
        case 0x2d8460u: goto label_2d8460;
        case 0x2d8464u: goto label_2d8464;
        case 0x2d8468u: goto label_2d8468;
        case 0x2d846cu: goto label_2d846c;
        case 0x2d8470u: goto label_2d8470;
        case 0x2d8474u: goto label_2d8474;
        case 0x2d8478u: goto label_2d8478;
        case 0x2d847cu: goto label_2d847c;
        case 0x2d8480u: goto label_2d8480;
        case 0x2d8484u: goto label_2d8484;
        case 0x2d8488u: goto label_2d8488;
        case 0x2d848cu: goto label_2d848c;
        case 0x2d8490u: goto label_2d8490;
        case 0x2d8494u: goto label_2d8494;
        case 0x2d8498u: goto label_2d8498;
        case 0x2d849cu: goto label_2d849c;
        default: break;
    }

    ctx->pc = 0x2d8380u;

label_2d8380:
    // 0x2d8380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d8380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d8384:
    // 0x2d8384: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d8384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d8388:
    // 0x2d8388: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d8388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d838c:
    // 0x2d838c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d838cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8390:
    // 0x2d8390: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d8390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2d8394:
    // 0x2d8394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d8398:
    // 0x2d8398: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d8398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d839c:
    // 0x2d839c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d83a0:
    // 0x2d83a0: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_2d83a4:
    if (ctx->pc == 0x2D83A4u) {
        ctx->pc = 0x2D83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83A0u;
        // 0x2d83a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D83A8u;
        goto label_2d83a8;
    }
    ctx->pc = 0x2D83A0u;
    {
        const bool branch_taken_0x2d83a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83A0u;
        // 0x2d83a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83a0) {
            ctx->pc = 0x2D8444u;
            goto label_2d8444;
        }
    }
    ctx->pc = 0x2D83A8u;
label_2d83a8:
    // 0x2d83a8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2d83a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2d83ac:
    // 0x2d83ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2d83b0:
    if (ctx->pc == 0x2D83B0u) {
        ctx->pc = 0x2D83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83ACu;
        // 0x2d83b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D83B4u;
        goto label_2d83b4;
    }
    ctx->pc = 0x2D83ACu;
    {
        const bool branch_taken_0x2d83ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83ACu;
        // 0x2d83b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83ac) {
            ctx->pc = 0x2D83D8u;
            goto label_2d83d8;
        }
    }
    ctx->pc = 0x2D83B4u;
label_2d83b4:
    // 0x2d83b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d83b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d83b8:
    // 0x2d83b8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2d83b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2d83bc:
    // 0x2d83bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d83bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d83c0:
    // 0x2d83c0: 0xc0acb5a  jal         func_2B2D68
label_2d83c4:
    if (ctx->pc == 0x2D83C4u) {
        ctx->pc = 0x2D83C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83C0u;
        // 0x2d83c4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D83C8u;
        goto label_2d83c8;
    }
    ctx->pc = 0x2D83C0u;
    SET_GPR_U32(ctx, 31, 0x2D83C8u);
    ctx->pc = 0x2D83C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D83C0u;
    // 0x2d83c4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2D68u, 0x2D83C0u, 0x2D83C8u)) {
        return;
    }
    ctx->pc = 0x2D83C8u;
label_2d83c8:
    // 0x2d83c8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2d83c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2d83cc:
    // 0x2d83cc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d83ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d83d0:
    // 0x2d83d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2d83d4:
    if (ctx->pc == 0x2D83D4u) {
        ctx->pc = 0x2D83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83D0u;
        // 0x2d83d4: 0x2652004c  addiu       $s2, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D83D8u;
        goto label_2d83d8;
    }
    ctx->pc = 0x2D83D0u;
    {
        const bool branch_taken_0x2d83d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83D0u;
        // 0x2d83d4: 0x2652004c  addiu       $s2, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83d0) {
            ctx->pc = 0x2D83B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d83b8;
        }
    }
    ctx->pc = 0x2D83D8u;
label_2d83d8:
    // 0x2d83d8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2d83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2d83dc:
    // 0x2d83dc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d83dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d83e0:
    // 0x2d83e0: 0xc0ad2d0  jal         func_2B4B40
label_2d83e4:
    if (ctx->pc == 0x2D83E4u) {
        ctx->pc = 0x2D83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83E0u;
        // 0x2d83e4: 0x24510fc8  addiu       $s1, $v0, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D83E8u;
        goto label_2d83e8;
    }
    ctx->pc = 0x2D83E0u;
    SET_GPR_U32(ctx, 31, 0x2D83E8u);
    ctx->pc = 0x2D83E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D83E0u;
    // 0x2d83e4: 0x24510fc8  addiu       $s1, $v0, 0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2D83E0u, 0x2D83E8u)) {
        return;
    }
    ctx->pc = 0x2D83E8u;
label_2d83e8:
    // 0x2d83e8: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d83ec:
    // 0x2d83ec: 0x40f809  jalr        $v0
label_2d83f0:
    if (ctx->pc == 0x2D83F0u) {
        ctx->pc = 0x2D83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83ECu;
        // 0x2d83f0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D83F4u;
        goto label_2d83f4;
    }
    ctx->pc = 0x2D83ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D83F4u);
        ctx->pc = 0x2D83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83ECu;
        // 0x2d83f0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D83ECu, 0x2D83F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D83F4u;
label_2d83f4:
    // 0x2d83f4: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d83f8:
    // 0x2d83f8: 0x40f809  jalr        $v0
label_2d83fc:
    if (ctx->pc == 0x2D83FCu) {
        ctx->pc = 0x2D83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83F8u;
        // 0x2d83fc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8400u;
        goto label_2d8400;
    }
    ctx->pc = 0x2D83F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8400u);
        ctx->pc = 0x2D83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83F8u;
        // 0x2d83fc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D83F8u, 0x2D8400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8400u;
label_2d8400:
    // 0x2d8400: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d8400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d8404:
    // 0x2d8404: 0x40f809  jalr        $v0
label_2d8408:
    if (ctx->pc == 0x2D8408u) {
        ctx->pc = 0x2D8408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8404u;
        // 0x2d8408: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D840Cu;
        goto label_2d840c;
    }
    ctx->pc = 0x2D8404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D840Cu);
        ctx->pc = 0x2D8408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8404u;
        // 0x2d8408: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8404u, 0x2D840Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D840Cu;
label_2d840c:
    // 0x2d840c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d8410:
    // 0x2d8410: 0x40f809  jalr        $v0
label_2d8414:
    if (ctx->pc == 0x2D8414u) {
        ctx->pc = 0x2D8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8410u;
        // 0x2d8414: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8418u;
        goto label_2d8418;
    }
    ctx->pc = 0x2D8410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8418u);
        ctx->pc = 0x2D8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8410u;
        // 0x2d8414: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8410u, 0x2D8418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8418u;
label_2d8418:
    // 0x2d8418: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d8418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d841c:
    // 0x2d841c: 0x40f809  jalr        $v0
label_2d8420:
    if (ctx->pc == 0x2D8420u) {
        ctx->pc = 0x2D8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D841Cu;
        // 0x2d8420: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8424u;
        goto label_2d8424;
    }
    ctx->pc = 0x2D841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8424u);
        ctx->pc = 0x2D8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D841Cu;
        // 0x2d8420: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D841Cu, 0x2D8424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8424u;
label_2d8424:
    // 0x2d8424: 0xc0ad286  jal         func_2B4A18
label_2d8428:
    if (ctx->pc == 0x2D8428u) {
        ctx->pc = 0x2D8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8424u;
        // 0x2d8428: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D842Cu;
        goto label_2d842c;
    }
    ctx->pc = 0x2D8424u;
    SET_GPR_U32(ctx, 31, 0x2D842Cu);
    ctx->pc = 0x2D8428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8424u;
    // 0x2d8428: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A18u, 0x2D8424u, 0x2D842Cu)) {
        return;
    }
    ctx->pc = 0x2D842Cu;
label_2d842c:
    // 0x2d842c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2d842cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2d8430:
    // 0x2d8430: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2d8434:
    if (ctx->pc == 0x2D8434u) {
        ctx->pc = 0x2D8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8430u;
        // 0x2d8434: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8438u;
        goto label_2d8438;
    }
    ctx->pc = 0x2D8430u;
    {
        const bool branch_taken_0x2d8430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8430u;
        // 0x2d8434: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8430) {
            ctx->pc = 0x2D8448u;
            goto label_2d8448;
        }
    }
    ctx->pc = 0x2D8438u;
label_2d8438:
    // 0x2d8438: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d8438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d843c:
    // 0x2d843c: 0x40f809  jalr        $v0
label_2d8440:
    if (ctx->pc == 0x2D8440u) {
        ctx->pc = 0x2D8444u;
        goto label_2d8444;
    }
    ctx->pc = 0x2D843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8444u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D843Cu, 0x2D8444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8444u;
label_2d8444:
    // 0x2d8444: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d8444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d8448:
    // 0x2d8448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d844c:
    // 0x2d844c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d844cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8450:
    // 0x2d8450: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d8450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8454:
    // 0x2d8454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8458:
    // 0x2d8458: 0x3e00008  jr          $ra
label_2d845c:
    if (ctx->pc == 0x2D845Cu) {
        ctx->pc = 0x2D845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8458u;
        // 0x2d845c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8460u;
        goto label_2d8460;
    }
    ctx->pc = 0x2D8458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8458u;
        // 0x2d845c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8460u;
label_2d8460:
    // 0x2d8460: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d8460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d8464:
    // 0x2d8464: 0x0  nop
    ctx->pc = 0x2d8464u;
    // NOP
label_2d8468:
    // 0x2d8468: 0xa4450008  sh          $a1, 0x8($v0)
    ctx->pc = 0x2d8468u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 5));
label_2d846c:
    // 0x2d846c: 0x0  nop
    ctx->pc = 0x2d846cu;
    // NOP
label_2d8470:
    // 0x2d8470: 0xa445000a  sh          $a1, 0xA($v0)
    ctx->pc = 0x2d8470u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 5));
label_2d8474:
    // 0x2d8474: 0x0  nop
    ctx->pc = 0x2d8474u;
    // NOP
label_2d8478:
    // 0x2d8478: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x2d8478u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
label_2d847c:
    // 0x2d847c: 0x0  nop
    ctx->pc = 0x2d847cu;
    // NOP
label_2d8480:
    // 0x2d8480: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d8480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2d8484:
    // 0x2d8484: 0x0  nop
    ctx->pc = 0x2d8484u;
    // NOP
label_2d8488:
    // 0x2d8488: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d8488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2d848c:
    // 0x2d848c: 0x0  nop
    ctx->pc = 0x2d848cu;
    // NOP
label_2d8490:
    // 0x2d8490: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d8490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8494:
    // 0x2d8494: 0x0  nop
    ctx->pc = 0x2d8494u;
    // NOP
label_2d8498:
    // 0x2d8498: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d8498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2d849c:
    // 0x2d849c: 0x0  nop
    ctx->pc = 0x2d849cu;
    // NOP
    ctx->pc = 0x2d84a0u;
}
