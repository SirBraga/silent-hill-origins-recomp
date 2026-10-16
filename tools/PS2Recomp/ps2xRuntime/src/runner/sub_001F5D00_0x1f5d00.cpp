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

// Function: sub_001F5D00
// Address: 0x1f5d00 - 0x1f5dd0
void sub_001F5D00_0x1f5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5D00_0x1f5d00");
#endif

    switch (ctx->pc) {
        case 0x1f5d18u: goto label_1f5d18;
        case 0x1f5d84u: goto label_1f5d84;
        case 0x1f5d98u: goto label_1f5d98;
        case 0x1f5db4u: goto label_1f5db4;
        default: break;
    }

    ctx->pc = 0x1f5d00u;

    // 0x1f5d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f5d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f5d04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f5d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f5d08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f5d0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5d10: 0xc0a5b3e  jal         func_296CF8
    ctx->pc = 0x1F5D10u;
    SET_GPR_U32(ctx, 31, 0x1F5D18u);
    ctx->pc = 0x1F5D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D10u;
    // 0x1f5d14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296CF8u, 0x1F5D10u, 0x1F5D18u)) {
        return;
    }
    ctx->pc = 0x1F5D18u;
label_1f5d18:
    // 0x1f5d18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f5d18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d1c: 0x2c620021  sltiu       $v0, $v1, 0x21
    ctx->pc = 0x1f5d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x1f5d20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5D20u;
    {
        const bool branch_taken_0x1f5d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D20u;
        // 0x1f5d24: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d20) {
            ctx->pc = 0x1F5D48u;
            goto label_1f5d48;
        }
    }
    ctx->pc = 0x1F5D28u;
    // 0x1f5d28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f5d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f5d2c: 0x24422b00  addiu       $v0, $v0, 0x2B00
    ctx->pc = 0x1f5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11008));
    // 0x1f5d30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f5d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f5d34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f5d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f5d38: 0x800008  jr          $a0
    ctx->pc = 0x1F5D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F5D40u: goto label_1f5d40;
            case 0x1F5D48u: goto label_1f5d48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5D38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F5D40u;
label_1f5d40:
    // 0x1f5d40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f5d44: 0x24512af0  addiu       $s1, $v0, 0x2AF0
    ctx->pc = 0x1f5d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10992));
label_1f5d48:
    // 0x1f5d48: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F5D48u;
    {
        const bool branch_taken_0x1f5d48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D48u;
        // 0x1f5d4c: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d48) {
            ctx->pc = 0x1F5DA0u;
            goto label_1f5da0;
        }
    }
    ctx->pc = 0x1F5D50u;
    // 0x1f5d50: 0x8e02eb18  lw          $v0, -0x14E8($s0)
    ctx->pc = 0x1f5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961944)));
    // 0x1f5d54: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F5D54u;
    {
        const bool branch_taken_0x1f5d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D54u;
        // 0x1f5d58: 0x11102b  sltu        $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d54) {
            ctx->pc = 0x1F5DBCu;
            goto label_1f5dbc;
        }
    }
    ctx->pc = 0x1F5D5Cu;
    // 0x1f5d5c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f5d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f5d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f5d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f5d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f5d78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d7c: 0xc06b5e0  jal         func_1AD780
    ctx->pc = 0x1F5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1F5D84u);
    ctx->pc = 0x1F5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D7Cu;
    // 0x1f5d80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD780u, 0x1F5D7Cu, 0x1F5D84u)) {
        return;
    }
    ctx->pc = 0x1F5D84u;
label_1f5d84:
    // 0x1f5d84: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5D84u;
    {
        const bool branch_taken_0x1f5d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D84u;
        // 0x1f5d88: 0xae02eb18  sw          $v0, -0x14E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294961944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d84) {
            ctx->pc = 0x1F5DB8u;
            goto label_1f5db8;
        }
    }
    ctx->pc = 0x1F5D8Cu;
    // 0x1f5d8c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f5d90: 0xc06c1ee  jal         func_1B07B8
    ctx->pc = 0x1F5D90u;
    SET_GPR_U32(ctx, 31, 0x1F5D98u);
    ctx->pc = 0x1F5D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D90u;
    // 0x1f5d94: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B07B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B07B8u, 0x1F5D90u, 0x1F5D98u)) {
        return;
    }
    ctx->pc = 0x1F5D98u;
label_1f5d98:
    // 0x1f5d98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5D98u;
    {
        const bool branch_taken_0x1f5d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D98u;
        // 0x1f5d9c: 0x11102b  sltu        $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d98) {
            ctx->pc = 0x1F5DBCu;
            goto label_1f5dbc;
        }
    }
    ctx->pc = 0x1F5DA0u;
label_1f5da0:
    // 0x1f5da0: 0x8e04eb18  lw          $a0, -0x14E8($s0)
    ctx->pc = 0x1f5da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961944)));
    // 0x1f5da4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5DA4u;
    {
        const bool branch_taken_0x1f5da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DA4u;
        // 0x1f5da8: 0x11102b  sltu        $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5da4) {
            ctx->pc = 0x1F5DBCu;
            goto label_1f5dbc;
        }
    }
    ctx->pc = 0x1F5DACu;
    // 0x1f5dac: 0xc06b850  jal         func_1AE140
    ctx->pc = 0x1F5DACu;
    SET_GPR_U32(ctx, 31, 0x1F5DB4u);
    ctx->pc = 0x1F5DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5DACu;
    // 0x1f5db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE140u, 0x1F5DACu, 0x1F5DB4u)) {
        return;
    }
    ctx->pc = 0x1F5DB4u;
label_1f5db4:
    // 0x1f5db4: 0xae00eb18  sw          $zero, -0x14E8($s0)
    ctx->pc = 0x1f5db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294961944), GPR_U32(ctx, 0));
label_1f5db8:
    // 0x1f5db8: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x1f5db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1f5dbc:
    // 0x1f5dbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f5dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5dc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f5dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5dc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DC8u;
        // 0x1f5dcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5DD0u;
}
