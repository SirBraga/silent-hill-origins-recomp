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

// Function: sub_0025DE38
// Address: 0x25de38 - 0x25de80
void sub_0025DE38_0x25de38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DE38_0x25de38");
#endif

    switch (ctx->pc) {
        case 0x25de6cu: goto label_25de6c;
        default: break;
    }

    ctx->pc = 0x25de38u;

    // 0x25de38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25de38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25de3c: 0x8f828604  lw          $v0, -0x79FC($gp)
    ctx->pc = 0x25de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936068)));
    // 0x25de40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25de40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25de44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25de44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25de4c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25de50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25DE50u;
    {
        const bool branch_taken_0x25de50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE50u;
        // 0x25de54: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de50) {
            ctx->pc = 0x25DE6Cu;
            goto label_25de6c;
        }
    }
    ctx->pc = 0x25DE58u;
    // 0x25de58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25de5c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DE5Cu;
    {
        const bool branch_taken_0x25de5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE5Cu;
        // 0x25de60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de5c) {
            ctx->pc = 0x25DE70u;
            goto label_25de70;
        }
    }
    ctx->pc = 0x25DE64u;
    // 0x25de64: 0xc097a26  jal         func_25E898
    ctx->pc = 0x25DE64u;
    SET_GPR_U32(ctx, 31, 0x25DE6Cu);
    ctx->pc = 0x25DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE64u;
    // 0x25de68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x25DE64u, 0x25DE6Cu)) {
        return;
    }
    ctx->pc = 0x25DE6Cu;
label_25de6c:
    // 0x25de6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25de6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25de70:
    // 0x25de70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25de70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25de74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25de74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25de78: 0x3e00008  jr          $ra
    ctx->pc = 0x25DE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE78u;
        // 0x25de7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DE80u;
}
