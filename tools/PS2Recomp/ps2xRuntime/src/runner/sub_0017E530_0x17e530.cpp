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

// Function: sub_0017E530
// Address: 0x17e530 - 0x17e5d8
void sub_0017E530_0x17e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E530_0x17e530");
#endif

    switch (ctx->pc) {
        case 0x17e568u: goto label_17e568;
        case 0x17e57cu: goto label_17e57c;
        case 0x17e594u: goto label_17e594;
        case 0x17e5a8u: goto label_17e5a8;
        default: break;
    }

    ctx->pc = 0x17e530u;

    // 0x17e530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17e534: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17e534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17e538: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17e538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x17e53c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17e540: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17e544: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x17e544u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17e548: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x17e548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x17e54c: 0x24738870  addiu       $s3, $v1, -0x7790
    ctx->pc = 0x17e54cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936688));
    // 0x17e550: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x17e550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x17e554: 0x2454f9a0  addiu       $s4, $v0, -0x660
    ctx->pc = 0x17e554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965664));
    // 0x17e558: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17e558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17e55c: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x17e55cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    // 0x17e560: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17e560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x17e564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17e568:
    // 0x17e568: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x17e568u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17e56c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17e56cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17e570: 0x8eb08858  lw          $s0, -0x77A8($s5)
    ctx->pc = 0x17e570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936664)));
    // 0x17e574: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17E574u;
    SET_GPR_U32(ctx, 31, 0x17E57Cu);
    ctx->pc = 0x17E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E574u;
    // 0x17e578: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17E574u, 0x17E57Cu)) {
        return;
    }
    ctx->pc = 0x17E57Cu;
label_17e57c:
    // 0x17e57c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e580: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17e580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e584: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E584u;
    {
        const bool branch_taken_0x17e584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E584u;
        // 0x17e588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e584) {
            ctx->pc = 0x17E5A8u;
            goto label_17e5a8;
        }
    }
    ctx->pc = 0x17E58Cu;
    // 0x17e58c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17E58Cu;
    SET_GPR_U32(ctx, 31, 0x17E594u);
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17E58Cu, 0x17E594u)) {
        return;
    }
    ctx->pc = 0x17E594u;
label_17e594:
    // 0x17e594: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E598u;
    {
        const bool branch_taken_0x17e598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E598u;
        // 0x17e59c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e598) {
            ctx->pc = 0x17E5A8u;
            goto label_17e5a8;
        }
    }
    ctx->pc = 0x17E5A0u;
    // 0x17e5a0: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x17E5A0u;
    SET_GPR_U32(ctx, 31, 0x17E5A8u);
    ctx->pc = 0x17E5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E5A0u;
    // 0x17e5a4: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x17E5A0u, 0x17E5A8u)) {
        return;
    }
    ctx->pc = 0x17E5A8u;
label_17e5a8:
    // 0x17e5a8: 0x641ffef  bgez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17E5A8u;
    {
        const bool branch_taken_0x17e5a8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x17E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5A8u;
        // 0x17e5ac: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5a8) {
            ctx->pc = 0x17E568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e568;
        }
    }
    ctx->pc = 0x17E5B0u;
    // 0x17e5b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17e5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e5b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17e5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e5b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17e5b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e5bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e5bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e5c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17e5c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e5c4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x17e5c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17E5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5CCu;
        // 0x17e5d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E5D4u;
    // 0x17e5d4: 0x0  nop
    ctx->pc = 0x17e5d4u;
    // NOP
    ctx->pc = 0x17e5d8u;
}
