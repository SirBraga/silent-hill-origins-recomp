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

// Function: sub_002D6DC0
// Address: 0x2d6dc0 - 0x2d6e18
void sub_002D6DC0_0x2d6dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6DC0_0x2d6dc0");
#endif

    switch (ctx->pc) {
        case 0x2d6dc0u: goto label_2d6dc0;
        case 0x2d6dc4u: goto label_2d6dc4;
        case 0x2d6dc8u: goto label_2d6dc8;
        case 0x2d6dccu: goto label_2d6dcc;
        case 0x2d6dd0u: goto label_2d6dd0;
        case 0x2d6dd4u: goto label_2d6dd4;
        case 0x2d6dd8u: goto label_2d6dd8;
        case 0x2d6ddcu: goto label_2d6ddc;
        case 0x2d6de0u: goto label_2d6de0;
        case 0x2d6de4u: goto label_2d6de4;
        case 0x2d6de8u: goto label_2d6de8;
        case 0x2d6decu: goto label_2d6dec;
        case 0x2d6df0u: goto label_2d6df0;
        case 0x2d6df4u: goto label_2d6df4;
        case 0x2d6df8u: goto label_2d6df8;
        case 0x2d6dfcu: goto label_2d6dfc;
        case 0x2d6e00u: goto label_2d6e00;
        case 0x2d6e04u: goto label_2d6e04;
        case 0x2d6e08u: goto label_2d6e08;
        case 0x2d6e0cu: goto label_2d6e0c;
        case 0x2d6e10u: goto label_2d6e10;
        case 0x2d6e14u: goto label_2d6e14;
        default: break;
    }

    ctx->pc = 0x2d6dc0u;

label_2d6dc0:
    // 0x2d6dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d6dc4:
    // 0x2d6dc4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d6dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d6dc8:
    // 0x2d6dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d6dcc:
    // 0x2d6dcc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d6dd0:
    // 0x2d6dd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d6dd4:
    // 0x2d6dd4: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2d6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2d6dd8:
    // 0x2d6dd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d6dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2d6ddc:
    // 0x2d6ddc: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x2d6ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2d6de0:
    // 0x2d6de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d6de4:
    // 0x2d6de4: 0x40f809  jalr        $v0
label_2d6de8:
    if (ctx->pc == 0x2D6DE8u) {
        ctx->pc = 0x2D6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DE4u;
        // 0x2d6de8: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6DECu;
        goto label_2d6dec;
    }
    ctx->pc = 0x2D6DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6DECu);
        ctx->pc = 0x2D6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DE4u;
        // 0x2d6de8: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6DE4u, 0x2D6DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6DECu;
label_2d6dec:
    // 0x2d6dec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6df0:
    // 0x2d6df0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d6df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6df4:
    // 0x2d6df4: 0xc0b5b94  jal         func_2D6E50
label_2d6df8:
    if (ctx->pc == 0x2D6DF8u) {
        ctx->pc = 0x2D6DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DF4u;
        // 0x2d6df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6DFCu;
        goto label_2d6dfc;
    }
    ctx->pc = 0x2D6DF4u;
    SET_GPR_U32(ctx, 31, 0x2D6DFCu);
    ctx->pc = 0x2D6DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6DF4u;
    // 0x2d6df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6E50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6E50u, 0x2D6DF4u, 0x2D6DFCu)) {
        return;
    }
    ctx->pc = 0x2D6DFCu;
label_2d6dfc:
    // 0x2d6dfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d6dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e00:
    // 0x2d6e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6e04:
    // 0x2d6e04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d6e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d6e08:
    // 0x2d6e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6e0c:
    // 0x2d6e0c: 0x3e00008  jr          $ra
label_2d6e10:
    if (ctx->pc == 0x2D6E10u) {
        ctx->pc = 0x2D6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E0Cu;
        // 0x2d6e10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E14u;
        goto label_2d6e14;
    }
    ctx->pc = 0x2D6E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E0Cu;
        // 0x2d6e10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6E14u;
label_2d6e14:
    // 0x2d6e14: 0x0  nop
    ctx->pc = 0x2d6e14u;
    // NOP
    ctx->pc = 0x2d6e18u;
}
