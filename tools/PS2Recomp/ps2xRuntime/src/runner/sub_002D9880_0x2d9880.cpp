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

// Function: sub_002D9880
// Address: 0x2d9880 - 0x2d98d0
void sub_002D9880_0x2d9880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9880_0x2d9880");
#endif

    switch (ctx->pc) {
        case 0x2d9894u: goto label_2d9894;
        case 0x2d98acu: goto label_2d98ac;
        default: break;
    }

    ctx->pc = 0x2d9880u;

    // 0x2d9880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9884: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d9884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d9888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d988c: 0xc0b62e8  jal         func_2D8BA0
    ctx->pc = 0x2D988Cu;
    SET_GPR_U32(ctx, 31, 0x2D9894u);
    ctx->pc = 0x2D9890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D988Cu;
    // 0x2d9890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D8BA0u, 0x2D988Cu, 0x2D9894u)) {
        return;
    }
    ctx->pc = 0x2D9894u;
label_2d9894:
    // 0x2d9894: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2d9894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2d9898: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9898u;
    {
        const bool branch_taken_0x2d9898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9898u;
        // 0x2d989c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9898) {
            ctx->pc = 0x2D98ACu;
            goto label_2d98ac;
        }
    }
    ctx->pc = 0x2D98A0u;
    // 0x2d98a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d98a4: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x2D98A4u;
    SET_GPR_U32(ctx, 31, 0x2D98ACu);
    ctx->pc = 0x2D98A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D98A4u;
    // 0x2d98a8: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267A0u, 0x2D98A4u, 0x2D98ACu)) {
        return;
    }
    ctx->pc = 0x2D98ACu;
label_2d98ac:
    // 0x2d98ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d98acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d98b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d98b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d98b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d98b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d98b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D98B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D98B8u;
        // 0x2d98bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D98B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D98C0u;
    // 0x2d98c0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2d98c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d98c4: 0x0  nop
    ctx->pc = 0x2d98c4u;
    // NOP
    // 0x2d98c8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2d98c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d98cc: 0x0  nop
    ctx->pc = 0x2d98ccu;
    // NOP
    ctx->pc = 0x2d98d0u;
}
