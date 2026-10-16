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

// Function: sub_00126D00
// Address: 0x126d00 - 0x126d98
void sub_00126D00_0x126d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126D00_0x126d00");
#endif

    switch (ctx->pc) {
        case 0x126d00u: goto label_126d00;
        case 0x126d04u: goto label_126d04;
        case 0x126d08u: goto label_126d08;
        case 0x126d0cu: goto label_126d0c;
        case 0x126d10u: goto label_126d10;
        case 0x126d14u: goto label_126d14;
        case 0x126d18u: goto label_126d18;
        case 0x126d1cu: goto label_126d1c;
        case 0x126d20u: goto label_126d20;
        case 0x126d24u: goto label_126d24;
        case 0x126d28u: goto label_126d28;
        case 0x126d2cu: goto label_126d2c;
        case 0x126d30u: goto label_126d30;
        case 0x126d34u: goto label_126d34;
        case 0x126d38u: goto label_126d38;
        case 0x126d3cu: goto label_126d3c;
        case 0x126d40u: goto label_126d40;
        case 0x126d44u: goto label_126d44;
        case 0x126d48u: goto label_126d48;
        case 0x126d4cu: goto label_126d4c;
        case 0x126d50u: goto label_126d50;
        case 0x126d54u: goto label_126d54;
        case 0x126d58u: goto label_126d58;
        case 0x126d5cu: goto label_126d5c;
        case 0x126d60u: goto label_126d60;
        case 0x126d64u: goto label_126d64;
        case 0x126d68u: goto label_126d68;
        case 0x126d6cu: goto label_126d6c;
        case 0x126d70u: goto label_126d70;
        case 0x126d74u: goto label_126d74;
        case 0x126d78u: goto label_126d78;
        case 0x126d7cu: goto label_126d7c;
        case 0x126d80u: goto label_126d80;
        case 0x126d84u: goto label_126d84;
        case 0x126d88u: goto label_126d88;
        case 0x126d8cu: goto label_126d8c;
        case 0x126d90u: goto label_126d90;
        case 0x126d94u: goto label_126d94;
        default: break;
    }

    ctx->pc = 0x126d00u;

label_126d00:
    // 0x126d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_126d04:
    // 0x126d04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_126d08:
    // 0x126d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_126d0c:
    // 0x126d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126d10:
    // 0x126d10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_126d14:
    // 0x126d14: 0x8e040c00  lw          $a0, 0xC00($s0)
    ctx->pc = 0x126d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_126d18:
    // 0x126d18: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_126d1c:
    if (ctx->pc == 0x126D1Cu) {
        ctx->pc = 0x126D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D18u;
        // 0x126d1c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D20u;
        goto label_126d20;
    }
    ctx->pc = 0x126D18u;
    {
        const bool branch_taken_0x126d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D18u;
        // 0x126d1c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d18) {
            ctx->pc = 0x126D50u;
            goto label_126d50;
        }
    }
    ctx->pc = 0x126D20u;
label_126d20:
    // 0x126d20: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x126d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_126d24:
    // 0x126d24: 0x8e25007c  lw          $a1, 0x7C($s1)
    ctx->pc = 0x126d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_126d28:
    // 0x126d28: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x126d28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_126d2c:
    // 0x126d2c: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x126d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_126d30:
    // 0x126d30: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_126d34:
    if (ctx->pc == 0x126D34u) {
        ctx->pc = 0x126D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D30u;
        // 0x126d34: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D38u;
        goto label_126d38;
    }
    ctx->pc = 0x126D30u;
    {
        const bool branch_taken_0x126d30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D30u;
        // 0x126d34: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d30) {
            ctx->pc = 0x126D40u;
            goto label_126d40;
        }
    }
    ctx->pc = 0x126D38u;
label_126d38:
    // 0x126d38: 0x10000002  b           . + 4 + (0x2 << 2)
