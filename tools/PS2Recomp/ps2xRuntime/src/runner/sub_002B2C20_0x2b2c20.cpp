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

// Function: sub_002B2C20
// Address: 0x2b2c20 - 0x2b2ca0
void sub_002B2C20_0x2b2c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2C20_0x2b2c20");
#endif

    ctx->pc = 0x2b2c20u;

    // 0x2b2c20: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x2b2c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b2c24: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x2b2c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b2c28: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x2b2c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b2c2c: 0xb0830053  sdl         $v1, 0x53($a0)
    ctx->pc = 0x2b2c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2c30: 0xb483004c  sdr         $v1, 0x4C($a0)
    ctx->pc = 0x2b2c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b2c34: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x2b2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x2b2c38: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C38u;
        // 0x2b2c3c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2C40u;
    // 0x2b2c40: 0xac450044  sw          $a1, 0x44($v0)
    ctx->pc = 0x2b2c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 5));
    // 0x2b2c44: 0x0  nop
    ctx->pc = 0x2b2c44u;
    // NOP
    // 0x2b2c48: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2b2c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x2b2c4c: 0x0  nop
    ctx->pc = 0x2b2c4cu;
    // NOP
    // 0x2b2c50: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2b2c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x2b2c54: 0x0  nop
    ctx->pc = 0x2b2c54u;
    // NOP
    // 0x2b2c58: 0xe44c005c  swc1        $f12, 0x5C($v0)
    ctx->pc = 0x2b2c58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x2b2c5c: 0x0  nop
    ctx->pc = 0x2b2c5cu;
    // NOP
    // 0x2b2c60: 0xe44c0060  swc1        $f12, 0x60($v0)
    ctx->pc = 0x2b2c60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b2c64: 0x0  nop
    ctx->pc = 0x2b2c64u;
    // NOP
    // 0x2b2c68: 0xe44c000c  swc1        $f12, 0xC($v0)
    ctx->pc = 0x2b2c68u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2b2c6c: 0x0  nop
    ctx->pc = 0x2b2c6cu;
    // NOP
    // 0x2b2c70: 0xe44c0014  swc1        $f12, 0x14($v0)
    ctx->pc = 0x2b2c70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2b2c74: 0x0  nop
    ctx->pc = 0x2b2c74u;
    // NOP
    // 0x2b2c78: 0xe44c0010  swc1        $f12, 0x10($v0)
    ctx->pc = 0x2b2c78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2b2c7c: 0x0  nop
    ctx->pc = 0x2b2c7cu;
    // NOP
    // 0x2b2c80: 0xe44c0018  swc1        $f12, 0x18($v0)
    ctx->pc = 0x2b2c80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2b2c84: 0x0  nop
    ctx->pc = 0x2b2c84u;
    // NOP
    // 0x2b2c88: 0xac450404  sw          $a1, 0x404($v0)
    ctx->pc = 0x2b2c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 5));
    // 0x2b2c8c: 0x0  nop
    ctx->pc = 0x2b2c8cu;
    // NOP
    // 0x2b2c90: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b2c94: 0x0  nop
    ctx->pc = 0x2b2c94u;
    // NOP
    // 0x2b2c98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b2c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b2c9c: 0x0  nop
    ctx->pc = 0x2b2c9cu;
    // NOP
    ctx->pc = 0x2b2ca0u;
}
