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

// Function: sub_0025E0B8
// Address: 0x25e0b8 - 0x25e110
void sub_0025E0B8_0x25e0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E0B8_0x25e0b8");
#endif

    switch (ctx->pc) {
        case 0x25e0d8u: goto label_25e0d8;
        case 0x25e0e8u: goto label_25e0e8;
        default: break;
    }

    ctx->pc = 0x25e0b8u;

    // 0x25e0b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e0bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25e0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25e0c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e0c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25e0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e0c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25e0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e0cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e0d0: 0xc097188  jal         func_25C620
    ctx->pc = 0x25E0D0u;
    SET_GPR_U32(ctx, 31, 0x25E0D8u);
    ctx->pc = 0x25E0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E0D0u;
    // 0x25e0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C620u, 0x25E0D0u, 0x25E0D8u)) {
        return;
    }
    ctx->pc = 0x25E0D8u;
label_25e0d8:
    // 0x25e0d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25e0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e0e0: 0xc09638c  jal         func_258E30
    ctx->pc = 0x25E0E0u;
    SET_GPR_U32(ctx, 31, 0x25E0E8u);
    ctx->pc = 0x25E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E0E0u;
    // 0x25e0e4: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258E30u, 0x25E0E0u, 0x25E0E8u)) {
        return;
    }
    ctx->pc = 0x25E0E8u;
label_25e0e8:
    // 0x25e0e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25e0e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e0ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e0f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25e0f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e0f4: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x25e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
    // 0x25e0f8: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x25e0f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
    // 0x25e0fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e100: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25e100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e104: 0x3e00008  jr          $ra
    ctx->pc = 0x25E104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E104u;
        // 0x25e108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E10Cu;
    // 0x25e10c: 0x0  nop
    ctx->pc = 0x25e10cu;
    // NOP
    ctx->pc = 0x25e110u;
}
