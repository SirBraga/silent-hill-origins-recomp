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

// Function: sub_002D6C00
// Address: 0x2d6c00 - 0x2d6c50
void sub_002D6C00_0x2d6c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6C00_0x2d6c00");
#endif

    switch (ctx->pc) {
        case 0x2d6c28u: goto label_2d6c28;
        case 0x2d6c38u: goto label_2d6c38;
        default: break;
    }

    ctx->pc = 0x2d6c00u;

    // 0x2d6c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6c04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d6c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6c08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d6c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d6c0c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d6c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d6c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d6c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d6c1c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2d6c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d6c20: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2D6C20u;
    SET_GPR_U32(ctx, 31, 0x2D6C28u);
    ctx->pc = 0x2D6C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C20u;
    // 0x2d6c24: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2D6C20u, 0x2D6C28u)) {
        return;
    }
    ctx->pc = 0x2D6C28u;
label_2d6c28:
    // 0x2d6c28: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2d6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d6c2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d6c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c30: 0xc0ab47e  jal         func_2AD1F8
    ctx->pc = 0x2D6C30u;
    SET_GPR_U32(ctx, 31, 0x2D6C38u);
    ctx->pc = 0x2D6C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C30u;
    // 0x2d6c34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD1F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD1F8u, 0x2D6C30u, 0x2D6C38u)) {
        return;
    }
    ctx->pc = 0x2D6C38u;
label_2d6c38:
    // 0x2d6c38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d6c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d6c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6c40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d6c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6c44: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C44u;
        // 0x2d6c48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6C4Cu;
    // 0x2d6c4c: 0x0  nop
    ctx->pc = 0x2d6c4cu;
    // NOP
    ctx->pc = 0x2d6c50u;
}
