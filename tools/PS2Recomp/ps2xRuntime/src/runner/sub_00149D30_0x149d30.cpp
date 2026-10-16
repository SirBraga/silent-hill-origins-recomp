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

// Function: sub_00149D30
// Address: 0x149d30 - 0x149d60
void sub_00149D30_0x149d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149D30_0x149d30");
#endif

    switch (ctx->pc) {
        case 0x149d54u: goto label_149d54;
        default: break;
    }

    ctx->pc = 0x149d30u;

    // 0x149d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149d34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x149d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149d3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x149d3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d40: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x149d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x149d44: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x149d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x149d48: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x149d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x149d4c: 0xc0525e8  jal         func_1497A0
    ctx->pc = 0x149D4Cu;
    SET_GPR_U32(ctx, 31, 0x149D54u);
    ctx->pc = 0x149D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D4Cu;
    // 0x149d50: 0x8c460058  lw          $a2, 0x58($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1497A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1497A0u, 0x149D4Cu, 0x149D54u)) {
        return;
    }
    ctx->pc = 0x149D54u;
label_149d54:
    // 0x149d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149d58: 0x3e00008  jr          $ra
    ctx->pc = 0x149D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D58u;
        // 0x149d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149D60u;
}
