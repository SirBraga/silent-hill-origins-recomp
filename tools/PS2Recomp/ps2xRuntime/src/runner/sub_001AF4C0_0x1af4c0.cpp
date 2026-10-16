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

// Function: sub_001AF4C0
// Address: 0x1af4c0 - 0x1af4f0
void sub_001AF4C0_0x1af4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF4C0_0x1af4c0");
#endif

    switch (ctx->pc) {
        case 0x1af4c0u: goto label_1af4c0;
        case 0x1af4c4u: goto label_1af4c4;
        case 0x1af4c8u: goto label_1af4c8;
        case 0x1af4ccu: goto label_1af4cc;
        case 0x1af4d0u: goto label_1af4d0;
        case 0x1af4d4u: goto label_1af4d4;
        case 0x1af4d8u: goto label_1af4d8;
        case 0x1af4dcu: goto label_1af4dc;
        case 0x1af4e0u: goto label_1af4e0;
        case 0x1af4e4u: goto label_1af4e4;
        case 0x1af4e8u: goto label_1af4e8;
        case 0x1af4ecu: goto label_1af4ec;
        default: break;
    }

    ctx->pc = 0x1af4c0u;

label_1af4c0:
    // 0x1af4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1af4c4:
    // 0x1af4c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1af4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1af4c8:
    // 0x1af4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1af4cc:
    // 0x1af4cc: 0x8c820258  lw          $v0, 0x258($a0)
    ctx->pc = 0x1af4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
label_1af4d0:
    // 0x1af4d0: 0x84430028  lh          $v1, 0x28($v0)
    ctx->pc = 0x1af4d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1af4d4:
    // 0x1af4d4: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1af4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1af4d8:
    // 0x1af4d8: 0xc0f809  jalr        $a2
label_1af4dc:
    if (ctx->pc == 0x1AF4DCu) {
        ctx->pc = 0x1AF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4D8u;
        // 0x1af4dc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4E0u;
        goto label_1af4e0;
    }
    ctx->pc = 0x1AF4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1AF4E0u);
        ctx->pc = 0x1AF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4D8u;
        // 0x1af4dc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF4D8u, 0x1AF4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF4E0u;
label_1af4e0:
    // 0x1af4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af4e4:
    // 0x1af4e4: 0x3e00008  jr          $ra
label_1af4e8:
    if (ctx->pc == 0x1AF4E8u) {
        ctx->pc = 0x1AF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4E4u;
        // 0x1af4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4ECu;
        goto label_1af4ec;
    }
    ctx->pc = 0x1AF4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4E4u;
        // 0x1af4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF4ECu;
label_1af4ec:
    // 0x1af4ec: 0x0  nop
    ctx->pc = 0x1af4ecu;
    // NOP
    ctx->pc = 0x1af4f0u;
}
