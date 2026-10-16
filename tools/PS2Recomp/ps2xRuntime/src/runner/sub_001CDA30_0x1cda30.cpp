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

// Function: sub_001CDA30
// Address: 0x1cda30 - 0x1cdad0
void sub_001CDA30_0x1cda30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDA30_0x1cda30");
#endif

    switch (ctx->pc) {
        case 0x1cda30u: goto label_1cda30;
        case 0x1cda34u: goto label_1cda34;
        case 0x1cda38u: goto label_1cda38;
        case 0x1cda3cu: goto label_1cda3c;
        case 0x1cda40u: goto label_1cda40;
        case 0x1cda44u: goto label_1cda44;
        case 0x1cda48u: goto label_1cda48;
        case 0x1cda4cu: goto label_1cda4c;
        case 0x1cda50u: goto label_1cda50;
        case 0x1cda54u: goto label_1cda54;
        case 0x1cda58u: goto label_1cda58;
        case 0x1cda5cu: goto label_1cda5c;
        case 0x1cda60u: goto label_1cda60;
        case 0x1cda64u: goto label_1cda64;
        case 0x1cda68u: goto label_1cda68;
        case 0x1cda6cu: goto label_1cda6c;
        case 0x1cda70u: goto label_1cda70;
        case 0x1cda74u: goto label_1cda74;
        case 0x1cda78u: goto label_1cda78;
        case 0x1cda7cu: goto label_1cda7c;
        case 0x1cda80u: goto label_1cda80;
        case 0x1cda84u: goto label_1cda84;
        case 0x1cda88u: goto label_1cda88;
        case 0x1cda8cu: goto label_1cda8c;
        case 0x1cda90u: goto label_1cda90;
        case 0x1cda94u: goto label_1cda94;
        case 0x1cda98u: goto label_1cda98;
        case 0x1cda9cu: goto label_1cda9c;
        case 0x1cdaa0u: goto label_1cdaa0;
        case 0x1cdaa4u: goto label_1cdaa4;
        case 0x1cdaa8u: goto label_1cdaa8;
        case 0x1cdaacu: goto label_1cdaac;
        case 0x1cdab0u: goto label_1cdab0;
        case 0x1cdab4u: goto label_1cdab4;
        case 0x1cdab8u: goto label_1cdab8;
        case 0x1cdabcu: goto label_1cdabc;
        case 0x1cdac0u: goto label_1cdac0;
        case 0x1cdac4u: goto label_1cdac4;
        case 0x1cdac8u: goto label_1cdac8;
        case 0x1cdaccu: goto label_1cdacc;
        default: break;
    }

    ctx->pc = 0x1cda30u;

label_1cda30:
    // 0x1cda30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cda30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cda34:
    // 0x1cda34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cda34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cda38:
    // 0x1cda38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cda38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cda3c:
    // 0x1cda3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cda3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cda40:
    // 0x1cda40: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1cda40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1cda44:
    // 0x1cda44: 0x8e020294  lw          $v0, 0x294($s0)
    ctx->pc = 0x1cda44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_1cda48:
    // 0x1cda48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cda4c:
    if (ctx->pc == 0x1CDA4Cu) {
        ctx->pc = 0x1CDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA48u;
        // 0x1cda4c: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA50u;
        goto label_1cda50;
    }
    ctx->pc = 0x1CDA48u;
    {
        const bool branch_taken_0x1cda48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA48u;
        // 0x1cda4c: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda48) {
            ctx->pc = 0x1CDA6Cu;
            goto label_1cda6c;
        }
    }
    ctx->pc = 0x1CDA50u;
label_1cda50:
    // 0x1cda50: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1cda50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1cda54:
    // 0x1cda54: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1cda54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1cda58:
    // 0x1cda58: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1cda58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1cda5c:
    // 0x1cda5c: 0x60f809  jalr        $v1
label_1cda60:
    if (ctx->pc == 0x1CDA60u) {
        ctx->pc = 0x1CDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA5Cu;
        // 0x1cda60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA64u;
        goto label_1cda64;
    }
    ctx->pc = 0x1CDA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDA64u);
        ctx->pc = 0x1CDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA5Cu;
        // 0x1cda60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA5Cu, 0x1CDA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDA64u;
label_1cda64:
    // 0x1cda64: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cda68:
    if (ctx->pc == 0x1CDA68u) {
        ctx->pc = 0x1CDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA64u;
        // 0x1cda68: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA6Cu;
        goto label_1cda6c;
    }
    ctx->pc = 0x1CDA64u;
    {
        const bool branch_taken_0x1cda64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA64u;
        // 0x1cda68: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda64) {
            ctx->pc = 0x1CDA84u;
            goto label_1cda84;
        }
    }
    ctx->pc = 0x1CDA6Cu;
label_1cda6c:
    // 0x1cda6c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1cda6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1cda70:
    // 0x1cda70: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1cda70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1cda74:
    // 0x1cda74: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1cda74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1cda78:
    // 0x1cda78: 0x60f809  jalr        $v1
label_1cda7c:
    if (ctx->pc == 0x1CDA7Cu) {
        ctx->pc = 0x1CDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA78u;
        // 0x1cda7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA80u;
        goto label_1cda80;
    }
    ctx->pc = 0x1CDA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDA80u);
        ctx->pc = 0x1CDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA78u;
        // 0x1cda7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA78u, 0x1CDA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDA80u;
label_1cda80:
    // 0x1cda80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cda80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cda84:
    // 0x1cda84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cda84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cda88:
    // 0x1cda88: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cda88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cda8c:
    // 0x1cda8c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cda8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cda90:
    // 0x1cda90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cda90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cda94:
    // 0x1cda94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cda94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cda98:
    // 0x1cda98: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cda98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cda9c:
    // 0x1cda9c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1cdaa0:
    if (ctx->pc == 0x1CDAA0u) {
        ctx->pc = 0x1CDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA9Cu;
        // 0x1cdaa0: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDAA4u;
        goto label_1cdaa4;
    }
    ctx->pc = 0x1CDA9Cu;
    {
        const bool branch_taken_0x1cda9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA9Cu;
        // 0x1cdaa0: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda9c) {
            ctx->pc = 0x1CDA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cda88;
        }
    }
    ctx->pc = 0x1CDAA4u;
label_1cdaa4:
    // 0x1cdaa4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cdaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cdaa8:
    // 0x1cdaa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cdaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cdaac:
    // 0x1cdaac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdab0:
    // 0x1cdab0: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1cdab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
label_1cdab4:
    // 0x1cdab4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cdab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cdab8:
    // 0x1cdab8: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1cdab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
label_1cdabc:
    // 0x1cdabc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cdabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cdac0:
    // 0x1cdac0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cdac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cdac4:
    // 0x1cdac4: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x1cdac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_1cdac8:
    // 0x1cdac8: 0x3e00008  jr          $ra
label_1cdacc:
    if (ctx->pc == 0x1CDACCu) {
        ctx->pc = 0x1CDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAC8u;
        // 0x1cdacc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDAD0u;
        goto label_fallthrough_0x1cdac8;
    }
    ctx->pc = 0x1CDAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAC8u;
        // 0x1cdacc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cdac8:
    ctx->pc = 0x1CDAD0u;
}
