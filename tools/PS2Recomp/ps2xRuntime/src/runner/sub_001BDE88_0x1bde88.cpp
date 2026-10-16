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

// Function: sub_001BDE88
// Address: 0x1bde88 - 0x1bdf10
void sub_001BDE88_0x1bde88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDE88_0x1bde88");
#endif

    switch (ctx->pc) {
        case 0x1bde88u: goto label_1bde88;
        case 0x1bde8cu: goto label_1bde8c;
        case 0x1bde90u: goto label_1bde90;
        case 0x1bde94u: goto label_1bde94;
        case 0x1bde98u: goto label_1bde98;
        case 0x1bde9cu: goto label_1bde9c;
        case 0x1bdea0u: goto label_1bdea0;
        case 0x1bdea4u: goto label_1bdea4;
        case 0x1bdea8u: goto label_1bdea8;
        case 0x1bdeacu: goto label_1bdeac;
        case 0x1bdeb0u: goto label_1bdeb0;
        case 0x1bdeb4u: goto label_1bdeb4;
        case 0x1bdeb8u: goto label_1bdeb8;
        case 0x1bdebcu: goto label_1bdebc;
        case 0x1bdec0u: goto label_1bdec0;
        case 0x1bdec4u: goto label_1bdec4;
        case 0x1bdec8u: goto label_1bdec8;
        case 0x1bdeccu: goto label_1bdecc;
        case 0x1bded0u: goto label_1bded0;
        case 0x1bded4u: goto label_1bded4;
        case 0x1bded8u: goto label_1bded8;
        case 0x1bdedcu: goto label_1bdedc;
        case 0x1bdee0u: goto label_1bdee0;
        case 0x1bdee4u: goto label_1bdee4;
        case 0x1bdee8u: goto label_1bdee8;
        case 0x1bdeecu: goto label_1bdeec;
        case 0x1bdef0u: goto label_1bdef0;
        case 0x1bdef4u: goto label_1bdef4;
        case 0x1bdef8u: goto label_1bdef8;
        case 0x1bdefcu: goto label_1bdefc;
        case 0x1bdf00u: goto label_1bdf00;
        case 0x1bdf04u: goto label_1bdf04;
        case 0x1bdf08u: goto label_1bdf08;
        case 0x1bdf0cu: goto label_1bdf0c;
        default: break;
    }

    ctx->pc = 0x1bde88u;

label_1bde88:
    // 0x1bde88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bde88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bde8c:
    // 0x1bde8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bde8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1bde90:
    // 0x1bde90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bde90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bde94:
    // 0x1bde94: 0xc06bc5c  jal         func_1AF170
label_1bde98:
    if (ctx->pc == 0x1BDE98u) {
        ctx->pc = 0x1BDE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE94u;
        // 0x1bde98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE9Cu;
        goto label_1bde9c;
    }
    ctx->pc = 0x1BDE94u;
    SET_GPR_U32(ctx, 31, 0x1BDE9Cu);
    ctx->pc = 0x1BDE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE94u;
    // 0x1bde98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF170u, 0x1BDE94u, 0x1BDE9Cu)) {
        return;
    }
    ctx->pc = 0x1BDE9Cu;
label_1bde9c:
    // 0x1bde9c: 0x8e06027c  lw          $a2, 0x27C($s0)
    ctx->pc = 0x1bde9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_1bdea0:
    // 0x1bdea0: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
label_1bdea4:
    if (ctx->pc == 0x1BDEA4u) {
        ctx->pc = 0x1BDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEA0u;
        // 0x1bdea4: 0x8e060290  lw          $a2, 0x290($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDEA8u;
        goto label_1bdea8;
    }
    ctx->pc = 0x1BDEA0u;
    {
        const bool branch_taken_0x1bdea0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdea0) {
            ctx->pc = 0x1BDEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDEA0u;
            // 0x1bdea4: 0x8e060290  lw          $a2, 0x290($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDECCu;
            goto label_1bdecc;
        }
    }
    ctx->pc = 0x1BDEA8u;
label_1bdea8:
    // 0x1bdea8: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x1bdea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1bdeac:
    // 0x1bdeac: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1bdeb0:
    if (ctx->pc == 0x1BDEB0u) {
        ctx->pc = 0x1BDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEACu;
        // 0x1bdeb0: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDEB4u;
        goto label_1bdeb4;
    }
    ctx->pc = 0x1BDEACu;
    {
        const bool branch_taken_0x1bdeac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEACu;
        // 0x1bdeb0: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdeac) {
            ctx->pc = 0x1BDEC8u;
            goto label_1bdec8;
        }
    }
    ctx->pc = 0x1BDEB4u;
label_1bdeb4:
    // 0x1bdeb4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1bdeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1bdeb8:
    // 0x1bdeb8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1bdeb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1bdebc:
    // 0x1bdebc: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1bdebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1bdec0:
    // 0x1bdec0: 0x60f809  jalr        $v1
label_1bdec4:
    if (ctx->pc == 0x1BDEC4u) {
        ctx->pc = 0x1BDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEC0u;
        // 0x1bdec4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDEC8u;
        goto label_1bdec8;
    }
    ctx->pc = 0x1BDEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDEC8u);
        ctx->pc = 0x1BDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEC0u;
        // 0x1bdec4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDEC0u, 0x1BDEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDEC8u;
label_1bdec8:
    // 0x1bdec8: 0x8e060290  lw          $a2, 0x290($s0)
    ctx->pc = 0x1bdec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1bdecc:
    // 0x1bdecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bded0:
    // 0x1bded0: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1bded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1bded4:
    // 0x1bded4: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1bded4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1bded8:
    // 0x1bded8: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1bded8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1bdedc:
    // 0x1bdedc: 0x60f809  jalr        $v1
label_1bdee0:
    if (ctx->pc == 0x1BDEE0u) {
        ctx->pc = 0x1BDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEDCu;
        // 0x1bdee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDEE4u;
        goto label_1bdee4;
    }
    ctx->pc = 0x1BDEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDEE4u);
        ctx->pc = 0x1BDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEDCu;
        // 0x1bdee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDEDCu, 0x1BDEE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDEE4u;
label_1bdee4:
    // 0x1bdee4: 0x8e060294  lw          $a2, 0x294($s0)
    ctx->pc = 0x1bdee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_1bdee8:
    // 0x1bdee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdeec:
    // 0x1bdeec: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1bdeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1bdef0:
    // 0x1bdef0: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1bdef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1bdef4:
    // 0x1bdef4: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1bdef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1bdef8:
    // 0x1bdef8: 0x60f809  jalr        $v1
label_1bdefc:
    if (ctx->pc == 0x1BDEFCu) {
        ctx->pc = 0x1BDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEF8u;
        // 0x1bdefc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF00u;
        goto label_1bdf00;
    }
    ctx->pc = 0x1BDEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDF00u);
        ctx->pc = 0x1BDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEF8u;
        // 0x1bdefc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDEF8u, 0x1BDF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDF00u;
label_1bdf00:
    // 0x1bdf00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bdf00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bdf04:
    // 0x1bdf04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bdf08:
    // 0x1bdf08: 0x3e00008  jr          $ra
label_1bdf0c:
    if (ctx->pc == 0x1BDF0Cu) {
        ctx->pc = 0x1BDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF08u;
        // 0x1bdf0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF10u;
        goto label_fallthrough_0x1bdf08;
    }
    ctx->pc = 0x1BDF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF08u;
        // 0x1bdf0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bdf08:
    ctx->pc = 0x1BDF10u;
}
