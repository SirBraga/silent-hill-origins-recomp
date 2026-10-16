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

// Function: sub_002A4348
// Address: 0x2a4348 - 0x2a4398
void sub_002A4348_0x2a4348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4348_0x2a4348");
#endif

    switch (ctx->pc) {
        case 0x2a436cu: goto label_2a436c;
        case 0x2a4384u: goto label_2a4384;
        default: break;
    }

    ctx->pc = 0x2a4348u;

    // 0x2a4348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a434c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2a434cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x2a4350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a4354: 0x8c625f00  lw          $v0, 0x5F00($v1)
    ctx->pc = 0x2a4354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735F00u));
    // 0x2a4358: 0x24705f00  addiu       $s0, $v1, 0x5F00
    ctx->pc = 0x2a4358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24320));
    // 0x2a435c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A435Cu;
    {
        const bool branch_taken_0x2a435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A435Cu;
        // 0x2a4360: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a435c) {
            ctx->pc = 0x2A4384u;
            goto label_2a4384;
        }
    }
    ctx->pc = 0x2A4364u;
    // 0x2a4364: 0xc0a6f32  jal         func_29BCC8
    ctx->pc = 0x2A4364u;
    SET_GPR_U32(ctx, 31, 0x2A436Cu);
    ctx->pc = 0x29BCC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29BCC8u, 0x2A4364u, 0x2A436Cu)) {
        return;
    }
    ctx->pc = 0x2A436Cu;
label_2a436c:
    // 0x2a436c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2a436cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2a4370: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x2a4370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x2a4374: 0x24a5e2a8  addiu       $a1, $a1, -0x1D58
    ctx->pc = 0x2a4374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959784));
    // 0x2a4378: 0x24c65ec0  addiu       $a2, $a2, 0x5EC0
    ctx->pc = 0x2a4378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24256));
    // 0x2a437c: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x2A437Cu;
    SET_GPR_U32(ctx, 31, 0x2A4384u);
    ctx->pc = 0x2A4380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A437Cu;
    // 0x2a4380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x2A437Cu, 0x2A4384u)) {
        return;
    }
    ctx->pc = 0x2A4384u;
label_2a4384:
    // 0x2a4384: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a4384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a438c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a438cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4390: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4390u;
        // 0x2a4394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4398u;
}
