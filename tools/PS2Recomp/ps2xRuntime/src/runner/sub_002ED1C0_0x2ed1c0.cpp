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

// Function: sub_002ED1C0
// Address: 0x2ed1c0 - 0x2ed220
void sub_002ED1C0_0x2ed1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED1C0_0x2ed1c0");
#endif

    switch (ctx->pc) {
        case 0x2ed1d8u: goto label_2ed1d8;
        default: break;
    }

    ctx->pc = 0x2ed1c0u;

    // 0x2ed1c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ed1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed1c4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2ed1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ed1c8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2ed1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2ed1cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ed1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ed1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1D0u;
        // 0x2ed1d4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED1D8u;
label_2ed1d8:
    // 0x2ed1d8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2ed1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2ed1dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED1DCu;
    {
        const bool branch_taken_0x2ed1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1DCu;
        // 0x2ed1e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1dc) {
            ctx->pc = 0x2ED1F0u;
            goto label_2ed1f0;
        }
    }
    ctx->pc = 0x2ED1E4u;
    // 0x2ed1e4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2ed1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2ed1e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ed1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ed1ec: 0x0  nop
    ctx->pc = 0x2ed1ecu;
    // NOP
label_2ed1f0:
    // 0x2ed1f0: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED1F0u;
    {
        const bool branch_taken_0x2ed1f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed1f0) {
            ctx->pc = 0x2ED1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED1F0u;
            // 0x2ed1f4: 0x94830058  lhu         $v1, 0x58($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED20Cu;
            goto label_2ed20c;
        }
    }
    ctx->pc = 0x2ED1F8u;
    // 0x2ed1f8: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x2ed1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x2ed1fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ed1fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ed200: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ed200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ed204: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x2ed204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
    // 0x2ed208: 0x94830058  lhu         $v1, 0x58($a0)
    ctx->pc = 0x2ed208u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
label_2ed20c:
    // 0x2ed20c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ed20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed210: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x2ed210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x2ed214: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ed214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ed218: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED218u;
        // 0x2ed21c: 0xa4830058  sh          $v1, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED220u;
}
