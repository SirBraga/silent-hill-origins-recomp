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

// Function: sub_001D69C0
// Address: 0x1d69c0 - 0x1d6a10
void sub_001D69C0_0x1d69c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D69C0_0x1d69c0");
#endif

    switch (ctx->pc) {
        case 0x1d6a00u: goto label_1d6a00;
        default: break;
    }

    ctx->pc = 0x1d69c0u;

    // 0x1d69c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1d69c4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d69c8: 0x8c4546c8  lw          $a1, 0x46C8($v0)
    ctx->pc = 0x1d69c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B46C8u));
    // 0x1d69cc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d69ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d69d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d69d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d69d4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1d69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d69d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d69d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d69dc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1d69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d69e0: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D69E0u;
    {
        const bool branch_taken_0x1d69e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69E0u;
        // 0x1d69e4: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69e0) {
            ctx->pc = 0x1D6A00u;
            goto label_1d6a00;
        }
    }
    ctx->pc = 0x1D69E8u;
    // 0x1d69e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d69ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D69ECu;
    {
        const bool branch_taken_0x1d69ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69ECu;
        // 0x1d69f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69ec) {
            ctx->pc = 0x1D6A00u;
            goto label_1d6a00;
        }
    }
    ctx->pc = 0x1D69F4u;
    // 0x1d69f4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d69f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d69f8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D69F8u;
    SET_GPR_U32(ctx, 31, 0x1D6A00u);
    ctx->pc = 0x1D69FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69F8u;
    // 0x1d69fc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D69F8u, 0x1D6A00u)) {
        return;
    }
    ctx->pc = 0x1D6A00u;
label_1d6a00:
    // 0x1d6a00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d6a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6a04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d6a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6a08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A08u;
        // 0x1d6a0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6A10u;
}
