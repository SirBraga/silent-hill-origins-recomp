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

// Function: sub_001E28B0
// Address: 0x1e28b0 - 0x1e2958
void sub_001E28B0_0x1e28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E28B0_0x1e28b0");
#endif

    switch (ctx->pc) {
        case 0x1e2928u: goto label_1e2928;
        case 0x1e2938u: goto label_1e2938;
        default: break;
    }

    ctx->pc = 0x1e28b0u;

    // 0x1e28b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e28b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e28b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e28b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e28b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e28bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e28bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e28c0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E28C0u;
    {
        const bool branch_taken_0x1e28c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28C0u;
        // 0x1e28c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28c0) {
            ctx->pc = 0x1E2940u;
            goto label_1e2940;
        }
    }
    ctx->pc = 0x1E28C8u;
    // 0x1e28c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e28cc: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x1e28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x1e28d0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1e28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e28d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e28d8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E28D8u;
    {
        const bool branch_taken_0x1e28d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28D8u;
        // 0x1e28dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28d8) {
            ctx->pc = 0x1E28F0u;
            goto label_1e28f0;
        }
    }
    ctx->pc = 0x1E28E0u;
    // 0x1e28e0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1e28e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e28e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e28e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e28ec: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1e28ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e28f0:
    // 0x1e28f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e28f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e28f4: 0x24021102  addiu       $v0, $zero, 0x1102
    ctx->pc = 0x1e28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
    // 0x1e28f8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E28F8u;
    {
        const bool branch_taken_0x1e28f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28F8u;
        // 0x1e28fc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28f8) {
            ctx->pc = 0x1E2914u;
            goto label_1e2914;
        }
    }
    ctx->pc = 0x1E2900u;
    // 0x1e2900: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1e2900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e2904: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e2904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e2908: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e2908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e290c: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1e290cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e2910: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e2910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2914:
    // 0x1e2914: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2914u;
    {
        const bool branch_taken_0x1e2914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2914u;
        // 0x1e2918: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2914) {
            ctx->pc = 0x1E2940u;
            goto label_1e2940;
        }
    }
    ctx->pc = 0x1E291Cu;
    // 0x1e291c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e291cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2920: 0xc092782  jal         func_249E08
    ctx->pc = 0x1E2920u;
    SET_GPR_U32(ctx, 31, 0x1E2928u);
    ctx->pc = 0x1E2924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2920u;
    // 0x1e2924: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1E2920u, 0x1E2928u)) {
        return;
    }
    ctx->pc = 0x1E2928u;
label_1e2928:
    // 0x1e2928: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1e2928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e292c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e292cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2930: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x1E2930u;
    SET_GPR_U32(ctx, 31, 0x1E2938u);
    ctx->pc = 0x1E2934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2930u;
    // 0x1e2934: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x1E2930u, 0x1E2938u)) {
        return;
    }
    ctx->pc = 0x1E2938u;
label_1e2938:
    // 0x1e2938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2938u;
    {
        const bool branch_taken_0x1e2938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2938u;
        // 0x1e293c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2938) {
            ctx->pc = 0x1E2944u;
            goto label_1e2944;
        }
    }
    ctx->pc = 0x1E2940u;
label_1e2940:
    // 0x1e2940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2944:
    // 0x1e2944: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e2944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2948: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e2948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e294c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e294cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2950: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2950u;
        // 0x1e2954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2958u;
}
