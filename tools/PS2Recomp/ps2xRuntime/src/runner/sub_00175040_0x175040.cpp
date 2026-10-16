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

// Function: sub_00175040
// Address: 0x175040 - 0x175068
void sub_00175040_0x175040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175040_0x175040");
#endif

    switch (ctx->pc) {
        case 0x17505cu: goto label_17505c;
        default: break;
    }

    ctx->pc = 0x175040u;

    // 0x175040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175048: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x175048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x17504c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17504Cu;
    {
        const bool branch_taken_0x17504c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x175050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17504Cu;
        // 0x175050: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17504c) {
            ctx->pc = 0x175060u;
            goto label_175060;
        }
    }
    ctx->pc = 0x175054u;
    // 0x175054: 0xc043caa  jal         func_10F2A8
    ctx->pc = 0x175054u;
    SET_GPR_U32(ctx, 31, 0x17505Cu);
    ctx->pc = 0x175058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175054u;
    // 0x175058: 0x2484005c  addiu       $a0, $a0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F2A8u, 0x175054u, 0x17505Cu)) {
        return;
    }
    ctx->pc = 0x17505Cu;
label_17505c:
    // 0x17505c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17505cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175060:
    // 0x175060: 0x3e00008  jr          $ra
    ctx->pc = 0x175060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175060u;
        // 0x175064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175068u;
}
