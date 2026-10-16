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

// Function: sub_00200C08
// Address: 0x200c08 - 0x200c70
void sub_00200C08_0x200c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200C08_0x200c08");
#endif

    switch (ctx->pc) {
        case 0x200c08u: goto label_200c08;
        case 0x200c0cu: goto label_200c0c;
        case 0x200c10u: goto label_200c10;
        case 0x200c14u: goto label_200c14;
        case 0x200c18u: goto label_200c18;
        case 0x200c1cu: goto label_200c1c;
        case 0x200c20u: goto label_200c20;
        case 0x200c24u: goto label_200c24;
        case 0x200c28u: goto label_200c28;
        case 0x200c2cu: goto label_200c2c;
        case 0x200c30u: goto label_200c30;
        case 0x200c34u: goto label_200c34;
        case 0x200c38u: goto label_200c38;
        case 0x200c3cu: goto label_200c3c;
        case 0x200c40u: goto label_200c40;
        case 0x200c44u: goto label_200c44;
        case 0x200c48u: goto label_200c48;
        case 0x200c4cu: goto label_200c4c;
        case 0x200c50u: goto label_200c50;
        case 0x200c54u: goto label_200c54;
        case 0x200c58u: goto label_200c58;
        case 0x200c5cu: goto label_200c5c;
        case 0x200c60u: goto label_200c60;
        case 0x200c64u: goto label_200c64;
        case 0x200c68u: goto label_200c68;
        case 0x200c6cu: goto label_200c6c;
        default: break;
    }

    ctx->pc = 0x200c08u;

label_200c08:
    // 0x200c08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_200c0c:
    // 0x200c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_200c10:
    // 0x200c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_200c14:
    // 0x200c14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x200c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_200c18:
    // 0x200c18: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x200c18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_200c1c:
    // 0x200c1c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_200c20:
    if (ctx->pc == 0x200C20u) {
        ctx->pc = 0x200C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C1Cu;
        // 0x200c20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C24u;
        goto label_200c24;
    }
    ctx->pc = 0x200C1Cu;
    {
        const bool branch_taken_0x200c1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C1Cu;
        // 0x200c20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c1c) {
            ctx->pc = 0x200C54u;
            goto label_200c54;
        }
    }
    ctx->pc = 0x200C24u;
label_200c24:
    // 0x200c24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x200c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200c28:
    // 0x200c28: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x200c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_200c2c:
    // 0x200c2c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x200c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_200c30:
    // 0x200c30: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x200c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_200c34:
    // 0x200c34: 0x40f809  jalr        $v0
label_200c38:
    if (ctx->pc == 0x200C38u) {
        ctx->pc = 0x200C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C34u;
        // 0x200c38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C3Cu;
        goto label_200c3c;
    }
    ctx->pc = 0x200C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200C3Cu);
        ctx->pc = 0x200C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C34u;
        // 0x200c38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C34u, 0x200C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200C3Cu;
label_200c3c:
    // 0x200c3c: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
label_200c40:
    if (ctx->pc == 0x200C40u) {
        ctx->pc = 0x200C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C3Cu;
        // 0x200c40: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C44u;
        goto label_200c44;
    }
    ctx->pc = 0x200C3Cu;
    {
        const bool branch_taken_0x200c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x200c3c) {
            ctx->pc = 0x200C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C3Cu;
            // 0x200c40: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200C4Cu;
            goto label_200c4c;
        }
    }
    ctx->pc = 0x200C44u;
label_200c44:
    // 0x200c44: 0x10000004  b           . + 4 + (0x4 << 2)
label_200c48:
    if (ctx->pc == 0x200C48u) {
        ctx->pc = 0x200C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C44u;
        // 0x200c48: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C4Cu;
        goto label_200c4c;
    }
    ctx->pc = 0x200C44u;
    {
        const bool branch_taken_0x200c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C44u;
        // 0x200c48: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c44) {
            ctx->pc = 0x200C58u;
            goto label_200c58;
        }
    }
    ctx->pc = 0x200C4Cu;
label_200c4c:
    // 0x200c4c: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_200c50:
    if (ctx->pc == 0x200C50u) {
        ctx->pc = 0x200C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C4Cu;
        // 0x200c50: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C54u;
        goto label_200c54;
    }
    ctx->pc = 0x200C4Cu;
    {
        const bool branch_taken_0x200c4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x200c4c) {
            ctx->pc = 0x200C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C4Cu;
            // 0x200c50: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200c28;
        }
    }
    ctx->pc = 0x200C54u;
label_200c54:
    // 0x200c54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200c58:
    // 0x200c58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x200c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_200c5c:
    // 0x200c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_200c60:
    // 0x200c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200c64:
    // 0x200c64: 0x3e00008  jr          $ra
label_200c68:
    if (ctx->pc == 0x200C68u) {
        ctx->pc = 0x200C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C64u;
        // 0x200c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C6Cu;
        goto label_200c6c;
    }
    ctx->pc = 0x200C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C64u;
        // 0x200c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200C6Cu;
label_200c6c:
    // 0x200c6c: 0x0  nop
    ctx->pc = 0x200c6cu;
    // NOP
    ctx->pc = 0x200c70u;
}
