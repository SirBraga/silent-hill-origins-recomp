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

// Function: sub_002ED0C8
// Address: 0x2ed0c8 - 0x2ed0e8
void sub_002ED0C8_0x2ed0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED0C8_0x2ed0c8");
#endif

    ctx->pc = 0x2ed0c8u;

    // 0x2ed0c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ed0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0cc: 0x94430058  lhu         $v1, 0x58($v0)
    ctx->pc = 0x2ed0ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2ed0d0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2ed0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2ed0d4: 0xa4430058  sh          $v1, 0x58($v0)
    ctx->pc = 0x2ed0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ed0d8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2ed0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0DCu;
        // 0x2ed0e0: 0xe4400084  swc1        $f0, 0x84($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED0E4u;
    // 0x2ed0e4: 0x0  nop
    ctx->pc = 0x2ed0e4u;
    // NOP
    ctx->pc = 0x2ed0e8u;
}
