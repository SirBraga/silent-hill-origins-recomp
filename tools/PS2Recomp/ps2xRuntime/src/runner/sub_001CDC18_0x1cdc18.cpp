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

// Function: sub_001CDC18
// Address: 0x1cdc18 - 0x1cdcc8
void sub_001CDC18_0x1cdc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDC18_0x1cdc18");
#endif

    switch (ctx->pc) {
        case 0x1cdc18u: goto label_1cdc18;
        case 0x1cdc1cu: goto label_1cdc1c;
        case 0x1cdc20u: goto label_1cdc20;
        case 0x1cdc24u: goto label_1cdc24;
        case 0x1cdc28u: goto label_1cdc28;
        case 0x1cdc2cu: goto label_1cdc2c;
        case 0x1cdc30u: goto label_1cdc30;
        case 0x1cdc34u: goto label_1cdc34;
        case 0x1cdc38u: goto label_1cdc38;
        case 0x1cdc3cu: goto label_1cdc3c;
        case 0x1cdc40u: goto label_1cdc40;
        case 0x1cdc44u: goto label_1cdc44;
        case 0x1cdc48u: goto label_1cdc48;
        case 0x1cdc4cu: goto label_1cdc4c;
        case 0x1cdc50u: goto label_1cdc50;
        case 0x1cdc54u: goto label_1cdc54;
        case 0x1cdc58u: goto label_1cdc58;
        case 0x1cdc5cu: goto label_1cdc5c;
        case 0x1cdc60u: goto label_1cdc60;
        case 0x1cdc64u: goto label_1cdc64;
        case 0x1cdc68u: goto label_1cdc68;
        case 0x1cdc6cu: goto label_1cdc6c;
        case 0x1cdc70u: goto label_1cdc70;
        case 0x1cdc74u: goto label_1cdc74;
        case 0x1cdc78u: goto label_1cdc78;
        case 0x1cdc7cu: goto label_1cdc7c;
        case 0x1cdc80u: goto label_1cdc80;
        case 0x1cdc84u: goto label_1cdc84;
        case 0x1cdc88u: goto label_1cdc88;
        case 0x1cdc8cu: goto label_1cdc8c;
        case 0x1cdc90u: goto label_1cdc90;
        case 0x1cdc94u: goto label_1cdc94;
        case 0x1cdc98u: goto label_1cdc98;
        case 0x1cdc9cu: goto label_1cdc9c;
        case 0x1cdca0u: goto label_1cdca0;
        case 0x1cdca4u: goto label_1cdca4;
        case 0x1cdca8u: goto label_1cdca8;
        case 0x1cdcacu: goto label_1cdcac;
        case 0x1cdcb0u: goto label_1cdcb0;
        case 0x1cdcb4u: goto label_1cdcb4;
        case 0x1cdcb8u: goto label_1cdcb8;
        case 0x1cdcbcu: goto label_1cdcbc;
        case 0x1cdcc0u: goto label_1cdcc0;
        case 0x1cdcc4u: goto label_1cdcc4;
        default: break;
    }

    ctx->pc = 0x1cdc18u;

label_1cdc18:
    // 0x1cdc18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cdc1c:
    // 0x1cdc1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cdc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1cdc20:
    // 0x1cdc20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cdc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cdc24:
    // 0x1cdc24: 0x24460268  addiu       $a2, $v0, 0x268
    ctx->pc = 0x1cdc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 616));
label_1cdc28:
    // 0x1cdc28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cdc2c:
    // 0x1cdc2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cdc30:
    // 0x1cdc30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cdc34:
    // 0x1cdc34: 0x26040278  addiu       $a0, $s0, 0x278
    ctx->pc = 0x1cdc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
label_1cdc38:
    // 0x1cdc38: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cdc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cdc3c:
    // 0x1cdc3c: 0x0  nop
    ctx->pc = 0x1cdc3cu;
    // NOP
label_1cdc40:
    // 0x1cdc40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cdc44:
    // 0x1cdc44: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1cdc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1cdc48:
    // 0x1cdc48: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1cdc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cdc4c:
    // 0x1cdc4c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1cdc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1cdc50:
    // 0x1cdc50: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1cdc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1cdc54:
    // 0x1cdc54: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1cdc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1cdc58:
    // 0x1cdc58: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
