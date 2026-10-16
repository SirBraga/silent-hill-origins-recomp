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

// Function: sub_002B2AF8
// Address: 0x2b2af8 - 0x2b2b20
void sub_002B2AF8_0x2b2af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2AF8_0x2b2af8");
#endif

    ctx->pc = 0x2b2af8u;

    // 0x2b2af8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b2af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2afc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AFCu;
        // 0x2b2b00: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2B04u;
    // 0x2b2b04: 0x0  nop
    ctx->pc = 0x2b2b04u;
    // NOP
    // 0x2b2b08: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b2b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b2b0c: 0x0  nop
    ctx->pc = 0x2b2b0cu;
    // NOP
    // 0x2b2b10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b2b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b2b14: 0x0  nop
    ctx->pc = 0x2b2b14u;
    // NOP
    // 0x2b2b18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b2b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b2b1c: 0x0  nop
    ctx->pc = 0x2b2b1cu;
    // NOP
    ctx->pc = 0x2b2b20u;
}
