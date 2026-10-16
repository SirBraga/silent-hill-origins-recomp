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

// Function: sub_00188C78
// Address: 0x188c78 - 0x188cf8
void sub_00188C78_0x188c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188C78_0x188c78");
#endif

    switch (ctx->pc) {
        case 0x188c78u: goto label_188c78;
        case 0x188c7cu: goto label_188c7c;
        case 0x188c80u: goto label_188c80;
        case 0x188c84u: goto label_188c84;
        case 0x188c88u: goto label_188c88;
        case 0x188c8cu: goto label_188c8c;
        case 0x188c90u: goto label_188c90;
        case 0x188c94u: goto label_188c94;
        case 0x188c98u: goto label_188c98;
        case 0x188c9cu: goto label_188c9c;
        case 0x188ca0u: goto label_188ca0;
        case 0x188ca4u: goto label_188ca4;
        case 0x188ca8u: goto label_188ca8;
        case 0x188cacu: goto label_188cac;
        case 0x188cb0u: goto label_188cb0;
        case 0x188cb4u: goto label_188cb4;
        case 0x188cb8u: goto label_188cb8;
        case 0x188cbcu: goto label_188cbc;
        case 0x188cc0u: goto label_188cc0;
        case 0x188cc4u: goto label_188cc4;
        case 0x188cc8u: goto label_188cc8;
        case 0x188cccu: goto label_188ccc;
        case 0x188cd0u: goto label_188cd0;
        case 0x188cd4u: goto label_188cd4;
        case 0x188cd8u: goto label_188cd8;
        case 0x188cdcu: goto label_188cdc;
        case 0x188ce0u: goto label_188ce0;
        case 0x188ce4u: goto label_188ce4;
        case 0x188ce8u: goto label_188ce8;
        case 0x188cecu: goto label_188cec;
        case 0x188cf0u: goto label_188cf0;
        case 0x188cf4u: goto label_188cf4;
        default: break;
    }

    ctx->pc = 0x188c78u;

label_188c78:
    // 0x188c78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_188c7c:
    // 0x188c7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x188c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_188c80:
    // 0x188c80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x188c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_188c84:
    // 0x188c84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x188c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_188c88:
    // 0x188c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_188c8c:
    // 0x188c8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x188c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_188c90:
    // 0x188c90: 0x8c900114  lw          $s0, 0x114($a0)
    ctx->pc = 0x188c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_188c94:
    // 0x188c94: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_188c98:
    if (ctx->pc == 0x188C98u) {
        ctx->pc = 0x188C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C94u;
        // 0x188c98: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C9Cu;
        goto label_188c9c;
    }
    ctx->pc = 0x188C94u;
    {
        const bool branch_taken_0x188c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C94u;
        // 0x188c98: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c94) {
            ctx->pc = 0x188CD8u;
            goto label_188cd8;
        }
    }
    ctx->pc = 0x188C9Cu;
label_188c9c:
    // 0x188c9c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x188c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_188ca0:
    // 0x188ca0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_188ca4:
    // 0x188ca4: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x188ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_188ca8:
    // 0x188ca8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x188ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_188cac:
    // 0x188cac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x188cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_188cb0:
    // 0x188cb0: 0x40f809  jalr        $v0
label_188cb4:
    if (ctx->pc == 0x188CB4u) {
        ctx->pc = 0x188CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CB0u;
        // 0x188cb4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CB8u;
        goto label_188cb8;
    }
    ctx->pc = 0x188CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188CB8u);
        ctx->pc = 0x188CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CB0u;
        // 0x188cb4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188CB0u, 0x188CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188CB8u;
label_188cb8:
    // 0x188cb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_188cbc:
    if (ctx->pc == 0x188CBCu) {
        ctx->pc = 0x188CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CB8u;
        // 0x188cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CC0u;
        goto label_188cc0;
    }
    ctx->pc = 0x188CB8u;
    {
        const bool branch_taken_0x188cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CB8u;
        // 0x188cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cb8) {
            ctx->pc = 0x188CCCu;
            goto label_188ccc;
        }
    }
    ctx->pc = 0x188CC0u;
label_188cc0:
    // 0x188cc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x188cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_188cc4:
    // 0x188cc4: 0x10000006  b           . + 4 + (0x6 << 2)
label_188cc8:
    if (ctx->pc == 0x188CC8u) {
        ctx->pc = 0x188CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CC4u;
        // 0x188cc8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CCCu;
        goto label_188ccc;
    }
    ctx->pc = 0x188CC4u;
    {
        const bool branch_taken_0x188cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CC4u;
        // 0x188cc8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cc4) {
            ctx->pc = 0x188CE0u;
            goto label_188ce0;
        }
    }
    ctx->pc = 0x188CCCu;
label_188ccc:
    // 0x188ccc: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x188cccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188cd0:
    // 0x188cd0: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
label_188cd4:
    if (ctx->pc == 0x188CD4u) {
        ctx->pc = 0x188CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CD0u;
        // 0x188cd4: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CD8u;
        goto label_188cd8;
    }
    ctx->pc = 0x188CD0u;
    {
        const bool branch_taken_0x188cd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x188cd0) {
            ctx->pc = 0x188CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188CD0u;
            // 0x188cd4: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188ca0;
        }
    }
    ctx->pc = 0x188CD8u;
label_188cd8:
    // 0x188cd8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x188cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_188cdc:
    // 0x188cdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188ce0:
    // 0x188ce0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x188ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_188ce4:
    // 0x188ce4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x188ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_188ce8:
    // 0x188ce8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x188ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_188cec:
    // 0x188cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188cf0:
    // 0x188cf0: 0x3e00008  jr          $ra
label_188cf4:
    if (ctx->pc == 0x188CF4u) {
        ctx->pc = 0x188CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CF0u;
        // 0x188cf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CF8u;
        goto label_fallthrough_0x188cf0;
    }
    ctx->pc = 0x188CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CF0u;
        // 0x188cf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x188cf0:
    ctx->pc = 0x188CF8u;
}
