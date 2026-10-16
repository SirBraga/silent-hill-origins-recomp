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

// Function: sub_002EB958
// Address: 0x2eb958 - 0x2eb9a8
void sub_002EB958_0x2eb958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB958_0x2eb958");
#endif

    switch (ctx->pc) {
        case 0x2eb96cu: goto label_2eb96c;
        case 0x2eb990u: goto label_2eb990;
        case 0x2eb998u: goto label_2eb998;
        default: break;
    }

    ctx->pc = 0x2eb958u;

    // 0x2eb958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb95c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2eb95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2eb960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eb960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eb964: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2EB964u;
    SET_GPR_U32(ctx, 31, 0x2EB96Cu);
    ctx->pc = 0x2EB968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB964u;
    // 0x2eb968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2EB964u, 0x2EB96Cu)) {
        return;
    }
    ctx->pc = 0x2EB96Cu;
label_2eb96c:
    // 0x2eb96c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2eb96cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb970: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2eb970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb974: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb97c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb980: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x2eb980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2eb984: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb988: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EB988u;
    SET_GPR_U32(ctx, 31, 0x2EB990u);
    ctx->pc = 0x2EB98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB988u;
    // 0x2eb98c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EB988u, 0x2EB990u)) {
        return;
    }
    ctx->pc = 0x2EB990u;
label_2eb990:
    // 0x2eb990: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2EB990u;
    SET_GPR_U32(ctx, 31, 0x2EB998u);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2EB990u, 0x2EB998u)) {
        return;
    }
    ctx->pc = 0x2EB998u;
label_2eb998:
    // 0x2eb998: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2eb998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb99c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9A0u;
        // 0x2eb9a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB9A8u;
}
