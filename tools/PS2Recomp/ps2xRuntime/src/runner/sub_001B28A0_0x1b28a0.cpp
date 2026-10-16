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

// Function: sub_001B28A0
// Address: 0x1b28a0 - 0x1b28e0
void sub_001B28A0_0x1b28a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B28A0_0x1b28a0");
#endif

    switch (ctx->pc) {
        case 0x1b28a0u: goto label_1b28a0;
        case 0x1b28a4u: goto label_1b28a4;
        case 0x1b28a8u: goto label_1b28a8;
        case 0x1b28acu: goto label_1b28ac;
        case 0x1b28b0u: goto label_1b28b0;
        case 0x1b28b4u: goto label_1b28b4;
        case 0x1b28b8u: goto label_1b28b8;
        case 0x1b28bcu: goto label_1b28bc;
        case 0x1b28c0u: goto label_1b28c0;
        case 0x1b28c4u: goto label_1b28c4;
        case 0x1b28c8u: goto label_1b28c8;
        case 0x1b28ccu: goto label_1b28cc;
        case 0x1b28d0u: goto label_1b28d0;
        case 0x1b28d4u: goto label_1b28d4;
        case 0x1b28d8u: goto label_1b28d8;
        case 0x1b28dcu: goto label_1b28dc;
        default: break;
    }

    ctx->pc = 0x1b28a0u;

label_1b28a0:
    // 0x1b28a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b28a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b28a4:
    // 0x1b28a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b28a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b28a8:
    // 0x1b28a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b28a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b28ac:
    // 0x1b28ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b28acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1b28b0:
    // 0x1b28b0: 0x8c86015c  lw          $a2, 0x15C($a0)
    ctx->pc = 0x1b28b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
label_1b28b4:
    // 0x1b28b4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1b28b8:
    if (ctx->pc == 0x1B28B8u) {
        ctx->pc = 0x1B28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28B4u;
        // 0x1b28b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B28BCu;
        goto label_1b28bc;
    }
    ctx->pc = 0x1B28B4u;
    {
        const bool branch_taken_0x1b28b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28B4u;
        // 0x1b28b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28b4) {
            ctx->pc = 0x1B28D0u;
            goto label_1b28d0;
        }
    }
    ctx->pc = 0x1B28BCu;
label_1b28bc:
    // 0x1b28bc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b28c0:
    // 0x1b28c0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1b28c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1b28c4:
    // 0x1b28c4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1b28c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1b28c8:
    // 0x1b28c8: 0x60f809  jalr        $v1
label_1b28cc:
    if (ctx->pc == 0x1B28CCu) {
        ctx->pc = 0x1B28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28C8u;
        // 0x1b28cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B28D0u;
        goto label_1b28d0;
    }
    ctx->pc = 0x1B28C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B28D0u);
        ctx->pc = 0x1B28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28C8u;
        // 0x1b28cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B28C8u, 0x1B28D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B28D0u;
label_1b28d0:
    // 0x1b28d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b28d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b28d4:
    // 0x1b28d4: 0x3e00008  jr          $ra
label_1b28d8:
    if (ctx->pc == 0x1B28D8u) {
        ctx->pc = 0x1B28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28D4u;
        // 0x1b28d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B28DCu;
        goto label_1b28dc;
    }
    ctx->pc = 0x1B28D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28D4u;
        // 0x1b28d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B28D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B28DCu;
label_1b28dc:
    // 0x1b28dc: 0x0  nop
    ctx->pc = 0x1b28dcu;
    // NOP
    ctx->pc = 0x1b28e0u;
}
