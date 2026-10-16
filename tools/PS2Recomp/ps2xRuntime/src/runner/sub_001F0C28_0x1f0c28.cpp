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

// Function: sub_001F0C28
// Address: 0x1f0c28 - 0x1f0cd0
void sub_001F0C28_0x1f0c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0C28_0x1f0c28");
#endif

    switch (ctx->pc) {
        case 0x1f0c28u: goto label_1f0c28;
        case 0x1f0c2cu: goto label_1f0c2c;
        case 0x1f0c30u: goto label_1f0c30;
        case 0x1f0c34u: goto label_1f0c34;
        case 0x1f0c38u: goto label_1f0c38;
        case 0x1f0c3cu: goto label_1f0c3c;
        case 0x1f0c40u: goto label_1f0c40;
        case 0x1f0c44u: goto label_1f0c44;
        case 0x1f0c48u: goto label_1f0c48;
        case 0x1f0c4cu: goto label_1f0c4c;
        case 0x1f0c50u: goto label_1f0c50;
        case 0x1f0c54u: goto label_1f0c54;
        case 0x1f0c58u: goto label_1f0c58;
        case 0x1f0c5cu: goto label_1f0c5c;
        case 0x1f0c60u: goto label_1f0c60;
        case 0x1f0c64u: goto label_1f0c64;
        case 0x1f0c68u: goto label_1f0c68;
        case 0x1f0c6cu: goto label_1f0c6c;
        case 0x1f0c70u: goto label_1f0c70;
        case 0x1f0c74u: goto label_1f0c74;
        case 0x1f0c78u: goto label_1f0c78;
        case 0x1f0c7cu: goto label_1f0c7c;
        case 0x1f0c80u: goto label_1f0c80;
        case 0x1f0c84u: goto label_1f0c84;
        case 0x1f0c88u: goto label_1f0c88;
        case 0x1f0c8cu: goto label_1f0c8c;
        case 0x1f0c90u: goto label_1f0c90;
        case 0x1f0c94u: goto label_1f0c94;
        case 0x1f0c98u: goto label_1f0c98;
        case 0x1f0c9cu: goto label_1f0c9c;
        case 0x1f0ca0u: goto label_1f0ca0;
        case 0x1f0ca4u: goto label_1f0ca4;
        case 0x1f0ca8u: goto label_1f0ca8;
        case 0x1f0cacu: goto label_1f0cac;
        case 0x1f0cb0u: goto label_1f0cb0;
        case 0x1f0cb4u: goto label_1f0cb4;
        case 0x1f0cb8u: goto label_1f0cb8;
        case 0x1f0cbcu: goto label_1f0cbc;
        case 0x1f0cc0u: goto label_1f0cc0;
        case 0x1f0cc4u: goto label_1f0cc4;
        case 0x1f0cc8u: goto label_1f0cc8;
        case 0x1f0cccu: goto label_1f0ccc;
        default: break;
    }

    ctx->pc = 0x1f0c28u;

label_1f0c28:
    // 0x1f0c28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f0c2c:
    // 0x1f0c2c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1f0c30:
    // 0x1f0c30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f0c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f0c34:
    // 0x1f0c34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f0c38:
    // 0x1f0c38: 0x8c50e850  lw          $s0, -0x17B0($v0)
    ctx->pc = 0x1f0c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961232)));
label_1f0c3c:
    // 0x1f0c3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c40:
    // 0x1f0c40: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_1f0c44:
    if (ctx->pc == 0x1F0C44u) {
        ctx->pc = 0x1F0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C40u;
        // 0x1f0c44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C48u;
        goto label_1f0c48;
    }
    ctx->pc = 0x1F0C40u;
    {
        const bool branch_taken_0x1f0c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C40u;
        // 0x1f0c44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c40) {
            ctx->pc = 0x1F0CB8u;
            goto label_1f0cb8;
        }
    }
    ctx->pc = 0x1F0C48u;
label_1f0c48:
    // 0x1f0c48: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1f0c4c:
    // 0x1f0c4c: 0x8c62e854  lw          $v0, -0x17AC($v1)
    ctx->pc = 0x1f0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961236)));
label_1f0c50:
    // 0x1f0c50: 0x0  nop
    ctx->pc = 0x1f0c50u;
    // NOP
label_1f0c54:
    // 0x1f0c54: 0x0  nop
    ctx->pc = 0x1f0c54u;
    // NOP
label_1f0c58:
    // 0x1f0c58: 0x0  nop
    ctx->pc = 0x1f0c58u;
    // NOP
label_1f0c5c:
    // 0x1f0c5c: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_1f0c60:
    if (ctx->pc == 0x1F0C60u) {
        ctx->pc = 0x1F0C64u;
        goto label_1f0c64;
    }
    ctx->pc = 0x1F0C5Cu;
    {
        const bool branch_taken_0x1f0c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c5c) {
            ctx->pc = 0x1F0C4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0c4c;
        }
    }
    ctx->pc = 0x1F0C64u;
label_1f0c64:
    // 0x1f0c64: 0xc0c8756  jal         func_321D58
label_1f0c68:
    if (ctx->pc == 0x1F0C68u) {
        ctx->pc = 0x1F0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C64u;
        // 0x1f0c68: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C6Cu;
        goto label_1f0c6c;
    }
    ctx->pc = 0x1F0C64u;
    SET_GPR_U32(ctx, 31, 0x1F0C6Cu);
    ctx->pc = 0x1F0C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C64u;
    // 0x1f0c68: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321D58u, 0x1F0C64u, 0x1F0C6Cu)) {
        return;
    }
    ctx->pc = 0x1F0C6Cu;
