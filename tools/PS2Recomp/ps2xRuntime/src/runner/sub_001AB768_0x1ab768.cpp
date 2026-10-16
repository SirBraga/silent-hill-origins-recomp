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

// Function: sub_001AB768
// Address: 0x1ab768 - 0x1ab798
void sub_001AB768_0x1ab768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB768_0x1ab768");
#endif

    switch (ctx->pc) {
        case 0x1ab78cu: goto label_1ab78c;
        default: break;
    }

    ctx->pc = 0x1ab768u;

    // 0x1ab768: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ab768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ab76c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab76cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab770: 0x2442b6d8  addiu       $v0, $v0, -0x4928
    ctx->pc = 0x1ab770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948568));
    // 0x1ab774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab778: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1ab778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1ab77c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB77Cu;
    {
        const bool branch_taken_0x1ab77c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB77Cu;
        // 0x1ab780: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab77c) {
            ctx->pc = 0x1AB78Cu;
            goto label_1ab78c;
        }
    }
    ctx->pc = 0x1AB784u;
    // 0x1ab784: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AB784u;
    SET_GPR_U32(ctx, 31, 0x1AB78Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AB784u, 0x1AB78Cu)) {
        return;
    }
    ctx->pc = 0x1AB78Cu;
label_1ab78c:
    // 0x1ab78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab790: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB790u;
        // 0x1ab794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB798u;
}
