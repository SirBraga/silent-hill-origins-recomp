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

// Function: sub_0021AAB8
// Address: 0x21aab8 - 0x21aaf8
void sub_0021AAB8_0x21aab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AAB8_0x21aab8");
#endif

    switch (ctx->pc) {
        case 0x21aad0u: goto label_21aad0;
        case 0x21aadcu: goto label_21aadc;
        case 0x21aae8u: goto label_21aae8;
        default: break;
    }

    ctx->pc = 0x21aab8u;

    // 0x21aab8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x21aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x21aabc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21aabcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21aac0: 0x8c4402c0  lw          $a0, 0x2C0($v0)
    ctx->pc = 0x21aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C02C0u));
    // 0x21aac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21aac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21aac8: 0xc093106  jal         func_24C418
    ctx->pc = 0x21AAC8u;
    SET_GPR_U32(ctx, 31, 0x21AAD0u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x21AAC8u, 0x21AAD0u)) {
        return;
    }
    ctx->pc = 0x21AAD0u;
label_21aad0:
    // 0x21aad0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x21aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x21aad4: 0xc093106  jal         func_24C418
    ctx->pc = 0x21AAD4u;
    SET_GPR_U32(ctx, 31, 0x21AADCu);
    ctx->pc = 0x21AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AAD4u;
    // 0x21aad8: 0x8c6402bc  lw          $a0, 0x2BC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x21AAD4u, 0x21AADCu)) {
        return;
    }
    ctx->pc = 0x21AADCu;
label_21aadc:
    // 0x21aadc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x21aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x21aae0: 0xc093106  jal         func_24C418
    ctx->pc = 0x21AAE0u;
    SET_GPR_U32(ctx, 31, 0x21AAE8u);
    ctx->pc = 0x21AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AAE0u;
    // 0x21aae4: 0x8c6402c4  lw          $a0, 0x2C4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x21AAE0u, 0x21AAE8u)) {
        return;
    }
    ctx->pc = 0x21AAE8u;
label_21aae8:
    // 0x21aae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21aae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aaec: 0x3e00008  jr          $ra
    ctx->pc = 0x21AAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAECu;
        // 0x21aaf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AAF4u;
    // 0x21aaf4: 0x0  nop
    ctx->pc = 0x21aaf4u;
    // NOP
    ctx->pc = 0x21aaf8u;
}
