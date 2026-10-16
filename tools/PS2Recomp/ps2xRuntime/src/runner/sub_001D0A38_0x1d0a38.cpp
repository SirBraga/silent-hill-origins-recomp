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

// Function: sub_001D0A38
// Address: 0x1d0a38 - 0x1d0a90
void sub_001D0A38_0x1d0a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0A38_0x1d0a38");
#endif

    switch (ctx->pc) {
        case 0x1d0a58u: goto label_1d0a58;
        case 0x1d0a70u: goto label_1d0a70;
        default: break;
    }

    ctx->pc = 0x1d0a38u;

    // 0x1d0a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0a3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d0a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0a44: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0A44u;
    {
        const bool branch_taken_0x1d0a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A44u;
        // 0x1d0a48: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a44) {
            ctx->pc = 0x1D0A78u;
            goto label_1d0a78;
        }
    }
    ctx->pc = 0x1D0A4Cu;
    // 0x1d0a4c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d0a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0a50: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0A50u;
    SET_GPR_U32(ctx, 31, 0x1D0A58u);
    ctx->pc = 0x1D0A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A50u;
    // 0x1d0a54: 0x24a50a58  addiu       $a1, $a1, 0xA58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0A50u, 0x1D0A58u)) {
        return;
    }
    ctx->pc = 0x1D0A58u;
label_1d0a58:
    // 0x1d0a58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0A58u;
    {
        const bool branch_taken_0x1d0a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A58u;
        // 0x1d0a5c: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a58) {
            ctx->pc = 0x1D0A7Cu;
            goto label_1d0a7c;
        }
    }
    ctx->pc = 0x1D0A60u;
    // 0x1d0a60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a64: 0x24c60a90  addiu       $a2, $a2, 0xA90
    ctx->pc = 0x1d0a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2704));
    // 0x1d0a68: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0A68u;
    SET_GPR_U32(ctx, 31, 0x1D0A70u);
    ctx->pc = 0x1D0A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A68u;
    // 0x1d0a6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0A68u, 0x1D0A70u)) {
        return;
    }
    ctx->pc = 0x1D0A70u;
label_1d0a70:
    // 0x1d0a70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0A70u;
    {
        const bool branch_taken_0x1d0a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A70u;
        // 0x1d0a74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a70) {
            ctx->pc = 0x1D0A80u;
            goto label_1d0a80;
        }
    }
    ctx->pc = 0x1D0A78u;
label_1d0a78:
    // 0x1d0a78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a7c:
    // 0x1d0a7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a80:
    // 0x1d0a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0a84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A88u;
        // 0x1d0a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0A90u;
}
