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

// Function: sub_0029C2B0
// Address: 0x29c2b0 - 0x29c300
void sub_0029C2B0_0x29c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C2B0_0x29c2b0");
#endif

    switch (ctx->pc) {
        case 0x29c2d4u: goto label_29c2d4;
        case 0x29c2ecu: goto label_29c2ec;
        default: break;
    }

    ctx->pc = 0x29c2b0u;

    // 0x29c2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c2b4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x29c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x29c2b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c2bc: 0x8c625ed0  lw          $v0, 0x5ED0($v1)
    ctx->pc = 0x29c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735ED0u));
    // 0x29c2c0: 0x24705ed0  addiu       $s0, $v1, 0x5ED0
    ctx->pc = 0x29c2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24272));
    // 0x29c2c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29C2C4u;
    {
        const bool branch_taken_0x29c2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2C4u;
        // 0x29c2c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2c4) {
            ctx->pc = 0x29C2ECu;
            goto label_29c2ec;
        }
    }
    ctx->pc = 0x29C2CCu;
    // 0x29c2cc: 0xc0a7160  jal         func_29C580
    ctx->pc = 0x29C2CCu;
    SET_GPR_U32(ctx, 31, 0x29C2D4u);
    ctx->pc = 0x29C580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C580u, 0x29C2CCu, 0x29C2D4u)) {
        return;
    }
    ctx->pc = 0x29C2D4u;
label_29c2d4:
    // 0x29c2d4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x29c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x29c2d8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x29c2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x29c2dc: 0x24a5da60  addiu       $a1, $a1, -0x25A0
    ctx->pc = 0x29c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957664));
    // 0x29c2e0: 0x24c641c8  addiu       $a2, $a2, 0x41C8
    ctx->pc = 0x29c2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16840));
    // 0x29c2e4: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x29C2E4u;
    SET_GPR_U32(ctx, 31, 0x29C2ECu);
    ctx->pc = 0x29C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2E4u;
    // 0x29c2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x29C2E4u, 0x29C2ECu)) {
        return;
    }
    ctx->pc = 0x29C2ECu;
label_29c2ec:
    // 0x29c2ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c2f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x29C2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2F8u;
        // 0x29c2fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C300u;
}
