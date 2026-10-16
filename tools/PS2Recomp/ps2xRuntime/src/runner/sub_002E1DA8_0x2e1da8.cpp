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

// Function: sub_002E1DA8
// Address: 0x2e1da8 - 0x2e1e70
void sub_002E1DA8_0x2e1da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1DA8_0x2e1da8");
#endif

    switch (ctx->pc) {
        case 0x2e1ddcu: goto label_2e1ddc;
        case 0x2e1df0u: goto label_2e1df0;
        case 0x2e1e10u: goto label_2e1e10;
        case 0x2e1e20u: goto label_2e1e20;
        case 0x2e1e30u: goto label_2e1e30;
        case 0x2e1e48u: goto label_2e1e48;
        default: break;
    }

    ctx->pc = 0x2e1da8u;

    // 0x2e1da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1dac: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2e1dacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2e1db0: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2e1db0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x2e1db4: 0x8f849068  lw          $a0, -0x6F98($gp)
    ctx->pc = 0x2e1db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
    // 0x2e1db8: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2e1db8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x2e1dbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e1dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1dc4: 0x24c681d0  addiu       $a2, $a2, -0x7E30
    ctx->pc = 0x2e1dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934992));
    // 0x2e1dc8: 0x24e78230  addiu       $a3, $a3, -0x7DD0
    ctx->pc = 0x2e1dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935088));
    // 0x2e1dcc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e1dd0: 0x27889050  addiu       $t0, $gp, -0x6FB0
    ctx->pc = 0x2e1dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938704));
    // 0x2e1dd4: 0xc0b8f16  jal         func_2E3C58
    ctx->pc = 0x2E1DD4u;
    SET_GPR_U32(ctx, 31, 0x2E1DDCu);
    ctx->pc = 0x2E1DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1DD4u;
    // 0x2e1dd8: 0x35290810  ori         $t1, $t1, 0x810 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2064);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3C58u, 0x2E1DD4u, 0x2E1DDCu)) {
        return;
    }
    ctx->pc = 0x2E1DDCu;
label_2e1ddc:
    // 0x2e1ddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e1ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1de0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E1DE0u;
    {
        const bool branch_taken_0x2e1de0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DE0u;
        // 0x2e1de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1de0) {
            ctx->pc = 0x2E1E4Cu;
            goto label_2e1e4c;
        }
    }
    ctx->pc = 0x2E1DE8u;
    // 0x2e1de8: 0xc0b86f0  jal         func_2E1BC0
    ctx->pc = 0x2E1DE8u;
    SET_GPR_U32(ctx, 31, 0x2E1DF0u);
    ctx->pc = 0x2E1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1DE8u;
    // 0x2e1dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1BC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1BC0u, 0x2E1DE8u, 0x2E1DF0u)) {
        return;
    }
    ctx->pc = 0x2E1DF0u;
label_2e1df0:
    // 0x2e1df0: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2e1df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2e1df4: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2e1df4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2e1df8: 0x24a54f60  addiu       $a1, $a1, 0x4F60
    ctx->pc = 0x2e1df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20320));
    // 0x2e1dfc: 0x24e750b0  addiu       $a3, $a3, 0x50B0
    ctx->pc = 0x2e1dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20656));
    // 0x2e1e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1e04: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2e1e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e1e08: 0xc0b8e68  jal         func_2E39A0
    ctx->pc = 0x2E1E08u;
    SET_GPR_U32(ctx, 31, 0x2E1E10u);
    ctx->pc = 0x2E1E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1E08u;
    // 0x2e1e0c: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E39A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E39A0u, 0x2E1E08u, 0x2E1E10u)) {
        return;
    }
    ctx->pc = 0x2E1E10u;
label_2e1e10:
    // 0x2e1e10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E1E10u;
    {
        const bool branch_taken_0x2e1e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e10) {
            ctx->pc = 0x2E1E40u;
            goto label_2e1e40;
        }
    }
    ctx->pc = 0x2E1E18u;
    // 0x2e1e18: 0xc0ba232  jal         func_2E88C8
    ctx->pc = 0x2E1E18u;
    SET_GPR_U32(ctx, 31, 0x2E1E20u);
    ctx->pc = 0x2E88C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E88C8u, 0x2E1E18u, 0x2E1E20u)) {
        return;
    }
    ctx->pc = 0x2E1E20u;
label_2e1e20:
    // 0x2e1e20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1E20u;
    {
        const bool branch_taken_0x2e1e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E20u;
        // 0x2e1e24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1e20) {
            ctx->pc = 0x2E1E40u;
            goto label_2e1e40;
        }
    }
    ctx->pc = 0x2E1E28u;
    // 0x2e1e28: 0xc0b8f7c  jal         func_2E3DF0
    ctx->pc = 0x2E1E28u;
    SET_GPR_U32(ctx, 31, 0x2E1E30u);
    ctx->pc = 0x2E1E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1E28u;
    // 0x2e1e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3DF0u, 0x2E1E28u, 0x2E1E30u)) {
        return;
    }
    ctx->pc = 0x2E1E30u;
label_2e1e30:
    // 0x2e1e30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1e34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e1e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1E38u;
    {
        const bool branch_taken_0x2e1e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E38u;
        // 0x2e1e3c: 0xaf838c3c  sw          $v1, -0x73C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1e38) {
            ctx->pc = 0x2E1E4Cu;
            goto label_2e1e4c;
        }
    }
    ctx->pc = 0x2E1E40u;
label_2e1e40:
    // 0x2e1e40: 0xc0b8df0  jal         func_2E37C0
    ctx->pc = 0x2E1E40u;
    SET_GPR_U32(ctx, 31, 0x2E1E48u);
    ctx->pc = 0x2E1E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1E40u;
    // 0x2e1e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E37C0u, 0x2E1E40u, 0x2E1E48u)) {
        return;
    }
    ctx->pc = 0x2E1E48u;
label_2e1e48:
    // 0x2e1e48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1e4c:
    // 0x2e1e4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1e54: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E54u;
        // 0x2e1e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1E5Cu;
    // 0x2e1e5c: 0x0  nop
    ctx->pc = 0x2e1e5cu;
    // NOP
    // 0x2e1e60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e1e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e1e64: 0x0  nop
    ctx->pc = 0x2e1e64u;
    // NOP
    // 0x2e1e68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e1e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e1e6c: 0x0  nop
    ctx->pc = 0x2e1e6cu;
    // NOP
    ctx->pc = 0x2e1e70u;
}
