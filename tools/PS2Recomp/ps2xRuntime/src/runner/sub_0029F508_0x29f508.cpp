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

// Function: sub_0029F508
// Address: 0x29f508 - 0x29f538
void sub_0029F508_0x29f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F508_0x29f508");
#endif

    switch (ctx->pc) {
        case 0x29f520u: goto label_29f520;
        default: break;
    }

    ctx->pc = 0x29f508u;

    // 0x29f508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f50c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29f50cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29f510: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29f510u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29f514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f518: 0xc0a8de0  jal         func_2A3780
    ctx->pc = 0x29F518u;
    SET_GPR_U32(ctx, 31, 0x29F520u);
    ctx->pc = 0x2A3780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A3780u, 0x29F518u, 0x29F520u)) {
        return;
    }
    ctx->pc = 0x29F520u;
label_29f520:
    // 0x29f520: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29f524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f528: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29f52c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F52Cu;
        // 0x29f530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F534u;
    // 0x29f534: 0x0  nop
    ctx->pc = 0x29f534u;
    // NOP
    ctx->pc = 0x29f538u;
}
