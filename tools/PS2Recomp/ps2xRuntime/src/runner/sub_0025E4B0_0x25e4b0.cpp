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

// Function: sub_0025E4B0
// Address: 0x25e4b0 - 0x25e4f8
void sub_0025E4B0_0x25e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E4B0_0x25e4b0");
#endif

    switch (ctx->pc) {
        case 0x25e4dcu: goto label_25e4dc;
        default: break;
    }

    ctx->pc = 0x25e4b0u;

    // 0x25e4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e4b4: 0x8f8285fc  lw          $v0, -0x7A04($gp)
    ctx->pc = 0x25e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    // 0x25e4b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25e4bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e4c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25e4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e4c8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x25e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25e4cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E4CCu;
    {
        const bool branch_taken_0x25e4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4CCu;
        // 0x25e4d0: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4cc) {
            ctx->pc = 0x25E4DCu;
            goto label_25e4dc;
        }
    }
    ctx->pc = 0x25E4D4u;
    // 0x25e4d4: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x25E4D4u;
    SET_GPR_U32(ctx, 31, 0x25E4DCu);
    ctx->pc = 0x25E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E4D4u;
    // 0x25e4d8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x25E4D4u, 0x25E4DCu)) {
        return;
    }
    ctx->pc = 0x25E4DCu;
label_25e4dc:
    // 0x25e4dc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x25e4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x25e4e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25e4e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25e4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e4e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e4ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x25E4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4F0u;
        // 0x25e4f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E4F8u;
}
