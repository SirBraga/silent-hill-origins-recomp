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

// Function: sub_0017E380
// Address: 0x17e380 - 0x17e3b8
void sub_0017E380_0x17e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E380_0x17e380");
#endif

    switch (ctx->pc) {
        case 0x17e39cu: goto label_17e39c;
        case 0x17e3a8u: goto label_17e3a8;
        default: break;
    }

    ctx->pc = 0x17e380u;

    // 0x17e380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e384: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17e384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17e38c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e394: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17E394u;
    SET_GPR_U32(ctx, 31, 0x17E39Cu);
    ctx->pc = 0x17E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E394u;
    // 0x17e398: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17E394u, 0x17E39Cu)) {
        return;
    }
    ctx->pc = 0x17E39Cu;
label_17e39c:
    // 0x17e39c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3a0: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x17E3A0u;
    SET_GPR_U32(ctx, 31, 0x17E3A8u);
    ctx->pc = 0x17E3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3A0u;
    // 0x17e3a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E3B8u, 0x17E3A0u, 0x17E3A8u)) {
        return;
    }
    ctx->pc = 0x17E3A8u;
label_17e3a8:
    // 0x17e3a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e3ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3B0u;
        // 0x17e3b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E3B8u;
}
