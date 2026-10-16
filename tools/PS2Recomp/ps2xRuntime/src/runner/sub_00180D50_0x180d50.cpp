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

// Function: sub_00180D50
// Address: 0x180d50 - 0x180da8
void sub_00180D50_0x180d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180D50_0x180d50");
#endif

    switch (ctx->pc) {
        case 0x180d78u: goto label_180d78;
        case 0x180d8cu: goto label_180d8c;
        default: break;
    }

    ctx->pc = 0x180d50u;

    // 0x180d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180d54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180d58: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x180d58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x180d5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180d60: 0x8e02fa60  lw          $v0, -0x5A0($s0)
    ctx->pc = 0x180d60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA60u));
    // 0x180d64: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x180D64u;
    {
        const bool branch_taken_0x180d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180d64) {
            ctx->pc = 0x180D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D64u;
            // 0x180d68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D90u;
            goto label_180d90;
        }
    }
    ctx->pc = 0x180D6Cu;
    // 0x180d6c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x180d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180d70: 0xc060300  jal         func_180C00
    ctx->pc = 0x180D70u;
    SET_GPR_U32(ctx, 31, 0x180D78u);
    ctx->pc = 0x180D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D70u;
    // 0x180d74: 0x2484fa38  addiu       $a0, $a0, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180C00u, 0x180D70u, 0x180D78u)) {
        return;
    }
    ctx->pc = 0x180D78u;
label_180d78:
    // 0x180d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180d7c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x180d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x180d80: 0xae03fa60  sw          $v1, -0x5A0($s0)
    ctx->pc = 0x180d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965856), GPR_U32(ctx, 3));
    // 0x180d84: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x180D84u;
    SET_GPR_U32(ctx, 31, 0x180D8Cu);
    ctx->pc = 0x180D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D84u;
    // 0x180d88: 0x248410c8  addiu       $a0, $a0, 0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x180D84u, 0x180D8Cu)) {
        return;
    }
    ctx->pc = 0x180D8Cu;
label_180d8c:
    // 0x180d8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_180d90:
    // 0x180d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180d94: 0x3e00008  jr          $ra
    ctx->pc = 0x180D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D94u;
        // 0x180d98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180D9Cu;
    // 0x180d9c: 0x0  nop
    ctx->pc = 0x180d9cu;
    // NOP
    // 0x180da0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x180da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180da4: 0x0  nop
    ctx->pc = 0x180da4u;
    // NOP
    ctx->pc = 0x180da8u;
}
