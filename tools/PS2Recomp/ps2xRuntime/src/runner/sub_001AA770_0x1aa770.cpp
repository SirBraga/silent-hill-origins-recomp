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

// Function: sub_001AA770
// Address: 0x1aa770 - 0x1aa7b8
void sub_001AA770_0x1aa770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA770_0x1aa770");
#endif

    switch (ctx->pc) {
        case 0x1aa78cu: goto label_1aa78c;
        case 0x1aa79cu: goto label_1aa79c;
        default: break;
    }

    ctx->pc = 0x1aa770u;

    // 0x1aa770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa774: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aa774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aa778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa77c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA77Cu;
    {
        const bool branch_taken_0x1aa77c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA77Cu;
        // 0x1aa780: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa77c) {
            ctx->pc = 0x1AA7A0u;
            goto label_1aa7a0;
        }
    }
    ctx->pc = 0x1AA784u;
    // 0x1aa784: 0xc06951c  jal         func_1A5470
    ctx->pc = 0x1AA784u;
    SET_GPR_U32(ctx, 31, 0x1AA78Cu);
    ctx->pc = 0x1A5470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A5470u, 0x1AA784u, 0x1AA78Cu)) {
        return;
    }
    ctx->pc = 0x1AA78Cu;
label_1aa78c:
    // 0x1aa78c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA78Cu;
    {
        const bool branch_taken_0x1aa78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa78c) {
            ctx->pc = 0x1AA790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA78Cu;
            // 0x1aa790: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA7A4u;
            goto label_1aa7a4;
        }
    }
    ctx->pc = 0x1AA794u;
    // 0x1aa794: 0xc069c3c  jal         func_1A70F0
    ctx->pc = 0x1AA794u;
    SET_GPR_U32(ctx, 31, 0x1AA79Cu);
    ctx->pc = 0x1AA798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA794u;
    // 0x1aa798: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A70F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A70F0u, 0x1AA794u, 0x1AA79Cu)) {
        return;
    }
    ctx->pc = 0x1AA79Cu;
label_1aa79c:
    // 0x1aa79c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7a0:
    // 0x1aa7a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aa7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7a4:
    // 0x1aa7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa7a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aa7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7ACu;
        // 0x1aa7b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA7B4u;
    // 0x1aa7b4: 0x0  nop
    ctx->pc = 0x1aa7b4u;
    // NOP
    ctx->pc = 0x1aa7b8u;
}
