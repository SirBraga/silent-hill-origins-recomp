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

// Function: sub_0013BDE8
// Address: 0x13bde8 - 0x13be38
void sub_0013BDE8_0x13bde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BDE8_0x13bde8");
#endif

    ctx->pc = 0x13bde8u;

    // 0x13bde8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13bde8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bdec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bdf0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13bdf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bdf4: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x13bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x13bdf8: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x13bdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x13bdfc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x13bdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13be00: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x13be00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13be04: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x13be04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13be08: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x13be08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13be0c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x13be0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x13be10: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x13be10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x13be14: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x13be14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x13be18: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x13be18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x13be1c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x13be1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x13be20: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x13be20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x13be24: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x13be24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x13be28: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x13be28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x13be2c: 0x3e00008  jr          $ra
    ctx->pc = 0x13BE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE2Cu;
        // 0x13be30: 0xa0800034  sb          $zero, 0x34($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 52), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BE34u;
    // 0x13be34: 0x0  nop
    ctx->pc = 0x13be34u;
    // NOP
    ctx->pc = 0x13be38u;
}
