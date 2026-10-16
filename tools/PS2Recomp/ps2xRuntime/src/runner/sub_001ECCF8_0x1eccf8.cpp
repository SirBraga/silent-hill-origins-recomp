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

// Function: sub_001ECCF8
// Address: 0x1eccf8 - 0x1ecd58
void sub_001ECCF8_0x1eccf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECCF8_0x1eccf8");
#endif

    switch (ctx->pc) {
        case 0x1ecd0cu: goto label_1ecd0c;
        default: break;
    }

    ctx->pc = 0x1eccf8u;

    // 0x1eccf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eccf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eccfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1eccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ecd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ecd04: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1ECD04u;
    SET_GPR_U32(ctx, 31, 0x1ECD0Cu);
    ctx->pc = 0x1ECD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD04u;
    // 0x1ecd08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECDA0u, 0x1ECD04u, 0x1ECD0Cu)) {
        return;
    }
    ctx->pc = 0x1ECD0Cu;
label_1ecd0c:
    // 0x1ecd0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ecd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ecd10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ecd10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecd14: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1ecd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1ecd18: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1ecd18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1ecd1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ecd1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ecd20: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1ecd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1ecd24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ecd24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ecd28: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1ecd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1ecd2c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1ecd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1ecd30: 0xe6020044  swc1        $f2, 0x44($s0)
    ctx->pc = 0x1ecd30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1ecd34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ecd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ecd38: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1ecd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1ecd3c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1ecd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1ecd40: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1ecd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1ecd44: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1ecd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1ecd48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ecd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecd4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecd50: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD50u;
        // 0x1ecd54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECD58u;
}
