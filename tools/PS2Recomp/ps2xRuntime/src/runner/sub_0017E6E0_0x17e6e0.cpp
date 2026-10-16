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

// Function: sub_0017E6E0
// Address: 0x17e6e0 - 0x17e788
void sub_0017E6E0_0x17e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E6E0_0x17e6e0");
#endif

    switch (ctx->pc) {
        case 0x17e708u: goto label_17e708;
        case 0x17e71cu: goto label_17e71c;
        case 0x17e734u: goto label_17e734;
        case 0x17e74cu: goto label_17e74c;
        case 0x17e764u: goto label_17e764;
        case 0x17e774u: goto label_17e774;
        default: break;
    }

    ctx->pc = 0x17e6e0u;

    // 0x17e6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e6e4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17e6e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17e6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17e6ec: 0x24427a58  addiu       $v0, $v0, 0x7A58
    ctx->pc = 0x17e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31320));
    // 0x17e6f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e6f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e6f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e6fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17e6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e700: 0xc06014e  jal         func_180538
    ctx->pc = 0x17E700u;
    SET_GPR_U32(ctx, 31, 0x17E708u);
    ctx->pc = 0x17E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E700u;
    // 0x17e704: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180538u, 0x17E700u, 0x17E708u)) {
        return;
    }
    ctx->pc = 0x17E708u;
label_17e708:
    // 0x17e708: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x17e708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17e70c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E70Cu;
    {
        const bool branch_taken_0x17e70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e70c) {
            ctx->pc = 0x17E710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E70Cu;
            // 0x17e710: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E724u;
            goto label_17e724;
        }
    }
    ctx->pc = 0x17E714u;
    // 0x17e714: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E714u;
    SET_GPR_U32(ctx, 31, 0x17E71Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E714u, 0x17E71Cu)) {
        return;
    }
    ctx->pc = 0x17E71Cu;
label_17e71c:
    // 0x17e71c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17e720: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x17e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_17e724:
    // 0x17e724: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E724u;
    {
        const bool branch_taken_0x17e724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e724) {
            ctx->pc = 0x17E728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E724u;
            // 0x17e728: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E73Cu;
            goto label_17e73c;
        }
    }
    ctx->pc = 0x17E72Cu;
    // 0x17e72c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E72Cu;
    SET_GPR_U32(ctx, 31, 0x17E734u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E72Cu, 0x17E734u)) {
        return;
    }
    ctx->pc = 0x17E734u;
label_17e734:
    // 0x17e734: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x17e734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x17e738: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x17e738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_17e73c:
    // 0x17e73c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E73Cu;
    {
        const bool branch_taken_0x17e73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e73c) {
            ctx->pc = 0x17E740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E73Cu;
            // 0x17e740: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E754u;
            goto label_17e754;
        }
    }
    ctx->pc = 0x17E744u;
    // 0x17e744: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E744u;
    SET_GPR_U32(ctx, 31, 0x17E74Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E744u, 0x17E74Cu)) {
        return;
    }
    ctx->pc = 0x17E74Cu;
label_17e74c:
    // 0x17e74c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x17e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x17e750: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x17e750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_17e754:
    // 0x17e754: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E754u;
    {
        const bool branch_taken_0x17e754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e754) {
            ctx->pc = 0x17E758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E754u;
            // 0x17e758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E76Cu;
            goto label_17e76c;
        }
    }
    ctx->pc = 0x17E75Cu;
    // 0x17e75c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E75Cu;
    SET_GPR_U32(ctx, 31, 0x17E764u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E75Cu, 0x17E764u)) {
        return;
    }
    ctx->pc = 0x17E764u;
label_17e764:
    // 0x17e764: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17e764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17e768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e76c:
    // 0x17e76c: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x17E76Cu;
    SET_GPR_U32(ctx, 31, 0x17E774u);
    ctx->pc = 0x17E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E76Cu;
    // 0x17e770: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC470u, 0x17E76Cu, 0x17E774u)) {
        return;
    }
    ctx->pc = 0x17E774u;
label_17e774:
    // 0x17e774: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17e774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e780: 0x3e00008  jr          $ra
    ctx->pc = 0x17E780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E780u;
        // 0x17e784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E788u;
}
