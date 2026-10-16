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

// Function: sub_001EBFC8
// Address: 0x1ebfc8 - 0x1ec020
void sub_001EBFC8_0x1ebfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBFC8_0x1ebfc8");
#endif

    switch (ctx->pc) {
        case 0x1ebfecu: goto label_1ebfec;
        case 0x1ec000u: goto label_1ec000;
        default: break;
    }

    ctx->pc = 0x1ebfc8u;

label_1ebfc8:
    // 0x1ebfc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ebfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ebfcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ebfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ebfd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ebfd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ebfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfd8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ebfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ebfdc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBFDCu;
    {
        const bool branch_taken_0x1ebfdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebfdc) {
            ctx->pc = 0x1EBFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBFDCu;
            // 0x1ebfe0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBFF0u;
            goto label_1ebff0;
        }
    }
    ctx->pc = 0x1EBFE4u;
    // 0x1ebfe4: 0xc07aff2  jal         func_1EBFC8
    ctx->pc = 0x1EBFE4u;
    SET_GPR_U32(ctx, 31, 0x1EBFECu);
    ctx->pc = 0x1EBFC8u;
    goto label_1ebfc8;
    ctx->pc = 0x1EBFECu;
label_1ebfec:
    // 0x1ebfec: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ebfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ebff0:
    // 0x1ebff0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBFF0u;
    {
        const bool branch_taken_0x1ebff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebff0) {
            ctx->pc = 0x1EBFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBFF0u;
            // 0x1ebff4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC004u;
            goto label_1ec004;
        }
    }
    ctx->pc = 0x1EBFF8u;
    // 0x1ebff8: 0xc07aff2  jal         func_1EBFC8
    ctx->pc = 0x1EBFF8u;
    SET_GPR_U32(ctx, 31, 0x1EC000u);
    ctx->pc = 0x1EBFC8u;
    goto label_1ebfc8;
    ctx->pc = 0x1EC000u;
label_1ec000:
    // 0x1ec000: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ec000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ec004:
    // 0x1ec004: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec00c: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1ec00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1ec010: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC010u;
        // 0x1ec014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC018u;
    // 0x1ec018: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ec018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ec01c: 0x0  nop
    ctx->pc = 0x1ec01cu;
    // NOP
    ctx->pc = 0x1ec020u;
}
