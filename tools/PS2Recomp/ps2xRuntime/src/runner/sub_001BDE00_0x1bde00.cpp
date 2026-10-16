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

// Function: sub_001BDE00
// Address: 0x1bde00 - 0x1bde88
void sub_001BDE00_0x1bde00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDE00_0x1bde00");
#endif

    switch (ctx->pc) {
        case 0x1bde00u: goto label_1bde00;
        case 0x1bde04u: goto label_1bde04;
        case 0x1bde08u: goto label_1bde08;
        case 0x1bde0cu: goto label_1bde0c;
        case 0x1bde10u: goto label_1bde10;
        case 0x1bde14u: goto label_1bde14;
        case 0x1bde18u: goto label_1bde18;
        case 0x1bde1cu: goto label_1bde1c;
        case 0x1bde20u: goto label_1bde20;
        case 0x1bde24u: goto label_1bde24;
        case 0x1bde28u: goto label_1bde28;
        case 0x1bde2cu: goto label_1bde2c;
        case 0x1bde30u: goto label_1bde30;
        case 0x1bde34u: goto label_1bde34;
        case 0x1bde38u: goto label_1bde38;
        case 0x1bde3cu: goto label_1bde3c;
        case 0x1bde40u: goto label_1bde40;
        case 0x1bde44u: goto label_1bde44;
        case 0x1bde48u: goto label_1bde48;
        case 0x1bde4cu: goto label_1bde4c;
        case 0x1bde50u: goto label_1bde50;
        case 0x1bde54u: goto label_1bde54;
        case 0x1bde58u: goto label_1bde58;
        case 0x1bde5cu: goto label_1bde5c;
        case 0x1bde60u: goto label_1bde60;
        case 0x1bde64u: goto label_1bde64;
        case 0x1bde68u: goto label_1bde68;
        case 0x1bde6cu: goto label_1bde6c;
        case 0x1bde70u: goto label_1bde70;
        case 0x1bde74u: goto label_1bde74;
        case 0x1bde78u: goto label_1bde78;
        case 0x1bde7cu: goto label_1bde7c;
        case 0x1bde80u: goto label_1bde80;
        case 0x1bde84u: goto label_1bde84;
        default: break;
    }

    ctx->pc = 0x1bde00u;

label_1bde00:
    // 0x1bde00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bde00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bde04:
    // 0x1bde04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bde04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1bde08:
    // 0x1bde08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bde08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bde0c:
    // 0x1bde0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bde0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bde10:
    // 0x1bde10: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1bde10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1bde14:
    // 0x1bde14: 0xc06bc48  jal         func_1AF120
label_1bde18:
    if (ctx->pc == 0x1BDE18u) {
        ctx->pc = 0x1BDE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE14u;
        // 0x1bde18: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE1Cu;
        goto label_1bde1c;
    }
    ctx->pc = 0x1BDE14u;
    SET_GPR_U32(ctx, 31, 0x1BDE1Cu);
    ctx->pc = 0x1BDE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE14u;
    // 0x1bde18: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF120u, 0x1BDE14u, 0x1BDE1Cu)) {
        return;
    }
    ctx->pc = 0x1BDE1Cu;
label_1bde1c:
    // 0x1bde1c: 0x8e06027c  lw          $a2, 0x27C($s0)
    ctx->pc = 0x1bde1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_1bde20:
    // 0x1bde20: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1bde24:
    if (ctx->pc == 0x1BDE24u) {
        ctx->pc = 0x1BDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE20u;
        // 0x1bde24: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE28u;
        goto label_1bde28;
    }
    ctx->pc = 0x1BDE20u;
    {
        const bool branch_taken_0x1bde20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE20u;
        // 0x1bde24: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde20) {
            ctx->pc = 0x1BDE40u;
            goto label_1bde40;
        }
    }
    ctx->pc = 0x1BDE28u;
label_1bde28:
    // 0x1bde28: 0x8cc30258  lw          $v1, 0x258($a2)
    ctx->pc = 0x1bde28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1bde2c:
    // 0x1bde2c: 0x24a5d778  addiu       $a1, $a1, -0x2888
    ctx->pc = 0x1bde2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956920));
label_1bde30:
    // 0x1bde30: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1bde30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1bde34:
    // 0x1bde34: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1bde34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1bde38:
    // 0x1bde38: 0x40f809  jalr        $v0
label_1bde3c:
    if (ctx->pc == 0x1BDE3Cu) {
        ctx->pc = 0x1BDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE38u;
        // 0x1bde3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE40u;
        goto label_1bde40;
    }
    ctx->pc = 0x1BDE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDE40u);
        ctx->pc = 0x1BDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE38u;
        // 0x1bde3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE38u, 0x1BDE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDE40u;
label_1bde40:
    // 0x1bde40: 0x8e060290  lw          $a2, 0x290($s0)
    ctx->pc = 0x1bde40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1bde44:
    // 0x1bde44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bde44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bde48:
    // 0x1bde48: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1bde48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1bde4c:
    // 0x1bde4c: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1bde4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1bde50:
    // 0x1bde50: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1bde50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1bde54:
    // 0x1bde54: 0x60f809  jalr        $v1
label_1bde58:
    if (ctx->pc == 0x1BDE58u) {
        ctx->pc = 0x1BDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE54u;
        // 0x1bde58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE5Cu;
        goto label_1bde5c;
    }
    ctx->pc = 0x1BDE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDE5Cu);
        ctx->pc = 0x1BDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE54u;
        // 0x1bde58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE54u, 0x1BDE5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDE5Cu;
label_1bde5c:
    // 0x1bde5c: 0x8e060294  lw          $a2, 0x294($s0)
    ctx->pc = 0x1bde5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_1bde60:
    // 0x1bde60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bde60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bde64:
    // 0x1bde64: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1bde64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1bde68:
    // 0x1bde68: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1bde68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1bde6c:
    // 0x1bde6c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1bde6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1bde70:
    // 0x1bde70: 0x60f809  jalr        $v1
label_1bde74:
    if (ctx->pc == 0x1BDE74u) {
        ctx->pc = 0x1BDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE70u;
        // 0x1bde74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE78u;
        goto label_1bde78;
    }
    ctx->pc = 0x1BDE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDE78u);
        ctx->pc = 0x1BDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE70u;
        // 0x1bde74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE70u, 0x1BDE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDE78u;
label_1bde78:
    // 0x1bde78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bde78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bde7c:
    // 0x1bde7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bde7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bde80:
    // 0x1bde80: 0x3e00008  jr          $ra
label_1bde84:
    if (ctx->pc == 0x1BDE84u) {
        ctx->pc = 0x1BDE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE80u;
        // 0x1bde84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE88u;
        goto label_fallthrough_0x1bde80;
    }
    ctx->pc = 0x1BDE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE80u;
        // 0x1bde84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bde80:
    ctx->pc = 0x1BDE88u;
}
