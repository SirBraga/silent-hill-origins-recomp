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

// Function: sub_00254890
// Address: 0x254890 - 0x2548e0
void sub_00254890_0x254890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254890_0x254890");
#endif

    switch (ctx->pc) {
        case 0x2548b4u: goto label_2548b4;
        case 0x2548bcu: goto label_2548bc;
        default: break;
    }

    ctx->pc = 0x254890u;

    // 0x254890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254894: 0x8f8285b8  lw          $v0, -0x7A48($gp)
    ctx->pc = 0x254894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935992)));
    // 0x254898: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x254898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25489c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25489cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2548a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2548a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2548a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2548a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2548a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548ac: 0xc095662  jal         func_255988
    ctx->pc = 0x2548ACu;
    SET_GPR_U32(ctx, 31, 0x2548B4u);
    ctx->pc = 0x2548B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548ACu;
    // 0x2548b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255988u, 0x2548ACu, 0x2548B4u)) {
        return;
    }
    ctx->pc = 0x2548B4u;
label_2548b4:
    // 0x2548b4: 0xc089484  jal         func_225210
    ctx->pc = 0x2548B4u;
    SET_GPR_U32(ctx, 31, 0x2548BCu);
    ctx->pc = 0x2548B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2548B4u;
    // 0x2548b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225210u, 0x2548B4u, 0x2548BCu)) {
        return;
    }
    ctx->pc = 0x2548BCu;
label_2548bc:
    // 0x2548bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2548bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2548c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2548c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2548c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2548c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2548C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2548CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548C8u;
        // 0x2548cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2548C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2548D0u;
    // 0x2548d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2548d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2548d4: 0x0  nop
    ctx->pc = 0x2548d4u;
    // NOP
    // 0x2548d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2548d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2548dc: 0x0  nop
    ctx->pc = 0x2548dcu;
    // NOP
    ctx->pc = 0x2548e0u;
}
