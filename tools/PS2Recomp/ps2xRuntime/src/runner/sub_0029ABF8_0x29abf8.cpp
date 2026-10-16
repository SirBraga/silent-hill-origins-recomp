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

// Function: sub_0029ABF8
// Address: 0x29abf8 - 0x29ac50
void sub_0029ABF8_0x29abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ABF8_0x29abf8");
#endif

    switch (ctx->pc) {
        case 0x29ac1cu: goto label_29ac1c;
        case 0x29ac38u: goto label_29ac38;
        default: break;
    }

    ctx->pc = 0x29abf8u;

    // 0x29abf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29abf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29abfc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x29abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x29ac00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ac04: 0x8c625e70  lw          $v0, 0x5E70($v1)
    ctx->pc = 0x29ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735E70u));
    // 0x29ac08: 0x24705e70  addiu       $s0, $v1, 0x5E70
    ctx->pc = 0x29ac08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24176));
    // 0x29ac0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29AC0Cu;
    {
        const bool branch_taken_0x29ac0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC0Cu;
        // 0x29ac10: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac0c) {
            ctx->pc = 0x29AC38u;
            goto label_29ac38;
        }
    }
    ctx->pc = 0x29AC14u;
    // 0x29ac14: 0xc0a713c  jal         func_29C4F0
    ctx->pc = 0x29AC14u;
    SET_GPR_U32(ctx, 31, 0x29AC1Cu);
    ctx->pc = 0x29C4F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C4F0u, 0x29AC14u, 0x29AC1Cu)) {
        return;
    }
    ctx->pc = 0x29AC1Cu;
label_29ac1c:
    // 0x29ac1c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x29ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x29ac20: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x29ac20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x29ac24: 0x24a5d910  addiu       $a1, $a1, -0x26F0
    ctx->pc = 0x29ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957328));
    // 0x29ac28: 0x24c6d908  addiu       $a2, $a2, -0x26F8
    ctx->pc = 0x29ac28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957320));
    // 0x29ac2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ac2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac30: 0xc07eafc  jal         func_1FABF0
    ctx->pc = 0x29AC30u;
    SET_GPR_U32(ctx, 31, 0x29AC38u);
    ctx->pc = 0x29AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AC30u;
    // 0x29ac34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABF0u, 0x29AC30u, 0x29AC38u)) {
        return;
    }
    ctx->pc = 0x29AC38u;
label_29ac38:
    // 0x29ac38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29ac38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ac3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ac40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ac40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ac44: 0x3e00008  jr          $ra
    ctx->pc = 0x29AC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC44u;
        // 0x29ac48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AC4Cu;
    // 0x29ac4c: 0x0  nop
    ctx->pc = 0x29ac4cu;
    // NOP
    ctx->pc = 0x29ac50u;
}
