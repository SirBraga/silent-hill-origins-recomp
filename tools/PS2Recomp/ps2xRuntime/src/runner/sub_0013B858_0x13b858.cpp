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

// Function: sub_0013B858
// Address: 0x13b858 - 0x13b928
void sub_0013B858_0x13b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B858_0x13b858");
#endif

    switch (ctx->pc) {
        case 0x13b8b4u: goto label_13b8b4;
        case 0x13b8c8u: goto label_13b8c8;
        case 0x13b8d4u: goto label_13b8d4;
        case 0x13b8e8u: goto label_13b8e8;
        case 0x13b8f8u: goto label_13b8f8;
        case 0x13b910u: goto label_13b910;
        default: break;
    }

    ctx->pc = 0x13b858u;

    // 0x13b858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13b858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13b85c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13b860: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13b860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13b864: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13b864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13b868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b86c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13b86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13b870: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13b870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13b874: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13b874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13b878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b87c: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x13b87cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x13b880: 0x2611004c  addiu       $s1, $s0, 0x4C
    ctx->pc = 0x13b880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x13b884: 0x2442f548  addiu       $v0, $v0, -0xAB8
    ctx->pc = 0x13b884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964552));
    // 0x13b888: 0x2463f428  addiu       $v1, $v1, -0xBD8
    ctx->pc = 0x13b888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964264));
    // 0x13b88c: 0x24c6f3e8  addiu       $a2, $a2, -0xC18
    ctx->pc = 0x13b88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964200));
    // 0x13b890: 0x24e7f568  addiu       $a3, $a3, -0xA98
    ctx->pc = 0x13b890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964584));
    // 0x13b894: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x13b894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x13b898: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13b898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b89c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x13b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x13b8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13b8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8a4: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x13b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x13b8a8: 0xae060084  sw          $a2, 0x84($s0)
    ctx->pc = 0x13b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 6));
    // 0x13b8ac: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x13B8ACu;
    SET_GPR_U32(ctx, 31, 0x13B8B4u);
    ctx->pc = 0x13B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8ACu;
    // 0x13b8b0: 0xae070034  sw          $a3, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x13B8ACu, 0x13B8B4u)) {
        return;
    }
    ctx->pc = 0x13B8B4u;
label_13b8b4:
    // 0x13b8b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B8B4u;
    {
        const bool branch_taken_0x13b8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8B4u;
        // 0x13b8b8: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8b4) {
            ctx->pc = 0x13B8C8u;
            goto label_13b8c8;
        }
    }
    ctx->pc = 0x13B8BCu;
    // 0x13b8bc: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x13b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x13b8c0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13B8C0u;
    SET_GPR_U32(ctx, 31, 0x13B8C8u);
    ctx->pc = 0x13B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8C0u;
    // 0x13b8c4: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13B8C0u, 0x13B8C8u)) {
        return;
    }
    ctx->pc = 0x13B8C8u;
label_13b8c8:
    // 0x13b8c8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x13b8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13b8cc: 0xc04ee6e  jal         func_13B9B8
    ctx->pc = 0x13B8CCu;
    SET_GPR_U32(ctx, 31, 0x13B8D4u);
    ctx->pc = 0x13B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8CCu;
    // 0x13b8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B9B8u, 0x13B8CCu, 0x13B8D4u)) {
        return;
    }
    ctx->pc = 0x13B8D4u;
label_13b8d4:
    // 0x13b8d4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x13b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x13b8d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B8D8u;
    {
        const bool branch_taken_0x13b8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b8d8) {
            ctx->pc = 0x13B8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B8D8u;
            // 0x13b8dc: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B8ECu;
            goto label_13b8ec;
        }
    }
    ctx->pc = 0x13B8E0u;
    // 0x13b8e0: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x13B8E0u;
    SET_GPR_U32(ctx, 31, 0x13B8E8u);
    ctx->pc = 0x13B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8E0u;
    // 0x13b8e4: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x13B8E0u, 0x13B8E8u)) {
        return;
    }
    ctx->pc = 0x13B8E8u;
label_13b8e8:
    // 0x13b8e8: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x13b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_13b8ec:
    // 0x13b8ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13b8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8f0: 0xc041eae  jal         func_107AB8
    ctx->pc = 0x13B8F0u;
    SET_GPR_U32(ctx, 31, 0x13B8F8u);
    ctx->pc = 0x13B8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8F0u;
    // 0x13b8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107AB8u, 0x13B8F0u, 0x13B8F8u)) {
        return;
    }
    ctx->pc = 0x13B8F8u;
label_13b8f8:
    // 0x13b8f8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13b8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b900: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x13b900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x13b904: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13b904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b908: 0xc04f084  jal         func_13C210
    ctx->pc = 0x13B908u;
    SET_GPR_U32(ctx, 31, 0x13B910u);
    ctx->pc = 0x13B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B908u;
    // 0x13b90c: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x13B908u, 0x13B910u)) {
        return;
    }
    ctx->pc = 0x13B910u;
label_13b910:
    // 0x13b910: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13b910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b914: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13b914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b918: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13b918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b920: 0x3e00008  jr          $ra
    ctx->pc = 0x13B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B920u;
        // 0x13b924: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B928u;
}
