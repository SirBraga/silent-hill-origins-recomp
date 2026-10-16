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

// Function: sub_002DC160
// Address: 0x2dc160 - 0x2dc1d8
void sub_002DC160_0x2dc160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC160_0x2dc160");
#endif

    ctx->pc = 0x2dc160u;

    // 0x2dc160: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC160u;
    {
        const bool branch_taken_0x2dc160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC160u;
        // 0x2dc164: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc160) {
            ctx->pc = 0x2DC194u;
            goto label_2dc194;
        }
    }
    ctx->pc = 0x2DC168u;
    // 0x2dc168: 0x244710d0  addiu       $a3, $v0, 0x10D0
    ctx->pc = 0x2dc168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x2dc16c: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x2dc16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2dc170: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x2dc170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2dc174: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x2dc174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2dc178: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x2dc178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2dc17c: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x2dc17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc180: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x2dc180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc184: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x2dc184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc188: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x2dc188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc18c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC18Cu;
        // 0x2dc190: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC194u;
label_2dc194:
    // 0x2dc194: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2dc194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x2dc198: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dc198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dc19c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x2dc19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x2dc1a0: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2dc1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2dc1a4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dc1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dc1a8: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2dc1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x2dc1ac: 0x2484c2b8  addiu       $a0, $a0, -0x3D48
    ctx->pc = 0x2dc1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951608));
    // 0x2dc1b0: 0x24a55218  addiu       $a1, $a1, 0x5218
    ctx->pc = 0x2dc1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21016));
    // 0x2dc1b4: 0x24c6c2d8  addiu       $a2, $a2, -0x3D28
    ctx->pc = 0x2dc1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951640));
    // 0x2dc1b8: 0x2442c2f8  addiu       $v0, $v0, -0x3D08
    ctx->pc = 0x2dc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951672));
    // 0x2dc1bc: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x2dc1bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7310DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310DCu, _value); } while (0);
    // 0x2dc1c0: 0xac640108  sw          $a0, 0x108($v1)
    ctx->pc = 0x2dc1c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7310D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310D0u, _value); } while (0);
    // 0x2dc1c4: 0xac65010c  sw          $a1, 0x10C($v1)
    ctx->pc = 0x2dc1c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7310D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310D4u, _value); } while (0);
    // 0x2dc1c8: 0xac660110  sw          $a2, 0x110($v1)
    ctx->pc = 0x2dc1c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7310D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7310D8u, _value); } while (0);
    // 0x2dc1cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC1D8u;
}
