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

// Function: sub_00287090
// Address: 0x287090 - 0x2870b0
void sub_00287090_0x287090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287090_0x287090");
#endif

    ctx->pc = 0x287090u;

    // 0x287090: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x287090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x287094: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x287094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x287098: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28709c: 0x3e00008  jr          $ra
    ctx->pc = 0x28709Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2870A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28709Cu;
        // 0x2870a0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28709Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2870A4u;
    // 0x2870a4: 0x0  nop
    ctx->pc = 0x2870a4u;
    // NOP
    // 0x2870a8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2870a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2870ac: 0x0  nop
    ctx->pc = 0x2870acu;
    // NOP
    ctx->pc = 0x2870b0u;
}
