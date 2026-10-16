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

// Function: sub_00172C40
// Address: 0x172c40 - 0x172c88
void sub_00172C40_0x172c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172C40_0x172c40");
#endif

    switch (ctx->pc) {
        case 0x172c5cu: goto label_172c5c;
        case 0x172c68u: goto label_172c68;
        default: break;
    }

    ctx->pc = 0x172c40u;

    // 0x172c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172c44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x172c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x172c48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x172c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x172c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172c54: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x172C54u;
    SET_GPR_U32(ctx, 31, 0x172C5Cu);
    ctx->pc = 0x172C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C54u;
    // 0x172c58: 0x240400a8  addiu       $a0, $zero, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x172C54u, 0x172C5Cu)) {
        return;
    }
    ctx->pc = 0x172C5Cu;
label_172c5c:
    // 0x172c5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c60: 0xc05cb22  jal         func_172C88
    ctx->pc = 0x172C60u;
    SET_GPR_U32(ctx, 31, 0x172C68u);
    ctx->pc = 0x172C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C60u;
    // 0x172c64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172C88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x172C88u, 0x172C60u, 0x172C68u)) {
        return;
    }
    ctx->pc = 0x172C68u;
label_172c68:
    // 0x172c68: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x172c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x172c6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x172c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172c70: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x172c70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x172c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172c78: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x172c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x172C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C7Cu;
        // 0x172c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172C84u;
    // 0x172c84: 0x0  nop
    ctx->pc = 0x172c84u;
    // NOP
    ctx->pc = 0x172c88u;
}
