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

// Function: sub_00191ED8
// Address: 0x191ed8 - 0x191f20
void sub_00191ED8_0x191ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191ED8_0x191ed8");
#endif

    switch (ctx->pc) {
        case 0x191ef4u: goto label_191ef4;
        case 0x191f00u: goto label_191f00;
        default: break;
    }

    ctx->pc = 0x191ed8u;

    // 0x191ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191edc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x191edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191ee0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x191ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x191ee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x191ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191eec: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x191EECu;
    SET_GPR_U32(ctx, 31, 0x191EF4u);
    ctx->pc = 0x191EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EECu;
    // 0x191ef0: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x191EECu, 0x191EF4u)) {
        return;
    }
    ctx->pc = 0x191EF4u;
label_191ef4:
    // 0x191ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ef8: 0xc0647d4  jal         func_191F50
    ctx->pc = 0x191EF8u;
    SET_GPR_U32(ctx, 31, 0x191F00u);
    ctx->pc = 0x191EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EF8u;
    // 0x191efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191F50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191F50u, 0x191EF8u, 0x191F00u)) {
        return;
    }
    ctx->pc = 0x191F00u;
label_191f00:
    // 0x191f00: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x191f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x191f04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x191f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191f08: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x191f08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x191f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191f10: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x191f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f14: 0x3e00008  jr          $ra
    ctx->pc = 0x191F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F14u;
        // 0x191f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191F1Cu;
    // 0x191f1c: 0x0  nop
    ctx->pc = 0x191f1cu;
    // NOP
    ctx->pc = 0x191f20u;
}
