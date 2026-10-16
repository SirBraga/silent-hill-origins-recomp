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

// Function: sub_0018B6C8
// Address: 0x18b6c8 - 0x18b700
void sub_0018B6C8_0x18b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B6C8_0x18b6c8");
#endif

    switch (ctx->pc) {
        case 0x18b6dcu: goto label_18b6dc;
        default: break;
    }

    ctx->pc = 0x18b6c8u;

    // 0x18b6c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b6cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b6d4: 0xc0628aa  jal         func_18A2A8
    ctx->pc = 0x18B6D4u;
    SET_GPR_U32(ctx, 31, 0x18B6DCu);
    ctx->pc = 0x18B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B6D4u;
    // 0x18b6d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A2A8u, 0x18B6D4u, 0x18B6DCu)) {
        return;
    }
    ctx->pc = 0x18B6DCu;
label_18b6dc:
    // 0x18b6dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B6DCu;
    {
        const bool branch_taken_0x18b6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6DCu;
        // 0x18b6e0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6dc) {
            ctx->pc = 0x18B6F0u;
            goto label_18b6f0;
        }
    }
    ctx->pc = 0x18B6E4u;
    // 0x18b6e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18b6e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B6E8u;
    {
        const bool branch_taken_0x18b6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6E8u;
        // 0x18b6ec: 0x24428e18  addiu       $v0, $v0, -0x71E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6e8) {
            ctx->pc = 0x18B6F4u;
            goto label_18b6f4;
        }
    }
    ctx->pc = 0x18B6F0u;
label_18b6f0:
    // 0x18b6f0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x18b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_18b6f4:
    // 0x18b6f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x18B6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6F8u;
        // 0x18b6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B700u;
}
