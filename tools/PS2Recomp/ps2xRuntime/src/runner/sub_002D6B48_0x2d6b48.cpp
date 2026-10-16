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

// Function: sub_002D6B48
// Address: 0x2d6b48 - 0x2d6b90
void sub_002D6B48_0x2d6b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6B48_0x2d6b48");
#endif

    switch (ctx->pc) {
        case 0x2d6b50u: goto label_2d6b50;
        default: break;
    }

    ctx->pc = 0x2d6b48u;

    // 0x2d6b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B48u;
        // 0x2d6b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6B50u;
label_2d6b50:
    // 0x2d6b50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d6b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d6b54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d6b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6b58: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2d6b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2d6b5c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2d6b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2d6b60: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2d6b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2d6b64: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2d6b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2d6b68: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2d6b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2d6b6c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2d6b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2d6b70: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2d6b70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2d6b74: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2d6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6b78: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2d6b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2d6b7c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2d6b7cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x2d6b80: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2d6b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2d6b84: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B84u;
        // 0x2d6b88: 0xe4c10004  swc1        $f1, 0x4($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6B8Cu;
    // 0x2d6b8c: 0x0  nop
    ctx->pc = 0x2d6b8cu;
    // NOP
    ctx->pc = 0x2d6b90u;
}
