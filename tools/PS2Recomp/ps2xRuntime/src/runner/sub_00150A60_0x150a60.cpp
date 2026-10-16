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

// Function: sub_00150A60
// Address: 0x150a60 - 0x150b78
void sub_00150A60_0x150a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150A60_0x150a60");
#endif

    switch (ctx->pc) {
        case 0x150a98u: goto label_150a98;
        case 0x150b04u: goto label_150b04;
        case 0x150b0cu: goto label_150b0c;
        case 0x150b30u: goto label_150b30;
        case 0x150b48u: goto label_150b48;
        case 0x150b60u: goto label_150b60;
        default: break;
    }

    ctx->pc = 0x150a60u;

    // 0x150a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150a64: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x150a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x150a68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150a6c: 0x24632318  addiu       $v1, $v1, 0x2318
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8984));
    // 0x150a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150a7c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x150a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x150a80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x150a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x150a84: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x150a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x150a88: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x150a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x150a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150a90: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x150a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x150a94: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x150a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_150a98:
    // 0x150a98: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x150a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x150a9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x150a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x150aa0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x150aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x150aa4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x150aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x150aa8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x150aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x150aac: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x150aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x150ab0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x150ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x150ab4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x150ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x150ab8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x150ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x150abc: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x150abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x150ac0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x150ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x150ac4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x150ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x150ac8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x150ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x150acc: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x150accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x150ad0: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x150ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x150ad4: 0xac4000d0  sw          $zero, 0xD0($v0)
    ctx->pc = 0x150ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    // 0x150ad8: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x150ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x150adc: 0x1464ffee  bne         $v1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x150ADCu;
    {
        const bool branch_taken_0x150adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x150AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150ADCu;
        // 0x150ae0: 0x244200d8  addiu       $v0, $v0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150adc) {
            ctx->pc = 0x150A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150a98;
        }
    }
    ctx->pc = 0x150AE4u;
    // 0x150ae4: 0xae00288c  sw          $zero, 0x288C($s0)
    ctx->pc = 0x150ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10380), GPR_U32(ctx, 0));
    // 0x150ae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x150ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150aec: 0xae002890  sw          $zero, 0x2890($s0)
    ctx->pc = 0x150aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10384), GPR_U32(ctx, 0));
    // 0x150af0: 0x24062880  addiu       $a2, $zero, 0x2880
    ctx->pc = 0x150af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x150af4: 0xae002894  sw          $zero, 0x2894($s0)
    ctx->pc = 0x150af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10388), GPR_U32(ctx, 0));
    // 0x150af8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x150af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x150afc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x150AFCu;
    SET_GPR_U32(ctx, 31, 0x150B04u);
    ctx->pc = 0x150B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AFCu;
    // 0x150b00: 0xae002898  sw          $zero, 0x2898($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 10392), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x150AFCu, 0x150B04u)) {
        return;
    }
    ctx->pc = 0x150B04u;
label_150b04:
    // 0x150b04: 0xc054552  jal         func_151548
    ctx->pc = 0x150B04u;
    SET_GPR_U32(ctx, 31, 0x150B0Cu);
    ctx->pc = 0x150B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B04u;
    // 0x150b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151548u, 0x150B04u, 0x150B0Cu)) {
        return;
    }
    ctx->pc = 0x150B0Cu;
label_150b0c:
    // 0x150b0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b14: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x150b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x150b18: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x150b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x150b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b20: 0xe6002888  swc1        $f0, 0x2888($s0)
    ctx->pc = 0x150b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10376), bits); }
    // 0x150b24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b28: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x150B28u;
    SET_GPR_U32(ctx, 31, 0x150B30u);
    ctx->pc = 0x150B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B28u;
    // 0x150b2c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x150B28u, 0x150B30u)) {
        return;
    }
    ctx->pc = 0x150B30u;
label_150b30:
    // 0x150b30: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x150b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x150b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b38: 0x24a5f888  addiu       $a1, $a1, -0x778
    ctx->pc = 0x150b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    // 0x150b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b40: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x150B40u;
    SET_GPR_U32(ctx, 31, 0x150B48u);
    ctx->pc = 0x150B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B40u;
    // 0x150b44: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x150B40u, 0x150B48u)) {
        return;
    }
    ctx->pc = 0x150B48u;
label_150b48:
    // 0x150b48: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x150b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x150b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b50: 0x24a5f8e8  addiu       $a1, $a1, -0x718
    ctx->pc = 0x150b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965480));
    // 0x150b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b58: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x150B58u;
    SET_GPR_U32(ctx, 31, 0x150B60u);
    ctx->pc = 0x150B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B58u;
    // 0x150b5c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x150B58u, 0x150B60u)) {
        return;
    }
    ctx->pc = 0x150B60u;
label_150b60:
    // 0x150b60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x150b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150b68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x150B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B6Cu;
        // 0x150b70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150B74u;
    // 0x150b74: 0x0  nop
    ctx->pc = 0x150b74u;
    // NOP
    ctx->pc = 0x150b78u;
}
