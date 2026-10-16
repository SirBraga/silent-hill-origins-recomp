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

// Function: sub_001F0BD0
// Address: 0x1f0bd0 - 0x1f0c28
void sub_001F0BD0_0x1f0bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0BD0_0x1f0bd0");
#endif

    switch (ctx->pc) {
        case 0x1f0c00u: goto label_1f0c00;
        case 0x1f0c0cu: goto label_1f0c0c;
        default: break;
    }

    ctx->pc = 0x1f0bd0u;

    // 0x1f0bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f0bd8: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1f0bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1f0bdc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f0bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f0be0: 0x8e22e850  lw          $v0, -0x17B0($s1)
    ctx->pc = 0x1f0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E850u));
    // 0x1f0be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0be8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0BE8u;
    {
        const bool branch_taken_0x1f0be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BE8u;
        // 0x1f0bec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0be8) {
            ctx->pc = 0x1F0BF8u;
            goto label_1f0bf8;
        }
    }
    ctx->pc = 0x1F0BF0u;
    // 0x1f0bf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0BF0u;
    {
        const bool branch_taken_0x1f0bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BF0u;
        // 0x1f0bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0bf0) {
            ctx->pc = 0x1F0C14u;
            goto label_1f0c14;
        }
    }
    ctx->pc = 0x1F0BF8u;
label_1f0bf8:
    // 0x1f0bf8: 0xc080858  jal         func_202160
    ctx->pc = 0x1F0BF8u;
    SET_GPR_U32(ctx, 31, 0x1F0C00u);
    ctx->pc = 0x1F0BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0BF8u;
    // 0x1f0bfc: 0x2404282c  addiu       $a0, $zero, 0x282C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1F0BF8u, 0x1F0C00u)) {
        return;
    }
    ctx->pc = 0x1F0C00u;
label_1f0c00:
    // 0x1f0c00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f0c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c04: 0xc07c19a  jal         func_1F0668
    ctx->pc = 0x1F0C04u;
    SET_GPR_U32(ctx, 31, 0x1F0C0Cu);
    ctx->pc = 0x1F0C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C04u;
    // 0x1f0c08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F0668u, 0x1F0C04u, 0x1F0C0Cu)) {
        return;
    }
    ctx->pc = 0x1F0C0Cu;
label_1f0c0c:
    // 0x1f0c0c: 0xae22e850  sw          $v0, -0x17B0($s1)
    ctx->pc = 0x1f0c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294961232), GPR_U32(ctx, 2));
    // 0x1f0c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0c14:
    // 0x1f0c14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f0c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f0c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C20u;
        // 0x1f0c24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0C28u;
}
