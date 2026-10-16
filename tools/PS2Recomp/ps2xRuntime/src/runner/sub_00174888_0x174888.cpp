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

// Function: sub_00174888
// Address: 0x174888 - 0x1748d8
void sub_00174888_0x174888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174888_0x174888");
#endif

    switch (ctx->pc) {
        case 0x1748c8u: goto label_1748c8;
        default: break;
    }

    ctx->pc = 0x174888u;

    // 0x174888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17488c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174890: 0x84820052  lh          $v0, 0x52($a0)
    ctx->pc = 0x174890u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x174894: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x174894u;
    {
        const bool branch_taken_0x174894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174894u;
        // 0x174898: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174894) {
            ctx->pc = 0x1748C8u;
            goto label_1748c8;
        }
    }
    ctx->pc = 0x17489Cu;
    // 0x17489c: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x17489cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1748a0: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1748a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x1748a4: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1748A4u;
    {
        const bool branch_taken_0x1748a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1748A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748A4u;
        // 0x1748a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1748a4) {
            ctx->pc = 0x1748CCu;
            goto label_1748cc;
        }
    }
    ctx->pc = 0x1748ACu;
    // 0x1748ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1748acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1748b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1748B0u;
    {
        const bool branch_taken_0x1748b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1748b0) {
            ctx->pc = 0x1748CCu;
            goto label_1748cc;
        }
    }
    ctx->pc = 0x1748B8u;
    // 0x1748b8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1748b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1748bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1748bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748c0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1748C0u;
    SET_GPR_U32(ctx, 31, 0x1748C8u);
    ctx->pc = 0x1748C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1748C0u;
    // 0x1748c4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1748C0u, 0x1748C8u)) {
        return;
    }
    ctx->pc = 0x1748C8u;
label_1748c8:
    // 0x1748c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1748c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1748cc:
    // 0x1748cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1748CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1748D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748CCu;
        // 0x1748d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1748CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1748D4u;
    // 0x1748d4: 0x0  nop
    ctx->pc = 0x1748d4u;
    // NOP
    ctx->pc = 0x1748d8u;
}
