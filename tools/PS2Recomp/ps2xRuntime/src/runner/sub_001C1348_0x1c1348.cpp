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

// Function: sub_001C1348
// Address: 0x1c1348 - 0x1c1380
void sub_001C1348_0x1c1348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1348_0x1c1348");
#endif

    switch (ctx->pc) {
        case 0x1c1370u: goto label_1c1370;
        default: break;
    }

    ctx->pc = 0x1c1348u;

    // 0x1c1348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c134c: 0x248502d0  addiu       $a1, $a0, 0x2D0
    ctx->pc = 0x1c134cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x1c1350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1354: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1c1354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1c1358: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c1358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c135c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c135cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c1360: 0xc48e02d8  lwc1        $f14, 0x2D8($a0)
    ctx->pc = 0x1c1360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c1364: 0xc48f02d4  lwc1        $f15, 0x2D4($a0)
    ctx->pc = 0x1c1364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c1368: 0xc06d02e  jal         func_1B40B8
    ctx->pc = 0x1C1368u;
    SET_GPR_U32(ctx, 31, 0x1C1370u);
    ctx->pc = 0x1C136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1368u;
    // 0x1c136c: 0x248402dc  addiu       $a0, $a0, 0x2DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 732));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B40B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B40B8u, 0x1C1368u, 0x1C1370u)) {
        return;
    }
    ctx->pc = 0x1C1370u;
label_1c1370:
    // 0x1c1370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1374: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c1374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c1378: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1378u;
        // 0x1c137c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1380u;
}
