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

// Function: sub_00247F70
// Address: 0x247f70 - 0x247fa8
void sub_00247F70_0x247f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247F70_0x247f70");
#endif

    switch (ctx->pc) {
        case 0x247f88u: goto label_247f88;
        case 0x247f98u: goto label_247f98;
        default: break;
    }

    ctx->pc = 0x247f70u;

    // 0x247f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247f74: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247f78: 0xac2434cc  sw          $a0, 0x34CC($at)
    ctx->pc = 0x247f78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B34CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B34CCu, _value); } while (0);
    // 0x247f7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247f80: 0xc091e4c  jal         func_247930
    ctx->pc = 0x247F80u;
    SET_GPR_U32(ctx, 31, 0x247F88u);
    ctx->pc = 0x247F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F80u;
    // 0x247f84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247930u, 0x247F80u, 0x247F88u)) {
        return;
    }
    ctx->pc = 0x247F88u;
label_247f88:
    // 0x247f88: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x247f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x247f8c: 0xdca534c8  ld          $a1, 0x34C8($a1)
    ctx->pc = 0x247f8cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B34C8u));
    // 0x247f90: 0xc091e66  jal         func_247998
    ctx->pc = 0x247F90u;
    SET_GPR_U32(ctx, 31, 0x247F98u);
    ctx->pc = 0x247F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F90u;
    // 0x247f94: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247F90u, 0x247F98u)) {
        return;
    }
    ctx->pc = 0x247F98u;
label_247f98:
    // 0x247f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x247F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F9Cu;
        // 0x247fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247FA4u;
    // 0x247fa4: 0x0  nop
    ctx->pc = 0x247fa4u;
    // NOP
    ctx->pc = 0x247fa8u;
}
