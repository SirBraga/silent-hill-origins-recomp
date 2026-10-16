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

// Function: sub_001ECB90
// Address: 0x1ecb90 - 0x1ecc40
void sub_001ECB90_0x1ecb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECB90_0x1ecb90");
#endif

    switch (ctx->pc) {
        case 0x1ecb90u: goto label_1ecb90;
        case 0x1ecb94u: goto label_1ecb94;
        case 0x1ecb98u: goto label_1ecb98;
        case 0x1ecb9cu: goto label_1ecb9c;
        case 0x1ecba0u: goto label_1ecba0;
        case 0x1ecba4u: goto label_1ecba4;
        case 0x1ecba8u: goto label_1ecba8;
        case 0x1ecbacu: goto label_1ecbac;
        case 0x1ecbb0u: goto label_1ecbb0;
        case 0x1ecbb4u: goto label_1ecbb4;
        case 0x1ecbb8u: goto label_1ecbb8;
        case 0x1ecbbcu: goto label_1ecbbc;
        case 0x1ecbc0u: goto label_1ecbc0;
        case 0x1ecbc4u: goto label_1ecbc4;
        case 0x1ecbc8u: goto label_1ecbc8;
        case 0x1ecbccu: goto label_1ecbcc;
        case 0x1ecbd0u: goto label_1ecbd0;
        case 0x1ecbd4u: goto label_1ecbd4;
        case 0x1ecbd8u: goto label_1ecbd8;
        case 0x1ecbdcu: goto label_1ecbdc;
        case 0x1ecbe0u: goto label_1ecbe0;
        case 0x1ecbe4u: goto label_1ecbe4;
        case 0x1ecbe8u: goto label_1ecbe8;
        case 0x1ecbecu: goto label_1ecbec;
        case 0x1ecbf0u: goto label_1ecbf0;
        case 0x1ecbf4u: goto label_1ecbf4;
        case 0x1ecbf8u: goto label_1ecbf8;
        case 0x1ecbfcu: goto label_1ecbfc;
        case 0x1ecc00u: goto label_1ecc00;
        case 0x1ecc04u: goto label_1ecc04;
        case 0x1ecc08u: goto label_1ecc08;
        case 0x1ecc0cu: goto label_1ecc0c;
        case 0x1ecc10u: goto label_1ecc10;
        case 0x1ecc14u: goto label_1ecc14;
        case 0x1ecc18u: goto label_1ecc18;
        case 0x1ecc1cu: goto label_1ecc1c;
        case 0x1ecc20u: goto label_1ecc20;
        case 0x1ecc24u: goto label_1ecc24;
        case 0x1ecc28u: goto label_1ecc28;
        case 0x1ecc2cu: goto label_1ecc2c;
        case 0x1ecc30u: goto label_1ecc30;
        case 0x1ecc34u: goto label_1ecc34;
        case 0x1ecc38u: goto label_1ecc38;
        case 0x1ecc3cu: goto label_1ecc3c;
        default: break;
    }

    ctx->pc = 0x1ecb90u;

label_1ecb90:
    // 0x1ecb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ecb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ecb94:
    // 0x1ecb94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ecb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ecb98:
    // 0x1ecb98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ecb9c:
    // 0x1ecb9c: 0xc0932d4  jal         func_24CB50
label_1ecba0:
    if (ctx->pc == 0x1ECBA0u) {
        ctx->pc = 0x1ECBA4u;
        goto label_1ecba4;
    }
    ctx->pc = 0x1ECB9Cu;
    SET_GPR_U32(ctx, 31, 0x1ECBA4u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1ECB9Cu, 0x1ECBA4u)) {
        return;
    }
    ctx->pc = 0x1ECBA4u;
label_1ecba4:
    // 0x1ecba4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ecba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ecba8:
    // 0x1ecba8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1ecba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_1ecbac:
    // 0x1ecbac: 0x34849400  ori         $a0, $a0, 0x9400
    ctx->pc = 0x1ecbacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37888);
label_1ecbb0:
    // 0x1ecbb0: 0x40f809  jalr        $v0
label_1ecbb4:
    if (ctx->pc == 0x1ECBB4u) {
        ctx->pc = 0x1ECBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBB0u;
        // 0x1ecbb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECBB8u;
        goto label_1ecbb8;
    }
    ctx->pc = 0x1ECBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ECBB8u);
        ctx->pc = 0x1ECBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBB0u;
        // 0x1ecbb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECBB0u, 0x1ECBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ECBB8u;
label_1ecbb8:
    // 0x1ecbb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ecbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ecbbc:
    // 0x1ecbbc: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x1ecbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
