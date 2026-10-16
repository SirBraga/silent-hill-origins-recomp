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

// Function: sub_001D8968
// Address: 0x1d8968 - 0x1d89a0
void sub_001D8968_0x1d8968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8968_0x1d8968");
#endif

    switch (ctx->pc) {
        case 0x1d897cu: goto label_1d897c;
        case 0x1d898cu: goto label_1d898c;
        default: break;
    }

    ctx->pc = 0x1d8968u;

    // 0x1d8968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d896c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d896cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8974: 0xc081444  jal         func_205110
    ctx->pc = 0x1D8974u;
    SET_GPR_U32(ctx, 31, 0x1D897Cu);
    ctx->pc = 0x1D8978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8974u;
    // 0x1d8978: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205110u, 0x1D8974u, 0x1D897Cu)) {
        return;
    }
    ctx->pc = 0x1D897Cu;
label_1d897c:
    // 0x1d897c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D897Cu;
    {
        const bool branch_taken_0x1d897c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d897c) {
            ctx->pc = 0x1D8980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D897Cu;
            // 0x1d8980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8994u;
            goto label_1d8994;
        }
    }
    ctx->pc = 0x1D8984u;
    // 0x1d8984: 0xc081a96  jal         func_206A58
    ctx->pc = 0x1D8984u;
    SET_GPR_U32(ctx, 31, 0x1D898Cu);
    ctx->pc = 0x1D8988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8984u;
    // 0x1d8988: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206A58u, 0x1D8984u, 0x1D898Cu)) {
        return;
    }
    ctx->pc = 0x1D898Cu;
label_1d898c:
    // 0x1d898c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D898Cu;
    {
        const bool branch_taken_0x1d898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D898Cu;
        // 0x1d8990: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d898c) {
            ctx->pc = 0x1D8998u;
            goto label_1d8998;
        }
    }
    ctx->pc = 0x1D8994u;
label_1d8994:
    // 0x1d8994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8998:
    // 0x1d8998: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8998u;
        // 0x1d899c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D89A0u;
}
