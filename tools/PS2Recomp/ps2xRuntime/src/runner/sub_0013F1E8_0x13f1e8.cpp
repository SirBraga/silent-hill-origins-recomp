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

// Function: sub_0013F1E8
// Address: 0x13f1e8 - 0x13f230
void sub_0013F1E8_0x13f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F1E8_0x13f1e8");
#endif

    switch (ctx->pc) {
        case 0x13f204u: goto label_13f204;
        case 0x13f210u: goto label_13f210;
        default: break;
    }

    ctx->pc = 0x13f1e8u;

    // 0x13f1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f1ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13f1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f1f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f1f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f1fc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x13F1FCu;
    SET_GPR_U32(ctx, 31, 0x13F204u);
    ctx->pc = 0x13F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1FCu;
    // 0x13f200: 0x240403b0  addiu       $a0, $zero, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x13F1FCu, 0x13F204u)) {
        return;
    }
    ctx->pc = 0x13F204u;
label_13f204:
    // 0x13f204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13f204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f208: 0xc04fcda  jal         func_13F368
    ctx->pc = 0x13F208u;
    SET_GPR_U32(ctx, 31, 0x13F210u);
    ctx->pc = 0x13F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F208u;
    // 0x13f20c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13F368u, 0x13F208u, 0x13F210u)) {
        return;
    }
    ctx->pc = 0x13F210u;
label_13f210:
    // 0x13f210: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x13f210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13f214: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f218: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x13f218u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x13f21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f220: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13f220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f224: 0x3e00008  jr          $ra
    ctx->pc = 0x13F224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F224u;
        // 0x13f228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F22Cu;
    // 0x13f22c: 0x0  nop
    ctx->pc = 0x13f22cu;
    // NOP
    ctx->pc = 0x13f230u;
}
