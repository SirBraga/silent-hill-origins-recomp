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

// Function: sub_00313E20
// Address: 0x313e20 - 0x313e68
void sub_00313E20_0x313e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313E20_0x313e20");
#endif

    switch (ctx->pc) {
        case 0x313e34u: goto label_313e34;
        default: break;
    }

    ctx->pc = 0x313e20u;

    // 0x313e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313e24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313e2c: 0xc0c4f2e  jal         func_313CB8
    ctx->pc = 0x313E2Cu;
    SET_GPR_U32(ctx, 31, 0x313E34u);
    ctx->pc = 0x313E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E2Cu;
    // 0x313e30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x313E2Cu, 0x313E34u)) {
        return;
    }
    ctx->pc = 0x313E34u;
label_313e34:
    // 0x313e34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313E34u;
    {
        const bool branch_taken_0x313e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E34u;
        // 0x313e38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e34) {
            ctx->pc = 0x313E58u;
            goto label_313e58;
        }
    }
    ctx->pc = 0x313E3Cu;
    // 0x313e3c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x313e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x313e40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x313e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x313e44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x313e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x313e48: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x313e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x313e4c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x313e4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x313e50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x313e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x313e54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x313e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_313e58:
    // 0x313e58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313e60: 0x3e00008  jr          $ra
    ctx->pc = 0x313E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E60u;
        // 0x313e64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313E68u;
}
