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

// Function: sub_0016F3E8
// Address: 0x16f3e8 - 0x16f448
void sub_0016F3E8_0x16f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F3E8_0x16f3e8");
#endif

    switch (ctx->pc) {
        case 0x16f3fcu: goto label_16f3fc;
        case 0x16f41cu: goto label_16f41c;
        case 0x16f434u: goto label_16f434;
        default: break;
    }

    ctx->pc = 0x16f3e8u;

    // 0x16f3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f3ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16f3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16f3f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f3f4: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16F3F4u;
    SET_GPR_U32(ctx, 31, 0x16F3FCu);
    ctx->pc = 0x16F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F3F4u;
    // 0x16f3f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16F3F4u, 0x16F3FCu)) {
        return;
    }
    ctx->pc = 0x16F3FCu;
label_16f3fc:
    // 0x16f3fc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16f400: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16f400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16f404: 0x246350e8  addiu       $v1, $v1, 0x50E8
    ctx->pc = 0x16f404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20712));
    // 0x16f408: 0x244250a0  addiu       $v0, $v0, 0x50A0
    ctx->pc = 0x16f408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20640));
    // 0x16f40c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16f410: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16f410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16f414: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16F414u;
    SET_GPR_U32(ctx, 31, 0x16F41Cu);
    ctx->pc = 0x16F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F414u;
    // 0x16f418: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16F414u, 0x16F41Cu)) {
        return;
    }
    ctx->pc = 0x16F41Cu;
label_16f41c:
    // 0x16f41c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16f420: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16f420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16f424: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x16f424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x16f428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16f428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f42c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16F42Cu;
    SET_GPR_U32(ctx, 31, 0x16F434u);
    ctx->pc = 0x16F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F42Cu;
    // 0x16f430: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16F42Cu, 0x16F434u)) {
        return;
    }
    ctx->pc = 0x16F434u;
label_16f434:
    // 0x16f434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16f434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f43c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16f43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f440: 0x3e00008  jr          $ra
    ctx->pc = 0x16F440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F440u;
        // 0x16f444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F448u;
}
