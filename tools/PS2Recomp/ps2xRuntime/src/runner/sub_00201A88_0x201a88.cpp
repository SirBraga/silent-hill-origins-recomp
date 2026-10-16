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

// Function: sub_00201A88
// Address: 0x201a88 - 0x201b70
void sub_00201A88_0x201a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201A88_0x201a88");
#endif

    switch (ctx->pc) {
        case 0x201abcu: goto label_201abc;
        case 0x201ad0u: goto label_201ad0;
        case 0x201b0cu: goto label_201b0c;
        case 0x201b28u: goto label_201b28;
        case 0x201b48u: goto label_201b48;
        default: break;
    }

    ctx->pc = 0x201a88u;

    // 0x201a88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x201a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x201a8c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x201a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x201a90: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x201a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x201a94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a98: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x201a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x201a9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201aa0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x201aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x201aa4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x201aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201aa8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x201aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x201aac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x201aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x201ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201ab4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x201AB4u;
    SET_GPR_U32(ctx, 31, 0x201ABCu);
    ctx->pc = 0x201AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201AB4u;
    // 0x201ab8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x201AB4u, 0x201ABCu)) {
        return;
    }
    ctx->pc = 0x201ABCu;
label_201abc:
    // 0x201abc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x201abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ac0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x201ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x201ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ac8: 0xc093546  jal         func_24D518
    ctx->pc = 0x201AC8u;
    SET_GPR_U32(ctx, 31, 0x201AD0u);
    ctx->pc = 0x201ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201AC8u;
    // 0x201acc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x201AC8u, 0x201AD0u)) {
        return;
    }
    ctx->pc = 0x201AD0u;
label_201ad0:
    // 0x201ad0: 0x26550004  addiu       $s5, $s2, 0x4
    ctx->pc = 0x201ad0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x201ad4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x201ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x201ad8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201adc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ae0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ae4: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x201ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x201ae8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x201ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x201aec: 0x26140014  addiu       $s4, $s0, 0x14
    ctx->pc = 0x201aecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x201af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201af4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x201af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x201af8: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x201af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x201afc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x201afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201b00: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x201b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x201b04: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x201B04u;
    SET_GPR_U32(ctx, 31, 0x201B0Cu);
    ctx->pc = 0x201B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B04u;
    // 0x201b08: 0x24530004  addiu       $s3, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x201B04u, 0x201B0Cu)) {
        return;
    }
    ctx->pc = 0x201B0Cu;
label_201b0c:
    // 0x201b0c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x201B0Cu;
    {
        const bool branch_taken_0x201b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B0Cu;
        // 0x201b10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b0c) {
            ctx->pc = 0x201B40u;
            goto label_201b40;
        }
    }
    ctx->pc = 0x201B14u;
    // 0x201b14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b18: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x201b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b1c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x201b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b20: 0xc08050a  jal         func_201428
    ctx->pc = 0x201B20u;
    SET_GPR_U32(ctx, 31, 0x201B28u);
    ctx->pc = 0x201B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B20u;
    // 0x201b24: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201428u, 0x201B20u, 0x201B28u)) {
        return;
    }
    ctx->pc = 0x201B28u;
label_201b28:
    // 0x201b28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x201b28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x201B2Cu;
    {
        const bool branch_taken_0x201b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b2c) {
            ctx->pc = 0x201B40u;
            goto label_201b40;
        }
    }
    ctx->pc = 0x201B34u;
    // 0x201b34: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x201b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x201b38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x201b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x201b3c: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x201b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_201b40:
    // 0x201b40: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x201B40u;
    SET_GPR_U32(ctx, 31, 0x201B48u);
    ctx->pc = 0x201B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B40u;
    // 0x201b44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x201B40u, 0x201B48u)) {
        return;
    }
    ctx->pc = 0x201B48u;
label_201b48:
    // 0x201b48: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x201b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201b4c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x201b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201b50: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x201b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201b54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201b58: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x201b58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201b5c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x201b5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201b64: 0x3e00008  jr          $ra
    ctx->pc = 0x201B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B64u;
        // 0x201b68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B6Cu;
    // 0x201b6c: 0x0  nop
    ctx->pc = 0x201b6cu;
    // NOP
    ctx->pc = 0x201b70u;
}
