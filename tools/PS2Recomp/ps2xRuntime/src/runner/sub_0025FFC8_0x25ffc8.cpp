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

// Function: sub_0025FFC8
// Address: 0x25ffc8 - 0x260018
void sub_0025FFC8_0x25ffc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FFC8_0x25ffc8");
#endif

    switch (ctx->pc) {
        case 0x25fff0u: goto label_25fff0;
        case 0x260000u: goto label_260000;
        default: break;
    }

    ctx->pc = 0x25ffc8u;

    // 0x25ffc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25ffc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25ffcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25ffccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25ffd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25ffd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ffd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ffd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ffd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ffdc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x25ffe0: 0x8c510fc8  lw          $s1, 0xFC8($v0)
    ctx->pc = 0x25ffe0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x730FC8u));
    // 0x25ffe4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x25ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25ffe8: 0xc08994a  jal         func_226528
    ctx->pc = 0x25FFE8u;
    SET_GPR_U32(ctx, 31, 0x25FFF0u);
    ctx->pc = 0x25FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FFE8u;
    // 0x25ffec: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x25FFE8u, 0x25FFF0u)) {
        return;
    }
    ctx->pc = 0x25FFF0u;
label_25fff0:
    // 0x25fff0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25fff4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25fff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fff8: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x25FFF8u;
    SET_GPR_U32(ctx, 31, 0x260000u);
    ctx->pc = 0x25FFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FFF8u;
    // 0x25fffc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x25FFF8u, 0x260000u)) {
        return;
    }
    ctx->pc = 0x260000u;
label_260000:
    // 0x260000: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x260000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x260004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26000c: 0x3e00008  jr          $ra
    ctx->pc = 0x26000Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26000Cu;
        // 0x260010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26000Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260014u;
    // 0x260014: 0x0  nop
    ctx->pc = 0x260014u;
    // NOP
    ctx->pc = 0x260018u;
}
