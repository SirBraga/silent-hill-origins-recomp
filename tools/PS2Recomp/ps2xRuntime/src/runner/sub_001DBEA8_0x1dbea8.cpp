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

// Function: sub_001DBEA8
// Address: 0x1dbea8 - 0x1dbed8
void sub_001DBEA8_0x1dbea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBEA8_0x1dbea8");
#endif

    switch (ctx->pc) {
        case 0x1dbec8u: goto label_1dbec8;
        default: break;
    }

    ctx->pc = 0x1dbea8u;

    // 0x1dbea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbeac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbeb0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBEB0u;
    {
        const bool branch_taken_0x1dbeb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEB0u;
        // 0x1dbeb4: 0xe7ac0000  swc1        $f12, 0x0($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbeb0) {
            ctx->pc = 0x1DBEC8u;
            goto label_1dbec8;
        }
    }
    ctx->pc = 0x1DBEB8u;
    // 0x1dbeb8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dbeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1dbebc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dbebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbec0: 0xc09545a  jal         func_255168
    ctx->pc = 0x1DBEC0u;
    SET_GPR_U32(ctx, 31, 0x1DBEC8u);
    ctx->pc = 0x1DBEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBEC0u;
    // 0x1dbec4: 0x24a5bff0  addiu       $a1, $a1, -0x4010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1DBEC0u, 0x1DBEC8u)) {
        return;
    }
    ctx->pc = 0x1DBEC8u;
label_1dbec8:
    // 0x1dbec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBECCu;
        // 0x1dbed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBED4u;
    // 0x1dbed4: 0x0  nop
    ctx->pc = 0x1dbed4u;
    // NOP
    ctx->pc = 0x1dbed8u;
}
