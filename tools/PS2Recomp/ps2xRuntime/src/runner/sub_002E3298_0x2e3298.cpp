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

// Function: sub_002E3298
// Address: 0x2e3298 - 0x2e32b8
void sub_002E3298_0x2e3298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3298_0x2e3298");
#endif

    ctx->pc = 0x2e3298u;

    // 0x2e3298: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e3298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e329c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2e329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e32a0: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2e32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e32a4: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x2e32a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x2e32a8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2e32a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2e32ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E32ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E32B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32ACu;
        // 0x2e32b0: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E32ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E32B4u;
    // 0x2e32b4: 0x0  nop
    ctx->pc = 0x2e32b4u;
    // NOP
    ctx->pc = 0x2e32b8u;
}
