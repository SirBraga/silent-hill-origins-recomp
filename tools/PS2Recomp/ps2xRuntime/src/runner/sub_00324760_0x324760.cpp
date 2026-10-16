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

// Function: sub_00324760
// Address: 0x324760 - 0x3247a0
void sub_00324760_0x324760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324760_0x324760");
#endif

    switch (ctx->pc) {
        case 0x324788u: goto label_324788;
        default: break;
    }

    ctx->pc = 0x324760u;

    // 0x324760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324764: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x324764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32476c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x32476cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x324770: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x324770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x324774: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x324774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x324778: 0x8ca70024  lw          $a3, 0x24($a1)
    ctx->pc = 0x324778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x32477c: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x32477cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x324780: 0xc0c9056  jal         func_324158
    ctx->pc = 0x324780u;
    SET_GPR_U32(ctx, 31, 0x324788u);
    ctx->pc = 0x324784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324780u;
    // 0x324784: 0x8ca9002c  lw          $t1, 0x2C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324158u, 0x324780u, 0x324788u)) {
        return;
    }
    ctx->pc = 0x324788u;
label_324788:
    // 0x324788: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x324788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x32478c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32478cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324790: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x324790u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x324794: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x324794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324798: 0x3e00008  jr          $ra
    ctx->pc = 0x324798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324798u;
        // 0x32479c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3247A0u;
}
