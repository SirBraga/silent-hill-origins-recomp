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

// Function: sub_0011B8E8
// Address: 0x11b8e8 - 0x11b9b0
void sub_0011B8E8_0x11b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B8E8_0x11b8e8");
#endif

    switch (ctx->pc) {
        case 0x11b910u: goto label_11b910;
        case 0x11b934u: goto label_11b934;
        case 0x11b93cu: goto label_11b93c;
        case 0x11b944u: goto label_11b944;
        case 0x11b950u: goto label_11b950;
        case 0x11b95cu: goto label_11b95c;
        case 0x11b968u: goto label_11b968;
        default: break;
    }

    ctx->pc = 0x11b8e8u;

    // 0x11b8e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11b8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11b8ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11b8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11b8f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11b8f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11b8fc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11b8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11b900: 0x26120044  addiu       $s2, $s0, 0x44
    ctx->pc = 0x11b900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x11b904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b908: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x11B908u;
    SET_GPR_U32(ctx, 31, 0x11B910u);
    ctx->pc = 0x11B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B908u;
    // 0x11b90c: 0x2613004c  addiu       $s3, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x11B908u, 0x11B910u)) {
        return;
    }
    ctx->pc = 0x11B910u;
label_11b910:
    // 0x11b910: 0x26110054  addiu       $s1, $s0, 0x54
    ctx->pc = 0x11b910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x11b914: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11b914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11b918: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11b918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11b91c: 0x2463b0f0  addiu       $v1, $v1, -0x4F10
    ctx->pc = 0x11b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947056));
    // 0x11b920: 0x2442b0d0  addiu       $v0, $v0, -0x4F30
    ctx->pc = 0x11b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947024));
    // 0x11b924: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x11b924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x11b928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11b928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b92c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11B92Cu;
    SET_GPR_U32(ctx, 31, 0x11B934u);
    ctx->pc = 0x11B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B92Cu;
    // 0x11b930: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11B92Cu, 0x11B934u)) {
        return;
    }
    ctx->pc = 0x11B934u;
label_11b934:
    // 0x11b934: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11B934u;
    SET_GPR_U32(ctx, 31, 0x11B93Cu);
    ctx->pc = 0x11B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B934u;
    // 0x11b938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11B934u, 0x11B93Cu)) {
        return;
    }
    ctx->pc = 0x11B93Cu;
label_11b93c:
    // 0x11b93c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11B93Cu;
    SET_GPR_U32(ctx, 31, 0x11B944u);
    ctx->pc = 0x11B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B93Cu;
    // 0x11b940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11B93Cu, 0x11B944u)) {
        return;
    }
    ctx->pc = 0x11B944u;
label_11b944:
    // 0x11b944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11b944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b948: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x11B948u;
    SET_GPR_U32(ctx, 31, 0x11B950u);
    ctx->pc = 0x11B94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B948u;
    // 0x11b94c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x11B948u, 0x11B950u)) {
        return;
    }
    ctx->pc = 0x11B950u;
label_11b950:
    // 0x11b950: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b954: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x11B954u;
    SET_GPR_U32(ctx, 31, 0x11B95Cu);
    ctx->pc = 0x11B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B954u;
    // 0x11b958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x11B954u, 0x11B95Cu)) {
        return;
    }
    ctx->pc = 0x11B95Cu;
label_11b95c:
    // 0x11b95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b960: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x11B960u;
    SET_GPR_U32(ctx, 31, 0x11B968u);
    ctx->pc = 0x11B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B960u;
    // 0x11b964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x11B960u, 0x11B968u)) {
        return;
    }
    ctx->pc = 0x11B968u;
label_11b968:
    // 0x11b968: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11b968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b96c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x11b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x11b970: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x11b970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x11b974: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x11b974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x11b978: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x11b978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x11b97c: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x11b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x11b980: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x11b980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x11b984: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x11b984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x11b988: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x11b988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x11b98c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x11b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x11b990: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11b990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b994: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11b994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11b998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b99c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11b99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9A4u;
        // 0x11b9a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B9ACu;
    // 0x11b9ac: 0x0  nop
    ctx->pc = 0x11b9acu;
    // NOP
    ctx->pc = 0x11b9b0u;
}
