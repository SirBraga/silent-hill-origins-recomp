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

// Function: sub_001FF380
// Address: 0x1ff380 - 0x1ff3d0
void sub_001FF380_0x1ff380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF380_0x1ff380");
#endif

    switch (ctx->pc) {
        case 0x1ff3a4u: goto label_1ff3a4;
        case 0x1ff3b4u: goto label_1ff3b4;
        default: break;
    }

    ctx->pc = 0x1ff380u;

    // 0x1ff380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ff380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ff384: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ff384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ff388: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ff388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ff38c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff390: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ff390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ff394: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff39c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1FF39Cu;
    SET_GPR_U32(ctx, 31, 0x1FF3A4u);
    ctx->pc = 0x1FF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF39Cu;
    // 0x1ff3a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1FF39Cu, 0x1FF3A4u)) {
        return;
    }
    ctx->pc = 0x1FF3A4u;
label_1ff3a4:
    // 0x1ff3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ff3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3ac: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1FF3ACu;
    SET_GPR_U32(ctx, 31, 0x1FF3B4u);
    ctx->pc = 0x1FF3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3ACu;
    // 0x1ff3b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1FF3ACu, 0x1FF3B4u)) {
        return;
    }
    ctx->pc = 0x1FF3B4u;
label_1ff3b4:
    // 0x1ff3b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ff3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff3b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ff3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff3bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ff3bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff3c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3C4u;
        // 0x1ff3c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF3CCu;
    // 0x1ff3cc: 0x0  nop
    ctx->pc = 0x1ff3ccu;
    // NOP
    ctx->pc = 0x1ff3d0u;
}
