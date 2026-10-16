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

// Function: sub_0016F170
// Address: 0x16f170 - 0x16f1d0
void sub_0016F170_0x16f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F170_0x16f170");
#endif

    switch (ctx->pc) {
        case 0x16f18cu: goto label_16f18c;
        case 0x16f1c0u: goto label_16f1c0;
        default: break;
    }

    ctx->pc = 0x16f170u;

    // 0x16f170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f174: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16f174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16f178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f17c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f180: 0xc60c005c  lwc1        $f12, 0x5C($s0)
    ctx->pc = 0x16f180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16f184: 0xc075d62  jal         func_1D7588
    ctx->pc = 0x16F184u;
    SET_GPR_U32(ctx, 31, 0x16F18Cu);
    ctx->pc = 0x16F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F184u;
    // 0x16f188: 0xc60d0054  lwc1        $f13, 0x54($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7588u, 0x16F184u, 0x16F18Cu)) {
        return;
    }
    ctx->pc = 0x16F18Cu;
label_16f18c:
    // 0x16f18c: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x16f18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f194: 0x0  nop
    ctx->pc = 0x16f194u;
    // NOP
    // 0x16f198: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16f198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f19c: 0x0  nop
    ctx->pc = 0x16f19cu;
    // NOP
    // 0x16f1a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16F1A0u;
    {
        const bool branch_taken_0x16f1a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1A0u;
        // 0x16f1a4: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1a0) {
            ctx->pc = 0x16F1C0u;
            goto label_16f1c0;
        }
    }
    ctx->pc = 0x16F1A8u;
    // 0x16f1a8: 0xe6010068  swc1        $f1, 0x68($s0)
    ctx->pc = 0x16f1a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x16f1ac: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16f1b0: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x16f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x16f1b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16f1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1b8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16F1B8u;
    SET_GPR_U32(ctx, 31, 0x16F1C0u);
    ctx->pc = 0x16F1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F1B8u;
    // 0x16f1bc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16F1B8u, 0x16F1C0u)) {
        return;
    }
    ctx->pc = 0x16F1C0u;
label_16f1c0:
    // 0x16f1c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16f1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x16F1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1C8u;
        // 0x16f1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F1D0u;
}
