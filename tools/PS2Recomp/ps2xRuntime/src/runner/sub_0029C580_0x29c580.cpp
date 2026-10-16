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

// Function: sub_0029C580
// Address: 0x29c580 - 0x29c5c0
void sub_0029C580_0x29c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C580_0x29c580");
#endif

    switch (ctx->pc) {
        case 0x29c5acu: goto label_29c5ac;
        default: break;
    }

    ctx->pc = 0x29c580u;

    // 0x29c580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c584: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x29c584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x29c588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c58c: 0x8c6241c8  lw          $v0, 0x41C8($v1)
    ctx->pc = 0x29c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41C8u));
    // 0x29c590: 0x247041c8  addiu       $s0, $v1, 0x41C8
    ctx->pc = 0x29c590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16840));
    // 0x29c594: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C594u;
    {
        const bool branch_taken_0x29c594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C594u;
        // 0x29c598: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c594) {
            ctx->pc = 0x29C5ACu;
            goto label_29c5ac;
        }
    }
    ctx->pc = 0x29C59Cu;
    // 0x29c59c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x29c59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x29c5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5a4: 0xc07eb0e  jal         func_1FAC38
    ctx->pc = 0x29C5A4u;
    SET_GPR_U32(ctx, 31, 0x29C5ACu);
    ctx->pc = 0x29C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C5A4u;
    // 0x29c5a8: 0x24a5da88  addiu       $a1, $a1, -0x2578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC38u, 0x29C5A4u, 0x29C5ACu)) {
        return;
    }
    ctx->pc = 0x29C5ACu;
label_29c5ac:
    // 0x29c5ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c5b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x29C5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5B8u;
        // 0x29c5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C5C0u;
}
