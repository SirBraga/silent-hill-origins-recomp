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

// Function: sub_00149368
// Address: 0x149368 - 0x1493a8
void sub_00149368_0x149368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149368_0x149368");
#endif

    switch (ctx->pc) {
        case 0x149390u: goto label_149390;
        default: break;
    }

    ctx->pc = 0x149368u;

    // 0x149368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14936c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x14936cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x149370: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149374: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x149374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x149378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14937c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149380: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x149380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x149384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149388: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x149388u;
    SET_GPR_U32(ctx, 31, 0x149390u);
    ctx->pc = 0x14938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149388u;
    // 0x14938c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x149388u, 0x149390u)) {
        return;
    }
    ctx->pc = 0x149390u;
label_149390:
    // 0x149390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149398: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x149398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x14939c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14939cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1493a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1493A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1493A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493A0u;
        // 0x1493a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1493A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1493A8u;
}
