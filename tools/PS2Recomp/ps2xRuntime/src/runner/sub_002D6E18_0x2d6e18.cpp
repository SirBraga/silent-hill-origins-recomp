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

// Function: sub_002D6E18
// Address: 0x2d6e18 - 0x2d6e50
void sub_002D6E18_0x2d6e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6E18_0x2d6e18");
#endif

    switch (ctx->pc) {
        case 0x2d6e18u: goto label_2d6e18;
        case 0x2d6e1cu: goto label_2d6e1c;
        case 0x2d6e20u: goto label_2d6e20;
        case 0x2d6e24u: goto label_2d6e24;
        case 0x2d6e28u: goto label_2d6e28;
        case 0x2d6e2cu: goto label_2d6e2c;
        case 0x2d6e30u: goto label_2d6e30;
        case 0x2d6e34u: goto label_2d6e34;
        case 0x2d6e38u: goto label_2d6e38;
        case 0x2d6e3cu: goto label_2d6e3c;
        case 0x2d6e40u: goto label_2d6e40;
        case 0x2d6e44u: goto label_2d6e44;
        case 0x2d6e48u: goto label_2d6e48;
        case 0x2d6e4cu: goto label_2d6e4c;
        default: break;
    }

    ctx->pc = 0x2d6e18u;

label_2d6e18:
    // 0x2d6e18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d6e1c:
    // 0x2d6e1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d6e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d6e20:
    // 0x2d6e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d6e24:
    // 0x2d6e24: 0xc0b5bb2  jal         func_2D6EC8
label_2d6e28:
    if (ctx->pc == 0x2D6E28u) {
        ctx->pc = 0x2D6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E24u;
        // 0x2d6e28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E2Cu;
        goto label_2d6e2c;
    }
    ctx->pc = 0x2D6E24u;
    SET_GPR_U32(ctx, 31, 0x2D6E2Cu);
    ctx->pc = 0x2D6E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E24u;
    // 0x2d6e28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6EC8u, 0x2D6E24u, 0x2D6E2Cu)) {
        return;
    }
    ctx->pc = 0x2D6E2Cu;
label_2d6e2c:
    // 0x2d6e2c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d6e30:
    // 0x2d6e30: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x2d6e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_2d6e34:
    // 0x2d6e34: 0x40f809  jalr        $v0
label_2d6e38:
    if (ctx->pc == 0x2D6E38u) {
        ctx->pc = 0x2D6E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E34u;
        // 0x2d6e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E3Cu;
        goto label_2d6e3c;
    }
    ctx->pc = 0x2D6E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6E3Cu);
        ctx->pc = 0x2D6E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E34u;
        // 0x2d6e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6E34u, 0x2D6E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6E3Cu;
label_2d6e3c:
    // 0x2d6e3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d6e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6e40:
    // 0x2d6e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6e44:
    // 0x2d6e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6e48:
    // 0x2d6e48: 0x3e00008  jr          $ra
label_2d6e4c:
    if (ctx->pc == 0x2D6E4Cu) {
        ctx->pc = 0x2D6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E48u;
        // 0x2d6e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E50u;
        goto label_fallthrough_0x2d6e48;
    }
    ctx->pc = 0x2D6E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E48u;
        // 0x2d6e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d6e48:
    ctx->pc = 0x2D6E50u;
}
