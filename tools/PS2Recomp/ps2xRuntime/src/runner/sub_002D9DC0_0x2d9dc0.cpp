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

// Function: sub_002D9DC0
// Address: 0x2d9dc0 - 0x2d9e38
void sub_002D9DC0_0x2d9dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9DC0_0x2d9dc0");
#endif

    switch (ctx->pc) {
        case 0x2d9dc0u: goto label_2d9dc0;
        case 0x2d9dc4u: goto label_2d9dc4;
        case 0x2d9dc8u: goto label_2d9dc8;
        case 0x2d9dccu: goto label_2d9dcc;
        case 0x2d9dd0u: goto label_2d9dd0;
        case 0x2d9dd4u: goto label_2d9dd4;
        case 0x2d9dd8u: goto label_2d9dd8;
        case 0x2d9ddcu: goto label_2d9ddc;
        case 0x2d9de0u: goto label_2d9de0;
        case 0x2d9de4u: goto label_2d9de4;
        case 0x2d9de8u: goto label_2d9de8;
        case 0x2d9decu: goto label_2d9dec;
        case 0x2d9df0u: goto label_2d9df0;
        case 0x2d9df4u: goto label_2d9df4;
        case 0x2d9df8u: goto label_2d9df8;
        case 0x2d9dfcu: goto label_2d9dfc;
        case 0x2d9e00u: goto label_2d9e00;
        case 0x2d9e04u: goto label_2d9e04;
        case 0x2d9e08u: goto label_2d9e08;
        case 0x2d9e0cu: goto label_2d9e0c;
        case 0x2d9e10u: goto label_2d9e10;
        case 0x2d9e14u: goto label_2d9e14;
        case 0x2d9e18u: goto label_2d9e18;
        case 0x2d9e1cu: goto label_2d9e1c;
        case 0x2d9e20u: goto label_2d9e20;
        case 0x2d9e24u: goto label_2d9e24;
        case 0x2d9e28u: goto label_2d9e28;
        case 0x2d9e2cu: goto label_2d9e2c;
        case 0x2d9e30u: goto label_2d9e30;
        case 0x2d9e34u: goto label_2d9e34;
        default: break;
    }

    ctx->pc = 0x2d9dc0u;

label_2d9dc0:
    // 0x2d9dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d9dc4:
    // 0x2d9dc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d9dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d9dc8:
    // 0x2d9dc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d9dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d9dcc:
    // 0x2d9dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9dd0:
    // 0x2d9dd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d9dd4:
    // 0x2d9dd4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d9dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9dd8:
    // 0x2d9dd8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9ddc:
    // 0x2d9ddc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d9ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2d9de0:
    // 0x2d9de0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2d9de0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d9de4:
    // 0x2d9de4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9de8:
    // 0x2d9de8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d9de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d9dec:
    // 0x2d9dec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d9decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d9df0:
    // 0x2d9df0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d9df4:
    // 0x2d9df4: 0x40f809  jalr        $v0
label_2d9df8:
    if (ctx->pc == 0x2D9DF8u) {
        ctx->pc = 0x2D9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9DF4u;
        // 0x2d9df8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9DFCu;
        goto label_2d9dfc;
    }
    ctx->pc = 0x2D9DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9DFCu);
        ctx->pc = 0x2D9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9DF4u;
        // 0x2d9df8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9DF4u, 0x2D9DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9DFCu;
label_2d9dfc:
    // 0x2d9dfc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2d9dfcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_2d9e00:
    // 0x2d9e00: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2d9e04:
    if (ctx->pc == 0x2D9E04u) {
        ctx->pc = 0x2D9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E00u;
        // 0x2d9e04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9E08u;
        goto label_2d9e08;
    }
    ctx->pc = 0x2D9E00u;
    {
        const bool branch_taken_0x2d9e00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E00u;
        // 0x2d9e04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e00) {
            ctx->pc = 0x2D9E1Cu;
            goto label_2d9e1c;
        }
    }
    ctx->pc = 0x2D9E08u;
label_2d9e08:
    // 0x2d9e08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2d9e0c:
    if (ctx->pc == 0x2D9E0Cu) {
        ctx->pc = 0x2D9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E08u;
        // 0x2d9e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9E10u;
        goto label_2d9e10;
    }
    ctx->pc = 0x2D9E08u;
    {
        const bool branch_taken_0x2d9e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E08u;
        // 0x2d9e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e08) {
            ctx->pc = 0x2D9E18u;
            goto label_2d9e18;
        }
    }
    ctx->pc = 0x2D9E10u;
label_2d9e10:
    // 0x2d9e10: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d9e14:
    if (ctx->pc == 0x2D9E14u) {
        ctx->pc = 0x2D9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E10u;
        // 0x2d9e14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9E18u;
        goto label_2d9e18;
    }
    ctx->pc = 0x2D9E10u;
    {
        const bool branch_taken_0x2d9e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E10u;
        // 0x2d9e14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e10) {
            ctx->pc = 0x2D9E1Cu;
            goto label_2d9e1c;
        }
    }
    ctx->pc = 0x2D9E18u;
label_2d9e18:
    // 0x2d9e18: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2d9e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2d9e1c:
    // 0x2d9e1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9e20:
    // 0x2d9e20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d9e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9e24:
    // 0x2d9e24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d9e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9e28:
    // 0x2d9e28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9e2c:
    // 0x2d9e2c: 0x3e00008  jr          $ra
label_2d9e30:
    if (ctx->pc == 0x2D9E30u) {
        ctx->pc = 0x2D9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E2Cu;
        // 0x2d9e30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9E34u;
        goto label_2d9e34;
    }
    ctx->pc = 0x2D9E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E2Cu;
        // 0x2d9e30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9E34u;
label_2d9e34:
    // 0x2d9e34: 0x0  nop
    ctx->pc = 0x2d9e34u;
    // NOP
    ctx->pc = 0x2d9e38u;
}
