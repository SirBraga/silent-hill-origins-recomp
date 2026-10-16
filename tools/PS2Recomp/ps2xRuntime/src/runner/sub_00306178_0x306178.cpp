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

// Function: sub_00306178
// Address: 0x306178 - 0x3061f0
void sub_00306178_0x306178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306178_0x306178");
#endif

    switch (ctx->pc) {
        case 0x306190u: goto label_306190;
        case 0x3061a0u: goto label_3061a0;
        case 0x3061b4u: goto label_3061b4;
        case 0x3061c8u: goto label_3061c8;
        case 0x3061dcu: goto label_3061dc;
        default: break;
    }

    ctx->pc = 0x306178u;

    // 0x306178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30617c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x306180: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x306180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x306184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x306184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x306188: 0xc0c14b8  jal         func_3052E0
    ctx->pc = 0x306188u;
    SET_GPR_U32(ctx, 31, 0x306190u);
    ctx->pc = 0x30618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306188u;
    // 0x30618c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3052E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3052E0u, 0x306188u, 0x306190u)) {
        return;
    }
    ctx->pc = 0x306190u;
label_306190:
    // 0x306190: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x306190u;
    {
        const bool branch_taken_0x306190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306190) {
            ctx->pc = 0x306194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306190u;
            // 0x306194: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3061E0u;
            goto label_3061e0;
        }
    }
    ctx->pc = 0x306198u;
    // 0x306198: 0xc0c15a6  jal         func_305698
    ctx->pc = 0x306198u;
    SET_GPR_U32(ctx, 31, 0x3061A0u);
    ctx->pc = 0x30619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306198u;
    // 0x30619c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305698u, 0x306198u, 0x3061A0u)) {
        return;
    }
    ctx->pc = 0x3061A0u;
label_3061a0:
    // 0x3061a0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3061A0u;
    {
        const bool branch_taken_0x3061a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3061a0) {
            ctx->pc = 0x3061A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3061A0u;
            // 0x3061a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3061E0u;
            goto label_3061e0;
        }
    }
    ctx->pc = 0x3061A8u;
    // 0x3061a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3061a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3061ac: 0xc0c1642  jal         func_305908
    ctx->pc = 0x3061ACu;
    SET_GPR_U32(ctx, 31, 0x3061B4u);
    ctx->pc = 0x3061B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061ACu;
    // 0x3061b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305908u, 0x3061ACu, 0x3061B4u)) {
        return;
    }
    ctx->pc = 0x3061B4u;
label_3061b4:
    // 0x3061b4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3061B4u;
    {
        const bool branch_taken_0x3061b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3061b4) {
            ctx->pc = 0x3061B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3061B4u;
            // 0x3061b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3061E0u;
            goto label_3061e0;
        }
    }
    ctx->pc = 0x3061BCu;
    // 0x3061bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3061bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3061c0: 0xc0c16ce  jal         func_305B38
    ctx->pc = 0x3061C0u;
    SET_GPR_U32(ctx, 31, 0x3061C8u);
    ctx->pc = 0x3061C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061C0u;
    // 0x3061c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305B38u, 0x3061C0u, 0x3061C8u)) {
        return;
    }
    ctx->pc = 0x3061C8u;
label_3061c8:
    // 0x3061c8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3061C8u;
    {
        const bool branch_taken_0x3061c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3061c8) {
            ctx->pc = 0x3061CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3061C8u;
            // 0x3061cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3061E0u;
            goto label_3061e0;
        }
    }
    ctx->pc = 0x3061D0u;
    // 0x3061d0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3061d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3061d4: 0xc0c1794  jal         func_305E50
    ctx->pc = 0x3061D4u;
    SET_GPR_U32(ctx, 31, 0x3061DCu);
    ctx->pc = 0x3061D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061D4u;
    // 0x3061d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305E50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305E50u, 0x3061D4u, 0x3061DCu)) {
        return;
    }
    ctx->pc = 0x3061DCu;
label_3061dc:
    // 0x3061dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3061dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3061e0:
    // 0x3061e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3061e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3061e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3061E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3061E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061E4u;
        // 0x3061e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3061E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3061ECu;
    // 0x3061ec: 0x0  nop
    ctx->pc = 0x3061ecu;
    // NOP
    ctx->pc = 0x3061f0u;
}
