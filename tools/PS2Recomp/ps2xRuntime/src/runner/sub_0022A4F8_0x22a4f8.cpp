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

// Function: sub_0022A4F8
// Address: 0x22a4f8 - 0x22a548
void sub_0022A4F8_0x22a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A4F8_0x22a4f8");
#endif

    switch (ctx->pc) {
        case 0x22a528u: goto label_22a528;
        case 0x22a538u: goto label_22a538;
        default: break;
    }

    ctx->pc = 0x22a4f8u;

    // 0x22a4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a4fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22a500: 0x8c423ea0  lw          $v0, 0x3EA0($v0)
    ctx->pc = 0x22a500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22a504: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22a504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x22a508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a50c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x22a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x22a510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22a514: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x22a514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x22a518: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A518u;
    {
        const bool branch_taken_0x22a518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a518) {
            ctx->pc = 0x22A530u;
            goto label_22a530;
        }
    }
    ctx->pc = 0x22A520u;
    // 0x22a520: 0xc08a7dc  jal         func_229F70
    ctx->pc = 0x22A520u;
    SET_GPR_U32(ctx, 31, 0x22A528u);
    ctx->pc = 0x229F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x229F70u, 0x22A520u, 0x22A528u)) {
        return;
    }
    ctx->pc = 0x22A528u;
label_22a528:
    // 0x22a528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22A528u;
    {
        const bool branch_taken_0x22a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A528u;
        // 0x22a52c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a528) {
            ctx->pc = 0x22A53Cu;
            goto label_22a53c;
        }
    }
    ctx->pc = 0x22A530u;
label_22a530:
    // 0x22a530: 0xc08a73e  jal         func_229CF8
    ctx->pc = 0x22A530u;
    SET_GPR_U32(ctx, 31, 0x22A538u);
    ctx->pc = 0x229CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x229CF8u, 0x22A530u, 0x22A538u)) {
        return;
    }
    ctx->pc = 0x22A538u;
label_22a538:
    // 0x22a538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22a53c:
    // 0x22a53c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A53Cu;
        // 0x22a540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A544u;
    // 0x22a544: 0x0  nop
    ctx->pc = 0x22a544u;
    // NOP
    ctx->pc = 0x22a548u;
}
