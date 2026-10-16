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

// Function: sub_00111B18
// Address: 0x111b18 - 0x111b70
void sub_00111B18_0x111b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111B18_0x111b18");
#endif

    switch (ctx->pc) {
        case 0x111b50u: goto label_111b50;
        default: break;
    }

    ctx->pc = 0x111b18u;

    // 0x111b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111b1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x111b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x111b20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111b24: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x111b24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x111b28: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x111b28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x111b2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x111b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x111b30: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111b34: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x111b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x111b38: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x111b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x111b3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x111b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x111b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111b48: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x111B48u;
    SET_GPR_U32(ctx, 31, 0x111B50u);
    ctx->pc = 0x111B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B48u;
    // 0x111b4c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x111B48u, 0x111B50u)) {
        return;
    }
    ctx->pc = 0x111B50u;
label_111b50:
    // 0x111b50: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x111b50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x111b54: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x111b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x111b58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x111b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111b60: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x111b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x111b64: 0x3e00008  jr          $ra
    ctx->pc = 0x111B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B64u;
        // 0x111b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111B6Cu;
    // 0x111b6c: 0x0  nop
    ctx->pc = 0x111b6cu;
    // NOP
    ctx->pc = 0x111b70u;
}
