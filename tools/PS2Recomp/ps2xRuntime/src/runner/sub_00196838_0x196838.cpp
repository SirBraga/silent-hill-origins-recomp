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

// Function: sub_00196838
// Address: 0x196838 - 0x1968a8
void sub_00196838_0x196838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196838_0x196838");
#endif

    switch (ctx->pc) {
        case 0x19685cu: goto label_19685c;
        case 0x196878u: goto label_196878;
        case 0x196894u: goto label_196894;
        default: break;
    }

    ctx->pc = 0x196838u;

    // 0x196838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19683c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196840: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x196840u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x196844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196848: 0x8e048b98  lw          $a0, -0x7468($s0)
    ctx->pc = 0x196848u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338B98u));
    // 0x19684c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19684Cu;
    {
        const bool branch_taken_0x19684c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19684c) {
            ctx->pc = 0x196850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19684Cu;
            // 0x196850: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196864u;
            goto label_196864;
        }
    }
    ctx->pc = 0x196854u;
    // 0x196854: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x196854u;
    SET_GPR_U32(ctx, 31, 0x19685Cu);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x196854u, 0x19685Cu)) {
        return;
    }
    ctx->pc = 0x19685Cu;
label_19685c:
    // 0x19685c: 0xae008b98  sw          $zero, -0x7468($s0)
    ctx->pc = 0x19685cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937496), GPR_U32(ctx, 0));
    // 0x196860: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x196860u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_196864:
    // 0x196864: 0x8e048b9c  lw          $a0, -0x7464($s0)
    ctx->pc = 0x196864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937500)));
    // 0x196868: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x196868u;
    {
        const bool branch_taken_0x196868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x196868) {
            ctx->pc = 0x19686Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196868u;
            // 0x19686c: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196880u;
            goto label_196880;
        }
    }
    ctx->pc = 0x196870u;
    // 0x196870: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x196870u;
    SET_GPR_U32(ctx, 31, 0x196878u);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x196870u, 0x196878u)) {
        return;
    }
    ctx->pc = 0x196878u;
label_196878:
    // 0x196878: 0xae008b9c  sw          $zero, -0x7464($s0)
    ctx->pc = 0x196878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937500), GPR_U32(ctx, 0));
    // 0x19687c: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x19687cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_196880:
    // 0x196880: 0x8e048ba0  lw          $a0, -0x7460($s0)
    ctx->pc = 0x196880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937504)));
    // 0x196884: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x196884u;
    {
        const bool branch_taken_0x196884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x196884) {
            ctx->pc = 0x196888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196884u;
            // 0x196888: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19689Cu;
            goto label_19689c;
        }
    }
    ctx->pc = 0x19688Cu;
    // 0x19688c: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x19688Cu;
    SET_GPR_U32(ctx, 31, 0x196894u);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x19688Cu, 0x196894u)) {
        return;
    }
    ctx->pc = 0x196894u;
label_196894:
    // 0x196894: 0xae008ba0  sw          $zero, -0x7460($s0)
    ctx->pc = 0x196894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937504), GPR_U32(ctx, 0));
    // 0x196898: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19689c:
    // 0x19689c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19689cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1968a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1968A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1968A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968A0u;
        // 0x1968a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1968A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1968A8u;
}
