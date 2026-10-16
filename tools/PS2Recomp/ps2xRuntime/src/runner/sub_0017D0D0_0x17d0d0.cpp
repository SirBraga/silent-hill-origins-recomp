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

// Function: sub_0017D0D0
// Address: 0x17d0d0 - 0x17d120
void sub_0017D0D0_0x17d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D0D0_0x17d0d0");
#endif

    switch (ctx->pc) {
        case 0x17d0ecu: goto label_17d0ec;
        case 0x17d0f8u: goto label_17d0f8;
        default: break;
    }

    ctx->pc = 0x17d0d0u;

    // 0x17d0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d0d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d0d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d0dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d0e4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17D0E4u;
    SET_GPR_U32(ctx, 31, 0x17D0ECu);
    ctx->pc = 0x17D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0E4u;
    // 0x17d0e8: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17D0E4u, 0x17D0ECu)) {
        return;
    }
    ctx->pc = 0x17D0ECu;
label_17d0ec:
    // 0x17d0ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0f0: 0xc05f44e  jal         func_17D138
    ctx->pc = 0x17D0F0u;
    SET_GPR_U32(ctx, 31, 0x17D0F8u);
    ctx->pc = 0x17D0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0F0u;
    // 0x17d0f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17D138u, 0x17D0F0u, 0x17D0F8u)) {
        return;
    }
    ctx->pc = 0x17D0F8u;
label_17d0f8:
    // 0x17d0f8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x17d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17d0fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d100: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x17d100u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x17d104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d108: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17d108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d10c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D10Cu;
        // 0x17d110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D114u;
    // 0x17d114: 0x0  nop
    ctx->pc = 0x17d114u;
    // NOP
    // 0x17d118: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17d118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x17d11c: 0x0  nop
    ctx->pc = 0x17d11cu;
    // NOP
    ctx->pc = 0x17d120u;
}
