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

// Function: sub_00304D90
// Address: 0x304d90 - 0x304e28
void sub_00304D90_0x304d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304D90_0x304d90");
#endif

    switch (ctx->pc) {
        case 0x304df8u: goto label_304df8;
        default: break;
    }

    ctx->pc = 0x304d90u;

    // 0x304d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x304d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x304d94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x304d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x304d98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x304d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x304d9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x304d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304da0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x304da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x304da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304dac: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x304DACu;
    {
        const bool branch_taken_0x304dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x304DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DACu;
        // 0x304db0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304dac) {
            ctx->pc = 0x304E0Cu;
            goto label_304e0c;
        }
    }
    ctx->pc = 0x304DB4u;
    // 0x304db4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x304db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x304db8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x304DB8u;
    {
        const bool branch_taken_0x304db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DB8u;
        // 0x304dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304db8) {
            ctx->pc = 0x304E10u;
            goto label_304e10;
        }
    }
    ctx->pc = 0x304DC0u;
    // 0x304dc0: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x304DC0u;
    {
        const bool branch_taken_0x304dc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x304dc0) {
            ctx->pc = 0x304DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304DC0u;
            // 0x304dc4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304E14u;
            goto label_304e14;
        }
    }
    ctx->pc = 0x304DC8u;
    // 0x304dc8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x304dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x304dcc: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x304dccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x304dd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304dd4: 0x1642000e  bne         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x304DD4u;
    {
        const bool branch_taken_0x304dd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x304DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DD4u;
        // 0x304dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304dd4) {
            ctx->pc = 0x304E10u;
            goto label_304e10;
        }
    }
    ctx->pc = 0x304DDCu;
    // 0x304ddc: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x304DDCu;
    {
        const bool branch_taken_0x304ddc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ddc) {
            ctx->pc = 0x304DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304DDCu;
            // 0x304de0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304E14u;
            goto label_304e14;
        }
    }
    ctx->pc = 0x304DE4u;
    // 0x304de4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x304de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x304de8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x304DE8u;
    {
        const bool branch_taken_0x304de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DE8u;
        // 0x304dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304de8) {
            ctx->pc = 0x304E10u;
            goto label_304e10;
        }
    }
    ctx->pc = 0x304DF0u;
    // 0x304df0: 0xc0c1034  jal         func_3040D0
    ctx->pc = 0x304DF0u;
    SET_GPR_U32(ctx, 31, 0x304DF8u);
    ctx->pc = 0x3040D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3040D0u, 0x304DF0u, 0x304DF8u)) {
        return;
    }
    ctx->pc = 0x304DF8u;
label_304df8:
    // 0x304df8: 0x50520005  beql        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x304DF8u;
    {
        const bool branch_taken_0x304df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x304df8) {
            ctx->pc = 0x304DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304DF8u;
            // 0x304dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304E10u;
            goto label_304e10;
        }
    }
    ctx->pc = 0x304E00u;
    // 0x304e00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x304e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x304e04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x304E04u;
    {
        const bool branch_taken_0x304e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E04u;
        // 0x304e08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e04) {
            ctx->pc = 0x304E10u;
            goto label_304e10;
        }
    }
    ctx->pc = 0x304E0Cu;
label_304e0c:
    // 0x304e0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304e10:
    // 0x304e10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x304e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_304e14:
    // 0x304e14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x304e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304e18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x304e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304e20: 0x3e00008  jr          $ra
    ctx->pc = 0x304E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E20u;
        // 0x304e24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304E28u;
}
