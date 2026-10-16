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

// Function: sub_001AB868
// Address: 0x1ab868 - 0x1ab8b0
void sub_001AB868_0x1ab868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB868_0x1ab868");
#endif

    switch (ctx->pc) {
        case 0x1ab898u: goto label_1ab898;
        default: break;
    }

    ctx->pc = 0x1ab868u;

    // 0x1ab868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab86c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ab86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ab870: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ab870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ab874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab87c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab880: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x1ab880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x1ab884: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ab884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ab888: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1ab888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1ab88c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1ab88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1ab890: 0xc06ae42  jal         func_1AB908
    ctx->pc = 0x1AB890u;
    SET_GPR_U32(ctx, 31, 0x1AB898u);
    ctx->pc = 0x1AB894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB890u;
    // 0x1ab894: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AB908u, 0x1AB890u, 0x1AB898u)) {
        return;
    }
    ctx->pc = 0x1AB898u;
label_1ab898:
    // 0x1ab898: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ab898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab89c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1ab89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1ab8a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ab8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab8a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8A8u;
        // 0x1ab8ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB8B0u;
}
