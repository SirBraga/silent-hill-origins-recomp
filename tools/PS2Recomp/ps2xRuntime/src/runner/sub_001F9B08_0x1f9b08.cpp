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

// Function: sub_001F9B08
// Address: 0x1f9b08 - 0x1f9b48
void sub_001F9B08_0x1f9b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9B08_0x1f9b08");
#endif

    switch (ctx->pc) {
        case 0x1f9b34u: goto label_1f9b34;
        default: break;
    }

    ctx->pc = 0x1f9b08u;

    // 0x1f9b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9b0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1f9b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1f9b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9b14: 0x8c624148  lw          $v0, 0x4148($v1)
    ctx->pc = 0x1f9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4148u));
    // 0x1f9b18: 0x24704148  addiu       $s0, $v1, 0x4148
    ctx->pc = 0x1f9b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16712));
    // 0x1f9b1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9B1Cu;
    {
        const bool branch_taken_0x1f9b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B1Cu;
        // 0x1f9b20: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b1c) {
            ctx->pc = 0x1F9B34u;
            goto label_1f9b34;
        }
    }
    ctx->pc = 0x1F9B24u;
    // 0x1f9b24: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f9b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f9b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b2c: 0xc07eb0e  jal         func_1FAC38
    ctx->pc = 0x1F9B2Cu;
    SET_GPR_U32(ctx, 31, 0x1F9B34u);
    ctx->pc = 0x1F9B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B2Cu;
    // 0x1f9b30: 0x24a52d20  addiu       $a1, $a1, 0x2D20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC38u, 0x1F9B2Cu, 0x1F9B34u)) {
        return;
    }
    ctx->pc = 0x1F9B34u;
label_1f9b34:
    // 0x1f9b34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f9b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9b3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9b40: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B40u;
        // 0x1f9b44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9B48u;
}
