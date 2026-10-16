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

// Function: sub_002D6F48
// Address: 0x2d6f48 - 0x2d6fb0
void sub_002D6F48_0x2d6f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6F48_0x2d6f48");
#endif

    ctx->pc = 0x2d6f48u;

    // 0x2d6f48: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x2d6f48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d6f4c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2d6f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d6f50: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x2d6f50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6f54: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d6f58: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x2d6f58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2d6f5c: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x2d6f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d6f60: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x2d6f60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d6f64: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d6f64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d6f68: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2d6f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d6f6c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x2d6f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2d6f70: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2d6f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d6f74: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x2d6f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2d6f78: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2d6f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d6f7c: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x2d6f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x2d6f80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d6f84: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x2d6f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x2d6f88: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x2d6f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2d6f8c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x2d6f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x2d6f90: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x2d6f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x2d6f94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d6f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f98: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x2d6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x2d6f9c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2d6f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2d6fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FA0u;
        // 0x2d6fa4: 0xad264040  sw          $a2, 0x4040($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 16448), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6FA8u;
    // 0x2d6fa8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d6fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d6fac: 0x0  nop
    ctx->pc = 0x2d6facu;
    // NOP
    ctx->pc = 0x2d6fb0u;
}
