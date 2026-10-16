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

// Function: sub_001541D8
// Address: 0x1541d8 - 0x154220
void sub_001541D8_0x1541d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001541D8_0x1541d8");
#endif

    switch (ctx->pc) {
        case 0x1541f4u: goto label_1541f4;
        case 0x154200u: goto label_154200;
        default: break;
    }

    ctx->pc = 0x1541d8u;

    // 0x1541d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1541d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1541dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1541dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1541e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1541e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1541e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1541e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1541e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1541e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1541ec: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1541ECu;
    SET_GPR_U32(ctx, 31, 0x1541F4u);
    ctx->pc = 0x1541F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1541ECu;
    // 0x1541f0: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1541ECu, 0x1541F4u)) {
        return;
    }
    ctx->pc = 0x1541F4u;
label_1541f4:
    // 0x1541f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1541f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1541f8: 0xc055088  jal         func_154220
    ctx->pc = 0x1541F8u;
    SET_GPR_U32(ctx, 31, 0x154200u);
    ctx->pc = 0x1541FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1541F8u;
    // 0x1541fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x154220u, 0x1541F8u, 0x154200u)) {
        return;
    }
    ctx->pc = 0x154200u;
label_154200:
    // 0x154200: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x154200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x154204: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x154204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154208: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x154208u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x15420c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15420cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154210: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x154210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154214: 0x3e00008  jr          $ra
    ctx->pc = 0x154214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154214u;
        // 0x154218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15421Cu;
    // 0x15421c: 0x0  nop
    ctx->pc = 0x15421cu;
    // NOP
    ctx->pc = 0x154220u;
}
