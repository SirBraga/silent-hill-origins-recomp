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

// Function: sub_0017B488
// Address: 0x17b488 - 0x17b4c8
void sub_0017B488_0x17b488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B488_0x17b488");
#endif

    switch (ctx->pc) {
        case 0x17b4a0u: goto label_17b4a0;
        case 0x17b4b4u: goto label_17b4b4;
        default: break;
    }

    ctx->pc = 0x17b488u;

    // 0x17b488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b48c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17b48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b490: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b494: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17b494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b498: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x17B498u;
    SET_GPR_U32(ctx, 31, 0x17B4A0u);
    ctx->pc = 0x17B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B498u;
    // 0x17b49c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x17B498u, 0x17B4A0u)) {
        return;
    }
    ctx->pc = 0x17B4A0u;
label_17b4a0:
    // 0x17b4a0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17b4a4: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x17b4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b4a8: 0x8c648b2c  lw          $a0, -0x74D4($v1)
    ctx->pc = 0x17b4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x17b4ac: 0xc064094  jal         func_190250
    ctx->pc = 0x17B4ACu;
    SET_GPR_U32(ctx, 31, 0x17B4B4u);
    ctx->pc = 0x17B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B4ACu;
    // 0x17b4b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190250u, 0x17B4ACu, 0x17B4B4u)) {
        return;
    }
    ctx->pc = 0x17B4B4u;
label_17b4b4:
    // 0x17b4b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x17B4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4BCu;
        // 0x17b4c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B4C4u;
    // 0x17b4c4: 0x0  nop
    ctx->pc = 0x17b4c4u;
    // NOP
    ctx->pc = 0x17b4c8u;
}
