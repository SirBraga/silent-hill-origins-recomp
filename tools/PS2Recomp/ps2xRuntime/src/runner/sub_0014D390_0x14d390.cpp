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

// Function: sub_0014D390
// Address: 0x14d390 - 0x14d3d0
void sub_0014D390_0x14d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D390_0x14d390");
#endif

    switch (ctx->pc) {
        case 0x14d3acu: goto label_14d3ac;
        case 0x14d3b8u: goto label_14d3b8;
        default: break;
    }

    ctx->pc = 0x14d390u;

    // 0x14d390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d394: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14d394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14d398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d39c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d3a4: 0xc097b26  jal         func_25EC98
    ctx->pc = 0x14D3A4u;
    SET_GPR_U32(ctx, 31, 0x14D3ACu);
    ctx->pc = 0x14D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D3A4u;
    // 0x14d3a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC98u, 0x14D3A4u, 0x14D3ACu)) {
        return;
    }
    ctx->pc = 0x14D3ACu;
label_14d3ac:
    // 0x14d3ac: 0x512825  or          $a1, $v0, $s1
    ctx->pc = 0x14d3acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x14d3b0: 0xc097b1e  jal         func_25EC78
    ctx->pc = 0x14D3B0u;
    SET_GPR_U32(ctx, 31, 0x14D3B8u);
    ctx->pc = 0x14D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D3B0u;
    // 0x14d3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC78u, 0x14D3B0u, 0x14D3B8u)) {
        return;
    }
    ctx->pc = 0x14D3B8u;
label_14d3b8:
    // 0x14d3b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14d3b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d3bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d3c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14d3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x14D3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3C8u;
        // 0x14d3cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D3D0u;
}
