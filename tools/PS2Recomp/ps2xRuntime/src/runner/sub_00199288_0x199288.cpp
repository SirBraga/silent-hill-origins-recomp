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

// Function: sub_00199288
// Address: 0x199288 - 0x1992d0
void sub_00199288_0x199288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199288_0x199288");
#endif

    switch (ctx->pc) {
        case 0x1992a4u: goto label_1992a4;
        case 0x1992acu: goto label_1992ac;
        default: break;
    }

    ctx->pc = 0x199288u;

    // 0x199288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19928c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199290: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199294: 0x240405b8  addiu       $a0, $zero, 0x5B8
    ctx->pc = 0x199294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1464));
    // 0x199298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19929c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19929Cu;
    SET_GPR_U32(ctx, 31, 0x1992A4u);
    ctx->pc = 0x1992A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19929Cu;
    // 0x1992a0: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19929Cu, 0x1992A4u)) {
        return;
    }
    ctx->pc = 0x1992A4u;
label_1992a4:
    // 0x1992a4: 0xc0662d8  jal         func_198B60
    ctx->pc = 0x1992A4u;
    SET_GPR_U32(ctx, 31, 0x1992ACu);
    ctx->pc = 0x1992A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992A4u;
    // 0x1992a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198B60u, 0x1992A4u, 0x1992ACu)) {
        return;
    }
    ctx->pc = 0x1992ACu;
label_1992ac:
    // 0x1992ac: 0xae028bc4  sw          $v0, -0x743C($s0)
    ctx->pc = 0x1992acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937540), GPR_U32(ctx, 2));
    // 0x1992b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1992b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1992b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1992b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1992b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1992B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1992BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992B8u;
        // 0x1992bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1992B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1992C0u;
    // 0x1992c0: 0x27bd1000  addiu       $sp, $sp, 0x1000
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
    // 0x1992c4: 0x0  nop
    ctx->pc = 0x1992c4u;
    // NOP
    // 0x1992c8: 0xac8205b4  sw          $v0, 0x5B4($a0)
    ctx->pc = 0x1992c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 2));
    // 0x1992cc: 0x0  nop
    ctx->pc = 0x1992ccu;
    // NOP
    ctx->pc = 0x1992d0u;
}
