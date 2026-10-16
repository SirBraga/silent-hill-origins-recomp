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

// Function: sub_0014F1D0
// Address: 0x14f1d0 - 0x14f208
void sub_0014F1D0_0x14f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F1D0_0x14f1d0");
#endif

    switch (ctx->pc) {
        case 0x14f1f4u: goto label_14f1f4;
        default: break;
    }

    ctx->pc = 0x14f1d0u;

    // 0x14f1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14f1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14f1d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14f1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14f1d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14f1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1e0: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x14f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x14f1e4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F1E4u;
    {
        const bool branch_taken_0x14f1e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1E4u;
        // 0x14f1e8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1e4) {
            ctx->pc = 0x14F1F8u;
            goto label_14f1f8;
        }
    }
    ctx->pc = 0x14F1ECu;
    // 0x14f1ec: 0xc059092  jal         func_164248
    ctx->pc = 0x14F1ECu;
    SET_GPR_U32(ctx, 31, 0x14F1F4u);
    ctx->pc = 0x14F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1ECu;
    // 0x14f1f0: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x14F1ECu, 0x14F1F4u)) {
        return;
    }
    ctx->pc = 0x14F1F4u;
label_14f1f4:
    // 0x14f1f4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x14f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_14f1f8:
    // 0x14f1f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14f1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f1fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f200: 0x3e00008  jr          $ra
    ctx->pc = 0x14F200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F200u;
        // 0x14f204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F208u;
}
