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

// Function: sub_001C4CE0
// Address: 0x1c4ce0 - 0x1c4db0
void sub_001C4CE0_0x1c4ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4CE0_0x1c4ce0");
#endif

    switch (ctx->pc) {
        case 0x1c4d28u: goto label_1c4d28;
        case 0x1c4d38u: goto label_1c4d38;
        case 0x1c4d48u: goto label_1c4d48;
        case 0x1c4d54u: goto label_1c4d54;
        case 0x1c4d88u: goto label_1c4d88;
        case 0x1c4d98u: goto label_1c4d98;
        default: break;
    }

    ctx->pc = 0x1c4ce0u;

    // 0x1c4ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4ce4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c4ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c4ce8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c4ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c4cec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cf0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4CF0u;
    {
        const bool branch_taken_0x1c4cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CF0u;
        // 0x1c4cf4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cf0) {
            ctx->pc = 0x1C4D0Cu;
            goto label_1c4d0c;
        }
    }
    ctx->pc = 0x1C4CF8u;
    // 0x1c4cf8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c4cfc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4CFCu;
    {
        const bool branch_taken_0x1c4cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CFCu;
        // 0x1c4d00: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cfc) {
            ctx->pc = 0x1C4D0Cu;
            goto label_1c4d0c;
        }
    }
    ctx->pc = 0x1C4D04u;
    // 0x1c4d04: 0x14a20022  bne         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C4D04u;
    {
        const bool branch_taken_0x1c4d04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4d04) {
            ctx->pc = 0x1C4D90u;
            goto label_1c4d90;
        }
    }
    ctx->pc = 0x1C4D0Cu;
label_1c4d0c:
    // 0x1c4d0c: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1c4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1c4d10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4D10u;
    {
        const bool branch_taken_0x1c4d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d10) {
            ctx->pc = 0x1C4D30u;
            goto label_1c4d30;
        }
    }
    ctx->pc = 0x1C4D18u;
    // 0x1c4d18: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4D18u;
    {
        const bool branch_taken_0x1c4d18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D18u;
        // 0x1c4d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d18) {
            ctx->pc = 0x1C4D30u;
            goto label_1c4d30;
        }
    }
    ctx->pc = 0x1C4D20u;
    // 0x1c4d20: 0xc06ba6c  jal         func_1AE9B0
    ctx->pc = 0x1C4D20u;
    SET_GPR_U32(ctx, 31, 0x1C4D28u);
    ctx->pc = 0x1C4D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D20u;
    // 0x1c4d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C4D20u, 0x1C4D28u)) {
        return;
    }
    ctx->pc = 0x1C4D28u;
label_1c4d28:
    // 0x1c4d28: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C4D28u;
    {
        const bool branch_taken_0x1c4d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D28u;
        // 0x1c4d2c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d28) {
            ctx->pc = 0x1C4D9Cu;
            goto label_1c4d9c;
        }
    }
    ctx->pc = 0x1C4D30u;
label_1c4d30:
    // 0x1c4d30: 0xc07136c  jal         func_1C4DB0
    ctx->pc = 0x1C4D30u;
    SET_GPR_U32(ctx, 31, 0x1C4D38u);
    ctx->pc = 0x1C4D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D30u;
    // 0x1c4d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C4DB0u, 0x1C4D30u, 0x1C4D38u)) {
        return;
    }
    ctx->pc = 0x1C4D38u;
label_1c4d38:
    // 0x1c4d38: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x1c4d38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c4d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d40: 0xc0713a0  jal         func_1C4E80
    ctx->pc = 0x1C4D40u;
    SET_GPR_U32(ctx, 31, 0x1C4D48u);
    ctx->pc = 0x1C4D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D40u;
    // 0x1c4d44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C4E80u, 0x1C4D40u, 0x1C4D48u)) {
        return;
    }
    ctx->pc = 0x1C4D48u;
label_1c4d48:
    // 0x1c4d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d4c: 0xc0713d2  jal         func_1C4F48
    ctx->pc = 0x1C4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1C4D54u);
    ctx->pc = 0x1C4D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D4Cu;
    // 0x1c4d50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C4F48u, 0x1C4D4Cu, 0x1C4D54u)) {
        return;
    }
    ctx->pc = 0x1C4D54u;
label_1c4d54:
    // 0x1c4d54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1c4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1c4d58: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c4d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c4d5c: 0x8c6343e0  lw          $v1, 0x43E0($v1)
    ctx->pc = 0x1c4d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B43E0u));
    // 0x1c4d60: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1c4d60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1c4d64: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4D64u;
    {
        const bool branch_taken_0x1c4d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D64u;
        // 0x1c4d68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d64) {
            ctx->pc = 0x1C4D9Cu;
            goto label_1c4d9c;
        }
    }
    ctx->pc = 0x1C4D6Cu;
    // 0x1c4d6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4d70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4D70u;
    {
        const bool branch_taken_0x1c4d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D70u;
        // 0x1c4d74: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d70) {
            ctx->pc = 0x1C4DA0u;
            goto label_1c4da0;
        }
    }
    ctx->pc = 0x1C4D78u;
    // 0x1c4d78: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c4d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1c4d7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c4d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d80: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1C4D80u;
    SET_GPR_U32(ctx, 31, 0x1C4D88u);
    ctx->pc = 0x1C4D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D80u;
    // 0x1c4d84: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C4D80u, 0x1C4D88u)) {
        return;
    }
    ctx->pc = 0x1C4D88u;
label_1c4d88:
    // 0x1c4d88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4D88u;
    {
        const bool branch_taken_0x1c4d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D88u;
        // 0x1c4d8c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d88) {
            ctx->pc = 0x1C4D9Cu;
            goto label_1c4d9c;
        }
    }
    ctx->pc = 0x1C4D90u;
label_1c4d90:
    // 0x1c4d90: 0xc06ba6c  jal         func_1AE9B0
    ctx->pc = 0x1C4D90u;
    SET_GPR_U32(ctx, 31, 0x1C4D98u);
    ctx->pc = 0x1C4D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D90u;
    // 0x1c4d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C4D90u, 0x1C4D98u)) {
        return;
    }
    ctx->pc = 0x1C4D98u;
label_1c4d98:
    // 0x1c4d98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c4d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4d9c:
    // 0x1c4d9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c4d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c4da0:
    // 0x1c4da0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4da4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DA4u;
        // 0x1c4da8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4DACu;
    // 0x1c4dac: 0x0  nop
    ctx->pc = 0x1c4dacu;
    // NOP
    ctx->pc = 0x1c4db0u;
}
