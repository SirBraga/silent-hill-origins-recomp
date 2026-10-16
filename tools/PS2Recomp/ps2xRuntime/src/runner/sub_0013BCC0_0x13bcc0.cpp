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

// Function: sub_0013BCC0
// Address: 0x13bcc0 - 0x13bd00
void sub_0013BCC0_0x13bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BCC0_0x13bcc0");
#endif

    switch (ctx->pc) {
        case 0x13bce8u: goto label_13bce8;
        default: break;
    }

    ctx->pc = 0x13bcc0u;

    // 0x13bcc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13bcc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13bcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13bcc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13bcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13bcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcd0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x13bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13bcd4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BCD4u;
    {
        const bool branch_taken_0x13bcd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCD4u;
        // 0x13bcd8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bcd4) {
            ctx->pc = 0x13BCE8u;
            goto label_13bce8;
        }
    }
    ctx->pc = 0x13BCDCu;
    // 0x13bcdc: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x13bcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x13bce0: 0xc095966  jal         func_256598
    ctx->pc = 0x13BCE0u;
    SET_GPR_U32(ctx, 31, 0x13BCE8u);
    ctx->pc = 0x13BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BCE0u;
    // 0x13bce4: 0x24a5bc18  addiu       $a1, $a1, -0x43E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256598u, 0x13BCE0u, 0x13BCE8u)) {
        return;
    }
    ctx->pc = 0x13BCE8u;
label_13bce8:
    // 0x13bce8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13bce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bcf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13bcf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x13BCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCF4u;
        // 0x13bcf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BCFCu;
    // 0x13bcfc: 0x0  nop
    ctx->pc = 0x13bcfcu;
    // NOP
    ctx->pc = 0x13bd00u;
}
