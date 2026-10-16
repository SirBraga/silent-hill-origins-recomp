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

// Function: sub_001EE870
// Address: 0x1ee870 - 0x1ee8b8
void sub_001EE870_0x1ee870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE870_0x1ee870");
#endif

    switch (ctx->pc) {
        case 0x1ee870u: goto label_1ee870;
        case 0x1ee874u: goto label_1ee874;
        case 0x1ee878u: goto label_1ee878;
        case 0x1ee87cu: goto label_1ee87c;
        case 0x1ee880u: goto label_1ee880;
        case 0x1ee884u: goto label_1ee884;
        case 0x1ee888u: goto label_1ee888;
        case 0x1ee88cu: goto label_1ee88c;
        case 0x1ee890u: goto label_1ee890;
        case 0x1ee894u: goto label_1ee894;
        case 0x1ee898u: goto label_1ee898;
        case 0x1ee89cu: goto label_1ee89c;
        case 0x1ee8a0u: goto label_1ee8a0;
        case 0x1ee8a4u: goto label_1ee8a4;
        case 0x1ee8a8u: goto label_1ee8a8;
        case 0x1ee8acu: goto label_1ee8ac;
        case 0x1ee8b0u: goto label_1ee8b0;
        case 0x1ee8b4u: goto label_1ee8b4;
        default: break;
    }

    ctx->pc = 0x1ee870u;

label_1ee870:
    // 0x1ee870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ee874:
    // 0x1ee874: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ee874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ee878:
    // 0x1ee878: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ee878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ee87c:
    // 0x1ee87c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ee880:
    // 0x1ee880: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1ee880u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1ee884:
    // 0x1ee884: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1ee884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1ee888:
    // 0x1ee888: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ee888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ee88c:
    // 0x1ee88c: 0x40f809  jalr        $v0
label_1ee890:
    if (ctx->pc == 0x1EE890u) {
        ctx->pc = 0x1EE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE88Cu;
        // 0x1ee890: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE894u;
        goto label_1ee894;
    }
    ctx->pc = 0x1EE88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE894u);
        ctx->pc = 0x1EE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE88Cu;
        // 0x1ee890: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE88Cu, 0x1EE894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE894u;
label_1ee894:
    // 0x1ee894: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ee894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ee898:
    // 0x1ee898: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1ee898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ee89c:
    // 0x1ee89c: 0x40f809  jalr        $v0
label_1ee8a0:
    if (ctx->pc == 0x1EE8A0u) {
        ctx->pc = 0x1EE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE89Cu;
        // 0x1ee8a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8A4u;
        goto label_1ee8a4;
    }
    ctx->pc = 0x1EE89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE8A4u);
        ctx->pc = 0x1EE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE89Cu;
        // 0x1ee8a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE89Cu, 0x1EE8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE8A4u;
label_1ee8a4:
    // 0x1ee8a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ee8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee8a8:
    // 0x1ee8a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee8ac:
    // 0x1ee8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee8b0:
    // 0x1ee8b0: 0x3e00008  jr          $ra
label_1ee8b4:
    if (ctx->pc == 0x1EE8B4u) {
        ctx->pc = 0x1EE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8B0u;
        // 0x1ee8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8B8u;
        goto label_fallthrough_0x1ee8b0;
    }
    ctx->pc = 0x1EE8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8B0u;
        // 0x1ee8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ee8b0:
    ctx->pc = 0x1EE8B8u;
}
