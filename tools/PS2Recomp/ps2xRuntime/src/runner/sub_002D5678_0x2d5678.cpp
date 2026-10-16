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

// Function: sub_002D5678
// Address: 0x2d5678 - 0x2d56e0
void sub_002D5678_0x2d5678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5678_0x2d5678");
#endif

    switch (ctx->pc) {
        case 0x2d56ccu: goto label_2d56cc;
        default: break;
    }

    ctx->pc = 0x2d5678u;

    // 0x2d5678: 0x8f878b0c  lw          $a3, -0x74F4($gp)
    ctx->pc = 0x2d5678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937356)));
    // 0x2d567c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2d567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2d5680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5684: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2d5684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2d5688: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x2d5688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2d568c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d568cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d5690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5690u;
    {
        const bool branch_taken_0x2d5690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5690u;
        // 0x2d5694: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5690) {
            ctx->pc = 0x2D56A0u;
            goto label_2d56a0;
        }
    }
    ctx->pc = 0x2D5698u;
    // 0x2d5698: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5698u;
    {
        const bool branch_taken_0x2d5698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5698u;
        // 0x2d569c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5698) {
            ctx->pc = 0x2D56BCu;
            goto label_2d56bc;
        }
    }
    ctx->pc = 0x2D56A0u;
label_2d56a0:
    // 0x2d56a0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2d56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2d56a4: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x2d56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d56a8: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x2d56a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x2d56ac: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2d56acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d56b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d56b4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d56b8: 0xaf828b0c  sw          $v0, -0x74F4($gp)
    ctx->pc = 0x2d56b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937356), GPR_U32(ctx, 2));
label_2d56bc:
    // 0x2d56bc: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D56BCu;
    {
        const bool branch_taken_0x2d56bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56BCu;
        // 0x2d56c0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d56bc) {
            ctx->pc = 0x2D56D4u;
            goto label_2d56d4;
        }
    }
    ctx->pc = 0x2D56C4u;
    // 0x2d56c4: 0xc0ad2b4  jal         func_2B4AD0
    ctx->pc = 0x2D56C4u;
    SET_GPR_U32(ctx, 31, 0x2D56CCu);
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x2D56C4u, 0x2D56CCu)) {
        return;
    }
    ctx->pc = 0x2D56CCu;
label_2d56cc:
    // 0x2d56cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D56CCu;
    {
        const bool branch_taken_0x2d56cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D56D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56CCu;
        // 0x2d56d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d56cc) {
            ctx->pc = 0x2D56D8u;
            goto label_2d56d8;
        }
    }
    ctx->pc = 0x2D56D4u;
label_2d56d4:
    // 0x2d56d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d56d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d56d8:
    // 0x2d56d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D56D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56D8u;
        // 0x2d56dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D56D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D56E0u;
}
