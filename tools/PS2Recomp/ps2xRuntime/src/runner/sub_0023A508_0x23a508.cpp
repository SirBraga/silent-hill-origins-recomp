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

// Function: sub_0023A508
// Address: 0x23a508 - 0x23a588
void sub_0023A508_0x23a508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A508_0x23a508");
#endif

    switch (ctx->pc) {
        case 0x23a528u: goto label_23a528;
        case 0x23a530u: goto label_23a530;
        case 0x23a538u: goto label_23a538;
        case 0x23a560u: goto label_23a560;
        case 0x23a568u: goto label_23a568;
        case 0x23a570u: goto label_23a570;
        default: break;
    }

    ctx->pc = 0x23a508u;

    // 0x23a508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a50c: 0x8f82844c  lw          $v0, -0x7BB4($gp)
    ctx->pc = 0x23a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935628)));
    // 0x23a510: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A510u;
    {
        const bool branch_taken_0x23a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A510u;
        // 0x23a514: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a510) {
            ctx->pc = 0x23A520u;
            goto label_23a520;
        }
    }
    ctx->pc = 0x23A518u;
    // 0x23a518: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23A518u;
    {
        const bool branch_taken_0x23a518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A518u;
        // 0x23a51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a518) {
            ctx->pc = 0x23A578u;
            goto label_23a578;
        }
    }
    ctx->pc = 0x23A520u;
label_23a520:
    // 0x23a520: 0xc0a534a  jal         func_294D28
    ctx->pc = 0x23A520u;
    SET_GPR_U32(ctx, 31, 0x23A528u);
    ctx->pc = 0x23A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A520u;
    // 0x23a524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294D28u, 0x23A520u, 0x23A528u)) {
        return;
    }
    ctx->pc = 0x23A528u;
label_23a528:
    // 0x23a528: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a52c: 0x0  nop
    ctx->pc = 0x23a52cu;
    // NOP
label_23a530:
    // 0x23a530: 0xc0a5370  jal         func_294DC0
    ctx->pc = 0x23A530u;
    SET_GPR_U32(ctx, 31, 0x23A538u);
    ctx->pc = 0x23A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A530u;
    // 0x23a534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x23A530u, 0x23A538u)) {
        return;
    }
    ctx->pc = 0x23A538u;
label_23a538:
    // 0x23a538: 0x0  nop
    ctx->pc = 0x23a538u;
    // NOP
    // 0x23a53c: 0x0  nop
    ctx->pc = 0x23a53cu;
    // NOP
    // 0x23a540: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23A540u;
    {
        const bool branch_taken_0x23a540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A540u;
        // 0x23a544: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a540) {
            ctx->pc = 0x23A530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a530;
        }
    }
    ctx->pc = 0x23A548u;
    // 0x23a548: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x23a548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x23a54c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23a550: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x23a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x23a554: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23a554u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x23a558: 0xc091d10  jal         func_247440
    ctx->pc = 0x23A558u;
    SET_GPR_U32(ctx, 31, 0x23A560u);
    ctx->pc = 0x247440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247440u, 0x23A558u, 0x23A560u)) {
        return;
    }
    ctx->pc = 0x23A560u;
label_23a560:
    // 0x23a560: 0xc08e078  jal         func_2381E0
    ctx->pc = 0x23A560u;
    SET_GPR_U32(ctx, 31, 0x23A568u);
    ctx->pc = 0x2381E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2381E0u, 0x23A560u, 0x23A568u)) {
        return;
    }
    ctx->pc = 0x23A568u;
label_23a568:
    // 0x23a568: 0xc08bf18  jal         func_22FC60
    ctx->pc = 0x23A568u;
    SET_GPR_U32(ctx, 31, 0x23A570u);
    ctx->pc = 0x22FC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22FC60u, 0x23A568u, 0x23A570u)) {
        return;
    }
    ctx->pc = 0x23A570u;
label_23a570:
    // 0x23a570: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23a570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x23a574: 0xaf82844c  sw          $v0, -0x7BB4($gp)
    ctx->pc = 0x23a574u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935628), GPR_U32(ctx, 2));
label_23a578:
    // 0x23a578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a57c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A57Cu;
        // 0x23a580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A584u;
    // 0x23a584: 0x0  nop
    ctx->pc = 0x23a584u;
    // NOP
    ctx->pc = 0x23a588u;
}
