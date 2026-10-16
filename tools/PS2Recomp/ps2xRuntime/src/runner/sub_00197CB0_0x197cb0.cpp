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

// Function: sub_00197CB0
// Address: 0x197cb0 - 0x197dc8
void sub_00197CB0_0x197cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197CB0_0x197cb0");
#endif

    switch (ctx->pc) {
        case 0x197cf0u: goto label_197cf0;
        case 0x197d08u: goto label_197d08;
        case 0x197d10u: goto label_197d10;
        case 0x197d24u: goto label_197d24;
        case 0x197d60u: goto label_197d60;
        case 0x197d74u: goto label_197d74;
        case 0x197d90u: goto label_197d90;
        default: break;
    }

    ctx->pc = 0x197cb0u;

    // 0x197cb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x197cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x197cb4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x197cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x197cb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x197cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x197cbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x197cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cc0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x197cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x197cc4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x197cc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cc8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x197cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x197ccc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x197cccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cd0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x197cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x197cd4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x197cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x197cd8: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x197CD8u;
    {
        const bool branch_taken_0x197cd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CD8u;
        // 0x197cdc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cd8) {
            ctx->pc = 0x197DA0u;
            goto label_197da0;
        }
    }
    ctx->pc = 0x197CE0u;
    // 0x197ce0: 0x12600030  beqz        $s3, . + 4 + (0x30 << 2)
    ctx->pc = 0x197CE0u;
    {
        const bool branch_taken_0x197ce0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CE0u;
        // 0x197ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ce0) {
            ctx->pc = 0x197DA4u;
            goto label_197da4;
        }
    }
    ctx->pc = 0x197CE8u;
    // 0x197ce8: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x197CE8u;
    SET_GPR_U32(ctx, 31, 0x197CF0u);
    ctx->pc = 0x197CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197CE8u;
    // 0x197cec: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x197CE8u, 0x197CF0u)) {
        return;
    }
    ctx->pc = 0x197CF0u;
label_197cf0:
    // 0x197cf0: 0x2414005f  addiu       $s4, $zero, 0x5F
    ctx->pc = 0x197cf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x197cf4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x197cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197CFCu;
    {
        const bool branch_taken_0x197cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CFCu;
        // 0x197d00: 0x247211d1  addiu       $s2, $v1, 0x11D1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4561));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cfc) {
            ctx->pc = 0x197D14u;
            goto label_197d14;
        }
    }
    ctx->pc = 0x197D04u;
    // 0x197d04: 0x0  nop
    ctx->pc = 0x197d04u;
    // NOP
label_197d08:
    // 0x197d08: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x197D08u;
    SET_GPR_U32(ctx, 31, 0x197D10u);
    ctx->pc = 0x197D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D08u;
    // 0x197d0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x197D08u, 0x197D10u)) {
        return;
    }
    ctx->pc = 0x197D10u;
label_197d10:
    // 0x197d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197d14:
    // 0x197d14: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x197D14u;
    {
        const bool branch_taken_0x197d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D14u;
        // 0x197d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d14) {
            ctx->pc = 0x197DA0u;
            goto label_197da0;
        }
    }
    ctx->pc = 0x197D1Cu;
    // 0x197d1c: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x197D1Cu;
    SET_GPR_U32(ctx, 31, 0x197D24u);
    ctx->pc = 0x197D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D1Cu;
    // 0x197d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x197D1Cu, 0x197D24u)) {
        return;
    }
    ctx->pc = 0x197D24u;
label_197d24:
    // 0x197d24: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x197d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x197d28: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x197D28u;
    {
        const bool branch_taken_0x197d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d28) {
            ctx->pc = 0x197D50u;
            goto label_197d50;
        }
    }
    ctx->pc = 0x197D30u;
    // 0x197d30: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x197d30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197d34: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x197d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x197d38: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197d3c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x197d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x197d40: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x197D40u;
    {
        const bool branch_taken_0x197d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197d40) {
            ctx->pc = 0x197D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197d08;
        }
    }
    ctx->pc = 0x197D48u;
    // 0x197d48: 0x10b4ffef  beq         $a1, $s4, . + 4 + (-0x11 << 2)
    ctx->pc = 0x197D48u;
    {
        const bool branch_taken_0x197d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        if (branch_taken_0x197d48) {
            ctx->pc = 0x197D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197d08;
        }
    }
    ctx->pc = 0x197D50u;
label_197d50:
    // 0x197d50: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x197D50u;
    {
        const bool branch_taken_0x197d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D50u;
        // 0x197d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d50) {
            ctx->pc = 0x197DA0u;
            goto label_197da0;
        }
    }
    ctx->pc = 0x197D58u;
    // 0x197d58: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x197D58u;
    SET_GPR_U32(ctx, 31, 0x197D60u);
    ctx->pc = 0x197D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D58u;
    // 0x197d5c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x197D58u, 0x197D60u)) {
        return;
    }
    ctx->pc = 0x197D60u;
label_197d60:
    // 0x197d60: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x197d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197d64: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x197D64u;
    {
        const bool branch_taken_0x197d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D64u;
        // 0x197d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d64) {
            ctx->pc = 0x197DA0u;
            goto label_197da0;
        }
    }
    ctx->pc = 0x197D6Cu;
    // 0x197d6c: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x197D6Cu;
    SET_GPR_U32(ctx, 31, 0x197D74u);
    ctx->pc = 0x197D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D6Cu;
    // 0x197d70: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x197D6Cu, 0x197D74u)) {
        return;
    }
    ctx->pc = 0x197D74u;
label_197d74:
    // 0x197d74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d78: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x197D78u;
    {
        const bool branch_taken_0x197d78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D78u;
        // 0x197d7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d78) {
            ctx->pc = 0x197DA0u;
            goto label_197da0;
        }
    }
    ctx->pc = 0x197D80u;
    // 0x197d80: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x197d80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x197d84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x197d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d88: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x197D88u;
    SET_GPR_U32(ctx, 31, 0x197D90u);
    ctx->pc = 0x197D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D88u;
    // 0x197d8c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x197D88u, 0x197D90u)) {
        return;
    }
    ctx->pc = 0x197D90u;
label_197d90:
    // 0x197d90: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x197d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x197d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197d98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197D98u;
    {
        const bool branch_taken_0x197d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D98u;
        // 0x197d9c: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d98) {
            ctx->pc = 0x197DA4u;
            goto label_197da4;
        }
    }
    ctx->pc = 0x197DA0u;
label_197da0:
    // 0x197da0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197da4:
    // 0x197da4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x197da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197da8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x197da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197dac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x197dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197db0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197db0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197db4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x197db4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197db8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x197db8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x197DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DC0u;
        // 0x197dc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197DC8u;
}
