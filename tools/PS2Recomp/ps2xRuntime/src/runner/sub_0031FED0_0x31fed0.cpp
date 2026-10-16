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

// Function: sub_0031FED0
// Address: 0x31fed0 - 0x31ffd8
void sub_0031FED0_0x31fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FED0_0x31fed0");
#endif

    switch (ctx->pc) {
        case 0x31ff08u: goto label_31ff08;
        case 0x31ff74u: goto label_31ff74;
        case 0x31ff90u: goto label_31ff90;
        case 0x31ff9cu: goto label_31ff9c;
        default: break;
    }

    ctx->pc = 0x31fed0u;

    // 0x31fed0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31fed4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x31fed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fed8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31fedc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31fedcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fee0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31fee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31fee4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31fee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fee8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31fee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31feec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x31feecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fef0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31fef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31fef4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31fef4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31fef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31fefc: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x31fefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x31ff00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31ff00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31ff04: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x31ff04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_31ff08:
    // 0x31ff08: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x31ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31ff0c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31ff0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x31ff10: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x31ff10u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x31ff14: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31ff14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31ff18: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x31ff18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31ff1c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x31ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x31ff20: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x31ff20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31ff24: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x31ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x31ff28: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x31ff28u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x31ff2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31ff30: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x31ff30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x31ff34: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x31ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x31ff38: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x31ff38u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x31ff3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31ff40: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x31ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x31ff44: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x31FF44u;
    {
        const bool branch_taken_0x31ff44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF44u;
        // 0x31ff48: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff44) {
            ctx->pc = 0x31FF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ff08;
        }
    }
    ctx->pc = 0x31FF4Cu;
    // 0x31ff4c: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x31FF4Cu;
    {
        const bool branch_taken_0x31ff4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF4Cu;
        // 0x31ff50: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff4c) {
            ctx->pc = 0x31FFB8u;
            goto label_31ffb8;
        }
    }
    ctx->pc = 0x31FF54u;
    // 0x31ff54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31ff58: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x31ff58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31ff5c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31FF5Cu;
    {
        const bool branch_taken_0x31ff5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF5Cu;
        // 0x31ff60: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff5c) {
            ctx->pc = 0x31FFA4u;
            goto label_31ffa4;
        }
    }
    ctx->pc = 0x31FF64u;
    // 0x31ff64: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x31ff64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31ff68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31ff68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff6c: 0xc0c7f7c  jal         func_31FDF0
    ctx->pc = 0x31FF6Cu;
    SET_GPR_U32(ctx, 31, 0x31FF74u);
    ctx->pc = 0x31FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FF6Cu;
    // 0x31ff70: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDF0u, 0x31FF6Cu, 0x31FF74u)) {
        return;
    }
    ctx->pc = 0x31FF74u;
label_31ff74:
    // 0x31ff74: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x31ff74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x31ff78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31ff78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff7c: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x31ff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x31ff80: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x31ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x31ff84: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x31ff84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31ff88: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x31FF88u;
    SET_GPR_U32(ctx, 31, 0x31FF90u);
    ctx->pc = 0x31FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FF88u;
    // 0x31ff8c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x31FF88u, 0x31FF90u)) {
        return;
    }
    ctx->pc = 0x31FF90u;
label_31ff90:
    // 0x31ff90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31ff90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff94: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x31FF94u;
    SET_GPR_U32(ctx, 31, 0x31FF9Cu);
    ctx->pc = 0x31FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FF94u;
    // 0x31ff98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x31FF94u, 0x31FF9Cu)) {
        return;
    }
    ctx->pc = 0x31FF9Cu;
label_31ff9c:
    // 0x31ff9c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x31ff9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffa0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x31ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_31ffa4:
    // 0x31ffa4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x31ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x31ffa8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31ffa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x31ffac: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x31ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x31ffb0: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x31ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x31ffb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31ffb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ffb8:
    // 0x31ffb8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31ffb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31ffbc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31ffbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ffc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31ffc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ffc4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31ffc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ffc8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31ffc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ffcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ffccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ffd0: 0x3e00008  jr          $ra
    ctx->pc = 0x31FFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFD0u;
        // 0x31ffd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FFD8u;
}
