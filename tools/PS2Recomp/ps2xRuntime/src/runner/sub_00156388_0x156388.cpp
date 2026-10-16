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

// Function: sub_00156388
// Address: 0x156388 - 0x1563d0
void sub_00156388_0x156388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156388_0x156388");
#endif

    switch (ctx->pc) {
        case 0x1563a4u: goto label_1563a4;
        case 0x1563b0u: goto label_1563b0;
        default: break;
    }

    ctx->pc = 0x156388u;

    // 0x156388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15638c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15638cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156390: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x156394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15639c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x15639Cu;
    SET_GPR_U32(ctx, 31, 0x1563A4u);
    ctx->pc = 0x1563A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15639Cu;
    // 0x1563a0: 0x2404010c  addiu       $a0, $zero, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x15639Cu, 0x1563A4u)) {
        return;
    }
    ctx->pc = 0x1563A4u;
label_1563a4:
    // 0x1563a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1563a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1563a8: 0xc05514c  jal         func_154530
    ctx->pc = 0x1563A8u;
    SET_GPR_U32(ctx, 31, 0x1563B0u);
    ctx->pc = 0x1563ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1563A8u;
    // 0x1563ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x154530u, 0x1563A8u, 0x1563B0u)) {
        return;
    }
    ctx->pc = 0x1563B0u;
label_1563b0:
    // 0x1563b0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1563b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1563b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1563b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1563b8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1563b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1563bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1563bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1563c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1563c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1563c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1563C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1563C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563C4u;
        // 0x1563c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1563C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1563CCu;
    // 0x1563cc: 0x0  nop
    ctx->pc = 0x1563ccu;
    // NOP
    ctx->pc = 0x1563d0u;
}
