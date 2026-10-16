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

// Function: sub_001D6478
// Address: 0x1d6478 - 0x1d64b8
void sub_001D6478_0x1d6478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6478_0x1d6478");
#endif

    switch (ctx->pc) {
        case 0x1d64a4u: goto label_1d64a4;
        default: break;
    }

    ctx->pc = 0x1d6478u;

    // 0x1d6478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d647c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d647cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d6480: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d6484: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d6484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d6488: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d6488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d648c: 0x8c679b84  lw          $a3, -0x647C($v1)
    ctx->pc = 0x1d648cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x339B84u));
    // 0x1d6490: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d6490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d649c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D649Cu;
    SET_GPR_U32(ctx, 31, 0x1D64A4u);
    ctx->pc = 0x1D64A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D649Cu;
    // 0x1d64a0: 0x24451098  addiu       $a1, $v0, 0x1098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D649Cu, 0x1D64A4u)) {
        return;
    }
    ctx->pc = 0x1D64A4u;
label_1d64a4:
    // 0x1d64a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d64a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d64a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d64ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d64acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d64b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D64B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64B0u;
        // 0x1d64b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D64B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D64B8u;
}
