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

// Function: sub_00309A18
// Address: 0x309a18 - 0x309aa8
void sub_00309A18_0x309a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309A18_0x309a18");
#endif

    ctx->pc = 0x309a18u;

    // 0x309a18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x309a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x309a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309a20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x309a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x309a24: 0x3e00008  jr          $ra
    ctx->pc = 0x309A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A24u;
        // 0x309a28: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309A2Cu;
    // 0x309a2c: 0x0  nop
    ctx->pc = 0x309a2cu;
    // NOP
    // 0x309a30: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x309a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
    // 0x309a34: 0x0  nop
    ctx->pc = 0x309a34u;
    // NOP
    // 0x309a38: 0x0  nop
    ctx->pc = 0x309a38u;
    // NOP
    // 0x309a3c: 0x0  nop
    ctx->pc = 0x309a3cu;
    // NOP
    // 0x309a40: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x309a40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x309a44: 0x0  nop
    ctx->pc = 0x309a44u;
    // NOP
    // 0x309a48: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x309a48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x309a4c: 0x0  nop
    ctx->pc = 0x309a4cu;
    // NOP
    // 0x309a50: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x309a50u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x309a54: 0x0  nop
    ctx->pc = 0x309a54u;
    // NOP
    // 0x309a58: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x309a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x309a5c: 0x0  nop
    ctx->pc = 0x309a5cu;
    // NOP
    // 0x309a60: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x309a60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x309a64: 0x0  nop
    ctx->pc = 0x309a64u;
    // NOP
    // 0x309a68: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x309a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x309a6c: 0x0  nop
    ctx->pc = 0x309a6cu;
    // NOP
    // 0x309a70: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x309a70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x309a74: 0x0  nop
    ctx->pc = 0x309a74u;
    // NOP
    // 0x309a78: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x309a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x309a7c: 0x0  nop
    ctx->pc = 0x309a7cu;
    // NOP
    // 0x309a80: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x309a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x309a84: 0x0  nop
    ctx->pc = 0x309a84u;
    // NOP
    // 0x309a88: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x309a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x309a8c: 0x0  nop
    ctx->pc = 0x309a8cu;
    // NOP
    // 0x309a90: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x309a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x309a94: 0x0  nop
    ctx->pc = 0x309a94u;
    // NOP
    // 0x309a98: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x309a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x309a9c: 0x0  nop
    ctx->pc = 0x309a9cu;
    // NOP
    // 0x309aa0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x309aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x309aa4: 0x0  nop
    ctx->pc = 0x309aa4u;
    // NOP
    ctx->pc = 0x309aa8u;
}
