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

// Function: sub_002E3468
// Address: 0x2e3468 - 0x2e34b8
void sub_002E3468_0x2e3468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3468_0x2e3468");
#endif

    switch (ctx->pc) {
        case 0x2e3490u: goto label_2e3490;
        default: break;
    }

    ctx->pc = 0x2e3468u;

    // 0x2e3468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e346c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e346cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e3470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3478: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2e3478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e347c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2e347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e3480: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x2e3480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2e3484: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2e3484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2e3488: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2E3488u;
    SET_GPR_U32(ctx, 31, 0x2E3490u);
    ctx->pc = 0x2E348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3488u;
    // 0x2e348c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E3488u, 0x2E3490u)) {
        return;
    }
    ctx->pc = 0x2E3490u;
label_2e3490:
    // 0x2e3490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e3490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3498: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e3498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e349c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E349Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E349Cu;
        // 0x2e34a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E349Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E34A4u;
    // 0x2e34a4: 0x0  nop
    ctx->pc = 0x2e34a4u;
    // NOP
    // 0x2e34a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e34a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e34ac: 0x0  nop
    ctx->pc = 0x2e34acu;
    // NOP
    // 0x2e34b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e34b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e34b4: 0x0  nop
    ctx->pc = 0x2e34b4u;
    // NOP
    ctx->pc = 0x2e34b8u;
}
