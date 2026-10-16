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

// Function: sub_0010E760
// Address: 0x10e760 - 0x10e810
void sub_0010E760_0x10e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E760_0x10e760");
#endif

    switch (ctx->pc) {
        case 0x10e790u: goto label_10e790;
        case 0x10e7bcu: goto label_10e7bc;
        case 0x10e7d4u: goto label_10e7d4;
        default: break;
    }

    ctx->pc = 0x10e760u;

    // 0x10e760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10e760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10e764: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10e764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10e768: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10e768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e76c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10e76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10e770: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10e770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10e774: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x10e774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x10e778: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x10e778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x10e77c: 0x26510020  addiu       $s1, $s2, 0x20
    ctx->pc = 0x10e77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x10e780: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x10e780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x10e784: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10e784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e78c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10e78cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10e790:
    // 0x10e790: 0x8e03ffe4  lw          $v1, -0x1C($s0)
    ctx->pc = 0x10e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967268)));
    // 0x10e794: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x10E794u;
    {
        const bool branch_taken_0x10e794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e794) {
            ctx->pc = 0x10E798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E794u;
            // 0x10e798: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E7D8u;
            goto label_10e7d8;
        }
    }
    ctx->pc = 0x10E79Cu;
    // 0x10e79c: 0x52800005  beql        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E79Cu;
    {
        const bool branch_taken_0x10e79c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e79c) {
            ctx->pc = 0x10E7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E79Cu;
            // 0x10e7a0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E7B4u;
            goto label_10e7b4;
        }
    }
    ctx->pc = 0x10E7A4u;
    // 0x10e7a4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x10e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x10e7a8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10E7A8u;
    {
        const bool branch_taken_0x10e7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e7a8) {
            ctx->pc = 0x10E7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E7A8u;
            // 0x10e7ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E7D8u;
            goto label_10e7d8;
        }
    }
    ctx->pc = 0x10E7B0u;
    // 0x10e7b0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x10e7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_10e7b4:
    // 0x10e7b4: 0xc043b2a  jal         func_10ECA8
    ctx->pc = 0x10E7B4u;
    SET_GPR_U32(ctx, 31, 0x10E7BCu);
    ctx->pc = 0x10E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7B4u;
    // 0x10e7b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ECA8u, 0x10E7B4u, 0x10E7BCu)) {
        return;
    }
    ctx->pc = 0x10E7BCu;
label_10e7bc:
    // 0x10e7bc: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x10e7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10e7c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7c4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x10e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10e7c8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x10e7c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x10e7cc: 0xc042ee2  jal         func_10BB88
    ctx->pc = 0x10E7CCu;
    SET_GPR_U32(ctx, 31, 0x10E7D4u);
    ctx->pc = 0x10E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7CCu;
    // 0x10e7d0: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10BB88u, 0x10E7CCu, 0x10E7D4u)) {
        return;
    }
    ctx->pc = 0x10E7D4u;
label_10e7d4:
    // 0x10e7d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x10e7d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_10e7d8:
    // 0x10e7d8: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x10e7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x10e7dc: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x10e7dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10e7e0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x10E7E0u;
    {
        const bool branch_taken_0x10e7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7E0u;
        // 0x10e7e4: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7e0) {
            ctx->pc = 0x10E790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e790;
        }
    }
    ctx->pc = 0x10E7E8u;
    // 0x10e7e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10e7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10e7ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10e7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e7f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10e7f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e7f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x10e7f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e7f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x10e7f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e800: 0x3e00008  jr          $ra
    ctx->pc = 0x10E800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E800u;
        // 0x10e804: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E808u;
    // 0x10e808: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10e808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10e80c: 0x0  nop
    ctx->pc = 0x10e80cu;
    // NOP
    ctx->pc = 0x10e810u;
}
