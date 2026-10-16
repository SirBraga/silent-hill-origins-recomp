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

// Function: sub_00180DA8
// Address: 0x180da8 - 0x180df8
void sub_00180DA8_0x180da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180DA8_0x180da8");
#endif

    switch (ctx->pc) {
        case 0x180dd0u: goto label_180dd0;
        case 0x180de4u: goto label_180de4;
        default: break;
    }

    ctx->pc = 0x180da8u;

    // 0x180da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180dac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180db0: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x180db0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x180db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180db8: 0x8e02fa60  lw          $v0, -0x5A0($s0)
    ctx->pc = 0x180db8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA60u));
    // 0x180dbc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x180DBCu;
    {
        const bool branch_taken_0x180dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180dbc) {
            ctx->pc = 0x180DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180DBCu;
            // 0x180dc0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180DE8u;
            goto label_180de8;
        }
    }
    ctx->pc = 0x180DC4u;
    // 0x180dc4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x180dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180dc8: 0xc060300  jal         func_180C00
    ctx->pc = 0x180DC8u;
    SET_GPR_U32(ctx, 31, 0x180DD0u);
    ctx->pc = 0x180DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180DC8u;
    // 0x180dcc: 0x2484fa38  addiu       $a0, $a0, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180C00u, 0x180DC8u, 0x180DD0u)) {
        return;
    }
    ctx->pc = 0x180DD0u;
label_180dd0:
    // 0x180dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180dd4: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x180dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x180dd8: 0xae03fa60  sw          $v1, -0x5A0($s0)
    ctx->pc = 0x180dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965856), GPR_U32(ctx, 3));
    // 0x180ddc: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x180DDCu;
    SET_GPR_U32(ctx, 31, 0x180DE4u);
    ctx->pc = 0x180DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180DDCu;
    // 0x180de0: 0x248410c8  addiu       $a0, $a0, 0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x180DDCu, 0x180DE4u)) {
        return;
    }
    ctx->pc = 0x180DE4u;
label_180de4:
    // 0x180de4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_180de8:
    // 0x180de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180dec: 0x3e00008  jr          $ra
    ctx->pc = 0x180DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DECu;
        // 0x180df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180DF4u;
    // 0x180df4: 0x0  nop
    ctx->pc = 0x180df4u;
    // NOP
    ctx->pc = 0x180df8u;
}
