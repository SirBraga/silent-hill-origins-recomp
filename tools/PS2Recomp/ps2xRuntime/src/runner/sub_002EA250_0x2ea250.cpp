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

// Function: sub_002EA250
// Address: 0x2ea250 - 0x2ea270
void sub_002EA250_0x2ea250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA250_0x2ea250");
#endif

    ctx->pc = 0x2ea250u;

    // 0x2ea250: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ea250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea254: 0xc4400f50  lwc1        $f0, 0xF50($v0)
    ctx->pc = 0x2ea254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea258: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x2ea258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x2ea25c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ea25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea260: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ea260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ea264: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA264u;
        // 0x2ea268: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA26Cu;
    // 0x2ea26c: 0x0  nop
    ctx->pc = 0x2ea26cu;
    // NOP
    ctx->pc = 0x2ea270u;
}
