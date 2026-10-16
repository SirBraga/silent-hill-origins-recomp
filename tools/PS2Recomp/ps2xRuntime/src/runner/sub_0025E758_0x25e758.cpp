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

// Function: sub_0025E758
// Address: 0x25e758 - 0x25e7d8
void sub_0025E758_0x25e758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E758_0x25e758");
#endif

    switch (ctx->pc) {
        case 0x25e758u: goto label_25e758;
        case 0x25e75cu: goto label_25e75c;
        case 0x25e760u: goto label_25e760;
        case 0x25e764u: goto label_25e764;
        case 0x25e768u: goto label_25e768;
        case 0x25e76cu: goto label_25e76c;
        case 0x25e770u: goto label_25e770;
        case 0x25e774u: goto label_25e774;
        case 0x25e778u: goto label_25e778;
        case 0x25e77cu: goto label_25e77c;
        case 0x25e780u: goto label_25e780;
        case 0x25e784u: goto label_25e784;
        case 0x25e788u: goto label_25e788;
        case 0x25e78cu: goto label_25e78c;
        case 0x25e790u: goto label_25e790;
        case 0x25e794u: goto label_25e794;
        case 0x25e798u: goto label_25e798;
        case 0x25e79cu: goto label_25e79c;
        case 0x25e7a0u: goto label_25e7a0;
        case 0x25e7a4u: goto label_25e7a4;
        case 0x25e7a8u: goto label_25e7a8;
        case 0x25e7acu: goto label_25e7ac;
        case 0x25e7b0u: goto label_25e7b0;
        case 0x25e7b4u: goto label_25e7b4;
        case 0x25e7b8u: goto label_25e7b8;
        case 0x25e7bcu: goto label_25e7bc;
        case 0x25e7c0u: goto label_25e7c0;
        case 0x25e7c4u: goto label_25e7c4;
        case 0x25e7c8u: goto label_25e7c8;
        case 0x25e7ccu: goto label_25e7cc;
        case 0x25e7d0u: goto label_25e7d0;
        case 0x25e7d4u: goto label_25e7d4;
        default: break;
    }

    ctx->pc = 0x25e758u;

label_25e758:
    // 0x25e758: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25e758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25e75c:
    // 0x25e75c: 0x8f8285f8  lw          $v0, -0x7A08($gp)
    ctx->pc = 0x25e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
label_25e760:
    // 0x25e760: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25e760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25e764:
    // 0x25e764: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25e764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25e768:
    // 0x25e768: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25e768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e76c:
    // 0x25e76c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x25e76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_25e770:
    // 0x25e770: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_25e774:
    // 0x25e774: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25e778:
    // 0x25e778: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25e778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25e77c:
    // 0x25e77c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25e780:
    // 0x25e780: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25e780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25e784:
    // 0x25e784: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25e784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25e788:
    // 0x25e788: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x25e788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25e78c:
    // 0x25e78c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_25e790:
    if (ctx->pc == 0x25E790u) {
        ctx->pc = 0x25E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E78Cu;
        // 0x25e790: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E794u;
        goto label_25e794;
    }
    ctx->pc = 0x25E78Cu;
    {
        const bool branch_taken_0x25e78c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E78Cu;
        // 0x25e790: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e78c) {
            ctx->pc = 0x25E7B4u;
            goto label_25e7b4;
        }
    }
    ctx->pc = 0x25E794u;
label_25e794:
    // 0x25e794: 0x0  nop
    ctx->pc = 0x25e794u;
    // NOP
label_25e798:
    // 0x25e798: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25e798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25e79c:
    // 0x25e79c: 0x280f809  jalr        $s4
label_25e7a0:
    if (ctx->pc == 0x25E7A0u) {
        ctx->pc = 0x25E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E79Cu;
        // 0x25e7a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E7A4u;
        goto label_25e7a4;
    }
    ctx->pc = 0x25E79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x25E7A4u);
        ctx->pc = 0x25E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E79Cu;
        // 0x25e7a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E79Cu, 0x25E7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E7A4u;
label_25e7a4:
    // 0x25e7a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25e7a8:
    if (ctx->pc == 0x25E7A8u) {
        ctx->pc = 0x25E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7A4u;
        // 0x25e7a8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E7ACu;
        goto label_25e7ac;
    }
    ctx->pc = 0x25E7A4u;
    {
        const bool branch_taken_0x25e7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7A4u;
        // 0x25e7a8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7a4) {
            ctx->pc = 0x25E7B4u;
            goto label_25e7b4;
        }
    }
    ctx->pc = 0x25E7ACu;
label_25e7ac:
    // 0x25e7ac: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_25e7b0:
    if (ctx->pc == 0x25E7B0u) {
        ctx->pc = 0x25E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7ACu;
        // 0x25e7b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E7B4u;
        goto label_25e7b4;
    }
    ctx->pc = 0x25E7ACu;
    {
        const bool branch_taken_0x25e7ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7ACu;
        // 0x25e7b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7ac) {
            ctx->pc = 0x25E798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e798;
        }
    }
    ctx->pc = 0x25E7B4u;
label_25e7b4:
    // 0x25e7b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25e7b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e7b8:
    // 0x25e7b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25e7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25e7bc:
    // 0x25e7bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25e7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25e7c0:
    // 0x25e7c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25e7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25e7c4:
    // 0x25e7c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25e7c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25e7c8:
    // 0x25e7c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25e7c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e7cc:
    // 0x25e7cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e7d0:
    // 0x25e7d0: 0x3e00008  jr          $ra
label_25e7d4:
    if (ctx->pc == 0x25E7D4u) {
        ctx->pc = 0x25E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7D0u;
        // 0x25e7d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E7D8u;
        goto label_fallthrough_0x25e7d0;
    }
    ctx->pc = 0x25E7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7D0u;
        // 0x25e7d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25e7d0:
    ctx->pc = 0x25E7D8u;
}
