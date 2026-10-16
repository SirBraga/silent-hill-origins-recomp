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

// Function: sub_00223240
// Address: 0x223240 - 0x223278
void sub_00223240_0x223240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223240_0x223240");
#endif

    switch (ctx->pc) {
        case 0x22326cu: goto label_22326c;
        default: break;
    }

    ctx->pc = 0x223240u;

    // 0x223240: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x223240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223244: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223248: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x223248u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22324c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x22324cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223250: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x223250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223254: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x223254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x223258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22325c: 0x24440448  addiu       $a0, $v0, 0x448
    ctx->pc = 0x22325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1096));
    // 0x223260: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x223260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223264: 0xc0936dc  jal         func_24DB70
    ctx->pc = 0x223264u;
    SET_GPR_U32(ctx, 31, 0x22326Cu);
    ctx->pc = 0x223268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223264u;
    // 0x223268: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DB70u, 0x223264u, 0x22326Cu)) {
        return;
    }
    ctx->pc = 0x22326Cu;
label_22326c:
    // 0x22326c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22326cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223270: 0x3e00008  jr          $ra
    ctx->pc = 0x223270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223270u;
        // 0x223274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223278u;
}
