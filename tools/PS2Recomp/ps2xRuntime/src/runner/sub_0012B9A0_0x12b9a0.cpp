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

// Function: sub_0012B9A0
// Address: 0x12b9a0 - 0x12b9d0
void sub_0012B9A0_0x12b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B9A0_0x12b9a0");
#endif

    ctx->pc = 0x12b9a0u;

    // 0x12b9a0: 0x8c820d50  lw          $v0, 0xD50($a0)
    ctx->pc = 0x12b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3408)));
    // 0x12b9a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B9A4u;
    {
        const bool branch_taken_0x12b9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b9a4) {
            ctx->pc = 0x12B9C4u;
            goto label_12b9c4;
        }
    }
    ctx->pc = 0x12B9ACu;
    // 0x12b9ac: 0x68822c07  ldl         $v0, 0x2C07($a0)
    ctx->pc = 0x12b9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12b9b0: 0x6c822c00  ldr         $v0, 0x2C00($a0)
    ctx->pc = 0x12b9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12b9b4: 0x8c832c08  lw          $v1, 0x2C08($a0)
    ctx->pc = 0x12b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11272)));
    // 0x12b9b8: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x12b9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b9bc: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x12b9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b9c0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_12b9c4:
    // 0x12b9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x12B9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B9CCu;
    // 0x12b9cc: 0x0  nop
    ctx->pc = 0x12b9ccu;
    // NOP
    ctx->pc = 0x12b9d0u;
}
