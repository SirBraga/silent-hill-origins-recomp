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

// Function: sub_00171E40
// Address: 0x171e40 - 0x171ee8
void sub_00171E40_0x171e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171E40_0x171e40");
#endif

    switch (ctx->pc) {
        case 0x171e40u: goto label_171e40;
        case 0x171e44u: goto label_171e44;
        case 0x171e48u: goto label_171e48;
        case 0x171e4cu: goto label_171e4c;
        case 0x171e50u: goto label_171e50;
        case 0x171e54u: goto label_171e54;
        case 0x171e58u: goto label_171e58;
        case 0x171e5cu: goto label_171e5c;
        case 0x171e60u: goto label_171e60;
        case 0x171e64u: goto label_171e64;
        case 0x171e68u: goto label_171e68;
        case 0x171e6cu: goto label_171e6c;
        case 0x171e70u: goto label_171e70;
        case 0x171e74u: goto label_171e74;
        case 0x171e78u: goto label_171e78;
        case 0x171e7cu: goto label_171e7c;
        case 0x171e80u: goto label_171e80;
        case 0x171e84u: goto label_171e84;
        case 0x171e88u: goto label_171e88;
        case 0x171e8cu: goto label_171e8c;
        case 0x171e90u: goto label_171e90;
        case 0x171e94u: goto label_171e94;
        case 0x171e98u: goto label_171e98;
        case 0x171e9cu: goto label_171e9c;
        case 0x171ea0u: goto label_171ea0;
        case 0x171ea4u: goto label_171ea4;
        case 0x171ea8u: goto label_171ea8;
        case 0x171eacu: goto label_171eac;
        case 0x171eb0u: goto label_171eb0;
        case 0x171eb4u: goto label_171eb4;
        case 0x171eb8u: goto label_171eb8;
        case 0x171ebcu: goto label_171ebc;
        case 0x171ec0u: goto label_171ec0;
        case 0x171ec4u: goto label_171ec4;
        case 0x171ec8u: goto label_171ec8;
        case 0x171eccu: goto label_171ecc;
        case 0x171ed0u: goto label_171ed0;
        case 0x171ed4u: goto label_171ed4;
        case 0x171ed8u: goto label_171ed8;
        case 0x171edcu: goto label_171edc;
        case 0x171ee0u: goto label_171ee0;
        case 0x171ee4u: goto label_171ee4;
        default: break;
    }

    ctx->pc = 0x171e40u;

label_171e40:
    // 0x171e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_171e44:
    // 0x171e44: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x171e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171e48:
    // 0x171e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171e4c:
    // 0x171e4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x171e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171e50:
    // 0x171e50: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x171e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_171e54:
    // 0x171e54: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_171e58:
    if (ctx->pc == 0x171E58u) {
        ctx->pc = 0x171E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E54u;
        // 0x171e58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E5Cu;
        goto label_171e5c;
    }
    ctx->pc = 0x171E54u;
    {
        const bool branch_taken_0x171e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E54u;
        // 0x171e58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e54) {
            ctx->pc = 0x171E94u;
            goto label_171e94;
        }
    }
    ctx->pc = 0x171E5Cu;
label_171e5c:
    // 0x171e5c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x171e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_171e60:
    // 0x171e60: 0x5045000c  beql        $v0, $a1, . + 4 + (0xC << 2)
label_171e64:
    if (ctx->pc == 0x171E64u) {
        ctx->pc = 0x171E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E60u;
        // 0x171e64: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E68u;
        goto label_171e68;
    }
    ctx->pc = 0x171E60u;
    {
        const bool branch_taken_0x171e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x171e60) {
            ctx->pc = 0x171E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171E60u;
            // 0x171e64: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171E94u;
            goto label_171e94;
        }
    }
    ctx->pc = 0x171E68u;
label_171e68:
    // 0x171e68: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x171e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_171e6c:
    // 0x171e6c: 0x0  nop
    ctx->pc = 0x171e6cu;
    // NOP
label_171e70:
    // 0x171e70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x171e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_171e74:
    // 0x171e74: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x171e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_171e78:
    // 0x171e78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_171e7c:
    if (ctx->pc == 0x171E7Cu) {
        ctx->pc = 0x171E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E78u;
        // 0x171e7c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E80u;
        goto label_171e80;
    }
    ctx->pc = 0x171E78u;
    {
        const bool branch_taken_0x171e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E78u;
        // 0x171e7c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e78) {
            ctx->pc = 0x171E94u;
            goto label_171e94;
        }
    }
    ctx->pc = 0x171E80u;
