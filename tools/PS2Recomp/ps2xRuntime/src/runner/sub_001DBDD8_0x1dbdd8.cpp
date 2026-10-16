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

// Function: sub_001DBDD8
// Address: 0x1dbdd8 - 0x1dbe08
void sub_001DBDD8_0x1dbdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBDD8_0x1dbdd8");
#endif

    switch (ctx->pc) {
        case 0x1dbdf8u: goto label_1dbdf8;
        default: break;
    }

    ctx->pc = 0x1dbdd8u;

    // 0x1dbdd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbddc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbde0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBDE0u;
    {
        const bool branch_taken_0x1dbde0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDE0u;
        // 0x1dbde4: 0xe7ac0000  swc1        $f12, 0x0($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbde0) {
            ctx->pc = 0x1DBDF8u;
            goto label_1dbdf8;
        }
    }
    ctx->pc = 0x1DBDE8u;
    // 0x1dbde8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dbde8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1dbdec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dbdecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdf0: 0xc09545a  jal         func_255168
    ctx->pc = 0x1DBDF0u;
    SET_GPR_U32(ctx, 31, 0x1DBDF8u);
    ctx->pc = 0x1DBDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDF0u;
    // 0x1dbdf4: 0x24a5bfb8  addiu       $a1, $a1, -0x4048 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1DBDF0u, 0x1DBDF8u)) {
        return;
    }
    ctx->pc = 0x1DBDF8u;
label_1dbdf8:
    // 0x1dbdf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDFCu;
        // 0x1dbe00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBE04u;
    // 0x1dbe04: 0x0  nop
    ctx->pc = 0x1dbe04u;
    // NOP
    ctx->pc = 0x1dbe08u;
}
