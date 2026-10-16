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

// Function: sub_00199C00
// Address: 0x199c00 - 0x199c48
void sub_00199C00_0x199c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199C00_0x199c00");
#endif

    switch (ctx->pc) {
        case 0x199c1cu: goto label_199c1c;
        case 0x199c28u: goto label_199c28;
        default: break;
    }

    ctx->pc = 0x199c00u;

    // 0x199c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199c04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x199c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199c08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199c14: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x199C14u;
    SET_GPR_U32(ctx, 31, 0x199C1Cu);
    ctx->pc = 0x199C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C14u;
    // 0x199c18: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x199C14u, 0x199C1Cu)) {
        return;
    }
    ctx->pc = 0x199C1Cu;
label_199c1c:
    // 0x199c1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c20: 0xc0665e0  jal         func_199780
    ctx->pc = 0x199C20u;
    SET_GPR_U32(ctx, 31, 0x199C28u);
    ctx->pc = 0x199C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C20u;
    // 0x199c24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199780u, 0x199C20u, 0x199C28u)) {
        return;
    }
    ctx->pc = 0x199C28u;
label_199c28:
    // 0x199c28: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x199c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x199c2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199c30: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x199c30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x199c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199c38: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x199c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x199C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C3Cu;
        // 0x199c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199C44u;
    // 0x199c44: 0x0  nop
    ctx->pc = 0x199c44u;
    // NOP
    ctx->pc = 0x199c48u;
}
