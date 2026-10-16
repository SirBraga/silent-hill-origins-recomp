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

// Function: sub_00248B20
// Address: 0x248b20 - 0x248be0
void sub_00248B20_0x248b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248B20_0x248b20");
#endif

    switch (ctx->pc) {
        case 0x248b3cu: goto label_248b3c;
        case 0x248b68u: goto label_248b68;
        case 0x248b8cu: goto label_248b8c;
        case 0x248ba8u: goto label_248ba8;
        default: break;
    }

    ctx->pc = 0x248b20u;

    // 0x248b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248b24: 0x8f828518  lw          $v0, -0x7AE8($gp)
    ctx->pc = 0x248b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935832)));
    // 0x248b28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x248b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x248b2c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x248B2Cu;
    {
        const bool branch_taken_0x248b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B2Cu;
        // 0x248b30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b2c) {
            ctx->pc = 0x248BC8u;
            goto label_248bc8;
        }
    }
    ctx->pc = 0x248B34u;
    // 0x248b34: 0xc0925f8  jal         func_2497E0
    ctx->pc = 0x248B34u;
    SET_GPR_U32(ctx, 31, 0x248B3Cu);
    ctx->pc = 0x248B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B34u;
    // 0x248b38: 0x8f848510  lw          $a0, -0x7AF0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2497E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2497E0u, 0x248B34u, 0x248B3Cu)) {
        return;
    }
    ctx->pc = 0x248B3Cu;
label_248b3c:
    // 0x248b3c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x248B3Cu;
    {
        const bool branch_taken_0x248b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B3Cu;
        // 0x248b40: 0xaf82851c  sw          $v0, -0x7AE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b3c) {
            ctx->pc = 0x248BC8u;
            goto label_248bc8;
        }
    }
    ctx->pc = 0x248B44u;
    // 0x248b44: 0x8f858520  lw          $a1, -0x7AE0($gp)
    ctx->pc = 0x248b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935840)));
    // 0x248b48: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x248b48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x248b4c: 0x8f878524  lw          $a3, -0x7ADC($gp)
    ctx->pc = 0x248b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935844)));
    // 0x248b50: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x248b50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x248b54: 0x25084180  addiu       $t0, $t0, 0x4180
    ctx->pc = 0x248b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16768));
    // 0x248b58: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x248b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x248b5c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x248b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x248b60: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x248B60u;
    SET_GPR_U32(ctx, 31, 0x248B68u);
    ctx->pc = 0x248B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B60u;
    // 0x248b64: 0x35290409  ori         $t1, $t1, 0x409 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1033);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x248B60u, 0x248B68u)) {
        return;
    }
    ctx->pc = 0x248B68u;
label_248b68:
    // 0x248b68: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x248b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x248b6c: 0x8ca54190  lw          $a1, 0x4190($a1)
    ctx->pc = 0x248b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4190u));
    // 0x248b70: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x248b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x248b74: 0x24700fc8  addiu       $s0, $v1, 0xFC8
    ctx->pc = 0x248b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x248b78: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x248b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x248b7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248B7Cu;
    {
        const bool branch_taken_0x248b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B7Cu;
        // 0x248b80: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b7c) {
            ctx->pc = 0x248B94u;
            goto label_248b94;
        }
    }
    ctx->pc = 0x248B84u;
    // 0x248b84: 0xc0925d4  jal         func_249750
    ctx->pc = 0x248B84u;
    SET_GPR_U32(ctx, 31, 0x248B8Cu);
    ctx->pc = 0x248B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B84u;
    // 0x248b88: 0x8f84851c  lw          $a0, -0x7AE4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249750u, 0x248B84u, 0x248B8Cu)) {
        return;
    }
    ctx->pc = 0x248B8Cu;
label_248b8c:
    // 0x248b8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x248B8Cu;
    {
        const bool branch_taken_0x248b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B8Cu;
        // 0x248b90: 0xaf80851c  sw          $zero, -0x7AE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b8c) {
            ctx->pc = 0x248BC8u;
            goto label_248bc8;
        }
    }
    ctx->pc = 0x248B94u;
label_248b94:
    // 0x248b94: 0x8f828514  lw          $v0, -0x7AEC($gp)
    ctx->pc = 0x248b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935828)));
    // 0x248b98: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x248b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x248b9c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x248b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x248ba0: 0xc092632  jal         func_2498C8
    ctx->pc = 0x248BA0u;
    SET_GPR_U32(ctx, 31, 0x248BA8u);
    ctx->pc = 0x248BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248BA0u;
    // 0x248ba4: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2498C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2498C8u, 0x248BA0u, 0x248BA8u)) {
        return;
    }
    ctx->pc = 0x248BA8u;
label_248ba8:
    // 0x248ba8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x248bac: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x248bacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4190u));
    // 0x248bb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248bb4: 0xaf828518  sw          $v0, -0x7AE8($gp)
    ctx->pc = 0x248bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935832), GPR_U32(ctx, 2));
    // 0x248bb8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x248bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x248bbc: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x248bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x248bc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x248BC0u;
    {
        const bool branch_taken_0x248bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BC0u;
        // 0x248bc4: 0xac600034  sw          $zero, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bc0) {
            ctx->pc = 0x248BCCu;
            goto label_248bcc;
        }
    }
    ctx->pc = 0x248BC8u;
label_248bc8:
    // 0x248bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x248bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248bcc:
    // 0x248bcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x248bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x248BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BD4u;
        // 0x248bd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248BDCu;
    // 0x248bdc: 0x0  nop
    ctx->pc = 0x248bdcu;
    // NOP
    ctx->pc = 0x248be0u;
}