label_1cdc5c:
    if (ctx->pc == 0x1CDC5Cu) {
        ctx->pc = 0x1CDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC58u;
        // 0x1cdc5c: 0x2380b  movn        $a3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC60u;
        goto label_1cdc60;
    }
    ctx->pc = 0x1CDC58u;
    {
        const bool branch_taken_0x1cdc58 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1CDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC58u;
        // 0x1cdc5c: 0x2380b  movn        $a3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc58) {
            ctx->pc = 0x1CDC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc40;
        }
    }
    ctx->pc = 0x1CDC60u;
label_1cdc60:
    // 0x1cdc60: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
label_1cdc64:
    if (ctx->pc == 0x1CDC64u) {
        ctx->pc = 0x1CDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC60u;
        // 0x1cdc64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC68u;
        goto label_1cdc68;
    }
    ctx->pc = 0x1CDC60u;
    {
        const bool branch_taken_0x1cdc60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC60u;
        // 0x1cdc64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc60) {
            ctx->pc = 0x1CDC90u;
            goto label_1cdc90;
        }
    }
    ctx->pc = 0x1CDC68u;
label_1cdc68:
    // 0x1cdc68: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cdc68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cdc6c:
    // 0x1cdc6c: 0xae020290  sw          $v0, 0x290($s0)
    ctx->pc = 0x1cdc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
label_1cdc70:
    // 0x1cdc70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cdc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cdc74:
    // 0x1cdc74: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cdc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cdc78:
    // 0x1cdc78: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cdc78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cdc7c:
    // 0x1cdc7c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cdc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cdc80:
    // 0x1cdc80: 0x60f809  jalr        $v1
label_1cdc84:
    if (ctx->pc == 0x1CDC84u) {
        ctx->pc = 0x1CDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC80u;
        // 0x1cdc84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC88u;
        goto label_1cdc88;
    }
    ctx->pc = 0x1CDC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDC88u);
        ctx->pc = 0x1CDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC80u;
        // 0x1cdc84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC80u, 0x1CDC88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDC88u;
label_1cdc88:
    // 0x1cdc88: 0x1000000b  b           . + 4 + (0xB << 2)
label_1cdc8c:
    if (ctx->pc == 0x1CDC8Cu) {
        ctx->pc = 0x1CDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC88u;
        // 0x1cdc8c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC90u;
        goto label_1cdc90;
    }
    ctx->pc = 0x1CDC88u;
    {
        const bool branch_taken_0x1cdc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC88u;
        // 0x1cdc8c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc88) {
            ctx->pc = 0x1CDCB8u;
            goto label_1cdcb8;
        }
    }
    ctx->pc = 0x1CDC90u;
label_1cdc90:
    // 0x1cdc90: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cdc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cdc94:
    // 0x1cdc94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cdc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cdc98:
    // 0x1cdc98: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cdc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cdc9c:
    // 0x1cdc9c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cdc9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cdca0:
    // 0x1cdca0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cdca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cdca4:
    // 0x1cdca4: 0x60f809  jalr        $v1
label_1cdca8:
    if (ctx->pc == 0x1CDCA8u) {
        ctx->pc = 0x1CDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCA4u;
        // 0x1cdca8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCACu;
        goto label_1cdcac;
    }
    ctx->pc = 0x1CDCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDCACu);
        ctx->pc = 0x1CDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCA4u;
        // 0x1cdca8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDCA4u, 0x1CDCACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDCACu;
label_1cdcac:
    // 0x1cdcac: 0xc073732  jal         func_1CDCC8
label_1cdcb0:
    if (ctx->pc == 0x1CDCB0u) {
        ctx->pc = 0x1CDCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCACu;
        // 0x1cdcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCB4u;
        goto label_1cdcb4;
    }
    ctx->pc = 0x1CDCACu;
    SET_GPR_U32(ctx, 31, 0x1CDCB4u);
    ctx->pc = 0x1CDCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCACu;
    // 0x1cdcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDCC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CDCC8u, 0x1CDCACu, 0x1CDCB4u)) {
        return;
    }
    ctx->pc = 0x1CDCB4u;
label_1cdcb4:
    // 0x1cdcb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cdcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cdcb8:
    // 0x1cdcb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdcbc:
    // 0x1cdcbc: 0x3e00008  jr          $ra
label_1cdcc0:
    if (ctx->pc == 0x1CDCC0u) {
        ctx->pc = 0x1CDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCBCu;
        // 0x1cdcc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCC4u;
        goto label_1cdcc4;
    }
    ctx->pc = 0x1CDCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCBCu;
        // 0x1cdcc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDCC4u;
label_1cdcc4:
    // 0x1cdcc4: 0x0  nop
    ctx->pc = 0x1cdcc4u;
    // NOP
    ctx->pc = 0x1cdcc8u;
}
