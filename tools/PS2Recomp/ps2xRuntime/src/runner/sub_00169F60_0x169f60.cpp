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

// Function: sub_00169F60
// Address: 0x169f60 - 0x169fb8
void sub_00169F60_0x169f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169F60_0x169f60");
#endif

    switch (ctx->pc) {
        case 0x169f88u: goto label_169f88;
        case 0x169fa8u: goto label_169fa8;
        default: break;
    }

    ctx->pc = 0x169f60u;

    // 0x169f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x169f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f74: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x169f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x169f78: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x169f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x169f7c: 0x248443f0  addiu       $a0, $a0, 0x43F0
    ctx->pc = 0x169f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17392));
    // 0x169f80: 0xc05a818  jal         func_16A060
    ctx->pc = 0x169F80u;
    SET_GPR_U32(ctx, 31, 0x169F88u);
    ctx->pc = 0x169F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F80u;
    // 0x169f84: 0x8e07005c  lw          $a3, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A060u, 0x169F80u, 0x169F88u)) {
        return;
    }
    ctx->pc = 0x169F88u;
label_169f88:
    // 0x169f88: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x169f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x169f8c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x169f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x169f90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169f94: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x169f94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x169f98: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x169F98u;
    {
        const bool branch_taken_0x169f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F98u;
        // 0x169f9c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f98) {
            ctx->pc = 0x169FA8u;
            goto label_169fa8;
        }
    }
    ctx->pc = 0x169FA0u;
    // 0x169fa0: 0xc05a7ee  jal         func_169FB8
    ctx->pc = 0x169FA0u;
    SET_GPR_U32(ctx, 31, 0x169FA8u);
    ctx->pc = 0x169FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FA0u;
    // 0x169fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x169FB8u, 0x169FA0u, 0x169FA8u)) {
        return;
    }
    ctx->pc = 0x169FA8u;
label_169fa8:
    // 0x169fa8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x169fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x169FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FB0u;
        // 0x169fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169FB8u;
}
