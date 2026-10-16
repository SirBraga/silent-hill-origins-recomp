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

// Function: sub_002DA8A0
// Address: 0x2da8a0 - 0x2da908
void sub_002DA8A0_0x2da8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA8A0_0x2da8a0");
#endif

    switch (ctx->pc) {
        case 0x2da8a0u: goto label_2da8a0;
        case 0x2da8a4u: goto label_2da8a4;
        case 0x2da8a8u: goto label_2da8a8;
        case 0x2da8acu: goto label_2da8ac;
        case 0x2da8b0u: goto label_2da8b0;
        case 0x2da8b4u: goto label_2da8b4;
        case 0x2da8b8u: goto label_2da8b8;
        case 0x2da8bcu: goto label_2da8bc;
        case 0x2da8c0u: goto label_2da8c0;
        case 0x2da8c4u: goto label_2da8c4;
        case 0x2da8c8u: goto label_2da8c8;
        case 0x2da8ccu: goto label_2da8cc;
        case 0x2da8d0u: goto label_2da8d0;
        case 0x2da8d4u: goto label_2da8d4;
        case 0x2da8d8u: goto label_2da8d8;
        case 0x2da8dcu: goto label_2da8dc;
        case 0x2da8e0u: goto label_2da8e0;
        case 0x2da8e4u: goto label_2da8e4;
        case 0x2da8e8u: goto label_2da8e8;
        case 0x2da8ecu: goto label_2da8ec;
        case 0x2da8f0u: goto label_2da8f0;
        case 0x2da8f4u: goto label_2da8f4;
        case 0x2da8f8u: goto label_2da8f8;
        case 0x2da8fcu: goto label_2da8fc;
        case 0x2da900u: goto label_2da900;
        case 0x2da904u: goto label_2da904;
        default: break;
    }

    ctx->pc = 0x2da8a0u;

label_2da8a0:
    // 0x2da8a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2da8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2da8a4:
    // 0x2da8a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2da8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2da8a8:
    // 0x2da8a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2da8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2da8ac:
    // 0x2da8ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2da8b0:
    // 0x2da8b0: 0x27918fc8  addiu       $s1, $gp, -0x7038
    ctx->pc = 0x2da8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938568));
label_2da8b4:
    // 0x2da8b4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2da8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2da8b8:
    // 0x2da8b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2da8b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2da8bc:
    // 0x2da8bc: 0x8f908fc8  lw          $s0, -0x7038($gp)
    ctx->pc = 0x2da8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938568)));
label_2da8c0:
    // 0x2da8c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2da8c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da8c4:
    // 0x2da8c4: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
label_2da8c8:
    if (ctx->pc == 0x2DA8C8u) {
        ctx->pc = 0x2DA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8C4u;
        // 0x2da8c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA8CCu;
        goto label_2da8cc;
    }
    ctx->pc = 0x2DA8C4u;
    {
        const bool branch_taken_0x2da8c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2DA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8C4u;
        // 0x2da8c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8c4) {
            ctx->pc = 0x2DA8ECu;
            goto label_2da8ec;
        }
    }
    ctx->pc = 0x2DA8CCu;
label_2da8cc:
    // 0x2da8cc: 0x2604fffc  addiu       $a0, $s0, -0x4
    ctx->pc = 0x2da8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_2da8d0:
    // 0x2da8d0: 0x260f809  jalr        $s3
label_2da8d4:
    if (ctx->pc == 0x2DA8D4u) {
        ctx->pc = 0x2DA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8D0u;
        // 0x2da8d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA8D8u;
        goto label_2da8d8;
    }
    ctx->pc = 0x2DA8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2DA8D8u);
        ctx->pc = 0x2DA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8D0u;
        // 0x2da8d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA8D0u, 0x2DA8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA8D8u;
label_2da8d8:
    // 0x2da8d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2da8dc:
    if (ctx->pc == 0x2DA8DCu) {
        ctx->pc = 0x2DA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8D8u;
        // 0x2da8dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA8E0u;
        goto label_2da8e0;
    }
    ctx->pc = 0x2DA8D8u;
    {
        const bool branch_taken_0x2da8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da8d8) {
            ctx->pc = 0x2DA8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA8D8u;
            // 0x2da8dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA8F0u;
            goto label_2da8f0;
        }
    }
    ctx->pc = 0x2DA8E0u;
label_2da8e0:
    // 0x2da8e0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2da8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2da8e4:
    // 0x2da8e4: 0x1611fffa  bne         $s0, $s1, . + 4 + (-0x6 << 2)
label_2da8e8:
    if (ctx->pc == 0x2DA8E8u) {
        ctx->pc = 0x2DA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8E4u;
        // 0x2da8e8: 0x2604fffc  addiu       $a0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA8ECu;
        goto label_2da8ec;
    }
    ctx->pc = 0x2DA8E4u;
    {
        const bool branch_taken_0x2da8e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2DA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8E4u;
        // 0x2da8e8: 0x2604fffc  addiu       $a0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da8e4) {
            ctx->pc = 0x2DA8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da8d0;
        }
    }
    ctx->pc = 0x2DA8ECu;
label_2da8ec:
    // 0x2da8ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2da8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2da8f0:
    // 0x2da8f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2da8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2da8f4:
    // 0x2da8f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da8f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2da8f8:
    // 0x2da8f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2da8f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2da8fc:
    // 0x2da8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2da900:
    // 0x2da900: 0x3e00008  jr          $ra
label_2da904:
    if (ctx->pc == 0x2DA904u) {
        ctx->pc = 0x2DA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA900u;
        // 0x2da904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA908u;
        goto label_fallthrough_0x2da900;
    }
    ctx->pc = 0x2DA900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA900u;
        // 0x2da904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2da900:
    ctx->pc = 0x2DA908u;
}
