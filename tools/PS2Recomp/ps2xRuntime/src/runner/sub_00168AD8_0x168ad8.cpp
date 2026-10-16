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

// Function: sub_00168AD8
// Address: 0x168ad8 - 0x168b08
void sub_00168AD8_0x168ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168AD8_0x168ad8");
#endif

    switch (ctx->pc) {
        case 0x168aecu: goto label_168aec;
        default: break;
    }

    ctx->pc = 0x168ad8u;

    // 0x168ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168adc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168ae4: 0xc05a182  jal         func_168608
    ctx->pc = 0x168AE4u;
    SET_GPR_U32(ctx, 31, 0x168AECu);
    ctx->pc = 0x168AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AE4u;
    // 0x168ae8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x168608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168608u, 0x168AE4u, 0x168AECu)) {
        return;
    }
    ctx->pc = 0x168AECu;
label_168aec:
    // 0x168aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168af0: 0x3e00008  jr          $ra
    ctx->pc = 0x168AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AF0u;
        // 0x168af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168AF8u;
    // 0x168af8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x168af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x168afc: 0x0  nop
    ctx->pc = 0x168afcu;
    // NOP
    // 0x168b00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x168b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168b04: 0x0  nop
    ctx->pc = 0x168b04u;
    // NOP
    ctx->pc = 0x168b08u;
}
