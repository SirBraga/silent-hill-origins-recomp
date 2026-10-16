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

// Function: sub_002284C0
// Address: 0x2284c0 - 0x2284f8
void sub_002284C0_0x2284c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002284C0_0x2284c0");
#endif

    switch (ctx->pc) {
        case 0x2284c0u: goto label_2284c0;
        case 0x2284c4u: goto label_2284c4;
        case 0x2284c8u: goto label_2284c8;
        case 0x2284ccu: goto label_2284cc;
        case 0x2284d0u: goto label_2284d0;
        case 0x2284d4u: goto label_2284d4;
        case 0x2284d8u: goto label_2284d8;
        case 0x2284dcu: goto label_2284dc;
        case 0x2284e0u: goto label_2284e0;
        case 0x2284e4u: goto label_2284e4;
        case 0x2284e8u: goto label_2284e8;
        case 0x2284ecu: goto label_2284ec;
        case 0x2284f0u: goto label_2284f0;
        case 0x2284f4u: goto label_2284f4;
        default: break;
    }

    ctx->pc = 0x2284c0u;

label_2284c0:
    // 0x2284c0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2284c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2284c4:
    // 0x2284c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2284c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2284c8:
    // 0x2284c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2284c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2284cc:
    // 0x2284cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2284ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2284d0:
    // 0x2284d0: 0x8c62106c  lw          $v0, 0x106C($v1)
    ctx->pc = 0x2284d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4204)));
label_2284d4:
    // 0x2284d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2284d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2284d8:
    // 0x2284d8: 0x40f809  jalr        $v0
label_2284dc:
    if (ctx->pc == 0x2284DCu) {
        ctx->pc = 0x2284DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284D8u;
        // 0x2284dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2284E0u;
        goto label_2284e0;
    }
    ctx->pc = 0x2284D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2284E0u);
        ctx->pc = 0x2284DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284D8u;
        // 0x2284dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2284D8u, 0x2284E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2284E0u;
label_2284e0:
    // 0x2284e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2284e4:
    if (ctx->pc == 0x2284E4u) {
        ctx->pc = 0x2284E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284E0u;
        // 0x2284e4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2284E8u;
        goto label_2284e8;
    }
    ctx->pc = 0x2284E0u;
    {
        const bool branch_taken_0x2284e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2284E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284E0u;
        // 0x2284e4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2284e0) {
            ctx->pc = 0x2284ECu;
            goto label_2284ec;
        }
    }
    ctx->pc = 0x2284E8u;
label_2284e8:
    // 0x2284e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2284e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2284ec:
    // 0x2284ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2284ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2284f0:
    // 0x2284f0: 0x3e00008  jr          $ra
label_2284f4:
    if (ctx->pc == 0x2284F4u) {
        ctx->pc = 0x2284F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284F0u;
        // 0x2284f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2284F8u;
        goto label_fallthrough_0x2284f0;
    }
    ctx->pc = 0x2284F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2284F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284F0u;
        // 0x2284f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2284F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2284f0:
    ctx->pc = 0x2284F8u;
}
