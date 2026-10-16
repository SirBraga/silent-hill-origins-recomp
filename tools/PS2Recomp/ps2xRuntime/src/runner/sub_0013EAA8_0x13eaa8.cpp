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

// Function: sub_0013EAA8
// Address: 0x13eaa8 - 0x13eae8
void sub_0013EAA8_0x13eaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EAA8_0x13eaa8");
#endif

    switch (ctx->pc) {
        case 0x13eadcu: goto label_13eadc;
        default: break;
    }

    ctx->pc = 0x13eaa8u;

    // 0x13eaa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13eaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13eaac: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x13eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x13eab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13eab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13eab4: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x13eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x13eab8: 0x8c8501cc  lw          $a1, 0x1CC($a0)
    ctx->pc = 0x13eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x13eabc: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x13eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x13eac0: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EAC0u;
    {
        const bool branch_taken_0x13eac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x13EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAC0u;
        // 0x13eac4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eac0) {
            ctx->pc = 0x13EADCu;
            goto label_13eadc;
        }
    }
    ctx->pc = 0x13EAC8u;
    // 0x13eac8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13eacc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EACCu;
    {
        const bool branch_taken_0x13eacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EACCu;
        // 0x13ead0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eacc) {
            ctx->pc = 0x13EAE0u;
            goto label_13eae0;
        }
    }
    ctx->pc = 0x13EAD4u;
    // 0x13ead4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x13EAD4u;
    SET_GPR_U32(ctx, 31, 0x13EADCu);
    ctx->pc = 0x13EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EAD4u;
    // 0x13ead8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x13EAD4u, 0x13EADCu)) {
        return;
    }
    ctx->pc = 0x13EADCu;
label_13eadc:
    // 0x13eadc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13eadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13eae0:
    // 0x13eae0: 0x3e00008  jr          $ra
    ctx->pc = 0x13EAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAE0u;
        // 0x13eae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EAE8u;
}
