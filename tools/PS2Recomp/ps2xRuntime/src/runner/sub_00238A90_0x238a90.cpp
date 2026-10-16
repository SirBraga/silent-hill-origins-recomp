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

// Function: sub_00238A90
// Address: 0x238a90 - 0x238ae0
void sub_00238A90_0x238a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238A90_0x238a90");
#endif

    switch (ctx->pc) {
        case 0x238aa0u: goto label_238aa0;
        case 0x238abcu: goto label_238abc;
        default: break;
    }

    ctx->pc = 0x238a90u;

    // 0x238a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238a98: 0xc08c0b2  jal         func_2302C8
    ctx->pc = 0x238A98u;
    SET_GPR_U32(ctx, 31, 0x238AA0u);
    ctx->pc = 0x2302C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2302C8u, 0x238A98u, 0x238AA0u)) {
        return;
    }
    ctx->pc = 0x238AA0u;
label_238aa0:
    // 0x238aa0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x238aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x238aa4: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x238aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x238aa8: 0xac4003c0  sw          $zero, 0x3C0($v0)
    ctx->pc = 0x238aa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x735480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735480u, _value); } while (0);
    // 0x238aac: 0xac4003cc  sw          $zero, 0x3CC($v0)
    ctx->pc = 0x238aacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x73548Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x73548Cu, _value); } while (0);
    // 0x238ab0: 0xac4003c8  sw          $zero, 0x3C8($v0)
    ctx->pc = 0x238ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x735488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735488u, _value); } while (0);
    // 0x238ab4: 0xc09196e  jal         func_2465B8
    ctx->pc = 0x238AB4u;
    SET_GPR_U32(ctx, 31, 0x238ABCu);
    ctx->pc = 0x238AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AB4u;
    // 0x238ab8: 0xac4003c4  sw          $zero, 0x3C4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 964), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2465B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2465B8u, 0x238AB4u, 0x238ABCu)) {
        return;
    }
    ctx->pc = 0x238ABCu;
label_238abc:
    // 0x238abc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ac4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x238ac8: 0xac203f20  sw          $zero, 0x3F20($at)
    ctx->pc = 0x238ac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F20u, _value); } while (0);
    // 0x238acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ad0: 0xaf838430  sw          $v1, -0x7BD0($gp)
    ctx->pc = 0x238ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935600), GPR_U32(ctx, 3));
    // 0x238ad4: 0xaf80842c  sw          $zero, -0x7BD4($gp)
    ctx->pc = 0x238ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935596), GPR_U32(ctx, 0));
    // 0x238ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x238AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AD8u;
        // 0x238adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238AE0u;
}
