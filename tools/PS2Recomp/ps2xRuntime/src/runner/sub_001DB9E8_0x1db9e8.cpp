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

// Function: sub_001DB9E8
// Address: 0x1db9e8 - 0x1dba18
void sub_001DB9E8_0x1db9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB9E8_0x1db9e8");
#endif

    switch (ctx->pc) {
        case 0x1dba04u: goto label_1dba04;
        default: break;
    }

    ctx->pc = 0x1db9e8u;

    // 0x1db9e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db9ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1db9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1db9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db9f4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB9F4u;
    {
        const bool branch_taken_0x1db9f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9F4u;
        // 0x1db9f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9f4) {
            ctx->pc = 0x1DBA04u;
            goto label_1dba04;
        }
    }
    ctx->pc = 0x1DB9FCu;
    // 0x1db9fc: 0xc076e92  jal         func_1DBA48
    ctx->pc = 0x1DB9FCu;
    SET_GPR_U32(ctx, 31, 0x1DBA04u);
    ctx->pc = 0x1DBA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB9FCu;
    // 0x1dba00: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBA48u, 0x1DB9FCu, 0x1DBA04u)) {
        return;
    }
    ctx->pc = 0x1DBA04u;
label_1dba04:
    // 0x1dba04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dba04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dba08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dba0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dba0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dba10: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA10u;
        // 0x1dba14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBA18u;
}
