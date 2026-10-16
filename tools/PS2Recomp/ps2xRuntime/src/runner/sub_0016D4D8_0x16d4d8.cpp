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

// Function: sub_0016D4D8
// Address: 0x16d4d8 - 0x16d528
void sub_0016D4D8_0x16d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D4D8_0x16d4d8");
#endif

    switch (ctx->pc) {
        case 0x16d4ecu: goto label_16d4ec;
        case 0x16d50cu: goto label_16d50c;
        default: break;
    }

    ctx->pc = 0x16d4d8u;

    // 0x16d4d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d4dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16d4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16d4e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d4e4: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16D4E4u;
    SET_GPR_U32(ctx, 31, 0x16D4ECu);
    ctx->pc = 0x16D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4E4u;
    // 0x16d4e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16D4E4u, 0x16D4ECu)) {
        return;
    }
    ctx->pc = 0x16D4ECu;
label_16d4ec:
    // 0x16d4ec: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16d4f0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16d4f4: 0x24634c90  addiu       $v1, $v1, 0x4C90
    ctx->pc = 0x16d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19600));
    // 0x16d4f8: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x16d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
    // 0x16d4fc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16d500: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x16d500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x16d504: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16D504u;
    SET_GPR_U32(ctx, 31, 0x16D50Cu);
    ctx->pc = 0x16D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D504u;
    // 0x16d508: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16D504u, 0x16D50Cu)) {
        return;
    }
    ctx->pc = 0x16D50Cu;
label_16d50c:
    // 0x16d50c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16d50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d510: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x16d510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x16d514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16d514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d51c: 0x3e00008  jr          $ra
    ctx->pc = 0x16D51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D51Cu;
        // 0x16d520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D524u;
    // 0x16d524: 0x0  nop
    ctx->pc = 0x16d524u;
    // NOP
    ctx->pc = 0x16d528u;
}
