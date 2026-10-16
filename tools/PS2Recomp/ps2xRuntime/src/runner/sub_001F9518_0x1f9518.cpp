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

// Function: sub_001F9518
// Address: 0x1f9518 - 0x1f9588
void sub_001F9518_0x1f9518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9518_0x1f9518");
#endif

    switch (ctx->pc) {
        case 0x1f9518u: goto label_1f9518;
        case 0x1f951cu: goto label_1f951c;
        case 0x1f9520u: goto label_1f9520;
        case 0x1f9524u: goto label_1f9524;
        case 0x1f9528u: goto label_1f9528;
        case 0x1f952cu: goto label_1f952c;
        case 0x1f9530u: goto label_1f9530;
        case 0x1f9534u: goto label_1f9534;
        case 0x1f9538u: goto label_1f9538;
        case 0x1f953cu: goto label_1f953c;
        case 0x1f9540u: goto label_1f9540;
        case 0x1f9544u: goto label_1f9544;
        case 0x1f9548u: goto label_1f9548;
        case 0x1f954cu: goto label_1f954c;
        case 0x1f9550u: goto label_1f9550;
        case 0x1f9554u: goto label_1f9554;
        case 0x1f9558u: goto label_1f9558;
        case 0x1f955cu: goto label_1f955c;
        case 0x1f9560u: goto label_1f9560;
        case 0x1f9564u: goto label_1f9564;
        case 0x1f9568u: goto label_1f9568;
        case 0x1f956cu: goto label_1f956c;
        case 0x1f9570u: goto label_1f9570;
        case 0x1f9574u: goto label_1f9574;
        case 0x1f9578u: goto label_1f9578;
        case 0x1f957cu: goto label_1f957c;
        case 0x1f9580u: goto label_1f9580;
        case 0x1f9584u: goto label_1f9584;
        default: break;
    }

    ctx->pc = 0x1f9518u;

label_1f9518:
    // 0x1f9518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f951c:
    // 0x1f951c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f9520:
    // 0x1f9520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f9524:
    // 0x1f9524: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_1f9528:
    if (ctx->pc == 0x1F9528u) {
        ctx->pc = 0x1F9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9524u;
        // 0x1f9528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F952Cu;
        goto label_1f952c;
    }
    ctx->pc = 0x1F9524u;
    {
        const bool branch_taken_0x1f9524 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9524u;
        // 0x1f9528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9524) {
            ctx->pc = 0x1F953Cu;
            goto label_1f953c;
        }
    }
    ctx->pc = 0x1F952Cu;
label_1f952c:
    // 0x1f952c: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x1f952cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_1f9530:
    // 0x1f9530: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f9530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f9534:
    // 0x1f9534: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1f9538:
    if (ctx->pc == 0x1F9538u) {
        ctx->pc = 0x1F9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9534u;
        // 0x1f9538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F953Cu;
        goto label_1f953c;
    }
    ctx->pc = 0x1F9534u;
    {
        const bool branch_taken_0x1f9534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9534u;
        // 0x1f9538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9534) {
            ctx->pc = 0x1F9574u;
            goto label_1f9574;
        }
    }
    ctx->pc = 0x1F953Cu;
label_1f953c:
    // 0x1f953c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f9540:
    // 0x1f9540: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f9540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1f9544:
    // 0x1f9544: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_1f9548:
    if (ctx->pc == 0x1F9548u) {
        ctx->pc = 0x1F954Cu;
        goto label_1f954c;
    }
    ctx->pc = 0x1F9544u;
    {
        const bool branch_taken_0x1f9544 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f9544) {
            ctx->pc = 0x1F9554u;
            goto label_1f9554;
        }
    }
    ctx->pc = 0x1F954Cu;
label_1f954c:
    // 0x1f954c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f9550:
    if (ctx->pc == 0x1F9550u) {
        ctx->pc = 0x1F9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F954Cu;
        // 0x1f9550: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9554u;
        goto label_1f9554;
    }
    ctx->pc = 0x1F954Cu;
    {
        const bool branch_taken_0x1f954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F954Cu;
        // 0x1f9550: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f954c) {
            ctx->pc = 0x1F9574u;
            goto label_1f9574;
        }
    }
    ctx->pc = 0x1F9554u;
label_1f9554:
    // 0x1f9554: 0xa0f809  jalr        $a1
label_1f9558:
    if (ctx->pc == 0x1F9558u) {
        ctx->pc = 0x1F955Cu;
        goto label_1f955c;
    }
    ctx->pc = 0x1F9554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F955Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9554u, 0x1F955Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F955Cu;
label_1f955c:
    // 0x1f955c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1f955cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f9560:
    // 0x1f9560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9564:
    // 0x1f9564: 0xc07ec9e  jal         func_1FB278
label_1f9568:
    if (ctx->pc == 0x1F9568u) {
        ctx->pc = 0x1F9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9564u;
        // 0x1f9568: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F956Cu;
        goto label_1f956c;
    }
    ctx->pc = 0x1F9564u;
    SET_GPR_U32(ctx, 31, 0x1F956Cu);
    ctx->pc = 0x1F9568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9564u;
    // 0x1f9568: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB278u, 0x1F9564u, 0x1F956Cu)) {
        return;
    }
    ctx->pc = 0x1F956Cu;
label_1f956c:
    // 0x1f956c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1f9570:
    if (ctx->pc == 0x1F9570u) {
        ctx->pc = 0x1F9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F956Cu;
        // 0x1f9570: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9574u;
        goto label_1f9574;
    }
    ctx->pc = 0x1F956Cu;
    {
        const bool branch_taken_0x1f956c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f956c) {
            ctx->pc = 0x1F9570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F956Cu;
            // 0x1f9570: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9574u;
            goto label_1f9574;
        }
    }
    ctx->pc = 0x1F9574u;
label_1f9574:
    // 0x1f9574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9578:
    // 0x1f9578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f957c:
    // 0x1f957c: 0x3e00008  jr          $ra
label_1f9580:
    if (ctx->pc == 0x1F9580u) {
        ctx->pc = 0x1F9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F957Cu;
        // 0x1f9580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9584u;
        goto label_1f9584;
    }
    ctx->pc = 0x1F957Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F957Cu;
        // 0x1f9580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F957Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9584u;
label_1f9584:
    // 0x1f9584: 0x0  nop
    ctx->pc = 0x1f9584u;
    // NOP
    ctx->pc = 0x1f9588u;
}
