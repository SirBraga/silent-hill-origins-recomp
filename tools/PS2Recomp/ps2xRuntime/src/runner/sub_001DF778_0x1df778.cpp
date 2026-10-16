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

// Function: sub_001DF778
// Address: 0x1df778 - 0x1df7d8
void sub_001DF778_0x1df778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF778_0x1df778");
#endif

    ctx->pc = 0x1df778u;

    // 0x1df778: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1df778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1df77c: 0x8c62e6c8  lw          $v0, -0x1938($v1)
    ctx->pc = 0x1df77cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E6C8u));
    // 0x1df780: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DF780u;
    {
        const bool branch_taken_0x1df780 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1DF784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF780u;
        // 0x1df784: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df780) {
            ctx->pc = 0x1DF7CCu;
            goto label_1df7cc;
        }
    }
    ctx->pc = 0x1DF788u;
    // 0x1df788: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1df788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1df78c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1df78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1df790: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1df790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1df794: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1df794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1df798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1df798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df79c: 0x8c62e6c8  lw          $v0, -0x1938($v1)
    ctx->pc = 0x1df79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960840)));
    // 0x1df7a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1df7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1df7a4: 0x24891c60  addiu       $t1, $a0, 0x1C60
    ctx->pc = 0x1df7a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 7264));
    // 0x1df7a8: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x1df7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1df7ac: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x1df7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1df7b0: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x1df7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6A1C68u));
    // 0x1df7b4: 0xb046000b  sdl         $a2, 0xB($v0)
    ctx->pc = 0x1df7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df7b8: 0xb4460004  sdr         $a2, 0x4($v0)
    ctx->pc = 0x1df7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df7bc: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1df7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1df7c0: 0x8c63e6c8  lw          $v1, -0x1938($v1)
    ctx->pc = 0x1df7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960840)));
    // 0x1df7c4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1df7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1df7c8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1df7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_1df7cc:
    // 0x1df7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7CCu;
        // 0x1df7d0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF7D4u;
    // 0x1df7d4: 0x0  nop
    ctx->pc = 0x1df7d4u;
    // NOP
    ctx->pc = 0x1df7d8u;
}