label_171e80:
    // 0x171e80: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x171e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_171e84:
    // 0x171e84: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x171e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_171e88:
    // 0x171e88: 0x5465fff9  bnel        $v1, $a1, . + 4 + (-0x7 << 2)
label_171e8c:
    if (ctx->pc == 0x171E8Cu) {
        ctx->pc = 0x171E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E88u;
        // 0x171e8c: 0x8ce20028  lw          $v0, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E90u;
        goto label_171e90;
    }
    ctx->pc = 0x171E88u;
    {
        const bool branch_taken_0x171e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x171e88) {
            ctx->pc = 0x171E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171E88u;
            // 0x171e8c: 0x8ce20028  lw          $v0, 0x28($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171e70;
        }
    }
    ctx->pc = 0x171E90u;
label_171e90:
    // 0x171e90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x171e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171e94:
    // 0x171e94: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_171e98:
    if (ctx->pc == 0x171E98u) {
        ctx->pc = 0x171E9Cu;
        goto label_171e9c;
    }
    ctx->pc = 0x171E94u;
    {
        const bool branch_taken_0x171e94 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e94) {
            ctx->pc = 0x171EC0u;
            goto label_171ec0;
        }
    }
    ctx->pc = 0x171E9Cu;
label_171e9c:
    // 0x171e9c: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
label_171ea0:
    if (ctx->pc == 0x171EA0u) {
        ctx->pc = 0x171EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E9Cu;
        // 0x171ea0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EA4u;
        goto label_171ea4;
    }
    ctx->pc = 0x171E9Cu;
    {
        const bool branch_taken_0x171e9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x171EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E9Cu;
        // 0x171ea0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e9c) {
            ctx->pc = 0x171EE0u;
            goto label_171ee0;
        }
    }
    ctx->pc = 0x171EA4u;
label_171ea4:
    // 0x171ea4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x171ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_171ea8:
    // 0x171ea8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x171ea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_171eac:
    // 0x171eac: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x171eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_171eb0:
    // 0x171eb0: 0x60f809  jalr        $v1
label_171eb4:
    if (ctx->pc == 0x171EB4u) {
        ctx->pc = 0x171EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EB0u;
        // 0x171eb4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EB8u;
        goto label_171eb8;
    }
    ctx->pc = 0x171EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171EB8u);
        ctx->pc = 0x171EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EB0u;
        // 0x171eb4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171EB0u, 0x171EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171EB8u;
label_171eb8:
    // 0x171eb8: 0x10000009  b           . + 4 + (0x9 << 2)
label_171ebc:
    if (ctx->pc == 0x171EBCu) {
        ctx->pc = 0x171EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EB8u;
        // 0x171ebc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EC0u;
        goto label_171ec0;
    }
    ctx->pc = 0x171EB8u;
    {
        const bool branch_taken_0x171eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EB8u;
        // 0x171ebc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171eb8) {
            ctx->pc = 0x171EE0u;
            goto label_171ee0;
        }
    }
    ctx->pc = 0x171EC0u;
label_171ec0:
    // 0x171ec0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_171ec4:
    if (ctx->pc == 0x171EC4u) {
        ctx->pc = 0x171EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EC0u;
        // 0x171ec4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EC8u;
        goto label_171ec8;
    }
    ctx->pc = 0x171EC0u;
    {
        const bool branch_taken_0x171ec0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x171EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EC0u;
        // 0x171ec4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ec0) {
            ctx->pc = 0x171EE0u;
            goto label_171ee0;
        }
    }
    ctx->pc = 0x171EC8u;
label_171ec8:
    // 0x171ec8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x171ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_171ecc:
    // 0x171ecc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x171eccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_171ed0:
    // 0x171ed0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x171ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_171ed4:
    // 0x171ed4: 0x60f809  jalr        $v1
label_171ed8:
    if (ctx->pc == 0x171ED8u) {
        ctx->pc = 0x171ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171ED4u;
        // 0x171ed8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EDCu;
        goto label_171edc;
    }
    ctx->pc = 0x171ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171EDCu);
        ctx->pc = 0x171ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171ED4u;
        // 0x171ed8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171ED4u, 0x171EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171EDCu;
label_171edc:
    // 0x171edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171ee0:
    // 0x171ee0: 0x3e00008  jr          $ra
label_171ee4:
    if (ctx->pc == 0x171EE4u) {
        ctx->pc = 0x171EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EE0u;
        // 0x171ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171EE8u;
        goto label_fallthrough_0x171ee0;
    }
    ctx->pc = 0x171EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EE0u;
        // 0x171ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x171ee0:
    ctx->pc = 0x171EE8u;
}
