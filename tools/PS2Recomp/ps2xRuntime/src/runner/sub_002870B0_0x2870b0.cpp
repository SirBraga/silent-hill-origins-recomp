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

// Function: sub_002870B0
// Address: 0x2870b0 - 0x2870e0
void sub_002870B0_0x2870b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002870B0_0x2870b0");
#endif

    ctx->pc = 0x2870b0u;

    // 0x2870b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2870b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2870b4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2870b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2870b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2870b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2870bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2870BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2870C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870BCu;
        // 0x2870c0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2870BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2870C4u;
    // 0x2870c4: 0x0  nop
    ctx->pc = 0x2870c4u;
    // NOP
    // 0x2870c8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2870c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x2870cc: 0x0  nop
    ctx->pc = 0x2870ccu;
    // NOP
    // 0x2870d0: 0xe4ac0000  swc1        $f12, 0x0($a1)
    ctx->pc = 0x2870d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2870d4: 0x0  nop
    ctx->pc = 0x2870d4u;
    // NOP
    // 0x2870d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2870d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2870dc: 0x0  nop
    ctx->pc = 0x2870dcu;
    // NOP
    ctx->pc = 0x2870e0u;
}
