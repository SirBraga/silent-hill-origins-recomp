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

// Function: sub_00162040
// Address: 0x162040 - 0x162088
void sub_00162040_0x162040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162040_0x162040");
#endif

    switch (ctx->pc) {
        case 0x162078u: goto label_162078;
        default: break;
    }

    ctx->pc = 0x162040u;

    // 0x162040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162044: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x162044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x162048: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x162048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16204c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16204cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162050: 0x24423830  addiu       $v0, $v0, 0x3830
    ctx->pc = 0x162050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14384));
    // 0x162054: 0x24633850  addiu       $v1, $v1, 0x3850
    ctx->pc = 0x162054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14416));
    // 0x162058: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x162058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x16205c: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x16205cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x162060: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x162060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x162064: 0x8c628658  lw          $v0, -0x79A8($v1)
    ctx->pc = 0x162064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338658u));
    // 0x162068: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x162068u;
    {
        const bool branch_taken_0x162068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x162068) {
            ctx->pc = 0x16206Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162068u;
            // 0x16206c: 0xac608658  sw          $zero, -0x79A8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294936152), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162070u;
            goto label_162070;
        }
    }
    ctx->pc = 0x162070u;
label_162070:
    // 0x162070: 0xc04f084  jal         func_13C210
    ctx->pc = 0x162070u;
    SET_GPR_U32(ctx, 31, 0x162078u);
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x162070u, 0x162078u)) {
        return;
    }
    ctx->pc = 0x162078u;
label_162078:
    // 0x162078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16207c: 0x3e00008  jr          $ra
    ctx->pc = 0x16207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16207Cu;
        // 0x162080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16207Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162084u;
    // 0x162084: 0x0  nop
    ctx->pc = 0x162084u;
    // NOP
    ctx->pc = 0x162088u;
}
