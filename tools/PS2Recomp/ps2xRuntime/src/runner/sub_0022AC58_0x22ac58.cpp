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

// Function: sub_0022AC58
// Address: 0x22ac58 - 0x22acc8
void sub_0022AC58_0x22ac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AC58_0x22ac58");
#endif

    switch (ctx->pc) {
        case 0x22ac58u: goto label_22ac58;
        case 0x22ac5cu: goto label_22ac5c;
        case 0x22ac60u: goto label_22ac60;
        case 0x22ac64u: goto label_22ac64;
        case 0x22ac68u: goto label_22ac68;
        case 0x22ac6cu: goto label_22ac6c;
        case 0x22ac70u: goto label_22ac70;
        case 0x22ac74u: goto label_22ac74;
        case 0x22ac78u: goto label_22ac78;
        case 0x22ac7cu: goto label_22ac7c;
        case 0x22ac80u: goto label_22ac80;
        case 0x22ac84u: goto label_22ac84;
        case 0x22ac88u: goto label_22ac88;
        case 0x22ac8cu: goto label_22ac8c;
        case 0x22ac90u: goto label_22ac90;
        case 0x22ac94u: goto label_22ac94;
        case 0x22ac98u: goto label_22ac98;
        case 0x22ac9cu: goto label_22ac9c;
        case 0x22aca0u: goto label_22aca0;
        case 0x22aca4u: goto label_22aca4;
        case 0x22aca8u: goto label_22aca8;
        case 0x22acacu: goto label_22acac;
        case 0x22acb0u: goto label_22acb0;
        case 0x22acb4u: goto label_22acb4;
        case 0x22acb8u: goto label_22acb8;
        case 0x22acbcu: goto label_22acbc;
        case 0x22acc0u: goto label_22acc0;
        case 0x22acc4u: goto label_22acc4;
        default: break;
    }

    ctx->pc = 0x22ac58u;

label_22ac58:
    // 0x22ac58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22ac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22ac5c:
    // 0x22ac5c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_22ac60:
    // 0x22ac60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22ac64:
    // 0x22ac64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22ac64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ac68:
    // 0x22ac68: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_22ac6c:
    // 0x22ac6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22ac6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22ac70:
    // 0x22ac70: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22ac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_22ac74:
    // 0x22ac74: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x22ac74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_22ac78:
    // 0x22ac78: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22ac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_22ac7c:
    // 0x22ac7c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22ac7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22ac80:
    // 0x22ac80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22ac84:
    // 0x22ac84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x22ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22ac88:
    // 0x22ac88: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
label_22ac8c:
    if (ctx->pc == 0x22AC8Cu) {
        ctx->pc = 0x22AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC88u;
        // 0x22ac8c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC90u;
        goto label_22ac90;
    }
    ctx->pc = 0x22AC88u;
    {
        const bool branch_taken_0x22ac88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x22AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC88u;
        // 0x22ac8c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac88) {
            ctx->pc = 0x22ACA4u;
            goto label_22aca4;
        }
    }
    ctx->pc = 0x22AC90u;
label_22ac90:
    // 0x22ac90: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22ac90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22ac94:
    // 0x22ac94: 0x280f809  jalr        $s4
label_22ac98:
    if (ctx->pc == 0x22AC98u) {
        ctx->pc = 0x22AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC94u;
        // 0x22ac98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC9Cu;
        goto label_22ac9c;
    }
    ctx->pc = 0x22AC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x22AC9Cu);
        ctx->pc = 0x22AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC94u;
        // 0x22ac98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AC94u, 0x22AC9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AC9Cu;
label_22ac9c:
    // 0x22ac9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_22aca0:
    if (ctx->pc == 0x22ACA0u) {
        ctx->pc = 0x22ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC9Cu;
        // 0x22aca0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ACA4u;
        goto label_22aca4;
    }
    ctx->pc = 0x22AC9Cu;
    {
        const bool branch_taken_0x22ac9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC9Cu;
        // 0x22aca0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac9c) {
            ctx->pc = 0x22AC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ac88;
        }
    }
    ctx->pc = 0x22ACA4u;
label_22aca4:
    // 0x22aca4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22aca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22aca8:
    // 0x22aca8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22aca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22acac:
    // 0x22acac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22acacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22acb0:
    // 0x22acb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22acb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22acb4:
    // 0x22acb4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22acb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22acb8:
    // 0x22acb8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22acb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22acbc:
    // 0x22acbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22acbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22acc0:
    // 0x22acc0: 0x3e00008  jr          $ra
label_22acc4:
    if (ctx->pc == 0x22ACC4u) {
        ctx->pc = 0x22ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACC0u;
        // 0x22acc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ACC8u;
        goto label_fallthrough_0x22acc0;
    }
    ctx->pc = 0x22ACC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACC0u;
        // 0x22acc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ACC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22acc0:
    ctx->pc = 0x22ACC8u;
}
