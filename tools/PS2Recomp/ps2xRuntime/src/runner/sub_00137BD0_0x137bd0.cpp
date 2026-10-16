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

// Function: sub_00137BD0
// Address: 0x137bd0 - 0x137c40
void sub_00137BD0_0x137bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137BD0_0x137bd0");
#endif

    switch (ctx->pc) {
        case 0x137becu: goto label_137bec;
        case 0x137c00u: goto label_137c00;
        case 0x137c14u: goto label_137c14;
        case 0x137c24u: goto label_137c24;
        default: break;
    }

    ctx->pc = 0x137bd0u;

    // 0x137bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137bd8: 0x24910320  addiu       $s1, $a0, 0x320
    ctx->pc = 0x137bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x137bdc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x137bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x137be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137be4: 0xc068218  jal         func_1A0860
    ctx->pc = 0x137BE4u;
    SET_GPR_U32(ctx, 31, 0x137BECu);
    ctx->pc = 0x137BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137BE4u;
    // 0x137be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x137BE4u, 0x137BECu)) {
        return;
    }
    ctx->pc = 0x137BECu;
label_137bec:
    // 0x137bec: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x137becu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x137bf0: 0x8e0483d0  lw          $a0, -0x7C30($s0)
    ctx->pc = 0x137bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3383D0u));
    // 0x137bf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x137bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137bf8: 0xc065c7c  jal         func_1971F0
    ctx->pc = 0x137BF8u;
    SET_GPR_U32(ctx, 31, 0x137C00u);
    ctx->pc = 0x137BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137BF8u;
    // 0x137bfc: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971F0u, 0x137BF8u, 0x137C00u)) {
        return;
    }
    ctx->pc = 0x137C00u;
label_137c00:
    // 0x137c00: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x137C00u;
    {
        const bool branch_taken_0x137c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137c00) {
            ctx->pc = 0x137C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137C00u;
            // 0x137c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137C28u;
            goto label_137c28;
        }
    }
    ctx->pc = 0x137C08u;
    // 0x137c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c0c: 0xc068218  jal         func_1A0860
    ctx->pc = 0x137C0Cu;
    SET_GPR_U32(ctx, 31, 0x137C14u);
    ctx->pc = 0x137C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C0Cu;
    // 0x137c10: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x137C0Cu, 0x137C14u)) {
        return;
    }
    ctx->pc = 0x137C14u;
label_137c14:
    // 0x137c14: 0x8e0483d4  lw          $a0, -0x7C2C($s0)
    ctx->pc = 0x137c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935508)));
    // 0x137c18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x137c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c1c: 0xc065c7c  jal         func_1971F0
    ctx->pc = 0x137C1Cu;
    SET_GPR_U32(ctx, 31, 0x137C24u);
    ctx->pc = 0x137C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C1Cu;
    // 0x137c20: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971F0u, 0x137C1Cu, 0x137C24u)) {
        return;
    }
    ctx->pc = 0x137C24u;
label_137c24:
    // 0x137c24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x137c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_137c28:
    // 0x137c28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x137c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137c2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137c34: 0x3e00008  jr          $ra
    ctx->pc = 0x137C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C34u;
        // 0x137c38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137C3Cu;
    // 0x137c3c: 0x0  nop
    ctx->pc = 0x137c3cu;
    // NOP
    ctx->pc = 0x137c40u;
}
