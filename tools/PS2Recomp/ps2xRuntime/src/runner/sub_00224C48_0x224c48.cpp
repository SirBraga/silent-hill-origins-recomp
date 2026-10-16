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

// Function: sub_00224C48
// Address: 0x224c48 - 0x224ca0
void sub_00224C48_0x224c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224C48_0x224c48");
#endif

    switch (ctx->pc) {
        case 0x224c70u: goto label_224c70;
        case 0x224c80u: goto label_224c80;
        case 0x224c90u: goto label_224c90;
        default: break;
    }

    ctx->pc = 0x224c48u;

    // 0x224c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224c50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x224c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x224c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c5c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x224c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x224c60: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x224C60u;
    {
        const bool branch_taken_0x224c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x224c60) {
            ctx->pc = 0x224C78u;
            goto label_224c78;
        }
    }
    ctx->pc = 0x224C68u;
    // 0x224c68: 0xc088e7a  jal         func_2239E8
    ctx->pc = 0x224C68u;
    SET_GPR_U32(ctx, 31, 0x224C70u);
    ctx->pc = 0x2239E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2239E8u, 0x224C68u, 0x224C70u)) {
        return;
    }
    ctx->pc = 0x224C70u;
label_224c70:
    // 0x224c70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x224C70u;
    {
        const bool branch_taken_0x224c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C70u;
        // 0x224c74: 0x26050124  addiu       $a1, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c70) {
            ctx->pc = 0x224C84u;
            goto label_224c84;
        }
    }
    ctx->pc = 0x224C78u;
label_224c78:
    // 0x224c78: 0xc08912a  jal         func_2244A8
    ctx->pc = 0x224C78u;
    SET_GPR_U32(ctx, 31, 0x224C80u);
    ctx->pc = 0x224C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C78u;
    // 0x224c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2244A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2244A8u, 0x224C78u, 0x224C80u)) {
        return;
    }
    ctx->pc = 0x224C80u;
label_224c80:
    // 0x224c80: 0x26050124  addiu       $a1, $s0, 0x124
    ctx->pc = 0x224c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_224c84:
    // 0x224c84: 0x2604010c  addiu       $a0, $s0, 0x10C
    ctx->pc = 0x224c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x224c88: 0xc088b4a  jal         func_222D28
    ctx->pc = 0x224C88u;
    SET_GPR_U32(ctx, 31, 0x224C90u);
    ctx->pc = 0x224C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C88u;
    // 0x224c8c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222D28u, 0x224C88u, 0x224C90u)) {
        return;
    }
    ctx->pc = 0x224C90u;
label_224c90:
    // 0x224c90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x224c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224c98: 0x3e00008  jr          $ra
    ctx->pc = 0x224C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C98u;
        // 0x224c9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224CA0u;
}
