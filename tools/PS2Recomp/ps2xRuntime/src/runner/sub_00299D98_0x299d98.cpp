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

// Function: sub_00299D98
// Address: 0x299d98 - 0x299df0
void sub_00299D98_0x299d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299D98_0x299d98");
#endif

    switch (ctx->pc) {
        case 0x299dbcu: goto label_299dbc;
        case 0x299dd8u: goto label_299dd8;
        default: break;
    }

    ctx->pc = 0x299d98u;

    // 0x299d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299d9c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x299d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x299da0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299da4: 0x8c625e80  lw          $v0, 0x5E80($v1)
    ctx->pc = 0x299da4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735E80u));
    // 0x299da8: 0x24705e80  addiu       $s0, $v1, 0x5E80
    ctx->pc = 0x299da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24192));
    // 0x299dac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x299DACu;
    {
        const bool branch_taken_0x299dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DACu;
        // 0x299db0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299dac) {
            ctx->pc = 0x299DD8u;
            goto label_299dd8;
        }
    }
    ctx->pc = 0x299DB4u;
    // 0x299db4: 0xc0a69d6  jal         func_29A758
    ctx->pc = 0x299DB4u;
    SET_GPR_U32(ctx, 31, 0x299DBCu);
    ctx->pc = 0x29A758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29A758u, 0x299DB4u, 0x299DBCu)) {
        return;
    }
    ctx->pc = 0x299DBCu;
label_299dbc:
    // 0x299dbc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x299dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x299dc0: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x299dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x299dc4: 0x24a5d8b0  addiu       $a1, $a1, -0x2750
    ctx->pc = 0x299dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957232));
    // 0x299dc8: 0x24c6d8d0  addiu       $a2, $a2, -0x2730
    ctx->pc = 0x299dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957264));
    // 0x299dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299dd0: 0xc07eafc  jal         func_1FABF0
    ctx->pc = 0x299DD0u;
    SET_GPR_U32(ctx, 31, 0x299DD8u);
    ctx->pc = 0x299DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299DD0u;
    // 0x299dd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABF0u, 0x299DD0u, 0x299DD8u)) {
        return;
    }
    ctx->pc = 0x299DD8u;
label_299dd8:
    // 0x299dd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299de4: 0x3e00008  jr          $ra
    ctx->pc = 0x299DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DE4u;
        // 0x299de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299DECu;
    // 0x299dec: 0x0  nop
    ctx->pc = 0x299decu;
    // NOP
    ctx->pc = 0x299df0u;
}
