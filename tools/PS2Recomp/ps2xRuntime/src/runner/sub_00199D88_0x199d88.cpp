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

// Function: sub_00199D88
// Address: 0x199d88 - 0x199e08
void sub_00199D88_0x199d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199D88_0x199d88");
#endif

    switch (ctx->pc) {
        case 0x199db8u: goto label_199db8;
        case 0x199dd4u: goto label_199dd4;
        default: break;
    }

    ctx->pc = 0x199d88u;

    // 0x199d88: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x199d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x199d8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199d90: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x199d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x199d94: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x199d94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x199d98: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199D98u;
    {
        const bool branch_taken_0x199d98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x199D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D98u;
        // 0x199d9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d98) {
            ctx->pc = 0x199DB0u;
            goto label_199db0;
        }
    }
    ctx->pc = 0x199DA0u;
    // 0x199da0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x199da4: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x199da4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8898u));
    // 0x199da8: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x199DA8u;
    {
        const bool branch_taken_0x199da8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x199DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DA8u;
        // 0x199dac: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199da8) {
            ctx->pc = 0x199DC0u;
            goto label_199dc0;
        }
    }
    ctx->pc = 0x199DB0u;
label_199db0:
    // 0x199db0: 0xc0666ae  jal         func_199AB8
    ctx->pc = 0x199DB0u;
    SET_GPR_U32(ctx, 31, 0x199DB8u);
    ctx->pc = 0x199AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199AB8u, 0x199DB0u, 0x199DB8u)) {
        return;
    }
    ctx->pc = 0x199DB8u;
label_199db8:
    // 0x199db8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x199DB8u;
    {
        const bool branch_taken_0x199db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DB8u;
        // 0x199dbc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199db8) {
            ctx->pc = 0x199E00u;
            goto label_199e00;
        }
    }
    ctx->pc = 0x199DC0u;
label_199dc0:
    // 0x199dc0: 0x8c438910  lw          $v1, -0x76F0($v0)
    ctx->pc = 0x199dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936848)));
    // 0x199dc4: 0x54c30005  bnel        $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x199DC4u;
    {
        const bool branch_taken_0x199dc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x199dc4) {
            ctx->pc = 0x199DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199DC4u;
            // 0x199dc8: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199DDCu;
            goto label_199ddc;
        }
    }
    ctx->pc = 0x199DCCu;
    // 0x199dcc: 0xc066782  jal         func_199E08
    ctx->pc = 0x199DCCu;
    SET_GPR_U32(ctx, 31, 0x199DD4u);
    ctx->pc = 0x199E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199E08u, 0x199DCCu, 0x199DD4u)) {
        return;
    }
    ctx->pc = 0x199DD4u;
label_199dd4:
    // 0x199dd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x199DD4u;
    {
        const bool branch_taken_0x199dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DD4u;
        // 0x199dd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dd4) {
            ctx->pc = 0x199E00u;
            goto label_199e00;
        }
    }
    ctx->pc = 0x199DDCu;
label_199ddc:
    // 0x199ddc: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199DDCu;
    {
        const bool branch_taken_0x199ddc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x199ddc) {
            ctx->pc = 0x199DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199DDCu;
            // 0x199de0: 0x8c820068  lw          $v0, 0x68($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199DECu;
            goto label_199dec;
        }
    }
    ctx->pc = 0x199DE4u;
    // 0x199de4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x199DE4u;
    {
        const bool branch_taken_0x199de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DE4u;
        // 0x199de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199de4) {
            ctx->pc = 0x199DF8u;
            goto label_199df8;
        }
    }
    ctx->pc = 0x199DECu;
label_199dec:
    // 0x199dec: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199DECu;
    {
        const bool branch_taken_0x199dec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x199DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DECu;
        // 0x199df0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dec) {
            ctx->pc = 0x199E00u;
            goto label_199e00;
        }
    }
    ctx->pc = 0x199DF4u;
    // 0x199df4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_199df8:
    // 0x199df8: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x199df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x199dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199e00:
    // 0x199e00: 0x3e00008  jr          $ra
    ctx->pc = 0x199E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E00u;
        // 0x199e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199E08u;
}
