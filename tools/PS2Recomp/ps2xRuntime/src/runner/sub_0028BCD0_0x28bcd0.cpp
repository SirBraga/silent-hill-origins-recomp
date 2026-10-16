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

// Function: sub_0028BCD0
// Address: 0x28bcd0 - 0x28bd18
void sub_0028BCD0_0x28bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BCD0_0x28bcd0");
#endif

    switch (ctx->pc) {
        case 0x28bcf0u: goto label_28bcf0;
        default: break;
    }

    ctx->pc = 0x28bcd0u;

    // 0x28bcd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28bcd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28bcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28bcd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28bcdc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28bcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28bce4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28bce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bce8: 0xc0a261c  jal         func_289870
    ctx->pc = 0x28BCE8u;
    SET_GPR_U32(ctx, 31, 0x28BCF0u);
    ctx->pc = 0x28BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCE8u;
    // 0x28bcec: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289870u, 0x28BCE8u, 0x28BCF0u)) {
        return;
    }
    ctx->pc = 0x28BCF0u;
label_28bcf0:
    // 0x28bcf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28bcf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28bcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bcf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28bcfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x28bd00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28bd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28bd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bd08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bd08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x28BD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD0Cu;
        // 0x28bd10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BD14u;
    // 0x28bd14: 0x0  nop
    ctx->pc = 0x28bd14u;
    // NOP
    ctx->pc = 0x28bd18u;
}
