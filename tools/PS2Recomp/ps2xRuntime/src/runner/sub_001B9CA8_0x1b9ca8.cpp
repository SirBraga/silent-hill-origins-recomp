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

// Function: sub_001B9CA8
// Address: 0x1b9ca8 - 0x1b9d00
void sub_001B9CA8_0x1b9ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9CA8_0x1b9ca8");
#endif

    switch (ctx->pc) {
        case 0x1b9cbcu: goto label_1b9cbc;
        case 0x1b9cd4u: goto label_1b9cd4;
        default: break;
    }

    ctx->pc = 0x1b9ca8u;

    // 0x1b9ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9cac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b9cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b9cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9cb4: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1B9CB4u;
    SET_GPR_U32(ctx, 31, 0x1B9CBCu);
    ctx->pc = 0x1B9CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CB4u;
    // 0x1b9cb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1B9CB4u, 0x1B9CBCu)) {
        return;
    }
    ctx->pc = 0x1B9CBCu;
label_1b9cbc:
    // 0x1b9cbc: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x1b9cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x1b9cc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9cc4: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x1b9cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x1b9cc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9ccc: 0xc06d152  jal         func_1B4548
    ctx->pc = 0x1B9CCCu;
    SET_GPR_U32(ctx, 31, 0x1B9CD4u);
    ctx->pc = 0x1B9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CCCu;
    // 0x1b9cd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4548u, 0x1B9CCCu, 0x1B9CD4u)) {
        return;
    }
    ctx->pc = 0x1B9CD4u;
label_1b9cd4:
    // 0x1b9cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b9cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9cdc: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x1b9cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
    // 0x1b9ce0: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x1b9ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x1b9ce4: 0xae020278  sw          $v0, 0x278($s0)
    ctx->pc = 0x1b9ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
    // 0x1b9ce8: 0xe600027c  swc1        $f0, 0x27C($s0)
    ctx->pc = 0x1b9ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
    // 0x1b9cec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b9cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CF4u;
        // 0x1b9cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9CFCu;
    // 0x1b9cfc: 0x0  nop
    ctx->pc = 0x1b9cfcu;
    // NOP
    ctx->pc = 0x1b9d00u;
}
