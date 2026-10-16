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

// Function: sub_0014EE08
// Address: 0x14ee08 - 0x14ee38
void sub_0014EE08_0x14ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EE08_0x14ee08");
#endif

    ctx->pc = 0x14ee08u;

    // 0x14ee08: 0x68820083  ldl         $v0, 0x83($a0)
    ctx->pc = 0x14ee08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14ee0c: 0x6c82007c  ldr         $v0, 0x7C($a0)
    ctx->pc = 0x14ee0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14ee10: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x14ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x14ee14: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x14ee14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ee18: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x14ee18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14ee1c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x14ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x14ee20: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x14ee20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ee24: 0x3e00008  jr          $ra
    ctx->pc = 0x14EE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE24u;
        // 0x14ee28: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EE2Cu;
    // 0x14ee2c: 0x0  nop
    ctx->pc = 0x14ee2cu;
    // NOP
    // 0x14ee30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14ee34: 0x0  nop
    ctx->pc = 0x14ee34u;
    // NOP
    ctx->pc = 0x14ee38u;
}
