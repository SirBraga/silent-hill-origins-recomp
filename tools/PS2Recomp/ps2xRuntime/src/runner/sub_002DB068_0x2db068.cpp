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

// Function: sub_002DB068
// Address: 0x2db068 - 0x2db0e0
void sub_002DB068_0x2db068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB068_0x2db068");
#endif

    switch (ctx->pc) {
        case 0x2db068u: goto label_2db068;
        case 0x2db06cu: goto label_2db06c;
        case 0x2db070u: goto label_2db070;
        case 0x2db074u: goto label_2db074;
        case 0x2db078u: goto label_2db078;
        case 0x2db07cu: goto label_2db07c;
        case 0x2db080u: goto label_2db080;
        case 0x2db084u: goto label_2db084;
        case 0x2db088u: goto label_2db088;
        case 0x2db08cu: goto label_2db08c;
        case 0x2db090u: goto label_2db090;
        case 0x2db094u: goto label_2db094;
        case 0x2db098u: goto label_2db098;
        case 0x2db09cu: goto label_2db09c;
        case 0x2db0a0u: goto label_2db0a0;
        case 0x2db0a4u: goto label_2db0a4;
        case 0x2db0a8u: goto label_2db0a8;
        case 0x2db0acu: goto label_2db0ac;
        case 0x2db0b0u: goto label_2db0b0;
        case 0x2db0b4u: goto label_2db0b4;
        case 0x2db0b8u: goto label_2db0b8;
        case 0x2db0bcu: goto label_2db0bc;
        case 0x2db0c0u: goto label_2db0c0;
        case 0x2db0c4u: goto label_2db0c4;
        case 0x2db0c8u: goto label_2db0c8;
        case 0x2db0ccu: goto label_2db0cc;
        case 0x2db0d0u: goto label_2db0d0;
        case 0x2db0d4u: goto label_2db0d4;
        case 0x2db0d8u: goto label_2db0d8;
        case 0x2db0dcu: goto label_2db0dc;
        default: break;
    }

    ctx->pc = 0x2db068u;

label_2db068:
    // 0x2db068: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2db068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2db06c:
    // 0x2db06c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2db06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2db070:
    // 0x2db070: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2db070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2db074:
    // 0x2db074: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2db074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db078:
    // 0x2db078: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2db078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2db07c:
    // 0x2db07c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2db07cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2db080:
    // 0x2db080: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2db084:
    if (ctx->pc == 0x2DB084u) {
        ctx->pc = 0x2DB084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB080u;
        // 0x2db084: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB088u;
        goto label_2db088;
    }
    ctx->pc = 0x2DB080u;
    {
        const bool branch_taken_0x2db080 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB080u;
        // 0x2db084: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db080) {
            ctx->pc = 0x2DB0B8u;
            goto label_2db0b8;
        }
    }
    ctx->pc = 0x2DB088u;
label_2db088:
    // 0x2db088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2db08c:
    // 0x2db08c: 0x0  nop
    ctx->pc = 0x2db08cu;
    // NOP
label_2db090:
    // 0x2db090: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2db090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2db094:
    // 0x2db094: 0x40f809  jalr        $v0
label_2db098:
    if (ctx->pc == 0x2DB098u) {
        ctx->pc = 0x2DB09Cu;
        goto label_2db09c;
    }
    ctx->pc = 0x2DB094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DB09Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB094u, 0x2DB09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DB09Cu;
label_2db09c:
    // 0x2db09c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2db0a0:
    if (ctx->pc == 0x2DB0A0u) {
        ctx->pc = 0x2DB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB09Cu;
        // 0x2db0a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB0A4u;
        goto label_2db0a4;
    }
    ctx->pc = 0x2DB09Cu;
    {
        const bool branch_taken_0x2db09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB09Cu;
        // 0x2db0a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db09c) {
            ctx->pc = 0x2DB0ACu;
            goto label_2db0ac;
        }
    }
    ctx->pc = 0x2DB0A4u;
label_2db0a4:
    // 0x2db0a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2db0a8:
    if (ctx->pc == 0x2DB0A8u) {
        ctx->pc = 0x2DB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0A4u;
        // 0x2db0a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB0ACu;
        goto label_2db0ac;
    }
    ctx->pc = 0x2DB0A4u;
    {
        const bool branch_taken_0x2db0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0A4u;
        // 0x2db0a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0a4) {
            ctx->pc = 0x2DB0BCu;
            goto label_2db0bc;
        }
    }
    ctx->pc = 0x2DB0ACu;
label_2db0ac:
    // 0x2db0ac: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x2db0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2db0b0:
    // 0x2db0b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2db0b4:
    if (ctx->pc == 0x2DB0B4u) {
        ctx->pc = 0x2DB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0B0u;
        // 0x2db0b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB0B8u;
        goto label_2db0b8;
    }
    ctx->pc = 0x2DB0B0u;
    {
        const bool branch_taken_0x2db0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0B0u;
        // 0x2db0b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0b0) {
            ctx->pc = 0x2DB090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db090;
        }
    }
    ctx->pc = 0x2DB0B8u;
label_2db0b8:
    // 0x2db0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db0bc:
    // 0x2db0bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2db0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2db0c0:
    // 0x2db0c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2db0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2db0c4:
    // 0x2db0c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2db0c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2db0c8:
    // 0x2db0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2db0cc:
    // 0x2db0cc: 0x3e00008  jr          $ra
label_2db0d0:
    if (ctx->pc == 0x2DB0D0u) {
        ctx->pc = 0x2DB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0CCu;
        // 0x2db0d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB0D4u;
        goto label_2db0d4;
    }
    ctx->pc = 0x2DB0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0CCu;
        // 0x2db0d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB0D4u;
label_2db0d4:
    // 0x2db0d4: 0x0  nop
    ctx->pc = 0x2db0d4u;
    // NOP
label_2db0d8:
    // 0x2db0d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2db0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2db0dc:
    // 0x2db0dc: 0x0  nop
    ctx->pc = 0x2db0dcu;
    // NOP
    ctx->pc = 0x2db0e0u;
}
