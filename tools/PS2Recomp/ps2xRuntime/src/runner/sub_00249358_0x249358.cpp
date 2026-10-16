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

// Function: sub_00249358
// Address: 0x249358 - 0x2493a0
void sub_00249358_0x249358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249358_0x249358");
#endif

    ctx->pc = 0x249358u;

    // 0x249358: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x249358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x24935c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x24935cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x249360: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x249360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x249364: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x249364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x249368: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x249368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24936c: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24936Cu;
    {
        const bool branch_taken_0x24936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x249370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24936Cu;
        // 0x249370: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24936c) {
            ctx->pc = 0x24938Cu;
            goto label_24938c;
        }
    }
    ctx->pc = 0x249374u;
    // 0x249374: 0x6843ffff  ldl         $v1, -0x1($v0)
    ctx->pc = 0x249374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x249378: 0x6c43fff8  ldr         $v1, -0x8($v0)
    ctx->pc = 0x249378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24937c: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x24937cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249380: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x249380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x249384: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x249384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x249388: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x249388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_24938c:
    // 0x24938c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x24938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x249390: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x249390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x249394: 0x3e00008  jr          $ra
    ctx->pc = 0x249394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249394u;
        // 0x249398: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24939Cu;
    // 0x24939c: 0x0  nop
    ctx->pc = 0x24939cu;
    // NOP
    ctx->pc = 0x2493a0u;
}
