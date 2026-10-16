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

// Function: sub_00125F48
// Address: 0x125f48 - 0x125fa0
void sub_00125F48_0x125f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125F48_0x125f48");
#endif

    switch (ctx->pc) {
        case 0x125f70u: goto label_125f70;
        case 0x125f80u: goto label_125f80;
        default: break;
    }

    ctx->pc = 0x125f48u;

    // 0x125f48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125f4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x125f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125f50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x125f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x125f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x125f5c: 0x26110320  addiu       $s1, $s0, 0x320
    ctx->pc = 0x125f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x125f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125f64: 0x26050dc4  addiu       $a1, $s0, 0xDC4
    ctx->pc = 0x125f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3524));
    // 0x125f68: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x125F68u;
    SET_GPR_U32(ctx, 31, 0x125F70u);
    ctx->pc = 0x125F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F68u;
    // 0x125f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x125F68u, 0x125F70u)) {
        return;
    }
    ctx->pc = 0x125F70u;
label_125f70:
    // 0x125f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f74: 0x26050dcc  addiu       $a1, $s0, 0xDCC
    ctx->pc = 0x125f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3532));
    // 0x125f78: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x125F78u;
    SET_GPR_U32(ctx, 31, 0x125F80u);
    ctx->pc = 0x125F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F78u;
    // 0x125f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x125F78u, 0x125F80u)) {
        return;
    }
    ctx->pc = 0x125F80u;
label_125f80:
    // 0x125f80: 0xae000c94  sw          $zero, 0xC94($s0)
    ctx->pc = 0x125f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3220), GPR_U32(ctx, 0));
    // 0x125f84: 0xae000bc8  sw          $zero, 0xBC8($s0)
    ctx->pc = 0x125f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3016), GPR_U32(ctx, 0));
    // 0x125f88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x125f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125f8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125f94: 0x3e00008  jr          $ra
    ctx->pc = 0x125F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F94u;
        // 0x125f98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125F9Cu;
    // 0x125f9c: 0x0  nop
    ctx->pc = 0x125f9cu;
    // NOP
    ctx->pc = 0x125fa0u;
}
