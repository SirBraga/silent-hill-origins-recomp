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

// Function: sub_001720C8
// Address: 0x1720c8 - 0x172110
void sub_001720C8_0x1720c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001720C8_0x1720c8");
#endif

    switch (ctx->pc) {
        case 0x1720fcu: goto label_1720fc;
        default: break;
    }

    ctx->pc = 0x1720c8u;

    // 0x1720c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1720c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1720cc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1720ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1720d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1720d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1720d4: 0x244257a0  addiu       $v0, $v0, 0x57A0
    ctx->pc = 0x1720d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22432));
    // 0x1720d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1720d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1720dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1720dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720e0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1720e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1720e4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1720e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1720e8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1720e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1720ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1720ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1720f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1720f4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1720F4u;
    SET_GPR_U32(ctx, 31, 0x1720FCu);
    ctx->pc = 0x1720F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1720F4u;
    // 0x1720f8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1720F4u, 0x1720FCu)) {
        return;
    }
    ctx->pc = 0x1720FCu;
label_1720fc:
    // 0x1720fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1720fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172104: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x172104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172108: 0x3e00008  jr          $ra
    ctx->pc = 0x172108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172108u;
        // 0x17210c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172110u;
}