label_1f0c6c:
    // 0x1f0c6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f0c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c70:
    // 0x1f0c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c74:
    // 0x1f0c74: 0xc0a5370  jal         func_294DC0
label_1f0c78:
    if (ctx->pc == 0x1F0C78u) {
        ctx->pc = 0x1F0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C74u;
        // 0x1f0c78: 0xae20e850  sw          $zero, -0x17B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294961232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C7Cu;
        goto label_1f0c7c;
    }
    ctx->pc = 0x1F0C74u;
    SET_GPR_U32(ctx, 31, 0x1F0C7Cu);
    ctx->pc = 0x1F0C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C74u;
    // 0x1f0c78: 0xae20e850  sw          $zero, -0x17B0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294961232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x1F0C74u, 0x1F0C7Cu)) {
        return;
    }
    ctx->pc = 0x1F0C7Cu;
label_1f0c7c:
    // 0x1f0c7c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1f0c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f0c80:
    // 0x1f0c80: 0xc0c8408  jal         func_321020
label_1f0c84:
    if (ctx->pc == 0x1F0C84u) {
        ctx->pc = 0x1F0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C80u;
        // 0x1f0c84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C88u;
        goto label_1f0c88;
    }
    ctx->pc = 0x1F0C80u;
    SET_GPR_U32(ctx, 31, 0x1F0C88u);
    ctx->pc = 0x1F0C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C80u;
    // 0x1f0c84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321020u, 0x1F0C80u, 0x1F0C88u)) {
        return;
    }
    ctx->pc = 0x1F0C88u;
label_1f0c88:
    // 0x1f0c88: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1f0c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1f0c8c:
    // 0x1f0c8c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x1f0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_1f0c90:
    // 0x1f0c90: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x1f0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1f0c94:
    // 0x1f0c94: 0x40f809  jalr        $v0
label_1f0c98:
    if (ctx->pc == 0x1F0C98u) {
        ctx->pc = 0x1F0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C94u;
        // 0x1f0c98: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C9Cu;
        goto label_1f0c9c;
    }
    ctx->pc = 0x1F0C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0C9Cu);
        ctx->pc = 0x1F0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C94u;
        // 0x1f0c98: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0C94u, 0x1F0C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0C9Cu;
label_1f0c9c:
    // 0x1f0c9c: 0xc076204  jal         func_1D8810
label_1f0ca0:
    if (ctx->pc == 0x1F0CA0u) {
        ctx->pc = 0x1F0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C9Cu;
        // 0x1f0ca0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0CA4u;
        goto label_1f0ca4;
    }
    ctx->pc = 0x1F0C9Cu;
    SET_GPR_U32(ctx, 31, 0x1F0CA4u);
    ctx->pc = 0x1F0CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C9Cu;
    // 0x1f0ca0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8810u, 0x1F0C9Cu, 0x1F0CA4u)) {
        return;
    }
    ctx->pc = 0x1F0CA4u;
label_1f0ca4:
    // 0x1f0ca4: 0xc091e18  jal         func_247860
label_1f0ca8:
    if (ctx->pc == 0x1F0CA8u) {
        ctx->pc = 0x1F0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CA4u;
        // 0x1f0ca8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0CACu;
        goto label_1f0cac;
    }
    ctx->pc = 0x1F0CA4u;
    SET_GPR_U32(ctx, 31, 0x1F0CACu);
    ctx->pc = 0x1F0CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0CA4u;
    // 0x1f0ca8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247860u, 0x1F0CA4u, 0x1F0CACu)) {
        return;
    }
    ctx->pc = 0x1F0CACu;
label_1f0cac:
    // 0x1f0cac: 0xc0808b8  jal         func_2022E0
label_1f0cb0:
    if (ctx->pc == 0x1F0CB0u) {
        ctx->pc = 0x1F0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CACu;
        // 0x1f0cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0CB4u;
        goto label_1f0cb4;
    }
    ctx->pc = 0x1F0CACu;
    SET_GPR_U32(ctx, 31, 0x1F0CB4u);
    ctx->pc = 0x1F0CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0CACu;
    // 0x1f0cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F0CACu, 0x1F0CB4u)) {
        return;
    }
    ctx->pc = 0x1F0CB4u;
label_1f0cb4:
    // 0x1f0cb4: 0xae20e850  sw          $zero, -0x17B0($s1)
    ctx->pc = 0x1f0cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294961232), GPR_U32(ctx, 0));
label_1f0cb8:
    // 0x1f0cb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f0cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0cbc:
    // 0x1f0cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f0cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0cc0:
    // 0x1f0cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0cc4:
    // 0x1f0cc4: 0x3e00008  jr          $ra
label_1f0cc8:
    if (ctx->pc == 0x1F0CC8u) {
        ctx->pc = 0x1F0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CC4u;
        // 0x1f0cc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0CCCu;
        goto label_1f0ccc;
    }
    ctx->pc = 0x1F0CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CC4u;
        // 0x1f0cc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0CCCu;
label_1f0ccc:
    // 0x1f0ccc: 0x0  nop
    ctx->pc = 0x1f0cccu;
    // NOP
    ctx->pc = 0x1f0cd0u;
}
