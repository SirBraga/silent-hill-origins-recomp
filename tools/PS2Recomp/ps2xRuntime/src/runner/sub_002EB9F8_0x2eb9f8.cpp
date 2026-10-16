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

// Function: sub_002EB9F8
// Address: 0x2eb9f8 - 0x2eba88
void sub_002EB9F8_0x2eb9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB9F8_0x2eb9f8");
#endif

    switch (ctx->pc) {
        case 0x2eba48u: goto label_2eba48;
        default: break;
    }

    ctx->pc = 0x2eb9f8u;

    // 0x2eb9f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2eb9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2eb9fc: 0x27839098  addiu       $v1, $gp, -0x6F68
    ctx->pc = 0x2eb9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938776));
    // 0x2eba00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2eba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2eba04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eba04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2eba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2eba0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2eba0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2eba10: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2eba10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2eba14: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2eba14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2eba18: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2eba18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eba1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eba20: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2eba20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eba24: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2eba24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2eba28: 0x3a230001  xori        $v1, $s1, 0x1
    ctx->pc = 0x2eba28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x2eba2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2eba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2eba30: 0x3c130100  lui         $s3, 0x100
    ctx->pc = 0x2eba30u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)256 << 16));
    // 0x2eba34: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2eba34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x2eba38: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EBA38u;
    {
        const bool branch_taken_0x2eba38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA38u;
        // 0x2eba3c: 0x83900a  movz        $s2, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba38) {
            ctx->pc = 0x2EBA64u;
            goto label_2eba64;
        }
    }
    ctx->pc = 0x2EBA40u;
    // 0x2eba40: 0xc0bb6d0  jal         func_2EDB40
    ctx->pc = 0x2EBA40u;
    SET_GPR_U32(ctx, 31, 0x2EBA48u);
    ctx->pc = 0x2EBA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA40u;
    // 0x2eba44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDB40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDB40u, 0x2EBA40u, 0x2EBA48u)) {
        return;
    }
    ctx->pc = 0x2EBA48u;
label_2eba48:
    // 0x2eba48: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBA48u;
    {
        const bool branch_taken_0x2eba48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA48u;
        // 0x2eba4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba48) {
            ctx->pc = 0x2EBA68u;
            goto label_2eba68;
        }
    }
    ctx->pc = 0x2EBA50u;
    // 0x2eba50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2eba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2eba54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2eba54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba58: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x2eba58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x2eba5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EBA5Cu;
    {
        const bool branch_taken_0x2eba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA5Cu;
        // 0x2eba60: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba5c) {
            ctx->pc = 0x2EBA68u;
            goto label_2eba68;
        }
    }
    ctx->pc = 0x2EBA64u;
label_2eba64:
    // 0x2eba64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2eba68:
    // 0x2eba68: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2eba68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eba6c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2eba6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eba70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eba70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eba74: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2eba74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eba78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eba78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eba7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA7Cu;
        // 0x2eba80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBA84u;
    // 0x2eba84: 0x0  nop
    ctx->pc = 0x2eba84u;
    // NOP
    ctx->pc = 0x2eba88u;
}
