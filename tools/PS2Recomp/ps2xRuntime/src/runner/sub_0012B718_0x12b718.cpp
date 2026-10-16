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

// Function: sub_0012B718
// Address: 0x12b718 - 0x12b730
void sub_0012B718_0x12b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B718_0x12b718");
#endif

    ctx->pc = 0x12b718u;

    // 0x12b718: 0x8c822850  lw          $v0, 0x2850($a0)
    ctx->pc = 0x12b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10320)));
    // 0x12b71c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x12b71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12b720: 0x3e00008  jr          $ra
    ctx->pc = 0x12B720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B720u;
        // 0x12b724: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B728u;
    // 0x12b728: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x12b728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x12b72c: 0x0  nop
    ctx->pc = 0x12b72cu;
    // NOP
    ctx->pc = 0x12b730u;
}
