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

// Function: sub_00232DA0
// Address: 0x232da0 - 0x232e38
void sub_00232DA0_0x232da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232DA0_0x232da0");
#endif

    switch (ctx->pc) {
        case 0x232dc4u: goto label_232dc4;
        case 0x232de4u: goto label_232de4;
        case 0x232decu: goto label_232dec;
        default: break;
    }

    ctx->pc = 0x232da0u;

    // 0x232da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232da4: 0xdf828440  ld          $v0, -0x7BC0($gp)
    ctx->pc = 0x232da4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935616)));
    // 0x232da8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x232da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x232dac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232DACu;
    {
        const bool branch_taken_0x232dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DACu;
        // 0x232db0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232dac) {
            ctx->pc = 0x232DBCu;
            goto label_232dbc;
        }
    }
    ctx->pc = 0x232DB4u;
    // 0x232db4: 0xff808440  sd          $zero, -0x7BC0($gp)
    ctx->pc = 0x232db4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U64(ctx, 0));
    // 0x232db8: 0xaf808448  sw          $zero, -0x7BB8($gp)
    ctx->pc = 0x232db8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 0));
label_232dbc:
    // 0x232dbc: 0xc0919ba  jal         func_2466E8
    ctx->pc = 0x232DBCu;
    SET_GPR_U32(ctx, 31, 0x232DC4u);
    ctx->pc = 0x2466E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2466E8u, 0x232DBCu, 0x232DC4u)) {
        return;
    }
    ctx->pc = 0x232DC4u;
label_232dc4:
    // 0x232dc4: 0x8f8384b4  lw          $v1, -0x7B4C($gp)
    ctx->pc = 0x232dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935732)));
    // 0x232dc8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x232dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x232dcc: 0x245050c0  addiu       $s0, $v0, 0x50C0
    ctx->pc = 0x232dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x232dd0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x232dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x232dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232dd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x232dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x232ddc: 0xc08b9ae  jal         func_22E6B8
    ctx->pc = 0x232DDCu;
    SET_GPR_U32(ctx, 31, 0x232DE4u);
    ctx->pc = 0x232DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DDCu;
    // 0x232de0: 0xaf8384b4  sw          $v1, -0x7B4C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935732), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E6B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E6B8u, 0x232DDCu, 0x232DE4u)) {
        return;
    }
    ctx->pc = 0x232DE4u;
label_232de4:
    // 0x232de4: 0xc08e962  jal         func_23A588
    ctx->pc = 0x232DE4u;
    SET_GPR_U32(ctx, 31, 0x232DECu);
    ctx->pc = 0x23A588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23A588u, 0x232DE4u, 0x232DECu)) {
        return;
    }
    ctx->pc = 0x232DECu;
label_232dec:
    // 0x232dec: 0x8e0203c0  lw          $v0, 0x3C0($s0)
    ctx->pc = 0x232decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x232df0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x232DF0u;
    {
        const bool branch_taken_0x232df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DF0u;
        // 0x232df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232df0) {
            ctx->pc = 0x232E1Cu;
            goto label_232e1c;
        }
    }
    ctx->pc = 0x232DF8u;
    // 0x232df8: 0x8e0203c4  lw          $v0, 0x3C4($s0)
    ctx->pc = 0x232df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x232dfc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232DFCu;
    {
        const bool branch_taken_0x232dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DFCu;
        // 0x232e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232dfc) {
            ctx->pc = 0x232E1Cu;
            goto label_232e1c;
        }
    }
    ctx->pc = 0x232E04u;
    // 0x232e04: 0x8e0203c8  lw          $v0, 0x3C8($s0)
    ctx->pc = 0x232e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x232e08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232E08u;
    {
        const bool branch_taken_0x232e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E08u;
        // 0x232e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e08) {
            ctx->pc = 0x232E1Cu;
            goto label_232e1c;
        }
    }
    ctx->pc = 0x232E10u;
    // 0x232e10: 0x8e0203cc  lw          $v0, 0x3CC($s0)
    ctx->pc = 0x232e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 972)));
    // 0x232e14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x232E14u;
    {
        const bool branch_taken_0x232e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E14u;
        // 0x232e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e14) {
            ctx->pc = 0x232E20u;
            goto label_232e20;
        }
    }
    ctx->pc = 0x232E1Cu;
label_232e1c:
    // 0x232e1c: 0xaf8284d4  sw          $v0, -0x7B2C($gp)
    ctx->pc = 0x232e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935764), GPR_U32(ctx, 2));
label_232e20:
    // 0x232e20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x232e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x232E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E2Cu;
        // 0x232e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232E34u;
    // 0x232e34: 0x0  nop
    ctx->pc = 0x232e34u;
    // NOP
    ctx->pc = 0x232e38u;
}
