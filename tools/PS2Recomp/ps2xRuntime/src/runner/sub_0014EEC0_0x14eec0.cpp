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

// Function: sub_0014EEC0
// Address: 0x14eec0 - 0x14ef18
void sub_0014EEC0_0x14eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EEC0_0x14eec0");
#endif

    ctx->pc = 0x14eec0u;

    // 0x14eec0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14eec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14eec4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14eec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14eec8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x14eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14eecc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14eeccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14eed0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x14eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x14eed4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x14eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x14eed8: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x14eed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x14eedc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14eedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14eee0: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x14eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x14eee4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x14eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x14eee8: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x14eee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x14eeec: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x14eeecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x14eef0: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x14eef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x14eef4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x14eef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x14eef8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x14eef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x14eefc: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x14eefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x14ef00: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x14ef00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x14ef04: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x14ef04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x14ef08: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x14ef08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x14ef0c: 0x3e00008  jr          $ra
    ctx->pc = 0x14EF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF0Cu;
        // 0x14ef10: 0xe4a00034  swc1        $f0, 0x34($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EF14u;
    // 0x14ef14: 0x0  nop
    ctx->pc = 0x14ef14u;
    // NOP
    ctx->pc = 0x14ef18u;
}
