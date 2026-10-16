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

// Function: sub_00192030
// Address: 0x192030 - 0x192070
void sub_00192030_0x192030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192030_0x192030");
#endif

    switch (ctx->pc) {
        case 0x192054u: goto label_192054;
        default: break;
    }

    ctx->pc = 0x192030u;

    // 0x192030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19203c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19203cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192040: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x192040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x192044: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192044u;
    {
        const bool branch_taken_0x192044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192044u;
        // 0x192048: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192044) {
            ctx->pc = 0x19205Cu;
            goto label_19205c;
        }
    }
    ctx->pc = 0x19204Cu;
    // 0x19204c: 0xc04d36c  jal         func_134DB0
    ctx->pc = 0x19204Cu;
    SET_GPR_U32(ctx, 31, 0x192054u);
    ctx->pc = 0x192050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19204Cu;
    // 0x192050: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x134DB0u, 0x19204Cu, 0x192054u)) {
        return;
    }
    ctx->pc = 0x192054u;
label_192054:
    // 0x192054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192058: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x192058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_19205c:
    // 0x19205c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19205cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192064: 0x3e00008  jr          $ra
    ctx->pc = 0x192064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192064u;
        // 0x192068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19206Cu;
    // 0x19206c: 0x0  nop
    ctx->pc = 0x19206cu;
    // NOP
    ctx->pc = 0x192070u;
}
