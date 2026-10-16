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

// Function: sub_00314DA0
// Address: 0x314da0 - 0x314e00
void sub_00314DA0_0x314da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314DA0_0x314da0");
#endif

    switch (ctx->pc) {
        case 0x314de0u: goto label_314de0;
        default: break;
    }

    ctx->pc = 0x314da0u;

    // 0x314da0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x314da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x314da4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x314da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x314da8: 0x8c486ccc  lw          $t0, 0x6CCC($v0)
    ctx->pc = 0x314da8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x686CCCu));
    // 0x314dac: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x314dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x314db0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x314db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314db4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x314db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x314db8: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x314db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x314dbc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x314dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x314dc0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x314dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x314dc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x314dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314dc8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x314dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x314dcc: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x314dccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x314dd0: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x314dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x314dd4: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x314dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x314dd8: 0xc0c5fe4  jal         func_317F90
    ctx->pc = 0x314DD8u;
    SET_GPR_U32(ctx, 31, 0x314DE0u);
    ctx->pc = 0x314DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314DD8u;
    // 0x314ddc: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317F90u, 0x314DD8u, 0x314DE0u)) {
        return;
    }
    ctx->pc = 0x314DE0u;
label_314de0:
    // 0x314de0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x314de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314de4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x314de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314de8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x314de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x314dec: 0x3e00008  jr          $ra
    ctx->pc = 0x314DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DECu;
        // 0x314df0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314DF4u;
    // 0x314df4: 0x0  nop
    ctx->pc = 0x314df4u;
    // NOP
    // 0x314df8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x314df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x314dfc: 0x0  nop
    ctx->pc = 0x314dfcu;
    // NOP
    ctx->pc = 0x314e00u;
}
