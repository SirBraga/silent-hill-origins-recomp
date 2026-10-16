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

// Function: sub_002A9188
// Address: 0x2a9188 - 0x2a91e8
void sub_002A9188_0x2a9188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9188_0x2a9188");
#endif

    switch (ctx->pc) {
        case 0x2a91a0u: goto label_2a91a0;
        default: break;
    }

    ctx->pc = 0x2a9188u;

    // 0x2a9188: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a918c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a918cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9190: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2a9190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a9194: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2a9194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2a9198: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9198u;
        // 0x2a919c: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A91A0u;
label_2a91a0:
    // 0x2a91a0: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2a91a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a91a4: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2a91a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a91a8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2a91a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a91ac: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x2a91acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a91b0: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x2a91b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a91b4: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x2a91b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2a91b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a91b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a91bc: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x2a91bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x2a91c0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2a91c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a91c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a91c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a91c8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a91c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a91cc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2a91ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a91d0: 0xa4e40054  sh          $a0, 0x54($a3)
    ctx->pc = 0x2a91d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 84), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a91d4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x2a91d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2a91d8: 0xace30050  sw          $v1, 0x50($a3)
    ctx->pc = 0x2a91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 3));
    // 0x2a91dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A91DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A91DCu;
        // 0x2a91e0: 0xe4e00010  swc1        $f0, 0x10($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A91DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A91E4u;
    // 0x2a91e4: 0x0  nop
    ctx->pc = 0x2a91e4u;
    // NOP
    ctx->pc = 0x2a91e8u;
}
