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

// Function: sub_002EEB08
// Address: 0x2eeb08 - 0x2eebc8
void sub_002EEB08_0x2eeb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEB08_0x2eeb08");
#endif

    switch (ctx->pc) {
        case 0x2eeb08u: goto label_2eeb08;
        case 0x2eeb0cu: goto label_2eeb0c;
        case 0x2eeb10u: goto label_2eeb10;
        case 0x2eeb14u: goto label_2eeb14;
        case 0x2eeb18u: goto label_2eeb18;
        case 0x2eeb1cu: goto label_2eeb1c;
        case 0x2eeb20u: goto label_2eeb20;
        case 0x2eeb24u: goto label_2eeb24;
        case 0x2eeb28u: goto label_2eeb28;
        case 0x2eeb2cu: goto label_2eeb2c;
        case 0x2eeb30u: goto label_2eeb30;
        case 0x2eeb34u: goto label_2eeb34;
        case 0x2eeb38u: goto label_2eeb38;
        case 0x2eeb3cu: goto label_2eeb3c;
        case 0x2eeb40u: goto label_2eeb40;
        case 0x2eeb44u: goto label_2eeb44;
        case 0x2eeb48u: goto label_2eeb48;
        case 0x2eeb4cu: goto label_2eeb4c;
        case 0x2eeb50u: goto label_2eeb50;
        case 0x2eeb54u: goto label_2eeb54;
        case 0x2eeb58u: goto label_2eeb58;
        case 0x2eeb5cu: goto label_2eeb5c;
        case 0x2eeb60u: goto label_2eeb60;
        case 0x2eeb64u: goto label_2eeb64;
        case 0x2eeb68u: goto label_2eeb68;
        case 0x2eeb6cu: goto label_2eeb6c;
        case 0x2eeb70u: goto label_2eeb70;
        case 0x2eeb74u: goto label_2eeb74;
        case 0x2eeb78u: goto label_2eeb78;
        case 0x2eeb7cu: goto label_2eeb7c;
        case 0x2eeb80u: goto label_2eeb80;
        case 0x2eeb84u: goto label_2eeb84;
        case 0x2eeb88u: goto label_2eeb88;
        case 0x2eeb8cu: goto label_2eeb8c;
        case 0x2eeb90u: goto label_2eeb90;
        case 0x2eeb94u: goto label_2eeb94;
        case 0x2eeb98u: goto label_2eeb98;
        case 0x2eeb9cu: goto label_2eeb9c;
        case 0x2eeba0u: goto label_2eeba0;
        case 0x2eeba4u: goto label_2eeba4;
        case 0x2eeba8u: goto label_2eeba8;
        case 0x2eebacu: goto label_2eebac;
        case 0x2eebb0u: goto label_2eebb0;
        case 0x2eebb4u: goto label_2eebb4;
        case 0x2eebb8u: goto label_2eebb8;
        case 0x2eebbcu: goto label_2eebbc;
        case 0x2eebc0u: goto label_2eebc0;
        case 0x2eebc4u: goto label_2eebc4;
        default: break;
    }

    ctx->pc = 0x2eeb08u;

label_2eeb08:
    // 0x2eeb08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2eeb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2eeb0c:
    // 0x2eeb0c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2eeb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2eeb10:
    // 0x2eeb10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2eeb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2eeb14:
    // 0x2eeb14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eeb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb18:
    // 0x2eeb18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2eeb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2eeb1c:
    // 0x2eeb1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2eeb1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb20:
    // 0x2eeb20: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2eeb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2eeb24:
    // 0x2eeb24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eeb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2eeb28:
    // 0x2eeb28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2eeb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2eeb2c:
    // 0x2eeb2c: 0x8c510020  lw          $s1, 0x20($v0)
    ctx->pc = 0x2eeb2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2eeb30:
    // 0x2eeb30: 0xc092976  jal         func_24A5D8
label_2eeb34:
    if (ctx->pc == 0x2EEB34u) {
        ctx->pc = 0x2EEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB30u;
        // 0x2eeb34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB38u;
        goto label_2eeb38;
    }
    ctx->pc = 0x2EEB30u;
    SET_GPR_U32(ctx, 31, 0x2EEB38u);
    ctx->pc = 0x2EEB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB30u;
    // 0x2eeb34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D8u, 0x2EEB30u, 0x2EEB38u)) {
        return;
    }
    ctx->pc = 0x2EEB38u;
label_2eeb38:
    // 0x2eeb38: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2eeb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2eeb3c:
    // 0x2eeb3c: 0xc092974  jal         func_24A5D0
label_2eeb40:
    if (ctx->pc == 0x2EEB40u) {
        ctx->pc = 0x2EEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB3Cu;
        // 0x2eeb40: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB44u;
        goto label_2eeb44;
    }
    ctx->pc = 0x2EEB3Cu;
    SET_GPR_U32(ctx, 31, 0x2EEB44u);
    ctx->pc = 0x2EEB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB3Cu;
    // 0x2eeb40: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D0u, 0x2EEB3Cu, 0x2EEB44u)) {
        return;
    }
    ctx->pc = 0x2EEB44u;
