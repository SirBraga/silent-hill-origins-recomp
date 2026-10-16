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

// Function: sub_00173720
// Address: 0x173720 - 0x173768
void sub_00173720_0x173720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173720_0x173720");
#endif

    switch (ctx->pc) {
        case 0x17373cu: goto label_17373c;
        case 0x173748u: goto label_173748;
        default: break;
    }

    ctx->pc = 0x173720u;

    // 0x173720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173724: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x173724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173728: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17372c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17372cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173734: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x173734u;
    SET_GPR_U32(ctx, 31, 0x17373Cu);
    ctx->pc = 0x173738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173734u;
    // 0x173738: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x173734u, 0x17373Cu)) {
        return;
    }
    ctx->pc = 0x17373Cu;
label_17373c:
    // 0x17373c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17373cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173740: 0xc05cdda  jal         func_173768
    ctx->pc = 0x173740u;
    SET_GPR_U32(ctx, 31, 0x173748u);
    ctx->pc = 0x173744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173740u;
    // 0x173744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x173768u, 0x173740u, 0x173748u)) {
        return;
    }
    ctx->pc = 0x173748u;
label_173748:
    // 0x173748: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x173748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17374c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17374cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173750: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x173750u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x173754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173758: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x173758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17375c: 0x3e00008  jr          $ra
    ctx->pc = 0x17375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17375Cu;
        // 0x173760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17375Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173764u;
    // 0x173764: 0x0  nop
    ctx->pc = 0x173764u;
    // NOP
    ctx->pc = 0x173768u;
}
