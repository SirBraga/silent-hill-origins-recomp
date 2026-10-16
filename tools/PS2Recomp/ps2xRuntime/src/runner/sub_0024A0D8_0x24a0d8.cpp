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

// Function: sub_0024A0D8
// Address: 0x24a0d8 - 0x24a120
void sub_0024A0D8_0x24a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A0D8_0x24a0d8");
#endif

    ctx->pc = 0x24a0d8u;

    // 0x24a0d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24a0dc: 0x8c633f58  lw          $v1, 0x3F58($v1)
    ctx->pc = 0x24a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F58u));
    // 0x24a0e0: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x24a0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x24a0e4: 0x24a50fc8  addiu       $a1, $a1, 0xFC8
    ctx->pc = 0x24a0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
    // 0x24a0e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24a0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a0ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24a0f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x24a0f4: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x24a0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x24a0f8: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x24a0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x24a0fc: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x24a0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24a100: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x24a100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24a104: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24a104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24a108: 0x8c633f58  lw          $v1, 0x3F58($v1)
    ctx->pc = 0x24a108u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F58u));
    // 0x24a10c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24a110: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x24a110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x24a114: 0x3e00008  jr          $ra
    ctx->pc = 0x24A114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A114u;
        // 0x24a118: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A11Cu;
    // 0x24a11c: 0x0  nop
    ctx->pc = 0x24a11cu;
    // NOP
    ctx->pc = 0x24a120u;
}
