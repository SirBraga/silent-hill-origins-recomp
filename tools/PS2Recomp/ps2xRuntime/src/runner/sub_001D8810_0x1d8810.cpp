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

// Function: sub_001D8810
// Address: 0x1d8810 - 0x1d8890
void sub_001D8810_0x1d8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8810_0x1d8810");
#endif

    switch (ctx->pc) {
        case 0x1d8844u: goto label_1d8844;
        case 0x1d884cu: goto label_1d884c;
        case 0x1d8858u: goto label_1d8858;
        case 0x1d8860u: goto label_1d8860;
        case 0x1d8870u: goto label_1d8870;
        case 0x1d8878u: goto label_1d8878;
        default: break;
    }

    ctx->pc = 0x1d8810u;

    // 0x1d8810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8814: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d8814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d8818: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d8818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d881c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8824: 0x8c629da0  lw          $v0, -0x6260($v1)
    ctx->pc = 0x1d8824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339DA0u));
    // 0x1d8828: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1d8828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d882c: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D882Cu;
    {
        const bool branch_taken_0x1d882c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D882Cu;
        // 0x1d8830: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d882c) {
            ctx->pc = 0x1D887Cu;
            goto label_1d887c;
        }
    }
    ctx->pc = 0x1D8834u;
    // 0x1d8834: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D8834u;
    {
        const bool branch_taken_0x1d8834 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8834u;
        // 0x1d8838: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8834) {
            ctx->pc = 0x1D8868u;
            goto label_1d8868;
        }
    }
    ctx->pc = 0x1D883Cu;
    // 0x1d883c: 0xc08b848  jal         func_22E120
    ctx->pc = 0x1D883Cu;
    SET_GPR_U32(ctx, 31, 0x1D8844u);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x1D883Cu, 0x1D8844u)) {
        return;
    }
    ctx->pc = 0x1D8844u;
label_1d8844:
    // 0x1d8844: 0xc08b848  jal         func_22E120
    ctx->pc = 0x1D8844u;
    SET_GPR_U32(ctx, 31, 0x1D884Cu);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x1D8844u, 0x1D884Cu)) {
        return;
    }
    ctx->pc = 0x1D884Cu;
label_1d884c:
    // 0x1d884c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8850: 0xc0a5370  jal         func_294DC0
    ctx->pc = 0x1D8850u;
    SET_GPR_U32(ctx, 31, 0x1D8858u);
    ctx->pc = 0x1D8854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8850u;
    // 0x1d8854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x1D8850u, 0x1D8858u)) {
        return;
    }
    ctx->pc = 0x1D8858u;
label_1d8858:
    // 0x1d8858: 0xc08e932  jal         func_23A4C8
    ctx->pc = 0x1D8858u;
    SET_GPR_U32(ctx, 31, 0x1D8860u);
    ctx->pc = 0x23A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23A4C8u, 0x1D8858u, 0x1D8860u)) {
        return;
    }
    ctx->pc = 0x1D8860u;
label_1d8860:
    // 0x1d8860: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8860u;
    {
        const bool branch_taken_0x1d8860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8860u;
        // 0x1d8864: 0xae309da0  sw          $s0, -0x6260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294942112), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8860) {
            ctx->pc = 0x1D887Cu;
            goto label_1d887c;
        }
    }
    ctx->pc = 0x1D8868u;
label_1d8868:
    // 0x1d8868: 0xc0a5370  jal         func_294DC0
    ctx->pc = 0x1D8868u;
    SET_GPR_U32(ctx, 31, 0x1D8870u);
    ctx->pc = 0x1D886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8868u;
    // 0x1d886c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x1D8868u, 0x1D8870u)) {
        return;
    }
    ctx->pc = 0x1D8870u;
label_1d8870:
    // 0x1d8870: 0xc08e942  jal         func_23A508
    ctx->pc = 0x1D8870u;
    SET_GPR_U32(ctx, 31, 0x1D8878u);
    ctx->pc = 0x23A508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23A508u, 0x1D8870u, 0x1D8878u)) {
        return;
    }
    ctx->pc = 0x1D8878u;
label_1d8878:
    // 0x1d8878: 0xae309da0  sw          $s0, -0x6260($s1)
    ctx->pc = 0x1d8878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942112), GPR_U32(ctx, 16));
label_1d887c:
    // 0x1d887c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d887cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8888: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8888u;
        // 0x1d888c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8890u;
}
