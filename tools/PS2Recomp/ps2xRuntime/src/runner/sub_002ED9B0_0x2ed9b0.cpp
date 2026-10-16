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

// Function: sub_002ED9B0
// Address: 0x2ed9b0 - 0x2eda08
void sub_002ED9B0_0x2ed9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED9B0_0x2ed9b0");
#endif

    switch (ctx->pc) {
        case 0x2ed9b0u: goto label_2ed9b0;
        case 0x2ed9b4u: goto label_2ed9b4;
        case 0x2ed9b8u: goto label_2ed9b8;
        case 0x2ed9bcu: goto label_2ed9bc;
        case 0x2ed9c0u: goto label_2ed9c0;
        case 0x2ed9c4u: goto label_2ed9c4;
        case 0x2ed9c8u: goto label_2ed9c8;
        case 0x2ed9ccu: goto label_2ed9cc;
        case 0x2ed9d0u: goto label_2ed9d0;
        case 0x2ed9d4u: goto label_2ed9d4;
        case 0x2ed9d8u: goto label_2ed9d8;
        case 0x2ed9dcu: goto label_2ed9dc;
        case 0x2ed9e0u: goto label_2ed9e0;
        case 0x2ed9e4u: goto label_2ed9e4;
        case 0x2ed9e8u: goto label_2ed9e8;
        case 0x2ed9ecu: goto label_2ed9ec;
        case 0x2ed9f0u: goto label_2ed9f0;
        case 0x2ed9f4u: goto label_2ed9f4;
        case 0x2ed9f8u: goto label_2ed9f8;
        case 0x2ed9fcu: goto label_2ed9fc;
        case 0x2eda00u: goto label_2eda00;
        case 0x2eda04u: goto label_2eda04;
        default: break;
    }

    ctx->pc = 0x2ed9b0u;

label_2ed9b0:
    // 0x2ed9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ed9b4:
    // 0x2ed9b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ed9b8:
    // 0x2ed9b8: 0xc0c9ba4  jal         func_326E90
label_2ed9bc:
    if (ctx->pc == 0x2ED9BCu) {
        ctx->pc = 0x2ED9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9B8u;
        // 0x2ed9bc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9C0u;
        goto label_2ed9c0;
    }
    ctx->pc = 0x2ED9B8u;
    SET_GPR_U32(ctx, 31, 0x2ED9C0u);
    ctx->pc = 0x2ED9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9B8u;
    // 0x2ed9bc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2ED9B8u, 0x2ED9C0u)) {
        return;
    }
    ctx->pc = 0x2ED9C0u;
label_2ed9c0:
    // 0x2ed9c0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ed9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_2ed9c4:
    // 0x2ed9c4: 0x8c626284  lw          $v0, 0x6284($v1)
    ctx->pc = 0x2ed9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25220)));
label_2ed9c8:
    // 0x2ed9c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ed9cc:
    if (ctx->pc == 0x2ED9CCu) {
        ctx->pc = 0x2ED9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9C8u;
        // 0x2ed9cc: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9D0u;
        goto label_2ed9d0;
    }
    ctx->pc = 0x2ED9C8u;
    {
        const bool branch_taken_0x2ed9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9C8u;
        // 0x2ed9cc: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9c8) {
            ctx->pc = 0x2ED9E8u;
            goto label_2ed9e8;
        }
    }
    ctx->pc = 0x2ED9D0u;
label_2ed9d0:
    // 0x2ed9d0: 0x40f809  jalr        $v0
label_2ed9d4:
    if (ctx->pc == 0x2ED9D4u) {
        ctx->pc = 0x2ED9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9D0u;
        // 0x2ed9d4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9D8u;
        goto label_2ed9d8;
    }
    ctx->pc = 0x2ED9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED9D8u);
        ctx->pc = 0x2ED9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9D0u;
        // 0x2ed9d4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED9D0u, 0x2ED9D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED9D8u;
label_2ed9d8:
    // 0x2ed9d8: 0xc0c9bb8  jal         func_326EE0
label_2ed9dc:
    if (ctx->pc == 0x2ED9DCu) {
        ctx->pc = 0x2ED9E0u;
        goto label_2ed9e0;
    }
    ctx->pc = 0x2ED9D8u;
    SET_GPR_U32(ctx, 31, 0x2ED9E0u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2ED9D8u, 0x2ED9E0u)) {
        return;
    }
    ctx->pc = 0x2ED9E0u;
label_2ed9e0:
    // 0x2ed9e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ed9e4:
    if (ctx->pc == 0x2ED9E4u) {
        ctx->pc = 0x2ED9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9E0u;
        // 0x2ed9e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9E8u;
        goto label_2ed9e8;
    }
    ctx->pc = 0x2ED9E0u;
    {
        const bool branch_taken_0x2ed9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9E0u;
        // 0x2ed9e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9e0) {
            ctx->pc = 0x2EDA00u;
            goto label_2eda00;
        }
    }
    ctx->pc = 0x2ED9E8u;
label_2ed9e8:
    // 0x2ed9e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ed9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ed9ec:
    // 0x2ed9ec: 0xc0bb86c  jal         func_2EE1B0
label_2ed9f0:
    if (ctx->pc == 0x2ED9F0u) {
        ctx->pc = 0x2ED9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9ECu;
        // 0x2ed9f0: 0x2484e890  addiu       $a0, $a0, -0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED9F4u;
        goto label_2ed9f4;
    }
    ctx->pc = 0x2ED9ECu;
    SET_GPR_U32(ctx, 31, 0x2ED9F4u);
    ctx->pc = 0x2ED9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9ECu;
    // 0x2ed9f0: 0x2484e890  addiu       $a0, $a0, -0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE1B0u, 0x2ED9ECu, 0x2ED9F4u)) {
        return;
    }
    ctx->pc = 0x2ED9F4u;
label_2ed9f4:
    // 0x2ed9f4: 0xc0c9bb8  jal         func_326EE0
label_2ed9f8:
    if (ctx->pc == 0x2ED9F8u) {
        ctx->pc = 0x2ED9FCu;
        goto label_2ed9fc;
    }
    ctx->pc = 0x2ED9F4u;
    SET_GPR_U32(ctx, 31, 0x2ED9FCu);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2ED9F4u, 0x2ED9FCu)) {
        return;
    }
    ctx->pc = 0x2ED9FCu;
label_2ed9fc:
    // 0x2ed9fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2eda00:
    // 0x2eda00: 0x3e00008  jr          $ra
label_2eda04:
    if (ctx->pc == 0x2EDA04u) {
        ctx->pc = 0x2EDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA00u;
        // 0x2eda04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDA08u;
        goto label_fallthrough_0x2eda00;
    }
    ctx->pc = 0x2EDA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA00u;
        // 0x2eda04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2eda00:
    ctx->pc = 0x2EDA08u;
}
