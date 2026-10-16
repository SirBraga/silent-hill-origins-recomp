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

// Function: sub_0016BA58
// Address: 0x16ba58 - 0x16bb70
void sub_0016BA58_0x16ba58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BA58_0x16ba58");
#endif

    switch (ctx->pc) {
        case 0x16baacu: goto label_16baac;
        case 0x16bab8u: goto label_16bab8;
        case 0x16bac0u: goto label_16bac0;
        case 0x16bad4u: goto label_16bad4;
        case 0x16baf0u: goto label_16baf0;
        case 0x16bb00u: goto label_16bb00;
        case 0x16bb14u: goto label_16bb14;
        case 0x16bb24u: goto label_16bb24;
        case 0x16bb30u: goto label_16bb30;
        case 0x16bb3cu: goto label_16bb3c;
        case 0x16bb48u: goto label_16bb48;
        default: break;
    }

    ctx->pc = 0x16ba58u;

    // 0x16ba58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16ba58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16ba5c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16ba60: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16ba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16ba64: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16ba68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ba68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba6c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x16ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x16ba70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16ba70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16ba74: 0x24634800  addiu       $v1, $v1, 0x4800
    ctx->pc = 0x16ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18432));
    // 0x16ba78: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x16ba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x16ba7c: 0x24424820  addiu       $v0, $v0, 0x4820
    ctx->pc = 0x16ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18464));
    // 0x16ba80: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x16ba80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x16ba84: 0x26130044  addiu       $s3, $s0, 0x44
    ctx->pc = 0x16ba84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16ba88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16ba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16ba8c: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x16ba8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16ba90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ba94: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x16ba94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba98: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16ba9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16ba9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16baa0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x16baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x16baa4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16BAA4u;
    SET_GPR_U32(ctx, 31, 0x16BAACu);
    ctx->pc = 0x16BAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BAA4u;
    // 0x16baa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16BAA4u, 0x16BAACu)) {
        return;
    }
    ctx->pc = 0x16BAACu;
label_16baac:
    // 0x16baac: 0x2614004c  addiu       $s4, $s0, 0x4C
    ctx->pc = 0x16baacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x16bab0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16BAB0u;
    SET_GPR_U32(ctx, 31, 0x16BAB8u);
    ctx->pc = 0x16BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BAB0u;
    // 0x16bab4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16BAB0u, 0x16BAB8u)) {
        return;
    }
    ctx->pc = 0x16BAB8u;
label_16bab8:
    // 0x16bab8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16BAB8u;
    SET_GPR_U32(ctx, 31, 0x16BAC0u);
    ctx->pc = 0x16BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BAB8u;
    // 0x16babc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16BAB8u, 0x16BAC0u)) {
        return;
    }
    ctx->pc = 0x16BAC0u;
label_16bac0:
    // 0x16bac0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x16bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x16bac4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BAC4u;
    {
        const bool branch_taken_0x16bac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAC4u;
        // 0x16bac8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bac4) {
            ctx->pc = 0x16BADCu;
            goto label_16badc;
        }
    }
    ctx->pc = 0x16BACCu;
    // 0x16bacc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x16BACCu;
    SET_GPR_U32(ctx, 31, 0x16BAD4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x16BACCu, 0x16BAD4u)) {
        return;
    }
    ctx->pc = 0x16BAD4u;
label_16bad4:
    // 0x16bad4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x16bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x16bad8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_16badc:
    // 0x16badc: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x16badcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x16bae0: 0x24528880  addiu       $s2, $v0, -0x7780
    ctx->pc = 0x16bae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936704));
    // 0x16bae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bae8: 0xc07fcce  jal         func_1FF338
    ctx->pc = 0x16BAE8u;
    SET_GPR_U32(ctx, 31, 0x16BAF0u);
    ctx->pc = 0x16BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BAE8u;
    // 0x16baec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x16BAE8u, 0x16BAF0u)) {
        return;
    }
    ctx->pc = 0x16BAF0u;
label_16baf0:
    // 0x16baf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BAF0u;
    {
        const bool branch_taken_0x16baf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAF0u;
        // 0x16baf4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16baf0) {
            ctx->pc = 0x16BB00u;
            goto label_16bb00;
        }
    }
    ctx->pc = 0x16BAF8u;
    // 0x16baf8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16BAF8u;
    SET_GPR_U32(ctx, 31, 0x16BB00u);
    ctx->pc = 0x16BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BAF8u;
    // 0x16bafc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16BAF8u, 0x16BB00u)) {
        return;
    }
    ctx->pc = 0x16BB00u;
label_16bb00:
    // 0x16bb00: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16bb04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb08: 0x24528898  addiu       $s2, $v0, -0x7768
    ctx->pc = 0x16bb08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936728));
    // 0x16bb0c: 0xc07fcce  jal         func_1FF338
    ctx->pc = 0x16BB0Cu;
    SET_GPR_U32(ctx, 31, 0x16BB14u);
    ctx->pc = 0x16BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BB0Cu;
    // 0x16bb10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x16BB0Cu, 0x16BB14u)) {
        return;
    }
    ctx->pc = 0x16BB14u;
label_16bb14:
    // 0x16bb14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BB14u;
    {
        const bool branch_taken_0x16bb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB14u;
        // 0x16bb18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb14) {
            ctx->pc = 0x16BB24u;
            goto label_16bb24;
        }
    }
    ctx->pc = 0x16BB1Cu;
    // 0x16bb1c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16BB1Cu;
    SET_GPR_U32(ctx, 31, 0x16BB24u);
    ctx->pc = 0x16BB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BB1Cu;
    // 0x16bb20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16BB1Cu, 0x16BB24u)) {
        return;
    }
    ctx->pc = 0x16BB24u;
label_16bb24:
    // 0x16bb24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16bb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb28: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16BB28u;
    SET_GPR_U32(ctx, 31, 0x16BB30u);
    ctx->pc = 0x16BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BB28u;
    // 0x16bb2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16BB28u, 0x16BB30u)) {
        return;
    }
    ctx->pc = 0x16BB30u;
label_16bb30:
    // 0x16bb30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16bb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb34: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16BB34u;
    SET_GPR_U32(ctx, 31, 0x16BB3Cu);
    ctx->pc = 0x16BB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BB34u;
    // 0x16bb38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16BB34u, 0x16BB3Cu)) {
        return;
    }
    ctx->pc = 0x16BB3Cu;
label_16bb3c:
    // 0x16bb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb40: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16BB40u;
    SET_GPR_U32(ctx, 31, 0x16BB48u);
    ctx->pc = 0x16BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BB40u;
    // 0x16bb44: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16BB40u, 0x16BB48u)) {
        return;
    }
    ctx->pc = 0x16BB48u;
label_16bb48:
    // 0x16bb48: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16bb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16bb4c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x16bb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16bb50: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16bb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16bb54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16bb54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bb58: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x16bb58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bb5c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x16bb5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bb60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bb64: 0x3e00008  jr          $ra
    ctx->pc = 0x16BB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB64u;
        // 0x16bb68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BB6Cu;
    // 0x16bb6c: 0x0  nop
    ctx->pc = 0x16bb6cu;
    // NOP
    ctx->pc = 0x16bb70u;
}
