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

// Function: sub_00189878
// Address: 0x189878 - 0x1898d8
void sub_00189878_0x189878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189878_0x189878");
#endif

    switch (ctx->pc) {
        case 0x1898b8u: goto label_1898b8;
        case 0x1898c4u: goto label_1898c4;
        default: break;
    }

    ctx->pc = 0x189878u;

    // 0x189878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18987c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18987cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x189880: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x189880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x189884: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x189884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x189888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18988c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189894: 0x24428c88  addiu       $v0, $v0, -0x7378
    ctx->pc = 0x189894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937736));
    // 0x189898: 0x24638ca8  addiu       $v1, $v1, -0x7358
    ctx->pc = 0x189898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937768));
    // 0x18989c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x18989cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1898a0: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1898a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1898a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1898a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1898a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1898a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898ac: 0x8c448acc  lw          $a0, -0x7534($v0)
    ctx->pc = 0x1898acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338ACCu));
    // 0x1898b0: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1898B0u;
    SET_GPR_U32(ctx, 31, 0x1898B8u);
    ctx->pc = 0x1898B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898B0u;
    // 0x1898b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A0A0u, 0x1898B0u, 0x1898B8u)) {
        return;
    }
    ctx->pc = 0x1898B8u;
label_1898b8:
    // 0x1898b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1898b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898bc: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1898BCu;
    SET_GPR_U32(ctx, 31, 0x1898C4u);
    ctx->pc = 0x1898C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898BCu;
    // 0x1898c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1898BCu, 0x1898C4u)) {
        return;
    }
    ctx->pc = 0x1898C4u;
label_1898c4:
    // 0x1898c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1898c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1898c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1898c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1898cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1898ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1898d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1898D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1898D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898D0u;
        // 0x1898d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1898D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1898D8u;
}
