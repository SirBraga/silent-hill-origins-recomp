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

// Function: sub_001761A8
// Address: 0x1761a8 - 0x1761f0
void sub_001761A8_0x1761a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001761A8_0x1761a8");
#endif

    switch (ctx->pc) {
        case 0x1761e0u: goto label_1761e0;
        default: break;
    }

    ctx->pc = 0x1761a8u;

    // 0x1761a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1761a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1761ac: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1761acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1761b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1761b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1761b4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1761b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1761b8: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x1761b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1761bc: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1761BCu;
    {
        const bool branch_taken_0x1761bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1761C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761BCu;
        // 0x1761c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761bc) {
            ctx->pc = 0x1761E4u;
            goto label_1761e4;
        }
    }
    ctx->pc = 0x1761C4u;
    // 0x1761c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1761c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1761c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1761C8u;
    {
        const bool branch_taken_0x1761c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1761c8) {
            ctx->pc = 0x1761E4u;
            goto label_1761e4;
        }
    }
    ctx->pc = 0x1761D0u;
    // 0x1761d0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1761d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1761d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1761d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761d8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1761D8u;
    SET_GPR_U32(ctx, 31, 0x1761E0u);
    ctx->pc = 0x1761DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1761D8u;
    // 0x1761dc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1761D8u, 0x1761E0u)) {
        return;
    }
    ctx->pc = 0x1761E0u;
label_1761e0:
    // 0x1761e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1761e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1761e4:
    // 0x1761e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1761E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1761E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761E4u;
        // 0x1761e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1761E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1761ECu;
    // 0x1761ec: 0x0  nop
    ctx->pc = 0x1761ecu;
    // NOP
    ctx->pc = 0x1761f0u;
}
