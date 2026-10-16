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

// Function: sub_00189828
// Address: 0x189828 - 0x189878
void sub_00189828_0x189828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189828_0x189828");
#endif

    switch (ctx->pc) {
        case 0x18983cu: goto label_18983c;
        default: break;
    }

    ctx->pc = 0x189828u;

    // 0x189828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18982c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x189830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189834: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x189834u;
    SET_GPR_U32(ctx, 31, 0x18983Cu);
    ctx->pc = 0x189838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189834u;
    // 0x189838: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x189834u, 0x18983Cu)) {
        return;
    }
    ctx->pc = 0x18983Cu;
label_18983c:
    // 0x18983c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x18983cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x189840: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x189840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x189844: 0x24638c88  addiu       $v1, $v1, -0x7378
    ctx->pc = 0x189844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937736));
    // 0x189848: 0x24848ca8  addiu       $a0, $a0, -0x7358
    ctx->pc = 0x189848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937768));
    // 0x18984c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x18984cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x189850: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x189850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189854: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x189854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x189858: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x189858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x18985c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x18985cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x189860: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x189860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x189864: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x189864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x189868: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18986c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18986cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189870: 0x3e00008  jr          $ra
    ctx->pc = 0x189870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189870u;
        // 0x189874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189878u;
}
