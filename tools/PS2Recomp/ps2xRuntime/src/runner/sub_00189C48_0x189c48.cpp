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

// Function: sub_00189C48
// Address: 0x189c48 - 0x189d10
void sub_00189C48_0x189c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189C48_0x189c48");
#endif

    switch (ctx->pc) {
        case 0x189c98u: goto label_189c98;
        case 0x189ca4u: goto label_189ca4;
        case 0x189cb0u: goto label_189cb0;
        case 0x189cd0u: goto label_189cd0;
        case 0x189cdcu: goto label_189cdc;
        case 0x189cf4u: goto label_189cf4;
        default: break;
    }

    ctx->pc = 0x189c48u;

    // 0x189c48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x189c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x189c4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x189c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x189c50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189c54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x189c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x189c58: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x189c58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x189c5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x189c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x189c60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x189c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x189c64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x189c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x189c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x189c6c: 0x24428d18  addiu       $v0, $v0, -0x72E8
    ctx->pc = 0x189c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937880));
    // 0x189c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189c74: 0x24638d38  addiu       $v1, $v1, -0x72C8
    ctx->pc = 0x189c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937912));
    // 0x189c78: 0x24c68d80  addiu       $a2, $a2, -0x7280
    ctx->pc = 0x189c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937984));
    // 0x189c7c: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x189c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
    // 0x189c80: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x189c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x189c84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x189c84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c88: 0xae460030  sw          $a2, 0x30($s2)
    ctx->pc = 0x189c88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 6));
    // 0x189c8c: 0x265000c4  addiu       $s0, $s2, 0xC4
    ctx->pc = 0x189c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    // 0x189c90: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x189c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189c94: 0x0  nop
    ctx->pc = 0x189c94u;
    // NOP
label_189c98:
    // 0x189c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c9c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x189C9Cu;
    SET_GPR_U32(ctx, 31, 0x189CA4u);
    ctx->pc = 0x189CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C9Cu;
    // 0x189ca0: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x189C9Cu, 0x189CA4u)) {
        return;
    }
    ctx->pc = 0x189CA4u;
label_189ca4:
    // 0x189ca4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x189ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x189ca8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x189CA8u;
    SET_GPR_U32(ctx, 31, 0x189CB0u);
    ctx->pc = 0x189CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CA8u;
    // 0x189cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x189CA8u, 0x189CB0u)) {
        return;
    }
    ctx->pc = 0x189CB0u;
label_189cb0:
    // 0x189cb0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x189CB0u;
    {
        const bool branch_taken_0x189cb0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x189CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CB0u;
        // 0x189cb4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cb0) {
            ctx->pc = 0x189C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189c98;
        }
    }
    ctx->pc = 0x189CB8u;
    // 0x189cb8: 0x265100c0  addiu       $s1, $s2, 0xC0
    ctx->pc = 0x189cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x189cbc: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x189CBCu;
    {
        const bool branch_taken_0x189cbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CBCu;
        // 0x189cc0: 0x265000d8  addiu       $s0, $s2, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cbc) {
            ctx->pc = 0x189CE8u;
            goto label_189ce8;
        }
    }
    ctx->pc = 0x189CC4u;
    // 0x189cc4: 0x12300009  beq         $s1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189CC4u;
    {
        const bool branch_taken_0x189cc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x189CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CC4u;
        // 0x189cc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cc4) {
            ctx->pc = 0x189CECu;
            goto label_189cec;
        }
    }
    ctx->pc = 0x189CCCu;
    // 0x189ccc: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x189cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_189cd0:
    // 0x189cd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189cd4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x189CD4u;
    SET_GPR_U32(ctx, 31, 0x189CDCu);
    ctx->pc = 0x189CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CD4u;
    // 0x189cd8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x189CD4u, 0x189CDCu)) {
        return;
    }
    ctx->pc = 0x189CDCu;
label_189cdc:
    // 0x189cdc: 0x0  nop
    ctx->pc = 0x189cdcu;
    // NOP
    // 0x189ce0: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x189CE0u;
    {
        const bool branch_taken_0x189ce0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x189CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CE0u;
        // 0x189ce4: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ce0) {
            ctx->pc = 0x189CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189cd0;
        }
    }
    ctx->pc = 0x189CE8u;
label_189ce8:
    // 0x189ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_189cec:
    // 0x189cec: 0xc062482  jal         func_189208
    ctx->pc = 0x189CECu;
    SET_GPR_U32(ctx, 31, 0x189CF4u);
    ctx->pc = 0x189CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CECu;
    // 0x189cf0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189208u, 0x189CECu, 0x189CF4u)) {
        return;
    }
    ctx->pc = 0x189CF4u;
label_189cf4:
    // 0x189cf4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x189cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189cf8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x189cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189cfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189d00: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x189d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189d08: 0x3e00008  jr          $ra
    ctx->pc = 0x189D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D08u;
        // 0x189d0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189D10u;
}
