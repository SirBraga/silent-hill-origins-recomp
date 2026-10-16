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

// Function: sub_001EDE08
// Address: 0x1ede08 - 0x1ede50
void sub_001EDE08_0x1ede08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDE08_0x1ede08");
#endif

    switch (ctx->pc) {
        case 0x1ede38u: goto label_1ede38;
        default: break;
    }

    ctx->pc = 0x1ede08u;

    // 0x1ede08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ede08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ede0c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ede0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1ede10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ede10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ede14: 0x8c62e7bc  lw          $v0, -0x1844($v1)
    ctx->pc = 0x1ede14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1ede18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ede18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ede1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ede20: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ede20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ede24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ede24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ede28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDE28u;
    {
        const bool branch_taken_0x1ede28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE28u;
        // 0x1ede2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede28) {
            ctx->pc = 0x1EDE3Cu;
            goto label_1ede3c;
        }
    }
    ctx->pc = 0x1EDE30u;
    // 0x1ede30: 0xc07b074  jal         func_1EC1D0
    ctx->pc = 0x1EDE30u;
    SET_GPR_U32(ctx, 31, 0x1EDE38u);
    ctx->pc = 0x1EC1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC1D0u, 0x1EDE30u, 0x1EDE38u)) {
        return;
    }
    ctx->pc = 0x1EDE38u;
label_1ede38:
    // 0x1ede38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ede38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ede3c:
    // 0x1ede3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ede3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ede40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ede40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ede44: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE44u;
        // 0x1ede48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDE4Cu;
    // 0x1ede4c: 0x0  nop
    ctx->pc = 0x1ede4cu;
    // NOP
    ctx->pc = 0x1ede50u;
}
