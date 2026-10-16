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

// Function: sub_001B28E0
// Address: 0x1b28e0 - 0x1b2920
void sub_001B28E0_0x1b28e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B28E0_0x1b28e0");
#endif

    switch (ctx->pc) {
        case 0x1b28e0u: goto label_1b28e0;
        case 0x1b28e4u: goto label_1b28e4;
        case 0x1b28e8u: goto label_1b28e8;
        case 0x1b28ecu: goto label_1b28ec;
        case 0x1b28f0u: goto label_1b28f0;
        case 0x1b28f4u: goto label_1b28f4;
        case 0x1b28f8u: goto label_1b28f8;
        case 0x1b28fcu: goto label_1b28fc;
        case 0x1b2900u: goto label_1b2900;
        case 0x1b2904u: goto label_1b2904;
        case 0x1b2908u: goto label_1b2908;
        case 0x1b290cu: goto label_1b290c;
        case 0x1b2910u: goto label_1b2910;
        case 0x1b2914u: goto label_1b2914;
        case 0x1b2918u: goto label_1b2918;
        case 0x1b291cu: goto label_1b291c;
        default: break;
    }

    ctx->pc = 0x1b28e0u;

label_1b28e0:
    // 0x1b28e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b28e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b28e4:
    // 0x1b28e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b28e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b28e8:
    // 0x1b28e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b28e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b28ec:
    // 0x1b28ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b28ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1b28f0:
    // 0x1b28f0: 0x8c86015c  lw          $a2, 0x15C($a0)
    ctx->pc = 0x1b28f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
label_1b28f4:
    // 0x1b28f4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1b28f8:
    if (ctx->pc == 0x1B28F8u) {
        ctx->pc = 0x1B28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28F4u;
        // 0x1b28f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B28FCu;
        goto label_1b28fc;
    }
    ctx->pc = 0x1B28F4u;
    {
        const bool branch_taken_0x1b28f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28F4u;
        // 0x1b28f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28f4) {
            ctx->pc = 0x1B2910u;
            goto label_1b2910;
        }
    }
    ctx->pc = 0x1B28FCu;
label_1b28fc:
    // 0x1b28fc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b2900:
    // 0x1b2900: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1b2900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1b2904:
    // 0x1b2904: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1b2904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1b2908:
    // 0x1b2908: 0x60f809  jalr        $v1
label_1b290c:
    if (ctx->pc == 0x1B290Cu) {
        ctx->pc = 0x1B290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2908u;
        // 0x1b290c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2910u;
        goto label_1b2910;
    }
    ctx->pc = 0x1B2908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B2910u);
        ctx->pc = 0x1B290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2908u;
        // 0x1b290c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2908u, 0x1B2910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2910u;
label_1b2910:
    // 0x1b2910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2914:
    // 0x1b2914: 0x3e00008  jr          $ra
label_1b2918:
    if (ctx->pc == 0x1B2918u) {
        ctx->pc = 0x1B2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2914u;
        // 0x1b2918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B291Cu;
        goto label_1b291c;
    }
    ctx->pc = 0x1B2914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2914u;
        // 0x1b2918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B291Cu;
label_1b291c:
    // 0x1b291c: 0x0  nop
    ctx->pc = 0x1b291cu;
    // NOP
    ctx->pc = 0x1b2920u;
}
