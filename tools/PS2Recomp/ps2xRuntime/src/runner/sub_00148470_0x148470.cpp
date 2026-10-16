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

// Function: sub_00148470
// Address: 0x148470 - 0x1484a8
void sub_00148470_0x148470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148470_0x148470");
#endif

    switch (ctx->pc) {
        case 0x148490u: goto label_148490;
        default: break;
    }

    ctx->pc = 0x148470u;

    // 0x148470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148474: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x148474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x148478: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14847c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x14847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x148480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148488: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x148488u;
    SET_GPR_U32(ctx, 31, 0x148490u);
    ctx->pc = 0x14848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148488u;
    // 0x14848c: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x148488u, 0x148490u)) {
        return;
    }
    ctx->pc = 0x148490u;
label_148490:
    // 0x148490: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x148490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x148494: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x148494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14849c: 0x3e00008  jr          $ra
    ctx->pc = 0x14849Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1484A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14849Cu;
        // 0x1484a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14849Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1484A4u;
    // 0x1484a4: 0x0  nop
    ctx->pc = 0x1484a4u;
    // NOP
    ctx->pc = 0x1484a8u;
}
