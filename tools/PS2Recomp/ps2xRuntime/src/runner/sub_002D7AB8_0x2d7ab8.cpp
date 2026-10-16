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

// Function: sub_002D7AB8
// Address: 0x2d7ab8 - 0x2d7b98
void sub_002D7AB8_0x2d7ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7AB8_0x2d7ab8");
#endif

    switch (ctx->pc) {
        case 0x2d7b00u: goto label_2d7b00;
        case 0x2d7b1cu: goto label_2d7b1c;
        case 0x2d7b50u: goto label_2d7b50;
        default: break;
    }

    ctx->pc = 0x2d7ab8u;

    // 0x2d7ab8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d7ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d7abc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d7abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2d7ac0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2d7ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2d7ac4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d7ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ac8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2d7ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2d7acc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d7accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ad0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d7ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d7ad4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d7ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ad8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2d7ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2d7adc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2d7adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2d7ae0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d7ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d7ae4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d7ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d7ae8: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2d7ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d7aec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D7AECu;
    {
        const bool branch_taken_0x2d7aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AECu;
        // 0x2d7af0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7aec) {
            ctx->pc = 0x2D7B68u;
            goto label_2d7b68;
        }
    }
    ctx->pc = 0x2D7AF4u;
    // 0x2d7af4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d7af4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7af8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d7af8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7afc: 0x0  nop
    ctx->pc = 0x2d7afcu;
    // NOP
label_2d7b00:
    // 0x2d7b00: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2d7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2d7b04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d7b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7b08: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d7b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b0c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2d7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d7b10: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2d7b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d7b14: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2D7B14u;
    SET_GPR_U32(ctx, 31, 0x2D7B1Cu);
    ctx->pc = 0x2D7B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B14u;
    // 0x2d7b18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2D7B14u, 0x2D7B1Cu)) {
        return;
    }
    ctx->pc = 0x2D7B1Cu;
label_2d7b1c:
    // 0x2d7b1c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7B1Cu;
    {
        const bool branch_taken_0x2d7b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7b1c) {
            ctx->pc = 0x2D7B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7B1Cu;
            // 0x2d7b20: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7B54u;
            goto label_2d7b54;
        }
    }
    ctx->pc = 0x2D7B24u;
    // 0x2d7b24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d7b24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d7b28: 0x16350006  bne         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7B28u;
    {
        const bool branch_taken_0x2d7b28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x2D7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B28u;
        // 0x2d7b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b28) {
            ctx->pc = 0x2D7B44u;
            goto label_2d7b44;
        }
    }
    ctx->pc = 0x2D7B30u;
    // 0x2d7b30: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2d7b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7b34: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2d7b34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7b38: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2d7b38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2d7b3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7B3Cu;
    {
        const bool branch_taken_0x2d7b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B3Cu;
        // 0x2d7b40: 0x7e030010  sq          $v1, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b3c) {
            ctx->pc = 0x2D7B50u;
            goto label_2d7b50;
        }
    }
    ctx->pc = 0x2D7B44u;
label_2d7b44:
    // 0x2d7b44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d7b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b48: 0xc0ad05a  jal         func_2B4168
    ctx->pc = 0x2D7B48u;
    SET_GPR_U32(ctx, 31, 0x2D7B50u);
    ctx->pc = 0x2D7B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B48u;
    // 0x2d7b4c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4168u, 0x2D7B48u, 0x2D7B50u)) {
        return;
    }
    ctx->pc = 0x2D7B50u;
label_2d7b50:
    // 0x2d7b50: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d7b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d7b54:
    // 0x2d7b54: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d7b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d7b58: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2d7b58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d7b5c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2d7b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d7b60: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2D7B60u;
    {
        const bool branch_taken_0x2d7b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B60u;
        // 0x2d7b64: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b60) {
            ctx->pc = 0x2D7B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7b00;
        }
    }
    ctx->pc = 0x2D7B68u;
label_2d7b68:
    // 0x2d7b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b6c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2d7b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7b70: 0x211100b  movn        $v0, $s0, $s1
    ctx->pc = 0x2d7b70u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
    // 0x2d7b74: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2d7b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7b78: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d7b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7b7c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2d7b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7b80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d7b80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7b84: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2d7b84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7b88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d7b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B8Cu;
        // 0x2d7b90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7B94u;
    // 0x2d7b94: 0x0  nop
    ctx->pc = 0x2d7b94u;
    // NOP
    ctx->pc = 0x2d7b98u;
}
