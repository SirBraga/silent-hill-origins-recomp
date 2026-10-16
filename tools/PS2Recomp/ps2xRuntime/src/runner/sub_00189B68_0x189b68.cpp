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

// Function: sub_00189B68
// Address: 0x189b68 - 0x189bb0
void sub_00189B68_0x189b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189B68_0x189b68");
#endif

    switch (ctx->pc) {
        case 0x189b84u: goto label_189b84;
        case 0x189b90u: goto label_189b90;
        default: break;
    }

    ctx->pc = 0x189b68u;

    // 0x189b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189b6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189b70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x189b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x189b74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189b7c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x189B7Cu;
    SET_GPR_U32(ctx, 31, 0x189B84u);
    ctx->pc = 0x189B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B7Cu;
    // 0x189b80: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x189B7Cu, 0x189B84u)) {
        return;
    }
    ctx->pc = 0x189B84u;
label_189b84:
    // 0x189b84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b88: 0xc0626ec  jal         func_189BB0
    ctx->pc = 0x189B88u;
    SET_GPR_U32(ctx, 31, 0x189B90u);
    ctx->pc = 0x189B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B88u;
    // 0x189b8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189BB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189BB0u, 0x189B88u, 0x189B90u)) {
        return;
    }
    ctx->pc = 0x189B90u;
label_189b90:
    // 0x189b90: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x189b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x189b94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189b98: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x189b98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x189b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189ba0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x189ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x189BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BA4u;
        // 0x189ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189BACu;
    // 0x189bac: 0x0  nop
    ctx->pc = 0x189bacu;
    // NOP
    ctx->pc = 0x189bb0u;
}
