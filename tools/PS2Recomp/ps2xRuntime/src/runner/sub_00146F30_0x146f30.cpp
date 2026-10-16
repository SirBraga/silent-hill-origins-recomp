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

// Function: sub_00146F30
// Address: 0x146f30 - 0x146f80
void sub_00146F30_0x146f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146F30_0x146f30");
#endif

    switch (ctx->pc) {
        case 0x146f4cu: goto label_146f4c;
        case 0x146f58u: goto label_146f58;
        default: break;
    }

    ctx->pc = 0x146f30u;

    // 0x146f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146f34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x146f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146f38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146f44: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x146F44u;
    SET_GPR_U32(ctx, 31, 0x146F4Cu);
    ctx->pc = 0x146F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146F44u;
    // 0x146f48: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x146F44u, 0x146F4Cu)) {
        return;
    }
    ctx->pc = 0x146F4Cu;
label_146f4c:
    // 0x146f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x146f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f50: 0xc051be0  jal         func_146F80
    ctx->pc = 0x146F50u;
    SET_GPR_U32(ctx, 31, 0x146F58u);
    ctx->pc = 0x146F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146F50u;
    // 0x146f54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146F80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146F80u, 0x146F50u, 0x146F58u)) {
        return;
    }
    ctx->pc = 0x146F58u;
label_146f58:
    // 0x146f58: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x146f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x146f5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x146f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146f60: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x146f60u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x146f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146f68: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x146f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x146F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F6Cu;
        // 0x146f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146F74u;
    // 0x146f74: 0x0  nop
    ctx->pc = 0x146f74u;
    // NOP
    // 0x146f78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x146f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x146f7c: 0x0  nop
    ctx->pc = 0x146f7cu;
    // NOP
    ctx->pc = 0x146f80u;
}
