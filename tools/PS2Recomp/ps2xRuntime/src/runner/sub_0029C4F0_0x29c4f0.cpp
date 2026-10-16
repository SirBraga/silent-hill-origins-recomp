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

// Function: sub_0029C4F0
// Address: 0x29c4f0 - 0x29c540
void sub_0029C4F0_0x29c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C4F0_0x29c4f0");
#endif

    switch (ctx->pc) {
        case 0x29c514u: goto label_29c514;
        case 0x29c52cu: goto label_29c52c;
        default: break;
    }

    ctx->pc = 0x29c4f0u;

    // 0x29c4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c4f4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x29c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x29c4f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c4fc: 0x8c625eb0  lw          $v0, 0x5EB0($v1)
    ctx->pc = 0x29c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735EB0u));
    // 0x29c500: 0x24705eb0  addiu       $s0, $v1, 0x5EB0
    ctx->pc = 0x29c500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24240));
    // 0x29c504: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29C504u;
    {
        const bool branch_taken_0x29c504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C504u;
        // 0x29c508: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c504) {
            ctx->pc = 0x29C52Cu;
            goto label_29c52c;
        }
    }
    ctx->pc = 0x29C50Cu;
    // 0x29c50c: 0xc0a7150  jal         func_29C540
    ctx->pc = 0x29C50Cu;
    SET_GPR_U32(ctx, 31, 0x29C514u);
    ctx->pc = 0x29C540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C540u, 0x29C50Cu, 0x29C514u)) {
        return;
    }
    ctx->pc = 0x29C514u;
label_29c514:
    // 0x29c514: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x29c514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x29c518: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x29c518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x29c51c: 0x24a5da70  addiu       $a1, $a1, -0x2590
    ctx->pc = 0x29c51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957680));
    // 0x29c520: 0x24c641d0  addiu       $a2, $a2, 0x41D0
    ctx->pc = 0x29c520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16848));
    // 0x29c524: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x29C524u;
    SET_GPR_U32(ctx, 31, 0x29C52Cu);
    ctx->pc = 0x29C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C524u;
    // 0x29c528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x29C524u, 0x29C52Cu)) {
        return;
    }
    ctx->pc = 0x29C52Cu;
label_29c52c:
    // 0x29c52c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c538: 0x3e00008  jr          $ra
    ctx->pc = 0x29C538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C538u;
        // 0x29c53c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C540u;
}
