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

// Function: sub_0012B6F0
// Address: 0x12b6f0 - 0x12b718
void sub_0012B6F0_0x12b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B6F0_0x12b6f0");
#endif

    ctx->pc = 0x12b6f0u;

    // 0x12b6f0: 0x68822d07  ldl         $v0, 0x2D07($a0)
    ctx->pc = 0x12b6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12b6f4: 0x6c822d00  ldr         $v0, 0x2D00($a0)
    ctx->pc = 0x12b6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12b6f8: 0x8c832d08  lw          $v1, 0x2D08($a0)
    ctx->pc = 0x12b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11528)));
    // 0x12b6fc: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x12b6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b700: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x12b700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b704: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12b704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x12b708: 0x3e00008  jr          $ra
    ctx->pc = 0x12B708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B710u;
    // 0x12b710: 0xac822d10  sw          $v0, 0x2D10($a0)
    ctx->pc = 0x12b710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11536), GPR_U32(ctx, 2));
    // 0x12b714: 0x0  nop
    ctx->pc = 0x12b714u;
    // NOP
    ctx->pc = 0x12b718u;
}
