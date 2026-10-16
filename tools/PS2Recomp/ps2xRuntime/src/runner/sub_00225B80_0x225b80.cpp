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

// Function: sub_00225B80
// Address: 0x225b80 - 0x225c50
void sub_00225B80_0x225b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225B80_0x225b80");
#endif

    switch (ctx->pc) {
        case 0x225bc4u: goto label_225bc4;
        case 0x225bd8u: goto label_225bd8;
        case 0x225bfcu: goto label_225bfc;
        case 0x225c08u: goto label_225c08;
        case 0x225c24u: goto label_225c24;
        case 0x225c30u: goto label_225c30;
        default: break;
    }

    ctx->pc = 0x225b80u;

    // 0x225b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x225b84: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x225b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x225b88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x225b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x225b8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x225b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x225b90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x225b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x225b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225b98: 0x24720fc8  addiu       $s2, $v1, 0xFC8
    ctx->pc = 0x225b98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x225b9c: 0x8e420124  lw          $v0, 0x124($s2)
    ctx->pc = 0x225b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7310ECu));
    // 0x225ba0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x225ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x225ba4: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x225ba4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x225ba8: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x225BA8u;
    {
        const bool branch_taken_0x225ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BA8u;
        // 0x225bac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ba8) {
            ctx->pc = 0x225C10u;
            goto label_225c10;
        }
    }
    ctx->pc = 0x225BB0u;
    // 0x225bb0: 0x11802b  sltu        $s0, $zero, $s1
    ctx->pc = 0x225bb0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x225bb4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x225BB4u;
    {
        const bool branch_taken_0x225bb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BB4u;
        // 0x225bb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bb4) {
            ctx->pc = 0x225BECu;
            goto label_225bec;
        }
    }
    ctx->pc = 0x225BBCu;
    // 0x225bbc: 0xc08e92e  jal         func_23A4B8
    ctx->pc = 0x225BBCu;
    SET_GPR_U32(ctx, 31, 0x225BC4u);
    ctx->pc = 0x23A4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23A4B8u, 0x225BBCu, 0x225BC4u)) {
        return;
    }
    ctx->pc = 0x225BC4u;
label_225bc4:
    // 0x225bc4: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x225bc4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x225bc8: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x225BC8u;
    {
        const bool branch_taken_0x225bc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BC8u;
        // 0x225bcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bc8) {
            ctx->pc = 0x225C30u;
            goto label_225c30;
        }
    }
    ctx->pc = 0x225BD0u;
    // 0x225bd0: 0xc089576  jal         func_2255D8
    ctx->pc = 0x225BD0u;
    SET_GPR_U32(ctx, 31, 0x225BD8u);
    ctx->pc = 0x225BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225BD0u;
    // 0x225bd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2255D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2255D8u, 0x225BD0u, 0x225BD8u)) {
        return;
    }
    ctx->pc = 0x225BD8u;
label_225bd8:
    // 0x225bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x225bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225bdc: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x225BDCu;
    {
        const bool branch_taken_0x225bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BDCu;
        // 0x225be0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bdc) {
            ctx->pc = 0x225C30u;
            goto label_225c30;
        }
    }
    ctx->pc = 0x225BE4u;
    // 0x225be4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x225BE4u;
    {
        const bool branch_taken_0x225be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BE4u;
        // 0x225be8: 0xae420124  sw          $v0, 0x124($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225be4) {
            ctx->pc = 0x225C30u;
            goto label_225c30;
        }
    }
    ctx->pc = 0x225BECu;
label_225bec:
    // 0x225bec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x225becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x225bf0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x225bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x225bf4: 0xc092848  jal         func_24A120
    ctx->pc = 0x225BF4u;
    SET_GPR_U32(ctx, 31, 0x225BFCu);
    ctx->pc = 0x225BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225BF4u;
    // 0x225bf8: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x225BF4u, 0x225BFCu)) {
        return;
    }
    ctx->pc = 0x225BFCu;
label_225bfc:
    // 0x225bfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x225bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c00: 0xc09281a  jal         func_24A068
    ctx->pc = 0x225C00u;
    SET_GPR_U32(ctx, 31, 0x225C08u);
    ctx->pc = 0x225C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C00u;
    // 0x225c04: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x225C00u, 0x225C08u)) {
        return;
    }
    ctx->pc = 0x225C08u;
label_225c08:
    // 0x225c08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x225C08u;
    {
        const bool branch_taken_0x225c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C08u;
        // 0x225c0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c08) {
            ctx->pc = 0x225C34u;
            goto label_225c34;
        }
    }
    ctx->pc = 0x225C10u;
label_225c10:
    // 0x225c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225c14: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x225c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x225c18: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x225c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x225c1c: 0xc092848  jal         func_24A120
    ctx->pc = 0x225C1Cu;
    SET_GPR_U32(ctx, 31, 0x225C24u);
    ctx->pc = 0x225C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C1Cu;
    // 0x225c20: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x225C1Cu, 0x225C24u)) {
        return;
    }
    ctx->pc = 0x225C24u;
label_225c24:
    // 0x225c24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x225c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c28: 0xc09281a  jal         func_24A068
    ctx->pc = 0x225C28u;
    SET_GPR_U32(ctx, 31, 0x225C30u);
    ctx->pc = 0x225C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C28u;
    // 0x225c2c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x225C28u, 0x225C30u)) {
        return;
    }
    ctx->pc = 0x225C30u;
label_225c30:
    // 0x225c30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225c34:
    // 0x225c34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x225c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225c38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x225c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225c44: 0x3e00008  jr          $ra
    ctx->pc = 0x225C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C44u;
        // 0x225c48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225C4Cu;
    // 0x225c4c: 0x0  nop
    ctx->pc = 0x225c4cu;
    // NOP
    ctx->pc = 0x225c50u;
}
