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

// Function: sub_00234408
// Address: 0x234408 - 0x2344a0
void sub_00234408_0x234408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234408_0x234408");
#endif

    switch (ctx->pc) {
        case 0x234408u: goto label_234408;
        case 0x23440cu: goto label_23440c;
        case 0x234410u: goto label_234410;
        case 0x234414u: goto label_234414;
        case 0x234418u: goto label_234418;
        case 0x23441cu: goto label_23441c;
        case 0x234420u: goto label_234420;
        case 0x234424u: goto label_234424;
        case 0x234428u: goto label_234428;
        case 0x23442cu: goto label_23442c;
        case 0x234430u: goto label_234430;
        case 0x234434u: goto label_234434;
        case 0x234438u: goto label_234438;
        case 0x23443cu: goto label_23443c;
        case 0x234440u: goto label_234440;
        case 0x234444u: goto label_234444;
        case 0x234448u: goto label_234448;
        case 0x23444cu: goto label_23444c;
        case 0x234450u: goto label_234450;
        case 0x234454u: goto label_234454;
        case 0x234458u: goto label_234458;
        case 0x23445cu: goto label_23445c;
        case 0x234460u: goto label_234460;
        case 0x234464u: goto label_234464;
        case 0x234468u: goto label_234468;
        case 0x23446cu: goto label_23446c;
        case 0x234470u: goto label_234470;
        case 0x234474u: goto label_234474;
        case 0x234478u: goto label_234478;
        case 0x23447cu: goto label_23447c;
        case 0x234480u: goto label_234480;
        case 0x234484u: goto label_234484;
        case 0x234488u: goto label_234488;
        case 0x23448cu: goto label_23448c;
        case 0x234490u: goto label_234490;
        case 0x234494u: goto label_234494;
        case 0x234498u: goto label_234498;
        case 0x23449cu: goto label_23449c;
        default: break;
    }

    ctx->pc = 0x234408u;

label_234408:
    // 0x234408: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x234408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23440c:
    // 0x23440c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x23440cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_234410:
    // 0x234410: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x234410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234414:
    // 0x234414: 0x2d22003b  sltiu       $v0, $t1, 0x3B
    ctx->pc = 0x234414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_234418:
    // 0x234418: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_23441c:
    if (ctx->pc == 0x23441Cu) {
        ctx->pc = 0x23441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234418u;
        // 0x23441c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234420u;
        goto label_234420;
    }
    ctx->pc = 0x234418u;
    {
        const bool branch_taken_0x234418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234418u;
        // 0x23441c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234418) {
            ctx->pc = 0x234458u;
            goto label_234458;
        }
    }
    ctx->pc = 0x234420u;
label_234420:
    // 0x234420: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x234420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
label_234424:
    // 0x234424: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x234424u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_234428:
    // 0x234428: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x234428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_23442c:
    // 0x23442c: 0x2463adb0  addiu       $v1, $v1, -0x5250
    ctx->pc = 0x23442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946224));
label_234430:
    // 0x234430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_234434:
    // 0x234434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234438:
    // 0x234438: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x234438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23443c:
    // 0x23443c: 0x800008  jr          $a0
label_234440:
    if (ctx->pc == 0x234440u) {
        ctx->pc = 0x234444u;
        goto label_234444;
    }
    ctx->pc = 0x23443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23443Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x234444u;
label_234444:
    // 0x234444: 0x10000004  b           . + 4 + (0x4 << 2)
label_234448:
    if (ctx->pc == 0x234448u) {
        ctx->pc = 0x234448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234444u;
        // 0x234448: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23444Cu;
        goto label_23444c;
    }
    ctx->pc = 0x234444u;
    {
        const bool branch_taken_0x234444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234444u;
        // 0x234448: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234444) {
            ctx->pc = 0x234458u;
            goto label_234458;
        }
    }
    ctx->pc = 0x23444Cu;
label_23444c:
    // 0x23444c: 0x10000002  b           . + 4 + (0x2 << 2)
label_234450:
    if (ctx->pc == 0x234450u) {
        ctx->pc = 0x234450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23444Cu;
        // 0x234450: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234454u;
        goto label_234454;
    }
    ctx->pc = 0x23444Cu;
    {
        const bool branch_taken_0x23444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23444Cu;
        // 0x234450: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23444c) {
            ctx->pc = 0x234458u;
            goto label_234458;
        }
    }
    ctx->pc = 0x234454u;
label_234454:
    // 0x234454: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x234454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_234458:
    // 0x234458: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x234458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_23445c:
    // 0x23445c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_234460:
    if (ctx->pc == 0x234460u) {
        ctx->pc = 0x234460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23445Cu;
        // 0x234460: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234464u;
        goto label_234464;
    }
    ctx->pc = 0x23445Cu;
    {
        const bool branch_taken_0x23445c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23445Cu;
        // 0x234460: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23445c) {
            ctx->pc = 0x234474u;
            goto label_234474;
        }
    }
    ctx->pc = 0x234464u;
label_234464:
    // 0x234464: 0x15220004  bne         $t1, $v0, . + 4 + (0x4 << 2)
label_234468:
    if (ctx->pc == 0x234468u) {
        ctx->pc = 0x234468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234464u;
        // 0x234468: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23446Cu;
        goto label_23446c;
    }
    ctx->pc = 0x234464u;
    {
        const bool branch_taken_0x234464 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x234468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234464u;
        // 0x234468: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234464) {
            ctx->pc = 0x234478u;
            goto label_234478;
        }
    }
    ctx->pc = 0x23446Cu;
label_23446c:
    // 0x23446c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x23446cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_234470:
    // 0x234470: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x234470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_234474:
    // 0x234474: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x234474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_234478:
    // 0x234478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23447c:
    if (ctx->pc == 0x23447Cu) {
        ctx->pc = 0x23447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234478u;
        // 0x23447c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234480u;
        goto label_234480;
    }
    ctx->pc = 0x234478u;
    {
        const bool branch_taken_0x234478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234478u;
        // 0x23447c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234478) {
            ctx->pc = 0x234490u;
            goto label_234490;
        }
    }
    ctx->pc = 0x234480u;
label_234480:
    // 0x234480: 0x55220004  bnel        $t1, $v0, . + 4 + (0x4 << 2)
label_234484:
    if (ctx->pc == 0x234484u) {
        ctx->pc = 0x234484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234480u;
        // 0x234484: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234488u;
        goto label_234488;
    }
    ctx->pc = 0x234480u;
    {
        const bool branch_taken_0x234480 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x234480) {
            ctx->pc = 0x234484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234480u;
            // 0x234484: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234494u;
            goto label_234494;
        }
    }
    ctx->pc = 0x234488u;
label_234488:
    // 0x234488: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x234488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23448c:
    // 0x23448c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x23448cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_234490:
    // 0x234490: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x234490u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
label_234494:
    // 0x234494: 0x3e00008  jr          $ra
label_234498:
    if (ctx->pc == 0x234498u) {
        ctx->pc = 0x234498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234494u;
        // 0x234498: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23449Cu;
        goto label_23449c;
    }
    ctx->pc = 0x234494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234494u;
        // 0x234498: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23449Cu;
label_23449c:
    // 0x23449c: 0x0  nop
    ctx->pc = 0x23449cu;
    // NOP
    ctx->pc = 0x2344a0u;
}
