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

// Function: sub_0014F138
// Address: 0x14f138 - 0x14f150
void sub_0014F138_0x14f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F138_0x14f138");
#endif

    ctx->pc = 0x14f138u;

    // 0x14f138: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x14f138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x14f13c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x14f13cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x14f140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14f140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f144: 0xac8500a0  sw          $a1, 0xA0($a0)
    ctx->pc = 0x14f144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 5));
    // 0x14f148: 0x3e00008  jr          $ra
    ctx->pc = 0x14F148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F148u;
        // 0x14f14c: 0xe4800138  swc1        $f0, 0x138($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F150u;
}
