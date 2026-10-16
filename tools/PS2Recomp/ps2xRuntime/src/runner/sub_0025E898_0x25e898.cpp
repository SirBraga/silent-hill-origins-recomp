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

// Function: sub_0025E898
// Address: 0x25e898 - 0x25e8f8
void sub_0025E898_0x25e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E898_0x25e898");
#endif

    switch (ctx->pc) {
        case 0x25e8c4u: goto label_25e8c4;
        default: break;
    }

    ctx->pc = 0x25e898u;

    // 0x25e898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e89c: 0x8f828604  lw          $v0, -0x79FC($gp)
    ctx->pc = 0x25e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936068)));
    // 0x25e8a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25e8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25e8a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25e8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e8ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e8b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e8b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25e8bc: 0xc0975f2  jal         func_25D7C8
    ctx->pc = 0x25E8BCu;
    SET_GPR_U32(ctx, 31, 0x25E8C4u);
    ctx->pc = 0x25E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E8BCu;
    // 0x25e8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D7C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D7C8u, 0x25E8BCu, 0x25E8C4u)) {
        return;
    }
    ctx->pc = 0x25E8C4u;
label_25e8c4:
    // 0x25e8c4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25e8c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25e8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8cc: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x25e8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x25e8d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e8d4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x25e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x25e8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e8dc: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x25e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x25e8e0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25e8e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25e8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e8e8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x25e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x25e8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25E8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8ECu;
        // 0x25e8f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E8F4u;
    // 0x25e8f4: 0x0  nop
    ctx->pc = 0x25e8f4u;
    // NOP
    ctx->pc = 0x25e8f8u;
}
