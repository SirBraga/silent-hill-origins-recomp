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

// Function: sub_00292E58
// Address: 0x292e58 - 0x292ea8
void sub_00292E58_0x292e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292E58_0x292e58");
#endif

    switch (ctx->pc) {
        case 0x292e78u: goto label_292e78;
        default: break;
    }

    ctx->pc = 0x292e58u;

    // 0x292e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292e5c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x292e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x292e60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x292e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x292e64: 0x24422e98  addiu       $v0, $v0, 0x2E98
    ctx->pc = 0x292e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11928));
    // 0x292e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x292e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e70: 0xc0a4c1c  jal         func_293070
    ctx->pc = 0x292E70u;
    SET_GPR_U32(ctx, 31, 0x292E78u);
    ctx->pc = 0x292E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E70u;
    // 0x292e74: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293070u, 0x292E70u, 0x292E78u)) {
        return;
    }
    ctx->pc = 0x292E78u;
label_292e78:
    // 0x292e78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x292e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292e80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x292e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292e84: 0x3e00008  jr          $ra
    ctx->pc = 0x292E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E84u;
        // 0x292e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292E8Cu;
    // 0x292e8c: 0x0  nop
    ctx->pc = 0x292e8cu;
    // NOP
    // 0x292e90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x292e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x292e94: 0x0  nop
    ctx->pc = 0x292e94u;
    // NOP
    // 0x292e98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x292e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292e9c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x292e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x292ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x292EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EA0u;
        // 0x292ea4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292EA8u;
}
