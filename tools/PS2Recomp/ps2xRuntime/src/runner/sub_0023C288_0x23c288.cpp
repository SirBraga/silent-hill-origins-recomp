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

// Function: sub_0023C288
// Address: 0x23c288 - 0x23c2d0
void sub_0023C288_0x23c288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C288_0x23c288");
#endif

    switch (ctx->pc) {
        case 0x23c2c4u: goto label_23c2c4;
        default: break;
    }

    ctx->pc = 0x23c288u;

    // 0x23c288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c28c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23c290: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23c290u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23c294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23c298: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23C298u;
    {
        const bool branch_taken_0x23c298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C298u;
        // 0x23c29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c298) {
            ctx->pc = 0x23C2C4u;
            goto label_23c2c4;
        }
    }
    ctx->pc = 0x23C2A0u;
    // 0x23c2a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x23c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x23c2a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23c2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c2a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x23c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x23c2ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23c2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c2b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x23c2b4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x23c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x23c2b8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x23c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x23c2bc: 0xc08ef40  jal         func_23BD00
    ctx->pc = 0x23C2BCu;
    SET_GPR_U32(ctx, 31, 0x23C2C4u);
    ctx->pc = 0x23C2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2BCu;
    // 0x23c2c0: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BD00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23BD00u, 0x23C2BCu, 0x23C2C4u)) {
        return;
    }
    ctx->pc = 0x23C2C4u;
label_23c2c4:
    // 0x23c2c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23C2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C8u;
        // 0x23c2cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C2D0u;
}
