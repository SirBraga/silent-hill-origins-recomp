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

// Function: sub_001A94E0
// Address: 0x1a94e0 - 0x1a9520
void sub_001A94E0_0x1a94e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A94E0_0x1a94e0");
#endif

    switch (ctx->pc) {
        case 0x1a94fcu: goto label_1a94fc;
        case 0x1a950cu: goto label_1a950c;
        default: break;
    }

    ctx->pc = 0x1a94e0u;

    // 0x1a94e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a94e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a94e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a94e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a94e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a94e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a94ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a94ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a94f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a94f4: 0xc06a55c  jal         func_1A9570
    ctx->pc = 0x1A94F4u;
    SET_GPR_U32(ctx, 31, 0x1A94FCu);
    ctx->pc = 0x1A94F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A94F4u;
    // 0x1a94f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9570u, 0x1A94F4u, 0x1A94FCu)) {
        return;
    }
    ctx->pc = 0x1A94FCu;
label_1a94fc:
    // 0x1a94fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9504: 0xc06a564  jal         func_1A9590
    ctx->pc = 0x1A9504u;
    SET_GPR_U32(ctx, 31, 0x1A950Cu);
    ctx->pc = 0x1A9508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9504u;
    // 0x1a9508: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9590u, 0x1A9504u, 0x1A950Cu)) {
        return;
    }
    ctx->pc = 0x1A950Cu;
label_1a950c:
    // 0x1a950c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a950cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9518: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9518u;
        // 0x1a951c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9520u;
}
