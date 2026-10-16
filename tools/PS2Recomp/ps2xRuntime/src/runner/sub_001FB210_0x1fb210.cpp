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

// Function: sub_001FB210
// Address: 0x1fb210 - 0x1fb250
void sub_001FB210_0x1fb210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB210_0x1fb210");
#endif

    switch (ctx->pc) {
        case 0x1fb23cu: goto label_1fb23c;
        default: break;
    }

    ctx->pc = 0x1fb210u;

    // 0x1fb210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb214: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1fb214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1fb218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb21c: 0x8c624150  lw          $v0, 0x4150($v1)
    ctx->pc = 0x1fb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4150u));
    // 0x1fb220: 0x24704150  addiu       $s0, $v1, 0x4150
    ctx->pc = 0x1fb220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16720));
    // 0x1fb224: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB224u;
    {
        const bool branch_taken_0x1fb224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB224u;
        // 0x1fb228: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb224) {
            ctx->pc = 0x1FB23Cu;
            goto label_1fb23c;
        }
    }
    ctx->pc = 0x1FB22Cu;
    // 0x1fb22c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fb22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fb230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb234: 0xc07eb0e  jal         func_1FAC38
    ctx->pc = 0x1FB234u;
    SET_GPR_U32(ctx, 31, 0x1FB23Cu);
    ctx->pc = 0x1FB238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB234u;
    // 0x1fb238: 0x24a52f40  addiu       $a1, $a1, 0x2F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC38u, 0x1FB234u, 0x1FB23Cu)) {
        return;
    }
    ctx->pc = 0x1FB23Cu;
label_1fb23c:
    // 0x1fb23c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fb23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb248: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB248u;
        // 0x1fb24c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB250u;
}
