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

// Function: sub_001A96A0
// Address: 0x1a96a0 - 0x1a96d8
void sub_001A96A0_0x1a96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A96A0_0x1a96a0");
#endif

    switch (ctx->pc) {
        case 0x1a96c4u: goto label_1a96c4;
        default: break;
    }

    ctx->pc = 0x1a96a0u;

    // 0x1a96a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a96a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a96a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a96a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a96a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a96a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a96ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a96acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a96b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a96b4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A96B4u;
    {
        const bool branch_taken_0x1a96b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a96b4) {
            ctx->pc = 0x1A96B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A96B4u;
            // 0x1a96b8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A96C8u;
            goto label_1a96c8;
        }
    }
    ctx->pc = 0x1A96BCu;
    // 0x1a96bc: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A96BCu;
    SET_GPR_U32(ctx, 31, 0x1A96C4u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A96BCu, 0x1A96C4u)) {
        return;
    }
    ctx->pc = 0x1A96C4u;
label_1a96c4:
    // 0x1a96c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a96c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a96c8:
    // 0x1a96c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a96c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a96cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a96ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a96d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A96D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96D0u;
        // 0x1a96d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A96D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A96D8u;
}
