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

// Function: sub_00287850
// Address: 0x287850 - 0x287920
void sub_00287850_0x287850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287850_0x287850");
#endif

    switch (ctx->pc) {
        case 0x2878b0u: goto label_2878b0;
        default: break;
    }

    ctx->pc = 0x287850u;

    // 0x287850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x287850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x287854: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x287854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x287858: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x287858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x28785c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x287860: 0x245063b0  addiu       $s0, $v0, 0x63B0
    ctx->pc = 0x287860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
    // 0x287864: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x287864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x287868: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x287868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x28786c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x287870: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x287870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x287878: 0x8e020610  lw          $v0, 0x610($s0)
    ctx->pc = 0x287878u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7069C0u));
    // 0x28787c: 0x2853001f  slti        $s3, $v0, 0x1F
    ctx->pc = 0x28787cu;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x287880: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x287880u;
    {
        const bool branch_taken_0x287880 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x287884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287880u;
        // 0x287884: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287880) {
            ctx->pc = 0x2878F0u;
            goto label_2878f0;
        }
    }
    ctx->pc = 0x287888u;
    // 0x287888: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28788c: 0x26120590  addiu       $s2, $s0, 0x590
    ctx->pc = 0x28788cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x287890: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x287890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x287894: 0xae020610  sw          $v0, 0x610($s0)
    ctx->pc = 0x287894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 2));
    // 0x287898: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x287898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x28789c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2878a0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2878A0u;
    {
        const bool branch_taken_0x2878a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2878a0) {
            ctx->pc = 0x2878A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2878A0u;
            // 0x2878a4: 0x8e020610  lw          $v0, 0x610($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2878C4u;
            goto label_2878c4;
        }
    }
    ctx->pc = 0x2878A8u;
    // 0x2878a8: 0xc092ff4  jal         func_24BFD0
    ctx->pc = 0x2878A8u;
    SET_GPR_U32(ctx, 31, 0x2878B0u);
    ctx->pc = 0x24BFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BFD0u, 0x2878A8u, 0x2878B0u)) {
        return;
    }
    ctx->pc = 0x2878B0u;
label_2878b0:
    // 0x2878b0: 0x8e030610  lw          $v1, 0x610($s0)
    ctx->pc = 0x2878b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
    // 0x2878b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2878b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2878b8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2878b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2878bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2878bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2878c0: 0x8e020610  lw          $v0, 0x610($s0)
    ctx->pc = 0x2878c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
label_2878c4:
    // 0x2878c4: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x2878c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2878c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2878c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2878cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2878ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2878d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2878d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2878d4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2878d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2878d8: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2878d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2878dc: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2878dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2878e0: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x2878e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2878e4: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2878e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2878e8: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x2878e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2878ec: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2878ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_2878f0:
    // 0x2878f0: 0x268363b0  addiu       $v1, $s4, 0x63B0
    ctx->pc = 0x2878f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 25520));
    // 0x2878f4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2878f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2878f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2878f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2878fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2878fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287900: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x287900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287904: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x287904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287908: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x287908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28790c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28790cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287910: 0xac600704  sw          $zero, 0x704($v1)
    ctx->pc = 0x287910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1796), GPR_U32(ctx, 0));
    // 0x287914: 0xac6006f0  sw          $zero, 0x6F0($v1)
    ctx->pc = 0x287914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1776), GPR_U32(ctx, 0));
    // 0x287918: 0x3e00008  jr          $ra
    ctx->pc = 0x287918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287918u;
        // 0x28791c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287920u;
}
