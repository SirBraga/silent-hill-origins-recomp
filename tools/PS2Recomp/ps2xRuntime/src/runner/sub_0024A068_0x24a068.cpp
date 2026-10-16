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

// Function: sub_0024A068
// Address: 0x24a068 - 0x24a0d8
void sub_0024A068_0x24a068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A068_0x24a068");
#endif

    ctx->pc = 0x24a068u;

    // 0x24a068: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24a068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24a06c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24a070: 0x8c633f58  lw          $v1, 0x3F58($v1)
    ctx->pc = 0x24a070u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F58u));
    // 0x24a074: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24a074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a078: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24a07c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x24a07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24a080: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24a084: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24A084u;
    {
        const bool branch_taken_0x24a084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A084u;
        // 0x24a088: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a084) {
            ctx->pc = 0x24A0CCu;
            goto label_24a0cc;
        }
    }
    ctx->pc = 0x24A08Cu;
    // 0x24a08c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x24a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24a090: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24a090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24a094: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24A094u;
    {
        const bool branch_taken_0x24a094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a094) {
            ctx->pc = 0x24A0CCu;
            goto label_24a0cc;
        }
    }
    ctx->pc = 0x24A09Cu;
    // 0x24a09c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24a0a0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A0A0u;
    {
        const bool branch_taken_0x24a0a0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x24a0a0) {
            ctx->pc = 0x24A0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A0A0u;
            // 0x24a0a4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A0B0u;
            goto label_24a0b0;
        }
    }
    ctx->pc = 0x24A0A8u;
    // 0x24a0a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24A0A8u;
    {
        const bool branch_taken_0x24a0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0A8u;
        // 0x24a0ac: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0a8) {
            ctx->pc = 0x24A0B4u;
            goto label_24a0b4;
        }
    }
    ctx->pc = 0x24A0B0u;
label_24a0b0:
    // 0x24a0b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x24a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_24a0b4:
    // 0x24a0b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24a0b8: 0x8c423f58  lw          $v0, 0x3F58($v0)
    ctx->pc = 0x24a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F58u));
    // 0x24a0bc: 0x24e30fc8  addiu       $v1, $a3, 0xFC8
    ctx->pc = 0x24a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4040));
    // 0x24a0c0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x24a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24a0c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a0c8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x24a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_24a0cc:
    // 0x24a0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x24A0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0CCu;
        // 0x24a0d0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A0D4u;
    // 0x24a0d4: 0x0  nop
    ctx->pc = 0x24a0d4u;
    // NOP
    ctx->pc = 0x24a0d8u;
}
