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

// Function: sub_0029C7B8
// Address: 0x29c7b8 - 0x29c808
void sub_0029C7B8_0x29c7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C7B8_0x29c7b8");
#endif

    switch (ctx->pc) {
        case 0x29c7e0u: goto label_29c7e0;
        case 0x29c7e8u: goto label_29c7e8;
        default: break;
    }

    ctx->pc = 0x29c7b8u;

    // 0x29c7b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c7c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29c7c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c7cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29c7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x29c7d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C7D0u;
    {
        const bool branch_taken_0x29c7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c7d0) {
            ctx->pc = 0x29C7E0u;
            goto label_29c7e0;
        }
    }
    ctx->pc = 0x29C7D8u;
    // 0x29c7d8: 0xc0a71a6  jal         func_29C698
    ctx->pc = 0x29C7D8u;
    SET_GPR_U32(ctx, 31, 0x29C7E0u);
    ctx->pc = 0x29C698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C698u, 0x29C7D8u, 0x29C7E0u)) {
        return;
    }
    ctx->pc = 0x29C7E0u;
label_29c7e0:
    // 0x29c7e0: 0xc0c5486  jal         func_315218
    ctx->pc = 0x29C7E0u;
    SET_GPR_U32(ctx, 31, 0x29C7E8u);
    ctx->pc = 0x29C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C7E0u;
    // 0x29c7e4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x29C7E0u, 0x29C7E8u)) {
        return;
    }
    ctx->pc = 0x29C7E8u;
label_29c7e8:
    // 0x29c7e8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x29c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x29c7ec: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x29c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x29c7f0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x29c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x29c7f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c7f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x29C7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C7FCu;
        // 0x29c800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C804u;
    // 0x29c804: 0x0  nop
    ctx->pc = 0x29c804u;
    // NOP
    ctx->pc = 0x29c808u;
}
