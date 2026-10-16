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

// Function: sub_001AF040
// Address: 0x1af040 - 0x1af0b0
void sub_001AF040_0x1af040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF040_0x1af040");
#endif

    switch (ctx->pc) {
        case 0x1af040u: goto label_1af040;
        case 0x1af044u: goto label_1af044;
        case 0x1af048u: goto label_1af048;
        case 0x1af04cu: goto label_1af04c;
        case 0x1af050u: goto label_1af050;
        case 0x1af054u: goto label_1af054;
        case 0x1af058u: goto label_1af058;
        case 0x1af05cu: goto label_1af05c;
        case 0x1af060u: goto label_1af060;
        case 0x1af064u: goto label_1af064;
        case 0x1af068u: goto label_1af068;
        case 0x1af06cu: goto label_1af06c;
        case 0x1af070u: goto label_1af070;
        case 0x1af074u: goto label_1af074;
        case 0x1af078u: goto label_1af078;
        case 0x1af07cu: goto label_1af07c;
        case 0x1af080u: goto label_1af080;
        case 0x1af084u: goto label_1af084;
        case 0x1af088u: goto label_1af088;
        case 0x1af08cu: goto label_1af08c;
        case 0x1af090u: goto label_1af090;
        case 0x1af094u: goto label_1af094;
        case 0x1af098u: goto label_1af098;
        case 0x1af09cu: goto label_1af09c;
        case 0x1af0a0u: goto label_1af0a0;
        case 0x1af0a4u: goto label_1af0a4;
        case 0x1af0a8u: goto label_1af0a8;
        case 0x1af0acu: goto label_1af0ac;
        default: break;
    }

    ctx->pc = 0x1af040u;

label_1af040:
    // 0x1af040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1af044:
    // 0x1af044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1af048:
    // 0x1af048: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1af048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1af04c:
    // 0x1af04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1af050:
    // 0x1af050: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1af050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1af054:
    // 0x1af054: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1af058:
    if (ctx->pc == 0x1AF058u) {
        ctx->pc = 0x1AF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF054u;
        // 0x1af058: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF05Cu;
        goto label_1af05c;
    }
    ctx->pc = 0x1AF054u;
    {
        const bool branch_taken_0x1af054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF054u;
        // 0x1af058: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af054) {
            ctx->pc = 0x1AF098u;
            goto label_1af098;
        }
    }
    ctx->pc = 0x1AF05Cu;
label_1af05c:
    // 0x1af05c: 0x8c900034  lw          $s0, 0x34($a0)
    ctx->pc = 0x1af05cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1af060:
    // 0x1af060: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_1af064:
    if (ctx->pc == 0x1AF064u) {
        ctx->pc = 0x1AF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF060u;
        // 0x1af064: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF068u;
        goto label_1af068;
    }
    ctx->pc = 0x1AF060u;
    {
        const bool branch_taken_0x1af060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af060) {
            ctx->pc = 0x1AF064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF060u;
            // 0x1af064: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF09Cu;
            goto label_1af09c;
        }
    }
    ctx->pc = 0x1AF068u;
label_1af068:
    // 0x1af068: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1af068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af06c:
    // 0x1af06c: 0x0  nop
    ctx->pc = 0x1af06cu;
    // NOP
label_1af070:
    // 0x1af070: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1af074:
    if (ctx->pc == 0x1AF074u) {
        ctx->pc = 0x1AF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF070u;
        // 0x1af074: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF078u;
        goto label_1af078;
    }
    ctx->pc = 0x1AF070u;
    {
        const bool branch_taken_0x1af070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF070u;
        // 0x1af074: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af070) {
            ctx->pc = 0x1AF08Cu;
            goto label_1af08c;
        }
    }
    ctx->pc = 0x1AF078u;
label_1af078:
    // 0x1af078: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1af078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1af07c:
    // 0x1af07c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1af07cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1af080:
    // 0x1af080: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1af080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1af084:
    // 0x1af084: 0x60f809  jalr        $v1
label_1af088:
    if (ctx->pc == 0x1AF088u) {
        ctx->pc = 0x1AF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF084u;
        // 0x1af088: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF08Cu;
        goto label_1af08c;
    }
    ctx->pc = 0x1AF084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF08Cu);
        ctx->pc = 0x1AF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF084u;
        // 0x1af088: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF084u, 0x1AF08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF08Cu;
label_1af08c:
    // 0x1af08c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1af08cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1af090:
    // 0x1af090: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
label_1af094:
    if (ctx->pc == 0x1AF094u) {
        ctx->pc = 0x1AF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF090u;
        // 0x1af094: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF098u;
        goto label_1af098;
    }
    ctx->pc = 0x1AF090u;
    {
        const bool branch_taken_0x1af090 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af090) {
            ctx->pc = 0x1AF094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF090u;
            // 0x1af094: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af070;
        }
    }
    ctx->pc = 0x1AF098u;
label_1af098:
    // 0x1af098: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af09c:
    // 0x1af09c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af0a0:
    // 0x1af0a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af0a4:
    // 0x1af0a4: 0x3e00008  jr          $ra
label_1af0a8:
    if (ctx->pc == 0x1AF0A8u) {
        ctx->pc = 0x1AF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0A4u;
        // 0x1af0a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0ACu;
        goto label_1af0ac;
    }
    ctx->pc = 0x1AF0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0A4u;
        // 0x1af0a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF0ACu;
label_1af0ac:
    // 0x1af0ac: 0x0  nop
    ctx->pc = 0x1af0acu;
    // NOP
    ctx->pc = 0x1af0b0u;
}
