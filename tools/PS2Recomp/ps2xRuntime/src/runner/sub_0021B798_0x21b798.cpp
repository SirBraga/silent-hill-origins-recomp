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

// Function: sub_0021B798
// Address: 0x21b798 - 0x21b7f0
void sub_0021B798_0x21b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B798_0x21b798");
#endif

    switch (ctx->pc) {
        case 0x21b7d4u: goto label_21b7d4;
        case 0x21b7e0u: goto label_21b7e0;
        default: break;
    }

    ctx->pc = 0x21b798u;

    // 0x21b798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21b79c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21b7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b7a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b7ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21b7b0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21B7B0u;
    {
        const bool branch_taken_0x21b7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7B0u;
        // 0x21b7b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7b0) {
            ctx->pc = 0x21B7E0u;
            goto label_21b7e0;
        }
    }
    ctx->pc = 0x21B7B8u;
    // 0x21b7b8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x21B7B8u;
    {
        const bool branch_taken_0x21b7b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b7b8) {
            ctx->pc = 0x21B7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B7B8u;
            // 0x21b7bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B7E4u;
            goto label_21b7e4;
        }
    }
    ctx->pc = 0x21B7C0u;
    // 0x21b7c0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x21b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21b7c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B7C4u;
    {
        const bool branch_taken_0x21b7c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b7c4) {
            ctx->pc = 0x21B7D8u;
            goto label_21b7d8;
        }
    }
    ctx->pc = 0x21B7CCu;
    // 0x21b7cc: 0xc0808d4  jal         func_202350
    ctx->pc = 0x21B7CCu;
    SET_GPR_U32(ctx, 31, 0x21B7D4u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x21B7CCu, 0x21B7D4u)) {
        return;
    }
    ctx->pc = 0x21B7D4u;
label_21b7d4:
    // 0x21b7d4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x21b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_21b7d8:
    // 0x21b7d8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x21B7D8u;
    SET_GPR_U32(ctx, 31, 0x21B7E0u);
    ctx->pc = 0x21B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B7D8u;
    // 0x21b7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x21B7D8u, 0x21B7E0u)) {
        return;
    }
    ctx->pc = 0x21B7E0u;
label_21b7e0:
    // 0x21b7e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21b7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21b7e4:
    // 0x21b7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x21B7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7E8u;
        // 0x21b7ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B7F0u;
}
