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

// Function: sub_001D7560
// Address: 0x1d7560 - 0x1d7588
void sub_001D7560_0x1d7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7560_0x1d7560");
#endif

    ctx->pc = 0x1d7560u;

    // 0x1d7560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d7560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d7564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d7564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7568: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d7568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d756c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1d756cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1d7570: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d7570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d7574: 0xe4609cdc  swc1        $f0, -0x6324($v1)
    ctx->pc = 0x1d7574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x339CDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339CDCu, _value); } while (0); }
    // 0x1d7578: 0xe4409cd0  swc1        $f0, -0x6330($v0)
    ctx->pc = 0x1d7578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x339CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339CD0u, _value); } while (0); }
    // 0x1d757c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D757Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D757Cu;
        // 0x1d7580: 0xe4809ccc  swc1        $f0, -0x6334($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294941900), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D757Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7584u;
    // 0x1d7584: 0x0  nop
    ctx->pc = 0x1d7584u;
    // NOP
    ctx->pc = 0x1d7588u;
}
