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

// Function: sub_001DB8F0
// Address: 0x1db8f0 - 0x1db920
void sub_001DB8F0_0x1db8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB8F0_0x1db8f0");
#endif

    switch (ctx->pc) {
        case 0x1db90cu: goto label_1db90c;
        default: break;
    }

    ctx->pc = 0x1db8f0u;

    // 0x1db8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db8f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1db8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1db8f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db8fc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB8FCu;
    {
        const bool branch_taken_0x1db8fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8FCu;
        // 0x1db900: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8fc) {
            ctx->pc = 0x1DB90Cu;
            goto label_1db90c;
        }
    }
    ctx->pc = 0x1DB904u;
    // 0x1db904: 0xc076e52  jal         func_1DB948
    ctx->pc = 0x1DB904u;
    SET_GPR_U32(ctx, 31, 0x1DB90Cu);
    ctx->pc = 0x1DB908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB904u;
    // 0x1db908: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB948u, 0x1DB904u, 0x1DB90Cu)) {
        return;
    }
    ctx->pc = 0x1DB90Cu;
label_1db90c:
    // 0x1db90c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1db90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db914: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1db914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db918: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB918u;
        // 0x1db91c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB920u;
}
