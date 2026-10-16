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

// Function: sub_0010FA88
// Address: 0x10fa88 - 0x10fba8
void sub_0010FA88_0x10fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FA88_0x10fa88");
#endif

    switch (ctx->pc) {
        case 0x10faa8u: goto label_10faa8;
        case 0x10fb00u: goto label_10fb00;
        case 0x10fb14u: goto label_10fb14;
        case 0x10fb2cu: goto label_10fb2c;
        case 0x10fb44u: goto label_10fb44;
        case 0x10fb5cu: goto label_10fb5c;
        case 0x10fb74u: goto label_10fb74;
        case 0x10fb8cu: goto label_10fb8c;
        default: break;
    }

    ctx->pc = 0x10fa88u;

    // 0x10fa88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10fa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10fa8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10fa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10fa90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10fa90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10fa98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10fa9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10faa0: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x10FAA0u;
    SET_GPR_U32(ctx, 31, 0x10FAA8u);
    ctx->pc = 0x10FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FAA0u;
    // 0x10faa4: 0x26120038  addiu       $s2, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x10FAA0u, 0x10FAA8u)) {
        return;
    }
    ctx->pc = 0x10FAA8u;
label_10faa8:
    // 0x10faa8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x10faac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10faacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10fab0: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x10fab0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x10fab4: 0x2463a318  addiu       $v1, $v1, -0x5CE8
    ctx->pc = 0x10fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943512));
    // 0x10fab8: 0x2442a338  addiu       $v0, $v0, -0x5CC8
    ctx->pc = 0x10fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943544));
    // 0x10fabc: 0x26314370  addiu       $s1, $s1, 0x4370
    ctx->pc = 0x10fabcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17264));
    // 0x10fac0: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x10fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x10fac4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10fac8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x10fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x10facc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x10faccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x10fad0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x10fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x10fad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fad8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x10fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x10fadc: 0x24a5a2f8  addiu       $a1, $a1, -0x5D08
    ctx->pc = 0x10fadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943480));
    // 0x10fae0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x10fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x10fae4: 0x24c6a310  addiu       $a2, $a2, -0x5CF0
    ctx->pc = 0x10fae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943504));
    // 0x10fae8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x10fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x10faec: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x10faecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x10faf0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x10faf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x10faf4: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x10faf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x10faf8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10FAF8u;
    SET_GPR_U32(ctx, 31, 0x10FB00u);
    ctx->pc = 0x10FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FAF8u;
    // 0x10fafc: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10FAF8u, 0x10FB00u)) {
        return;
    }
    ctx->pc = 0x10FB00u;
label_10fb00:
    // 0x10fb00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10fb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fb08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb0c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10FB0Cu;
    SET_GPR_U32(ctx, 31, 0x10FB14u);
    ctx->pc = 0x10FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB0Cu;
    // 0x10fb10: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10FB0Cu, 0x10FB14u)) {
        return;
    }
    ctx->pc = 0x10FB14u;
label_10fb14:
    // 0x10fb14: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x10fb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x10fb18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb1c: 0x24a54318  addiu       $a1, $a1, 0x4318
    ctx->pc = 0x10fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17176));
    // 0x10fb20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fb20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb24: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10FB24u;
    SET_GPR_U32(ctx, 31, 0x10FB2Cu);
    ctx->pc = 0x10FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB24u;
    // 0x10fb28: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10FB24u, 0x10FB2Cu)) {
        return;
    }
    ctx->pc = 0x10FB2Cu;
label_10fb2c:
    // 0x10fb2c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x10fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x10fb30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb34: 0x24a54320  addiu       $a1, $a1, 0x4320
    ctx->pc = 0x10fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17184));
    // 0x10fb38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb3c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10FB3Cu;
    SET_GPR_U32(ctx, 31, 0x10FB44u);
    ctx->pc = 0x10FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB3Cu;
    // 0x10fb40: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10FB3Cu, 0x10FB44u)) {
        return;
    }
    ctx->pc = 0x10FB44u;
label_10fb44:
    // 0x10fb44: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x10fb44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x10fb48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb4c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x10fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x10fb50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb54: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10FB54u;
    SET_GPR_U32(ctx, 31, 0x10FB5Cu);
    ctx->pc = 0x10FB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB54u;
    // 0x10fb58: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10FB54u, 0x10FB5Cu)) {
        return;
    }
    ctx->pc = 0x10FB5Cu;
label_10fb5c:
    // 0x10fb5c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x10fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x10fb60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb64: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x10fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x10fb68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb6c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10FB6Cu;
    SET_GPR_U32(ctx, 31, 0x10FB74u);
    ctx->pc = 0x10FB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB6Cu;
    // 0x10fb70: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10FB6Cu, 0x10FB74u)) {
        return;
    }
    ctx->pc = 0x10FB74u;
label_10fb74:
    // 0x10fb74: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x10fb74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x10fb78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb7c: 0x24a5f8c0  addiu       $a1, $a1, -0x740
    ctx->pc = 0x10fb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965440));
    // 0x10fb80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb84: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10FB84u;
    SET_GPR_U32(ctx, 31, 0x10FB8Cu);
    ctx->pc = 0x10FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB84u;
    // 0x10fb88: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10FB84u, 0x10FB8Cu)) {
        return;
    }
    ctx->pc = 0x10FB8Cu;
label_10fb8c:
    // 0x10fb8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10fb8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10fb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fb94: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10fb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fb98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10fb98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fb9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fba0: 0x3e00008  jr          $ra
    ctx->pc = 0x10FBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBA0u;
        // 0x10fba4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FBA8u;
}
