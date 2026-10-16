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

// Function: sub_00263528
// Address: 0x263528 - 0x263590
void sub_00263528_0x263528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263528_0x263528");
#endif

    switch (ctx->pc) {
        case 0x263574u: goto label_263574;
        default: break;
    }

    ctx->pc = 0x263528u;

    // 0x263528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26352c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26352cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263530: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x263530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x263534: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x263534u;
    {
        const bool branch_taken_0x263534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263534u;
        // 0x263538: 0x8f829144  lw          $v0, -0x6EBC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263534) {
            ctx->pc = 0x263580u;
            goto label_263580;
        }
    }
    ctx->pc = 0x26353Cu;
    // 0x26353c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26353cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263540: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x263540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263544: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x263544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263548: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x263548u;
    {
        const bool branch_taken_0x263548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263548) {
            ctx->pc = 0x26354Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263548u;
            // 0x26354c: 0x8c820078  lw          $v0, 0x78($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263550u;
    // 0x263550: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x263550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x263554: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x263554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263558: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263558u;
    {
        const bool branch_taken_0x263558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x263558) {
            ctx->pc = 0x26355Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263558u;
            // 0x26355c: 0x8c820078  lw          $v0, 0x78($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263560u;
    // 0x263560: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263560u;
    {
        const bool branch_taken_0x263560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263560u;
        // 0x263564: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263560) {
            ctx->pc = 0x263574u;
            goto label_263574;
        }
    }
    ctx->pc = 0x263568u;
label_263568:
    // 0x263568: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x263568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x26356c: 0xc0993a4  jal         func_264E90
    ctx->pc = 0x26356Cu;
    SET_GPR_U32(ctx, 31, 0x263574u);
    ctx->pc = 0x263570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26356Cu;
    // 0x263570: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264E90u, 0x26356Cu, 0x263574u)) {
        return;
    }
    ctx->pc = 0x263574u;
label_263574:
    // 0x263574: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x263574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263578: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x263578u;
    {
        const bool branch_taken_0x263578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263578u;
        // 0x26357c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263578) {
            ctx->pc = 0x263584u;
            goto label_263584;
        }
    }
    ctx->pc = 0x263580u;
label_263580:
    // 0x263580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263584:
    // 0x263584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263588: 0x3e00008  jr          $ra
    ctx->pc = 0x263588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263588u;
        // 0x26358c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263590u;
}
