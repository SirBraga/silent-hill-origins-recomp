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

// Function: sub_00313C28
// Address: 0x313c28 - 0x313c98
void sub_00313C28_0x313c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313C28_0x313c28");
#endif

    switch (ctx->pc) {
        case 0x313c80u: goto label_313c80;
        default: break;
    }

    ctx->pc = 0x313c28u;

    // 0x313c28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x313c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x313c2c: 0x3c0c0068  lui         $t4, 0x68
    ctx->pc = 0x313c2cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)104 << 16));
    // 0x313c30: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x313c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x313c34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x313c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313c3c: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x313c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x313c40: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x313c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x313c44: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x313c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x313c48: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x313c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x313c4c: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x313c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x313c50: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x313c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x313c54: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x313c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x313c58: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x313c58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x313c5c: 0xe7ae004c  swc1        $f14, 0x4C($sp)
    ctx->pc = 0x313c5cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x313c60: 0xe7b00050  swc1        $f16, 0x50($sp)
    ctx->pc = 0x313c60u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x313c64: 0xe7b20054  swc1        $f18, 0x54($sp)
    ctx->pc = 0x313c64u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x313c68: 0x8d846ccc  lw          $a0, 0x6CCC($t4)
    ctx->pc = 0x313c68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x686CCCu));
    // 0x313c6c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x313c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x313c70: 0xac440054  sw          $a0, 0x54($v0)
    ctx->pc = 0x313c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 4));
    // 0x313c74: 0x8d836ccc  lw          $v1, 0x6CCC($t4)
    ctx->pc = 0x313c74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686CCCu));
    // 0x313c78: 0xc0c5fe4  jal         func_317F90
    ctx->pc = 0x313C78u;
    SET_GPR_U32(ctx, 31, 0x313C80u);
    ctx->pc = 0x313C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313C78u;
    // 0x313c7c: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317F90u, 0x313C78u, 0x313C80u)) {
        return;
    }
    ctx->pc = 0x313C80u;
label_313c80:
    // 0x313c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313c84: 0x3e00008  jr          $ra
    ctx->pc = 0x313C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C84u;
        // 0x313c88: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313C8Cu;
    // 0x313c8c: 0x0  nop
    ctx->pc = 0x313c8cu;
    // NOP
    // 0x313c90: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x313c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x313c94: 0x0  nop
    ctx->pc = 0x313c94u;
    // NOP
    ctx->pc = 0x313c98u;
}
