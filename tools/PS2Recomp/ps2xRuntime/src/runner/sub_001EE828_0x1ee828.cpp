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

// Function: sub_001EE828
// Address: 0x1ee828 - 0x1ee870
void sub_001EE828_0x1ee828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE828_0x1ee828");
#endif

    switch (ctx->pc) {
        case 0x1ee828u: goto label_1ee828;
        case 0x1ee82cu: goto label_1ee82c;
        case 0x1ee830u: goto label_1ee830;
        case 0x1ee834u: goto label_1ee834;
        case 0x1ee838u: goto label_1ee838;
        case 0x1ee83cu: goto label_1ee83c;
        case 0x1ee840u: goto label_1ee840;
        case 0x1ee844u: goto label_1ee844;
        case 0x1ee848u: goto label_1ee848;
        case 0x1ee84cu: goto label_1ee84c;
        case 0x1ee850u: goto label_1ee850;
        case 0x1ee854u: goto label_1ee854;
        case 0x1ee858u: goto label_1ee858;
        case 0x1ee85cu: goto label_1ee85c;
        case 0x1ee860u: goto label_1ee860;
        case 0x1ee864u: goto label_1ee864;
        case 0x1ee868u: goto label_1ee868;
        case 0x1ee86cu: goto label_1ee86c;
        default: break;
    }

    ctx->pc = 0x1ee828u;

label_1ee828:
    // 0x1ee828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ee82c:
    // 0x1ee82c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ee82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ee830:
    // 0x1ee830: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ee830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ee834:
    // 0x1ee834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ee838:
    // 0x1ee838: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1ee838u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1ee83c:
    // 0x1ee83c: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1ee83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1ee840:
    // 0x1ee840: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ee840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ee844:
    // 0x1ee844: 0x40f809  jalr        $v0
label_1ee848:
    if (ctx->pc == 0x1EE848u) {
        ctx->pc = 0x1EE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE844u;
        // 0x1ee848: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE84Cu;
        goto label_1ee84c;
    }
    ctx->pc = 0x1EE844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE84Cu);
        ctx->pc = 0x1EE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE844u;
        // 0x1ee848: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE844u, 0x1EE84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE84Cu;
label_1ee84c:
    // 0x1ee84c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ee84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ee850:
    // 0x1ee850: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1ee850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ee854:
    // 0x1ee854: 0x40f809  jalr        $v0
label_1ee858:
    if (ctx->pc == 0x1EE858u) {
        ctx->pc = 0x1EE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE854u;
        // 0x1ee858: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE85Cu;
        goto label_1ee85c;
    }
    ctx->pc = 0x1EE854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE85Cu);
        ctx->pc = 0x1EE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE854u;
        // 0x1ee858: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE854u, 0x1EE85Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE85Cu;
label_1ee85c:
    // 0x1ee85c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ee85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee860:
    // 0x1ee860: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee864:
    // 0x1ee864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee868:
    // 0x1ee868: 0x3e00008  jr          $ra
label_1ee86c:
    if (ctx->pc == 0x1EE86Cu) {
        ctx->pc = 0x1EE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE868u;
        // 0x1ee86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE870u;
        goto label_fallthrough_0x1ee868;
    }
    ctx->pc = 0x1EE868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE868u;
        // 0x1ee86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ee868:
    ctx->pc = 0x1EE870u;
}
