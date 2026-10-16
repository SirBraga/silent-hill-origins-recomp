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

// Function: sub_00225950
// Address: 0x225950 - 0x225990
void sub_00225950_0x225950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225950_0x225950");
#endif

    switch (ctx->pc) {
        case 0x225974u: goto label_225974;
        default: break;
    }

    ctx->pc = 0x225950u;

    // 0x225950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225954: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x225954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x225958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22595c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22595cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225960: 0x24840fd8  addiu       $a0, $a0, 0xFD8
    ctx->pc = 0x225960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    // 0x225964: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225968: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22596c: 0xc08959e  jal         func_225678
    ctx->pc = 0x22596Cu;
    SET_GPR_U32(ctx, 31, 0x225974u);
    ctx->pc = 0x225970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22596Cu;
    // 0x225970: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x22596Cu, 0x225974u)) {
        return;
    }
    ctx->pc = 0x225974u;
label_225974:
    // 0x225974: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225974u;
    {
        const bool branch_taken_0x225974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225974u;
        // 0x225978: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225974) {
            ctx->pc = 0x225980u;
            goto label_225980;
        }
    }
    ctx->pc = 0x22597Cu;
    // 0x22597c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_225980:
    // 0x225980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225984: 0x3e00008  jr          $ra
    ctx->pc = 0x225984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225984u;
        // 0x225988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22598Cu;
    // 0x22598c: 0x0  nop
    ctx->pc = 0x22598cu;
    // NOP
    ctx->pc = 0x225990u;
}
