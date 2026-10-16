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

// Function: sub_0029C540
// Address: 0x29c540 - 0x29c580
void sub_0029C540_0x29c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C540_0x29c540");
#endif

    switch (ctx->pc) {
        case 0x29c56cu: goto label_29c56c;
        default: break;
    }

    ctx->pc = 0x29c540u;

    // 0x29c540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c544: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x29c544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x29c548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c54c: 0x8c6241d0  lw          $v0, 0x41D0($v1)
    ctx->pc = 0x29c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41D0u));
    // 0x29c550: 0x247041d0  addiu       $s0, $v1, 0x41D0
    ctx->pc = 0x29c550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16848));
    // 0x29c554: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C554u;
    {
        const bool branch_taken_0x29c554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C554u;
        // 0x29c558: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c554) {
            ctx->pc = 0x29C56Cu;
            goto label_29c56c;
        }
    }
    ctx->pc = 0x29C55Cu;
    // 0x29c55c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x29c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x29c560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c564: 0xc07eb0e  jal         func_1FAC38
    ctx->pc = 0x29C564u;
    SET_GPR_U32(ctx, 31, 0x29C56Cu);
    ctx->pc = 0x29C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C564u;
    // 0x29c568: 0x24a5da78  addiu       $a1, $a1, -0x2588 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC38u, 0x29C564u, 0x29C56Cu)) {
        return;
    }
    ctx->pc = 0x29C56Cu;
label_29c56c:
    // 0x29c56c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c578: 0x3e00008  jr          $ra
    ctx->pc = 0x29C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C578u;
        // 0x29c57c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C580u;
}
