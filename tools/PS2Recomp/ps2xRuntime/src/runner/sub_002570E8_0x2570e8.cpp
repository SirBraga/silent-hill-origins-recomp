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

// Function: sub_002570E8
// Address: 0x2570e8 - 0x257128
void sub_002570E8_0x2570e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002570E8_0x2570e8");
#endif

    switch (ctx->pc) {
        case 0x257110u: goto label_257110;
        default: break;
    }

    ctx->pc = 0x2570e8u;

    // 0x2570e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2570e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2570ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2570ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2570f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2570f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2570f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2570f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570f8: 0xe60c0014  swc1        $f12, 0x14($s0)
    ctx->pc = 0x2570f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2570fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2570fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x257100: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257100u;
    {
        const bool branch_taken_0x257100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x257104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257100u;
        // 0x257104: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257100) {
            ctx->pc = 0x257114u;
            goto label_257114;
        }
    }
    ctx->pc = 0x257108u;
    // 0x257108: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x257108u;
    SET_GPR_U32(ctx, 31, 0x257110u);
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x257108u, 0x257110u)) {
        return;
    }
    ctx->pc = 0x257110u;
label_257110:
    // 0x257110: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x257110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257114:
    // 0x257114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x257118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25711c: 0x3e00008  jr          $ra
    ctx->pc = 0x25711Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25711Cu;
        // 0x257120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25711Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257124u;
    // 0x257124: 0x0  nop
    ctx->pc = 0x257124u;
    // NOP
    ctx->pc = 0x257128u;
}
