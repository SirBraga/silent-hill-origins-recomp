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

// Function: sub_0011B9B0
// Address: 0x11b9b0 - 0x11ba70
void sub_0011B9B0_0x11b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B9B0_0x11b9b0");
#endif

    switch (ctx->pc) {
        case 0x11b9fcu: goto label_11b9fc;
        case 0x11ba0cu: goto label_11ba0c;
        case 0x11ba14u: goto label_11ba14;
        case 0x11ba1cu: goto label_11ba1c;
        case 0x11ba28u: goto label_11ba28;
        case 0x11ba34u: goto label_11ba34;
        case 0x11ba40u: goto label_11ba40;
        case 0x11ba4cu: goto label_11ba4c;
        default: break;
    }

    ctx->pc = 0x11b9b0u;

    // 0x11b9b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11b9b4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11b9b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11b9bc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11b9c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11b9c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9c8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x11b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x11b9cc: 0x2442b0d0  addiu       $v0, $v0, -0x4F30
    ctx->pc = 0x11b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947024));
    // 0x11b9d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11b9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11b9d4: 0x2463b0f0  addiu       $v1, $v1, -0x4F10
    ctx->pc = 0x11b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947056));
    // 0x11b9d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x11b9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x11b9dc: 0x26120044  addiu       $s2, $s0, 0x44
    ctx->pc = 0x11b9dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x11b9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b9e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11b9e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9e8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x11b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x11b9ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11b9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9f0: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x11b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x11b9f4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11B9F4u;
    SET_GPR_U32(ctx, 31, 0x11B9FCu);
    ctx->pc = 0x11B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9F4u;
    // 0x11b9f8: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11B9F4u, 0x11B9FCu)) {
        return;
    }
    ctx->pc = 0x11B9FCu;
label_11b9fc:
    // 0x11b9fc: 0x2613004c  addiu       $s3, $s0, 0x4C
    ctx->pc = 0x11b9fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x11ba00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ba00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba04: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x11BA04u;
    SET_GPR_U32(ctx, 31, 0x11BA0Cu);
    ctx->pc = 0x11BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA04u;
    // 0x11ba08: 0x26110054  addiu       $s1, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x11BA04u, 0x11BA0Cu)) {
        return;
    }
    ctx->pc = 0x11BA0Cu;
label_11ba0c:
    // 0x11ba0c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x11BA0Cu;
    SET_GPR_U32(ctx, 31, 0x11BA14u);
    ctx->pc = 0x11BA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA0Cu;
    // 0x11ba10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x11BA0Cu, 0x11BA14u)) {
        return;
    }
    ctx->pc = 0x11BA14u;
label_11ba14:
    // 0x11ba14: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x11BA14u;
    SET_GPR_U32(ctx, 31, 0x11BA1Cu);
    ctx->pc = 0x11BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA14u;
    // 0x11ba18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x11BA14u, 0x11BA1Cu)) {
        return;
    }
    ctx->pc = 0x11BA1Cu;
label_11ba1c:
    // 0x11ba1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba20: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x11BA20u;
    SET_GPR_U32(ctx, 31, 0x11BA28u);
    ctx->pc = 0x11BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA20u;
    // 0x11ba24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x11BA20u, 0x11BA28u)) {
        return;
    }
    ctx->pc = 0x11BA28u;
label_11ba28:
    // 0x11ba28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba2c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x11BA2Cu;
    SET_GPR_U32(ctx, 31, 0x11BA34u);
    ctx->pc = 0x11BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA2Cu;
    // 0x11ba30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x11BA2Cu, 0x11BA34u)) {
        return;
    }
    ctx->pc = 0x11BA34u;
label_11ba34:
    // 0x11ba34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ba34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba38: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x11BA38u;
    SET_GPR_U32(ctx, 31, 0x11BA40u);
    ctx->pc = 0x11BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA38u;
    // 0x11ba3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x11BA38u, 0x11BA40u)) {
        return;
    }
    ctx->pc = 0x11BA40u;
label_11ba40:
    // 0x11ba40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba44: 0xc04f084  jal         func_13C210
    ctx->pc = 0x11BA44u;
    SET_GPR_U32(ctx, 31, 0x11BA4Cu);
    ctx->pc = 0x11BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA44u;
    // 0x11ba48: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x11BA44u, 0x11BA4Cu)) {
        return;
    }
    ctx->pc = 0x11BA4Cu;
label_11ba4c:
    // 0x11ba4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11ba4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ba50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11ba50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ba54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11ba54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ba58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x11ba58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ba5c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x11ba5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ba60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ba60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ba64: 0x3e00008  jr          $ra
    ctx->pc = 0x11BA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA64u;
        // 0x11ba68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BA6Cu;
    // 0x11ba6c: 0x0  nop
    ctx->pc = 0x11ba6cu;
    // NOP
    ctx->pc = 0x11ba70u;
}
