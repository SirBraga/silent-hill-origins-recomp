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

// Function: sub_001B5E48
// Address: 0x1b5e48 - 0x1b5ec8
void sub_001B5E48_0x1b5e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5E48_0x1b5e48");
#endif

    switch (ctx->pc) {
        case 0x1b5e48u: goto label_1b5e48;
        case 0x1b5e4cu: goto label_1b5e4c;
        case 0x1b5e50u: goto label_1b5e50;
        case 0x1b5e54u: goto label_1b5e54;
        case 0x1b5e58u: goto label_1b5e58;
        case 0x1b5e5cu: goto label_1b5e5c;
        case 0x1b5e60u: goto label_1b5e60;
        case 0x1b5e64u: goto label_1b5e64;
        case 0x1b5e68u: goto label_1b5e68;
        case 0x1b5e6cu: goto label_1b5e6c;
        case 0x1b5e70u: goto label_1b5e70;
        case 0x1b5e74u: goto label_1b5e74;
        case 0x1b5e78u: goto label_1b5e78;
        case 0x1b5e7cu: goto label_1b5e7c;
        case 0x1b5e80u: goto label_1b5e80;
        case 0x1b5e84u: goto label_1b5e84;
        case 0x1b5e88u: goto label_1b5e88;
        case 0x1b5e8cu: goto label_1b5e8c;
        case 0x1b5e90u: goto label_1b5e90;
        case 0x1b5e94u: goto label_1b5e94;
        case 0x1b5e98u: goto label_1b5e98;
        case 0x1b5e9cu: goto label_1b5e9c;
        case 0x1b5ea0u: goto label_1b5ea0;
        case 0x1b5ea4u: goto label_1b5ea4;
        case 0x1b5ea8u: goto label_1b5ea8;
        case 0x1b5eacu: goto label_1b5eac;
        case 0x1b5eb0u: goto label_1b5eb0;
        case 0x1b5eb4u: goto label_1b5eb4;
        case 0x1b5eb8u: goto label_1b5eb8;
        case 0x1b5ebcu: goto label_1b5ebc;
        case 0x1b5ec0u: goto label_1b5ec0;
        case 0x1b5ec4u: goto label_1b5ec4;
        default: break;
    }

    ctx->pc = 0x1b5e48u;

label_1b5e48:
    // 0x1b5e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b5e4c:
    // 0x1b5e4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b5e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b5e50:
    // 0x1b5e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5e54:
    // 0x1b5e54: 0xc06bc48  jal         func_1AF120
label_1b5e58:
    if (ctx->pc == 0x1B5E58u) {
        ctx->pc = 0x1B5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E54u;
        // 0x1b5e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E5Cu;
        goto label_1b5e5c;
    }
    ctx->pc = 0x1B5E54u;
    SET_GPR_U32(ctx, 31, 0x1B5E5Cu);
    ctx->pc = 0x1B5E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5E54u;
    // 0x1b5e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF120u, 0x1B5E54u, 0x1B5E5Cu)) {
        return;
    }
    ctx->pc = 0x1B5E5Cu;
label_1b5e5c:
    // 0x1b5e5c: 0x8e0202b0  lw          $v0, 0x2B0($s0)
    ctx->pc = 0x1b5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_1b5e60:
    // 0x1b5e60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b5e64:
    if (ctx->pc == 0x1B5E64u) {
        ctx->pc = 0x1B5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E60u;
        // 0x1b5e64: 0x8e0602c8  lw          $a2, 0x2C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E68u;
        goto label_1b5e68;
    }
    ctx->pc = 0x1B5E60u;
    {
        const bool branch_taken_0x1b5e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e60) {
            ctx->pc = 0x1B5E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5E60u;
            // 0x1b5e64: 0x8e0602c8  lw          $a2, 0x2C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E78u;
            goto label_1b5e78;
        }
    }
    ctx->pc = 0x1B5E68u;
