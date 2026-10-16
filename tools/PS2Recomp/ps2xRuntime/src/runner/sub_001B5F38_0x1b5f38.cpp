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

// Function: sub_001B5F38
// Address: 0x1b5f38 - 0x1b5fb0
void sub_001B5F38_0x1b5f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5F38_0x1b5f38");
#endif

    switch (ctx->pc) {
        case 0x1b5f38u: goto label_1b5f38;
        case 0x1b5f3cu: goto label_1b5f3c;
        case 0x1b5f40u: goto label_1b5f40;
        case 0x1b5f44u: goto label_1b5f44;
        case 0x1b5f48u: goto label_1b5f48;
        case 0x1b5f4cu: goto label_1b5f4c;
        case 0x1b5f50u: goto label_1b5f50;
        case 0x1b5f54u: goto label_1b5f54;
        case 0x1b5f58u: goto label_1b5f58;
        case 0x1b5f5cu: goto label_1b5f5c;
        case 0x1b5f60u: goto label_1b5f60;
        case 0x1b5f64u: goto label_1b5f64;
        case 0x1b5f68u: goto label_1b5f68;
        case 0x1b5f6cu: goto label_1b5f6c;
        case 0x1b5f70u: goto label_1b5f70;
        case 0x1b5f74u: goto label_1b5f74;
        case 0x1b5f78u: goto label_1b5f78;
        case 0x1b5f7cu: goto label_1b5f7c;
        case 0x1b5f80u: goto label_1b5f80;
        case 0x1b5f84u: goto label_1b5f84;
        case 0x1b5f88u: goto label_1b5f88;
        case 0x1b5f8cu: goto label_1b5f8c;
        case 0x1b5f90u: goto label_1b5f90;
        case 0x1b5f94u: goto label_1b5f94;
        case 0x1b5f98u: goto label_1b5f98;
        case 0x1b5f9cu: goto label_1b5f9c;
        case 0x1b5fa0u: goto label_1b5fa0;
        case 0x1b5fa4u: goto label_1b5fa4;
        case 0x1b5fa8u: goto label_1b5fa8;
        case 0x1b5facu: goto label_1b5fac;
        default: break;
    }

    ctx->pc = 0x1b5f38u;

label_1b5f38:
    // 0x1b5f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b5f3c:
    // 0x1b5f3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b5f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b5f40:
    // 0x1b5f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5f44:
    // 0x1b5f44: 0xc06bc5c  jal         func_1AF170
label_1b5f48:
    if (ctx->pc == 0x1B5F48u) {
        ctx->pc = 0x1B5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F44u;
        // 0x1b5f48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F4Cu;
        goto label_1b5f4c;
    }
    ctx->pc = 0x1B5F44u;
    SET_GPR_U32(ctx, 31, 0x1B5F4Cu);
    ctx->pc = 0x1B5F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5F44u;
    // 0x1b5f48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF170u, 0x1B5F44u, 0x1B5F4Cu)) {
        return;
    }
    ctx->pc = 0x1B5F4Cu;
label_1b5f4c:
    // 0x1b5f4c: 0x8e0202b0  lw          $v0, 0x2B0($s0)
    ctx->pc = 0x1b5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_1b5f50:
    // 0x1b5f50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b5f54:
    if (ctx->pc == 0x1B5F54u) {
        ctx->pc = 0x1B5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F50u;
        // 0x1b5f54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F58u;
        goto label_1b5f58;
    }
    ctx->pc = 0x1B5F50u;
    {
        const bool branch_taken_0x1b5f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F50u;
        // 0x1b5f54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f50) {
            ctx->pc = 0x1B5F60u;
            goto label_1b5f60;
        }
    }
    ctx->pc = 0x1B5F58u;
label_1b5f58:
    // 0x1b5f58: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x1b5f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
label_1b5f5c:
    // 0x1b5f5c: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x1b5f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
label_1b5f60:
    // 0x1b5f60: 0x8e0602c8  lw          $a2, 0x2C8($s0)
    ctx->pc = 0x1b5f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_1b5f64:
    // 0x1b5f64: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1b5f68:
    if (ctx->pc == 0x1B5F68u) {
        ctx->pc = 0x1B5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F64u;
        // 0x1b5f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F6Cu;
        goto label_1b5f6c;
    }
    ctx->pc = 0x1B5F64u;
    {
        const bool branch_taken_0x1b5f64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F64u;
        // 0x1b5f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f64) {
            ctx->pc = 0x1B5F80u;
            goto label_1b5f80;
        }
    }
    ctx->pc = 0x1B5F6Cu;
label_1b5f6c:
    // 0x1b5f6c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b5f70:
    // 0x1b5f70: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b5f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b5f74:
    // 0x1b5f74: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b5f78:
    // 0x1b5f78: 0x60f809  jalr        $v1
label_1b5f7c:
    if (ctx->pc == 0x1B5F7Cu) {
        ctx->pc = 0x1B5F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F78u;
        // 0x1b5f7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F80u;
        goto label_1b5f80;
    }
    ctx->pc = 0x1B5F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5F80u);
        ctx->pc = 0x1B5F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F78u;
        // 0x1b5f7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F78u, 0x1B5F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5F80u;
label_1b5f80:
    // 0x1b5f80: 0x8e0602cc  lw          $a2, 0x2CC($s0)
    ctx->pc = 0x1b5f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
label_1b5f84:
    // 0x1b5f84: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1b5f88:
    if (ctx->pc == 0x1B5F88u) {
        ctx->pc = 0x1B5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F84u;
        // 0x1b5f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F8Cu;
        goto label_1b5f8c;
    }
    ctx->pc = 0x1B5F84u;
    {
        const bool branch_taken_0x1b5f84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F84u;
        // 0x1b5f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f84) {
            ctx->pc = 0x1B5FA0u;
            goto label_1b5fa0;
        }
    }
    ctx->pc = 0x1B5F8Cu;
label_1b5f8c:
    // 0x1b5f8c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b5f90:
    // 0x1b5f90: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b5f90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b5f94:
    // 0x1b5f94: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b5f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b5f98:
    // 0x1b5f98: 0x60f809  jalr        $v1
label_1b5f9c:
    if (ctx->pc == 0x1B5F9Cu) {
        ctx->pc = 0x1B5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F98u;
        // 0x1b5f9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FA0u;
        goto label_1b5fa0;
    }
    ctx->pc = 0x1B5F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5FA0u);
        ctx->pc = 0x1B5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F98u;
        // 0x1b5f9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F98u, 0x1B5FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5FA0u;
label_1b5fa0:
    // 0x1b5fa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b5fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5fa4:
    // 0x1b5fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5fa8:
    // 0x1b5fa8: 0x3e00008  jr          $ra
label_1b5fac:
    if (ctx->pc == 0x1B5FACu) {
        ctx->pc = 0x1B5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FA8u;
        // 0x1b5fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FB0u;
        goto label_fallthrough_0x1b5fa8;
    }
    ctx->pc = 0x1B5FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FA8u;
        // 0x1b5fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5fa8:
    ctx->pc = 0x1B5FB0u;
}
