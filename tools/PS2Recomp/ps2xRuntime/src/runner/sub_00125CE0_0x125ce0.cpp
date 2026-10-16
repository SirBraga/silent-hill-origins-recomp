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

// Function: sub_00125CE0
// Address: 0x125ce0 - 0x125d68
void sub_00125CE0_0x125ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125CE0_0x125ce0");
#endif

    switch (ctx->pc) {
        case 0x125ce0u: goto label_125ce0;
        case 0x125ce4u: goto label_125ce4;
        case 0x125ce8u: goto label_125ce8;
        case 0x125cecu: goto label_125cec;
        case 0x125cf0u: goto label_125cf0;
        case 0x125cf4u: goto label_125cf4;
        case 0x125cf8u: goto label_125cf8;
        case 0x125cfcu: goto label_125cfc;
        case 0x125d00u: goto label_125d00;
        case 0x125d04u: goto label_125d04;
        case 0x125d08u: goto label_125d08;
        case 0x125d0cu: goto label_125d0c;
        case 0x125d10u: goto label_125d10;
        case 0x125d14u: goto label_125d14;
        case 0x125d18u: goto label_125d18;
        case 0x125d1cu: goto label_125d1c;
        case 0x125d20u: goto label_125d20;
        case 0x125d24u: goto label_125d24;
        case 0x125d28u: goto label_125d28;
        case 0x125d2cu: goto label_125d2c;
        case 0x125d30u: goto label_125d30;
        case 0x125d34u: goto label_125d34;
        case 0x125d38u: goto label_125d38;
        case 0x125d3cu: goto label_125d3c;
        case 0x125d40u: goto label_125d40;
        case 0x125d44u: goto label_125d44;
        case 0x125d48u: goto label_125d48;
        case 0x125d4cu: goto label_125d4c;
        case 0x125d50u: goto label_125d50;
        case 0x125d54u: goto label_125d54;
        case 0x125d58u: goto label_125d58;
        case 0x125d5cu: goto label_125d5c;
        case 0x125d60u: goto label_125d60;
        case 0x125d64u: goto label_125d64;
        default: break;
    }

    ctx->pc = 0x125ce0u;

label_125ce0:
    // 0x125ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_125ce4:
    // 0x125ce4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x125ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_125ce8:
    // 0x125ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_125cec:
    // 0x125cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125cf0:
    // 0x125cf0: 0x8e060c00  lw          $a2, 0xC00($s0)
    ctx->pc = 0x125cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_125cf4:
    // 0x125cf4: 0x50c00019  beql        $a2, $zero, . + 4 + (0x19 << 2)
label_125cf8:
    if (ctx->pc == 0x125CF8u) {
        ctx->pc = 0x125CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CF4u;
        // 0x125cf8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CFCu;
        goto label_125cfc;
    }
    ctx->pc = 0x125CF4u;
    {
        const bool branch_taken_0x125cf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x125cf4) {
            ctx->pc = 0x125CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125CF4u;
            // 0x125cf8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125D5Cu;
            goto label_125d5c;
        }
    }
    ctx->pc = 0x125CFCu;
label_125cfc:
    // 0x125cfc: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x125cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_125d00:
    // 0x125d00: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x125d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_125d04:
    // 0x125d04: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x125d04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_125d08:
    // 0x125d08: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x125d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_125d0c:
    // 0x125d0c: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x125d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_125d10:
    // 0x125d10: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_125d14:
    if (ctx->pc == 0x125D14u) {
        ctx->pc = 0x125D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D10u;
        // 0x125d14: 0xc32021  addu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D18u;
        goto label_125d18;
    }
    ctx->pc = 0x125D10u;
    {
        const bool branch_taken_0x125d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D10u;
        // 0x125d14: 0xc32021  addu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d10) {
            ctx->pc = 0x125D20u;
            goto label_125d20;
        }
    }
    ctx->pc = 0x125D18u;
label_125d18:
    // 0x125d18: 0x10000002  b           . + 4 + (0x2 << 2)
label_125d1c:
    if (ctx->pc == 0x125D1Cu) {
        ctx->pc = 0x125D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D18u;
        // 0x125d1c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D20u;
        goto label_125d20;
    }
    ctx->pc = 0x125D18u;
    {
        const bool branch_taken_0x125d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D18u;
        // 0x125d1c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d18) {
            ctx->pc = 0x125D24u;
            goto label_125d24;
        }
    }
    ctx->pc = 0x125D20u;
label_125d20:
    // 0x125d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x125d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125d24:
    // 0x125d24: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x125d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_125d28:
    // 0x125d28: 0x40f809  jalr        $v0
label_125d2c:
    if (ctx->pc == 0x125D2Cu) {
        ctx->pc = 0x125D30u;
        goto label_125d30;
    }
    ctx->pc = 0x125D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125D30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125D28u, 0x125D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125D30u;
label_125d30:
    // 0x125d30: 0x8e060c00  lw          $a2, 0xC00($s0)
    ctx->pc = 0x125d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_125d34:
    // 0x125d34: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_125d38:
    if (ctx->pc == 0x125D38u) {
        ctx->pc = 0x125D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D34u;
        // 0x125d38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D3Cu;
        goto label_125d3c;
    }
    ctx->pc = 0x125D34u;
    {
        const bool branch_taken_0x125d34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D34u;
        // 0x125d38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d34) {
            ctx->pc = 0x125D54u;
            goto label_125d54;
        }
    }
    ctx->pc = 0x125D3Cu;
label_125d3c:
    // 0x125d3c: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x125d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_125d40:
    // 0x125d40: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x125d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_125d44:
    // 0x125d44: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x125d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_125d48:
    // 0x125d48: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x125d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_125d4c:
    // 0x125d4c: 0x40f809  jalr        $v0
label_125d50:
    if (ctx->pc == 0x125D50u) {
        ctx->pc = 0x125D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D4Cu;
        // 0x125d50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D54u;
        goto label_125d54;
    }
    ctx->pc = 0x125D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125D54u);
        ctx->pc = 0x125D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D4Cu;
        // 0x125d50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125D4Cu, 0x125D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125D54u;
label_125d54:
    // 0x125d54: 0xae000c00  sw          $zero, 0xC00($s0)
    ctx->pc = 0x125d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3072), GPR_U32(ctx, 0));
label_125d58:
    // 0x125d58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x125d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_125d5c:
    // 0x125d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125d60:
    // 0x125d60: 0x3e00008  jr          $ra
label_125d64:
    if (ctx->pc == 0x125D64u) {
        ctx->pc = 0x125D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D60u;
        // 0x125d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125D68u;
        goto label_fallthrough_0x125d60;
    }
    ctx->pc = 0x125D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D60u;
        // 0x125d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x125d60:
    ctx->pc = 0x125D68u;
}
