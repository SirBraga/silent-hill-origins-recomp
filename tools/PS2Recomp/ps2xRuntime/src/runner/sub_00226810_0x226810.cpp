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

// Function: sub_00226810
// Address: 0x226810 - 0x226890
void sub_00226810_0x226810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226810_0x226810");
#endif

    switch (ctx->pc) {
        case 0x226878u: goto label_226878;
        default: break;
    }

    ctx->pc = 0x226810u;

    // 0x226810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226814: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22681c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22681cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226820: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x226820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x226824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x226824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x226828: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22682c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x22682cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x226830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226834: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x226834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x226838: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x226838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x22683c: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x22683cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x226840: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x226840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x226844: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x226844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x226848: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x226848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x22684c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x22684cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x226850: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x226850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x226854: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x226854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x226858: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x226858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x22685c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x22685cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x226860: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x226860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x226864: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x226864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x226868: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x226868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x22686c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x226870: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x226870u;
    SET_GPR_U32(ctx, 31, 0x226878u);
    ctx->pc = 0x226874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226870u;
    // 0x226874: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x226870u, 0x226878u)) {
        return;
    }
    ctx->pc = 0x226878u;
label_226878:
    // 0x226878: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x226878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22687c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22687cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226880: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226884: 0x3e00008  jr          $ra
    ctx->pc = 0x226884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226884u;
        // 0x226888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22688Cu;
    // 0x22688c: 0x0  nop
    ctx->pc = 0x22688cu;
    // NOP
    ctx->pc = 0x226890u;
}
