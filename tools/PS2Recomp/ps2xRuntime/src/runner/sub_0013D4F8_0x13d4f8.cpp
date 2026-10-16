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

// Function: sub_0013D4F8
// Address: 0x13d4f8 - 0x13d530
void sub_0013D4F8_0x13d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D4F8_0x13d4f8");
#endif

    switch (ctx->pc) {
        case 0x13d520u: goto label_13d520;
        default: break;
    }

    ctx->pc = 0x13d4f8u;

    // 0x13d4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d500: 0x8c8200ec  lw          $v0, 0xEC($a0)
    ctx->pc = 0x13d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x13d504: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D504u;
    {
        const bool branch_taken_0x13d504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D504u;
        // 0x13d508: 0x3c05006c  lui         $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d504) {
            ctx->pc = 0x13D520u;
            goto label_13d520;
        }
    }
    ctx->pc = 0x13D50Cu;
    // 0x13d50c: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x13d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x13d510: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x13d510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x13d514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d518: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x13D518u;
    SET_GPR_U32(ctx, 31, 0x13D520u);
    ctx->pc = 0x13D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D518u;
    // 0x13d51c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x13D518u, 0x13D520u)) {
        return;
    }
    ctx->pc = 0x13D520u;
label_13d520:
    // 0x13d520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d524: 0x3e00008  jr          $ra
    ctx->pc = 0x13D524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D524u;
        // 0x13d528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D52Cu;
    // 0x13d52c: 0x0  nop
    ctx->pc = 0x13d52cu;
    // NOP
    ctx->pc = 0x13d530u;
}
