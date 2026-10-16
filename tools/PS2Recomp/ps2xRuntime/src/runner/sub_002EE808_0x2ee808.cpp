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

// Function: sub_002EE808
// Address: 0x2ee808 - 0x2ee858
void sub_002EE808_0x2ee808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE808_0x2ee808");
#endif

    switch (ctx->pc) {
        case 0x2ee82cu: goto label_2ee82c;
        default: break;
    }

    ctx->pc = 0x2ee808u;

    // 0x2ee808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ee808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ee80c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2ee80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2ee810: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ee810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ee814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ee818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee81c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ee81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ee820: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2ee820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee824: 0xc092858  jal         func_24A160
    ctx->pc = 0x2EE824u;
    SET_GPR_U32(ctx, 31, 0x2EE82Cu);
    ctx->pc = 0x2EE828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE824u;
    // 0x2ee828: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x2EE824u, 0x2EE82Cu)) {
        return;
    }
    ctx->pc = 0x2EE82Cu;
label_2ee82c:
    // 0x2ee82c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE82Cu;
    {
        const bool branch_taken_0x2ee82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE82Cu;
        // 0x2ee830: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee82c) {
            ctx->pc = 0x2EE840u;
            goto label_2ee840;
        }
    }
    ctx->pc = 0x2EE834u;
    // 0x2ee834: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ee834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE838u;
    {
        const bool branch_taken_0x2ee838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE838u;
        // 0x2ee83c: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee838) {
            ctx->pc = 0x2EE844u;
            goto label_2ee844;
        }
    }
    ctx->pc = 0x2EE840u;
label_2ee840:
    // 0x2ee840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ee840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee844:
    // 0x2ee844: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ee844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee84c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE84Cu;
        // 0x2ee850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE854u;
    // 0x2ee854: 0x0  nop
    ctx->pc = 0x2ee854u;
    // NOP
    ctx->pc = 0x2ee858u;
}
