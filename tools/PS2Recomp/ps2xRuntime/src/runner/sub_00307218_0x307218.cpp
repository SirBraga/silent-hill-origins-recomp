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

// Function: sub_00307218
// Address: 0x307218 - 0x307258
void sub_00307218_0x307218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307218_0x307218");
#endif

    switch (ctx->pc) {
        case 0x307240u: goto label_307240;
        default: break;
    }

    ctx->pc = 0x307218u;

    // 0x307218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30721c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30721cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307224: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x307224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x307228: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x307228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x30722c: 0x8c430fc8  lw          $v1, 0xFC8($v0)
    ctx->pc = 0x30722cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x730FC8u));
    // 0x307230: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x307230u;
    {
        const bool branch_taken_0x307230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x307234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307230u;
        // 0x307234: 0x24660020  addiu       $a2, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307230) {
            ctx->pc = 0x307248u;
            goto label_307248;
        }
    }
    ctx->pc = 0x307238u;
    // 0x307238: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x307238u;
    SET_GPR_U32(ctx, 31, 0x307240u);
    ctx->pc = 0x30723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307238u;
    // 0x30723c: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x307238u, 0x307240u)) {
        return;
    }
    ctx->pc = 0x307240u;
label_307240:
    // 0x307240: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307240u;
    {
        const bool branch_taken_0x307240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307240u;
        // 0x307244: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307240) {
            ctx->pc = 0x307250u;
            goto label_307250;
        }
    }
    ctx->pc = 0x307248u;
label_307248:
    // 0x307248: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x307248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x30724c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30724cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307250:
    // 0x307250: 0x3e00008  jr          $ra
    ctx->pc = 0x307250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307250u;
        // 0x307254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307258u;
}
