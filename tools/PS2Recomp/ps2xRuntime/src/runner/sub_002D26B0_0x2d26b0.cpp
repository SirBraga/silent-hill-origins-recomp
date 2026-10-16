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

// Function: sub_002D26B0
// Address: 0x2d26b0 - 0x2d2700
void sub_002D26B0_0x2d26b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D26B0_0x2d26b0");
#endif

    switch (ctx->pc) {
        case 0x2d26c4u: goto label_2d26c4;
        case 0x2d26d0u: goto label_2d26d0;
        default: break;
    }

    ctx->pc = 0x2d26b0u;

    // 0x2d26b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d26b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d26b4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2d26b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d26b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d26b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d26bc: 0xc0b44ac  jal         func_2D12B0
    ctx->pc = 0x2D26BCu;
    SET_GPR_U32(ctx, 31, 0x2D26C4u);
    ctx->pc = 0x2D26C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D26BCu;
    // 0x2d26c0: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D12B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D12B0u, 0x2D26BCu, 0x2D26C4u)) {
        return;
    }
    ctx->pc = 0x2D26C4u;
label_2d26c4:
    // 0x2d26c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d26c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d26c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D26C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D26C8u;
        // 0x2d26cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D26C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D26D0u;
label_2d26d0:
    // 0x2d26d0: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2d26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2d26d4: 0x68640043  ldl         $a0, 0x43($v1)
    ctx->pc = 0x2d26d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d26d8: 0x6c64003c  ldr         $a0, 0x3C($v1)
    ctx->pc = 0x2d26d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d26dc: 0x6866004b  ldl         $a2, 0x4B($v1)
    ctx->pc = 0x2d26dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d26e0: 0x6c660044  ldr         $a2, 0x44($v1)
    ctx->pc = 0x2d26e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d26e4: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x2d26e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d26e8: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x2d26e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d26ec: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x2d26ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d26f0: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x2d26f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d26f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D26F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D26F4u;
        // 0x2d26f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D26F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D26FCu;
    // 0x2d26fc: 0x0  nop
    ctx->pc = 0x2d26fcu;
    // NOP
    ctx->pc = 0x2d2700u;
}
