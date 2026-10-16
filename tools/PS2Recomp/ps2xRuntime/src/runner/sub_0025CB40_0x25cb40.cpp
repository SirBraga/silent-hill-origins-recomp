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

// Function: sub_0025CB40
// Address: 0x25cb40 - 0x25cbc8
void sub_0025CB40_0x25cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CB40_0x25cb40");
#endif

    switch (ctx->pc) {
        case 0x25cb40u: goto label_25cb40;
        case 0x25cb44u: goto label_25cb44;
        case 0x25cb48u: goto label_25cb48;
        case 0x25cb4cu: goto label_25cb4c;
        case 0x25cb50u: goto label_25cb50;
        case 0x25cb54u: goto label_25cb54;
        case 0x25cb58u: goto label_25cb58;
        case 0x25cb5cu: goto label_25cb5c;
        case 0x25cb60u: goto label_25cb60;
        case 0x25cb64u: goto label_25cb64;
        case 0x25cb68u: goto label_25cb68;
        case 0x25cb6cu: goto label_25cb6c;
        case 0x25cb70u: goto label_25cb70;
        case 0x25cb74u: goto label_25cb74;
        case 0x25cb78u: goto label_25cb78;
        case 0x25cb7cu: goto label_25cb7c;
        case 0x25cb80u: goto label_25cb80;
        case 0x25cb84u: goto label_25cb84;
        case 0x25cb88u: goto label_25cb88;
        case 0x25cb8cu: goto label_25cb8c;
        case 0x25cb90u: goto label_25cb90;
        case 0x25cb94u: goto label_25cb94;
        case 0x25cb98u: goto label_25cb98;
        case 0x25cb9cu: goto label_25cb9c;
        case 0x25cba0u: goto label_25cba0;
        case 0x25cba4u: goto label_25cba4;
        case 0x25cba8u: goto label_25cba8;
        case 0x25cbacu: goto label_25cbac;
        case 0x25cbb0u: goto label_25cbb0;
        case 0x25cbb4u: goto label_25cbb4;
        case 0x25cbb8u: goto label_25cbb8;
        case 0x25cbbcu: goto label_25cbbc;
        case 0x25cbc0u: goto label_25cbc0;
        case 0x25cbc4u: goto label_25cbc4;
        default: break;
    }

    ctx->pc = 0x25cb40u;

label_25cb40:
    // 0x25cb40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25cb44:
    // 0x25cb44: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25cb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25cb48:
    // 0x25cb48: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25cb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25cb4c:
    // 0x25cb4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25cb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cb50:
    // 0x25cb50: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25cb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25cb54:
    // 0x25cb54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25cb54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25cb58:
    // 0x25cb58: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x25cb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_25cb5c:
    // 0x25cb5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25cb5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25cb60:
    // 0x25cb60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25cb64:
    // 0x25cb64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25cb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25cb68:
    // 0x25cb68: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x25cb68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_25cb6c:
    // 0x25cb6c: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_25cb70:
    if (ctx->pc == 0x25CB70u) {
        ctx->pc = 0x25CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB6Cu;
        // 0x25cb70: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB74u;
        goto label_25cb74;
    }
    ctx->pc = 0x25CB6Cu;
    {
        const bool branch_taken_0x25cb6c = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x25CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB6Cu;
        // 0x25cb70: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb6c) {
            ctx->pc = 0x25CBA0u;
            goto label_25cba0;
        }
    }
    ctx->pc = 0x25CB74u;
label_25cb74:
    // 0x25cb74: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x25cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_25cb78:
    // 0x25cb78: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25cb7c:
    // 0x25cb7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25cb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25cb80:
    // 0x25cb80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25cb84:
    // 0x25cb84: 0x280f809  jalr        $s4
label_25cb88:
    if (ctx->pc == 0x25CB88u) {
        ctx->pc = 0x25CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB84u;
        // 0x25cb88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB8Cu;
        goto label_25cb8c;
    }
    ctx->pc = 0x25CB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x25CB8Cu);
        ctx->pc = 0x25CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB84u;
        // 0x25cb88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB84u, 0x25CB8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CB8Cu;
label_25cb8c:
    // 0x25cb8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25cb90:
    if (ctx->pc == 0x25CB90u) {
        ctx->pc = 0x25CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB8Cu;
        // 0x25cb90: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB94u;
        goto label_25cb94;
    }
    ctx->pc = 0x25CB8Cu;
    {
        const bool branch_taken_0x25cb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB8Cu;
        // 0x25cb90: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb8c) {
            ctx->pc = 0x25CBA0u;
            goto label_25cba0;
        }
    }
    ctx->pc = 0x25CB94u;
label_25cb94:
    // 0x25cb94: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x25cb94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_25cb98:
    // 0x25cb98: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_25cb9c:
    if (ctx->pc == 0x25CB9Cu) {
        ctx->pc = 0x25CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB98u;
        // 0x25cb9c: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CBA0u;
        goto label_25cba0;
    }
    ctx->pc = 0x25CB98u;
    {
        const bool branch_taken_0x25cb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cb98) {
            ctx->pc = 0x25CB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CB98u;
            // 0x25cb9c: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cb78;
        }
    }
    ctx->pc = 0x25CBA0u;
label_25cba0:
    // 0x25cba0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25cba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25cba4:
    // 0x25cba4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25cba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25cba8:
    // 0x25cba8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25cba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25cbac:
    // 0x25cbac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25cbacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25cbb0:
    // 0x25cbb0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25cbb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25cbb4:
    // 0x25cbb4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25cbb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25cbb8:
    // 0x25cbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25cbbc:
    // 0x25cbbc: 0x3e00008  jr          $ra
label_25cbc0:
    if (ctx->pc == 0x25CBC0u) {
        ctx->pc = 0x25CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBBCu;
        // 0x25cbc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CBC4u;
        goto label_25cbc4;
    }
    ctx->pc = 0x25CBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBBCu;
        // 0x25cbc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CBC4u;
label_25cbc4:
    // 0x25cbc4: 0x0  nop
    ctx->pc = 0x25cbc4u;
    // NOP
    ctx->pc = 0x25cbc8u;
}
