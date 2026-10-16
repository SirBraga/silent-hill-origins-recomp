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

// Function: sub_002ED270
// Address: 0x2ed270 - 0x2ed2a8
void sub_002ED270_0x2ed270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED270_0x2ed270");
#endif

    switch (ctx->pc) {
        case 0x2ed288u: goto label_2ed288;
        default: break;
    }

    ctx->pc = 0x2ed270u;

    // 0x2ed270: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ed270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed274: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x2ed274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2ed278: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2ed278u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ed27c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED27Cu;
        // 0x2ed280: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED284u;
    // 0x2ed284: 0x0  nop
    ctx->pc = 0x2ed284u;
    // NOP
label_2ed288:
    // 0x2ed288: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ed288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed28c: 0x94430058  lhu         $v1, 0x58($v0)
    ctx->pc = 0x2ed28cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2ed290: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2ed290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2ed294: 0xa4430058  sh          $v1, 0x58($v0)
    ctx->pc = 0x2ed294u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ed298: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2ed298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed29c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED29Cu;
        // 0x2ed2a0: 0xe4400080  swc1        $f0, 0x80($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED2A4u;
    // 0x2ed2a4: 0x0  nop
    ctx->pc = 0x2ed2a4u;
    // NOP
    ctx->pc = 0x2ed2a8u;
}
