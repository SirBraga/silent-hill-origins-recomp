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

// Function: sub_002E89F8
// Address: 0x2e89f8 - 0x2e8a50
void sub_002E89F8_0x2e89f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E89F8_0x2e89f8");
#endif

    switch (ctx->pc) {
        case 0x2e8a24u: goto label_2e8a24;
        case 0x2e8a2cu: goto label_2e8a2c;
        default: break;
    }

    ctx->pc = 0x2e89f8u;

    // 0x2e89f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e89f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e89fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e89fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e8a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a08: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2e8a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e8a0c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2e8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e8a10: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e8a14: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2e8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e8a18: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2e8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e8a1c: 0xc0b7d76  jal         func_2DF5D8
    ctx->pc = 0x2E8A1Cu;
    SET_GPR_U32(ctx, 31, 0x2E8A24u);
    ctx->pc = 0x2E8A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A1Cu;
    // 0x2e8a20: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2E8A1Cu, 0x2E8A24u)) {
        return;
    }
    ctx->pc = 0x2E8A24u;
label_2e8a24:
    // 0x2e8a24: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E8A24u;
    SET_GPR_U32(ctx, 31, 0x2E8A2Cu);
    ctx->pc = 0x2E8A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A24u;
    // 0x2e8a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E8A24u, 0x2E8A2Cu)) {
        return;
    }
    ctx->pc = 0x2E8A2Cu;
label_2e8a2c:
    // 0x2e8a2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8a34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A34u;
        // 0x2e8a38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8A3Cu;
    // 0x2e8a3c: 0x0  nop
    ctx->pc = 0x2e8a3cu;
    // NOP
    // 0x2e8a40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e8a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e8a44: 0x0  nop
    ctx->pc = 0x2e8a44u;
    // NOP
    // 0x2e8a48: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e8a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e8a4c: 0x0  nop
    ctx->pc = 0x2e8a4cu;
    // NOP
    ctx->pc = 0x2e8a50u;
}
