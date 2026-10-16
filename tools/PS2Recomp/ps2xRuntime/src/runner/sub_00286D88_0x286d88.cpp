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

// Function: sub_00286D88
// Address: 0x286d88 - 0x286e60
void sub_00286D88_0x286d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286D88_0x286d88");
#endif

    switch (ctx->pc) {
        case 0x286e08u: goto label_286e08;
        default: break;
    }

    ctx->pc = 0x286d88u;

    // 0x286d88: 0x8f828894  lw          $v0, -0x776C($gp)
    ctx->pc = 0x286d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936724)));
    // 0x286d8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x286d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286d90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286d94: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x286D94u;
    {
        const bool branch_taken_0x286d94 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x286D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D94u;
        // 0x286d98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d94) {
            ctx->pc = 0x286E44u;
            goto label_286e44;
        }
    }
    ctx->pc = 0x286D9Cu;
    // 0x286d9c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x286d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x286da0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x286da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286da4: 0x71023  negu        $v0, $a3
    ctx->pc = 0x286da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x286da8: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x286da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x286dac: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x286DACu;
    {
        const bool branch_taken_0x286dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DACu;
        // 0x286db0: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dac) {
            ctx->pc = 0x286E04u;
            goto label_286e04;
        }
    }
    ctx->pc = 0x286DB4u;
    // 0x286db4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x286db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x286db8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x286DB8u;
    {
        const bool branch_taken_0x286db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DB8u;
        // 0x286dbc: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286db8) {
            ctx->pc = 0x286DECu;
            goto label_286dec;
        }
    }
    ctx->pc = 0x286DC0u;
    // 0x286dc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x286DC0u;
    {
        const bool branch_taken_0x286dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286dc0) {
            ctx->pc = 0x286DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286DC0u;
            // 0x286dc4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286DDCu;
            goto label_286ddc;
        }
    }
    ctx->pc = 0x286DC8u;
    // 0x286dc8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x286dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x286dcc: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x286dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x286dd0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x286dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x286dd4: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x286dd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x286dd8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x286dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_286ddc:
    // 0x286ddc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286de0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x286de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x286de4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x286de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x286de8: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x286de8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
label_286dec:
    // 0x286dec: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x286decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x286df0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286df4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x286df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x286df8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x286df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x286dfc: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x286DFCu;
    {
        const bool branch_taken_0x286dfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DFCu;
        // 0x286e00: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dfc) {
            ctx->pc = 0x286E44u;
            goto label_286e44;
        }
    }
    ctx->pc = 0x286E04u;
label_286e04:
    // 0x286e04: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x286e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_286e08:
    // 0x286e08: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x286e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286e0c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286e10: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x286e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x286e14: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x286e14u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x286e18: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x286e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x286e1c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286e20: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x286e20u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x286e24: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x286e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x286e28: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286e2c: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x286e2cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x286e30: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x286e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x286e34: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286e38: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x286e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x286e3c: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x286E3Cu;
    {
        const bool branch_taken_0x286e3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E3Cu;
        // 0x286e40: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e3c) {
            ctx->pc = 0x286E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286e08;
        }
    }
    ctx->pc = 0x286E44u;
label_286e44:
    // 0x286e44: 0x3e00008  jr          $ra
    ctx->pc = 0x286E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E44u;
        // 0x286e48: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286E4Cu;
    // 0x286e4c: 0x0  nop
    ctx->pc = 0x286e4cu;
    // NOP
    // 0x286e50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x286e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286e54: 0x0  nop
    ctx->pc = 0x286e54u;
    // NOP
    // 0x286e58: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x286e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e5c: 0x0  nop
    ctx->pc = 0x286e5cu;
    // NOP
    ctx->pc = 0x286e60u;
}
