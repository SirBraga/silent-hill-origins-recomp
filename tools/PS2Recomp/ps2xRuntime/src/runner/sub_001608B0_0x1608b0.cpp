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

// Function: sub_001608B0
// Address: 0x1608b0 - 0x160900
void sub_001608B0_0x1608b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001608B0_0x1608b0");
#endif

    switch (ctx->pc) {
        case 0x1608ccu: goto label_1608cc;
        case 0x1608ecu: goto label_1608ec;
        default: break;
    }

    ctx->pc = 0x1608b0u;

    // 0x1608b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1608b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1608b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1608b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1608b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1608b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1608bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1608bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1608c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1608c4: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x1608C4u;
    SET_GPR_U32(ctx, 31, 0x1608CCu);
    ctx->pc = 0x1608C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1608C4u;
    // 0x1608c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1608C4u, 0x1608CCu)) {
        return;
    }
    ctx->pc = 0x1608CCu;
label_1608cc:
    // 0x1608cc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1608ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1608d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1608d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1608d4: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1608d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x1608d8: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1608D8u;
    {
        const bool branch_taken_0x1608d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1608d8) {
            ctx->pc = 0x1608DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1608D8u;
            // 0x1608dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1608F0u;
            goto label_1608f0;
        }
    }
    ctx->pc = 0x1608E0u;
    // 0x1608e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1608e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1608e4: 0xc057d38  jal         func_15F4E0
    ctx->pc = 0x1608E4u;
    SET_GPR_U32(ctx, 31, 0x1608ECu);
    ctx->pc = 0x1608E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1608E4u;
    // 0x1608e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F4E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15F4E0u, 0x1608E4u, 0x1608ECu)) {
        return;
    }
    ctx->pc = 0x1608ECu;
label_1608ec:
    // 0x1608ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1608ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1608f0:
    // 0x1608f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1608f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1608f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1608f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1608f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1608F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1608FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608F8u;
        // 0x1608fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1608F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160900u;
}
