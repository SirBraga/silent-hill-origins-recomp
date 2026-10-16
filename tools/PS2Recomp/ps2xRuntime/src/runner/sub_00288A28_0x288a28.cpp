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

// Function: sub_00288A28
// Address: 0x288a28 - 0x288a98
void sub_00288A28_0x288a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288A28_0x288a28");
#endif

    switch (ctx->pc) {
        case 0x288a28u: goto label_288a28;
        case 0x288a2cu: goto label_288a2c;
        case 0x288a30u: goto label_288a30;
        case 0x288a34u: goto label_288a34;
        case 0x288a38u: goto label_288a38;
        case 0x288a3cu: goto label_288a3c;
        case 0x288a40u: goto label_288a40;
        case 0x288a44u: goto label_288a44;
        case 0x288a48u: goto label_288a48;
        case 0x288a4cu: goto label_288a4c;
        case 0x288a50u: goto label_288a50;
        case 0x288a54u: goto label_288a54;
        case 0x288a58u: goto label_288a58;
        case 0x288a5cu: goto label_288a5c;
        case 0x288a60u: goto label_288a60;
        case 0x288a64u: goto label_288a64;
        case 0x288a68u: goto label_288a68;
        case 0x288a6cu: goto label_288a6c;
        case 0x288a70u: goto label_288a70;
        case 0x288a74u: goto label_288a74;
        case 0x288a78u: goto label_288a78;
        case 0x288a7cu: goto label_288a7c;
        case 0x288a80u: goto label_288a80;
        case 0x288a84u: goto label_288a84;
        case 0x288a88u: goto label_288a88;
        case 0x288a8cu: goto label_288a8c;
        case 0x288a90u: goto label_288a90;
        case 0x288a94u: goto label_288a94;
        default: break;
    }

    ctx->pc = 0x288a28u;

label_288a28:
    // 0x288a28: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x288a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_288a2c:
    // 0x288a2c: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x288a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_288a30:
    // 0x288a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x288a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_288a34:
    // 0x288a34: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x288a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_288a38:
    // 0x288a38: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x288a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_288a3c:
    // 0x288a3c: 0x8cc468d4  lw          $a0, 0x68D4($a2)
    ctx->pc = 0x288a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 26836)));
label_288a40:
    // 0x288a40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_288a44:
    // 0x288a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_288a48:
    // 0x288a48: 0x40f809  jalr        $v0
label_288a4c:
    if (ctx->pc == 0x288A4Cu) {
        ctx->pc = 0x288A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A48u;
        // 0x288a4c: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x288A50u;
        goto label_288a50;
    }
    ctx->pc = 0x288A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x288A50u);
        ctx->pc = 0x288A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A48u;
        // 0x288a4c: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288A48u, 0x288A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288A50u;
label_288a50:
    // 0x288a50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288a54:
    // 0x288a54: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_288a58:
    if (ctx->pc == 0x288A58u) {
        ctx->pc = 0x288A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A54u;
        // 0x288a58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288A5Cu;
        goto label_288a5c;
    }
    ctx->pc = 0x288A54u;
    {
        const bool branch_taken_0x288a54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x288A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A54u;
        // 0x288a58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a54) {
            ctx->pc = 0x288A80u;
            goto label_288a80;
        }
    }
    ctx->pc = 0x288A5Cu;
label_288a5c:
    // 0x288a5c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x288a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_288a60:
    // 0x288a60: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x288a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_288a64:
    // 0x288a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288a68:
    // 0x288a68: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x288a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_288a6c:
    // 0x288a6c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x288a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_288a70:
    // 0x288a70: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x288a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
label_288a74:
    // 0x288a74: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x288a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_288a78:
    // 0x288a78: 0xc0a22d0  jal         func_288B40
label_288a7c:
    if (ctx->pc == 0x288A7Cu) {
        ctx->pc = 0x288A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A78u;
        // 0x288a7c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288A80u;
        goto label_288a80;
    }
    ctx->pc = 0x288A78u;
    SET_GPR_U32(ctx, 31, 0x288A80u);
    ctx->pc = 0x288A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A78u;
    // 0x288a7c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288B40u, 0x288A78u, 0x288A80u)) {
        return;
    }
    ctx->pc = 0x288A80u;
label_288a80:
    // 0x288a80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x288a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288a84:
    // 0x288a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_288a88:
    // 0x288a88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_288a8c:
    // 0x288a8c: 0x3e00008  jr          $ra
label_288a90:
    if (ctx->pc == 0x288A90u) {
        ctx->pc = 0x288A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A8Cu;
        // 0x288a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288A94u;
        goto label_288a94;
    }
    ctx->pc = 0x288A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A8Cu;
        // 0x288a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288A94u;
label_288a94:
    // 0x288a94: 0x0  nop
    ctx->pc = 0x288a94u;
    // NOP
    ctx->pc = 0x288a98u;
}