label_126d3c:
    if (ctx->pc == 0x126D3Cu) {
        ctx->pc = 0x126D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D38u;
        // 0x126d3c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D40u;
        goto label_126d40;
    }
    ctx->pc = 0x126D38u;
    {
        const bool branch_taken_0x126d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D38u;
        // 0x126d3c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d38) {
            ctx->pc = 0x126D44u;
            goto label_126d44;
        }
    }
    ctx->pc = 0x126D40u;
label_126d40:
    // 0x126d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126d44:
    // 0x126d44: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x126d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_126d48:
    // 0x126d48: 0x40f809  jalr        $v0
label_126d4c:
    if (ctx->pc == 0x126D4Cu) {
        ctx->pc = 0x126D50u;
        goto label_126d50;
    }
    ctx->pc = 0x126D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126D50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126D48u, 0x126D50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126D50u;
label_126d50:
    // 0x126d50: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x126d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_126d54:
    // 0x126d54: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_126d58:
    if (ctx->pc == 0x126D58u) {
        ctx->pc = 0x126D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D54u;
        // 0x126d58: 0x8e040eac  lw          $a0, 0xEAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D5Cu;
        goto label_126d5c;
    }
    ctx->pc = 0x126D54u;
    {
        const bool branch_taken_0x126d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d54) {
            ctx->pc = 0x126D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126D54u;
            // 0x126d58: 0x8e040eac  lw          $a0, 0xEAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126D68u;
            goto label_126d68;
        }
    }
    ctx->pc = 0x126D5Cu;
label_126d5c:
    // 0x126d5c: 0xc041612  jal         func_105848
label_126d60:
    if (ctx->pc == 0x126D60u) {
        ctx->pc = 0x126D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D5Cu;
        // 0x126d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D64u;
        goto label_126d64;
    }
    ctx->pc = 0x126D5Cu;
    SET_GPR_U32(ctx, 31, 0x126D64u);
    ctx->pc = 0x126D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D5Cu;
    // 0x126d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105848u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105848u, 0x126D5Cu, 0x126D64u)) {
        return;
    }
    ctx->pc = 0x126D64u;
label_126d64:
    // 0x126d64: 0x8e040eac  lw          $a0, 0xEAC($s0)
    ctx->pc = 0x126d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
label_126d68:
    // 0x126d68: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_126d6c:
    if (ctx->pc == 0x126D6Cu) {
        ctx->pc = 0x126D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D68u;
        // 0x126d6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D70u;
        goto label_126d70;
    }
    ctx->pc = 0x126D68u;
    {
        const bool branch_taken_0x126d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D68u;
        // 0x126d6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d68) {
            ctx->pc = 0x126D7Cu;
            goto label_126d7c;
        }
    }
    ctx->pc = 0x126D70u;
label_126d70:
    // 0x126d70: 0xc059c98  jal         func_167260
label_126d74:
    if (ctx->pc == 0x126D74u) {
        ctx->pc = 0x126D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D70u;
        // 0x126d74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D78u;
        goto label_126d78;
    }
    ctx->pc = 0x126D70u;
    SET_GPR_U32(ctx, 31, 0x126D78u);
    ctx->pc = 0x126D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D70u;
    // 0x126d74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x167260u, 0x126D70u, 0x126D78u)) {
        return;
    }
    ctx->pc = 0x126D78u;
label_126d78:
    // 0x126d78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x126d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_126d7c:
    // 0x126d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126d80:
    // 0x126d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126d84:
    // 0x126d84: 0x3e00008  jr          $ra
label_126d88:
    if (ctx->pc == 0x126D88u) {
        ctx->pc = 0x126D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D84u;
        // 0x126d88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D8Cu;
        goto label_126d8c;
    }
    ctx->pc = 0x126D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D84u;
        // 0x126d88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126D8Cu;
label_126d8c:
    // 0x126d8c: 0x0  nop
    ctx->pc = 0x126d8cu;
    // NOP
label_126d90:
    // 0x126d90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x126d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_126d94:
    // 0x126d94: 0x0  nop
    ctx->pc = 0x126d94u;
    // NOP
    ctx->pc = 0x126d98u;
}
