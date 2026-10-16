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

// Function: sub_001B5EC8
// Address: 0x1b5ec8 - 0x1b5f38
void sub_001B5EC8_0x1b5ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5EC8_0x1b5ec8");
#endif

    switch (ctx->pc) {
        case 0x1b5ec8u: goto label_1b5ec8;
        case 0x1b5eccu: goto label_1b5ecc;
        case 0x1b5ed0u: goto label_1b5ed0;
        case 0x1b5ed4u: goto label_1b5ed4;
        case 0x1b5ed8u: goto label_1b5ed8;
        case 0x1b5edcu: goto label_1b5edc;
        case 0x1b5ee0u: goto label_1b5ee0;
        case 0x1b5ee4u: goto label_1b5ee4;
        case 0x1b5ee8u: goto label_1b5ee8;
        case 0x1b5eecu: goto label_1b5eec;
        case 0x1b5ef0u: goto label_1b5ef0;
        case 0x1b5ef4u: goto label_1b5ef4;
        case 0x1b5ef8u: goto label_1b5ef8;
        case 0x1b5efcu: goto label_1b5efc;
        case 0x1b5f00u: goto label_1b5f00;
        case 0x1b5f04u: goto label_1b5f04;
        case 0x1b5f08u: goto label_1b5f08;
        case 0x1b5f0cu: goto label_1b5f0c;
        case 0x1b5f10u: goto label_1b5f10;
        case 0x1b5f14u: goto label_1b5f14;
        case 0x1b5f18u: goto label_1b5f18;
        case 0x1b5f1cu: goto label_1b5f1c;
        case 0x1b5f20u: goto label_1b5f20;
        case 0x1b5f24u: goto label_1b5f24;
        case 0x1b5f28u: goto label_1b5f28;
        case 0x1b5f2cu: goto label_1b5f2c;
        case 0x1b5f30u: goto label_1b5f30;
        case 0x1b5f34u: goto label_1b5f34;
        default: break;
    }

    ctx->pc = 0x1b5ec8u;

label_1b5ec8:
    // 0x1b5ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b5ecc:
    // 0x1b5ecc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b5eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b5ed0:
    // 0x1b5ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5ed4:
    // 0x1b5ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ed8:
    // 0x1b5ed8: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x1b5ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_1b5edc:
    // 0x1b5edc: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x1b5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
label_1b5ee0:
    // 0x1b5ee0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1b5ee4:
    if (ctx->pc == 0x1B5EE4u) {
        ctx->pc = 0x1B5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EE0u;
        // 0x1b5ee4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EE8u;
        goto label_1b5ee8;
    }
    ctx->pc = 0x1B5EE0u;
    {
        const bool branch_taken_0x1b5ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ee0) {
            ctx->pc = 0x1B5EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5EE0u;
            // 0x1b5ee4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5F28u;
            goto label_1b5f28;
        }
    }
    ctx->pc = 0x1B5EE8u;
label_1b5ee8:
    // 0x1b5ee8: 0x8e0602c8  lw          $a2, 0x2C8($s0)
    ctx->pc = 0x1b5ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_1b5eec:
    // 0x1b5eec: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b5ef0:
    // 0x1b5ef0: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b5ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b5ef4:
    // 0x1b5ef4: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b5ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b5ef8:
    // 0x1b5ef8: 0x60f809  jalr        $v1
label_1b5efc:
    if (ctx->pc == 0x1B5EFCu) {
        ctx->pc = 0x1B5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EF8u;
        // 0x1b5efc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F00u;
        goto label_1b5f00;
    }
    ctx->pc = 0x1B5EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5F00u);
        ctx->pc = 0x1B5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EF8u;
        // 0x1b5efc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5EF8u, 0x1B5F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5F00u;
label_1b5f00:
    // 0x1b5f00: 0x8e0602cc  lw          $a2, 0x2CC($s0)
    ctx->pc = 0x1b5f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
label_1b5f04:
    // 0x1b5f04: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
label_1b5f08:
    if (ctx->pc == 0x1B5F08u) {
        ctx->pc = 0x1B5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F04u;
        // 0x1b5f08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F0Cu;
        goto label_1b5f0c;
    }
    ctx->pc = 0x1B5F04u;
    {
        const bool branch_taken_0x1b5f04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f04) {
            ctx->pc = 0x1B5F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5F04u;
            // 0x1b5f08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5F28u;
            goto label_1b5f28;
        }
    }
    ctx->pc = 0x1B5F0Cu;
label_1b5f0c:
    // 0x1b5f0c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b5f10:
    // 0x1b5f10: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1b5f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b5f14:
    // 0x1b5f14: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b5f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b5f18:
    // 0x1b5f18: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b5f1c:
    // 0x1b5f1c: 0x60f809  jalr        $v1
label_1b5f20:
    if (ctx->pc == 0x1B5F20u) {
        ctx->pc = 0x1B5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F1Cu;
        // 0x1b5f20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F24u;
        goto label_1b5f24;
    }
    ctx->pc = 0x1B5F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5F24u);
        ctx->pc = 0x1B5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F1Cu;
        // 0x1b5f20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F1Cu, 0x1B5F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5F24u;
label_1b5f24:
    // 0x1b5f24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b5f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5f28:
    // 0x1b5f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5f2c:
    // 0x1b5f2c: 0x3e00008  jr          $ra
label_1b5f30:
    if (ctx->pc == 0x1B5F30u) {
        ctx->pc = 0x1B5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F2Cu;
        // 0x1b5f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F34u;
        goto label_1b5f34;
    }
    ctx->pc = 0x1B5F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F2Cu;
        // 0x1b5f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5F34u;
label_1b5f34:
    // 0x1b5f34: 0x0  nop
    ctx->pc = 0x1b5f34u;
    // NOP
    ctx->pc = 0x1b5f38u;
}
