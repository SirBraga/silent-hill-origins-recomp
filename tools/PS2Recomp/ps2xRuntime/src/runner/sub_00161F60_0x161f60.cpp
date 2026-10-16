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

// Function: sub_00161F60
// Address: 0x161f60 - 0x161fa8
void sub_00161F60_0x161f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161F60_0x161f60");
#endif

    switch (ctx->pc) {
        case 0x161f7cu: goto label_161f7c;
        case 0x161f88u: goto label_161f88;
        default: break;
    }

    ctx->pc = 0x161f60u;

    // 0x161f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161f64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x161f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161f68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161f74: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x161F74u;
    SET_GPR_U32(ctx, 31, 0x161F7Cu);
    ctx->pc = 0x161F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F74u;
    // 0x161f78: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x161F74u, 0x161F7Cu)) {
        return;
    }
    ctx->pc = 0x161F7Cu;
label_161f7c:
    // 0x161f7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f80: 0xc0587ea  jal         func_161FA8
    ctx->pc = 0x161F80u;
    SET_GPR_U32(ctx, 31, 0x161F88u);
    ctx->pc = 0x161F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F80u;
    // 0x161f84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x161FA8u, 0x161F80u, 0x161F88u)) {
        return;
    }
    ctx->pc = 0x161F88u;
label_161f88:
    // 0x161f88: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x161f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x161f8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161f90: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x161f90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x161f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161f98: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x161f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x161F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F9Cu;
        // 0x161fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161FA4u;
    // 0x161fa4: 0x0  nop
    ctx->pc = 0x161fa4u;
    // NOP
    ctx->pc = 0x161fa8u;
}
