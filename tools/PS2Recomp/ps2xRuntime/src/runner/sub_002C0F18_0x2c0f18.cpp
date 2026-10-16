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

// Function: sub_002C0F18
// Address: 0x2c0f18 - 0x2c0f60
void sub_002C0F18_0x2c0f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0F18_0x2c0f18");
#endif

    switch (ctx->pc) {
        case 0x2c0f38u: goto label_2c0f38;
        default: break;
    }

    ctx->pc = 0x2c0f18u;

    // 0x2c0f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0f1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c0f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c0f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c0f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0f28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c0f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f2c: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x2c0f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x2c0f30: 0xc0af762  jal         func_2BDD88
    ctx->pc = 0x2C0F30u;
    SET_GPR_U32(ctx, 31, 0x2C0F38u);
    ctx->pc = 0x2C0F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0F30u;
    // 0x2c0f34: 0xac400110  sw          $zero, 0x110($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDD88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BDD88u, 0x2C0F30u, 0x2C0F38u)) {
        return;
    }
    ctx->pc = 0x2C0F38u;
label_2c0f38:
    // 0x2c0f38: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2c0f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2c0f3c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2c0f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2c0f40: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2c0f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2c0f44: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2c0f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2c0f48: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2c0f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2c0f4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c0f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0f54: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F54u;
        // 0x2c0f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0F5Cu;
    // 0x2c0f5c: 0x0  nop
    ctx->pc = 0x2c0f5cu;
    // NOP
    ctx->pc = 0x2c0f60u;
}
