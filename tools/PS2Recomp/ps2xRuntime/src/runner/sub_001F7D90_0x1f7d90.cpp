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

// Function: sub_001F7D90
// Address: 0x1f7d90 - 0x1f7e30
void sub_001F7D90_0x1f7d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7D90_0x1f7d90");
#endif

    switch (ctx->pc) {
        case 0x1f7da8u: goto label_1f7da8;
        case 0x1f7dc0u: goto label_1f7dc0;
        default: break;
    }

    ctx->pc = 0x1f7d90u;

    // 0x1f7d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f7d94: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1f7d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1f7d98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f7d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d9c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f7da0: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F7DA0u;
    SET_GPR_U32(ctx, 31, 0x1F7DA8u);
    ctx->pc = 0x1F7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7DA0u;
    // 0x1f7da4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F7DA0u, 0x1F7DA8u)) {
        return;
    }
    ctx->pc = 0x1F7DA8u;
label_1f7da8:
    // 0x1f7da8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f7da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7dac: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1f7dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1f7db0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7DB0u;
    {
        const bool branch_taken_0x1f7db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DB0u;
        // 0x1f7db4: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7db0) {
            ctx->pc = 0x1F7DC0u;
            goto label_1f7dc0;
        }
    }
    ctx->pc = 0x1F7DB8u;
    // 0x1f7db8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7DB8u;
    {
        const bool branch_taken_0x1f7db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DB8u;
        // 0x1f7dbc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7db8) {
            ctx->pc = 0x1F7DC8u;
            goto label_1f7dc8;
        }
    }
    ctx->pc = 0x1F7DC0u;
label_1f7dc0:
    // 0x1f7dc0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F7DC0u;
    {
        const bool branch_taken_0x1f7dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DC0u;
        // 0x1f7dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dc0) {
            ctx->pc = 0x1F7E24u;
            goto label_1f7e24;
        }
    }
    ctx->pc = 0x1F7DC8u;
label_1f7dc8:
    // 0x1f7dc8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7DC8u;
    {
        const bool branch_taken_0x1f7dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DC8u;
        // 0x1f7dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dc8) {
            ctx->pc = 0x1F7E24u;
            goto label_1f7e24;
        }
    }
    ctx->pc = 0x1F7DD0u;
    // 0x1f7dd0: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1f7dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1f7dd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7DD4u;
    {
        const bool branch_taken_0x1f7dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DD4u;
        // 0x1f7dd8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dd4) {
            ctx->pc = 0x1F7DECu;
            goto label_1f7dec;
        }
    }
    ctx->pc = 0x1F7DDCu;
    // 0x1f7ddc: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F7DDCu;
    {
        const bool branch_taken_0x1f7ddc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1F7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DDCu;
        // 0x1f7de0: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ddc) {
            ctx->pc = 0x1F7DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7dc0;
        }
    }
    ctx->pc = 0x1F7DE4u;
    // 0x1f7de4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7DE4u;
    {
        const bool branch_taken_0x1f7de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7de4) {
            ctx->pc = 0x1F7DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7DE4u;
            // 0x1f7de8: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7DF8u;
            goto label_1f7df8;
        }
    }
    ctx->pc = 0x1F7DECu;
label_1f7dec:
    // 0x1f7dec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f7decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f7df0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F7DF0u;
    {
        const bool branch_taken_0x1f7df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DF0u;
        // 0x1f7df4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7df0) {
            ctx->pc = 0x1F7E24u;
            goto label_1f7e24;
        }
    }
    ctx->pc = 0x1F7DF8u;
label_1f7df8:
    // 0x1f7df8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7DF8u;
    {
        const bool branch_taken_0x1f7df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DF8u;
        // 0x1f7dfc: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7df8) {
            ctx->pc = 0x1F7E10u;
            goto label_1f7e10;
        }
    }
    ctx->pc = 0x1F7E00u;
    // 0x1f7e00: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1f7e00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7e04: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x1f7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x1f7e08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7E08u;
    {
        const bool branch_taken_0x1f7e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E08u;
        // 0x1f7e0c: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e08) {
            ctx->pc = 0x1F7E1Cu;
            goto label_1f7e1c;
        }
    }
    ctx->pc = 0x1F7E10u;
label_1f7e10:
    // 0x1f7e10: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1f7e10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7e14: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1f7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f7e18: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1f7e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_1f7e1c:
    // 0x1f7e1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f7e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f7e20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f7e20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1f7e24:
    // 0x1f7e24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f7e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7e28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E28u;
        // 0x1f7e2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7E30u;
}
