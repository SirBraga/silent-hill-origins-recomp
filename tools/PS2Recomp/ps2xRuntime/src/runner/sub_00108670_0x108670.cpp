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

// Function: sub_00108670
// Address: 0x108670 - 0x1086e0
void sub_00108670_0x108670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108670_0x108670");
#endif

    ctx->pc = 0x108670u;

    // 0x108670: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x108670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x108674: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x108674u;
    {
        const bool branch_taken_0x108674 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x108674) {
            ctx->pc = 0x1086C4u;
            goto label_1086c4;
        }
    }
    ctx->pc = 0x10867Cu;
    // 0x10867c: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10867Cu;
    {
        const bool branch_taken_0x10867c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10867Cu;
        // 0x108680: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10867c) {
            ctx->pc = 0x1086C4u;
            goto label_1086c4;
        }
    }
    ctx->pc = 0x108684u;
    // 0x108684: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x108688: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x108688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10868c: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x10868cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x108690: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108694: 0x24424238  addiu       $v0, $v0, 0x4238
    ctx->pc = 0x108694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16952));
    // 0x108698: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x108698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x10869c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10869cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1086a0: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x1086a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1086a4: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1086a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1086a8: 0xe442003c  swc1        $f2, 0x3C($v0)
    ctx->pc = 0x1086a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1086ac: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x1086acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1086b0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1086b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1086b4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1086b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1086b8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1086b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1086bc: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x1086bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x1086c0: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1086c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_1086c4:
    // 0x1086c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1086C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1086C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1086CCu;
    // 0x1086cc: 0x0  nop
    ctx->pc = 0x1086ccu;
    // NOP
    // 0x1086d0: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1086d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1086d4: 0x0  nop
    ctx->pc = 0x1086d4u;
    // NOP
    // 0x1086d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1086d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1086dc: 0x0  nop
    ctx->pc = 0x1086dcu;
    // NOP
    ctx->pc = 0x1086e0u;
}
