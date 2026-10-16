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

// Function: sub_001D63F8
// Address: 0x1d63f8 - 0x1d6438
void sub_001D63F8_0x1d63f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D63F8_0x1d63f8");
#endif

    switch (ctx->pc) {
        case 0x1d6420u: goto label_1d6420;
        default: break;
    }

    ctx->pc = 0x1d63f8u;

    // 0x1d63f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d63f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d63fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d63fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d6400: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d6400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6408: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d6408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d640c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6410: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d6410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d6414: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d6414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6418: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D6418u;
    SET_GPR_U32(ctx, 31, 0x1D6420u);
    ctx->pc = 0x1D641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6418u;
    // 0x1d641c: 0x24a51098  addiu       $a1, $a1, 0x1098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D6418u, 0x1D6420u)) {
        return;
    }
    ctx->pc = 0x1D6420u;
label_1d6420:
    // 0x1d6420: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d6420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6428: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d642c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D642Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D642Cu;
        // 0x1d6430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D642Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6434u;
    // 0x1d6434: 0x0  nop
    ctx->pc = 0x1d6434u;
    // NOP
    ctx->pc = 0x1d6438u;
}
