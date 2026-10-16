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

// Function: sub_002D27C0
// Address: 0x2d27c0 - 0x2d2810
void sub_002D27C0_0x2d27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D27C0_0x2d27c0");
#endif

    switch (ctx->pc) {
        case 0x2d27f8u: goto label_2d27f8;
        default: break;
    }

    ctx->pc = 0x2d27c0u;

    // 0x2d27c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d27c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d27c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d27c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d27c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d27cc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2d27ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d27d0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2d27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2d27d4: 0x78430050  lq          $v1, 0x50($v0)
    ctx->pc = 0x2d27d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2d27d8: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x2d27d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x2d27dc: 0x78440060  lq          $a0, 0x60($v0)
    ctx->pc = 0x2d27dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2d27e0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D27E0u;
    {
        const bool branch_taken_0x2d27e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27E0u;
        // 0x2d27e4: 0x7e040010  sq          $a0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d27e0) {
            ctx->pc = 0x2D27F8u;
            goto label_2d27f8;
        }
    }
    ctx->pc = 0x2D27E8u;
    // 0x2d27e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d27e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d27ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d27ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d27f0: 0xc0acd9e  jal         func_2B3678
    ctx->pc = 0x2D27F0u;
    SET_GPR_U32(ctx, 31, 0x2D27F8u);
    ctx->pc = 0x2D27F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D27F0u;
    // 0x2d27f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3678u, 0x2D27F0u, 0x2D27F8u)) {
        return;
    }
    ctx->pc = 0x2D27F8u;
label_2d27f8:
    // 0x2d27f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d27f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d27fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d27fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2800: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d2800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2804: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2804u;
        // 0x2d2808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D280Cu;
    // 0x2d280c: 0x0  nop
    ctx->pc = 0x2d280cu;
    // NOP
    ctx->pc = 0x2d2810u;
}
