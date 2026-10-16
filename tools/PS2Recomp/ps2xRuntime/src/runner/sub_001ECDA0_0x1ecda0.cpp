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

// Function: sub_001ECDA0
// Address: 0x1ecda0 - 0x1ecdf8
void sub_001ECDA0_0x1ecda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECDA0_0x1ecda0");
#endif

    switch (ctx->pc) {
        case 0x1ecdc0u: goto label_1ecdc0;
        default: break;
    }

    ctx->pc = 0x1ecda0u;

    // 0x1ecda0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ecda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecda4: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1ecda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1ecda8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1ecda8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1ecdac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ECDACu;
    {
        const bool branch_taken_0x1ecdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDACu;
        // 0x1ecdb0: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdac) {
            ctx->pc = 0x1ECDECu;
            goto label_1ecdec;
        }
    }
    ctx->pc = 0x1ECDB4u;
    // 0x1ecdb4: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1ecdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x1ecdb8: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1ecdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1ecdbc: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x1ecdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_1ecdc0:
    // 0x1ecdc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ecdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ecdc4: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x1ecdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x1ecdc8: 0x8ce3e7a8  lw          $v1, -0x1858($a3)
    ctx->pc = 0x1ecdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294961064)));
    // 0x1ecdcc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ecdccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ecdd0: 0xace4e7a8  sw          $a0, -0x1858($a3)
    ctx->pc = 0x1ecdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294961064), GPR_U32(ctx, 4));
    // 0x1ecdd4: 0x8cc2e7ac  lw          $v0, -0x1854($a2)
    ctx->pc = 0x1ecdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294961068)));
    // 0x1ecdd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ecdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ecddc: 0xacc2e7ac  sw          $v0, -0x1854($a2)
    ctx->pc = 0x1ecddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294961068), GPR_U32(ctx, 2));
    // 0x1ecde0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1ecde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1ecde4: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1ECDE4u;
    {
        const bool branch_taken_0x1ecde4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecde4) {
            ctx->pc = 0x1ECDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECDE4u;
            // 0x1ecde8: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecdc0;
        }
    }
    ctx->pc = 0x1ECDECu;
label_1ecdec:
    // 0x1ecdec: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDECu;
        // 0x1ecdf0: 0xaca00014  sw          $zero, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECDF4u;
    // 0x1ecdf4: 0x0  nop
    ctx->pc = 0x1ecdf4u;
    // NOP
    ctx->pc = 0x1ecdf8u;
}
