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

// Function: sub_00264F10
// Address: 0x264f10 - 0x264f60
void sub_00264F10_0x264f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264F10_0x264f10");
#endif

    switch (ctx->pc) {
        case 0x264f3cu: goto label_264f3c;
        default: break;
    }

    ctx->pc = 0x264f10u;

    // 0x264f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264f14: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x264f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x264f18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x264f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x264f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264f20: 0x24701418  addiu       $s0, $v1, 0x1418
    ctx->pc = 0x264f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5144));
    // 0x264f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264f28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x264f28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5C1420u));
    // 0x264f2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264F2Cu;
    {
        const bool branch_taken_0x264f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F2Cu;
        // 0x264f30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f2c) {
            ctx->pc = 0x264F3Cu;
            goto label_264f3c;
        }
    }
    ctx->pc = 0x264F34u;
    // 0x264f34: 0xc099e64  jal         func_267990
    ctx->pc = 0x264F34u;
    SET_GPR_U32(ctx, 31, 0x264F3Cu);
    ctx->pc = 0x264F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F34u;
    // 0x264f38: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267990u, 0x264F34u, 0x264F3Cu)) {
        return;
    }
    ctx->pc = 0x264F3Cu;
label_264f3c:
    // 0x264f3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x264f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x264f40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x264f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264f48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x264f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x264f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264f50: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x264f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x264f54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x264f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264f58: 0x3e00008  jr          $ra
    ctx->pc = 0x264F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F58u;
        // 0x264f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264F60u;
}
