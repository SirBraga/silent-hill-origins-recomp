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

// Function: sub_0021ACA8
// Address: 0x21aca8 - 0x21ace8
void sub_0021ACA8_0x21aca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ACA8_0x21aca8");
#endif

    switch (ctx->pc) {
        case 0x21acc8u: goto label_21acc8;
        default: break;
    }

    ctx->pc = 0x21aca8u;

    // 0x21aca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21aca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21acac: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x21acacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x21acb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21acb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21acb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21acb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21acb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21acbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21acc0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x21ACC0u;
    SET_GPR_U32(ctx, 31, 0x21ACC8u);
    ctx->pc = 0x21ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ACC0u;
    // 0x21acc4: 0x34c63880  ori         $a2, $a2, 0x3880 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14464);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x21ACC0u, 0x21ACC8u)) {
        return;
    }
    ctx->pc = 0x21ACC8u;
label_21acc8:
    // 0x21acc8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x21acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x21accc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21acccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acd0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x21acd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x21acd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21acd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21acd8: 0xae003880  sw          $zero, 0x3880($s0)
    ctx->pc = 0x21acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14464), GPR_U32(ctx, 0));
    // 0x21acdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21acdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ace0: 0x3e00008  jr          $ra
    ctx->pc = 0x21ACE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACE0u;
        // 0x21ace4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ACE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ACE8u;
}
