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

// Function: sub_001FAB00
// Address: 0x1fab00 - 0x1fab50
void sub_001FAB00_0x1fab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAB00_0x1fab00");
#endif

    switch (ctx->pc) {
        case 0x1fab24u: goto label_1fab24;
        case 0x1fab3cu: goto label_1fab3c;
        default: break;
    }

    ctx->pc = 0x1fab00u;

    // 0x1fab00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fab04: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fab04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1fab08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fab0c: 0x8c6254a0  lw          $v0, 0x54A0($v1)
    ctx->pc = 0x1fab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7354A0u));
    // 0x1fab10: 0x247054a0  addiu       $s0, $v1, 0x54A0
    ctx->pc = 0x1fab10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21664));
    // 0x1fab14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FAB14u;
    {
        const bool branch_taken_0x1fab14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB14u;
        // 0x1fab18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab14) {
            ctx->pc = 0x1FAB3Cu;
            goto label_1fab3c;
        }
    }
    ctx->pc = 0x1FAB1Cu;
    // 0x1fab1c: 0xc07e6c2  jal         func_1F9B08
    ctx->pc = 0x1FAB1Cu;
    SET_GPR_U32(ctx, 31, 0x1FAB24u);
    ctx->pc = 0x1F9B08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B08u, 0x1FAB1Cu, 0x1FAB24u)) {
        return;
    }
    ctx->pc = 0x1FAB24u;
label_1fab24:
    // 0x1fab24: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fab24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fab28: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1fab28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1fab2c: 0x24a52e30  addiu       $a1, $a1, 0x2E30
    ctx->pc = 0x1fab2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11824));
    // 0x1fab30: 0x24c64148  addiu       $a2, $a2, 0x4148
    ctx->pc = 0x1fab30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16712));
    // 0x1fab34: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FAB34u;
    SET_GPR_U32(ctx, 31, 0x1FAB3Cu);
    ctx->pc = 0x1FAB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAB34u;
    // 0x1fab38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FAB34u, 0x1FAB3Cu)) {
        return;
    }
    ctx->pc = 0x1FAB3Cu;
label_1fab3c:
    // 0x1fab3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fab3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fab40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fab44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fab44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fab48: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB48u;
        // 0x1fab4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAB50u;
}
