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

// Function: sub_001FAC58
// Address: 0x1fac58 - 0x1fac88
void sub_001FAC58_0x1fac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAC58_0x1fac58");
#endif

    switch (ctx->pc) {
        case 0x1fac6cu: goto label_1fac6c;
        default: break;
    }

    ctx->pc = 0x1fac58u;

    // 0x1fac58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fac5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fac60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fac60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fac64: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x1FAC64u;
    SET_GPR_U32(ctx, 31, 0x1FAC6Cu);
    ctx->pc = 0x1FAC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC64u;
    // 0x1fac68: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABB0u, 0x1FAC64u, 0x1FAC6Cu)) {
        return;
    }
    ctx->pc = 0x1FAC6Cu;
label_1fac6c:
    // 0x1fac6c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1fac6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x1fac70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fac70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fac74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fac74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fac78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fac7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC7Cu;
        // 0x1fac80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAC84u;
    // 0x1fac84: 0x0  nop
    ctx->pc = 0x1fac84u;
    // NOP
    ctx->pc = 0x1fac88u;
}
