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

// Function: sub_001587D0
// Address: 0x1587d0 - 0x158808
void sub_001587D0_0x1587d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001587D0_0x1587d0");
#endif

    switch (ctx->pc) {
        case 0x1587f8u: goto label_1587f8;
        default: break;
    }

    ctx->pc = 0x1587d0u;

    // 0x1587d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1587d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1587d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1587d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1587d8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1587d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1587dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1587DCu;
    {
        const bool branch_taken_0x1587dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1587E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587DCu;
        // 0x1587e0: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587dc) {
            ctx->pc = 0x1587F8u;
            goto label_1587f8;
        }
    }
    ctx->pc = 0x1587E4u;
    // 0x1587e4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1587e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1587e8: 0x24425048  addiu       $v0, $v0, 0x5048
    ctx->pc = 0x1587e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20552));
    // 0x1587ec: 0xc44d0014  lwc1        $f13, 0x14($v0)
    ctx->pc = 0x1587ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1587f0: 0xc056040  jal         func_158100
    ctx->pc = 0x1587F0u;
    SET_GPR_U32(ctx, 31, 0x1587F8u);
    ctx->pc = 0x1587F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1587F0u;
    // 0x1587f4: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158100u, 0x1587F0u, 0x1587F8u)) {
        return;
    }
    ctx->pc = 0x1587F8u;
label_1587f8:
    // 0x1587f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1587f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1587fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1587FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587FCu;
        // 0x158800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1587FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158804u;
    // 0x158804: 0x0  nop
    ctx->pc = 0x158804u;
    // NOP
    ctx->pc = 0x158808u;
}