label_2eeb44:
    // 0x2eeb44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2eeb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2eeb48:
    // 0x2eeb48: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2eeb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2eeb4c:
    // 0x2eeb4c: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_2eeb50:
    if (ctx->pc == 0x2EEB50u) {
        ctx->pc = 0x2EEB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB4Cu;
        // 0x2eeb50: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB54u;
        goto label_2eeb54;
    }
    ctx->pc = 0x2EEB4Cu;
    {
        const bool branch_taken_0x2eeb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EEB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB4Cu;
        // 0x2eeb50: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb4c) {
            ctx->pc = 0x2EEB98u;
            goto label_2eeb98;
        }
    }
    ctx->pc = 0x2EEB54u;
label_2eeb54:
    // 0x2eeb54: 0x24530fc8  addiu       $s3, $v0, 0xFC8
    ctx->pc = 0x2eeb54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2eeb58:
    // 0x2eeb58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2eeb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2eeb5c:
    // 0x2eeb5c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2eeb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2eeb60:
    // 0x2eeb60: 0x220f809  jalr        $s1
label_2eeb64:
    if (ctx->pc == 0x2EEB64u) {
        ctx->pc = 0x2EEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB60u;
        // 0x2eeb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB68u;
        goto label_2eeb68;
    }
    ctx->pc = 0x2EEB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x2EEB68u);
        ctx->pc = 0x2EEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB60u;
        // 0x2eeb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEB60u, 0x2EEB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEB68u;
label_2eeb68:
    // 0x2eeb68: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x2eeb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_2eeb6c:
    // 0x2eeb6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eeb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb70:
    // 0x2eeb70: 0x60f809  jalr        $v1
label_2eeb74:
    if (ctx->pc == 0x2EEB74u) {
        ctx->pc = 0x2EEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB70u;
        // 0x2eeb74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB78u;
        goto label_2eeb78;
    }
    ctx->pc = 0x2EEB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EEB78u);
        ctx->pc = 0x2EEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB70u;
        // 0x2eeb74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEB70u, 0x2EEB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEB78u;
label_2eeb78:
    // 0x2eeb78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2eeb7c:
    if (ctx->pc == 0x2EEB7Cu) {
        ctx->pc = 0x2EEB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB78u;
        // 0x2eeb7c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB80u;
        goto label_2eeb80;
    }
    ctx->pc = 0x2EEB78u;
    {
        const bool branch_taken_0x2eeb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB78u;
        // 0x2eeb7c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb78) {
            ctx->pc = 0x2EEB88u;
            goto label_2eeb88;
        }
    }
    ctx->pc = 0x2EEB80u;
label_2eeb80:
    // 0x2eeb80: 0x10000006  b           . + 4 + (0x6 << 2)
label_2eeb84:
    if (ctx->pc == 0x2EEB84u) {
        ctx->pc = 0x2EEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB80u;
        // 0x2eeb84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB88u;
        goto label_2eeb88;
    }
    ctx->pc = 0x2EEB80u;
    {
        const bool branch_taken_0x2eeb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB80u;
        // 0x2eeb84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb80) {
            ctx->pc = 0x2EEB9Cu;
            goto label_2eeb9c;
        }
    }
    ctx->pc = 0x2EEB88u;
label_2eeb88:
    // 0x2eeb88: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2eeb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2eeb8c:
    // 0x2eeb8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2eeb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2eeb90:
    // 0x2eeb90: 0x1443fff1  bne         $v0, $v1, . + 4 + (-0xF << 2)
label_2eeb94:
    if (ctx->pc == 0x2EEB94u) {
        ctx->pc = 0x2EEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB90u;
        // 0x2eeb94: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEB98u;
        goto label_2eeb98;
    }
    ctx->pc = 0x2EEB90u;
    {
        const bool branch_taken_0x2eeb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB90u;
        // 0x2eeb94: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb90) {
            ctx->pc = 0x2EEB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eeb58;
        }
    }
    ctx->pc = 0x2EEB98u;
label_2eeb98:
    // 0x2eeb98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eeb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eeb9c:
    // 0x2eeb9c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2eeb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2eeba0:
    // 0x2eeba0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2eeba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2eeba4:
    // 0x2eeba4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2eeba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2eeba8:
    // 0x2eeba8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2eeba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2eebac:
    // 0x2eebac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eebacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2eebb0:
    // 0x2eebb0: 0x3e00008  jr          $ra
label_2eebb4:
    if (ctx->pc == 0x2EEBB4u) {
        ctx->pc = 0x2EEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBB0u;
        // 0x2eebb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEBB8u;
        goto label_2eebb8;
    }
    ctx->pc = 0x2EEBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBB0u;
        // 0x2eebb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEBB8u;
label_2eebb8:
    // 0x2eebb8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2eebb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2eebbc:
    // 0x2eebbc: 0x0  nop
    ctx->pc = 0x2eebbcu;
    // NOP
label_2eebc0:
    // 0x2eebc0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2eebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2eebc4:
    // 0x2eebc4: 0x0  nop
    ctx->pc = 0x2eebc4u;
    // NOP
    ctx->pc = 0x2eebc8u;
}
