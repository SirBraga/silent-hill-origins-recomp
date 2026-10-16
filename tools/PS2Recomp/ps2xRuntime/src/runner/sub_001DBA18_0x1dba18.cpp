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

// Function: sub_001DBA18
// Address: 0x1dba18 - 0x1dba48
void sub_001DBA18_0x1dba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBA18_0x1dba18");
#endif

    switch (ctx->pc) {
        case 0x1dba38u: goto label_1dba38;
        default: break;
    }

    ctx->pc = 0x1dba18u;

    // 0x1dba18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dba18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dba1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dba20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBA20u;
    {
        const bool branch_taken_0x1dba20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA20u;
        // 0x1dba24: 0xe7ac0000  swc1        $f12, 0x0($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba20) {
            ctx->pc = 0x1DBA38u;
            goto label_1dba38;
        }
    }
    ctx->pc = 0x1DBA28u;
    // 0x1dba28: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dba28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1dba2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dba2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba30: 0xc09545a  jal         func_255168
    ctx->pc = 0x1DBA30u;
    SET_GPR_U32(ctx, 31, 0x1DBA38u);
    ctx->pc = 0x1DBA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA30u;
    // 0x1dba34: 0x24a5b9e8  addiu       $a1, $a1, -0x4618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1DBA30u, 0x1DBA38u)) {
        return;
    }
    ctx->pc = 0x1DBA38u;
label_1dba38:
    // 0x1dba38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dba38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dba3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA3Cu;
        // 0x1dba40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBA44u;
    // 0x1dba44: 0x0  nop
    ctx->pc = 0x1dba44u;
    // NOP
    ctx->pc = 0x1dba48u;
}
