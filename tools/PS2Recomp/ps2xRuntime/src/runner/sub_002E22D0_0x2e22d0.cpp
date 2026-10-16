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

// Function: sub_002E22D0
// Address: 0x2e22d0 - 0x2e2318
void sub_002E22D0_0x2e22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E22D0_0x2e22d0");
#endif

    switch (ctx->pc) {
        case 0x2e2300u: goto label_2e2300;
        default: break;
    }

    ctx->pc = 0x2e22d0u;

    // 0x2e22d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e22d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e22d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e22d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e22d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e22dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e22dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e22e0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2e22e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e22e4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2e22e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e22e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E22E8u;
    {
        const bool branch_taken_0x2e22e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22E8u;
        // 0x2e22ec: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22e8) {
            ctx->pc = 0x2E2300u;
            goto label_2e2300;
        }
    }
    ctx->pc = 0x2E22F0u;
    // 0x2e22f0: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x2e22f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e22f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e22f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e22f8: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x2E22F8u;
    SET_GPR_U32(ctx, 31, 0x2E2300u);
    ctx->pc = 0x2E22FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E22F8u;
    // 0x2e22fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x2E22F8u, 0x2E2300u)) {
        return;
    }
    ctx->pc = 0x2E2300u;
label_2e2300:
    // 0x2e2300: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2308: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e2308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e230c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E230Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E230Cu;
        // 0x2e2310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E230Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2314u;
    // 0x2e2314: 0x0  nop
    ctx->pc = 0x2e2314u;
    // NOP
    ctx->pc = 0x2e2318u;
}
