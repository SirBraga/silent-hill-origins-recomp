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

// Function: sub_00149330
// Address: 0x149330 - 0x149368
void sub_00149330_0x149330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149330_0x149330");
#endif

    switch (ctx->pc) {
        case 0x149350u: goto label_149350;
        default: break;
    }

    ctx->pc = 0x149330u;

    // 0x149330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149334: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x149334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x149338: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14933c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x14933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x149340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149348: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x149348u;
    SET_GPR_U32(ctx, 31, 0x149350u);
    ctx->pc = 0x14934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149348u;
    // 0x14934c: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x149348u, 0x149350u)) {
        return;
    }
    ctx->pc = 0x149350u;
label_149350:
    // 0x149350: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x149350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x149354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149358: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x149358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x14935c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14935cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149360: 0x3e00008  jr          $ra
    ctx->pc = 0x149360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149360u;
        // 0x149364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149368u;
}
