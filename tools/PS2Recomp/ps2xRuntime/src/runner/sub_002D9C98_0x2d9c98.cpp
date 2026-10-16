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

// Function: sub_002D9C98
// Address: 0x2d9c98 - 0x2d9cf0
void sub_002D9C98_0x2d9c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9C98_0x2d9c98");
#endif

    switch (ctx->pc) {
        case 0x2d9c98u: goto label_2d9c98;
        case 0x2d9c9cu: goto label_2d9c9c;
        case 0x2d9ca0u: goto label_2d9ca0;
        case 0x2d9ca4u: goto label_2d9ca4;
        case 0x2d9ca8u: goto label_2d9ca8;
        case 0x2d9cacu: goto label_2d9cac;
        case 0x2d9cb0u: goto label_2d9cb0;
        case 0x2d9cb4u: goto label_2d9cb4;
        case 0x2d9cb8u: goto label_2d9cb8;
        case 0x2d9cbcu: goto label_2d9cbc;
        case 0x2d9cc0u: goto label_2d9cc0;
        case 0x2d9cc4u: goto label_2d9cc4;
        case 0x2d9cc8u: goto label_2d9cc8;
        case 0x2d9cccu: goto label_2d9ccc;
        case 0x2d9cd0u: goto label_2d9cd0;
        case 0x2d9cd4u: goto label_2d9cd4;
        case 0x2d9cd8u: goto label_2d9cd8;
        case 0x2d9cdcu: goto label_2d9cdc;
        case 0x2d9ce0u: goto label_2d9ce0;
        case 0x2d9ce4u: goto label_2d9ce4;
        case 0x2d9ce8u: goto label_2d9ce8;
        case 0x2d9cecu: goto label_2d9cec;
        default: break;
    }

    ctx->pc = 0x2d9c98u;

label_2d9c98:
    // 0x2d9c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d9c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d9c9c:
    // 0x2d9c9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d9c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2d9ca0:
    // 0x2d9ca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d9ca4:
    // 0x2d9ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ca8:
    // 0x2d9ca8: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2d9ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_2d9cac:
    // 0x2d9cac: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2d9cb0:
    if (ctx->pc == 0x2D9CB0u) {
        ctx->pc = 0x2D9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CACu;
        // 0x2d9cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9CB4u;
        goto label_2d9cb4;
    }
    ctx->pc = 0x2D9CACu;
    {
        const bool branch_taken_0x2d9cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CACu;
        // 0x2d9cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cac) {
            ctx->pc = 0x2D9CE0u;
            goto label_2d9ce0;
        }
    }
    ctx->pc = 0x2D9CB4u;
label_2d9cb4:
    // 0x2d9cb4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9cb8:
    // 0x2d9cb8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2d9cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d9cbc:
    // 0x2d9cbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9cc0:
    // 0x2d9cc0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d9cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d9cc4:
    // 0x2d9cc4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d9cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d9cc8:
    // 0x2d9cc8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d9cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d9ccc:
    // 0x2d9ccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d9cd0:
    // 0x2d9cd0: 0x40f809  jalr        $v0
label_2d9cd4:
    if (ctx->pc == 0x2D9CD4u) {
        ctx->pc = 0x2D9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CD0u;
        // 0x2d9cd4: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9CD8u;
        goto label_2d9cd8;
    }
    ctx->pc = 0x2D9CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9CD8u);
        ctx->pc = 0x2D9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CD0u;
        // 0x2d9cd4: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9CD0u, 0x2D9CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9CD8u;
label_2d9cd8:
    // 0x2d9cd8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2d9cd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_2d9cdc:
    // 0x2d9cdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d9cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ce0:
    // 0x2d9ce0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d9ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9ce4:
    // 0x2d9ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9ce8:
    // 0x2d9ce8: 0x3e00008  jr          $ra
label_2d9cec:
    if (ctx->pc == 0x2D9CECu) {
        ctx->pc = 0x2D9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CE8u;
        // 0x2d9cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9CF0u;
        goto label_fallthrough_0x2d9ce8;
    }
    ctx->pc = 0x2D9CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CE8u;
        // 0x2d9cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d9ce8:
    ctx->pc = 0x2D9CF0u;
}
