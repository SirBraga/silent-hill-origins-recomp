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

// Function: sub_002E23E8
// Address: 0x2e23e8 - 0x2e2430
void sub_002E23E8_0x2e23e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E23E8_0x2e23e8");
#endif

    switch (ctx->pc) {
        case 0x2e2418u: goto label_2e2418;
        default: break;
    }

    ctx->pc = 0x2e23e8u;

    // 0x2e23e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e23e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e23ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e23ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e23f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e23f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e23f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e23f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e23f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e23fc: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2e23fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e2400: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2400u;
    {
        const bool branch_taken_0x2e2400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2400u;
        // 0x2e2404: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2400) {
            ctx->pc = 0x2E2418u;
            goto label_2e2418;
        }
    }
    ctx->pc = 0x2E2408u;
    // 0x2e2408: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x2e2408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e240c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e2410: 0xc0b6726  jal         func_2D9C98
    ctx->pc = 0x2E2410u;
    SET_GPR_U32(ctx, 31, 0x2E2418u);
    ctx->pc = 0x2E2414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2410u;
    // 0x2e2414: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C98u, 0x2E2410u, 0x2E2418u)) {
        return;
    }
    ctx->pc = 0x2E2418u;
label_2e2418:
    // 0x2e2418: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e241c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e241cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2420: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e2420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2424: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2424u;
        // 0x2e2428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E242Cu;
    // 0x2e242c: 0x0  nop
    ctx->pc = 0x2e242cu;
    // NOP
    ctx->pc = 0x2e2430u;
}
