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

// Function: sub_001B4480
// Address: 0x1b4480 - 0x1b44d0
void sub_001B4480_0x1b4480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4480_0x1b4480");
#endif

    switch (ctx->pc) {
        case 0x1b44a8u: goto label_1b44a8;
        default: break;
    }

    ctx->pc = 0x1b4480u;

    // 0x1b4480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4484: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b4484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b4488: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b4488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b448c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4494: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b4494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b4498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b449c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b449cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44a0: 0xc08ab16  jal         func_22AC58
    ctx->pc = 0x1B44A0u;
    SET_GPR_U32(ctx, 31, 0x1B44A8u);
    ctx->pc = 0x1B44A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B44A0u;
    // 0x1b44a4: 0x24a54438  addiu       $a1, $a1, 0x4438 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x1B44A0u, 0x1B44A8u)) {
        return;
    }
    ctx->pc = 0x1B44A8u;
label_1b44a8:
    // 0x1b44a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b44ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b44acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b44b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b44b4: 0x223100a  movz        $v0, $s1, $v1
    ctx->pc = 0x1b44b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17));
    // 0x1b44b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b44b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b44bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b44bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b44c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B44C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44C0u;
        // 0x1b44c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B44C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B44C8u;
    // 0x1b44c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b44c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b44cc: 0x0  nop
    ctx->pc = 0x1b44ccu;
    // NOP
    ctx->pc = 0x1b44d0u;
}
