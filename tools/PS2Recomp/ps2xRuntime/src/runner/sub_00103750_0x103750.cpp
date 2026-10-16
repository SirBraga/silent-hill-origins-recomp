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

// Function: sub_00103750
// Address: 0x103750 - 0x1037e8
void sub_00103750_0x103750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103750_0x103750");
#endif

    switch (ctx->pc) {
        case 0x103788u: goto label_103788;
        case 0x103798u: goto label_103798;
        case 0x1037b0u: goto label_1037b0;
        case 0x1037b8u: goto label_1037b8;
        default: break;
    }

    ctx->pc = 0x103750u;

    // 0x103750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x103750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x103754: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x103754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x103758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x103758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10375c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10375cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103760: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x103760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x103764: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x103764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x103768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10376c: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x10376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x103770: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x103770u;
    {
        const bool branch_taken_0x103770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103770u;
        // 0x103774: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103770) {
            ctx->pc = 0x1037BCu;
            goto label_1037bc;
        }
    }
    ctx->pc = 0x103778u;
    // 0x103778: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x103778u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x10377c: 0x2611021c  addiu       $s1, $s0, 0x21C
    ctx->pc = 0x10377cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 540));
    // 0x103780: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x103780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103784: 0x0  nop
    ctx->pc = 0x103784u;
    // NOP
label_103788:
    // 0x103788: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x103788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10378c: 0x8e648668  lw          $a0, -0x7998($s3)
    ctx->pc = 0x10378cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936168)));
    // 0x103790: 0xc059092  jal         func_164248
    ctx->pc = 0x103790u;
    SET_GPR_U32(ctx, 31, 0x103798u);
    ctx->pc = 0x103794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103790u;
    // 0x103794: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x103790u, 0x103798u)) {
        return;
    }
    ctx->pc = 0x103798u;
label_103798:
    // 0x103798: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x103798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x10379c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x10379cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1037a0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1037A0u;
    {
        const bool branch_taken_0x1037a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1037a0) {
            ctx->pc = 0x1037A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1037A0u;
            // 0x1037a4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103788;
        }
    }
    ctx->pc = 0x1037A8u;
    // 0x1037a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1037A8u;
    {
        const bool branch_taken_0x1037a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037A8u;
        // 0x1037ac: 0x8e02025c  lw          $v0, 0x25C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037a8) {
            ctx->pc = 0x1037BCu;
            goto label_1037bc;
        }
    }
    ctx->pc = 0x1037B0u;
label_1037b0:
    // 0x1037b0: 0xc040e20  jal         func_103880
    ctx->pc = 0x1037B0u;
    SET_GPR_U32(ctx, 31, 0x1037B8u);
    ctx->pc = 0x1037B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1037B0u;
    // 0x1037b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103880u, 0x1037B0u, 0x1037B8u)) {
        return;
    }
    ctx->pc = 0x1037B8u;
label_1037b8:
    // 0x1037b8: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x1037b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_1037bc:
    // 0x1037bc: 0x0  nop
    ctx->pc = 0x1037bcu;
    // NOP
    // 0x1037c0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1037C0u;
    {
        const bool branch_taken_0x1037c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1037c0) {
            ctx->pc = 0x1037C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1037C0u;
            // 0x1037c4: 0x8e05021c  lw          $a1, 0x21C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1037B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1037b0;
        }
    }
    ctx->pc = 0x1037C8u;
    // 0x1037c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1037c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1037cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1037ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1037d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1037d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1037d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1037d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1037d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1037d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1037dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1037DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1037E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037DCu;
        // 0x1037e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1037DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1037E4u;
    // 0x1037e4: 0x0  nop
    ctx->pc = 0x1037e4u;
    // NOP
    ctx->pc = 0x1037e8u;
}
