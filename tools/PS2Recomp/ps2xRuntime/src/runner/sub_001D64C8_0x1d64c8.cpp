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

// Function: sub_001D64C8
// Address: 0x1d64c8 - 0x1d6510
void sub_001D64C8_0x1d64c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D64C8_0x1d64c8");
#endif

    switch (ctx->pc) {
        case 0x1d64c8u: goto label_1d64c8;
        case 0x1d64ccu: goto label_1d64cc;
        case 0x1d64d0u: goto label_1d64d0;
        case 0x1d64d4u: goto label_1d64d4;
        case 0x1d64d8u: goto label_1d64d8;
        case 0x1d64dcu: goto label_1d64dc;
        case 0x1d64e0u: goto label_1d64e0;
        case 0x1d64e4u: goto label_1d64e4;
        case 0x1d64e8u: goto label_1d64e8;
        case 0x1d64ecu: goto label_1d64ec;
        case 0x1d64f0u: goto label_1d64f0;
        case 0x1d64f4u: goto label_1d64f4;
        case 0x1d64f8u: goto label_1d64f8;
        case 0x1d64fcu: goto label_1d64fc;
        case 0x1d6500u: goto label_1d6500;
        case 0x1d6504u: goto label_1d6504;
        case 0x1d6508u: goto label_1d6508;
        case 0x1d650cu: goto label_1d650c;
        default: break;
    }

    ctx->pc = 0x1d64c8u;

label_1d64c8:
    // 0x1d64c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d64c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d64cc:
    // 0x1d64cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d64ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d64d0:
    // 0x1d64d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d64d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d64d4:
    // 0x1d64d4: 0xc074b18  jal         func_1D2C60
label_1d64d8:
    if (ctx->pc == 0x1D64D8u) {
        ctx->pc = 0x1D64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64D4u;
        // 0x1d64d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D64DCu;
        goto label_1d64dc;
    }
    ctx->pc = 0x1D64D4u;
    SET_GPR_U32(ctx, 31, 0x1D64DCu);
    ctx->pc = 0x1D64D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64D4u;
    // 0x1d64d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2C60u, 0x1D64D4u, 0x1D64DCu)) {
        return;
    }
    ctx->pc = 0x1D64DCu;
label_1d64dc:
    // 0x1d64dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d64dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d64e0:
    // 0x1d64e0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1d64e4:
    if (ctx->pc == 0x1D64E4u) {
        ctx->pc = 0x1D64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64E0u;
        // 0x1d64e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D64E8u;
        goto label_1d64e8;
    }
    ctx->pc = 0x1D64E0u;
    {
        const bool branch_taken_0x1d64e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64E0u;
        // 0x1d64e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64e0) {
            ctx->pc = 0x1D64FCu;
            goto label_1d64fc;
        }
    }
    ctx->pc = 0x1D64E8u;
label_1d64e8:
    // 0x1d64e8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1d64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1d64ec:
    // 0x1d64ec: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1d64ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1d64f0:
    // 0x1d64f0: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1d64f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1d64f4:
    // 0x1d64f4: 0x60f809  jalr        $v1
label_1d64f8:
    if (ctx->pc == 0x1D64F8u) {
        ctx->pc = 0x1D64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64F4u;
        // 0x1d64f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D64FCu;
        goto label_1d64fc;
    }
    ctx->pc = 0x1D64F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D64FCu);
        ctx->pc = 0x1D64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64F4u;
        // 0x1d64f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D64F4u, 0x1D64FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D64FCu;
label_1d64fc:
    // 0x1d64fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d64fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6500:
    // 0x1d6500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6504:
    // 0x1d6504: 0x3e00008  jr          $ra
label_1d6508:
    if (ctx->pc == 0x1D6508u) {
        ctx->pc = 0x1D6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6504u;
        // 0x1d6508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D650Cu;
        goto label_1d650c;
    }
    ctx->pc = 0x1D6504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6504u;
        // 0x1d6508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D650Cu;
label_1d650c:
    // 0x1d650c: 0x0  nop
    ctx->pc = 0x1d650cu;
    // NOP
    ctx->pc = 0x1d6510u;
}