label_1ecbc0:
    // 0x1ecbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ecbc4:
    // 0x1ecbc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ecbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecbc8:
    // 0x1ecbc8: 0xc0c493d  jal         func_3124F4
label_1ecbcc:
    if (ctx->pc == 0x1ECBCCu) {
        ctx->pc = 0x1ECBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBC8u;
        // 0x1ecbcc: 0x34c69400  ori         $a2, $a2, 0x9400 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37888);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECBD0u;
        goto label_1ecbd0;
    }
    ctx->pc = 0x1ECBC8u;
    SET_GPR_U32(ctx, 31, 0x1ECBD0u);
    ctx->pc = 0x1ECBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECBC8u;
    // 0x1ecbcc: 0x34c69400  ori         $a2, $a2, 0x9400 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37888);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1ECBC8u, 0x1ECBD0u)) {
        return;
    }
    ctx->pc = 0x1ECBD0u;
label_1ecbd0:
    // 0x1ecbd0: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1ecbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_1ecbd4:
    // 0x1ecbd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecbd8:
    // 0x1ecbd8: 0x26060210  addiu       $a2, $s0, 0x210
    ctx->pc = 0x1ecbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
label_1ecbdc:
    // 0x1ecbdc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ecbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ecbe0:
    // 0x1ecbe0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ecbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ecbe4:
    // 0x1ecbe4: 0x2604020c  addiu       $a0, $s0, 0x20C
    ctx->pc = 0x1ecbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
label_1ecbe8:
    // 0x1ecbe8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1ecbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ecbec:
    // 0x1ecbec: 0x0  nop
    ctx->pc = 0x1ecbecu;
    // NOP
label_1ecbf0:
    // 0x1ecbf0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ecbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ecbf4:
    // 0x1ecbf4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ecbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1ecbf8:
    // 0x1ecbf8: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x1ecbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_1ecbfc:
    // 0x1ecbfc: 0x0  nop
    ctx->pc = 0x1ecbfcu;
    // NOP
label_1ecc00:
    // 0x1ecc00: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
label_1ecc04:
    if (ctx->pc == 0x1ECC04u) {
        ctx->pc = 0x1ECC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC00u;
        // 0x1ecc04: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC08u;
        goto label_1ecc08;
    }
    ctx->pc = 0x1ECC00u;
    {
        const bool branch_taken_0x1ecc00 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1ECC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC00u;
        // 0x1ecc04: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc00) {
            ctx->pc = 0x1ECBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecbf0;
        }
    }
    ctx->pc = 0x1ECC08u;
label_1ecc08:
    // 0x1ecc08: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x1ecc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_1ecc0c:
    // 0x1ecc0c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ecc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc10:
    // 0x1ecc10: 0x28830140  slti        $v1, $a0, 0x140
    ctx->pc = 0x1ecc10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)320) ? 1 : 0);
label_1ecc14:
    // 0x1ecc14: 0x8ce2e7a8  lw          $v0, -0x1858($a3)
    ctx->pc = 0x1ecc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294961064)));
label_1ecc18:
    // 0x1ecc18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ecc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ecc1c:
    // 0x1ecc1c: 0xacf0e7a8  sw          $s0, -0x1858($a3)
    ctx->pc = 0x1ecc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294961064), GPR_U32(ctx, 16));
label_1ecc20:
    // 0x1ecc20: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1ecc24:
    if (ctx->pc == 0x1ECC24u) {
        ctx->pc = 0x1ECC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC20u;
        // 0x1ecc24: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC28u;
        goto label_1ecc28;
    }
    ctx->pc = 0x1ECC20u;
    {
        const bool branch_taken_0x1ecc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC20u;
        // 0x1ecc24: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc20) {
            ctx->pc = 0x1ECBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecbd8;
        }
    }
    ctx->pc = 0x1ECC28u;
label_1ecc28:
    // 0x1ecc28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ecc28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ecc2c:
    // 0x1ecc2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecc30:
    // 0x1ecc30: 0x3e00008  jr          $ra
label_1ecc34:
    if (ctx->pc == 0x1ECC34u) {
        ctx->pc = 0x1ECC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC30u;
        // 0x1ecc34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC38u;
        goto label_1ecc38;
    }
    ctx->pc = 0x1ECC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC30u;
        // 0x1ecc34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECC38u;
label_1ecc38:
    // 0x1ecc38: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1ecc38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1ecc3c:
    // 0x1ecc3c: 0x0  nop
    ctx->pc = 0x1ecc3cu;
    // NOP
    ctx->pc = 0x1ecc40u;
}
