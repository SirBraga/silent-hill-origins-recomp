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

// Function: sub_0021AF40
// Address: 0x21af40 - 0x21afa8
void sub_0021AF40_0x21af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AF40_0x21af40");
#endif

    switch (ctx->pc) {
        case 0x21af68u: goto label_21af68;
        case 0x21af74u: goto label_21af74;
        case 0x21af94u: goto label_21af94;
        default: break;
    }

    ctx->pc = 0x21af40u;

    // 0x21af40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21af40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21af44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21af44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21af48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21af48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21af4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21af4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21af50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21af54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21af58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21AF58u;
    {
        const bool branch_taken_0x21af58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF58u;
        // 0x21af5c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af58) {
            ctx->pc = 0x21AF80u;
            goto label_21af80;
        }
    }
    ctx->pc = 0x21AF60u;
    // 0x21af60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x21af60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21af64: 0x0  nop
    ctx->pc = 0x21af64u;
    // NOP
label_21af68:
    // 0x21af68: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x21af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21af6c: 0xc086cc6  jal         func_21B318
    ctx->pc = 0x21AF6Cu;
    SET_GPR_U32(ctx, 31, 0x21AF74u);
    ctx->pc = 0x21AF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AF6Cu;
    // 0x21af70: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B318u, 0x21AF6Cu, 0x21AF74u)) {
        return;
    }
    ctx->pc = 0x21AF74u;
label_21af74:
    // 0x21af74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21af74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21af78: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21AF78u;
    {
        const bool branch_taken_0x21af78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21af78) {
            ctx->pc = 0x21AF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AF78u;
            // 0x21af7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21af68;
        }
    }
    ctx->pc = 0x21AF80u;
label_21af80:
    // 0x21af80: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x21af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x21af84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AF84u;
    {
        const bool branch_taken_0x21af84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21af84) {
            ctx->pc = 0x21AF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AF84u;
            // 0x21af88: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AF98u;
            goto label_21af98;
        }
    }
    ctx->pc = 0x21AF8Cu;
    // 0x21af8c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x21AF8Cu;
    SET_GPR_U32(ctx, 31, 0x21AF94u);
    ctx->pc = 0x21AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AF8Cu;
    // 0x21af90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x21AF8Cu, 0x21AF94u)) {
        return;
    }
    ctx->pc = 0x21AF94u;
label_21af94:
    // 0x21af94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21af94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21af98:
    // 0x21af98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21af98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21af9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21af9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21afa0: 0x3e00008  jr          $ra
    ctx->pc = 0x21AFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFA0u;
        // 0x21afa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AFA8u;
}
