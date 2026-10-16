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

// Function: sub_00205F68
// Address: 0x205f68 - 0x205f98
void sub_00205F68_0x205f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205F68_0x205f68");
#endif

    switch (ctx->pc) {
        case 0x205f80u: goto label_205f80;
        default: break;
    }

    ctx->pc = 0x205f68u;

    // 0x205f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205f6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x205f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x205f70: 0xc78018  mult        $s0, $a2, $a3
    ctx->pc = 0x205f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x205f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205f78: 0xc093546  jal         func_24D518
    ctx->pc = 0x205F78u;
    SET_GPR_U32(ctx, 31, 0x205F80u);
    ctx->pc = 0x205F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F78u;
    // 0x205f7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x205F78u, 0x205F80u)) {
        return;
    }
    ctx->pc = 0x205F80u;
label_205f80:
    // 0x205f80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x205f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205f88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x205f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x205F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F8Cu;
        // 0x205f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205F94u;
    // 0x205f94: 0x0  nop
    ctx->pc = 0x205f94u;
    // NOP
    ctx->pc = 0x205f98u;
}
