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

// Function: sub_0016BC90
// Address: 0x16bc90 - 0x16bce8
void sub_0016BC90_0x16bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BC90_0x16bc90");
#endif

    switch (ctx->pc) {
        case 0x16bca8u: goto label_16bca8;
        case 0x16bcc0u: goto label_16bcc0;
        case 0x16bcdcu: goto label_16bcdc;
        default: break;
    }

    ctx->pc = 0x16bc90u;

    // 0x16bc90: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x16bc94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bc94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bc98: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x16bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x16bc9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bca0: 0xc05ec94  jal         func_17B250
    ctx->pc = 0x16BCA0u;
    SET_GPR_U32(ctx, 31, 0x16BCA8u);
    ctx->pc = 0x16BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCA0u;
    // 0x16bca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B250u, 0x16BCA0u, 0x16BCA8u)) {
        return;
    }
    ctx->pc = 0x16BCA8u;
label_16bca8:
    // 0x16bca8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x16bcac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bcb0: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x16bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x16bcb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16bcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bcb8: 0xc043642  jal         func_10D908
    ctx->pc = 0x16BCB8u;
    SET_GPR_U32(ctx, 31, 0x16BCC0u);
    ctx->pc = 0x16BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCB8u;
    // 0x16bcbc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x16BCB8u, 0x16BCC0u)) {
        return;
    }
    ctx->pc = 0x16BCC0u;
label_16bcc0:
    // 0x16bcc0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x16bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x16bcc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bcc8: 0x8c649168  lw          $a0, -0x6E98($v1)
    ctx->pc = 0x16bcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x16bccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16bcccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bcd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16bcd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bcd4: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x16BCD4u;
    SET_GPR_U32(ctx, 31, 0x16BCDCu);
    ctx->pc = 0x16BCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCD4u;
    // 0x16bcd8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x16BCD4u, 0x16BCDCu)) {
        return;
    }
    ctx->pc = 0x16BCDCu;
label_16bcdc:
    // 0x16bcdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bce0: 0x3e00008  jr          $ra
    ctx->pc = 0x16BCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCE0u;
        // 0x16bce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BCE8u;
}
