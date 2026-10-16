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

// Function: sub_001041D0
// Address: 0x1041d0 - 0x104218
void sub_001041D0_0x1041d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001041D0_0x1041d0");
#endif

    switch (ctx->pc) {
        case 0x1041ecu: goto label_1041ec;
        case 0x1041f8u: goto label_1041f8;
        default: break;
    }

    ctx->pc = 0x1041d0u;

    // 0x1041d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1041d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1041d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1041d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1041d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1041d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1041dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1041dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1041e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1041e4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1041E4u;
    SET_GPR_U32(ctx, 31, 0x1041ECu);
    ctx->pc = 0x1041E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041E4u;
    // 0x1041e8: 0x24040118  addiu       $a0, $zero, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1041E4u, 0x1041ECu)) {
        return;
    }
    ctx->pc = 0x1041ECu;
label_1041ec:
    // 0x1041ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1041ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041f0: 0xc041086  jal         func_104218
    ctx->pc = 0x1041F0u;
    SET_GPR_U32(ctx, 31, 0x1041F8u);
    ctx->pc = 0x1041F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041F0u;
    // 0x1041f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104218u, 0x1041F0u, 0x1041F8u)) {
        return;
    }
    ctx->pc = 0x1041F8u;
label_1041f8:
    // 0x1041f8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1041f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1041fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1041fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104200: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x104200u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x104204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104208: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x104208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10420c: 0x3e00008  jr          $ra
    ctx->pc = 0x10420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10420Cu;
        // 0x104210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10420Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104214u;
    // 0x104214: 0x0  nop
    ctx->pc = 0x104214u;
    // NOP
    ctx->pc = 0x104218u;
}
