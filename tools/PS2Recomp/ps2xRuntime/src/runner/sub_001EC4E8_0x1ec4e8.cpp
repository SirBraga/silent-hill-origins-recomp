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

// Function: sub_001EC4E8
// Address: 0x1ec4e8 - 0x1ec538
void sub_001EC4E8_0x1ec4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC4E8_0x1ec4e8");
#endif

    switch (ctx->pc) {
        case 0x1ec520u: goto label_1ec520;
        default: break;
    }

    ctx->pc = 0x1ec4e8u;

    // 0x1ec4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec4ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ec4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec4f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ec4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ec4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ec4fc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1ec4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ec500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec504: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ec504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec508: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ec508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ec50c: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1ec50cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ec510: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC510u;
    {
        const bool branch_taken_0x1ec510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC510u;
        // 0x1ec514: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec510) {
            ctx->pc = 0x1EC528u;
            goto label_1ec528;
        }
    }
    ctx->pc = 0x1EC518u;
    // 0x1ec518: 0xc07a824  jal         func_1EA090
    ctx->pc = 0x1EC518u;
    SET_GPR_U32(ctx, 31, 0x1EC520u);
    ctx->pc = 0x1EC51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC518u;
    // 0x1ec51c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EA090u, 0x1EC518u, 0x1EC520u)) {
        return;
    }
    ctx->pc = 0x1EC520u;
label_1ec520:
    // 0x1ec520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC520u;
    {
        const bool branch_taken_0x1ec520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC520u;
        // 0x1ec524: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec520) {
            ctx->pc = 0x1EC530u;
            goto label_1ec530;
        }
    }
    ctx->pc = 0x1EC528u;
label_1ec528:
    // 0x1ec528: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec530:
    // 0x1ec530: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC530u;
        // 0x1ec534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC538u;
}
