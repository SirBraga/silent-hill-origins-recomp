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

// Function: sub_001D0380
// Address: 0x1d0380 - 0x1d03e0
void sub_001D0380_0x1d0380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0380_0x1d0380");
#endif

    switch (ctx->pc) {
        case 0x1d03a4u: goto label_1d03a4;
        case 0x1d03b0u: goto label_1d03b0;
        case 0x1d03c4u: goto label_1d03c4;
        case 0x1d03d4u: goto label_1d03d4;
        default: break;
    }

    ctx->pc = 0x1d0380u;

    // 0x1d0380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0384: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d0388: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D0388u;
    {
        const bool branch_taken_0x1d0388 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0388u;
        // 0x1d038c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0388) {
            ctx->pc = 0x1D03D4u;
            goto label_1d03d4;
        }
    }
    ctx->pc = 0x1D0390u;
    // 0x1d0390: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0390u;
    {
        const bool branch_taken_0x1d0390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0390) {
            ctx->pc = 0x1D0394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0390u;
            // 0x1d0394: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D03B8u;
            goto label_1d03b8;
        }
    }
    ctx->pc = 0x1D0398u;
    // 0x1d0398: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d0398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d039c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D039Cu;
    SET_GPR_U32(ctx, 31, 0x1D03A4u);
    ctx->pc = 0x1D03A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D039Cu;
    // 0x1d03a0: 0x248486b8  addiu       $a0, $a0, -0x7948 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D039Cu, 0x1D03A4u)) {
        return;
    }
    ctx->pc = 0x1D03A4u;
label_1d03a4:
    // 0x1d03a4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d03a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d03a8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D03A8u;
    SET_GPR_U32(ctx, 31, 0x1D03B0u);
    ctx->pc = 0x1D03ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03A8u;
    // 0x1d03ac: 0x248486c0  addiu       $a0, $a0, -0x7940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D03A8u, 0x1D03B0u)) {
        return;
    }
    ctx->pc = 0x1D03B0u;
label_1d03b0:
    // 0x1d03b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D03B0u;
    {
        const bool branch_taken_0x1d03b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03B0u;
        // 0x1d03b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03b0) {
            ctx->pc = 0x1D03D8u;
            goto label_1d03d8;
        }
    }
    ctx->pc = 0x1D03B8u;
label_1d03b8:
    // 0x1d03b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d03b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d03bc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D03BCu;
    SET_GPR_U32(ctx, 31, 0x1D03C4u);
    ctx->pc = 0x1D03C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03BCu;
    // 0x1d03c0: 0x248486c0  addiu       $a0, $a0, -0x7940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D03BCu, 0x1D03C4u)) {
        return;
    }
    ctx->pc = 0x1D03C4u;
label_1d03c4:
    // 0x1d03c4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d03c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d03c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d03cc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D03CCu;
    SET_GPR_U32(ctx, 31, 0x1D03D4u);
    ctx->pc = 0x1D03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03CCu;
    // 0x1d03d0: 0x248486b8  addiu       $a0, $a0, -0x7948 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D03CCu, 0x1D03D4u)) {
        return;
    }
    ctx->pc = 0x1D03D4u;
label_1d03d4:
    // 0x1d03d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d03d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d03d8:
    // 0x1d03d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D03D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D03DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03D8u;
        // 0x1d03dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D03D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D03E0u;
}
