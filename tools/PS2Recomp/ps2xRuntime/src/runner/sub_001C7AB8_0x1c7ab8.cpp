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

// Function: sub_001C7AB8
// Address: 0x1c7ab8 - 0x1c7b70
void sub_001C7AB8_0x1c7ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7AB8_0x1c7ab8");
#endif

    switch (ctx->pc) {
        case 0x1c7ad4u: goto label_1c7ad4;
        case 0x1c7ae8u: goto label_1c7ae8;
        case 0x1c7b20u: goto label_1c7b20;
        case 0x1c7b58u: goto label_1c7b58;
        default: break;
    }

    ctx->pc = 0x1c7ab8u;

    // 0x1c7ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7abc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c7abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c7ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7acc: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1C7ACCu;
    SET_GPR_U32(ctx, 31, 0x1C7AD4u);
    ctx->pc = 0x1C7AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7ACCu;
    // 0x1c7ad0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1C7ACCu, 0x1C7AD4u)) {
        return;
    }
    ctx->pc = 0x1C7AD4u;
label_1c7ad4:
    // 0x1c7ad4: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1c7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1c7ad8: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7AD8u;
    {
        const bool branch_taken_0x1c7ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7ad8) {
            ctx->pc = 0x1C7ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7AD8u;
            // 0x1c7adc: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7B10u;
            goto label_1c7b10;
        }
    }
    ctx->pc = 0x1C7AE0u;
    // 0x1c7ae0: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1C7AE0u;
    SET_GPR_U32(ctx, 31, 0x1C7AE8u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1C7AE0u, 0x1C7AE8u)) {
        return;
    }
    ctx->pc = 0x1C7AE8u;
label_1c7ae8:
    // 0x1c7ae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c7ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7aec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7AECu;
    {
        const bool branch_taken_0x1c7aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AECu;
        // 0x1c7af0: 0xae030270  sw          $v1, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7aec) {
            ctx->pc = 0x1C7B0Cu;
            goto label_1c7b0c;
        }
    }
    ctx->pc = 0x1C7AF4u;
    // 0x1c7af4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7AF4u;
    {
        const bool branch_taken_0x1c7af4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AF4u;
        // 0x1c7af8: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7af4) {
            ctx->pc = 0x1C7B04u;
            goto label_1c7b04;
        }
    }
    ctx->pc = 0x1C7AFCu;
    // 0x1c7afc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7AFCu;
    {
        const bool branch_taken_0x1c7afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AFCu;
        // 0x1c7b00: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7afc) {
            ctx->pc = 0x1C7B08u;
            goto label_1c7b08;
        }
    }
    ctx->pc = 0x1C7B04u;
label_1c7b04:
    // 0x1c7b04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c7b08:
    // 0x1c7b08: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1c7b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1c7b0c:
    // 0x1c7b0c: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x1c7b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1c7b10:
    // 0x1c7b10: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7B10u;
    {
        const bool branch_taken_0x1c7b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b10) {
            ctx->pc = 0x1C7B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7B10u;
            // 0x1c7b14: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7B48u;
            goto label_1c7b48;
        }
    }
    ctx->pc = 0x1C7B18u;
    // 0x1c7b18: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1C7B18u;
    SET_GPR_U32(ctx, 31, 0x1C7B20u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1C7B18u, 0x1C7B20u)) {
        return;
    }
    ctx->pc = 0x1C7B20u;
label_1c7b20:
    // 0x1c7b20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c7b20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b24: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7B24u;
    {
        const bool branch_taken_0x1c7b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B24u;
        // 0x1c7b28: 0xae030274  sw          $v1, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b24) {
            ctx->pc = 0x1C7B44u;
            goto label_1c7b44;
        }
    }
    ctx->pc = 0x1C7B2Cu;
    // 0x1c7b2c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7B2Cu;
    {
        const bool branch_taken_0x1c7b2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B2Cu;
        // 0x1c7b30: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b2c) {
            ctx->pc = 0x1C7B3Cu;
            goto label_1c7b3c;
        }
    }
    ctx->pc = 0x1C7B34u;
    // 0x1c7b34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7B34u;
    {
        const bool branch_taken_0x1c7b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B34u;
        // 0x1c7b38: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b34) {
            ctx->pc = 0x1C7B40u;
            goto label_1c7b40;
        }
    }
    ctx->pc = 0x1C7B3Cu;
label_1c7b3c:
    // 0x1c7b3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c7b40:
    // 0x1c7b40: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1c7b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1c7b44:
    // 0x1c7b44: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c7b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c7b48:
    // 0x1c7b48: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7B48u;
    {
        const bool branch_taken_0x1c7b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B48u;
        // 0x1c7b4c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b48) {
            ctx->pc = 0x1C7B5Cu;
            goto label_1c7b5c;
        }
    }
    ctx->pc = 0x1C7B50u;
    // 0x1c7b50: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1C7B50u;
    SET_GPR_U32(ctx, 31, 0x1C7B58u);
    ctx->pc = 0x1C7B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B50u;
    // 0x1c7b54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D90u, 0x1C7B50u, 0x1C7B58u)) {
        return;
    }
    ctx->pc = 0x1C7B58u;
label_1c7b58:
    // 0x1c7b58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c7b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7b5c:
    // 0x1c7b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B64u;
        // 0x1c7b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7B6Cu;
    // 0x1c7b6c: 0x0  nop
    ctx->pc = 0x1c7b6cu;
    // NOP
    ctx->pc = 0x1c7b70u;
}
