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

// Function: sub_00299C40
// Address: 0x299c40 - 0x299c98
void sub_00299C40_0x299c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299C40_0x299c40");
#endif

    switch (ctx->pc) {
        case 0x299c64u: goto label_299c64;
        case 0x299c80u: goto label_299c80;
        default: break;
    }

    ctx->pc = 0x299c40u;

    // 0x299c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299c44: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x299c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x299c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299c4c: 0x8c625e60  lw          $v0, 0x5E60($v1)
    ctx->pc = 0x299c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735E60u));
    // 0x299c50: 0x24705e60  addiu       $s0, $v1, 0x5E60
    ctx->pc = 0x299c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24160));
    // 0x299c54: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x299C54u;
    {
        const bool branch_taken_0x299c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C54u;
        // 0x299c58: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c54) {
            ctx->pc = 0x299C80u;
            goto label_299c80;
        }
    }
    ctx->pc = 0x299C5Cu;
    // 0x299c5c: 0xc0a6afe  jal         func_29ABF8
    ctx->pc = 0x299C5Cu;
    SET_GPR_U32(ctx, 31, 0x299C64u);
    ctx->pc = 0x29ABF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29ABF8u, 0x299C5Cu, 0x299C64u)) {
        return;
    }
    ctx->pc = 0x299C64u;
label_299c64:
    // 0x299c64: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x299c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x299c68: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x299c68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x299c6c: 0x24a5d888  addiu       $a1, $a1, -0x2778
    ctx->pc = 0x299c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957192));
    // 0x299c70: 0x24c6d8a8  addiu       $a2, $a2, -0x2758
    ctx->pc = 0x299c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957224));
    // 0x299c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c78: 0xc07eafc  jal         func_1FABF0
    ctx->pc = 0x299C78u;
    SET_GPR_U32(ctx, 31, 0x299C80u);
    ctx->pc = 0x299C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299C78u;
    // 0x299c7c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABF0u, 0x299C78u, 0x299C80u)) {
        return;
    }
    ctx->pc = 0x299C80u;
label_299c80:
    // 0x299c80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x299C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C8Cu;
        // 0x299c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299C94u;
    // 0x299c94: 0x0  nop
    ctx->pc = 0x299c94u;
    // NOP
    ctx->pc = 0x299c98u;
}
