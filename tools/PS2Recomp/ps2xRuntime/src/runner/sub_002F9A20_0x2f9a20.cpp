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

// Function: sub_002F9A20
// Address: 0x2f9a20 - 0x2f9a98
void sub_002F9A20_0x2f9a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9A20_0x2f9a20");
#endif

    switch (ctx->pc) {
        case 0x2f9a20u: goto label_2f9a20;
        case 0x2f9a24u: goto label_2f9a24;
        case 0x2f9a28u: goto label_2f9a28;
        case 0x2f9a2cu: goto label_2f9a2c;
        case 0x2f9a30u: goto label_2f9a30;
        case 0x2f9a34u: goto label_2f9a34;
        case 0x2f9a38u: goto label_2f9a38;
        case 0x2f9a3cu: goto label_2f9a3c;
        case 0x2f9a40u: goto label_2f9a40;
        case 0x2f9a44u: goto label_2f9a44;
        case 0x2f9a48u: goto label_2f9a48;
        case 0x2f9a4cu: goto label_2f9a4c;
        case 0x2f9a50u: goto label_2f9a50;
        case 0x2f9a54u: goto label_2f9a54;
        case 0x2f9a58u: goto label_2f9a58;
        case 0x2f9a5cu: goto label_2f9a5c;
        case 0x2f9a60u: goto label_2f9a60;
        case 0x2f9a64u: goto label_2f9a64;
        case 0x2f9a68u: goto label_2f9a68;
        case 0x2f9a6cu: goto label_2f9a6c;
        case 0x2f9a70u: goto label_2f9a70;
        case 0x2f9a74u: goto label_2f9a74;
        case 0x2f9a78u: goto label_2f9a78;
        case 0x2f9a7cu: goto label_2f9a7c;
        case 0x2f9a80u: goto label_2f9a80;
        case 0x2f9a84u: goto label_2f9a84;
        case 0x2f9a88u: goto label_2f9a88;
        case 0x2f9a8cu: goto label_2f9a8c;
        case 0x2f9a90u: goto label_2f9a90;
        case 0x2f9a94u: goto label_2f9a94;
        default: break;
    }

    ctx->pc = 0x2f9a20u;

label_2f9a20:
    // 0x2f9a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f9a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2f9a24:
    // 0x2f9a24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9a28:
    // 0x2f9a28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f9a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f9a2c:
    // 0x2f9a2c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f9a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2f9a30:
    // 0x2f9a30: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_2f9a34:
    if (ctx->pc == 0x2F9A34u) {
        ctx->pc = 0x2F9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A30u;
        // 0x2f9a34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A38u;
        goto label_2f9a38;
    }
    ctx->pc = 0x2F9A30u;
    {
        const bool branch_taken_0x2f9a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A30u;
        // 0x2f9a34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a30) {
            ctx->pc = 0x2F9A80u;
            goto label_2f9a80;
        }
    }
    ctx->pc = 0x2F9A38u;
label_2f9a38:
    // 0x2f9a38: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x2f9a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2f9a3c:
    // 0x2f9a3c: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_2f9a40:
    if (ctx->pc == 0x2F9A40u) {
        ctx->pc = 0x2F9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A3Cu;
        // 0x2f9a40: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A44u;
        goto label_2f9a44;
    }
    ctx->pc = 0x2F9A3Cu;
    {
        const bool branch_taken_0x2f9a3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A3Cu;
        // 0x2f9a40: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a3c) {
            ctx->pc = 0x2F9A88u;
            goto label_2f9a88;
        }
    }
    ctx->pc = 0x2F9A44u;
label_2f9a44:
    // 0x2f9a44: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2f9a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_2f9a48:
    // 0x2f9a48: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_2f9a4c:
    if (ctx->pc == 0x2F9A4Cu) {
        ctx->pc = 0x2F9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A48u;
        // 0x2f9a4c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A50u;
        goto label_2f9a50;
    }
    ctx->pc = 0x2F9A48u;
    {
        const bool branch_taken_0x2f9a48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A48u;
        // 0x2f9a4c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a48) {
            ctx->pc = 0x2F9A8Cu;
            goto label_2f9a8c;
        }
    }
    ctx->pc = 0x2F9A50u;
label_2f9a50:
    // 0x2f9a50: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x2f9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_2f9a54:
    // 0x2f9a54: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f9a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a58:
    // 0x2f9a58: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f9a58u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a5c:
    // 0x2f9a5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f9a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9a60:
    // 0x2f9a60: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f9a64:
    // 0x2f9a64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f9a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a68:
    // 0x2f9a68: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x2f9a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2f9a6c:
    // 0x2f9a6c: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2f9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2f9a70:
    // 0x2f9a70: 0xe0f809  jalr        $a3
label_2f9a74:
    if (ctx->pc == 0x2F9A74u) {
        ctx->pc = 0x2F9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A70u;
        // 0x2f9a74: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A78u;
        goto label_2f9a78;
    }
    ctx->pc = 0x2F9A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2F9A78u);
        ctx->pc = 0x2F9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A70u;
        // 0x2f9a74: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9A70u, 0x2F9A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9A78u;
label_2f9a78:
    // 0x2f9a78: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x2f9a78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a7c:
    // 0x2f9a7c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f9a7cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a80:
    // 0x2f9a80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f9a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f9a84:
    // 0x2f9a84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9a88:
    // 0x2f9a88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f9a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f9a8c:
    // 0x2f9a8c: 0x3e00008  jr          $ra
label_2f9a90:
    if (ctx->pc == 0x2F9A90u) {
        ctx->pc = 0x2F9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A8Cu;
        // 0x2f9a90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A94u;
        goto label_2f9a94;
    }
    ctx->pc = 0x2F9A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A8Cu;
        // 0x2f9a90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9A94u;
label_2f9a94:
    // 0x2f9a94: 0x0  nop
    ctx->pc = 0x2f9a94u;
    // NOP
    ctx->pc = 0x2f9a98u;
}
