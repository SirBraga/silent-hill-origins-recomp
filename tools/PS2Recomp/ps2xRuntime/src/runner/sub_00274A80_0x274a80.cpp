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

// Function: sub_00274A80
// Address: 0x274a80 - 0x274b58
void sub_00274A80_0x274a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274A80_0x274a80");
#endif

    switch (ctx->pc) {
        case 0x274ac0u: goto label_274ac0;
        case 0x274ac8u: goto label_274ac8;
        case 0x274af0u: goto label_274af0;
        case 0x274af8u: goto label_274af8;
        case 0x274b28u: goto label_274b28;
        case 0x274b30u: goto label_274b30;
        case 0x274b44u: goto label_274b44;
        default: break;
    }

    ctx->pc = 0x274a80u;

    // 0x274a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x274a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x274a84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x274a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x274a88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x274a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x274a8c: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x274a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x274a90: 0x8ca40058  lw          $a0, 0x58($a1)
    ctx->pc = 0x274a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x274a94: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x274a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x274a98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x274a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a9c: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x274a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x274aa0: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x274aa0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x274aa4: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x274aa4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x274aa8: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x274aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x274aac: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x274aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x274ab0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x274ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x274ab4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x274ab4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x274ab8: 0xc0c84e8  jal         func_3213A0
    ctx->pc = 0x274AB8u;
    SET_GPR_U32(ctx, 31, 0x274AC0u);
    ctx->pc = 0x274ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274AB8u;
    // 0x274abc: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3213A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3213A0u, 0x274AB8u, 0x274AC0u)) {
        return;
    }
    ctx->pc = 0x274AC0u;
label_274ac0:
    // 0x274ac0: 0xc0c84e0  jal         func_321380
    ctx->pc = 0x274AC0u;
    SET_GPR_U32(ctx, 31, 0x274AC8u);
    ctx->pc = 0x274AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274AC0u;
    // 0x274ac4: 0x8f848f80  lw          $a0, -0x7080($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321380u, 0x274AC0u, 0x274AC8u)) {
        return;
    }
    ctx->pc = 0x274AC8u;
label_274ac8:
    // 0x274ac8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x274ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274acc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x274accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x274ad0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x274AD0u;
    {
        const bool branch_taken_0x274ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AD0u;
        // 0x274ad4: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ad0) {
            ctx->pc = 0x274B14u;
            goto label_274b14;
        }
    }
    ctx->pc = 0x274AD8u;
    // 0x274ad8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x274ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x274adc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x274adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ae0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x274ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x274ae4: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x274AE4u;
    {
        const bool branch_taken_0x274ae4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x274AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AE4u;
        // 0x274ae8: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ae4) {
            ctx->pc = 0x274B28u;
            goto label_274b28;
        }
    }
    ctx->pc = 0x274AECu;
    // 0x274aec: 0x0  nop
    ctx->pc = 0x274aecu;
    // NOP
label_274af0:
    // 0x274af0: 0xc0c84d4  jal         func_321350
    ctx->pc = 0x274AF0u;
    SET_GPR_U32(ctx, 31, 0x274AF8u);
    ctx->pc = 0x274AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274AF0u;
    // 0x274af4: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321350u, 0x274AF0u, 0x274AF8u)) {
        return;
    }
    ctx->pc = 0x274AF8u;
label_274af8:
    // 0x274af8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x274af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x274afc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x274afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x274b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x274b04: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x274B04u;
    {
        const bool branch_taken_0x274b04 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x274B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B04u;
        // 0x274b08: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b04) {
            ctx->pc = 0x274AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274af0;
        }
    }
    ctx->pc = 0x274B0Cu;
    // 0x274b0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274B0Cu;
    {
        const bool branch_taken_0x274b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b0c) {
            ctx->pc = 0x274B28u;
            goto label_274b28;
        }
    }
    ctx->pc = 0x274B14u;
label_274b14:
    // 0x274b14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x274b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274b18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274B18u;
    {
        const bool branch_taken_0x274b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274b18) {
            ctx->pc = 0x274B28u;
            goto label_274b28;
        }
    }
    ctx->pc = 0x274B20u;
    // 0x274b20: 0xc0c84d4  jal         func_321350
    ctx->pc = 0x274B20u;
    SET_GPR_U32(ctx, 31, 0x274B28u);
    ctx->pc = 0x274B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B20u;
    // 0x274b24: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321350u, 0x274B20u, 0x274B28u)) {
        return;
    }
    ctx->pc = 0x274B28u;
label_274b28:
    // 0x274b28: 0xc0c84d4  jal         func_321350
    ctx->pc = 0x274B28u;
    SET_GPR_U32(ctx, 31, 0x274B30u);
    ctx->pc = 0x274B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B28u;
    // 0x274b2c: 0x8f848f80  lw          $a0, -0x7080($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321350u, 0x274B28u, 0x274B30u)) {
        return;
    }
    ctx->pc = 0x274B30u;
label_274b30:
    // 0x274b30: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x274b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x274b34: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x274B34u;
    {
        const bool branch_taken_0x274b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b34) {
            ctx->pc = 0x274B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274B34u;
            // 0x274b38: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274B48u;
            goto label_274b48;
        }
    }
    ctx->pc = 0x274B3Cu;
    // 0x274b3c: 0xc09d456  jal         func_275158
    ctx->pc = 0x274B3Cu;
    SET_GPR_U32(ctx, 31, 0x274B44u);
    ctx->pc = 0x274B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B3Cu;
    // 0x274b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275158u, 0x274B3Cu, 0x274B44u)) {
        return;
    }
    ctx->pc = 0x274B44u;
label_274b44:
    // 0x274b44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x274b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_274b48:
    // 0x274b48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x274b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x274B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B4Cu;
        // 0x274b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274B54u;
    // 0x274b54: 0x0  nop
    ctx->pc = 0x274b54u;
    // NOP
    ctx->pc = 0x274b58u;
}
