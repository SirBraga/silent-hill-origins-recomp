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

// Function: sub_002E3238
// Address: 0x2e3238 - 0x2e3258
void sub_002E3238_0x2e3238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3238_0x2e3238");
#endif

    ctx->pc = 0x2e3238u;

    // 0x2e3238: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e3238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e323c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2e323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3240: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2e3240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e3244: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2e3244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2e3248: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x2e3248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x2e324c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E324Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E324Cu;
        // 0x2e3250: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E324Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3254u;
    // 0x2e3254: 0x0  nop
    ctx->pc = 0x2e3254u;
    // NOP
    ctx->pc = 0x2e3258u;
}
