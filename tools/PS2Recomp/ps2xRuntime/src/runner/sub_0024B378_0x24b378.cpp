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

// Function: sub_0024B378
// Address: 0x24b378 - 0x24b3f8
void sub_0024B378_0x24b378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B378_0x24b378");
#endif

    switch (ctx->pc) {
        case 0x24b3b4u: goto label_24b3b4;
        default: break;
    }

    ctx->pc = 0x24b378u;

    // 0x24b378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24b378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24b37c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24b380: 0x8c633f60  lw          $v1, 0x3F60($v1)
    ctx->pc = 0x24b380u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F60u));
    // 0x24b384: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24b384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24b388: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24b388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24b38c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24b38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24b390: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x24b390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24b394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b39c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x24b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24b3a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b3a4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B3A4u;
    {
        const bool branch_taken_0x24b3a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b3a4) {
            ctx->pc = 0x24B3C4u;
            goto label_24b3c4;
        }
    }
    ctx->pc = 0x24B3ACu;
    // 0x24b3ac: 0xc093106  jal         func_24C418
    ctx->pc = 0x24B3ACu;
    SET_GPR_U32(ctx, 31, 0x24B3B4u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x24B3ACu, 0x24B3B4u)) {
        return;
    }
    ctx->pc = 0x24B3B4u;
label_24b3b4:
    // 0x24b3b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24b3b8: 0x8c633f60  lw          $v1, 0x3F60($v1)
    ctx->pc = 0x24b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F60u));
    // 0x24b3bc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x24b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24b3c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x24b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_24b3c4:
    // 0x24b3c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24b3c8: 0x8c633f64  lw          $v1, 0x3F64($v1)
    ctx->pc = 0x24b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F64u));
    // 0x24b3cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24b3ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24b3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b3d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24b3d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24b3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b3e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24b3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24b3e4: 0xac233f64  sw          $v1, 0x3F64($at)
    ctx->pc = 0x24b3e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F64u, _value); } while (0);
    // 0x24b3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x24B3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3E8u;
        // 0x24b3ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B3F0u;
    // 0x24b3f0: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x24b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x24b3f4: 0x0  nop
    ctx->pc = 0x24b3f4u;
    // NOP
    ctx->pc = 0x24b3f8u;
}
