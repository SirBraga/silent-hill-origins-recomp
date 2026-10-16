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

// Function: sub_00257DA8
// Address: 0x257da8 - 0x257e00
void sub_00257DA8_0x257da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257DA8_0x257da8");
#endif

    switch (ctx->pc) {
        case 0x257de4u: goto label_257de4;
        default: break;
    }

    ctx->pc = 0x257da8u;

    // 0x257da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257dac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x257dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x257db0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257db4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x257db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257dbc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257DBCu;
    {
        const bool branch_taken_0x257dbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x257DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257DBCu;
        // 0x257dc0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257dbc) {
            ctx->pc = 0x257DD0u;
            goto label_257dd0;
        }
    }
    ctx->pc = 0x257DC4u;
    // 0x257dc4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x257dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x257dc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x257dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x257dcc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x257dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_257dd0:
    // 0x257dd0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x257dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x257dd4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x257DD4u;
    {
        const bool branch_taken_0x257dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x257dd4) {
            ctx->pc = 0x257DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257DD4u;
            // 0x257dd8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257DE8u;
            goto label_257de8;
        }
    }
    ctx->pc = 0x257DDCu;
    // 0x257ddc: 0xc08ab74  jal         func_22ADD0
    ctx->pc = 0x257DDCu;
    SET_GPR_U32(ctx, 31, 0x257DE4u);
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x257DDCu, 0x257DE4u)) {
        return;
    }
    ctx->pc = 0x257DE4u;
label_257de4:
    // 0x257de4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x257de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_257de8:
    // 0x257de8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x257de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257dec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x257decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257df8: 0x3e00008  jr          $ra
    ctx->pc = 0x257DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257DF8u;
        // 0x257dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257E00u;
}