label_1b5e68:
    // 0x1b5e68: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x1b5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_1b5e6c:
    // 0x1b5e6c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1b5e70:
    if (ctx->pc == 0x1B5E70u) {
        ctx->pc = 0x1B5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E6Cu;
        // 0x1b5e70: 0xae0002b4  sw          $zero, 0x2B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E74u;
        goto label_1b5e74;
    }
    ctx->pc = 0x1B5E6Cu;
    {
        const bool branch_taken_0x1b5e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e6c) {
            ctx->pc = 0x1B5E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5E6Cu;
            // 0x1b5e70: 0xae0002b4  sw          $zero, 0x2B4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E74u;
            goto label_1b5e74;
        }
    }
    ctx->pc = 0x1B5E74u;
label_1b5e74:
    // 0x1b5e74: 0x8e0602c8  lw          $a2, 0x2C8($s0)
    ctx->pc = 0x1b5e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_1b5e78:
    // 0x1b5e78: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1b5e7c:
    if (ctx->pc == 0x1B5E7Cu) {
        ctx->pc = 0x1B5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E78u;
        // 0x1b5e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E80u;
        goto label_1b5e80;
    }
    ctx->pc = 0x1B5E78u;
    {
        const bool branch_taken_0x1b5e78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E78u;
        // 0x1b5e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e78) {
            ctx->pc = 0x1B5E94u;
            goto label_1b5e94;
        }
    }
    ctx->pc = 0x1B5E80u;
label_1b5e80:
    // 0x1b5e80: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b5e84:
    // 0x1b5e84: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b5e84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b5e88:
    // 0x1b5e88: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b5e8c:
    // 0x1b5e8c: 0x60f809  jalr        $v1
label_1b5e90:
    if (ctx->pc == 0x1B5E90u) {
        ctx->pc = 0x1B5E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E8Cu;
        // 0x1b5e90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E94u;
        goto label_1b5e94;
    }
    ctx->pc = 0x1B5E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5E94u);
        ctx->pc = 0x1B5E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E8Cu;
        // 0x1b5e90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5E8Cu, 0x1B5E94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5E94u;
label_1b5e94:
    // 0x1b5e94: 0x8e0602cc  lw          $a2, 0x2CC($s0)
    ctx->pc = 0x1b5e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
label_1b5e98:
    // 0x1b5e98: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1b5e9c:
    if (ctx->pc == 0x1B5E9Cu) {
        ctx->pc = 0x1B5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E98u;
        // 0x1b5e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EA0u;
        goto label_1b5ea0;
    }
    ctx->pc = 0x1B5E98u;
    {
        const bool branch_taken_0x1b5e98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E98u;
        // 0x1b5e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e98) {
            ctx->pc = 0x1B5EB4u;
            goto label_1b5eb4;
        }
    }
    ctx->pc = 0x1B5EA0u;
label_1b5ea0:
    // 0x1b5ea0: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b5ea4:
    // 0x1b5ea4: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b5ea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b5ea8:
    // 0x1b5ea8: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b5ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b5eac:
    // 0x1b5eac: 0x60f809  jalr        $v1
label_1b5eb0:
    if (ctx->pc == 0x1B5EB0u) {
        ctx->pc = 0x1B5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EACu;
        // 0x1b5eb0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EB4u;
        goto label_1b5eb4;
    }
    ctx->pc = 0x1B5EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5EB4u);
        ctx->pc = 0x1B5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EACu;
        // 0x1b5eb0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5EACu, 0x1B5EB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5EB4u;
label_1b5eb4:
    // 0x1b5eb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b5eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5eb8:
    // 0x1b5eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5ebc:
    // 0x1b5ebc: 0x3e00008  jr          $ra
label_1b5ec0:
    if (ctx->pc == 0x1B5EC0u) {
        ctx->pc = 0x1B5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EBCu;
        // 0x1b5ec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EC4u;
        goto label_1b5ec4;
    }
    ctx->pc = 0x1B5EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EBCu;
        // 0x1b5ec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5EC4u;
label_1b5ec4:
    // 0x1b5ec4: 0x0  nop
    ctx->pc = 0x1b5ec4u;
    // NOP
    ctx->pc = 0x1b5ec8u;
}
