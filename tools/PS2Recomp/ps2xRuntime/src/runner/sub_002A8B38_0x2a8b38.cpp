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

// Function: sub_002A8B38
// Address: 0x2a8b38 - 0x2a8b98
void sub_002A8B38_0x2a8b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8B38_0x2a8b38");
#endif

    switch (ctx->pc) {
        case 0x2a8b64u: goto label_2a8b64;
        default: break;
    }

    ctx->pc = 0x2a8b38u;

    // 0x2a8b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a8b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8b3c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2a8b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2a8b40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a8b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a8b44: 0x24a5e3b8  addiu       $a1, $a1, -0x1C48
    ctx->pc = 0x2a8b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960056));
    // 0x2a8b48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a8b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b4c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2a8b4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a8b50: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2a8b50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a8b54: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2a8b54u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2a8b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8b5c: 0xc0aa872  jal         func_2AA1C8
    ctx->pc = 0x2A8B5Cu;
    SET_GPR_U32(ctx, 31, 0x2A8B64u);
    ctx->pc = 0x2A8B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B5Cu;
    // 0x2a8b60: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA1C8u, 0x2A8B5Cu, 0x2A8B64u)) {
        return;
    }
    ctx->pc = 0x2A8B64u;
label_2a8b64:
    // 0x2a8b64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8b68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a8b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b6c: 0xe6140040  swc1        $f20, 0x40($s0)
    ctx->pc = 0x2a8b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2a8b70: 0xe615004c  swc1        $f21, 0x4C($s0)
    ctx->pc = 0x2a8b70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2a8b74: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2a8b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2a8b78: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2a8b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2a8b7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a8b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8b84: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2a8b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a8b88: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2a8b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a8b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B8Cu;
        // 0x2a8b90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8B94u;
    // 0x2a8b94: 0x0  nop
    ctx->pc = 0x2a8b94u;
    // NOP
    ctx->pc = 0x2a8b98u;
}
