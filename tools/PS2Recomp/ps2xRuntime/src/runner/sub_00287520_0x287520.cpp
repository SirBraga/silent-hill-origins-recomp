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

// Function: sub_00287520
// Address: 0x287520 - 0x287570
void sub_00287520_0x287520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287520_0x287520");
#endif

    switch (ctx->pc) {
        case 0x287530u: goto label_287530;
        default: break;
    }

    ctx->pc = 0x287520u;

    // 0x287520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x287520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x287524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x287528: 0xc0a1a5c  jal         func_286970
    ctx->pc = 0x287528u;
    SET_GPR_U32(ctx, 31, 0x287530u);
    ctx->pc = 0x28752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287528u;
    // 0x28752c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286970u, 0x287528u, 0x287530u)) {
        return;
    }
    ctx->pc = 0x287530u;
label_287530:
    // 0x287530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x287530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287534: 0x3e00008  jr          $ra
    ctx->pc = 0x287534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287534u;
        // 0x287538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28753Cu;
    // 0x28753c: 0x0  nop
    ctx->pc = 0x28753cu;
    // NOP
    // 0x287540: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x287540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x287544: 0x0  nop
    ctx->pc = 0x287544u;
    // NOP
    // 0x287548: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x287548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28754c: 0x0  nop
    ctx->pc = 0x28754cu;
    // NOP
    // 0x287550: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x287550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x287554: 0x0  nop
    ctx->pc = 0x287554u;
    // NOP
    // 0x287558: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28755c: 0x0  nop
    ctx->pc = 0x28755cu;
    // NOP
    // 0x287560: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x287560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x287564: 0x0  nop
    ctx->pc = 0x287564u;
    // NOP
    // 0x287568: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x287568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28756c: 0x0  nop
    ctx->pc = 0x28756cu;
    // NOP
    ctx->pc = 0x287570u;
}
