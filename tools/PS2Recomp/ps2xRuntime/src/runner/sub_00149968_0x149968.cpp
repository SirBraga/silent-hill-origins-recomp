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

// Function: sub_00149968
// Address: 0x149968 - 0x149988
void sub_00149968_0x149968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149968_0x149968");
#endif

    switch (ctx->pc) {
        case 0x14997cu: goto label_14997c;
        default: break;
    }

    ctx->pc = 0x149968u;

    // 0x149968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14996c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14996cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149974: 0xc052582  jal         func_149608
    ctx->pc = 0x149974u;
    SET_GPR_U32(ctx, 31, 0x14997Cu);
    ctx->pc = 0x149978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149974u;
    // 0x149978: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x149608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149608u, 0x149974u, 0x14997Cu)) {
        return;
    }
    ctx->pc = 0x14997Cu;
label_14997c:
    // 0x14997c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14997cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149980: 0x3e00008  jr          $ra
    ctx->pc = 0x149980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149980u;
        // 0x149984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149988u;
}
