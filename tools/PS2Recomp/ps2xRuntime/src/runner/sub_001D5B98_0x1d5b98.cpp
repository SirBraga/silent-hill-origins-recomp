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

// Function: sub_001D5B98
// Address: 0x1d5b98 - 0x1d5c00
void sub_001D5B98_0x1d5b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5B98_0x1d5b98");
#endif

    switch (ctx->pc) {
        case 0x1d5bb8u: goto label_1d5bb8;
        case 0x1d5bc0u: goto label_1d5bc0;
        case 0x1d5be0u: goto label_1d5be0;
        case 0x1d5bf0u: goto label_1d5bf0;
        default: break;
    }

    ctx->pc = 0x1d5b98u;

    // 0x1d5b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5b9c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1d5ba0: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d5ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1d5ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5ba8: 0x24c60ec0  addiu       $a2, $a2, 0xEC0
    ctx->pc = 0x1d5ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3776));
    // 0x1d5bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bb0: 0xc07d830  jal         func_1F60C0
    ctx->pc = 0x1D5BB0u;
    SET_GPR_U32(ctx, 31, 0x1D5BB8u);
    ctx->pc = 0x1D5BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5BB0u;
    // 0x1d5bb4: 0x24840f08  addiu       $a0, $a0, 0xF08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F60C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F60C0u, 0x1D5BB0u, 0x1D5BB8u)) {
        return;
    }
    ctx->pc = 0x1D5BB8u;
label_1d5bb8:
    // 0x1d5bb8: 0xc0bc2aa  jal         func_2F0AA8
    ctx->pc = 0x1D5BB8u;
    SET_GPR_U32(ctx, 31, 0x1D5BC0u);
    ctx->pc = 0x1D5BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5BB8u;
    // 0x1d5bbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0AA8u, 0x1D5BB8u, 0x1D5BC0u)) {
        return;
    }
    ctx->pc = 0x1D5BC0u;
label_1d5bc0:
    // 0x1d5bc0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5bc4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1d5bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1d5bc8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1d5bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1d5bcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bd0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1d5bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1d5bd4: 0x24a58700  addiu       $a1, $a1, -0x7900
    ctx->pc = 0x1d5bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936320));
    // 0x1d5bd8: 0xc0bc34a  jal         func_2F0D28
    ctx->pc = 0x1D5BD8u;
    SET_GPR_U32(ctx, 31, 0x1D5BE0u);
    ctx->pc = 0x1D5BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5BD8u;
    // 0x1d5bdc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0D28u, 0x1D5BD8u, 0x1D5BE0u)) {
        return;
    }
    ctx->pc = 0x1D5BE0u;
label_1d5be0:
    // 0x1d5be0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d5be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d5be4: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x1d5be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d5be8: 0xc0bc372  jal         func_2F0DC8
    ctx->pc = 0x1D5BE8u;
    SET_GPR_U32(ctx, 31, 0x1D5BF0u);
    ctx->pc = 0x1D5BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5BE8u;
    // 0x1d5bec: 0xac628800  sw          $v0, -0x7800($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0DC8u, 0x1D5BE8u, 0x1D5BF0u)) {
        return;
    }
    ctx->pc = 0x1D5BF0u;
label_1d5bf0:
    // 0x1d5bf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BF8u;
        // 0x1d5bfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C00u;
}
