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

// Function: sub_001EF2D8
// Address: 0x1ef2d8 - 0x1ef340
void sub_001EF2D8_0x1ef2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF2D8_0x1ef2d8");
#endif

    switch (ctx->pc) {
        case 0x1ef2fcu: goto label_1ef2fc;
        case 0x1ef308u: goto label_1ef308;
        case 0x1ef310u: goto label_1ef310;
        case 0x1ef318u: goto label_1ef318;
        case 0x1ef32cu: goto label_1ef32c;
        default: break;
    }

    ctx->pc = 0x1ef2d8u;

    // 0x1ef2d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef2dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ef2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ef2e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef2e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ef2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef2ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ef2ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2f4: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x1EF2F4u;
    SET_GPR_U32(ctx, 31, 0x1EF2FCu);
    ctx->pc = 0x1EF2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF2F4u;
    // 0x1ef2f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x1EF2F4u, 0x1EF2FCu)) {
        return;
    }
    ctx->pc = 0x1EF2FCu;
label_1ef2fc:
    // 0x1ef2fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ef2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ef300: 0xc07739c  jal         func_1DCE70
    ctx->pc = 0x1EF300u;
    SET_GPR_U32(ctx, 31, 0x1EF308u);
    ctx->pc = 0x1EF304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF300u;
    // 0x1ef304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCE70u, 0x1EF300u, 0x1EF308u)) {
        return;
    }
    ctx->pc = 0x1EF308u;
label_1ef308:
    // 0x1ef308: 0xc0898d2  jal         func_226348
    ctx->pc = 0x1EF308u;
    SET_GPR_U32(ctx, 31, 0x1EF310u);
    ctx->pc = 0x1EF30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF308u;
    // 0x1ef30c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x1EF308u, 0x1EF310u)) {
        return;
    }
    ctx->pc = 0x1EF310u;
label_1ef310:
    // 0x1ef310: 0xc095534  jal         func_2554D0
    ctx->pc = 0x1EF310u;
    SET_GPR_U32(ctx, 31, 0x1EF318u);
    ctx->pc = 0x1EF314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF310u;
    // 0x1ef314: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x1EF310u, 0x1EF318u)) {
        return;
    }
    ctx->pc = 0x1EF318u;
label_1ef318:
    // 0x1ef318: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1ef318u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1ef31c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF31Cu;
    {
        const bool branch_taken_0x1ef31c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF31Cu;
        // 0x1ef320: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef31c) {
            ctx->pc = 0x1EF330u;
            goto label_1ef330;
        }
    }
    ctx->pc = 0x1EF324u;
    // 0x1ef324: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1EF324u;
    SET_GPR_U32(ctx, 31, 0x1EF32Cu);
    ctx->pc = 0x1EF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF324u;
    // 0x1ef328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1EF324u, 0x1EF32Cu)) {
        return;
    }
    ctx->pc = 0x1EF32Cu;
label_1ef32c:
    // 0x1ef32c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ef32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef330:
    // 0x1ef330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef338: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF338u;
        // 0x1ef33c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF340u;
}
