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

// Function: sub_00237DA8
// Address: 0x237da8 - 0x237e28
void sub_00237DA8_0x237da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237DA8_0x237da8");
#endif

    switch (ctx->pc) {
        case 0x237dd0u: goto label_237dd0;
        case 0x237de8u: goto label_237de8;
        case 0x237e00u: goto label_237e00;
        default: break;
    }

    ctx->pc = 0x237da8u;

    // 0x237da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237dac: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x237dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x237db0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x237db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237db4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x237db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x237db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237dbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x237dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x237dc4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x237dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x237dc8: 0xc093cca  jal         func_24F328
    ctx->pc = 0x237DC8u;
    SET_GPR_U32(ctx, 31, 0x237DD0u);
    ctx->pc = 0x237DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DC8u;
    // 0x237dcc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F328u, 0x237DC8u, 0x237DD0u)) {
        return;
    }
    ctx->pc = 0x237DD0u;
label_237dd0:
    // 0x237dd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x237dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x237dd4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x237dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x237dd8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x237dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x237ddc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237de0: 0xc093cca  jal         func_24F328
    ctx->pc = 0x237DE0u;
    SET_GPR_U32(ctx, 31, 0x237DE8u);
    ctx->pc = 0x237DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DE0u;
    // 0x237de4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F328u, 0x237DE0u, 0x237DE8u)) {
        return;
    }
    ctx->pc = 0x237DE8u;
label_237de8:
    // 0x237de8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x237de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x237dec: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x237decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x237df0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237df4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x237df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x237df8: 0xc08de00  jal         func_237800
    ctx->pc = 0x237DF8u;
    SET_GPR_U32(ctx, 31, 0x237E00u);
    ctx->pc = 0x237DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DF8u;
    // 0x237dfc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x237800u, 0x237DF8u, 0x237E00u)) {
        return;
    }
    ctx->pc = 0x237E00u;
label_237e00:
    // 0x237e00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x237e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x237e04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x237e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237e08: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x237e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x237e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237e10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237e14: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x237e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x237e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237e1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237e20: 0x3e00008  jr          $ra
    ctx->pc = 0x237E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E20u;
        // 0x237e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237E28u;
}
