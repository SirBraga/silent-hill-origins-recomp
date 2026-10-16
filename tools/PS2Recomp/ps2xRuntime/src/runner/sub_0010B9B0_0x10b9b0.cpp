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

// Function: sub_0010B9B0
// Address: 0x10b9b0 - 0x10ba70
void sub_0010B9B0_0x10b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B9B0_0x10b9b0");
#endif

    switch (ctx->pc) {
        case 0x10b9d0u: goto label_10b9d0;
        case 0x10b9f4u: goto label_10b9f4;
        case 0x10b9fcu: goto label_10b9fc;
        case 0x10ba08u: goto label_10ba08;
        case 0x10ba14u: goto label_10ba14;
        case 0x10ba24u: goto label_10ba24;
        case 0x10ba30u: goto label_10ba30;
        case 0x10ba54u: goto label_10ba54;
        default: break;
    }

    ctx->pc = 0x10b9b0u;

    // 0x10b9b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b9b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10b9b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b9bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10b9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10b9c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10b9c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b9c8: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x10B9C8u;
    SET_GPR_U32(ctx, 31, 0x10B9D0u);
    ctx->pc = 0x10B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B9C8u;
    // 0x10b9cc: 0x26110044  addiu       $s1, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x10B9C8u, 0x10B9D0u)) {
        return;
    }
    ctx->pc = 0x10B9D0u;
label_10b9d0:
    // 0x10b9d0: 0x2612004c  addiu       $s2, $s0, 0x4C
    ctx->pc = 0x10b9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x10b9d4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10b9d8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x10b9dc: 0x24639de8  addiu       $v1, $v1, -0x6218
    ctx->pc = 0x10b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942184));
    // 0x10b9e0: 0x24429dc8  addiu       $v0, $v0, -0x6238
    ctx->pc = 0x10b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942152));
    // 0x10b9e4: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x10b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x10b9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b9ec: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10B9ECu;
    SET_GPR_U32(ctx, 31, 0x10B9F4u);
    ctx->pc = 0x10B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B9ECu;
    // 0x10b9f0: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10B9ECu, 0x10B9F4u)) {
        return;
    }
    ctx->pc = 0x10B9F4u;
label_10b9f4:
    // 0x10b9f4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10B9F4u;
    SET_GPR_U32(ctx, 31, 0x10B9FCu);
    ctx->pc = 0x10B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B9F4u;
    // 0x10b9f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10B9F4u, 0x10B9FCu)) {
        return;
    }
    ctx->pc = 0x10B9FCu;
label_10b9fc:
    // 0x10b9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba00: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x10BA00u;
    SET_GPR_U32(ctx, 31, 0x10BA08u);
    ctx->pc = 0x10BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA00u;
    // 0x10ba04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x10BA00u, 0x10BA08u)) {
        return;
    }
    ctx->pc = 0x10BA08u;
label_10ba08:
    // 0x10ba08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba0c: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x10BA0Cu;
    SET_GPR_U32(ctx, 31, 0x10BA14u);
    ctx->pc = 0x10BA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA0Cu;
    // 0x10ba10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x10BA0Cu, 0x10BA14u)) {
        return;
    }
    ctx->pc = 0x10BA14u;
label_10ba14:
    // 0x10ba14: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x10ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x10ba18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba1c: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x10BA1Cu;
    SET_GPR_U32(ctx, 31, 0x10BA24u);
    ctx->pc = 0x10BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA1Cu;
    // 0x10ba20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x10BA1Cu, 0x10BA24u)) {
        return;
    }
    ctx->pc = 0x10BA24u;
label_10ba24:
    // 0x10ba24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba28: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x10BA28u;
    SET_GPR_U32(ctx, 31, 0x10BA30u);
    ctx->pc = 0x10BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA28u;
    // 0x10ba2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x10BA28u, 0x10BA30u)) {
        return;
    }
    ctx->pc = 0x10BA30u;
label_10ba30:
    // 0x10ba30: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x10ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x10ba34: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x10ba34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x10ba38: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x10ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x10ba3c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x10ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x10ba40: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x10ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x10ba44: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x10ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x10ba48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ba48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba4c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BA4Cu;
    SET_GPR_U32(ctx, 31, 0x10BA54u);
    ctx->pc = 0x10BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA4Cu;
    // 0x10ba50: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BA4Cu, 0x10BA54u)) {
        return;
    }
    ctx->pc = 0x10BA54u;
label_10ba54:
    // 0x10ba54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10ba54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10ba58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ba5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10ba5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ba60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10ba60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ba64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ba64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ba68: 0x3e00008  jr          $ra
    ctx->pc = 0x10BA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA68u;
        // 0x10ba6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BA70u;
}
