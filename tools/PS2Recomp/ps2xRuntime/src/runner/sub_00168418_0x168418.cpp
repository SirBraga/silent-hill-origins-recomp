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

// Function: sub_00168418
// Address: 0x168418 - 0x168450
void sub_00168418_0x168418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168418_0x168418");
#endif

    switch (ctx->pc) {
        case 0x16843cu: goto label_16843c;
        default: break;
    }

    ctx->pc = 0x168418u;

    // 0x168418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16841c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16841cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x168420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168428: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x168428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16842c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16842Cu;
    {
        const bool branch_taken_0x16842c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16842c) {
            ctx->pc = 0x168430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16842Cu;
            // 0x168430: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168444u;
            goto label_168444;
        }
    }
    ctx->pc = 0x168434u;
    // 0x168434: 0xc07f228  jal         func_1FC8A0
    ctx->pc = 0x168434u;
    SET_GPR_U32(ctx, 31, 0x16843Cu);
    ctx->pc = 0x168438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168434u;
    // 0x168438: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC8A0u, 0x168434u, 0x16843Cu)) {
        return;
    }
    ctx->pc = 0x16843Cu;
label_16843c:
    // 0x16843c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x16843cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x168440: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x168440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_168444:
    // 0x168444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168448: 0x3e00008  jr          $ra
    ctx->pc = 0x168448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168448u;
        // 0x16844c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168450u;
}
