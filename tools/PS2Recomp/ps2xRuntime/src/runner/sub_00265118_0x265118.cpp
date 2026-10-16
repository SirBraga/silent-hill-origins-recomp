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

// Function: sub_00265118
// Address: 0x265118 - 0x265168
void sub_00265118_0x265118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265118_0x265118");
#endif

    switch (ctx->pc) {
        case 0x265144u: goto label_265144;
        case 0x265150u: goto label_265150;
        default: break;
    }

    ctx->pc = 0x265118u;

    // 0x265118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x265118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26511c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x26511cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x265120: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x265120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x265124: 0x8c431424  lw          $v1, 0x1424($v0)
    ctx->pc = 0x265124u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C1424u));
    // 0x265128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x265128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26512c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26512cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265130: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x265130u;
    {
        const bool branch_taken_0x265130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x265134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265130u;
        // 0x265134: 0x24421424  addiu       $v0, $v0, 0x1424 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265130) {
            ctx->pc = 0x265144u;
            goto label_265144;
        }
    }
    ctx->pc = 0x265138u;
    // 0x265138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x265138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26513c: 0xc099dd2  jal         func_267748
    ctx->pc = 0x26513Cu;
    SET_GPR_U32(ctx, 31, 0x265144u);
    ctx->pc = 0x265140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26513Cu;
    // 0x265140: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267748u, 0x26513Cu, 0x265144u)) {
        return;
    }
    ctx->pc = 0x265144u;
label_265144:
    // 0x265144: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265148: 0xc099e12  jal         func_267848
    ctx->pc = 0x265148u;
    SET_GPR_U32(ctx, 31, 0x265150u);
    ctx->pc = 0x26514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265148u;
    // 0x26514c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267848u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267848u, 0x265148u, 0x265150u)) {
        return;
    }
    ctx->pc = 0x265150u;
label_265150:
    // 0x265150: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x265150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265158: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x265158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26515c: 0x3e00008  jr          $ra
    ctx->pc = 0x26515Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26515Cu;
        // 0x265160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26515Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265164u;
    // 0x265164: 0x0  nop
    ctx->pc = 0x265164u;
    // NOP
    ctx->pc = 0x265168u;
}
