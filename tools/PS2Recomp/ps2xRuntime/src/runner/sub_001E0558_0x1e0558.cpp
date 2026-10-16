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

// Function: sub_001E0558
// Address: 0x1e0558 - 0x1e05b0
void sub_001E0558_0x1e0558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0558_0x1e0558");
#endif

    ctx->pc = 0x1e0558u;

    // 0x1e0558: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1e0558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1e055c: 0x8cc2e6d4  lw          $v0, -0x192C($a2)
    ctx->pc = 0x1e055cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E6D4u));
    // 0x1e0560: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E0560u;
    {
        const bool branch_taken_0x1e0560 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0560u;
        // 0x1e0564: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0560) {
            ctx->pc = 0x1E05A4u;
            goto label_1e05a4;
        }
    }
    ctx->pc = 0x1E0568u;
    // 0x1e0568: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1e0568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e056c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1e056cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0570: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1e0570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1e0574: 0x8cc2e6d4  lw          $v0, -0x192C($a2)
    ctx->pc = 0x1e0574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960852)));
    // 0x1e0578: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e0578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e057c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e057cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e0580: 0x8cc3e6d4  lw          $v1, -0x192C($a2)
    ctx->pc = 0x1e0580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960852)));
    // 0x1e0584: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1e0584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e0588: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1e0588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1e058c: 0x8cc2e6d4  lw          $v0, -0x192C($a2)
    ctx->pc = 0x1e058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960852)));
    // 0x1e0590: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e0590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e0594: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e0594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1e0598: 0x8cc3e6d4  lw          $v1, -0x192C($a2)
    ctx->pc = 0x1e0598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960852)));
    // 0x1e059c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1e059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e05a0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1e05a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_1e05a4:
    // 0x1e05a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E05A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05A4u;
        // 0x1e05a8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E05A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E05ACu;
    // 0x1e05ac: 0x0  nop
    ctx->pc = 0x1e05acu;
    // NOP
    ctx->pc = 0x1e05b0u;
}
