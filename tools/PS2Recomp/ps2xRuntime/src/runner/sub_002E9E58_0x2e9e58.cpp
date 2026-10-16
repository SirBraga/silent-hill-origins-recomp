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

// Function: sub_002E9E58
// Address: 0x2e9e58 - 0x2e9eb0
void sub_002E9E58_0x2e9e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9E58_0x2e9e58");
#endif

    switch (ctx->pc) {
        case 0x2e9e6cu: goto label_2e9e6c;
        case 0x2e9e94u: goto label_2e9e94;
        case 0x2e9e9cu: goto label_2e9e9c;
        default: break;
    }

    ctx->pc = 0x2e9e58u;

    // 0x2e9e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e9e5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e9e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e9e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9e64: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2E9E64u;
    SET_GPR_U32(ctx, 31, 0x2E9E6Cu);
    ctx->pc = 0x2E9E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9E64u;
    // 0x2e9e68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2E9E64u, 0x2E9E6Cu)) {
        return;
    }
    ctx->pc = 0x2E9E6Cu;
label_2e9e6c:
    // 0x2e9e6c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x2e9e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2e9e70: 0x260a1040  addiu       $t2, $s0, 0x1040
    ctx->pc = 0x2e9e70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
    // 0x2e9e74: 0x8c6b1004  lw          $t3, 0x1004($v1)
    ctx->pc = 0x2e9e74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x2e9e78: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e9e78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9e7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9e88: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x2e9e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2e9e8c: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2E9E8Cu;
    SET_GPR_U32(ctx, 31, 0x2E9E94u);
    ctx->pc = 0x2E9E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9E8Cu;
    // 0x2e9e90: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2E9E8Cu, 0x2E9E94u)) {
        return;
    }
    ctx->pc = 0x2E9E94u;
label_2e9e94:
    // 0x2e9e94: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2E9E94u;
    SET_GPR_U32(ctx, 31, 0x2E9E9Cu);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2E9E94u, 0x2E9E9Cu)) {
        return;
    }
    ctx->pc = 0x2E9E9Cu;
label_2e9e9c:
    // 0x2e9e9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e9e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9EA4u;
        // 0x2e9ea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9EACu;
    // 0x2e9eac: 0x0  nop
    ctx->pc = 0x2e9eacu;
    // NOP
    ctx->pc = 0x2e9eb0u;
}
