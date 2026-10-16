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

// Function: sub_00108950
// Address: 0x108950 - 0x108980
void sub_00108950_0x108950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108950_0x108950");
#endif

    switch (ctx->pc) {
        case 0x108974u: goto label_108974;
        default: break;
    }

    ctx->pc = 0x108950u;

    // 0x108950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108954: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x108954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x108958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10895c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10895cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108960: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x108960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x108964: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x108964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x108968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10896c: 0xc06ca72  jal         func_1B29C8
    ctx->pc = 0x10896Cu;
    SET_GPR_U32(ctx, 31, 0x108974u);
    ctx->pc = 0x108970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10896Cu;
    // 0x108970: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B29C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B29C8u, 0x10896Cu, 0x108974u)) {
        return;
    }
    ctx->pc = 0x108974u;
label_108974:
    // 0x108974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108978: 0x3e00008  jr          $ra
    ctx->pc = 0x108978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108978u;
        // 0x10897c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108980u;
}
