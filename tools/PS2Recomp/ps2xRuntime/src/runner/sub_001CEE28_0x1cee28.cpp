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

// Function: sub_001CEE28
// Address: 0x1cee28 - 0x1ceec8
void sub_001CEE28_0x1cee28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEE28_0x1cee28");
#endif

    switch (ctx->pc) {
        case 0x1cee28u: goto label_1cee28;
        case 0x1cee2cu: goto label_1cee2c;
        case 0x1cee30u: goto label_1cee30;
        case 0x1cee34u: goto label_1cee34;
        case 0x1cee38u: goto label_1cee38;
        case 0x1cee3cu: goto label_1cee3c;
        case 0x1cee40u: goto label_1cee40;
        case 0x1cee44u: goto label_1cee44;
        case 0x1cee48u: goto label_1cee48;
        case 0x1cee4cu: goto label_1cee4c;
        case 0x1cee50u: goto label_1cee50;
        case 0x1cee54u: goto label_1cee54;
        case 0x1cee58u: goto label_1cee58;
        case 0x1cee5cu: goto label_1cee5c;
        case 0x1cee60u: goto label_1cee60;
        case 0x1cee64u: goto label_1cee64;
        case 0x1cee68u: goto label_1cee68;
        case 0x1cee6cu: goto label_1cee6c;
        case 0x1cee70u: goto label_1cee70;
        case 0x1cee74u: goto label_1cee74;
        case 0x1cee78u: goto label_1cee78;
        case 0x1cee7cu: goto label_1cee7c;
        case 0x1cee80u: goto label_1cee80;
        case 0x1cee84u: goto label_1cee84;
        case 0x1cee88u: goto label_1cee88;
        case 0x1cee8cu: goto label_1cee8c;
        case 0x1cee90u: goto label_1cee90;
        case 0x1cee94u: goto label_1cee94;
        case 0x1cee98u: goto label_1cee98;
        case 0x1cee9cu: goto label_1cee9c;
        case 0x1ceea0u: goto label_1ceea0;
        case 0x1ceea4u: goto label_1ceea4;
        case 0x1ceea8u: goto label_1ceea8;
        case 0x1ceeacu: goto label_1ceeac;
        case 0x1ceeb0u: goto label_1ceeb0;
        case 0x1ceeb4u: goto label_1ceeb4;
        case 0x1ceeb8u: goto label_1ceeb8;
        case 0x1ceebcu: goto label_1ceebc;
        case 0x1ceec0u: goto label_1ceec0;
        case 0x1ceec4u: goto label_1ceec4;
        default: break;
    }

    ctx->pc = 0x1cee28u;

label_1cee28:
    // 0x1cee28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cee28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cee2c:
    // 0x1cee2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1cee30:
    // 0x1cee30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cee34:
    // 0x1cee34: 0x244204e8  addiu       $v0, $v0, 0x4E8
    ctx->pc = 0x1cee34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1256));
label_1cee38:
    // 0x1cee38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1cee3c:
    // 0x1cee3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cee3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cee40:
    // 0x1cee40: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1cee44:
    // 0x1cee44: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1cee44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cee48:
    // 0x1cee48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cee4c:
    // 0x1cee4c: 0x2446001c  addiu       $a2, $v0, 0x1C
    ctx->pc = 0x1cee4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_1cee50:
    // 0x1cee50: 0x2624026c  addiu       $a0, $s1, 0x26C
    ctx->pc = 0x1cee50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 620));
label_1cee54:
    // 0x1cee54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cee54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cee58:
    // 0x1cee58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cee5c:
    // 0x1cee5c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1cee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1cee60:
    // 0x1cee60: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1cee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cee64:
    // 0x1cee64: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1cee64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1cee68:
    // 0x1cee68: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x1cee68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_1cee6c:
    // 0x1cee6c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1cee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1cee70:
    // 0x1cee70: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
label_1cee74:
    if (ctx->pc == 0x1CEE74u) {
        ctx->pc = 0x1CEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE70u;
        // 0x1cee74: 0x2900b  movn        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEE78u;
        goto label_1cee78;
    }
    ctx->pc = 0x1CEE70u;
    {
        const bool branch_taken_0x1cee70 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1CEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE70u;
        // 0x1cee74: 0x2900b  movn        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee70) {
            ctx->pc = 0x1CEE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cee58;
        }
    }
    ctx->pc = 0x1CEE78u;
label_1cee78:
    // 0x1cee78: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_1cee7c:
    if (ctx->pc == 0x1CEE7Cu) {
        ctx->pc = 0x1CEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE78u;
        // 0x1cee7c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEE80u;
        goto label_1cee80;
    }
    ctx->pc = 0x1CEE78u;
    {
        const bool branch_taken_0x1cee78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE78u;
        // 0x1cee7c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee78) {
            ctx->pc = 0x1CEEA8u;
            goto label_1ceea8;
        }
    }
    ctx->pc = 0x1CEE80u;
label_1cee80:
    // 0x1cee80: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1cee80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cee84:
    // 0x1cee84: 0xae300268  sw          $s0, 0x268($s1)
    ctx->pc = 0x1cee84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 16));
label_1cee88:
    // 0x1cee88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cee8c:
    // 0x1cee8c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cee90:
    // 0x1cee90: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cee90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cee94:
    // 0x1cee94: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cee98:
    // 0x1cee98: 0x60f809  jalr        $v1
label_1cee9c:
    if (ctx->pc == 0x1CEE9Cu) {
        ctx->pc = 0x1CEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE98u;
        // 0x1cee9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEEA0u;
        goto label_1ceea0;
    }
    ctx->pc = 0x1CEE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CEEA0u);
        ctx->pc = 0x1CEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE98u;
        // 0x1cee9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEE98u, 0x1CEEA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEEA0u;
label_1ceea0:
    // 0x1ceea0: 0xae300288  sw          $s0, 0x288($s1)
    ctx->pc = 0x1ceea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 16));
label_1ceea4:
    // 0x1ceea4: 0xae20028c  sw          $zero, 0x28C($s1)
    ctx->pc = 0x1ceea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 0));
label_1ceea8:
    // 0x1ceea8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1ceea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ceeac:
    // 0x1ceeac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ceeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ceeb0:
    // 0x1ceeb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ceeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ceeb4:
    // 0x1ceeb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ceeb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ceeb8:
    // 0x1ceeb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ceeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ceebc:
    // 0x1ceebc: 0x3e00008  jr          $ra
label_1ceec0:
    if (ctx->pc == 0x1CEEC0u) {
        ctx->pc = 0x1CEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEBCu;
        // 0x1ceec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEEC4u;
        goto label_1ceec4;
    }
    ctx->pc = 0x1CEEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEBCu;
        // 0x1ceec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEEC4u;
label_1ceec4:
    // 0x1ceec4: 0x0  nop
    ctx->pc = 0x1ceec4u;
    // NOP
    ctx->pc = 0x1ceec8u;
}
