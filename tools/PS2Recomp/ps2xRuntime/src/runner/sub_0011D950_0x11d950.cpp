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

// Function: sub_0011D950
// Address: 0x11d950 - 0x11d998
void sub_0011D950_0x11d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D950_0x11d950");
#endif

    switch (ctx->pc) {
        case 0x11d96cu: goto label_11d96c;
        default: break;
    }

    ctx->pc = 0x11d950u;

    // 0x11d950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d954: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11d954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11d958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11d95c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11d95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d964: 0xc04469a  jal         func_111A68
    ctx->pc = 0x11D964u;
    SET_GPR_U32(ctx, 31, 0x11D96Cu);
    ctx->pc = 0x11D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D964u;
    // 0x11d968: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111A68u, 0x11D964u, 0x11D96Cu)) {
        return;
    }
    ctx->pc = 0x11D96Cu;
label_11d96c:
    // 0x11d96c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11d970: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x11d970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x11d974: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D974u;
    {
        const bool branch_taken_0x11d974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D974u;
        // 0x11d978: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d974) {
            ctx->pc = 0x11D984u;
            goto label_11d984;
        }
    }
    ctx->pc = 0x11D97Cu;
    // 0x11d97c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d980: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x11d980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
label_11d984:
    // 0x11d984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11d984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d98c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D98Cu;
        // 0x11d990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D994u;
    // 0x11d994: 0x0  nop
    ctx->pc = 0x11d994u;
    // NOP
    ctx->pc = 0x11d998u;
}
